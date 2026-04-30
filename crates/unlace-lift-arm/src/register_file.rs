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
pub const X29: u64 = 232;  // FP (frame pointer)
pub const X30: u64 = 240;  // LR (link register)
pub const SP: u64 = 248;
pub const PC: u64 = 256;
pub const NZCV: u64 = 264;

// Individual flag bits within NZCV (1-byte each, at sub-offsets after NZCV).
pub const NF: u64 = 264;  // Negative flag (byte 0 of NZCV)
pub const ZF: u64 = 265;  // Zero flag (byte 1 of NZCV)
pub const CF: u64 = 266;  // Carry flag (byte 2 of NZCV)
pub const VF: u64 = 267;  // oVerflow flag (byte 3 of NZCV)

/// Names for X0..X30.
const XREG_NAMES: [&str; 31] = [
    "X0", "X1", "X2", "X3", "X4", "X5", "X6", "X7",
    "X8", "X9", "X10", "X11", "X12", "X13", "X14", "X15",
    "X16", "X17", "X18", "X19", "X20", "X21", "X22", "X23",
    "X24", "X25", "X26", "X27", "X28", "X29", "X30",
];

/// Build the full AArch64 register file.
pub fn aarch64_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(34);
    for i in 0..31u64 {
        regs.push(RegisterDef {
            name: XREG_NAMES[i as usize],
            varnode: Varnode::reg(i * 8, 8),
        });
    }
    regs.push(RegisterDef { name: "SP", varnode: Varnode::reg(SP, 8) });
    regs.push(RegisterDef { name: "PC", varnode: Varnode::reg(PC, 8) });
    regs.push(RegisterDef { name: "NZCV", varnode: Varnode::reg(NZCV, 4) });
    RegisterFile { registers: regs }
}

// Capstone ARM64 register IDs (from capstone-sys).
// These are the raw u16 values capstone uses.
const ARM64_REG_FP: u16 = 2;   // X29 alias
const ARM64_REG_LR: u16 = 3;   // X30 alias
const ARM64_REG_SP: u16 = 5;
const ARM64_REG_WZR: u16 = 8;
const ARM64_REG_XZR: u16 = 9;

const ARM64_REG_W0: u16 = 187;
const ARM64_REG_W28: u16 = 215;
const ARM64_REG_W29: u16 = 216;
const ARM64_REG_W30: u16 = 217;

const ARM64_REG_X0: u16 = 218;
const ARM64_REG_X28: u16 = 246;

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
