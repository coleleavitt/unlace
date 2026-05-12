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
pub const MSA_W0: u64 = 0x1000;

const MIPS_REG_NAMES: [&str; 32] = [
    "$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3", "$t4",
    "$t5", "$t6", "$t7", "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7", "$t8", "$t9",
    "$k0", "$k1", "$gp", "$sp", "$fp", "$ra",
];

pub fn reg64(offset: u64) -> Varnode {
    Varnode::new(SpaceId::Register, offset, 4)
}

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
    }
}

pub fn mips64_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(35);
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
    RegisterFile { registers: regs }
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
