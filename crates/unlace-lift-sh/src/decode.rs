//! SuperH (SH-2 / SH-4) instruction decoder.
//!
//! SuperH instructions are 16-bit fixed width. We decode in little-endian
//! (the common modern SH-4 byte order; SH binaries on Linux ship as `sh4el`).
//!
//! Field convention (Hitachi / Renesas SH-4 ISA manual):
//! a single 16-bit halfword `[15:12 | 11:8 | 7:4 | 3:0]` is split into
//! a top opcode nibble, then `n` (destination/op1) and `m` (source) register
//! fields, then a low nibble that further qualifies the operation.

/// A decoded SuperH instruction.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShInsn {
    pub op: ShOp,
    /// Always 2 bytes for SH (fixed-width 16-bit ISA).
    pub len: usize,
}

/// SuperH operations supported by this MVP lifter.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ShOp {
    // -- Data movement (register-register) --
    /// MOV Rm,Rn  (Rn = Rm)
    Mov { n: u8, m: u8 },

    // -- Arithmetic --
    /// ADD Rm,Rn (Rn = Rn + Rm)
    Add { n: u8, m: u8 },
    /// SUB Rm,Rn (Rn = Rn - Rm)
    Sub { n: u8, m: u8 },
    /// MUL.L Rm,Rn (MACL = low32(Rn * Rm))
    MulL { n: u8, m: u8 },

    // -- Bitwise --
    /// AND Rm,Rn (Rn = Rn & Rm)
    And { n: u8, m: u8 },
    /// OR Rm,Rn (Rn = Rn | Rm)
    Or { n: u8, m: u8 },
    /// XOR Rm,Rn (Rn = Rn ^ Rm)
    Xor { n: u8, m: u8 },

    // -- Load (memory -> Rn) --
    /// MOV.B @Rm,Rn (sign-extended byte)
    MovBLoad { n: u8, m: u8 },
    /// MOV.W @Rm,Rn (sign-extended word)
    MovWLoad { n: u8, m: u8 },
    /// MOV.L @Rm,Rn (32-bit)
    MovLLoad { n: u8, m: u8 },
    /// MOV.B @Rm+,Rn (post-increment by 1)
    MovBLoadPostInc { n: u8, m: u8 },
    /// MOV.W @Rm+,Rn (post-increment by 2)
    MovWLoadPostInc { n: u8, m: u8 },
    /// MOV.L @Rm+,Rn (post-increment by 4)
    MovLLoadPostInc { n: u8, m: u8 },

    // -- Store (Rm -> memory) --
    /// MOV.B Rm,@Rn (low byte)
    MovBStore { n: u8, m: u8 },
    /// MOV.W Rm,@Rn (low word)
    MovWStore { n: u8, m: u8 },
    /// MOV.L Rm,@Rn (32-bit)
    MovLStore { n: u8, m: u8 },
    /// MOV.B Rm,@-Rn (pre-decrement by 1)
    MovBStorePreDec { n: u8, m: u8 },
    /// MOV.W Rm,@-Rn (pre-decrement by 2)
    MovWStorePreDec { n: u8, m: u8 },
    /// MOV.L Rm,@-Rn (pre-decrement by 4)
    MovLStorePreDec { n: u8, m: u8 },

    // -- Shifts (single-bit) --
    /// SHLL Rn (Rn = Rn << 1, logical)
    Shll { n: u8 },
    /// SHLR Rn (Rn = Rn >> 1, logical)
    Shlr { n: u8 },
    /// SHAR Rn (Rn = Rn >> 1, arithmetic)
    Shar { n: u8 },

    // -- Compares (set T flag) --
    /// CMP/EQ Rm,Rn   T = (Rn == Rm)
    CmpEq { n: u8, m: u8 },
    /// CMP/HS Rm,Rn   T = (Rn >= Rm, unsigned)
    CmpHs { n: u8, m: u8 },
    /// CMP/GE Rm,Rn   T = (Rn >= Rm, signed)
    CmpGe { n: u8, m: u8 },
    /// CMP/HI Rm,Rn   T = (Rn > Rm, unsigned)
    CmpHi { n: u8, m: u8 },
    /// CMP/GT Rm,Rn   T = (Rn > Rm, signed)
    CmpGt { n: u8, m: u8 },

    // -- Control flow --
    /// BT label  (branch if T == 1, 8-bit signed disp, target = PC + 4 + d*2)
    Bt { offset: i32 },
    /// BF label  (branch if T == 0)
    Bf { offset: i32 },
    /// BRA label (unconditional, 12-bit signed disp, target = PC + 4 + d*2)
    Bra { offset: i32 },
    /// BSR label (call, same encoding shape as BRA)
    Bsr { offset: i32 },
    /// JSR @Rn   (call indirect)
    Jsr { n: u8 },
    /// RTS       (return)
    Rts,

    /// NOP
    Nop,

    /// Instruction we don't (yet) decode.
    Unknown { hw: u16 },
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

fn sign_ext(val: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((val << shift) as i32) >> shift
}

// ---------------------------------------------------------------------------
// Public entry point
// ---------------------------------------------------------------------------

/// Decode one SuperH instruction from `bytes` at the given address.
///
/// Returns `None` if the buffer is too short (< 2 bytes).
pub fn decode(bytes: &[u8], _addr: u64) -> Option<ShInsn> {
    if bytes.len() < 2 {
        return None;
    }

    let hw = u16::from_le_bytes([bytes[0], bytes[1]]);

    let top = (hw >> 12) & 0xF;
    let n = ((hw >> 8) & 0xF) as u8;
    let m = ((hw >> 4) & 0xF) as u8;
    let lo = (hw & 0xF) as u8;

    let op = match top {
        // -- 0000 group --
        0b0000 => match (m, lo) {
            // RTS = 0x000B
            (0x0, 0xB) if n == 0 => ShOp::Rts,
            // NOP = 0x0009
            (0x0, 0x9) if n == 0 => ShOp::Nop,
            // MUL.L Rm,Rn = 0000 nnnn mmmm 0111
            (_, 0x7) => ShOp::MulL { n, m },
            _ => ShOp::Unknown { hw },
        },

        // -- 0010 group: bitwise + store --
        0b0010 => match lo {
            0x0 => ShOp::MovBStore { n, m },
            0x1 => ShOp::MovWStore { n, m },
            0x2 => ShOp::MovLStore { n, m },
            0x4 => ShOp::MovBStorePreDec { n, m },
            0x5 => ShOp::MovWStorePreDec { n, m },
            0x6 => ShOp::MovLStorePreDec { n, m },
            0x9 => ShOp::And { n, m },
            0xA => ShOp::Xor { n, m },
            0xB => ShOp::Or { n, m },
            _ => ShOp::Unknown { hw },
        },

        // -- 0011 group: compares + arithmetic --
        0b0011 => match lo {
            0x0 => ShOp::CmpEq { n, m },
            0x2 => ShOp::CmpHs { n, m },
            0x3 => ShOp::CmpGe { n, m },
            0x6 => ShOp::CmpHi { n, m },
            0x7 => ShOp::CmpGt { n, m },
            0x8 => ShOp::Sub { n, m },
            0xC => ShOp::Add { n, m },
            _ => ShOp::Unknown { hw },
        },

        // -- 0100 group: single-operand shifts + JSR --
        0b0100 => match (m, lo) {
            (0x0, 0x0) => ShOp::Shll { n },
            (0x0, 0x1) => ShOp::Shlr { n },
            (0x2, 0x1) => ShOp::Shar { n },
            (0x0, 0xB) => ShOp::Jsr { n },
            _ => ShOp::Unknown { hw },
        },

        // -- 0110 group: register move + loads --
        0b0110 => match lo {
            0x0 => ShOp::MovBLoad { n, m },
            0x1 => ShOp::MovWLoad { n, m },
            0x2 => ShOp::MovLLoad { n, m },
            0x3 => ShOp::Mov { n, m },
            0x4 => ShOp::MovBLoadPostInc { n, m },
            0x5 => ShOp::MovWLoadPostInc { n, m },
            0x6 => ShOp::MovLLoadPostInc { n, m },
            _ => ShOp::Unknown { hw },
        },

        // -- 1000 group: BT / BF (8-bit signed disp) --
        0b1000 => {
            // bits[11:8] select sub-op; disp is bits[7:0] sign-extended.
            let sub = (hw >> 8) & 0xF;
            let raw_disp = (hw & 0xFF) as u32;
            let disp = sign_ext(raw_disp, 8) * 2;
            match sub {
                0x9 => ShOp::Bt { offset: disp },
                0xB => ShOp::Bf { offset: disp },
                _ => ShOp::Unknown { hw },
            }
        }

        // -- 1010 group: BRA (12-bit signed disp) --
        0b1010 => {
            let raw_disp = (hw & 0xFFF) as u32;
            let disp = sign_ext(raw_disp, 12) * 2;
            ShOp::Bra { offset: disp }
        }

        // -- 1011 group: BSR (12-bit signed disp) --
        0b1011 => {
            let raw_disp = (hw & 0xFFF) as u32;
            let disp = sign_ext(raw_disp, 12) * 2;
            ShOp::Bsr { offset: disp }
        }

        _ => ShOp::Unknown { hw },
    };

    Some(ShInsn { op, len: 2 })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn dec(hw: u16) -> ShOp {
        let bytes = hw.to_le_bytes();
        decode(&bytes, 0).unwrap().op
    }

    #[test]
    fn decode_nop() {
        assert_eq!(dec(0x0009), ShOp::Nop);
    }

    #[test]
    fn decode_rts() {
        assert_eq!(dec(0x000B), ShOp::Rts);
    }

    #[test]
    fn decode_mov_reg() {
        // MOV R5,R3 -> 0110 0011 0101 0011 = 0x6353
        assert_eq!(dec(0x6353), ShOp::Mov { n: 3, m: 5 });
    }

    #[test]
    fn decode_add_reg() {
        // ADD R5,R3 -> 0011 0011 0101 1100 = 0x335C
        assert_eq!(dec(0x335C), ShOp::Add { n: 3, m: 5 });
    }

    #[test]
    fn decode_sub_reg() {
        // SUB R5,R3 -> 0011 0011 0101 1000 = 0x3358
        assert_eq!(dec(0x3358), ShOp::Sub { n: 3, m: 5 });
    }

    #[test]
    fn decode_mul_l() {
        // MUL.L R5,R3 -> 0000 0011 0101 0111 = 0x0357
        assert_eq!(dec(0x0357), ShOp::MulL { n: 3, m: 5 });
    }

    #[test]
    fn decode_and_or_xor() {
        assert_eq!(dec(0x2359), ShOp::And { n: 3, m: 5 });
        assert_eq!(dec(0x235B), ShOp::Or { n: 3, m: 5 });
        assert_eq!(dec(0x235A), ShOp::Xor { n: 3, m: 5 });
    }

    #[test]
    fn decode_loads() {
        assert_eq!(dec(0x6352), ShOp::MovLLoad { n: 3, m: 5 });
        assert_eq!(dec(0x6355), ShOp::MovWLoadPostInc { n: 3, m: 5 });
    }

    #[test]
    fn decode_stores() {
        assert_eq!(dec(0x2352), ShOp::MovLStore { n: 3, m: 5 });
        assert_eq!(dec(0x2356), ShOp::MovLStorePreDec { n: 3, m: 5 });
    }

    #[test]
    fn decode_shifts() {
        assert_eq!(dec(0x4300), ShOp::Shll { n: 3 });
        assert_eq!(dec(0x4301), ShOp::Shlr { n: 3 });
        assert_eq!(dec(0x4321), ShOp::Shar { n: 3 });
    }

    #[test]
    fn decode_compares() {
        assert_eq!(dec(0x3350), ShOp::CmpEq { n: 3, m: 5 });
        assert_eq!(dec(0x3353), ShOp::CmpGe { n: 3, m: 5 });
        assert_eq!(dec(0x3357), ShOp::CmpGt { n: 3, m: 5 });
        assert_eq!(dec(0x3356), ShOp::CmpHi { n: 3, m: 5 });
        assert_eq!(dec(0x3352), ShOp::CmpHs { n: 3, m: 5 });
    }

    #[test]
    fn decode_bt_bf() {
        // BT +4: encoded d=2 -> 0x8902
        assert_eq!(dec(0x8902), ShOp::Bt { offset: 4 });
        // BF -2: d = -1 = 0xFF -> 0x8BFF
        assert_eq!(dec(0x8BFF), ShOp::Bf { offset: -2 });
    }

    #[test]
    fn decode_bra_bsr() {
        // BRA +6 -> 0xA003
        assert_eq!(dec(0xA003), ShOp::Bra { offset: 6 });
        // BSR -4 -> 0xBFFE
        assert_eq!(dec(0xBFFE), ShOp::Bsr { offset: -4 });
    }

    #[test]
    fn decode_jsr() {
        // JSR @R5 -> 0100 0101 0000 1011 = 0x450B
        assert_eq!(dec(0x450B), ShOp::Jsr { n: 5 });
    }

    #[test]
    fn decode_unknown() {
        assert!(matches!(dec(0xFFFF), ShOp::Unknown { .. }));
    }

    #[test]
    fn decode_short_buffer() {
        assert!(decode(&[0x00], 0).is_none());
        assert!(decode(&[], 0).is_none());
    }
}
