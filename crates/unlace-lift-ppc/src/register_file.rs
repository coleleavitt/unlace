//! PowerPC register file layouts.
//!
//! r0–r31 as 32-bit or 64-bit GPRs, plus CR, LR, CTR, XER, PC, and the
//! AltiVec/VMX vector registers v0–v31 (128-bit).

use capstone::RegId;
use unlace_ir::{RegisterDef, RegisterFile, SpaceId, Varnode};

pub const GPR_BASE: u64 = 0;
pub const PPC32_GPR_SIZE: u8 = 4;
pub const PPC64_GPR_SIZE: u8 = 8;

#[inline]
pub const fn gpr_offset_with_size(n: u64, gpr_size: u8) -> u64 {
    GPR_BASE + n * (gpr_size as u64)
}

#[inline]
pub const fn gpr_offset(n: u64) -> u64 {
    gpr_offset_with_size(n, PPC64_GPR_SIZE)
}

pub const CR_OFFSET: u64 = 256;
pub const CR_SIZE: u8 = 4;
pub const CR_EQ_SIZE: u8 = 1;
pub const LR_OFFSET: u64 = 264;
pub const PPC32_PTR_SIZE: u8 = 4;
pub const PPC64_PTR_SIZE: u8 = 8;
pub const LR_SIZE: u8 = PPC64_PTR_SIZE;
pub const CTR_OFFSET: u64 = 272;
pub const CTR_SIZE: u8 = PPC64_PTR_SIZE;
pub const XER_OFFSET: u64 = 280;
pub const XER_SIZE: u8 = 4;
pub const PC_OFFSET: u64 = 288;
pub const PC_SIZE: u8 = PPC64_PTR_SIZE;

/// AltiVec/VMX vector register file (v0–v31), each 128 bits (16 bytes).
///
/// Placed well above the scalar register/SPR offsets so the 512-byte vector
/// block never aliases a GPR/CR/SPR varnode.
pub const VR_BASE: u64 = 512;
pub const VR_SIZE: u8 = 16;
pub const VR_COUNT: u64 = 32;

#[inline]
pub const fn vr_offset(n: u64) -> u64 {
    VR_BASE + n * (VR_SIZE as u64)
}

/// Helper: 128-bit AltiVec vector register varnode.
#[inline]
pub fn vr(n: u64) -> Varnode {
    Varnode::new(SpaceId::Register, vr_offset(n), VR_SIZE)
}

const PPC_GPR_NAMES: [&str; 32] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14",
    "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27",
    "r28", "r29", "r30", "r31",
];

const PPC_VR_NAMES: [&str; 32] = [
    "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14",
    "v15", "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27",
    "v28", "v29", "v30", "v31",
];

fn ppc_register_file(gpr_size: u8) -> RegisterFile {
    let mut regs = Vec::with_capacity(37 + PPC_VR_NAMES.len());
    for (i, name) in PPC_GPR_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(gpr_offset_with_size(i as u64, gpr_size), gpr_size),
        });
    }
    regs.push(RegisterDef {
        name: "CR",
        varnode: Varnode::reg(CR_OFFSET, CR_SIZE),
    });
    regs.push(RegisterDef {
        name: "LR",
        varnode: Varnode::reg(LR_OFFSET, gpr_size),
    });
    regs.push(RegisterDef {
        name: "CTR",
        varnode: Varnode::reg(CTR_OFFSET, gpr_size),
    });
    regs.push(RegisterDef {
        name: "XER",
        varnode: Varnode::reg(XER_OFFSET, XER_SIZE),
    });
    regs.push(RegisterDef {
        name: "PC",
        varnode: Varnode::reg(PC_OFFSET, gpr_size),
    });
    for (i, name) in PPC_VR_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(vr_offset(i as u64), VR_SIZE),
        });
    }
    RegisterFile { registers: regs }
}

pub fn ppc32_register_file() -> RegisterFile {
    ppc_register_file(PPC32_GPR_SIZE)
}

pub fn ppc64_register_file() -> RegisterFile {
    ppc_register_file(PPC64_GPR_SIZE)
}

/// Helper: 64-bit GPR varnode.
#[inline]
pub fn gpr(n: u64) -> Varnode {
    Varnode::new(SpaceId::Register, gpr_offset(n), PPC64_GPR_SIZE)
}

#[inline]
pub fn cr() -> Varnode {
    Varnode::new(SpaceId::Register, CR_OFFSET, CR_SIZE)
}

/// Boolean predicate representing CR0.EQ.
///
/// The full 32-bit CR bitfield is not modelled yet. Branch lifting consumes
/// this one-byte predicate for common `beq`/`bne` style branches so CFG
/// structuring keeps the compare data-dependent instead of leaking a generic
/// condition temp.
#[inline]
pub fn cr_eq() -> Varnode {
    Varnode::new(SpaceId::Register, CR_OFFSET, CR_EQ_SIZE)
}

#[inline]
pub fn gpr_with_size(n: u64, gpr_size: u8) -> Varnode {
    Varnode::new(
        SpaceId::Register,
        gpr_offset_with_size(n, gpr_size),
        gpr_size,
    )
}

#[inline]
pub fn lr() -> Varnode {
    Varnode::new(SpaceId::Register, LR_OFFSET, LR_SIZE)
}

#[inline]
pub fn lr_with_size(ptr_size: u8) -> Varnode {
    Varnode::new(SpaceId::Register, LR_OFFSET, ptr_size)
}

#[inline]
pub fn ctr() -> Varnode {
    Varnode::new(SpaceId::Register, CTR_OFFSET, CTR_SIZE)
}

#[inline]
pub fn ctr_with_size(ptr_size: u8) -> Varnode {
    Varnode::new(SpaceId::Register, CTR_OFFSET, ptr_size)
}

/// First capstone PPC_REG_R0 id.
const CS_PPC_REG_R0: u16 = 87;

/// Map a capstone `RegId` to a register-space `Varnode`.
/// Returns `None` for unrecognised / floating-point registers.
pub fn cs_reg_to_varnode(reg: RegId) -> Option<Varnode> {
    cs_reg_to_varnode_with_size(reg, PPC64_GPR_SIZE)
}

/// Map a capstone `RegId` to a register-space `Varnode` with 32/64-bit GPR width.
/// Returns `None` for unrecognised / floating-point registers.
pub fn cs_reg_to_varnode_with_size(reg: RegId, ptr_size: u8) -> Option<Varnode> {
    let id = reg.0;
    match id {
        // r0–r31 (capstone ids 87..=118)
        r @ 87..=118 => {
            let n = (r - CS_PPC_REG_R0) as u64;
            Some(gpr_with_size(n, ptr_size))
        }
        // LR = 5
        5 => Some(lr_with_size(ptr_size)),
        // CTR = 3
        3 => Some(ctr_with_size(ptr_size)),
        // CR0 = 12 ... CR7 = 19 — map to whole CR register for now
        12..=19 => Some(cr()),
        // v0–v31 (capstone ids 151..=182) — 128-bit AltiVec vector registers.
        // Width is fixed at 16 bytes regardless of the scalar GPR width.
        v @ 151..=182 => Some(vr((v - CS_PPC_REG_V0) as u64)),
        _ => None,
    }
}

/// First capstone PPC_REG_V0 id (AltiVec vector register v0).
const CS_PPC_REG_V0: u16 = 151;

/// Map a capstone `RegId` to a 128-bit AltiVec vector register `Varnode`.
/// Returns `None` for any register that is not v0–v31.
pub fn cs_vr_to_varnode(reg: RegId) -> Option<Varnode> {
    match reg.0 {
        v @ 151..=182 => Some(vr((v - CS_PPC_REG_V0) as u64)),
        _ => None,
    }
}
