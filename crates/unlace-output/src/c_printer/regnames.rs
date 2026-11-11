//! c_printer: regnames.

use super::*;

pub(super) fn varnode_location_comment(vn: &Varnode, frame_size: Option<u64>) -> Option<String> {
    match vn.space {
        SpaceId::Register => Some(x86_64_register_name(vn.offset, vn.size).to_string()),
        SpaceId::Stack => {
            let rsp_off = vn.offset;
            match frame_size {
                Some(fs) if fs > rsp_off => {
                    Some(format!("[rsp+{:x}h] [rbp-{:x}h]", rsp_off, fs - rsp_off))
                }
                _ => Some(format!("[rsp+{:x}h]", rsp_off)),
            }
        }
        SpaceId::Unique => Some("temp".to_string()),
        _ => None,
    }
}

/// Map a register-space (offset, size) pair to a human-readable x86-64 name.
///
/// Uses the same layout as `unlace-lift-x86/src/register_file.rs`.
pub(super) fn x86_64_register_name(offset: u64, size: u8) -> &'static str {
    // Vector register file: base 0x400, stride 64 (ZMM-wide).
    // XMM/YMM/ZMM of the same index share a base offset.
    const VEC_BASE: u64 = 0x400;
    const VEC_STRIDE: u64 = 64;

    if offset >= VEC_BASE {
        let idx = (offset - VEC_BASE) / VEC_STRIDE;
        if idx <= 31 && (offset - VEC_BASE).is_multiple_of(VEC_STRIDE) {
            // 64-byte writes are ZMM (AVX-512). ZMM16..ZMM31 only exist
            // in the 512-bit form; they have no XMM/YMM alias.
            if size > 32 {
                return match idx {
                    0 => "zmm0",
                    1 => "zmm1",
                    2 => "zmm2",
                    3 => "zmm3",
                    4 => "zmm4",
                    5 => "zmm5",
                    6 => "zmm6",
                    7 => "zmm7",
                    8 => "zmm8",
                    9 => "zmm9",
                    10 => "zmm10",
                    11 => "zmm11",
                    12 => "zmm12",
                    13 => "zmm13",
                    14 => "zmm14",
                    15 => "zmm15",
                    16 => "zmm16",
                    17 => "zmm17",
                    18 => "zmm18",
                    19 => "zmm19",
                    20 => "zmm20",
                    21 => "zmm21",
                    22 => "zmm22",
                    23 => "zmm23",
                    24 => "zmm24",
                    25 => "zmm25",
                    26 => "zmm26",
                    27 => "zmm27",
                    28 => "zmm28",
                    29 => "zmm29",
                    30 => "zmm30",
                    31 => "zmm31",
                    _ => "zmm?",
                };
            }
            // XMM/YMM only meaningful for idx 0..15.
            if idx <= 15 {
                if size <= 16 {
                    return match idx {
                        0 => "xmm0",
                        1 => "xmm1",
                        2 => "xmm2",
                        3 => "xmm3",
                        4 => "xmm4",
                        5 => "xmm5",
                        6 => "xmm6",
                        7 => "xmm7",
                        8 => "xmm8",
                        9 => "xmm9",
                        10 => "xmm10",
                        11 => "xmm11",
                        12 => "xmm12",
                        13 => "xmm13",
                        14 => "xmm14",
                        15 => "xmm15",
                        _ => "xmm?",
                    };
                } else {
                    return match idx {
                        0 => "ymm0",
                        1 => "ymm1",
                        2 => "ymm2",
                        3 => "ymm3",
                        4 => "ymm4",
                        5 => "ymm5",
                        6 => "ymm6",
                        7 => "ymm7",
                        8 => "ymm8",
                        9 => "ymm9",
                        10 => "ymm10",
                        11 => "ymm11",
                        12 => "ymm12",
                        13 => "ymm13",
                        14 => "ymm14",
                        15 => "ymm15",
                        _ => "ymm?",
                    };
                }
            }
        }
    }

    // RFLAGS individual bits at 256+
    match offset {
        256 => return "CF",
        257 => return "PF",
        258 => return "AF",
        259 => return "ZF",
        260 => return "SF",
        261 => return "OF",
        _ => {}
    }

    // General-purpose registers: offset → (8-byte name, 4-byte, 2-byte, 1-byte)
    match (offset, size) {
        (0, 8) => "rax",
        (0, 4) => "eax",
        (0, 2) => "ax",
        (0, 1) => "al",
        (1, 1) => "ah",
        (8, 8) => "rcx",
        (8, 4) => "ecx",
        (8, 2) => "cx",
        (8, 1) => "cl",
        (9, 1) => "ch",
        (16, 8) => "rdx",
        (16, 4) => "edx",
        (16, 2) => "dx",
        (16, 1) => "dl",
        (17, 1) => "dh",
        (24, 8) => "rbx",
        (24, 4) => "ebx",
        (24, 2) => "bx",
        (24, 1) => "bl",
        (25, 1) => "bh",
        (32, 8) => "rsp",
        (32, 4) => "esp",
        (32, 2) => "sp",
        (32, 1) => "spl",
        (40, 8) => "rbp",
        (40, 4) => "ebp",
        (40, 2) => "bp",
        (40, 1) => "bpl",
        (48, 8) => "rsi",
        (48, 4) => "esi",
        (48, 2) => "si",
        (48, 1) => "sil",
        (56, 8) => "rdi",
        (56, 4) => "edi",
        (56, 2) => "di",
        (56, 1) => "dil",
        (64, 8) => "r8",
        (64, 4) => "r8d",
        (64, 2) => "r8w",
        (64, 1) => "r8b",
        (72, 8) => "r9",
        (72, 4) => "r9d",
        (72, 2) => "r9w",
        (72, 1) => "r9b",
        (80, 8) => "r10",
        (80, 4) => "r10d",
        (80, 2) => "r10w",
        (80, 1) => "r10b",
        (88, 8) => "r11",
        (88, 4) => "r11d",
        (88, 2) => "r11w",
        (88, 1) => "r11b",
        (96, 8) => "r12",
        (96, 4) => "r12d",
        (96, 2) => "r12w",
        (96, 1) => "r12b",
        (104, 8) => "r13",
        (104, 4) => "r13d",
        (104, 2) => "r13w",
        (104, 1) => "r13b",
        (112, 8) => "r14",
        (112, 4) => "r14d",
        (112, 2) => "r14w",
        (112, 1) => "r14b",
        (120, 8) => "r15",
        (120, 4) => "r15d",
        (120, 2) => "r15w",
        (120, 1) => "r15b",
        (128, 8) => "r16",
        (128, 4) => "r16d",
        (128, 2) => "r16w",
        (128, 1) => "r16b",
        (136, 8) => "r17",
        (136, 4) => "r17d",
        (136, 2) => "r17w",
        (136, 1) => "r17b",
        (144, 8) => "r18",
        (144, 4) => "r18d",
        (144, 2) => "r18w",
        (144, 1) => "r18b",
        (152, 8) => "r19",
        (152, 4) => "r19d",
        (152, 2) => "r19w",
        (152, 1) => "r19b",
        (160, 8) => "r20",
        (160, 4) => "r20d",
        (160, 2) => "r20w",
        (160, 1) => "r20b",
        (168, 8) => "r21",
        (168, 4) => "r21d",
        (168, 2) => "r21w",
        (168, 1) => "r21b",
        (176, 8) => "r22",
        (176, 4) => "r22d",
        (176, 2) => "r22w",
        (176, 1) => "r22b",
        (184, 8) => "r23",
        (184, 4) => "r23d",
        (184, 2) => "r23w",
        (184, 1) => "r23b",
        (192, 8) => "r24",
        (192, 4) => "r24d",
        (192, 2) => "r24w",
        (192, 1) => "r24b",
        (200, 8) => "r25",
        (200, 4) => "r25d",
        (200, 2) => "r25w",
        (200, 1) => "r25b",
        (208, 8) => "r26",
        (208, 4) => "r26d",
        (208, 2) => "r26w",
        (208, 1) => "r26b",
        (216, 8) => "r27",
        (216, 4) => "r27d",
        (216, 2) => "r27w",
        (216, 1) => "r27b",
        (224, 8) => "r28",
        (224, 4) => "r28d",
        (224, 2) => "r28w",
        (224, 1) => "r28b",
        (232, 8) => "r29",
        (232, 4) => "r29d",
        (232, 2) => "r29w",
        (232, 1) => "r29b",
        (240, 8) => "r30",
        (240, 4) => "r30d",
        (240, 2) => "r30w",
        (240, 1) => "r30b",
        (248, 8) => "r31",
        (248, 4) => "r31d",
        (248, 2) => "r31w",
        (248, 1) => "r31b",
        (0x288, 8) => "rip",
        (0x288, 4) => "eip",
        _ => "reg?",
    }
}
