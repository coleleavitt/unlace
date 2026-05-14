//! PowerPC register file layouts.
//!
//! r0–r31 as 32-bit or 64-bit GPRs, plus CR, LR, CTR, XER, and PC.

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

const PPC_GPR_NAMES: [&str; 32] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14",
    "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27",
    "r28", "r29", "r30", "r31",
];

fn ppc_register_file(gpr_size: u8) -> RegisterFile {
    let mut regs = Vec::with_capacity(37);
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
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use capstone::RegId;

    #[test]
    fn t360_ppc64_register_file_full_layout() {
        let rf = ppc64_register_file();
        assert_eq!(rf.registers.len(), 37);
        for i in 0..32u64 {
            assert_register(&rf, &format!("r{i}"), gpr_offset(i), GPR_SIZE);
        }
        assert_register(&rf, "CR", CR_OFFSET, CR_SIZE);
        assert_register(&rf, "LR", LR_OFFSET, LR_SIZE);
        assert_register(&rf, "CTR", CTR_OFFSET, CTR_SIZE);
        assert_register(&rf, "XER", XER_OFFSET, XER_SIZE);
        assert_register(&rf, "PC", PC_OFFSET, PC_SIZE);
        assert_unique_names(&rf);
    }

    #[test]
    fn t360_ppc_capstone_mapping_reaches_gprs_and_special_registers() {
        for id in 87u16..=118u16 {
            let n = (id - CS_PPC_REG_R0) as u64;
            assert_eq!(
                cs_reg_to_varnode(RegId(id)),
                Some(gpr(n)),
                "capstone id {id}"
            );
        }
        assert_eq!(cs_reg_to_varnode(RegId(5)), Some(lr()));
        assert_eq!(cs_reg_to_varnode(RegId(3)), Some(ctr()));
        for id in 12u16..=19u16 {
            assert_eq!(cs_reg_to_varnode(RegId(id)), Some(cr()), "CR{id}");
        }
        assert_eq!(cs_reg_to_varnode(RegId(0)), None);
    }

    fn assert_register(rf: &RegisterFile, name: &str, offset: u64, size: u8) {
        let def = rf.registers.iter().find(|r| r.name == name).unwrap();
        assert_eq!(def.varnode, Varnode::reg(offset, size), "{name}");
    }

    fn assert_unique_names(rf: &RegisterFile) {
        let mut names = rf.registers.iter().map(|r| r.name).collect::<Vec<_>>();
        names.sort_unstable();
        names.dedup();
        assert_eq!(names.len(), rf.registers.len());
    }
}
