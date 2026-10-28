//! SPARC instruction decoder.
//!
//! SPARC v8 instruction formats:
//!   Format 1 (CALL): op=01 | disp30
//!   Format 2 (SETHI, Bicc): op=00 | rd(5) | op2(3) | imm22
//!   Format 3 (ALU, Load/Store): op=10/11 | rd(5) | op3(6) | rs1(5) | i(1) | rs2(5)/simm13

/// Decoded SPARC instruction.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SparcInsn {
    // Arithmetic / Logic (format 3, op=10)
    Add { rd: u8, rs1: u8, src2: Src2 },
    Sub { rd: u8, rs1: u8, src2: Src2 },
    And { rd: u8, rs1: u8, src2: Src2 },
    Or { rd: u8, rs1: u8, src2: Src2 },
    Xor { rd: u8, rs1: u8, src2: Src2 },
    Sll { rd: u8, rs1: u8, src2: Src2 },
    Srl { rd: u8, rs1: u8, src2: Src2 },
    Sra { rd: u8, rs1: u8, src2: Src2 },

    // Memory (format 3, op=11)
    Ld { rd: u8, rs1: u8, src2: Src2 },
    St { rd: u8, rs1: u8, src2: Src2 },

    // Branches (format 2, op=00, op2=010)
    Ba { disp22: i32 },
    Be { disp22: i32 },
    Bne { disp22: i32 },
    Bl { disp22: i32 },

    // Call (format 1, op=01)
    Call { disp30: i32 },

    // Return
    Retl,
    Ret,

    // SETHI (format 2, op=00, op2=100)
    Sethi { rd: u8, imm22: u32 },

    // NOP (sethi %g0, 0)
    Nop,
}

/// Second source operand: either a register or a sign-extended 13-bit immediate.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Src2 {
    Reg(u8),
    Imm(i32),
}

/// Decode a single 4-byte big-endian SPARC instruction.
pub fn decode(bytes: &[u8]) -> Option<SparcInsn> {
    if bytes.len() < 4 {
        return None;
    }
    let word = u32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    let op = (word >> 30) & 0x3;

    match op {
        // Format 1: CALL
        1 => {
            let disp30 = sign_extend(word & 0x3FFF_FFFF, 30);
            Some(SparcInsn::Call { disp30 })
        }
        // Format 2: Branches, SETHI, NOP
        0 => {
            let rd = ((word >> 25) & 0x1F) as u8;
            let op2 = (word >> 22) & 0x7;
            let imm22 = word & 0x003F_FFFF;

            match op2 {
                // Bicc: branch on integer condition codes
                0b010 => {
                    let cond = (word >> 25) & 0xF;
                    let disp22 = sign_extend(imm22, 22);
                    match cond {
                        0b1000 => Some(SparcInsn::Ba { disp22 }),  // BA (always)
                        0b0001 => Some(SparcInsn::Be { disp22 }),  // BE (equal)
                        0b1001 => Some(SparcInsn::Bne { disp22 }), // BNE (not equal)
                        0b0011 => Some(SparcInsn::Bl { disp22 }),  // BL (less)
                        _ => None,                                 // unsupported branch condition
                    }
                }
                // SETHI
                0b100 => {
                    if rd == 0 && imm22 == 0 {
                        Some(SparcInsn::Nop)
                    } else {
                        Some(SparcInsn::Sethi { rd, imm22 })
                    }
                }
                _ => None,
            }
        }
        // Format 3: ALU (op=10) or Load/Store (op=11)
        2 | 3 => {
            let rd = ((word >> 25) & 0x1F) as u8;
            let op3 = (word >> 19) & 0x3F;
            let rs1 = ((word >> 14) & 0x1F) as u8;
            let i = (word >> 13) & 1;
            let src2 = if i == 0 {
                Src2::Reg((word & 0x1F) as u8)
            } else {
                Src2::Imm(sign_extend(word & 0x1FFF, 13))
            };

            if op == 2 {
                // ALU
                match op3 {
                    0b000000 => Some(SparcInsn::Add { rd, rs1, src2 }),
                    0b000100 => Some(SparcInsn::Sub { rd, rs1, src2 }),
                    0b000001 => Some(SparcInsn::And { rd, rs1, src2 }),
                    0b000010 => Some(SparcInsn::Or { rd, rs1, src2 }),
                    0b000011 => Some(SparcInsn::Xor { rd, rs1, src2 }),
                    0b100101 => Some(SparcInsn::Sll { rd, rs1, src2 }),
                    0b100110 => Some(SparcInsn::Srl { rd, rs1, src2 }),
                    0b100111 => Some(SparcInsn::Sra { rd, rs1, src2 }),
                    // JMPL (used for RETL/RET)
                    0b111000 => {
                        // jmpl %i7+8, %g0 => ret
                        // jmpl %o7+8, %g0 => retl
                        if rd == 0 {
                            match (rs1, &src2) {
                                // %o7 = register 15, %i7 = register 31
                                (15, Src2::Imm(8)) => Some(SparcInsn::Retl),
                                (31, Src2::Imm(8)) => Some(SparcInsn::Ret),
                                _ => None,
                            }
                        } else {
                            None
                        }
                    }
                    _ => None,
                }
            } else {
                // Load/Store (op=11)
                match op3 {
                    0b000000 => Some(SparcInsn::Ld { rd, rs1, src2 }), // ld
                    0b000100 => Some(SparcInsn::St { rd, rs1, src2 }), // st
                    _ => None,
                }
            }
        }
        _ => None,
    }
}

/// Sign-extend a `bits`-wide unsigned value to i32.
fn sign_extend(val: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((val << shift) as i32) >> shift
}

#[cfg(test)]
// Test instruction words are spelled field by field, zero fields included.
#[allow(clippy::identity_op, clippy::unusual_byte_groupings)]
mod decode_tests {
    use super::*;

    #[test]
    fn test_decode_nop() {
        // NOP = sethi %g0, 0 = 0x01000000
        let bytes = 0x0100_0000u32.to_be_bytes();
        assert_eq!(decode(&bytes), Some(SparcInsn::Nop));
    }

    #[test]
    fn test_decode_add_reg() {
        // add %g1, %g2, %g3 => op=10, rd=3, op3=000000, rs1=1, i=0, rs2=2
        // 10 00011 000000 00001 0 00000000 00010
        // = 0b10_00011_000000_00001_0_0000000000_00010
        let word: u32 = 0b10_00011_000000_00001_0_00000000_00010;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Add {
                rd: 3,
                rs1: 1,
                src2: Src2::Reg(2)
            })
        );
    }

    #[test]
    fn test_decode_add_imm() {
        // add %g1, 5, %g3 => op=10, rd=3, op3=000000, rs1=1, i=1, simm13=5
        let word: u32 = 0b10_00011_000000_00001_1_0000000000101;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Add {
                rd: 3,
                rs1: 1,
                src2: Src2::Imm(5)
            })
        );
    }
}
