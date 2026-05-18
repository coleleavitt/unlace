//! Xtensa instruction decoder (MVP).
//!
//! Xtensa is a configurable 32-bit RISC ISA from Tensilica/Cadence (used in
//! ESP32, ESP8266, etc.). Default instruction width is 24 bits (3 bytes,
//! little-endian); the optional Code Density extension adds 16-bit narrow
//! encodings. The first 4 bits of byte 0 (`op0`) determine instruction
//! length: `op0` values 0x8..=0xD select 16-bit narrow insns, all others
//! select 24-bit insns.
//!
//! 24-bit field layout (LSB first):
//!   bits  3:0   op0
//!   bits  7:4   t
//!   bits 11:8   s
//!   bits 15:12  r
//!   bits 19:16  op1
//!   bits 23:20  op2
//!
//! Byte 0 = op0 | (t << 4)
//! Byte 1 = s   | (r << 4)
//! Byte 2 = op1 | (op2 << 4)
//!
//! This MVP decoder covers a representative subset:
//!  - Arithmetic/bitwise RRR (ADD/SUB/AND/OR/XOR)
//!  - L32I/S32I/MOVI (RRI8 format, op0=2)
//!  - CALL0 (op0=5), J (op0=6), BRI8-style branches (op0=7)
//!  - CALLX0/RET/RETW (RRR op2=0 sub-encodings)
//!  - NOP (op0=0xF, op1=0, op2=2, r=2)

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum XtensaOp {
    Nop,
    /// ADD a_r, a_s, a_t   (a_r = a_s + a_t)
    Add {
        r: u8,
        s: u8,
        t: u8,
    },
    /// SUB a_r, a_s, a_t
    Sub {
        r: u8,
        s: u8,
        t: u8,
    },
    /// AND a_r, a_s, a_t
    And {
        r: u8,
        s: u8,
        t: u8,
    },
    /// OR  a_r, a_s, a_t
    Or {
        r: u8,
        s: u8,
        t: u8,
    },
    /// XOR a_r, a_s, a_t
    Xor {
        r: u8,
        s: u8,
        t: u8,
    },
    /// L32I a_t, a_s, imm8   (32-bit load: a_t = M[a_s + imm8*4])
    L32i {
        t: u8,
        s: u8,
        imm: u8,
    },
    /// S32I a_t, a_s, imm8   (32-bit store: M[a_s + imm8*4] = a_t)
    S32i {
        t: u8,
        s: u8,
        imm: u8,
    },
    /// MOVI a_t, imm8 (sign-extended)
    Movi {
        t: u8,
        imm: i32,
    },
    /// CALL0 offset (18-bit, MVP uses 16-bit signed offset)
    Call0 {
        offset: i32,
    },
    /// CALLX0 a_s   (indirect call through a_s)
    Callx0 {
        s: u8,
    },
    /// RET — return via a0
    Ret,
    /// RETW — windowed return
    Retw,
    /// J — unconditional jump, 16-bit signed offset (MVP, real is 18-bit)
    J {
        offset: i32,
    },
    /// BEQ a_s, a_t, off8
    Beq {
        s: u8,
        t: u8,
        offset: i32,
    },
    /// BNE a_s, a_t, off8
    Bne {
        s: u8,
        t: u8,
        offset: i32,
    },
    /// BEQZ a_s, off8
    Beqz {
        s: u8,
        offset: i32,
    },
    /// BNEZ a_s, off8
    Bnez {
        s: u8,
        offset: i32,
    },
    /// Unknown / unimplemented (still decoded to a length).
    Unknown,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct XtensaInsn {
    pub op: XtensaOp,
    /// Length in bytes: 2 (narrow) or 3 (default).
    pub len: usize,
}

/// Returns the length in bytes of the instruction beginning at `byte0`.
///
/// Per the Xtensa ISA, op0 (low nibble of byte 0) values 0x8..=0xD encode
/// 16-bit narrow instructions; 0x0..=0x7 and 0xE..=0xF encode 24-bit insns.
#[inline]
pub fn insn_len(byte0: u8) -> usize {
    let op0 = byte0 & 0x0F;
    if (0x8..=0xD).contains(&op0) { 2 } else { 3 }
}

/// Decode an Xtensa instruction from `bytes`. Returns `None` if the buffer is
/// too short.
pub fn decode(bytes: &[u8]) -> Option<XtensaInsn> {
    if bytes.is_empty() {
        return None;
    }
    let len = insn_len(bytes[0]);
    if bytes.len() < len {
        return None;
    }

    if len == 2 {
        // 16-bit narrow — MVP doesn't decode bodies, but we still report length.
        return Some(XtensaInsn {
            op: XtensaOp::Unknown,
            len: 2,
        });
    }

    let b0 = bytes[0];
    let b1 = bytes[1];
    let b2 = bytes[2];

    let op0 = b0 & 0x0F;
    let t = (b0 >> 4) & 0x0F;
    let s = b1 & 0x0F;
    let r = (b1 >> 4) & 0x0F;
    let op1 = b2 & 0x0F;
    let op2 = (b2 >> 4) & 0x0F;

    let op = match op0 {
        // RRR class (op0=0) — arithmetic/logic + special control.
        0x0 if op1 == 0 => match op2 {
            0x0 => {
                // Sub-encoded control flow via t-field, op2=0, op1=0.
                match t {
                    0x8 if s == 0 && r == 0 => XtensaOp::Ret,
                    0x9 if s == 0 && r == 0 => XtensaOp::Retw,
                    0xC if r == 0 => XtensaOp::Callx0 { s },
                    _ => XtensaOp::Unknown,
                }
            }
            0x1 => XtensaOp::And { r, s, t },
            0x2 => XtensaOp::Or { r, s, t },
            0x3 => XtensaOp::Xor { r, s, t },
            0x8 => XtensaOp::Add { r, s, t },
            0xC => XtensaOp::Sub { r, s, t },
            _ => XtensaOp::Unknown,
        },

        // RRI8 class (op0=2) — load/store/MOVI.
        0x2 => match r {
            0x2 => XtensaOp::L32i { t, s, imm: b2 },
            0x6 => XtensaOp::S32i { t, s, imm: b2 },
            0xA => {
                let imm = b2 as i8 as i32;
                XtensaOp::Movi { t, imm }
            }
            _ => XtensaOp::Unknown,
        },

        // CALL0 (op0=5) — MVP uses bytes 1-2 as 16-bit signed offset.
        0x5 => {
            let off = i16::from_le_bytes([b1, b2]) as i32;
            XtensaOp::Call0 { offset: off }
        }

        // J (op0=6) — MVP uses bytes 1-2 as 16-bit signed offset.
        0x6 => {
            let off = i16::from_le_bytes([b1, b2]) as i32;
            XtensaOp::J { offset: off }
        }

        // Branch class (op0=7).
        // Layout reuses standard field decomposition; r selects the condition.
        //   r=0x1 -> BEQ  a_s, a_t, imm8
        //   r=0x9 -> BNE  a_s, a_t, imm8
        //   r=0xA -> BEQZ a_s, imm8 (t ignored)
        //   r=0xB -> BNEZ a_s, imm8 (t ignored)
        0x7 => {
            let off = b2 as i8 as i32;
            match r {
                0x1 => XtensaOp::Beq { s, t, offset: off },
                0x9 => XtensaOp::Bne { s, t, offset: off },
                0xA => XtensaOp::Beqz { s, offset: off },
                0xB => XtensaOp::Bnez { s, offset: off },
                _ => XtensaOp::Unknown,
            }
        }

        // NOP and friends (op0=0xF).
        0xF if op1 == 0 && op2 == 0x2 && r == 0x2 && s == 0 && t == 0 => XtensaOp::Nop,

        _ => XtensaOp::Unknown,
    };

    Some(XtensaInsn { op, len: 3 })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn nop_decodes() {
        let i = decode(&[0x0F, 0x20, 0x20]).expect("nop should decode");
        assert_eq!(i.op, XtensaOp::Nop);
        assert_eq!(i.len, 3);
    }

    #[test]
    fn add_decodes() {
        // ADD a3, a4, a5: r=3, s=4, t=5, op2=8
        let bytes = [(5u8 << 4) | 0, 4 | (3 << 4), (8u8 << 4) | 0];
        let i = decode(&bytes).expect("add should decode");
        assert_eq!(i.op, XtensaOp::Add { r: 3, s: 4, t: 5 });
    }

    #[test]
    fn narrow_length_detection() {
        // op0 = 0xD -> 2-byte narrow.
        assert_eq!(insn_len(0xAD), 2);
        // op0 = 0x0 -> 3-byte.
        assert_eq!(insn_len(0x00), 3);
        // op0 = 0xF -> 3-byte.
        assert_eq!(insn_len(0x0F), 3);
    }

    #[test]
    fn short_buffer() {
        assert!(decode(&[]).is_none());
        assert!(decode(&[0x00]).is_none()); // 3-byte insn needs 3 bytes
        assert!(decode(&[0xAD]).is_none()); // 2-byte insn needs 2 bytes
    }
}
