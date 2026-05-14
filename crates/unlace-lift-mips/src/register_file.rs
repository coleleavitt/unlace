use unlace_ir::{RegisterDef, RegisterFile, SpaceId, Varnode};

pub const ZERO: u64 = 0;
pub const AT: u64 = 8;
pub const V0: u64 = 16;
pub const V1: u64 = 24;
pub const A0: u64 = 32;
pub const A1: u64 = 40;
pub const A2: u64 = 48;
pub const A3: u64 = 56;
pub const T0: u64 = 64;
pub const T1: u64 = 72;
pub const T2: u64 = 80;
pub const T3: u64 = 88;
pub const T4: u64 = 96;
pub const T5: u64 = 104;
pub const T6: u64 = 112;
pub const T7: u64 = 120;
pub const S0: u64 = 128;
pub const S1: u64 = 136;
pub const S2: u64 = 144;
pub const S3: u64 = 152;
pub const S4: u64 = 160;
pub const S5: u64 = 168;
pub const S6: u64 = 176;
pub const S7: u64 = 184;
pub const T8: u64 = 192;
pub const T9: u64 = 200;
pub const K0: u64 = 208;
pub const K1: u64 = 216;
pub const GP: u64 = 224;
pub const SP: u64 = 232;
pub const FP: u64 = 240;
pub const RA: u64 = 248;
pub const HI: u64 = 256;
pub const LO: u64 = 264;
pub const PC: u64 = 272;
pub const DSPCARRY: u64 = 280;
pub const DSPCCOND: u64 = 288;
pub const DSPOUTFLAG: u64 = 296;
pub const DSPPOS: u64 = 304;
pub const DSPSCOUNT: u64 = 312;
pub const AC0: u64 = 320;
pub const AC1: u64 = 336;
pub const AC2: u64 = 352;
pub const AC3: u64 = 368;

pub const FPR_BASE: u64 = 384;
pub const FCC0: u64 = FPR_BASE + 32 * 8;
pub const FPR_BASE: u64 = 280;
pub const FPR_STRIDE: u64 = 8;
pub const FCC0: u64 = FPR_BASE + 32 * FPR_STRIDE;
pub const FCSR: u64 = FCC0 + 8;

const MIPS_REG_NAMES: [&str; 32] = [
    "$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3", "$t4",
    "$t5", "$t6", "$t7", "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7", "$t8", "$t9",
    "$k0", "$k1", "$gp", "$sp", "$fp", "$ra",
];

pub fn reg64(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 4)
}

pub fn fpr_offset(index: u8) -> u64 {
    FPR_BASE + u64::from(index) * FPR_STRIDE
}

pub fn fpr_reg(reg: capstone::RegId, size: u8) -> Option<Varnode> {
    fpr_index(reg).map(|index| Varnode::new(SpaceId::Register, fpr_offset(index), size))
}

pub fn fcc_reg(index: u8) -> Varnode {
    Varnode::new(SpaceId::Register, FCC0 + u64::from(index), 1)
}

pub fn mips64_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(78);
    let mut regs = Vec::with_capacity(68);
    for (i, name) in MIPS_REG_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg((i as u64) * 8, 8),
        });
    }
    regs.push(RegisterDef {
        name: "HI",
        varnode: reg64(HI),
    });
    regs.push(RegisterDef {
        name: "LO",
        varnode: reg64(LO),
    });
    regs.push(RegisterDef {
        name: "PC",
        varnode: reg64(PC),
    });
    regs.push(RegisterDef {
        name: "DSPCARRY",
        varnode: reg64(DSPCARRY),
    });
    regs.push(RegisterDef {
        name: "DSPCCOND",
        varnode: reg64(DSPCCOND),
    });
    regs.push(RegisterDef {
        name: "DSPOUTFLAG",
        varnode: reg64(DSPOUTFLAG),
    });
    regs.push(RegisterDef {
        name: "DSPPOS",
        varnode: reg64(DSPPOS),
    });
    regs.push(RegisterDef {
        name: "DSPSCOUNT",
        varnode: reg64(DSPSCOUNT),
    });
    regs.push(RegisterDef {
        name: "AC0",
        varnode: Varnode::reg(AC0, 16),
    });
    regs.push(RegisterDef {
        name: "AC1",
        varnode: Varnode::reg(AC1, 16),
    });
    regs.push(RegisterDef {
        name: "AC2",
        varnode: Varnode::reg(AC2, 16),
    });
    regs.push(RegisterDef {
        name: "AC3",
        varnode: Varnode::reg(AC3, 16),
    });
    // FPR $f0-$f31
    static FPR_NAMES: [&str; 32] = [
        "$f0", "$f1", "$f2", "$f3", "$f4", "$f5", "$f6", "$f7",
        "$f8", "$f9", "$f10", "$f11", "$f12", "$f13", "$f14", "$f15",
        "$f16", "$f17", "$f18", "$f19", "$f20", "$f21", "$f22", "$f23",
        "$f24", "$f25", "$f26", "$f27", "$f28", "$f29", "$f30", "$f31",
    ];
    for (i, name) in FPR_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(FPR_BASE + (i as u64) * 8, 8),
        });
    }
    regs.push(RegisterDef {
        name: "FCC0",
        varnode: Varnode::reg(FCC0, 1),
    });
    regs.push(RegisterDef {
        name: "FCSR",
        varnode: Varnode::reg(FCSR, 4),
    for i in 0..32 {
        let name: &'static str = Box::leak(format!("$f{i}").into_boxed_str());
        regs.push(RegisterDef {
            name,
            varnode: Varnode::new(SpaceId::Register, fpr_offset(i as u8), 8),
        });
    }
    regs.push(RegisterDef {
        name: "FCC0",
        varnode: fcc_reg(0),
    });
    regs.push(RegisterDef {
        name: "FCSR",
        varnode: Varnode::new(SpaceId::Register, FCSR, 4),
    });
    RegisterFile { registers: regs }
}

pub fn fpr_index(reg: capstone::RegId) -> Option<u8> {
    use capstone::arch::mips::MipsReg::*;
    let reg_u16: u16 = reg.0;
    match reg_u16 {
        x if x == MIPS_REG_F0 as u16 => Some(0),
        x if x == MIPS_REG_F1 as u16 => Some(1),
        x if x == MIPS_REG_F2 as u16 => Some(2),
        x if x == MIPS_REG_F3 as u16 => Some(3),
        x if x == MIPS_REG_F4 as u16 => Some(4),
        x if x == MIPS_REG_F5 as u16 => Some(5),
        x if x == MIPS_REG_F6 as u16 => Some(6),
        x if x == MIPS_REG_F7 as u16 => Some(7),
        x if x == MIPS_REG_F8 as u16 => Some(8),
        x if x == MIPS_REG_F9 as u16 => Some(9),
        x if x == MIPS_REG_F10 as u16 => Some(10),
        x if x == MIPS_REG_F11 as u16 => Some(11),
        x if x == MIPS_REG_F12 as u16 => Some(12),
        x if x == MIPS_REG_F13 as u16 => Some(13),
        x if x == MIPS_REG_F14 as u16 => Some(14),
        x if x == MIPS_REG_F15 as u16 => Some(15),
        x if x == MIPS_REG_F16 as u16 => Some(16),
        x if x == MIPS_REG_F17 as u16 => Some(17),
        x if x == MIPS_REG_F18 as u16 => Some(18),
        x if x == MIPS_REG_F19 as u16 => Some(19),
        x if x == MIPS_REG_F20 as u16 => Some(20),
        x if x == MIPS_REG_F21 as u16 => Some(21),
        x if x == MIPS_REG_F22 as u16 => Some(22),
        x if x == MIPS_REG_F23 as u16 => Some(23),
        x if x == MIPS_REG_F24 as u16 => Some(24),
        x if x == MIPS_REG_F25 as u16 => Some(25),
        x if x == MIPS_REG_F26 as u16 => Some(26),
        x if x == MIPS_REG_F27 as u16 => Some(27),
        x if x == MIPS_REG_F28 as u16 => Some(28),
        x if x == MIPS_REG_F29 as u16 => Some(29),
        x if x == MIPS_REG_F30 as u16 => Some(30),
        x if x == MIPS_REG_F31 as u16 => Some(31),
        _ => None,
    }
}

pub fn capstone_reg_to_offset(reg: capstone::RegId) -> Option<u64> {
    use capstone::arch::mips::MipsReg::*;
    let reg_u16: u16 = reg.0;
    match reg_u16 {
        x if x == MIPS_REG_0 as u16 => Some(ZERO),
        x if x == MIPS_REG_1 as u16 => Some(AT),
        x if x == MIPS_REG_2 as u16 => Some(V0),
        x if x == MIPS_REG_3 as u16 => Some(V1),
        x if x == MIPS_REG_4 as u16 => Some(A0),
        x if x == MIPS_REG_5 as u16 => Some(A1),
        x if x == MIPS_REG_6 as u16 => Some(A2),
        x if x == MIPS_REG_7 as u16 => Some(A3),
        x if x == MIPS_REG_8 as u16 => Some(T0),
        x if x == MIPS_REG_9 as u16 => Some(T1),
        x if x == MIPS_REG_10 as u16 => Some(T2),
        x if x == MIPS_REG_11 as u16 => Some(T3),
        x if x == MIPS_REG_12 as u16 => Some(T4),
        x if x == MIPS_REG_13 as u16 => Some(T5),
        x if x == MIPS_REG_14 as u16 => Some(T6),
        x if x == MIPS_REG_15 as u16 => Some(T7),
        x if x == MIPS_REG_16 as u16 => Some(S0),
        x if x == MIPS_REG_17 as u16 => Some(S1),
        x if x == MIPS_REG_18 as u16 => Some(S2),
        x if x == MIPS_REG_19 as u16 => Some(S3),
        x if x == MIPS_REG_20 as u16 => Some(S4),
        x if x == MIPS_REG_21 as u16 => Some(S5),
        x if x == MIPS_REG_22 as u16 => Some(S6),
        x if x == MIPS_REG_23 as u16 => Some(S7),
        x if x == MIPS_REG_24 as u16 => Some(T8),
        x if x == MIPS_REG_25 as u16 => Some(T9),
        x if x == MIPS_REG_26 as u16 => Some(K0),
        x if x == MIPS_REG_27 as u16 => Some(K1),
        x if x == MIPS_REG_28 as u16 => Some(GP),
        x if x == MIPS_REG_29 as u16 => Some(SP),
        x if x == MIPS_REG_30 as u16 => Some(FP),
        x if x == MIPS_REG_31 as u16 => Some(RA),
        _ => None,
    }
}

// MSA (MIPS SIMD Architecture) register support
pub const MSA_W0: u64 = 0x1000;

pub fn msa_reg_by_index(index: u8) -> Varnode {
    Varnode::reg(MSA_W0 + (index as u64) * 16, 16)
}

pub fn msa_reg(reg: capstone::RegId) -> Option<Varnode> {
    msa_reg_index(reg).map(msa_reg_by_index)
}

pub fn msa_reg_index(reg: capstone::RegId) -> Option<u8> {
    use capstone::arch::mips::MipsReg::*;
    let reg_u16: u16 = reg.0;
    let first = MIPS_REG_W0 as u16;
    let last = MIPS_REG_W31 as u16;
    if (first..=last).contains(&reg_u16) {
        Some((reg_u16 - first) as u8)
    } else {
        None
// MIPS MSA (MIPS SIMD Architecture) registers.
// W0-W31 are 128-bit vector registers overlaying the FPU registers.
const MSA_BASE: u64 = 0x400;

pub const fn msa_w_offset(n: u64) -> u64 {
    MSA_BASE + n * 16
}

pub const MSA_W0: u64 = msa_w_offset(0);
pub const MSA_W31: u64 = msa_w_offset(31);
pub const MSACSR: u64 = MSA_BASE + 32 * 16;

pub const MSA_W_SIZE: u8 = 16;


#[cfg(test)]
mod msa_tests {
    use super::*;

    #[test]
    fn msa_w_offsets_sequential() {
        for i in 0..31 {
            assert_eq!(msa_w_offset(i + 1) - msa_w_offset(i), 16);
        }
    }

    #[test]
    fn msacsr_after_w_registers() {
        assert!(MSACSR > MSA_W31);
#[cfg(test)]
mod tests {
    use super::*;
    use capstone::RegId;
    use capstone::arch::mips::MipsReg::*;

    #[test]
    fn t360_mips64_register_file_full_layout() {
        let rf = mips64_register_file();
        assert_eq!(rf.registers.len(), 35);
        for (i, name) in MIPS_REG_NAMES.iter().enumerate() {
            assert_register(&rf, name, (i as u64) * 8, 8);
        }
        assert_register(&rf, "HI", HI, 4);
        assert_register(&rf, "LO", LO, 4);
        assert_register(&rf, "PC", PC, 4);
        assert_unique_names(&rf);
    }

    #[test]
    fn t360_mips_capstone_register_offsets_cover_all_gprs() {
        let regs = [
            MIPS_REG_0,
            MIPS_REG_1,
            MIPS_REG_2,
            MIPS_REG_3,
            MIPS_REG_4,
            MIPS_REG_5,
            MIPS_REG_6,
            MIPS_REG_7,
            MIPS_REG_8,
            MIPS_REG_9,
            MIPS_REG_10,
            MIPS_REG_11,
            MIPS_REG_12,
            MIPS_REG_13,
            MIPS_REG_14,
            MIPS_REG_15,
            MIPS_REG_16,
            MIPS_REG_17,
            MIPS_REG_18,
            MIPS_REG_19,
            MIPS_REG_20,
            MIPS_REG_21,
            MIPS_REG_22,
            MIPS_REG_23,
            MIPS_REG_24,
            MIPS_REG_25,
            MIPS_REG_26,
            MIPS_REG_27,
            MIPS_REG_28,
            MIPS_REG_29,
            MIPS_REG_30,
            MIPS_REG_31,
        ];
        for (i, reg) in regs.iter().enumerate() {
            assert_eq!(
                capstone_reg_to_offset(RegId(*reg as u16)),
                Some((i as u64) * 8)
            );
        }
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
