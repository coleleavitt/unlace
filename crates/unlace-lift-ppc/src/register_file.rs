//! PowerPC register file layouts.
//!
//! PPC32: r0–r31 as 32-bit GPRs, plus CR, LR, CTR, XER, and PC.
//! PPC64: r0–r31 as 64-bit GPRs, plus CR, LR, CTR, XER, and PC.

use capstone::RegId;
use unlace_ir::{RegisterDef, RegisterFile, SpaceId, Varnode};

pub const GPR_BASE: u64 = 0;
pub const GPR_COUNT: usize = 32;

pub const PPC32_GPR_SIZE: u8 = 4;
pub const PPC64_GPR_SIZE: u8 = 8;

pub const CR_OFFSET: u64 = 256;
pub const CR_SIZE: u8 = 4;
pub const LR_OFFSET: u64 = 264;
pub const LR_SIZE: u8 = 8;
pub const CTR_OFFSET: u64 = 272;
pub const CTR_SIZE: u8 = 8;
pub const XER_OFFSET: u64 = 280;
pub const XER_SIZE: u8 = 4;
pub const PC_OFFSET: u64 = 288;
pub const PC_SIZE: u8 = 8;

const PPC_GPR_NAMES: [&str; GPR_COUNT] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14",
    "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27",
    "r28", "r29", "r30", "r31",
];

#[inline]
pub const fn gpr_offset(n: u64, gpr_size: u8) -> u64 {
    GPR_BASE + n * (gpr_size as u64)
}

fn build_register_file(gpr_size: u8) -> RegisterFile {
    let mut regs = Vec::with_capacity(37);
    for (i, name) in PPC_GPR_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(gpr_offset(i as u64, gpr_size), gpr_size),
        });
    }
    regs.push(RegisterDef {
        name: "CR",
        varnode: Varnode::reg(CR_OFFSET, CR_SIZE),
    });
    regs.push(RegisterDef {
        name: "LR",
        varnode: Varnode::reg(LR_OFFSET, LR_SIZE),
    });
    regs.push(RegisterDef {
        name: "CTR",
        varnode: Varnode::reg(CTR_OFFSET, CTR_SIZE),
    });
    regs.push(RegisterDef {
        name: "XER",
        varnode: Varnode::reg(XER_OFFSET, XER_SIZE),
    });
    regs.push(RegisterDef {
        name: "PC",
        varnode: Varnode::reg(PC_OFFSET, PC_SIZE),
    });
    RegisterFile { registers: regs }
}

pub fn ppc32_register_file() -> RegisterFile {
    build_register_file(PPC32_GPR_SIZE)
}

pub fn ppc64_register_file() -> RegisterFile {
    build_register_file(PPC64_GPR_SIZE)
}

/// Helper: 64-bit GPR varnode.
#[inline]
pub fn gpr(n: u64) -> Varnode {
    Varnode::new(
        SpaceId::Register,
        gpr_offset(n, PPC64_GPR_SIZE),
        PPC64_GPR_SIZE,
    )
}

#[inline]
pub fn cr() -> Varnode {
    Varnode::new(SpaceId::Register, CR_OFFSET, CR_SIZE)
}

#[inline]
pub fn lr() -> Varnode {
    Varnode::new(SpaceId::Register, LR_OFFSET, LR_SIZE)
}

#[inline]
pub fn ctr() -> Varnode {
    Varnode::new(SpaceId::Register, CTR_OFFSET, CTR_SIZE)
}

/// First capstone PPC_REG_R0 id.
const CS_PPC_REG_R0: u16 = 87;

/// Map a capstone `RegId` to a register-space `Varnode`.
/// Returns `None` for unrecognised / floating-point registers.
pub fn cs_reg_to_varnode(reg: RegId) -> Option<Varnode> {
    let id = reg.0;
    match id {
        // r0–r31 (capstone ids 87..=118)
        r @ 87..=118 => {
            let n = (r - CS_PPC_REG_R0) as u64;
            Some(gpr(n))
        }
        // LR = 5
        5 => Some(lr()),
        // CTR = 3
        3 => Some(ctr()),
        // CR0 = 12 ... CR7 = 19 — map to whole CR register for now
        12..=19 => Some(cr()),
        _ => None,
    }
}

// t326 — AltiVec/VMX/VSX vector register file extension.
pub const VR_BASE: u64 = 296;
pub const VR_COUNT: usize = 32;
pub const VR_SIZE: u8 = 16; // 128-bit AltiVec registers
pub const VSR_BASE: u64 = VR_BASE + (VR_COUNT as u64) * (VR_SIZE as u64); // VSX overlaps
pub const VSR_COUNT: usize = 64;
pub const VSR_SIZE: u8 = 16;
pub const VSCR_OFFSET: u64 = VSR_BASE + (VSR_COUNT as u64) * (VSR_SIZE as u64);
pub const VRSAVE_OFFSET: u64 = VSCR_OFFSET + 4;

pub fn altivec_register_file_extension() -> Vec<RegisterDef> {
    let mut regs = Vec::with_capacity(34);
    static VR_NAMES: [&str; 32] = [
        "vr0","vr1","vr2","vr3","vr4","vr5","vr6","vr7",
        "vr8","vr9","vr10","vr11","vr12","vr13","vr14","vr15",
        "vr16","vr17","vr18","vr19","vr20","vr21","vr22","vr23",
        "vr24","vr25","vr26","vr27","vr28","vr29","vr30","vr31",
    ];
    for (i, name) in VR_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(VR_BASE + (i as u64) * (VR_SIZE as u64), VR_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "VSCR",
        varnode: Varnode::reg(VSCR_OFFSET, 4),
    });
    regs.push(RegisterDef {
        name: "VRSAVE",
        varnode: Varnode::reg(VRSAVE_OFFSET, 4),
    });
    regs
}
