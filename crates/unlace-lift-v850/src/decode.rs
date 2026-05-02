//! Custom V850 instruction decoder.
//!
//! Decodes V850 (V850E2M) machine code from raw bytes. The V850 ISA uses
//! variable-length instructions: 16-bit (Formats I–IV) and 32-bit
//! (Formats V–XIII). All data is little-endian.
//!
//! Reference: Renesas V850E2M Architecture, Athrill V850E2M simulator.

/// A decoded V850 instruction.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct V850Insn {
    /// The decoded operation.
    pub op: V850Op,
    /// Instruction length in bytes (2 or 4).
    pub len: usize,
}

/// V850 operations we support lifting.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum V850Op {
    // --- Data movement ---
    /// MOV reg1, reg2  (reg2 = reg1)
    Mov { dst: u8, src: u8 },
    /// MOV imm5, reg2  (reg2 = sign_ext(imm5))
    MovImm5 { dst: u8, imm: i32 },
    /// MOVEA imm16, reg1, reg2  (reg2 = reg1 + sign_ext(imm16))
    Movea { dst: u8, src: u8, imm: i32 },
    /// MOVHI imm16, reg1, reg2  (reg2 = reg1 + (imm16 << 16))
    Movhi { dst: u8, src: u8, imm: u16 },
    /// NOP (MOV r0, r0)
    Nop,
    /// NOT reg1, reg2  (reg2 = ~reg1)
    Not { dst: u8, src: u8 },

    // --- Arithmetic ---
    /// ADD reg1, reg2  (reg2 = reg2 + reg1)
    Add { dst: u8, src: u8 },
    /// ADD imm5, reg2  (reg2 = reg2 + sign_ext(imm5))
    AddImm5 { dst: u8, imm: i32 },
    /// ADDI imm16, reg1, reg2  (reg2 = reg1 + sign_ext(imm16))
    Addi { dst: u8, src: u8, imm: i32 },
    /// SUB reg1, reg2  (reg2 = reg2 - reg1)
    Sub { dst: u8, src: u8 },
    /// SUBR reg1, reg2  (reg2 = reg1 - reg2)
    Subr { dst: u8, src: u8 },
    /// CMP reg1, reg2  (flags = reg2 - reg1, result discarded)
    Cmp { reg1: u8, reg2: u8 },
    /// CMP imm5, reg2  (flags = reg2 - sign_ext(imm5), result discarded)
    CmpImm5 { reg2: u8, imm: i32 },
    /// MULH reg1, reg2  (reg2 = low32(reg2 * reg1))
    Mulh { dst: u8, src: u8 },
    /// MULH imm5, reg2
    MulhImm5 { dst: u8, imm: i32 },

    // --- Bitwise ---
    /// AND reg1, reg2  (reg2 = reg2 & reg1)
    And { dst: u8, src: u8 },
    /// ANDI imm16, reg1, reg2  (reg2 = reg1 & zero_ext(imm16))
    Andi { dst: u8, src: u8, imm: u16 },
    /// OR reg1, reg2  (reg2 = reg2 | reg1)
    Or { dst: u8, src: u8 },
    /// ORI imm16, reg1, reg2  (reg2 = reg1 | zero_ext(imm16))
    Ori { dst: u8, src: u8, imm: u16 },
    /// XOR reg1, reg2  (reg2 = reg2 ^ reg1)
    Xor { dst: u8, src: u8 },
    /// XORI imm16, reg1, reg2  (reg2 = reg1 ^ zero_ext(imm16))
    Xori { dst: u8, src: u8, imm: u16 },
    /// TST reg1, reg2  (flags = reg2 & reg1, result discarded)
    Tst { reg1: u8, reg2: u8 },

    // --- Shift ---
    /// SHL imm5, reg2  (reg2 = reg2 << imm5)
    ShlImm { dst: u8, shift: u8 },
    /// SHR imm5, reg2  (reg2 = reg2 >> imm5, logical)
    ShrImm { dst: u8, shift: u8 },
    /// SAR imm5, reg2  (reg2 = reg2 >> imm5, arithmetic)
    SarImm { dst: u8, shift: u8 },

    // --- Load/Store (Format VII) ---
    /// LD.B disp16[reg1], reg2
    LdB { dst: u8, base: u8, disp: i32 },
    /// LD.H disp16[reg1], reg2
    LdH { dst: u8, base: u8, disp: i32 },
    /// LD.W disp16[reg1], reg2
    LdW { dst: u8, base: u8, disp: i32 },
    /// ST.B reg2, disp16[reg1]
    StB { src: u8, base: u8, disp: i32 },
    /// ST.H reg2, disp16[reg1]
    StH { src: u8, base: u8, disp: i32 },
    /// ST.W reg2, disp16[reg1]
    StW { src: u8, base: u8, disp: i32 },

    // --- Control flow ---
    /// JMP [reg1]  (PC = reg1, indirect jump)
    Jmp { reg: u8 },
    /// JR disp22  (PC = PC + sign_ext(disp22))
    Jr { offset: i32 },
    /// JARL disp22, reg2  (reg2 = PC+4, PC = PC + sign_ext(disp22))
    Jarl { link: u8, offset: i32 },
    /// Bcond disp9  (conditional branch)
    Bcond { cond: BranchCond, offset: i32 },

    // --- Sign/Zero extension (Format I special) ---
    /// ZXB reg1 (zero-extend byte)
    Zxb { reg: u8 },
    /// ZXH reg1 (zero-extend halfword)
    Zxh { reg: u8 },
    /// SXB reg1 (sign-extend byte)
    Sxb { reg: u8 },
    /// SXH reg1 (sign-extend halfword)
    Sxh { reg: u8 },

    /// Instruction we don't (yet) decode.
    Unknown { hw0: u16 },
}

/// V850 branch condition codes (Bcond bits[3:0]).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BranchCond {
    /// BV:  OV == 1
    V = 0,
    /// BL:  CY == 1  (unsigned below)
    L = 1,
    /// BE:  Z == 1
    E = 2,
    /// BNH: CY == 1 || Z == 1  (unsigned not higher)
    Nh = 3,
    /// BN:  S == 1
    N = 4,
    /// BR:  always (unconditional short branch)
    R = 5,
    /// BLT: S != OV  (signed less)
    Lt = 6,
    /// BLE: Z == 1 || S != OV  (signed less or equal)
    Le = 7,
    /// BNV: OV == 0
    Nv = 8,
    /// BNL: CY == 0  (unsigned above or equal)
    Nl = 9,
    /// BNE: Z == 0
    Ne = 10,
    /// BH:  CY == 0 && Z == 0  (unsigned higher)
    H = 11,
    /// BP:  S == 0
    P = 12,
    /// BSA: SAT == 1
    Sa = 13,
    /// BGE: S == OV  (signed greater or equal)
    Ge = 14,
    /// BGT: Z == 0 && S == OV  (signed greater)
    Gt = 15,
}

impl BranchCond {
    fn from_bits(bits: u8) -> Self {
        match bits & 0xF {
            0 => Self::V,
            1 => Self::L,
            2 => Self::E,
            3 => Self::Nh,
            4 => Self::N,
            5 => Self::R,
            6 => Self::Lt,
            7 => Self::Le,
            8 => Self::Nv,
            9 => Self::Nl,
            10 => Self::Ne,
            11 => Self::H,
            12 => Self::P,
            13 => Self::Sa,
            14 => Self::Ge,
            15 => Self::Gt,
            _ => unreachable!(),
        }
    }
}

// ---------------------------------------------------------------------------
// Sign-extension helpers
// ---------------------------------------------------------------------------

fn sign_ext(val: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((val << shift) as i32) >> shift
}

// ---------------------------------------------------------------------------
// Public decode entry point
// ---------------------------------------------------------------------------

/// Decode one V850 instruction from `bytes` at the given address.
///
/// Returns `None` if the buffer is too short (< 2 bytes).
pub fn decode(bytes: &[u8], _addr: u64) -> Option<V850Insn> {
    if bytes.len() < 2 {
        return None;
    }

    let hw0 = u16::from_le_bytes([bytes[0], bytes[1]]);

    let opcode_10_5 = (hw0 >> 5) & 0x3F;
    let opcode_10_7 = (hw0 >> 7) & 0xF;
    let opcode_6_5 = (hw0 >> 5) & 0x3;
    let reg1 = (hw0 & 0x1F) as u8;
    let reg2 = ((hw0 >> 11) & 0x1F) as u8;

    // Extended 32-bit instructions (bits[10:5] == 0b111111)
    // We skip these for MVP — emit Unknown
    if opcode_10_5 == 0x3F {
        let len = if bytes.len() >= 4 { 4 } else { 2 };
        return Some(V850Insn {
            op: V850Op::Unknown { hw0 },
            len,
        });
    }

    // -----------------------------------------------------------------
    // 32-bit instruction formats: bits[10:7] >= 0b1100
    // -----------------------------------------------------------------
    if opcode_10_7 >= 0b1100 {
        if bytes.len() < 4 {
            return None;
        }
        let hw1 = u16::from_le_bytes([bytes[2], bytes[3]]);
        return Some(decode_32bit(hw0, hw1, opcode_10_7, opcode_6_5, reg1, reg2));
    }

    // -----------------------------------------------------------------
    // 16-bit instruction formats: bits[10:7] < 0b1100
    // -----------------------------------------------------------------
    Some(decode_16bit(hw0, opcode_10_7, opcode_6_5, reg1, reg2))
}

// ---------------------------------------------------------------------------
// 16-bit instruction decoder
// ---------------------------------------------------------------------------

fn decode_16bit(hw0: u16, bits_10_7: u16, bits_6_5: u16, reg1: u8, reg2: u8) -> V850Insn {
    let op = match (bits_10_7, bits_6_5) {
        // Format I: reg-reg operations
        (0b0000, 0b00) => {
            // MOV / NOP / SYNC*
            if reg1 == 0 && reg2 == 0 {
                V850Op::Nop
            } else {
                V850Op::Mov {
                    dst: reg2,
                    src: reg1,
                }
            }
        }
        (0b0000, 0b01) => V850Op::Not {
            dst: reg2,
            src: reg1,
        },
        (0b0000, 0b10) => {
            // DIVH / SWITCH / FETRAP / RIE — complex dispatch, emit Unknown for MVP
            V850Op::Unknown { hw0 }
        }
        (0b0000, 0b11) => {
            if reg2 == 0 {
                V850Op::Jmp { reg: reg1 }
            } else {
                // SLD.BU / SLD.HU — short load unsigned, skip for MVP
                V850Op::Unknown { hw0 }
            }
        }

        // Format I: saturating / extension ops
        (0b0001, 0b00) => {
            if reg2 == 0 {
                V850Op::Zxb { reg: reg1 }
            } else {
                V850Op::Unknown { hw0 } // SATSUBR
            }
        }
        (0b0001, 0b01) => {
            if reg2 == 0 {
                V850Op::Sxb { reg: reg1 }
            } else {
                V850Op::Unknown { hw0 } // SATSUB
            }
        }
        (0b0001, 0b10) => {
            if reg2 == 0 {
                V850Op::Zxh { reg: reg1 }
            } else {
                V850Op::Unknown { hw0 } // SATADD
            }
        }
        (0b0001, 0b11) => {
            if reg2 == 0 {
                V850Op::Sxh { reg: reg1 }
            } else {
                V850Op::Mulh {
                    dst: reg2,
                    src: reg1,
                }
            }
        }

        // Format I: bitwise
        (0b0010, 0b00) => V850Op::Or {
            dst: reg2,
            src: reg1,
        },
        (0b0010, 0b01) => V850Op::Xor {
            dst: reg2,
            src: reg1,
        },
        (0b0010, 0b10) => V850Op::And {
            dst: reg2,
            src: reg1,
        },
        (0b0010, 0b11) => V850Op::Tst { reg1, reg2 },

        // Format I: arithmetic
        (0b0011, 0b00) => V850Op::Subr {
            dst: reg2,
            src: reg1,
        },
        (0b0011, 0b01) => V850Op::Sub {
            dst: reg2,
            src: reg1,
        },
        (0b0011, 0b10) => V850Op::Add {
            dst: reg2,
            src: reg1,
        },
        (0b0011, 0b11) => V850Op::Cmp { reg1, reg2 },

        // Format II: immediate operations
        (0b0100, 0b00) => {
            if reg2 != 0 {
                V850Op::MovImm5 {
                    dst: reg2,
                    imm: sign_ext(reg1 as u32, 5),
                }
            } else {
                V850Op::Unknown { hw0 } // CALLT
            }
        }
        (0b0100, 0b01) => V850Op::Unknown { hw0 }, // SATADD imm5 / CALLT
        (0b0100, 0b10) => V850Op::AddImm5 {
            dst: reg2,
            imm: sign_ext(reg1 as u32, 5),
        },
        (0b0100, 0b11) => V850Op::CmpImm5 {
            reg2,
            imm: sign_ext(reg1 as u32, 5),
        },

        // Format II: shifts
        (0b0101, 0b00) => V850Op::ShrImm {
            dst: reg2,
            shift: reg1,
        },
        (0b0101, 0b01) => V850Op::SarImm {
            dst: reg2,
            shift: reg1,
        },
        (0b0101, 0b10) => V850Op::ShlImm {
            dst: reg2,
            shift: reg1,
        },
        (0b0101, 0b11) => {
            // MULH imm5 / JR 16-bit / JARL 16-bit
            if reg2 != 0 {
                V850Op::MulhImm5 {
                    dst: reg2,
                    imm: sign_ext(reg1 as u32, 5),
                }
            } else {
                V850Op::Unknown { hw0 }
            }
        }

        // Format III: conditional branch
        (0b1010, 0b01) | (0b1011, _) => {
            let disp_hi = ((hw0 >> 11) & 0x1F) as u32;
            let disp_lo = ((hw0 >> 4) & 0x7) as u32;
            let raw9 = (disp_hi << 4) | (disp_lo << 1); // bit0 always 0
            let offset = sign_ext(raw9, 9);
            let cond_bits = (hw0 & 0xF) as u8;
            V850Op::Bcond {
                cond: BranchCond::from_bits(cond_bits),
                offset,
            }
        }

        // Format IV: short load/store (ep-relative) — skip for MVP
        (0b0110, _) | (0b0111, _) | (0b1000, _) | (0b1001, _) | (0b1010, _) => {
            V850Op::Unknown { hw0 }
        }

        _ => V850Op::Unknown { hw0 },
    };

    V850Insn { op, len: 2 }
}

// ---------------------------------------------------------------------------
// 32-bit instruction decoder
// ---------------------------------------------------------------------------

fn decode_32bit(hw0: u16, hw1: u16, bits_10_7: u16, bits_6_5: u16, reg1: u8, reg2: u8) -> V850Insn {
    let op = match (bits_10_7, bits_6_5) {
        // Format VI: ADDI imm16, reg1, reg2
        (0b1100, 0b00) => {
            let imm = sign_ext(hw1 as u32, 16);
            V850Op::Addi {
                dst: reg2,
                src: reg1,
                imm,
            }
        }
        // Format VI: MOVEA imm16, reg1, reg2
        (0b1100, 0b01) => {
            if reg2 != 0 {
                let imm = sign_ext(hw1 as u32, 16);
                V850Op::Movea {
                    dst: reg2,
                    src: reg1,
                    imm,
                }
            } else {
                V850Op::Unknown { hw0 } // MOV imm32
            }
        }
        // Format VI: MOVHI imm16, reg1, reg2
        (0b1100, 0b10) => {
            if reg2 != 0 {
                V850Op::Movhi {
                    dst: reg2,
                    src: reg1,
                    imm: hw1,
                }
            } else {
                V850Op::Unknown { hw0 } // DISPOSE
            }
        }
        // Format VI: SATSUBI
        (0b1100, 0b11) => V850Op::Unknown { hw0 },

        // Format VI: ORI imm16, reg1, reg2
        (0b1101, 0b00) => V850Op::Ori {
            dst: reg2,
            src: reg1,
            imm: hw1,
        },
        // Format VI: XORI imm16, reg1, reg2
        (0b1101, 0b01) => V850Op::Xori {
            dst: reg2,
            src: reg1,
            imm: hw1,
        },
        // Format VI: ANDI imm16, reg1, reg2
        (0b1101, 0b10) => V850Op::Andi {
            dst: reg2,
            src: reg1,
            imm: hw1,
        },
        // MULHI / JMP disp32
        (0b1101, 0b11) => V850Op::Unknown { hw0 },

        // Format VII: LD.B disp16[reg1], reg2
        (0b1110, 0b00) => {
            let disp = sign_ext(hw1 as u32, 16);
            V850Op::LdB {
                dst: reg2,
                base: reg1,
                disp,
            }
        }
        // Format VII: LD.H / LD.W
        (0b1110, 0b01) => {
            let disp_raw = ((hw1 >> 1) & 0x7FFF) as u32;
            let disp = sign_ext(disp_raw << 1, 16);
            if hw1 & 1 == 0 {
                V850Op::LdH {
                    dst: reg2,
                    base: reg1,
                    disp,
                }
            } else {
                V850Op::LdW {
                    dst: reg2,
                    base: reg1,
                    disp,
                }
            }
        }
        // Format VII: ST.B reg2, disp16[reg1]
        (0b1110, 0b10) => {
            let disp = sign_ext(hw1 as u32, 16);
            V850Op::StB {
                src: reg2,
                base: reg1,
                disp,
            }
        }
        // Format VII: ST.H / ST.W
        (0b1110, 0b11) => {
            let disp_raw = ((hw1 >> 1) & 0x7FFF) as u32;
            let disp = sign_ext(disp_raw << 1, 16);
            if hw1 & 1 == 0 {
                V850Op::StH {
                    src: reg2,
                    base: reg1,
                    disp,
                }
            } else {
                V850Op::StW {
                    src: reg2,
                    base: reg1,
                    disp,
                }
            }
        }

        // Format V: JR / JARL (22-bit displacement)
        (0b1111, 0b00) => {
            if hw1 & 1 == 0 {
                // JR / JARL with 22-bit displacement
                let disp_hi = (hw0 & 0x3F) as u32;
                let disp_lo = hw1 as u32;
                let disp22 = sign_ext((disp_hi << 16) | disp_lo, 22);
                if reg2 == 0 {
                    V850Op::Jr { offset: disp22 }
                } else {
                    V850Op::Jarl {
                        link: reg2,
                        offset: disp22,
                    }
                }
            } else {
                V850Op::Unknown { hw0 } // Format XIV (48-bit)
            }
        }

        // More 32-bit forms — skip for MVP
        (0b1111, _) => V850Op::Unknown { hw0 },

        _ => V850Op::Unknown { hw0 },
    };

    V850Insn { op, len: 4 }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decode_nop() {
        // NOP = 0x0000 (MOV r0, r0)
        let insn = decode(&[0x00, 0x00], 0).unwrap();
        assert_eq!(insn.op, V850Op::Nop);
        assert_eq!(insn.len, 2);
    }

    #[test]
    fn decode_mov_reg() {
        // MOV r1, r5: reg2=5, opcode=000000, reg1=1
        // bits: 00101_000000_00001 = 0x2801
        let hw: u16 = (5 << 11) | (0b000000 << 5) | 1;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Mov { dst: 5, src: 1 });
        assert_eq!(insn.len, 2);
    }

    #[test]
    fn decode_add_reg() {
        // ADD r3, r10: reg2=10, opcode=001110, reg1=3
        let hw: u16 = (10 << 11) | (0b001110 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Add { dst: 10, src: 3 });
    }

    #[test]
    fn decode_sub_reg() {
        // SUB r2, r7: reg2=7, opcode=001101, reg1=2
        let hw: u16 = (7 << 11) | (0b001101 << 5) | 2;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Sub { dst: 7, src: 2 });
    }

    #[test]
    fn decode_and_reg() {
        let hw: u16 = (4 << 11) | (0b001010 << 5) | 6;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::And { dst: 4, src: 6 });
    }

    #[test]
    fn decode_or_reg() {
        let hw: u16 = (4 << 11) | (0b001000 << 5) | 6;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Or { dst: 4, src: 6 });
    }

    #[test]
    fn decode_xor_reg() {
        let hw: u16 = (4 << 11) | (0b001001 << 5) | 6;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Xor { dst: 4, src: 6 });
    }

    #[test]
    fn decode_cmp_reg() {
        let hw: u16 = (8 << 11) | (0b001111 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Cmp { reg1: 3, reg2: 8 });
    }

    #[test]
    fn decode_mov_imm5() {
        // MOV 5, r10: reg2=10, opcode=010000, imm5=5
        let hw: u16 = (10 << 11) | (0b010000 << 5) | 5;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::MovImm5 { dst: 10, imm: 5 });
    }

    #[test]
    fn decode_mov_imm5_negative() {
        // MOV -1, r10: imm5 = 0b11111 = 31, sign-extended = -1
        let hw: u16 = (10 << 11) | (0b010000 << 5) | 0x1F;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::MovImm5 { dst: 10, imm: -1 });
    }

    #[test]
    fn decode_shl_imm() {
        // SHL 3, r5: reg2=5, opcode=010110, imm5=3
        let hw: u16 = (5 << 11) | (0b010110 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::ShlImm { dst: 5, shift: 3 });
    }

    #[test]
    fn decode_shr_imm() {
        let hw: u16 = (5 << 11) | (0b010100 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::ShrImm { dst: 5, shift: 3 });
    }

    #[test]
    fn decode_sar_imm() {
        let hw: u16 = (5 << 11) | (0b010101 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::SarImm { dst: 5, shift: 3 });
    }

    #[test]
    fn decode_jmp_indirect() {
        // JMP [r31]: reg2=0, opcode=000011, reg1=31
        let hw: u16 = (0 << 11) | (0b000011 << 5) | 31;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Jmp { reg: 31 });
    }

    #[test]
    fn decode_bcond() {
        // BNE +8: cond=1010(NE), disp9 encoding
        // disp = 8 => raw = 8 >> 1 for encoding... actually disp is in bytes with bit0=0
        // raw9 = 8 = 0b0_0000_1000, disp[7:3]=0b00001, disp[2:0]=0b000
        // But wait — format is: [15:11]=disp[7:3], [10:7]=1011, [6:4]=disp[2:0], [3:0]=cond
        // disp = 8 => raw with bit0 always 0 in encoding, so disp[7:1] = 4 bits
        // Actually the displacement is a 9-bit signed value (bit 0 always 0)
        // For offset +8: raw9 = 8, disp_hi=8>>4=0, disp_lo=(8>>1)&7=4
        // Hmm, let me re-derive: raw9 = (disp_hi << 4) | (disp_lo << 1)
        // We want raw9 = 8 = 0b0_0000_1000
        // disp_hi = 8 >> 4 = 0, disp_lo = (8 >> 1) & 7 = 4
        let disp_hi: u16 = 0;
        let disp_lo: u16 = 4;
        let cond: u16 = 10; // BNE
        let hw: u16 = (disp_hi << 11) | (0b1011 << 7) | (disp_lo << 4) | cond;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Bcond {
                cond: BranchCond::Ne,
                offset: 8
            }
        );
    }

    #[test]
    fn decode_addi_32bit() {
        // ADDI 0x100, r3, r5
        // hw0: reg2=5, opcode=110000, reg1=3
        // hw1: 0x0100
        let hw0: u16 = (5 << 11) | (0b110000 << 5) | 3;
        let hw1: u16 = 0x0100;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Addi {
                dst: 5,
                src: 3,
                imm: 256
            }
        );
        assert_eq!(insn.len, 4);
    }

    #[test]
    fn decode_ld_w() {
        // LD.W 0x10[r3], r5
        // hw0: reg2=5, opcode=111001, reg1=3
        // hw1: disp15=0x10>>1=8 in bits[15:1], bit0=1 (W)
        let hw0: u16 = (5 << 11) | (0b111001 << 5) | 3;
        let hw1: u16 = (8 << 1) | 1; // disp15=8 (shift left by 1 gives 0x10), bit0=1
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::LdW {
                dst: 5,
                base: 3,
                disp: 0x10
            }
        );
        assert_eq!(insn.len, 4);
    }

    #[test]
    fn decode_st_w() {
        // ST.W r5, 0x20[r3]
        let hw0: u16 = (5 << 11) | (0b111011 << 5) | 3;
        let hw1: u16 = (0x10 << 1) | 1; // disp15=0x10 (shift gives 0x20), bit0=1
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::StW {
                src: 5,
                base: 3,
                disp: 0x20
            }
        );
    }

    #[test]
    fn decode_ld_b() {
        // LD.B 0x0A[r1], r2
        let hw0: u16 = (2 << 11) | (0b111000 << 5) | 1;
        let hw1: u16 = 0x000A;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::LdB {
                dst: 2,
                base: 1,
                disp: 10
            }
        );
    }

    #[test]
    fn decode_jr_22bit() {
        // JR +0x100: reg2=0, opcode bits[10:6]=11110, bits[5:0]=disp[21:16]=0
        // hw1 = disp[15:0] = 0x100, bit0=0
        let _hw0: u16 = (0 << 11) | (0b11110_0 << 5) | 0;
        // Wait — Format V: [15:11]=reg2, [10:6]=opcode, [5:0]=disp[21:16]
        // For JR: reg2=0, opcode bits[10:6] = 0b11110
        // hw0 = (0 << 11) | (0b11110 << 6) | disp_hi
        let disp_hi: u16 = 0; // upper 6 bits of disp22
        let hw0: u16 = (0u16 << 11) | (0b11110 << 6) | disp_hi;
        let hw1: u16 = 0x0100; // lower 16 bits, bit0=0 (even)
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Jr { offset: 0x100 });
        assert_eq!(insn.len, 4);
    }

    #[test]
    fn decode_jarl_22bit() {
        // JARL +0x200, r31: reg2=31, disp_hi=0, disp_lo=0x200
        let hw0: u16 = (31u16 << 11) | (0b11110 << 6) | 0;
        let hw1: u16 = 0x0200;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Jarl {
                link: 31,
                offset: 0x200
            }
        );
    }

    #[test]
    fn decode_not() {
        let hw: u16 = (5 << 11) | (0b000001 << 5) | 3;
        let bytes = hw.to_le_bytes();
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(insn.op, V850Op::Not { dst: 5, src: 3 });
    }

    #[test]
    fn decode_movea() {
        // MOVEA 0xFF00, r3, r5
        let hw0: u16 = (5 << 11) | (0b110001 << 5) | 3;
        let hw1: u16 = 0xFF00u16;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Movea {
                dst: 5,
                src: 3,
                imm: -256
            }
        );
    }

    #[test]
    fn decode_movhi() {
        // MOVHI 0x1234, r0, r5
        let hw0: u16 = (5 << 11) | (0b110010 << 5) | 0;
        let hw1: u16 = 0x1234;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Movhi {
                dst: 5,
                src: 0,
                imm: 0x1234
            }
        );
    }

    #[test]
    fn decode_short_buffer() {
        assert!(decode(&[0x00], 0).is_none());
        assert!(decode(&[], 0).is_none());
    }

    #[test]
    fn decode_andi() {
        let hw0: u16 = (5 << 11) | (0b110110 << 5) | 3;
        let hw1: u16 = 0x00FF;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Andi {
                dst: 5,
                src: 3,
                imm: 0x00FF
            }
        );
    }

    #[test]
    fn decode_ori() {
        let hw0: u16 = (5 << 11) | (0b110100 << 5) | 3;
        let hw1: u16 = 0xFF00;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Ori {
                dst: 5,
                src: 3,
                imm: 0xFF00
            }
        );
    }

    #[test]
    fn decode_xori() {
        let hw0: u16 = (5 << 11) | (0b110101 << 5) | 3;
        let hw1: u16 = 0x1234;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let insn = decode(&bytes, 0).unwrap();
        assert_eq!(
            insn.op,
            V850Op::Xori {
                dst: 5,
                src: 3,
                imm: 0x1234
            }
        );
    }
}
