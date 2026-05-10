//! RVC (RISC-V Compressed) → RV32I/RV64I instruction expander.
//!
//! Per RISC-V Unprivileged ISA, ch. 16. Each 16-bit RVC instruction maps to a
//! single 32-bit base-ISA instruction, letting the existing decoder handle the
//! semantics. Quadrant 11 (low bits = 11) is non-compressed and rejected here.
//!
//! RV64-flavored: C.ADDIW is preferred over RV32's C.JAL at funct3=001/Q01.
//! Float compressed ops (C.FLD/C.FSD/C.FLDSP/C.FSDSP) expand to a canonical
//! NOP so downstream decoders don't crash on FP-heavy binaries.

const NOP: u32 = 0x0000_0013;
const EBREAK: u32 = 0x0010_0073;

const OP_IMM: u32 = 0x13;
const OP_IMM_32: u32 = 0x1B;
const OP: u32 = 0x33;
const OP_32: u32 = 0x3B;
const LOAD: u32 = 0x03;
const STORE: u32 = 0x23;
const BRANCH: u32 = 0x63;
const JAL: u32 = 0x6F;
const JALR: u32 = 0x67;
const LUI: u32 = 0x37;

/// True if the half-word at `byte0` starts a 16-bit compressed instruction.
/// RVC quadrants 00/01/10; quadrant 11 is the 32-bit (or larger) base encoding.
pub fn is_compressed(byte0: u8) -> bool {
    (byte0 & 0b11) != 0b11
}

/// Expand a 16-bit RVC half-word to its 32-bit RV32I/RV64I equivalent.
/// Returns `None` for reserved encodings or non-RVC inputs (quadrant 11).
pub fn expand(half: u16) -> Option<u32> {
    let quadrant = half & 0b11;
    let funct3 = ((half >> 13) & 0b111) as u32;
    match quadrant {
        0b00 => expand_q00(half, funct3),
        0b01 => expand_q01(half, funct3),
        0b10 => expand_q10(half, funct3),
        _ => None,
    }
}

fn creg(c: u16) -> u32 {
    (c as u32 & 0b111) + 8
}

fn bits(h: u16, hi: u32, lo: u32) -> u32 {
    let width = hi - lo + 1;
    let mask = (1u32 << width) - 1;
    ((h as u32) >> lo) & mask
}

fn bit(h: u16, b: u32) -> u32 {
    ((h as u32) >> b) & 1
}

fn sext(value: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((value as i32) << shift) >> shift
}

// -- Quadrant 0 --------------------------------------------------------------

fn expand_q00(h: u16, funct3: u32) -> Option<u32> {
    match funct3 {
        0b000 => {
            // C.ADDI4SPN: nzuimm[5:4|9:6|2|3]
            let imm = (bits(h, 10, 7) << 6)
                | (bits(h, 12, 11) << 4)
                | (bit(h, 5) << 3)
                | (bit(h, 6) << 2);
            if imm == 0 {
                return None;
            }
            let rd = creg(bits(h, 4, 2) as u16);
            Some(encode_i(OP_IMM, rd, 0b000, 2, imm as i32))
        }
        0b010 => {
            // C.LW: uimm[5:3|2|6]
            let imm = (bit(h, 5) << 6) | (bits(h, 12, 10) << 3) | (bit(h, 6) << 2);
            let rd = creg(bits(h, 4, 2) as u16);
            let rs1 = creg(bits(h, 9, 7) as u16);
            Some(encode_i(LOAD, rd, 0b010, rs1, imm as i32))
        }
        0b011 => {
            // C.LD (RV64): uimm[5:3|7:6]
            let imm = (bits(h, 6, 5) << 6) | (bits(h, 12, 10) << 3);
            let rd = creg(bits(h, 4, 2) as u16);
            let rs1 = creg(bits(h, 9, 7) as u16);
            Some(encode_i(LOAD, rd, 0b011, rs1, imm as i32))
        }
        0b110 => {
            // C.SW
            let imm = (bit(h, 5) << 6) | (bits(h, 12, 10) << 3) | (bit(h, 6) << 2);
            let rs2 = creg(bits(h, 4, 2) as u16);
            let rs1 = creg(bits(h, 9, 7) as u16);
            Some(encode_s(STORE, 0b010, rs1, rs2, imm as i32))
        }
        0b111 => {
            // C.SD (RV64)
            let imm = (bits(h, 6, 5) << 6) | (bits(h, 12, 10) << 3);
            let rs2 = creg(bits(h, 4, 2) as u16);
            let rs1 = creg(bits(h, 9, 7) as u16);
            Some(encode_s(STORE, 0b011, rs1, rs2, imm as i32))
        }
        // C.FLD / C.FSD — surface as NOP so callers don't choke on FP-heavy code.
        0b001 | 0b101 => Some(NOP),
        _ => None,
    }
}

// -- Quadrant 1 --------------------------------------------------------------

fn expand_q01(h: u16, funct3: u32) -> Option<u32> {
    match funct3 {
        0b000 => {
            // C.ADDI / C.NOP
            let rd = bits(h, 11, 7);
            let imm_raw = (bit(h, 12) << 5) | bits(h, 6, 2);
            let imm = sext(imm_raw, 6);
            Some(encode_i(OP_IMM, rd, 0b000, rd, imm))
        }
        0b001 => {
            // C.ADDIW (RV64). RV32 would treat this as C.JAL — RV64-only here.
            let rd = bits(h, 11, 7);
            if rd == 0 {
                return None;
            }
            let imm_raw = (bit(h, 12) << 5) | bits(h, 6, 2);
            let imm = sext(imm_raw, 6);
            Some(encode_i(OP_IMM_32, rd, 0b000, rd, imm))
        }
        0b010 => {
            // C.LI: addi rd, x0, sext(imm)
            let rd = bits(h, 11, 7);
            let imm_raw = (bit(h, 12) << 5) | bits(h, 6, 2);
            let imm = sext(imm_raw, 6);
            Some(encode_i(OP_IMM, rd, 0b000, 0, imm))
        }
        0b011 => {
            let rd = bits(h, 11, 7);
            if rd == 2 {
                // C.ADDI16SP: nzimm[9|4|6|8:7|5]
                let imm_raw = (bit(h, 12) << 9)
                    | (bit(h, 4) << 4)
                    | (bit(h, 3) << 7)
                    | (bits(h, 6, 5) << 6)
                    | (bit(h, 2) << 5);
                if imm_raw == 0 {
                    return None;
                }
                let imm = sext(imm_raw, 10);
                Some(encode_i(OP_IMM, 2, 0b000, 2, imm))
            } else {
                // C.LUI: nzimm[17|16:12]
                if rd == 0 {
                    return None;
                }
                let imm_raw = (bit(h, 12) << 17) | (bits(h, 6, 2) << 12);
                if imm_raw == 0 {
                    return None;
                }
                let imm = sext(imm_raw, 18);
                Some(encode_u(LUI, rd, imm))
            }
        }
        0b100 => {
            let sel = bits(h, 11, 10);
            let rd = creg(bits(h, 9, 7) as u16);
            match sel {
                0b00 => {
                    // C.SRLI
                    let shamt = (bit(h, 12) << 5) | bits(h, 6, 2);
                    Some(encode_i(OP_IMM, rd, 0b101, rd, shamt as i32))
                }
                0b01 => {
                    // C.SRAI: funct7=0x20 in I-type imm field
                    let shamt = (bit(h, 12) << 5) | bits(h, 6, 2);
                    let imm = (0x20u32 << 5) | shamt;
                    Some(encode_i(OP_IMM, rd, 0b101, rd, imm as i32))
                }
                0b10 => {
                    // C.ANDI
                    let imm_raw = (bit(h, 12) << 5) | bits(h, 6, 2);
                    let imm = sext(imm_raw, 6);
                    Some(encode_i(OP_IMM, rd, 0b111, rd, imm))
                }
                0b11 => {
                    let rs2 = creg(bits(h, 4, 2) as u16);
                    let sub = (bit(h, 12) << 2) | bits(h, 6, 5);
                    match sub {
                        0b000 => Some(encode_r(OP, rd, 0b000, rd, rs2, 0x20)), // C.SUB
                        0b001 => Some(encode_r(OP, rd, 0b100, rd, rs2, 0x00)), // C.XOR
                        0b010 => Some(encode_r(OP, rd, 0b110, rd, rs2, 0x00)), // C.OR
                        0b011 => Some(encode_r(OP, rd, 0b111, rd, rs2, 0x00)), // C.AND
                        0b100 => Some(encode_r(OP_32, rd, 0b000, rd, rs2, 0x20)), // C.SUBW
                        0b101 => Some(encode_r(OP_32, rd, 0b000, rd, rs2, 0x00)), // C.ADDW
                        _ => None,
                    }
                }
                _ => None,
            }
        }
        0b101 => {
            // C.J: imm[11|4|9:8|10|6|7|3:1|5]
            let imm_raw = (bit(h, 12) << 11)
                | (bit(h, 11) << 4)
                | (bits(h, 10, 9) << 8)
                | (bit(h, 8) << 10)
                | (bit(h, 7) << 6)
                | (bit(h, 6) << 7)
                | (bits(h, 5, 3) << 1)
                | (bit(h, 2) << 5);
            let imm = sext(imm_raw, 12);
            Some(encode_j(JAL, 0, imm))
        }
        0b110 | 0b111 => {
            // C.BEQZ / C.BNEZ: imm[8|4:3|7:6|2:1|5]
            let imm_raw = (bit(h, 12) << 8)
                | (bits(h, 11, 10) << 3)
                | (bits(h, 6, 5) << 6)
                | (bits(h, 4, 3) << 1)
                | (bit(h, 2) << 5);
            let imm = sext(imm_raw, 9);
            let rs1 = creg(bits(h, 9, 7) as u16);
            let f3 = if funct3 == 0b110 { 0b000 } else { 0b001 };
            Some(encode_b(BRANCH, f3, rs1, 0, imm))
        }
        _ => None,
    }
}

// -- Quadrant 2 --------------------------------------------------------------

fn expand_q10(h: u16, funct3: u32) -> Option<u32> {
    match funct3 {
        0b000 => {
            // C.SLLI
            let rd = bits(h, 11, 7);
            let shamt = (bit(h, 12) << 5) | bits(h, 6, 2);
            Some(encode_i(OP_IMM, rd, 0b001, rd, shamt as i32))
        }
        0b001 => Some(NOP), // C.FLDSP
        0b010 => {
            // C.LWSP: uimm[5|4:2|7:6]
            let rd = bits(h, 11, 7);
            if rd == 0 {
                return None;
            }
            let imm =
                (bit(h, 12) << 5) | (bits(h, 6, 4) << 2) | (bits(h, 3, 2) << 6);
            Some(encode_i(LOAD, rd, 0b010, 2, imm as i32))
        }
        0b011 => {
            // C.LDSP (RV64): uimm[5|4:3|8:6]
            let rd = bits(h, 11, 7);
            if rd == 0 {
                return None;
            }
            let imm =
                (bit(h, 12) << 5) | (bits(h, 6, 5) << 3) | (bits(h, 4, 2) << 6);
            Some(encode_i(LOAD, rd, 0b011, 2, imm as i32))
        }
        0b100 => {
            let bit12 = bit(h, 12);
            let rd_or_rs1 = bits(h, 11, 7);
            let rs2 = bits(h, 6, 2);
            if bit12 == 0 {
                if rs2 == 0 {
                    // C.JR
                    if rd_or_rs1 == 0 {
                        return None;
                    }
                    Some(encode_i(JALR, 0, 0b000, rd_or_rs1, 0))
                } else {
                    // C.MV: add rd, x0, rs2
                    Some(encode_r(OP, rd_or_rs1, 0b000, 0, rs2, 0x00))
                }
            } else if rd_or_rs1 == 0 && rs2 == 0 {
                Some(EBREAK)
            } else if rs2 == 0 {
                // C.JALR
                Some(encode_i(JALR, 1, 0b000, rd_or_rs1, 0))
            } else {
                // C.ADD
                Some(encode_r(OP, rd_or_rs1, 0b000, rd_or_rs1, rs2, 0x00))
            }
        }
        0b101 => Some(NOP), // C.FSDSP
        0b110 => {
            // C.SWSP: uimm[5:2|7:6]
            let rs2 = bits(h, 6, 2);
            let imm = (bits(h, 12, 9) << 2) | (bits(h, 8, 7) << 6);
            Some(encode_s(STORE, 0b010, 2, rs2, imm as i32))
        }
        0b111 => {
            // C.SDSP (RV64): uimm[5:3|8:6]
            let rs2 = bits(h, 6, 2);
            let imm = (bits(h, 12, 10) << 3) | (bits(h, 9, 7) << 6);
            Some(encode_s(STORE, 0b011, 2, rs2, imm as i32))
        }
        _ => None,
    }
}

// -- Encoders ---------------------------------------------------------------

fn encode_i(opcode: u32, rd: u32, funct3: u32, rs1: u32, imm: i32) -> u32 {
    ((imm as u32 & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
}

fn encode_s(opcode: u32, funct3: u32, rs1: u32, rs2: u32, imm: i32) -> u32 {
    let imm = imm as u32 & 0xFFF;
    let imm_hi = (imm >> 5) & 0x7F;
    let imm_lo = imm & 0x1F;
    (imm_hi << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (imm_lo << 7) | opcode
}

fn encode_r(opcode: u32, rd: u32, funct3: u32, rs1: u32, rs2: u32, funct7: u32) -> u32 {
    (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode
}

fn encode_b(opcode: u32, funct3: u32, rs1: u32, rs2: u32, imm: i32) -> u32 {
    let imm = imm as u32;
    let b12 = (imm >> 12) & 0x1;
    let b11 = (imm >> 11) & 0x1;
    let b10_5 = (imm >> 5) & 0x3F;
    let b4_1 = (imm >> 1) & 0xF;
    (b12 << 31)
        | (b10_5 << 25)
        | (rs2 << 20)
        | (rs1 << 15)
        | (funct3 << 12)
        | (b4_1 << 8)
        | (b11 << 7)
        | opcode
}

fn encode_j(opcode: u32, rd: u32, imm: i32) -> u32 {
    let imm = imm as u32;
    let b20 = (imm >> 20) & 0x1;
    let b19_12 = (imm >> 12) & 0xFF;
    let b11 = (imm >> 11) & 0x1;
    let b10_1 = (imm >> 1) & 0x3FF;
    (b20 << 31) | (b10_1 << 21) | (b11 << 20) | (b19_12 << 12) | (rd << 7) | opcode
}

fn encode_u(opcode: u32, rd: u32, imm: i32) -> u32 {
    ((imm as u32) & 0xFFFF_F000) | (rd << 7) | opcode
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decode_c_nop() {
        // c.nop = c.addi x0, 0 = 0x0001
        assert_eq!(expand(0x0001), Some(0x0000_0013));
    }

    #[test]
    fn decode_c_addi() {
        // c.addi x5, 1: funct3=000 | imm[5]=0 | rd=5 | imm[4:0]=00001 | op=01
        // bits: 000 0 00101 00001 01 = 0x0285
        assert_eq!(expand(0x0285), Some(0x0012_8293));
    }

    #[test]
    fn decode_c_li() {
        // c.li x5, 3 → addi x5, x0, 3 = 0x00300293
        // 010 0 00101 00011 01 = 0x428D
        assert_eq!(expand(0x428D), Some(0x0030_0293));
    }

    #[test]
    fn decode_c_jr() {
        // c.jr x1 = 0x8082 → jalr x0, 0(x1) = 0x00008067
        assert_eq!(expand(0x8082), Some(0x0000_8067));
    }

    #[test]
    fn decode_c_mv() {
        // c.mv x6, x7 = 0x831E → add x6, x0, x7. rs1=0, rs2=7, rd=6 → 0x00700333.
        assert_eq!(expand(0x831E), Some(0x0070_0333));
    }

    #[test]
    fn decode_c_add() {
        // c.add x6, x7 = 0x931E → add x6, x6, x7 = 0x00730333.
        assert_eq!(expand(0x931E), Some(0x0073_0333));
    }

    #[test]
    fn decode_c_ebreak() {
        assert_eq!(expand(0x9002), Some(0x0010_0073));
    }

    #[test]
    fn is_compressed_classifies_low_bits() {
        assert!(is_compressed(0x01));
        assert!(is_compressed(0x02));
        assert!(is_compressed(0x00));
        assert!(!is_compressed(0x03));
        assert!(!is_compressed(0xFF));
    }
}
