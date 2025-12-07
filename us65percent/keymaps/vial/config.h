#pragma once

// ★既存：絶対残す（これが変わると .vil 互換が怪しくなる）
#define VIAL_KEYBOARD_UID {0xC3, 0x0A, 0x6F, 0x29, 0xC5, 0x45, 0xBE, 0xB7}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// ★追加：希望の標準設定
#define DYNAMIC_KEYMAP_LAYER_COUNT 7
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define VIAL_TAP_DANCE_ENTRIES 32

// ★任意：長めのマクロを多用するなら
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 6000
