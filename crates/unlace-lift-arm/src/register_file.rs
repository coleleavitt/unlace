//! AArch64 register file: register offset constants and capstone RegId → Varnode mapping.

use capstone::RegId;
use unlace_ir::{RegisterDef, RegisterFile, SpaceId, Varnode};

// Register offsets in the register space.
// X0–X30 at offsets 0..248 step 8.
pub const X0: u64 = 0;
pub const X1: u64 = 8;
pub const X2: u64 = 16;
pub const X3: u64 = 24;
pub const X4: u64 = 32;
pub const X5: u64 = 40;
pub const X6: u64 = 48;
pub const X7: u64 = 56;
pub const X8: u64 = 64;
pub const X9: u64 = 72;
pub const X10: u64 = 80;
pub const X11: u64 = 88;
pub const X12: u64 = 96;
pub const X13: u64 = 104;
pub const X14: u64 = 112;
pub const X15: u64 = 120;
pub const X16: u64 = 128;
pub const X17: u64 = 136;
pub const X18: u64 = 144;
pub const X19: u64 = 152;
pub const X20: u64 = 160;
pub const X21: u64 = 168;
pub const X22: u64 = 176;
pub const X23: u64 = 184;
pub const X24: u64 = 192;
pub const X25: u64 = 200;
pub const X26: u64 = 208;
pub const X27: u64 = 216;
pub const X28: u64 = 224;
pub const X29: u64 = 232; // FP (frame pointer)
pub const X30: u64 = 240; // LR (link register)
pub const SP: u64 = 248;
pub const PC: u64 = 256;
pub const NZCV: u64 = 264;

// Individual flag bits within NZCV (1-byte each, at sub-offsets after NZCV).
pub const NF: u64 = 264; // Negative flag (byte 0 of NZCV)
pub const ZF: u64 = 265; // Zero flag (byte 1 of NZCV)
pub const CF: u64 = 266; // Carry flag (byte 2 of NZCV)
pub const VF: u64 = 267; // oVerflow flag (byte 3 of NZCV)

/// Unified 4-byte NZCV varnode (t170) in **PSTATE packed layout**:
/// `N<<31 | Z<<30 | C<<29 | V<<28`. Lives at a non-overlapping offset
/// from `NF/ZF/CF/VF` so dataflow can track it as a single SSA value
/// without aliasing the per-flag bytes. CCMP/CCMN/SUBS/ADDS/CMP/CMN
/// emit *both* the per-flag bytes and a pack into this varnode; the
/// CCMP fail-path additionally writes the immediate `#nzcv` shifted
/// into the same packed positions. Conditional consumers
/// (CSEL/Bcc/...) that walk dataflow can grab the latest NZCV write
/// in one hop rather than four.
pub const ARM_NZCV: u64 = 272;

// ── SVE scalable vector registers ──────────────────────────────────────
// Z0–Z31: 32-byte nominal (256-bit minimum VL). Placed after ARM_NZCV+4.
pub const SVE_Z_BASE: u64 = 280;
/// Size of each Z register varnode in bytes (nominal 256-bit).
pub const SVE_Z_SIZE: u8 = 32;

/// Offset of Z register `n` (0..32).
pub const fn sve_z_offset(n: u8) -> u64 {
    SVE_Z_BASE + (n as u64) * SVE_Z_SIZE as u64
}

// P0–P15: SVE predicate registers, 4 bytes nominal (one bit per byte-lane
// at VL=256). Placed after Z31.
pub const SVE_P_BASE: u64 = SVE_Z_BASE + 32 * SVE_Z_SIZE as u64; // 280 + 1024 = 1304
/// Size of each P register varnode in bytes (nominal).
pub const SVE_P_SIZE: u8 = 4;

/// Offset of P register `n` (0..16).
pub const fn sve_p_offset(n: u8) -> u64 {
    SVE_P_BASE + (n as u64) * SVE_P_SIZE as u64
}

// ── SME scaffolding registers ──────────────────────────────────────────
// Model ZA as a nominal 256-byte matrix tile (minimum architectural
// footprint at VL=256) and ZT0 as one 32-byte streaming tile slice. This
// gives the IR stable register identities for SME outer-product intrinsics
// without having to model scalable storage yet.
pub const SME_ZA: u64 = SVE_P_BASE + 16 * SVE_P_SIZE as u64; // 1368
pub const SME_ZA_SIZE: u8 = 32;
pub const SME_ZT0: u64 = SME_ZA + SME_ZA_SIZE as u64; // 1624
pub const SME_ZT0_SIZE: u8 = SVE_Z_SIZE;

/// SVE Z-register names.
const SVE_Z_NAMES: [&str; 32] = [
    "Z0", "Z1", "Z2", "Z3", "Z4", "Z5", "Z6", "Z7", "Z8", "Z9", "Z10", "Z11", "Z12", "Z13", "Z14",
    "Z15", "Z16", "Z17", "Z18", "Z19", "Z20", "Z21", "Z22", "Z23", "Z24", "Z25", "Z26", "Z27",
    "Z28", "Z29", "Z30", "Z31",
];

/// SVE P-register names.
const SVE_P_NAMES: [&str; 16] = [
    "P0", "P1", "P2", "P3", "P4", "P5", "P6", "P7", "P8", "P9", "P10", "P11", "P12", "P13", "P14",
    "P15",
];

/// Names for X0..X30.
const XREG_NAMES: [&str; 31] = [
    "X0", "X1", "X2", "X3", "X4", "X5", "X6", "X7", "X8", "X9", "X10", "X11", "X12", "X13", "X14",
    "X15", "X16", "X17", "X18", "X19", "X20", "X21", "X22", "X23", "X24", "X25", "X26", "X27",
    "X28", "X29", "X30",
];

/// Build the full AArch64 register file (including SVE Z0–Z31 / P0–P15 and SME ZA/ZT0 scaffolding).
pub fn aarch64_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(34 + 32 + 16 + 2);
    for i in 0..31u64 {
        regs.push(RegisterDef {
            name: XREG_NAMES[i as usize],
            varnode: Varnode::reg(i * 8, 8),
        });
    }
    regs.push(RegisterDef {
        name: "SP",
        varnode: Varnode::reg(SP, 8),
    });
    regs.push(RegisterDef {
        name: "PC",
        varnode: Varnode::reg(PC, 8),
    });
    regs.push(RegisterDef {
        name: "NZCV",
        varnode: Varnode::reg(NZCV, 4),
    });
    regs.push(RegisterDef {
        name: "PSTATE_NZCV",
        varnode: Varnode::reg(ARM_NZCV, 4),
    });
    // SVE Z registers (Z0–Z31, 32 bytes each)
    for i in 0..32u8 {
        regs.push(RegisterDef {
            name: SVE_Z_NAMES[i as usize],
            varnode: Varnode::reg(sve_z_offset(i), SVE_Z_SIZE),
        });
    }
    // SVE P registers (P0–P15, 4 bytes each)
    for i in 0..16u8 {
        regs.push(RegisterDef {
            name: SVE_P_NAMES[i as usize],
            varnode: Varnode::reg(sve_p_offset(i), SVE_P_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "ZA",
        varnode: Varnode::reg(SME_ZA, SME_ZA_SIZE),
    });
    regs.push(RegisterDef {
        name: "ZT0",
        varnode: Varnode::reg(SME_ZT0, SME_ZT0_SIZE),
    });
    RegisterFile { registers: regs }
}

// Capstone ARM64 register IDs (from capstone-sys).
// These are the raw u16 values capstone uses.
const ARM64_REG_FP: u16 = 2; // X29 alias
const ARM64_REG_LR: u16 = 3; // X30 alias
const ARM64_REG_SP: u16 = 5;
const ARM64_REG_WZR: u16 = 8;
const ARM64_REG_XZR: u16 = 9;

const ARM64_REG_W0: u16 = 187;
const ARM64_REG_W28: u16 = 215;
const ARM64_REG_W29: u16 = 216;
const ARM64_REG_W30: u16 = 217;

const ARM64_REG_X0: u16 = 218;
const ARM64_REG_X28: u16 = 246;
const ARM64_REG_Z0: u16 = 247;
const ARM64_REG_Z31: u16 = 278;

const ARM64_REG_P0: u16 = 107;
const ARM64_REG_P15: u16 = 122;

/// Map a capstone RegId to `(register_space_offset, size)`.
///
/// Returns `None` for registers we don't model (SIMD/FP, system regs).
pub fn cs_reg_to_varnode(reg: RegId) -> Option<(u64, u8)> {
    let id = reg.0;
    match id {
        // X0–X28: IDs 218..246
        _ if (ARM64_REG_X0..=ARM64_REG_X28).contains(&id) => {
            let idx = (id - ARM64_REG_X0) as u64;
            Some((idx * 8, 8))
        }
        // FP (X29)
        x if x == ARM64_REG_FP => Some((X29, 8)),
        // LR (X30)
        x if x == ARM64_REG_LR => Some((X30, 8)),
        // SP
        x if x == ARM64_REG_SP => Some((SP, 8)),
        // XZR — zero register, handled separately in reg_varnode
        x if x == ARM64_REG_XZR => None,

        // W0–W28: IDs 187..215
        _ if (ARM64_REG_W0..=ARM64_REG_W28).contains(&id) => {
            let idx = (id - ARM64_REG_W0) as u64;
            Some((idx * 8, 4))
        }
        // W29
        x if x == ARM64_REG_W29 => Some((X29, 4)),
        // W30
        x if x == ARM64_REG_W30 => Some((X30, 4)),
        // WZR — 32-bit zero register, handled separately in reg_varnode
        x if x == ARM64_REG_WZR => None,

        // SVE Z0–Z31
        _ if (ARM64_REG_Z0..=ARM64_REG_Z31).contains(&id) => {
            let idx = (id - ARM64_REG_Z0) as u8;
            Some((sve_z_offset(idx), SVE_Z_SIZE))
        }

        // SVE P0–P15
        _ if (ARM64_REG_P0..=ARM64_REG_P15).contains(&id) => {
            let idx = (id - ARM64_REG_P0) as u8;
            Some((sve_p_offset(idx), SVE_P_SIZE))
        }

        _ => None,
    }
}

/// Resolve a capstone RegId into a Varnode.
///
/// XZR/WZR are returned as constant-0 varnodes of appropriate size.
pub fn reg_varnode(reg: RegId) -> Option<Varnode> {
    let id = reg.0;
    // Zero registers → constant 0
    if id == ARM64_REG_XZR {
        return Some(Varnode::constant(0, 8));
    }
    if id == ARM64_REG_WZR {
        return Some(Varnode::constant(0, 4));
    }
    let (offset, size) = cs_reg_to_varnode(reg)?;
    Some(Varnode::new(SpaceId::Register, offset, size))
}

/// Is this register a W-register (32-bit)?
pub fn is_w_reg(reg: RegId) -> bool {
    let id = reg.0;
    (ARM64_REG_W0..=ARM64_REG_W30).contains(&id) || id == ARM64_REG_WZR
}

/// Is this the zero register (XZR or WZR)?
pub fn is_zero_reg(reg: RegId) -> bool {
    reg.0 == ARM64_REG_XZR || reg.0 == ARM64_REG_WZR
}

// ARM VFP (Vector Floating Point) double-precision registers.
// D0-D31 are 64-bit FP registers. On AArch32, D0-D15 are also accessible
// as pairs of single-precision S0-S31 registers.
const VFP_BASE: u64 = 0x1000; // Separate space from GP regs

pub const fn vfp_d_offset(n: u64) -> u64 {
    VFP_BASE + n * 8
}

pub const VFP_D0: u64 = vfp_d_offset(0);
pub const VFP_D1: u64 = vfp_d_offset(1);
pub const VFP_D15: u64 = vfp_d_offset(15);
pub const VFP_D31: u64 = vfp_d_offset(31);

/// FPSCR (Floating-Point Status and Control Register).
pub const FPSCR: u64 = VFP_BASE + 32 * 8;

/// Size of a VFP D-register varnode.
pub const VFP_D_SIZE: u8 = 8;
/// Size of a VFP S-register varnode (lower half of D).
pub const VFP_S_SIZE: u8 = 4;


#[cfg(test)]
mod vfp_tests {
    use super::*;

    #[test]
    fn vfp_d_offsets_are_sequential() {
        for i in 0..31 {
            assert_eq!(vfp_d_offset(i + 1) - vfp_d_offset(i), 8);
        }
    }

    #[test]
    fn fpscr_after_d_registers() {
        assert!(FPSCR > VFP_D31);
    }
}
