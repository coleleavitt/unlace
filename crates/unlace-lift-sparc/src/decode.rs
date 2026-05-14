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
    Addcc { rd: u8, rs1: u8, src2: Src2 },
    Sub { rd: u8, rs1: u8, src2: Src2 },
    Subcc { rd: u8, rs1: u8, src2: Src2 },
    And { rd: u8, rs1: u8, src2: Src2 },
    Or { rd: u8, rs1: u8, src2: Src2 },
    Xor { rd: u8, rs1: u8, src2: Src2 },
    Sll { rd: u8, rs1: u8, src2: Src2 },
    Srl { rd: u8, rs1: u8, src2: Src2 },
    Sra { rd: u8, rs1: u8, src2: Src2 },

    // Memory (format 3, op=11)
    Ldsb { rd: u8, rs1: u8, src2: Src2 },  // Load signed byte
    Ldsh { rd: u8, rs1: u8, src2: Src2 },  // Load signed half
    Ldub { rd: u8, rs1: u8, src2: Src2 },  // Load unsigned byte
    Lduh { rd: u8, rs1: u8, src2: Src2 },  // Load unsigned half
    Ld { rd: u8, rs1: u8, src2: Src2 },    // Load word
    Ldd { rd: u8, rs1: u8, src2: Src2 },   // Load doubleword
    Stb { rd: u8, rs1: u8, src2: Src2 },   // Store byte
    Sth { rd: u8, rs1: u8, src2: Src2 },   // Store half
    St { rd: u8, rs1: u8, src2: Src2 },    // Store word
    Std { rd: u8, rs1: u8, src2: Src2 },   // Store doubleword

    // Register window manipulation (format 3, op=10)
    Save { rd: u8, rs1: u8, src2: Src2 },
    Restore { rd: u8, rs1: u8, src2: Src2 },

    // Branches (format 2, op=00, op2=010)
    Ba { disp22: i32 },
    Be { disp22: i32 },
    Bne { disp22: i32 },
    Bg { disp22: i32 },
    Bl { disp22: i32 },

    // Call (format 1, op=01)
    Call { disp30: i32 },

    // JMPL (format 3, op=10, op3=111000)
    Jmpl { rd: u8, rs1: u8, src2: Src2 },

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
            let op2 = (word >> 22) & 0x7;
            let imm22 = word & 0x003F_FFFF;

            match op2 {
                // Bicc: branch on integer condition codes
                0b010 => {
                    let cond = (word >> 25) & 0xF;
                    let disp22 = sign_extend(imm22, 22);
                    match cond {
                        0b1000 => Some(SparcInsn::Ba { disp22 }),   // BA (always)
                        0b0001 => Some(SparcInsn::Be { disp22 }),   // BE (equal / z set)
                        0b1001 => Some(SparcInsn::Bne { disp22 }),  // BNE (not equal)
                        0b1010 => Some(SparcInsn::Bg { disp22 }),   // BG (greater)
                        0b0011 => Some(SparcInsn::Bl { disp22 }),   // BL (less)
                        _ => None,
                    }
                }
                // SETHI
                0b100 => {
                    let rd = ((word >> 25) & 0x1F) as u8;
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
                // ALU operations
                match op3 {
                    0b000000 => Some(SparcInsn::Add { rd, rs1, src2 }),
                    0b010000 => Some(SparcInsn::Addcc { rd, rs1, src2 }),
                    0b000100 => Some(SparcInsn::Sub { rd, rs1, src2 }),
                    0b010100 => Some(SparcInsn::Subcc { rd, rs1, src2 }),
                    0b000001 => Some(SparcInsn::And { rd, rs1, src2 }),
                    0b000010 => Some(SparcInsn::Or { rd, rs1, src2 }),
                    0b000011 => Some(SparcInsn::Xor { rd, rs1, src2 }),
                    0b100101 => Some(SparcInsn::Sll { rd, rs1, src2 }),
                    0b100110 => Some(SparcInsn::Srl { rd, rs1, src2 }),
                    0b100111 => Some(SparcInsn::Sra { rd, rs1, src2 }),
                    0b111100 => Some(SparcInsn::Save { rd, rs1, src2 }),
                    0b111101 => Some(SparcInsn::Restore { rd, rs1, src2 }),
                    0b111000 => Some(SparcInsn::Jmpl { rd, rs1, src2 }),
                    _ => None,
                }
            } else {
                // Load/Store (op=11)
                match op3 {
                    0b001001 => Some(SparcInsn::Ldsb { rd, rs1, src2 }),  // ldsb
                    0b001010 => Some(SparcInsn::Ldsh { rd, rs1, src2 }),  // ldsh
                    0b000001 => Some(SparcInsn::Ldub { rd, rs1, src2 }),  // ldub
                    0b000010 => Some(SparcInsn::Lduh { rd, rs1, src2 }),  // lduh
                    0b000000 => Some(SparcInsn::Ld { rd, rs1, src2 }),    // ld (word)
                    0b000011 => Some(SparcInsn::Ldd { rd, rs1, src2 }),   // ldd (doubleword)
                    0b000101 => Some(SparcInsn::Stb { rd, rs1, src2 }),   // stb
                    0b000110 => Some(SparcInsn::Sth { rd, rs1, src2 }),   // sth
                    0b000100 => Some(SparcInsn::St { rd, rs1, src2 }),    // st (word)
                    0b000111 => Some(SparcInsn::Std { rd, rs1, src2 }),   // std (doubleword)
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

    #[test]
    fn test_decode_addcc() {
        // addcc %g1, %g2, %g3 => op=10, rd=3, op3=010000, rs1=1, i=0, rs2=2
        let word: u32 = 0b10_00011_010000_00001_0_00000000_00010;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Addcc {
                rd: 3,
                rs1: 1,
                src2: Src2::Reg(2)
            })
        );
    }

    #[test]
    fn test_decode_subcc() {
        // subcc %g1, %g2, %g3 => op=10, rd=3, op3=010100, rs1=1, i=0, rs2=2
        let word: u32 = 0b10_00011_010100_00001_0_00000000_00010;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Subcc {
                rd: 3,
                rs1: 1,
                src2: Src2::Reg(2)
            })
        );
    }

    #[test]
    fn test_decode_save() {
        // save %sp, -96, %sp => 0x9de3bfa0
        let bytes = 0x9de3bfa0u32.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Save {
                rd: 14,
                rs1: 14,
                src2: Src2::Imm(-96)
            })
        );
    }

    #[test]
    fn test_decode_restore() {
        // restore %g0, %g0, %g0 => op=10, rd=0, op3=111101, rs1=0, i=0, rs2=0
        let word: u32 = 0b10_00000_111101_00000_0_00000000_00000;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Restore {
                rd: 0,
                rs1: 0,
                src2: Src2::Reg(0)
            })
        );
    }

    #[test]
    fn test_decode_jmpl() {
        // jmpl %o7+8, %g0 => op=10, rd=0, op3=111000, rs1=15(o7), i=1, simm13=8
        let word: u32 = 0b10_00000_111000_01111_1_0000000001000;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Jmpl {
                rd: 0,
                rs1: 15,
                src2: Src2::Imm(8)
            })
        );
    }

    #[test]
    fn test_decode_ld_word() {
        // ld [%g1 + %g2], %g3 => op=11, rd=3, op3=000000, rs1=1, i=0, rs2=2
        let word: u32 = 0b11_00011_000000_00001_0_00000000_00010;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Ld {
                rd: 3,
                rs1: 1,
                src2: Src2::Reg(2)
            })
        );
    }

    #[test]
    fn test_decode_ldub() {
        // ldub [%g1 + 0], %g3 => op=11, rd=3, op3=000001, rs1=1, i=1, simm13=0
        let word: u32 = 0b11_00011_000001_00001_1_0000000000000;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::Ldub {
                rd: 3,
                rs1: 1,
                src2: Src2::Imm(0)
            })
        );
    }

    #[test]
    fn test_decode_st_word() {
        // st %g3, [%g1 + 4] => op=11, rd=3, op3=000100, rs1=1, i=1, simm13=4
        let word: u32 = 0b11_00011_000100_00001_1_0000000000100;
        let bytes = word.to_be_bytes();
        assert_eq!(
            decode(&bytes),
            Some(SparcInsn::St {
                rd: 3,
                rs1: 1,
                src2: Src2::Imm(4)
            })
        );
    }

    #[test]
    fn test_decode_bg() {
        // bg target => op=00, cond=1010, op2=010, disp22
        let disp: u32 = 100; // +100 words
        let word: u32 = (0b00 << 30) | (0b1010 << 25) | (0b010 << 22) | disp;
        let bytes = word.to_be_bytes();
        assert_eq!(decode(&bytes), Some(SparcInsn::Bg { disp22: 100 }));
    }
}

// t331 — SPARC v9 extended instruction set.
/// SPARC v9 extended opcodes.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SparcV9Insn {
    /// MULX: 64-bit multiply.
    Mulx { rd: u8, rs1: u8, src2: Src2 },
    /// SDIVX: 64-bit signed divide.
    Sdivx { rd: u8, rs1: u8, src2: Src2 },
    /// UDIVX: 64-bit unsigned divide.
    Udivx { rd: u8, rs1: u8, src2: Src2 },
    /// MOVCC: conditional move (based on icc/xcc).
    Movcc { rd: u8, cond: u8, src2: Src2 },
    /// SAVE: allocate register window.
    Save { rd: u8, rs1: u8, src2: Src2 },
    /// RESTORE: deallocate register window.
    Restore { rd: u8, rs1: u8, src2: Src2 },
    /// LDXW: 64-bit load.
    Ldx { rd: u8, rs1: u8, src2: Src2 },
    /// STX: 64-bit store.
    Stx { rd: u8, rs1: u8, src2: Src2 },
    /// POPC: population count.
    Popc { rd: u8, src2: Src2 },
    /// CAS: compare-and-swap.
    Cas { rd: u8, rs1: u8, rs2: u8 },
}
