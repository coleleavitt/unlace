use unlace_ir::{SpaceId, Varnode};

// x86-64 register offsets in the Register space.
// Each 64-bit GP register occupies 8 bytes at its offset.
pub const RAX: u64 = 0;
pub const RCX: u64 = 8;
pub const RDX: u64 = 16;
pub const RBX: u64 = 24;
pub const RSP: u64 = 32;
pub const RBP: u64 = 40;
pub const RSI: u64 = 48;
pub const RDI: u64 = 56;
pub const R8: u64 = 64;
pub const R9: u64 = 72;
pub const R10: u64 = 80;
pub const R11: u64 = 88;
pub const R12: u64 = 96;
pub const R13: u64 = 104;
pub const R14: u64 = 112;
pub const R15: u64 = 120;

// Intel APX (Advanced Performance Extensions) extends the GP register set to
// 32 architectural registers. R16..R31 use the natural 8-byte GP stride after
// R15. RIP lives in a separate slot below the x87/vector regions so it cannot
// alias R16.
pub const R16: u64 = 128;
pub const R17: u64 = 136;
pub const R18: u64 = 144;
pub const R19: u64 = 152;
pub const R20: u64 = 160;
pub const R21: u64 = 168;
pub const R22: u64 = 176;
pub const R23: u64 = 184;
pub const R24: u64 = 192;
pub const R25: u64 = 200;
pub const R26: u64 = 208;
pub const R27: u64 = 216;
pub const R28: u64 = 224;
pub const R29: u64 = 232;
pub const R30: u64 = 240;
pub const R31: u64 = 248;

pub const RIP: u64 = 0x288;

// RFLAGS individual bits at offsets 256+.
pub const CF: u64 = 256;
pub const PF: u64 = 257;
pub const AF: u64 = 258;
pub const ZF: u64 = 259;
pub const SF: u64 = 260;
pub const OF: u64 = 261;

// ── x87 FPU stack registers ───────────────────────────────────────────
//
// `ST(0)..ST(7)` are 80-bit extended-precision floats. We pack each one into
// a 16-byte slot starting at `FPU_BASE` so the offsets remain 16-byte aligned
// and don't collide with the GP/flag region above (highest used flag is OF
// at offset 261).
const FPU_BASE: u64 = 0x300;

/// Offset of GP register `index` (0..31), including APX EGPRs R16..R31.
pub const fn egpr_offset(index: u8) -> u64 {
    (index as u64) * 8
}

const FPU_STRIDE: u64 = 16;

const fn fpu_offset(index: u64) -> u64 {
    FPU_BASE + index * FPU_STRIDE
}

pub const ST0: u64 = fpu_offset(0);
pub const ST1: u64 = fpu_offset(1);
pub const ST2: u64 = fpu_offset(2);
pub const ST3: u64 = fpu_offset(3);
pub const ST4: u64 = fpu_offset(4);
pub const ST5: u64 = fpu_offset(5);
pub const ST6: u64 = fpu_offset(6);
pub const ST7: u64 = fpu_offset(7);

/// Returns a 10-byte (80-bit extended) varnode for FPU stack register `ST(i)`.
///
/// Panics if `i >= 8`.
pub fn st_reg(i: u64) -> Varnode {
    assert!(i < 8, "x87 stack register index out of range: {i}");
    Varnode::new(SpaceId::Register, fpu_offset(i), 10)
}

// ── SSE/AVX/AVX-512 vector registers ──────────────────────────────────
//
// Layout: base offset 0x400, stride 64 bytes per register slot (ZMM width).
//   XMMn  at  0x400 + n * 64, size 16 (lower 128 bits of ZMMn).
//   YMMn  at  0x400 + n * 64, size 32 (lower 256 bits of ZMMn).
//   ZMMn  at  0x400 + n * 64, size 64 (full 512-bit AVX-512 register).
//
// The 64-byte stride guarantees that every consecutive ZMM slot occupies
// disjoint bytes, while XMM/YMM/ZMM of the same index share a base
// offset so the byte-range aliasing predicate in `unlace-ir::reg_alias`
// recognises the subset relation automatically.

/// Base offset for the vector register file (XMM/YMM/ZMM).
const VEC_BASE: u64 = 0x400;
/// Stride between consecutive vector register slots (64 bytes = ZMM width).
const VEC_STRIDE: u64 = 64;

const fn vec_offset(index: u64) -> u64 {
    VEC_BASE + index * VEC_STRIDE
}

// ── AVX-512 opmask registers (K0..K7) ─────────────────────────────────
//
// 64-bit mask registers stored above the vector region. They are
// independent of XMM/YMM/ZMM bits, so they get their own block.
const K_BASE: u64 = VEC_BASE + 32 * VEC_STRIDE; // 0x400 + 0x800 = 0xC00
const K_STRIDE: u64 = 8;

const fn k_offset(index: u64) -> u64 {
    K_BASE + index * K_STRIDE
}

pub const XMM0: u64 = vec_offset(0);
pub const XMM1: u64 = vec_offset(1);
pub const XMM2: u64 = vec_offset(2);
pub const XMM3: u64 = vec_offset(3);
pub const XMM4: u64 = vec_offset(4);
pub const XMM5: u64 = vec_offset(5);
pub const XMM6: u64 = vec_offset(6);
pub const XMM7: u64 = vec_offset(7);
pub const XMM8: u64 = vec_offset(8);
pub const XMM9: u64 = vec_offset(9);
pub const XMM10: u64 = vec_offset(10);
pub const XMM11: u64 = vec_offset(11);
pub const XMM12: u64 = vec_offset(12);
pub const XMM13: u64 = vec_offset(13);
pub const XMM14: u64 = vec_offset(14);
pub const XMM15: u64 = vec_offset(15);

pub const YMM0: u64 = vec_offset(0);
pub const YMM1: u64 = vec_offset(1);
pub const YMM2: u64 = vec_offset(2);
pub const YMM3: u64 = vec_offset(3);
pub const YMM4: u64 = vec_offset(4);
pub const YMM5: u64 = vec_offset(5);
pub const YMM6: u64 = vec_offset(6);
pub const YMM7: u64 = vec_offset(7);
pub const YMM8: u64 = vec_offset(8);
pub const YMM9: u64 = vec_offset(9);
pub const YMM10: u64 = vec_offset(10);
pub const YMM11: u64 = vec_offset(11);
pub const YMM12: u64 = vec_offset(12);
pub const YMM13: u64 = vec_offset(13);
pub const YMM14: u64 = vec_offset(14);
pub const YMM15: u64 = vec_offset(15);

// ── ZMM0..ZMM31 (512-bit AVX-512) ─────────────────────────────────────
//
// `ZMMn` for n in 0..16 shares a base offset with `YMMn` / `XMMn` —
// the only distinguishing feature is the 64-byte varnode size, which
// lets the SSA/alias machinery realise that a ZMM write subsumes the
// matching YMM/XMM lane. `ZMM16..ZMM31` are EVEX-only and have no
// XMM/YMM alias of their own.
pub const ZMM0: u64 = vec_offset(0);
pub const ZMM1: u64 = vec_offset(1);
pub const ZMM2: u64 = vec_offset(2);
pub const ZMM3: u64 = vec_offset(3);
pub const ZMM4: u64 = vec_offset(4);
pub const ZMM5: u64 = vec_offset(5);
pub const ZMM6: u64 = vec_offset(6);
pub const ZMM7: u64 = vec_offset(7);
pub const ZMM8: u64 = vec_offset(8);
pub const ZMM9: u64 = vec_offset(9);
pub const ZMM10: u64 = vec_offset(10);
pub const ZMM11: u64 = vec_offset(11);
pub const ZMM12: u64 = vec_offset(12);
pub const ZMM13: u64 = vec_offset(13);
pub const ZMM14: u64 = vec_offset(14);
pub const ZMM15: u64 = vec_offset(15);
pub const ZMM16: u64 = vec_offset(16);
pub const ZMM17: u64 = vec_offset(17);
pub const ZMM18: u64 = vec_offset(18);
pub const ZMM19: u64 = vec_offset(19);
pub const ZMM20: u64 = vec_offset(20);
pub const ZMM21: u64 = vec_offset(21);
pub const ZMM22: u64 = vec_offset(22);
pub const ZMM23: u64 = vec_offset(23);
pub const ZMM24: u64 = vec_offset(24);
pub const ZMM25: u64 = vec_offset(25);
pub const ZMM26: u64 = vec_offset(26);
pub const ZMM27: u64 = vec_offset(27);
pub const ZMM28: u64 = vec_offset(28);
pub const ZMM29: u64 = vec_offset(29);
pub const ZMM30: u64 = vec_offset(30);
pub const ZMM31: u64 = vec_offset(31);

// ── AVX-512 mask registers (K0..K7) ───────────────────────────────────
pub const K0: u64 = k_offset(0);
pub const K1: u64 = k_offset(1);
pub const K2: u64 = k_offset(2);
pub const K3: u64 = k_offset(3);
pub const K4: u64 = k_offset(4);
pub const K5: u64 = k_offset(5);
pub const K6: u64 = k_offset(6);
pub const K7: u64 = k_offset(7);

// ── Intel AMX tile registers (TMM0..TMM7) ───────────────────────────────
//
// AMX architectural tile registers can each hold up to 1 KiB. The current IR
// stores varnode sizes in u8, so TMM_SIZE uses u8::MAX as a conservative
// opaque tile-register width while preserving distinct 1 KiB register slots.
pub const TMM_SIZE: u8 = u8::MAX;
const TMM_BASE: u64 = K_BASE + 8 * K_STRIDE; // 0xC40
const TMM_STRIDE: u64 = 1024;

const fn tmm_offset(index: u64) -> u64 {
    TMM_BASE + index * TMM_STRIDE
}

pub const TMM0: u64 = tmm_offset(0);
pub const TMM1: u64 = tmm_offset(1);
pub const TMM2: u64 = tmm_offset(2);
pub const TMM3: u64 = tmm_offset(3);
pub const TMM4: u64 = tmm_offset(4);
pub const TMM5: u64 = tmm_offset(5);
pub const TMM6: u64 = tmm_offset(6);
pub const TMM7: u64 = tmm_offset(7);

/// 64-byte ZMM varnode constructor (AVX-512).
pub fn reg512(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 64)
}

pub fn reg1024(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, TMM_SIZE)
}

pub fn reg256(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 32)
}

pub fn reg128(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 16)
}

pub fn reg64(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 8)
}

pub fn reg32(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 4)
}

pub fn reg16(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 2)
}

pub fn reg8(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 1)
}

pub fn flag_vn(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 1)
}

use unlace_ir::{RegisterDef, RegisterFile};

pub fn x86_64_register_file() -> RegisterFile {
    RegisterFile {
        registers: vec![
            RegisterDef {
                name: "RAX",
                varnode: reg64(RAX),
            },
            RegisterDef {
                name: "RCX",
                varnode: reg64(RCX),
            },
            RegisterDef {
                name: "RDX",
                varnode: reg64(RDX),
            },
            RegisterDef {
                name: "RBX",
                varnode: reg64(RBX),
            },
            RegisterDef {
                name: "RSP",
                varnode: reg64(RSP),
            },
            RegisterDef {
                name: "RBP",
                varnode: reg64(RBP),
            },
            RegisterDef {
                name: "RSI",
                varnode: reg64(RSI),
            },
            RegisterDef {
                name: "RDI",
                varnode: reg64(RDI),
            },
            RegisterDef {
                name: "R8",
                varnode: reg64(R8),
            },
            RegisterDef {
                name: "R9",
                varnode: reg64(R9),
            },
            RegisterDef {
                name: "R10",
                varnode: reg64(R10),
            },
            RegisterDef {
                name: "R11",
                varnode: reg64(R11),
            },
            RegisterDef {
                name: "R12",
                varnode: reg64(R12),
            },
            RegisterDef {
                name: "R13",
                varnode: reg64(R13),
            },
            RegisterDef {
                name: "R14",
                varnode: reg64(R14),
            },
            RegisterDef {
                name: "R15",
                varnode: reg64(R15),
            },
            RegisterDef {
                name: "R16",
                varnode: reg64(R16),
            },
            RegisterDef {
                name: "R17",
                varnode: reg64(R17),
            },
            RegisterDef {
                name: "R18",
                varnode: reg64(R18),
            },
            RegisterDef {
                name: "R19",
                varnode: reg64(R19),
            },
            RegisterDef {
                name: "R20",
                varnode: reg64(R20),
            },
            RegisterDef {
                name: "R21",
                varnode: reg64(R21),
            },
            RegisterDef {
                name: "R22",
                varnode: reg64(R22),
            },
            RegisterDef {
                name: "R23",
                varnode: reg64(R23),
            },
            RegisterDef {
                name: "R24",
                varnode: reg64(R24),
            },
            RegisterDef {
                name: "R25",
                varnode: reg64(R25),
            },
            RegisterDef {
                name: "R26",
                varnode: reg64(R26),
            },
            RegisterDef {
                name: "R27",
                varnode: reg64(R27),
            },
            RegisterDef {
                name: "R28",
                varnode: reg64(R28),
            },
            RegisterDef {
                name: "R29",
                varnode: reg64(R29),
            },
            RegisterDef {
                name: "R30",
                varnode: reg64(R30),
            },
            RegisterDef {
                name: "R31",
                varnode: reg64(R31),
            },
            RegisterDef {
                name: "RIP",
                varnode: reg64(RIP),
            },
            RegisterDef {
                name: "EAX",
                varnode: reg32(RAX),
            },
            RegisterDef {
                name: "ECX",
                varnode: reg32(RCX),
            },
            RegisterDef {
                name: "EDX",
                varnode: reg32(RDX),
            },
            RegisterDef {
                name: "EBX",
                varnode: reg32(RBX),
            },
            RegisterDef {
                name: "ESP",
                varnode: reg32(RSP),
            },
            RegisterDef {
                name: "EBP",
                varnode: reg32(RBP),
            },
            RegisterDef {
                name: "ESI",
                varnode: reg32(RSI),
            },
            RegisterDef {
                name: "EDI",
                varnode: reg32(RDI),
            },
            RegisterDef {
                name: "CF",
                varnode: flag_vn(CF),
            },
            RegisterDef {
                name: "PF",
                varnode: flag_vn(PF),
            },
            RegisterDef {
                name: "AF",
                varnode: flag_vn(AF),
            },
            RegisterDef {
                name: "ZF",
                varnode: flag_vn(ZF),
            },
            RegisterDef {
                name: "SF",
                varnode: flag_vn(SF),
            },
            RegisterDef {
                name: "OF",
                varnode: flag_vn(OF),
            },
            // XMM0-XMM15 (128-bit SSE)
            RegisterDef {
                name: "XMM0",
                varnode: reg128(XMM0),
            },
            RegisterDef {
                name: "XMM1",
                varnode: reg128(XMM1),
            },
            RegisterDef {
                name: "XMM2",
                varnode: reg128(XMM2),
            },
            RegisterDef {
                name: "XMM3",
                varnode: reg128(XMM3),
            },
            RegisterDef {
                name: "XMM4",
                varnode: reg128(XMM4),
            },
            RegisterDef {
                name: "XMM5",
                varnode: reg128(XMM5),
            },
            RegisterDef {
                name: "XMM6",
                varnode: reg128(XMM6),
            },
            RegisterDef {
                name: "XMM7",
                varnode: reg128(XMM7),
            },
            RegisterDef {
                name: "XMM8",
                varnode: reg128(XMM8),
            },
            RegisterDef {
                name: "XMM9",
                varnode: reg128(XMM9),
            },
            RegisterDef {
                name: "XMM10",
                varnode: reg128(XMM10),
            },
            RegisterDef {
                name: "XMM11",
                varnode: reg128(XMM11),
            },
            RegisterDef {
                name: "XMM12",
                varnode: reg128(XMM12),
            },
            RegisterDef {
                name: "XMM13",
                varnode: reg128(XMM13),
            },
            RegisterDef {
                name: "XMM14",
                varnode: reg128(XMM14),
            },
            RegisterDef {
                name: "XMM15",
                varnode: reg128(XMM15),
            },
            // YMM0-YMM15 (256-bit AVX, lower 128 bits alias XMM)
            RegisterDef {
                name: "YMM0",
                varnode: reg256(YMM0),
            },
            RegisterDef {
                name: "YMM1",
                varnode: reg256(YMM1),
            },
            RegisterDef {
                name: "YMM2",
                varnode: reg256(YMM2),
            },
            RegisterDef {
                name: "YMM3",
                varnode: reg256(YMM3),
            },
            RegisterDef {
                name: "YMM4",
                varnode: reg256(YMM4),
            },
            RegisterDef {
                name: "YMM5",
                varnode: reg256(YMM5),
            },
            RegisterDef {
                name: "YMM6",
                varnode: reg256(YMM6),
            },
            RegisterDef {
                name: "YMM7",
                varnode: reg256(YMM7),
            },
            RegisterDef {
                name: "YMM8",
                varnode: reg256(YMM8),
            },
            RegisterDef {
                name: "YMM9",
                varnode: reg256(YMM9),
            },
            RegisterDef {
                name: "YMM10",
                varnode: reg256(YMM10),
            },
            RegisterDef {
                name: "YMM11",
                varnode: reg256(YMM11),
            },
            RegisterDef {
                name: "YMM12",
                varnode: reg256(YMM12),
            },
            RegisterDef {
                name: "YMM13",
                varnode: reg256(YMM13),
            },
            RegisterDef {
                name: "YMM14",
                varnode: reg256(YMM14),
            },
            RegisterDef {
                name: "YMM15",
                varnode: reg256(YMM15),
            },
            // ZMM0..ZMM31 (512-bit AVX-512). ZMM0..ZMM15 alias YMM0..YMM15
            // and XMM0..XMM15 at the same base offset.
            RegisterDef {
                name: "ZMM0",
                varnode: reg512(ZMM0),
            },
            RegisterDef {
                name: "ZMM1",
                varnode: reg512(ZMM1),
            },
            RegisterDef {
                name: "ZMM2",
                varnode: reg512(ZMM2),
            },
            RegisterDef {
                name: "ZMM3",
                varnode: reg512(ZMM3),
            },
            RegisterDef {
                name: "ZMM4",
                varnode: reg512(ZMM4),
            },
            RegisterDef {
                name: "ZMM5",
                varnode: reg512(ZMM5),
            },
            RegisterDef {
                name: "ZMM6",
                varnode: reg512(ZMM6),
            },
            RegisterDef {
                name: "ZMM7",
                varnode: reg512(ZMM7),
            },
            RegisterDef {
                name: "ZMM8",
                varnode: reg512(ZMM8),
            },
            RegisterDef {
                name: "ZMM9",
                varnode: reg512(ZMM9),
            },
            RegisterDef {
                name: "ZMM10",
                varnode: reg512(ZMM10),
            },
            RegisterDef {
                name: "ZMM11",
                varnode: reg512(ZMM11),
            },
            RegisterDef {
                name: "ZMM12",
                varnode: reg512(ZMM12),
            },
            RegisterDef {
                name: "ZMM13",
                varnode: reg512(ZMM13),
            },
            RegisterDef {
                name: "ZMM14",
                varnode: reg512(ZMM14),
            },
            RegisterDef {
                name: "ZMM15",
                varnode: reg512(ZMM15),
            },
            RegisterDef {
                name: "ZMM16",
                varnode: reg512(ZMM16),
            },
            RegisterDef {
                name: "ZMM17",
                varnode: reg512(ZMM17),
            },
            RegisterDef {
                name: "ZMM18",
                varnode: reg512(ZMM18),
            },
            RegisterDef {
                name: "ZMM19",
                varnode: reg512(ZMM19),
            },
            RegisterDef {
                name: "ZMM20",
                varnode: reg512(ZMM20),
            },
            RegisterDef {
                name: "ZMM21",
                varnode: reg512(ZMM21),
            },
            RegisterDef {
                name: "ZMM22",
                varnode: reg512(ZMM22),
            },
            RegisterDef {
                name: "ZMM23",
                varnode: reg512(ZMM23),
            },
            RegisterDef {
                name: "ZMM24",
                varnode: reg512(ZMM24),
            },
            RegisterDef {
                name: "ZMM25",
                varnode: reg512(ZMM25),
            },
            RegisterDef {
                name: "ZMM26",
                varnode: reg512(ZMM26),
            },
            RegisterDef {
                name: "ZMM27",
                varnode: reg512(ZMM27),
            },
            RegisterDef {
                name: "ZMM28",
                varnode: reg512(ZMM28),
            },
            RegisterDef {
                name: "ZMM29",
                varnode: reg512(ZMM29),
            },
            RegisterDef {
                name: "ZMM30",
                varnode: reg512(ZMM30),
            },
            RegisterDef {
                name: "ZMM31",
                varnode: reg512(ZMM31),
            },
            // K0..K7 — 8-byte AVX-512 mask registers.
            RegisterDef {
                name: "K0",
                varnode: reg64(K0),
            },
            RegisterDef {
                name: "K1",
                varnode: reg64(K1),
            },
            RegisterDef {
                name: "K2",
                varnode: reg64(K2),
            },
            RegisterDef {
                name: "K3",
                varnode: reg64(K3),
            },
            RegisterDef {
                name: "K4",
                varnode: reg64(K4),
            },
            RegisterDef {
                name: "K5",
                varnode: reg64(K5),
            },
            RegisterDef {
                name: "K6",
                varnode: reg64(K6),
            },
            RegisterDef {
                name: "K7",
                varnode: reg64(K7),
            },
            // TMM0..TMM7 — Intel AMX tile registers (1024 architectural bytes).
            RegisterDef {
                name: "TMM0",
                varnode: reg1024(TMM0),
            },
            RegisterDef {
                name: "TMM1",
                varnode: reg1024(TMM1),
            },
            RegisterDef {
                name: "TMM2",
                varnode: reg1024(TMM2),
            },
            RegisterDef {
                name: "TMM3",
                varnode: reg1024(TMM3),
            },
            RegisterDef {
                name: "TMM4",
                varnode: reg1024(TMM4),
            },
            RegisterDef {
                name: "TMM5",
                varnode: reg1024(TMM5),
            },
            RegisterDef {
                name: "TMM6",
                varnode: reg1024(TMM6),
            },
            RegisterDef {
                name: "TMM7",
                varnode: reg1024(TMM7),
            },
            RegisterDef {
                name: "ST0",
                varnode: st_reg(0),
            },
            RegisterDef {
                name: "ST1",
                varnode: st_reg(1),
            },
            RegisterDef {
                name: "ST2",
                varnode: st_reg(2),
            },
            RegisterDef {
                name: "ST3",
                varnode: st_reg(3),
            },
            RegisterDef {
                name: "ST4",
                varnode: st_reg(4),
            },
            RegisterDef {
                name: "ST5",
                varnode: st_reg(5),
            },
            RegisterDef {
                name: "ST6",
                varnode: st_reg(6),
            },
            RegisterDef {
                name: "ST7",
                varnode: st_reg(7),
            },
        ],
    }
}

pub fn iced_reg_to_varnode(reg: iced_x86::Register) -> Option<(u64, u8)> {
    use iced_x86::Register as R;
    match reg {
        R::RAX => Some((RAX, 8)),
        R::RCX => Some((RCX, 8)),
        R::RDX => Some((RDX, 8)),
        R::RBX => Some((RBX, 8)),
        R::RSP => Some((RSP, 8)),
        R::RBP => Some((RBP, 8)),
        R::RSI => Some((RSI, 8)),
        R::RDI => Some((RDI, 8)),
        R::R8 => Some((R8, 8)),
        R::R9 => Some((R9, 8)),
        R::R10 => Some((R10, 8)),
        R::R11 => Some((R11, 8)),
        R::R12 => Some((R12, 8)),
        R::R13 => Some((R13, 8)),
        R::R14 => Some((R14, 8)),
        R::R15 => Some((R15, 8)),
        R::RIP => Some((RIP, 8)),

        R::EAX => Some((RAX, 4)),
        R::ECX => Some((RCX, 4)),
        R::EDX => Some((RDX, 4)),
        R::EBX => Some((RBX, 4)),
        R::ESP => Some((RSP, 4)),
        R::EBP => Some((RBP, 4)),
        R::ESI => Some((RSI, 4)),
        R::EDI => Some((RDI, 4)),
        R::R8D => Some((R8, 4)),
        R::R9D => Some((R9, 4)),
        R::R10D => Some((R10, 4)),
        R::R11D => Some((R11, 4)),
        R::R12D => Some((R12, 4)),
        R::R13D => Some((R13, 4)),
        R::R14D => Some((R14, 4)),
        R::R15D => Some((R15, 4)),

        R::AX => Some((RAX, 2)),
        R::CX => Some((RCX, 2)),
        R::DX => Some((RDX, 2)),
        R::BX => Some((RBX, 2)),
        R::SP => Some((RSP, 2)),
        R::BP => Some((RBP, 2)),
        R::SI => Some((RSI, 2)),
        R::DI => Some((RDI, 2)),
        R::R8W => Some((R8, 2)),
        R::R9W => Some((R9, 2)),
        R::R10W => Some((R10, 2)),
        R::R11W => Some((R11, 2)),
        R::R12W => Some((R12, 2)),
        R::R13W => Some((R13, 2)),
        R::R14W => Some((R14, 2)),
        R::R15W => Some((R15, 2)),

        R::AL => Some((RAX, 1)),
        R::CL => Some((RCX, 1)),
        R::DL => Some((RDX, 1)),
        R::BL => Some((RBX, 1)),
        R::SPL => Some((RSP, 1)),
        R::BPL => Some((RBP, 1)),
        R::SIL => Some((RSI, 1)),
        R::DIL => Some((RDI, 1)),
        R::R8L => Some((R8, 1)),
        R::R9L => Some((R9, 1)),
        R::R10L => Some((R10, 1)),
        R::R11L => Some((R11, 1)),
        R::R12L => Some((R12, 1)),
        R::R13L => Some((R13, 1)),
        R::R14L => Some((R14, 1)),
        R::R15L => Some((R15, 1)),

        // AH, BH, CH, DH: high byte at offset+1, size 1
        R::AH => Some((RAX + 1, 1)),
        R::CH => Some((RCX + 1, 1)),
        R::DH => Some((RDX + 1, 1)),
        R::BH => Some((RBX + 1, 1)),

        R::XMM0 => Some((XMM0, 16)),
        R::XMM1 => Some((XMM1, 16)),
        R::XMM2 => Some((XMM2, 16)),
        R::XMM3 => Some((XMM3, 16)),
        R::XMM4 => Some((XMM4, 16)),
        R::XMM5 => Some((XMM5, 16)),
        R::XMM6 => Some((XMM6, 16)),
        R::XMM7 => Some((XMM7, 16)),
        R::XMM8 => Some((XMM8, 16)),
        R::XMM9 => Some((XMM9, 16)),
        R::XMM10 => Some((XMM10, 16)),
        R::XMM11 => Some((XMM11, 16)),
        R::XMM12 => Some((XMM12, 16)),
        R::XMM13 => Some((XMM13, 16)),
        R::XMM14 => Some((XMM14, 16)),
        R::XMM15 => Some((XMM15, 16)),

        R::YMM0 => Some((YMM0, 32)),
        R::YMM1 => Some((YMM1, 32)),
        R::YMM2 => Some((YMM2, 32)),
        R::YMM3 => Some((YMM3, 32)),
        R::YMM4 => Some((YMM4, 32)),
        R::YMM5 => Some((YMM5, 32)),
        R::YMM6 => Some((YMM6, 32)),
        R::YMM7 => Some((YMM7, 32)),
        R::YMM8 => Some((YMM8, 32)),
        R::YMM9 => Some((YMM9, 32)),
        R::YMM10 => Some((YMM10, 32)),
        R::YMM11 => Some((YMM11, 32)),
        R::YMM12 => Some((YMM12, 32)),
        R::YMM13 => Some((YMM13, 32)),
        R::YMM14 => Some((YMM14, 32)),
        R::YMM15 => Some((YMM15, 32)),

        // AVX-512 ZMM0..ZMM31 (size 64).
        R::ZMM0 => Some((ZMM0, 64)),
        R::ZMM1 => Some((ZMM1, 64)),
        R::ZMM2 => Some((ZMM2, 64)),
        R::ZMM3 => Some((ZMM3, 64)),
        R::ZMM4 => Some((ZMM4, 64)),
        R::ZMM5 => Some((ZMM5, 64)),
        R::ZMM6 => Some((ZMM6, 64)),
        R::ZMM7 => Some((ZMM7, 64)),
        R::ZMM8 => Some((ZMM8, 64)),
        R::ZMM9 => Some((ZMM9, 64)),
        R::ZMM10 => Some((ZMM10, 64)),
        R::ZMM11 => Some((ZMM11, 64)),
        R::ZMM12 => Some((ZMM12, 64)),
        R::ZMM13 => Some((ZMM13, 64)),
        R::ZMM14 => Some((ZMM14, 64)),
        R::ZMM15 => Some((ZMM15, 64)),
        R::ZMM16 => Some((ZMM16, 64)),
        R::ZMM17 => Some((ZMM17, 64)),
        R::ZMM18 => Some((ZMM18, 64)),
        R::ZMM19 => Some((ZMM19, 64)),
        R::ZMM20 => Some((ZMM20, 64)),
        R::ZMM21 => Some((ZMM21, 64)),
        R::ZMM22 => Some((ZMM22, 64)),
        R::ZMM23 => Some((ZMM23, 64)),
        R::ZMM24 => Some((ZMM24, 64)),
        R::ZMM25 => Some((ZMM25, 64)),
        R::ZMM26 => Some((ZMM26, 64)),
        R::ZMM27 => Some((ZMM27, 64)),
        R::ZMM28 => Some((ZMM28, 64)),
        R::ZMM29 => Some((ZMM29, 64)),
        R::ZMM30 => Some((ZMM30, 64)),
        R::ZMM31 => Some((ZMM31, 64)),

        // AVX-512 mask registers K0..K7 (size 8).
        R::K0 => Some((K0, 8)),
        R::K1 => Some((K1, 8)),
        R::K2 => Some((K2, 8)),
        R::K3 => Some((K3, 8)),
        R::K4 => Some((K4, 8)),
        R::K5 => Some((K5, 8)),
        R::K6 => Some((K6, 8)),
        R::K7 => Some((K7, 8)),

        // Intel AMX tile registers.
        R::TMM0 => Some((TMM0, TMM_SIZE)),
        R::TMM1 => Some((TMM1, TMM_SIZE)),
        R::TMM2 => Some((TMM2, TMM_SIZE)),
        R::TMM3 => Some((TMM3, TMM_SIZE)),
        R::TMM4 => Some((TMM4, TMM_SIZE)),
        R::TMM5 => Some((TMM5, TMM_SIZE)),
        R::TMM6 => Some((TMM6, TMM_SIZE)),
        R::TMM7 => Some((TMM7, TMM_SIZE)),

        R::ST0 => Some((ST0, 10)),
        R::ST1 => Some((ST1, 10)),
        R::ST2 => Some((ST2, 10)),
        R::ST3 => Some((ST3, 10)),
        R::ST4 => Some((ST4, 10)),
        R::ST5 => Some((ST5, 10)),
        R::ST6 => Some((ST6, 10)),
        R::ST7 => Some((ST7, 10)),

        _ => None,
    }
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct X86RegView {
    pub reg: iced_x86::Register,
    pub offset: u64,
    pub size: u8,
    pub full_offset: u64,
    pub full_size: u8,
    pub byte_offset: u8,
    pub is_gpr: bool,
    pub is_vector: bool,
}

impl X86RegView {
    #[inline]
    pub const fn varnode(self) -> Varnode {
        Varnode::new(SpaceId::Register, self.offset, self.size)
    }

    #[inline]
    pub const fn full_varnode(self) -> Varnode {
        Varnode::new(SpaceId::Register, self.full_offset, self.full_size)
    }

    #[inline]
    pub const fn is_full_width(self) -> bool {
        self.offset == self.full_offset && self.size == self.full_size
    }

    #[inline]
    pub const fn zero_extends_on_write(self) -> bool {
        self.is_gpr && self.byte_offset == 0 && self.size == 4
    }
}

pub fn x86_reg_view(reg: iced_x86::Register) -> Option<X86RegView> {
    use iced_x86::Register as R;

    let (offset, size) = iced_reg_to_varnode(reg)?;
    let mut view = X86RegView {
        reg,
        offset,
        size,
        full_offset: offset,
        full_size: size,
        byte_offset: 0,
        is_gpr: false,
        is_vector: false,
    };

    let info = reg.info();
    let full = info.full_register();
    let full_info = full.info();
    if full_info.base() == R::RAX && full_info.size() == 8 {
        let number = full_info.number();
        if number < 16 {
            let full_offset = egpr_offset(number as u8);
            let byte_offset = offset.checked_sub(full_offset)?;
            if byte_offset + size as u64 <= 8 {
                view.full_offset = full_offset;
                view.full_size = 8;
                view.byte_offset = byte_offset as u8;
                view.is_gpr = true;
            }
        }
    }
    if full_info.base() == R::ZMM0 && full_info.size() == 64 {
        let number = full_info.number();
        if number < 32 {
            let full_offset = vec_offset(number as u64);
            let byte_offset = offset.checked_sub(full_offset)?;
            if byte_offset + size as u64 <= VEC_STRIDE {
                view.full_offset = full_offset;
                view.full_size = VEC_STRIDE as u8;
                view.byte_offset = byte_offset as u8;
                view.is_vector = true;
            }
        }
    }

    Some(view)
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::SpaceId;

    #[test]
    fn test_xmm0_size_16() {
        let vn = reg128(XMM0);
        assert_eq!(vn.size, 16);
        assert_eq!(vn.space, SpaceId::Register);
    }

    #[test]
    fn test_xmm15_unique_offset() {
        assert_ne!(XMM0, XMM15);
        let vn0 = reg128(XMM0);
        let vn15 = reg128(XMM15);
        assert_ne!(vn0.offset, vn15.offset);
        assert_eq!(vn15.size, 16);
    }

    #[test]
    fn test_xmm_no_overlap_with_gp() {
        let gp_offsets = [
            RAX, RCX, RDX, RBX, RSP, RBP, RSI, RDI, R8, R9, R10, R11, R12, R13, R14, R15, R16, R17,
            R18, R19, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, R30, R31, RIP,
        ];
        let gp_max = gp_offsets.iter().copied().max().unwrap() + 8;
        let flag_max = OF + 1;
        let gp_end = if gp_max > flag_max { gp_max } else { flag_max };

        let xmm_offsets = [
            XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, XMM7, XMM8, XMM9, XMM10, XMM11, XMM12, XMM13,
            XMM14, XMM15,
        ];
        for &xmm in &xmm_offsets {
            assert!(
                xmm >= gp_end,
                "XMM offset {xmm:#x} overlaps GP/flag region ending at {gp_end:#x}"
            );
        }
    }

    #[test]
    fn t313_apx_egprs_do_not_alias_rip_or_flags() {
        assert_ne!(R16, RIP, "R16 and RIP must be distinct register slots");
        assert!(R16 < CF, "APX EGPRs should remain ordinary GP registers");
        assert_eq!(R31 + 8, CF, "R31 should end exactly before RFLAGS bits");
        assert!(RIP > OF, "RIP must not live inside the RFLAGS region");
    }

    #[test]
    fn t313_iced_gpr_view_uses_full_parent_metadata() {
        use iced_x86::Register as R;

        let eax = x86_reg_view(R::EAX).expect("EAX view");
        assert!(eax.is_gpr);
        assert_eq!(eax.varnode(), Varnode::reg(RAX, 4));
        assert_eq!(eax.full_varnode(), Varnode::reg(RAX, 8));
        assert_eq!(eax.byte_offset, 0);
        assert!(eax.zero_extends_on_write());

        let ah = x86_reg_view(R::AH).expect("AH view");
        assert!(ah.is_gpr);
        assert_eq!(ah.varnode(), Varnode::reg(RAX + 1, 1));
        assert_eq!(ah.full_varnode(), Varnode::reg(RAX, 8));
        assert_eq!(ah.byte_offset, 1);
        assert!(!ah.zero_extends_on_write());
    }

    #[test]
    fn t314_iced_vector_view_uses_zmm_parent_metadata() {
        use iced_x86::Register as R;

        let ymm0 = x86_reg_view(R::YMM0).expect("YMM0 view");
        assert!(ymm0.is_vector);
        assert_eq!(ymm0.varnode(), Varnode::reg(YMM0, 32));
        assert_eq!(ymm0.full_varnode(), Varnode::reg(ZMM0, 64));
        assert_eq!(ymm0.byte_offset, 0);
        assert!(!ymm0.is_full_width());

        let zmm0 = x86_reg_view(R::ZMM0).expect("ZMM0 view");
        assert!(zmm0.is_vector);
        assert_eq!(zmm0.full_varnode(), Varnode::reg(ZMM0, 64));
        assert!(zmm0.is_full_width());
    }

    #[test]
    fn test_xmm_iced_mapping() {
        use iced_x86::Register as R;
        let (off, sz) = iced_reg_to_varnode(R::XMM0).expect("XMM0 should map");
        assert_eq!(off, XMM0);
        assert_eq!(sz, 16);

        let (off5, sz5) = iced_reg_to_varnode(R::XMM5).expect("XMM5 should map");
        assert_eq!(off5, XMM5);
        assert_eq!(sz5, 16);

        let (off15, sz15) = iced_reg_to_varnode(R::XMM15).expect("XMM15 should map");
        assert_eq!(off15, XMM15);
        assert_eq!(sz15, 16);
    }

    #[test]
    fn test_ymm0_size_32() {
        let vn = reg256(YMM0);
        assert_eq!(vn.size, 32);
        assert_eq!(vn.space, SpaceId::Register);
    }

    #[test]
    fn test_ymm_iced_mapping() {
        use iced_x86::Register as R;
        let (off, sz) = iced_reg_to_varnode(R::YMM0).expect("YMM0 should map");
        assert_eq!(off, YMM0);
        assert_eq!(sz, 32);

        let (off7, sz7) = iced_reg_to_varnode(R::YMM7).expect("YMM7 should map");
        assert_eq!(off7, YMM7);
        assert_eq!(sz7, 32);

        let (off15, sz15) = iced_reg_to_varnode(R::YMM15).expect("YMM15 should map");
        assert_eq!(off15, YMM15);
        assert_eq!(sz15, 32);
    }

    #[test]
    fn test_ymm_xmm_share_base_offset() {
        for i in 0..16u64 {
            let xmm = vec_offset(i);
            let ymm = vec_offset(i);
            assert_eq!(xmm, ymm, "XMM{i} and YMM{i} should share base offset");
        }
    }

    #[test]
    fn test_xmm_consecutive_stride() {
        for i in 0..15u64 {
            let curr = vec_offset(i);
            let next = vec_offset(i + 1);
            assert_eq!(
                next - curr,
                VEC_STRIDE,
                "stride between XMM{i} and XMM{} should be {VEC_STRIDE}",
                i + 1
            );
        }
    }

    #[test]
    fn test_st_reg_size_10() {
        let st0 = st_reg(0);
        assert_eq!(st0.size, 10);
        assert_eq!(st0.space, SpaceId::Register);
        assert_eq!(st0.offset, ST0);
    }

    #[test]
    fn test_st_reg_iced_mapping() {
        use iced_x86::Register as R;
        let (off0, sz0) = iced_reg_to_varnode(R::ST0).expect("ST0 should map");
        assert_eq!(off0, ST0);
        assert_eq!(sz0, 10);
        let (off7, sz7) = iced_reg_to_varnode(R::ST7).expect("ST7 should map");
        assert_eq!(off7, ST7);
        assert_eq!(sz7, 10);
    }

    #[test]
    fn test_st_offsets_do_not_collide_with_vec() {
        let st_max = ST7 + 10;
        assert!(
            st_max <= VEC_BASE,
            "FPU region ends at {st_max:#x} but VEC_BASE is {VEC_BASE:#x}"
        );
    }

    #[test]
    fn test_st_offsets_do_not_collide_with_gp() {
        let gp_end = (RIP + 8).max(OF + 1);
        assert!(
            ST0 >= gp_end,
            "ST0 {ST0:#x} would overlap GP/flag region ending at {gp_end:#x}"
        );
    }

    #[test]
    fn test_register_file_contains_st() {
        let rf = x86_64_register_file();
        assert!(rf.registers.iter().any(|r| r.name == "ST0"));
        assert!(rf.registers.iter().any(|r| r.name == "ST7"));
        let st0 = rf.registers.iter().find(|r| r.name == "ST0").unwrap();
        assert_eq!(st0.varnode.size, 10);
    }

    #[test]
    fn test_register_file_contains_xmm_and_ymm() {
        let rf = x86_64_register_file();
        assert!(rf.registers.iter().any(|r| r.name == "XMM0"));
        assert!(rf.registers.iter().any(|r| r.name == "XMM15"));
        assert!(rf.registers.iter().any(|r| r.name == "YMM0"));
        assert!(rf.registers.iter().any(|r| r.name == "YMM15"));

        let xmm0 = rf.registers.iter().find(|r| r.name == "XMM0").unwrap();
        assert_eq!(xmm0.varnode.size, 16);

        let ymm0 = rf.registers.iter().find(|r| r.name == "YMM0").unwrap();
        assert_eq!(ymm0.varnode.size, 32);
    }

    // ── t205: AVX-512 register varnodes ─────────────────────────────

    /// ZMM0 is declared in the register file as a 64-byte varnode in
    /// the Register space, sharing a base offset with the existing
    /// XMM0/YMM0 entries.
    #[test]
    fn t205_zmm0_register_write_sanity() {
        let rf = x86_64_register_file();
        let zmm0 = rf
            .registers
            .iter()
            .find(|r| r.name == "ZMM0")
            .expect("ZMM0 should be in the register file");
        assert_eq!(zmm0.varnode.size, 64, "ZMM0 must be 512 bits / 64 bytes");
        assert_eq!(zmm0.varnode.space, SpaceId::Register);
        assert_eq!(zmm0.varnode.offset, ZMM0);
        assert_eq!(
            zmm0.varnode.offset, XMM0,
            "ZMM0 must share base offset with XMM0/YMM0",
        );

        // ZMM31 (EVEX-only) must also be present and 64 bytes.
        let zmm31 = rf
            .registers
            .iter()
            .find(|r| r.name == "ZMM31")
            .expect("ZMM31 should be in the register file");
        assert_eq!(zmm31.varnode.size, 64);
    }

    /// K0..K7 mask registers are declared as 8-byte varnodes in the
    /// Register space, in their own block above the vector region.
    #[test]
    fn t205_k_mask_registers_declared() {
        let rf = x86_64_register_file();
        for i in 0..8u64 {
            let name = format!("K{i}");
            let k = rf
                .registers
                .iter()
                .find(|r| r.name == name)
                .unwrap_or_else(|| panic!("{name} should be in the register file"));
            assert_eq!(k.varnode.size, 8, "{name} must be 8 bytes");
            assert_eq!(k.varnode.space, SpaceId::Register);
            assert_eq!(k.varnode.offset, k_offset(i));
        }

        // K-block must sit entirely above the vector region so a ZMM
        // write never accidentally clobbers a mask register.
        let vec_end = vec_offset(32);
        assert!(
            K0 >= vec_end,
            "K0 {K0:#x} must sit above ZMM region end {vec_end:#x}"
        );

        // iced mapping round-trips.
        use iced_x86::Register as R;
        assert_eq!(iced_reg_to_varnode(R::K0), Some((K0, 8)));
        assert_eq!(iced_reg_to_varnode(R::K7), Some((K7, 8)));
    }

    /// XMM0 / YMM0 / ZMM0 must all share the same base offset \u2014 the
    /// only distinguishing feature is the varnode size. This is the
    /// aliasing invariant that the SSA / alias machinery relies on to
    /// recognise that a ZMM write subsumes the matching YMM/XMM lane.
    #[test]
    fn t205_xmm_ymm_zmm_alias_same_offset() {
        use iced_x86::Register as R;
        let (xoff, xsz) = iced_reg_to_varnode(R::XMM0).unwrap();
        let (yoff, ysz) = iced_reg_to_varnode(R::YMM0).unwrap();
        let (zoff, zsz) = iced_reg_to_varnode(R::ZMM0).unwrap();
        assert_eq!(xoff, yoff);
        assert_eq!(yoff, zoff);
        assert_eq!(xsz, 16);
        assert_eq!(ysz, 32);
        assert_eq!(zsz, 64);

        // Byte-range overlap predicate must agree.
        use unlace_ir::reg_alias::aliases;
        let xmm0 = Varnode::new(SpaceId::Register, xoff, xsz);
        let ymm0 = Varnode::new(SpaceId::Register, yoff, ysz);
        let zmm0 = Varnode::new(SpaceId::Register, zoff, zsz);
        assert!(aliases(xmm0, zmm0));
        assert!(aliases(ymm0, zmm0));
        assert!(aliases(xmm0, ymm0));

        // ZMM0 and ZMM1 must NOT overlap \u2014 stride is 64 bytes which
        // exactly equals the ZMM width.
        let zmm1 = Varnode::new(SpaceId::Register, ZMM1, 64);
        assert!(!aliases(zmm0, zmm1));
    }
    #[test]
    fn test_tmm0_size_255_ir_limit() {
        let vn = reg1024(TMM0);
        assert_eq!(vn.size, TMM_SIZE);
        assert_eq!(vn.space, SpaceId::Register);
    }

    #[test]
    fn test_tmm_iced_mapping() {
        use iced_x86::Register as R;
        let (off, sz) = iced_reg_to_varnode(R::TMM0).expect("TMM0 should map");
        assert_eq!(off, TMM0);
        assert_eq!(sz, TMM_SIZE);

        let (off7, sz7) = iced_reg_to_varnode(R::TMM7).expect("TMM7 should map");
        assert_eq!(off7, TMM7);
        assert_eq!(sz7, TMM_SIZE);
        assert_eq!(TMM7 - TMM0, 7 * TMM_STRIDE);
    }
}
