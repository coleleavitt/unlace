//! SuperH SH-2/SH-3/SH-4 16-bit instruction decoder.
//!
//! The decoder intentionally covers the common integer, memory, branch, and
//! SH-4 FPU opcodes used by firmware and Dreamcast code. Unknown encodings are
//! rejected so callers can fall back cleanly.

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum BranchCond {
    T,
    F,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ShInsn {
    Nop,
    MovReg { rm: u8, rn: u8 },
    MovImm { imm: i8, rn: u8 },
    MovBLoad { rm: u8, rn: u8 },
    MovWLoad { rm: u8, rn: u8 },
    MovLLoad { rm: u8, rn: u8 },
    MovBStore { rm: u8, rn: u8 },
    MovWStore { rm: u8, rn: u8 },
    MovLStore { rm: u8, rn: u8 },
    MovBLoadDispR0 { rm: u8 },
    MovWLoadDispR0 { rm: u8 },
    MovLLoadDisp { disp: u8, rm: u8, rn: u8 },
    MovBStoreDispR0 { rn: u8 },
    MovWStoreDispR0 { rn: u8 },
    MovLStoreDisp { disp: u8, rm: u8, rn: u8 },
    MovALabel { disp: u8, rn: u8 },
    MovWLabel { disp: u8, rn: u8 },
    MovLLabel { disp: u8, rn: u8 },
    Add { rm: u8, rn: u8 },
    AddImm { imm: i8, rn: u8 },
    AddCarry { rm: u8, rn: u8 },
    AddOverflow { rm: u8, rn: u8 },
    Sub { rm: u8, rn: u8 },
    SubCarry { rm: u8, rn: u8 },
    SubOverflow { rm: u8, rn: u8 },
    Neg { rm: u8, rn: u8 },
    NegCarry { rm: u8, rn: u8 },
    MulL { rm: u8, rn: u8 },
    Dmulu { rm: u8, rn: u8 },
    Dmuls { rm: u8, rn: u8 },
    And { rm: u8, rn: u8 },
    Or { rm: u8, rn: u8 },
    Xor { rm: u8, rn: u8 },
    Not { rm: u8, rn: u8 },
    AndImm { imm: u8 },
    OrImm { imm: u8 },
    XorImm { imm: u8 },
    Tst { rm: u8, rn: u8 },
    TstImm { imm: u8 },
    CmpEq { rm: u8, rn: u8 },
    CmpHs { rm: u8, rn: u8 },
    CmpGe { rm: u8, rn: u8 },
    CmpHi { rm: u8, rn: u8 },
    CmpGt { rm: u8, rn: u8 },
    CmpStr { rm: u8, rn: u8 },
    CmpEqImm { imm: i8 },
    Shll { rn: u8 },
    Shlr { rn: u8 },
    Shar { rn: u8 },
    Shal { rn: u8 },
    Shll2 { rn: u8 },
    Shlr2 { rn: u8 },
    Shll8 { rn: u8 },
    Shlr8 { rn: u8 },
    Shll16 { rn: u8 },
    Shlr16 { rn: u8 },
    Rotl { rn: u8 },
    Rotr { rn: u8 },
    Bra { disp: i16 },
    Bsr { disp: i16 },
    Braf { rn: u8 },
    Bsrf { rn: u8 },
    Bt { disp: i8 },
    Bf { disp: i8 },
    BtS { disp: i8 },
    BfS { disp: i8 },
    Jmp { rn: u8 },
    Jsr { rn: u8 },
    Rts,
    Rte,
    Trapa { imm: u8 },
    MovToSr { rm: u8 },
    MovFromSr { rn: u8 },
    MovToGbr { rm: u8 },
    MovFromGbr { rn: u8 },
    MovToVbr { rm: u8 },
    MovFromVbr { rn: u8 },
    MovToMach { rm: u8 },
    MovFromMach { rn: u8 },
    MovToMacl { rm: u8 },
    MovFromMacl { rn: u8 },
    MovToPr { rm: u8 },
    MovFromPr { rn: u8 },
    Fmov { fm: u8, fn_: u8 },
    Fadd { fm: u8, fn_: u8 },
    Fsub { fm: u8, fn_: u8 },
    Fmul { fm: u8, fn_: u8 },
    Fdiv { fm: u8, fn_: u8 },
    FcmpEq { fm: u8, fn_: u8 },
    FcmpGt { fm: u8, fn_: u8 },
    Fneg { fn_: u8 },
    Fabs { fn_: u8 },
    Fsqrt { fn_: u8 },
    Fldi0 { fn_: u8 },
    Fldi1 { fn_: u8 },
    FstsFp { fpul_to_frn: u8 },
    FldsFp { frm_to_fpul: u8 },
    Ftrc { fm: u8 },
    Float { fn_: u8 },
    Div0u,
    Div0s { rm: u8, rn: u8 },
    Div1 { rm: u8, rn: u8 },
    Xtrct { rm: u8, rn: u8 },
    SwapB { rm: u8, rn: u8 },
    SwapW { rm: u8, rn: u8 },
    ExtuB { rm: u8, rn: u8 },
    ExtuW { rm: u8, rn: u8 },
    ExtsB { rm: u8, rn: u8 },
    ExtsW { rm: u8, rn: u8 },
    StcLsr { rn: u8 },
    StcLgbr { rn: u8 },
    StcLvbr { rn: u8 },
    LdcLsr { rn: u8 },
    LdcLgbr { rn: u8 },
    LdcLvbr { rn: u8 },
    MacW { rm: u8, rn: u8 },
    Sleep,
}

#[inline]
fn n(op: u16) -> u8 {
    ((op >> 8) & 0x0f) as u8
}
#[inline]
fn m(op: u16) -> u8 {
    ((op >> 4) & 0x0f) as u8
}
#[inline]
fn d4(op: u16) -> u8 {
    (op & 0x0f) as u8
}
#[inline]
fn imm8(op: u16) -> u8 {
    (op & 0xff) as u8
}
pub fn decode(bytes: &[u8]) -> Option<ShInsn> {
    if bytes.len() < 2 {
        return None;
    }
    // SuperH opcodes are stored big-endian in instruction memory.
    let op = u16::from_be_bytes([bytes[0], bytes[1]]);
    let top = op >> 12;
    let nn = n(op);
    let mm = m(op);
    let low = (op & 0x000f) as u8;
    let low8 = imm8(op);

    let insn = match top {
        0x0 => match low {
            0x2 => ShInsn::MovLStore { rm: mm, rn: nn }, // MOV.L Rm,@Rn
            0x3 => ShInsn::Bsrf { rn: nn },
            0x4 => ShInsn::MovBStore { rm: mm, rn: nn },
            0x5 => ShInsn::MovWStore { rm: mm, rn: nn },
            0x6 => ShInsn::MovLStore { rm: mm, rn: nn },
            0x7 => ShInsn::MulL { rm: mm, rn: nn },
            0x8 => match mm {
                0x0 => ShInsn::MovToSr { rm: nn },
                0x1 => ShInsn::MovToGbr { rm: nn },
                0x2 => ShInsn::MovToVbr { rm: nn },
                _ => return None,
            },
            0x9 => match mm {
                0x0 => ShInsn::Nop,
                0x1 => ShInsn::Div0u,
                _ => return None,
            },
            0xa => match mm {
                0x0 => ShInsn::MovFromSr { rn: nn },
                0x1 => ShInsn::MovFromGbr { rn: nn },
                0x2 => ShInsn::MovFromVbr { rn: nn },
                _ => return None,
            },
            0xb => match mm {
                0x0 => ShInsn::Rts,
                0x1 => ShInsn::Sleep,
                0x2 => ShInsn::Rte,
                _ => return None,
            },
            0xc => match mm {
                0x0 => ShInsn::MovBStore { rm: 0, rn: nn },
                0x1 => ShInsn::MovWStore { rm: 0, rn: nn },
                0x2 => ShInsn::MovLStore { rm: 0, rn: nn },
                0x3 => ShInsn::Braf { rn: nn },
                _ => return None,
            },
            0xd => match mm {
                0x0 => ShInsn::MovBLoad { rm: nn, rn: 0 },
                0x1 => ShInsn::MovWLoad { rm: nn, rn: 0 },
                0x2 => ShInsn::MovLLoad { rm: nn, rn: 0 },
                _ => return None,
            },
            0xe => match mm {
                0x0 => ShInsn::MovToMach { rm: nn },
                0x1 => ShInsn::MovToMacl { rm: nn },
                0x2 => ShInsn::MovToPr { rm: nn },
                _ => return None,
            },
            0xf => match mm {
                0x0 => ShInsn::MovFromMach { rn: nn },
                0x1 => ShInsn::MovFromMacl { rn: nn },
                0x2 => ShInsn::MovFromPr { rn: nn },
                _ => return None,
            },
            _ => return None,
        },
        0x1 => ShInsn::MovLStoreDisp {
            disp: d4(op),
            rm: mm,
            rn: nn,
        },
        0x2 => match low {
            0x0 => ShInsn::MovBStore { rm: mm, rn: nn },
            0x1 => ShInsn::MovWStore { rm: mm, rn: nn },
            0x2 => ShInsn::MovLStore { rm: mm, rn: nn },
            0x4 => ShInsn::MovBStore { rm: mm, rn: nn }, // pre-decrement approximated
            0x5 => ShInsn::MovWStore { rm: mm, rn: nn },
            0x6 => ShInsn::MovLStore { rm: mm, rn: nn },
            0x7 => ShInsn::Div0s { rm: mm, rn: nn },
            0x8 => ShInsn::Tst { rm: mm, rn: nn },
            0x9 => ShInsn::And { rm: mm, rn: nn },
            0xa => ShInsn::Xor { rm: mm, rn: nn },
            0xb => ShInsn::Or { rm: mm, rn: nn },
            0xc => ShInsn::CmpStr { rm: mm, rn: nn },
            0xd => ShInsn::Xtrct { rm: mm, rn: nn },
            0xe => ShInsn::MulL { rm: mm, rn: nn },
            0xf => ShInsn::Dmulu { rm: mm, rn: nn },
            _ => return None,
        },
        0x3 => match low {
            0x0 => ShInsn::CmpEq { rm: mm, rn: nn },
            0x2 => ShInsn::CmpHs { rm: mm, rn: nn },
            0x3 => ShInsn::CmpGe { rm: mm, rn: nn },
            0x4 => ShInsn::Div1 { rm: mm, rn: nn },
            0x5 => ShInsn::Dmuls { rm: mm, rn: nn },
            0x6 => ShInsn::CmpHi { rm: mm, rn: nn },
            0x7 => ShInsn::CmpGt { rm: mm, rn: nn },
            0x8 => ShInsn::Sub { rm: mm, rn: nn },
            0xa => ShInsn::SubCarry { rm: mm, rn: nn },
            0xb => ShInsn::SubOverflow { rm: mm, rn: nn },
            0xc => ShInsn::Add { rm: mm, rn: nn },
            0xe => ShInsn::AddCarry { rm: mm, rn: nn },
            0xf => ShInsn::AddOverflow { rm: mm, rn: nn },
            _ => return None,
        },
        0x4 => match low8 & 0x0f {
            0x0 => match mm {
                0x0 => ShInsn::Shll { rn: nn },
                0x2 => ShInsn::Shal { rn: nn },
                _ => return None,
            },
            0x1 => match mm {
                0x0 => ShInsn::Shlr { rn: nn },
                0x2 => ShInsn::Shar { rn: nn },
                _ => return None,
            },
            0x2 => match mm {
                0x0 => ShInsn::MovToSr { rm: nn },
                0x1 => ShInsn::MovToGbr { rm: nn },
                0x2 => ShInsn::MovToVbr { rm: nn },
                _ => return None,
            },
            0x3 => match mm {
                0x0 => ShInsn::StcLsr { rn: nn },
                0x1 => ShInsn::StcLgbr { rn: nn },
                0x2 => ShInsn::StcLvbr { rn: nn },
                _ => return None,
            },
            0x4 => ShInsn::Rotl { rn: nn },
            0x5 => ShInsn::Rotr { rn: nn },
            0x6 => match mm {
                0x0 => ShInsn::MovToMach { rm: nn },
                0x1 => ShInsn::MovToMacl { rm: nn },
                0x2 => ShInsn::MovToPr { rm: nn },
                _ => return None,
            },
            0x7 => match mm {
                0x0 => ShInsn::LdcLsr { rn: nn },
                0x1 => ShInsn::LdcLgbr { rn: nn },
                0x2 => ShInsn::LdcLvbr { rn: nn },
                _ => return None,
            },
            0x8 => match mm {
                0x0 => ShInsn::Shll2 { rn: nn },
                0x1 => ShInsn::Shll8 { rn: nn },
                0x2 => ShInsn::Shll16 { rn: nn },
                _ => return None,
            },
            0x9 => match mm {
                0x0 => ShInsn::Shlr2 { rn: nn },
                0x1 => ShInsn::Shlr8 { rn: nn },
                0x2 => ShInsn::Shlr16 { rn: nn },
                _ => return None,
            },
            0xa => match mm {
                0x0 => ShInsn::MovFromSr { rn: nn },
                0x1 => ShInsn::MovFromGbr { rn: nn },
                0x2 => ShInsn::MovFromVbr { rn: nn },
                _ => return None,
            },
            0xb => match mm {
                0x0 => ShInsn::Jsr { rn: nn },
                0x2 => ShInsn::Jmp { rn: nn },
                _ => return None,
            },
            0xe => match mm {
                0x0 => ShInsn::MovFromMach { rn: nn },
                0x1 => ShInsn::MovFromMacl { rn: nn },
                0x2 => ShInsn::MovFromPr { rn: nn },
                _ => return None,
            },
            0xf => ShInsn::MacW { rm: mm, rn: nn },
            _ => return None,
        },
        0x5 => ShInsn::MovLLoadDisp {
            disp: d4(op),
            rm: mm,
            rn: nn,
        },
        0x6 => match low {
            0x0 => ShInsn::MovBLoad { rm: mm, rn: nn },
            0x1 => ShInsn::MovWLoad { rm: mm, rn: nn },
            0x2 => ShInsn::MovLLoad { rm: mm, rn: nn },
            0x3 => ShInsn::MovReg { rm: mm, rn: nn },
            0x4 => ShInsn::MovBLoad { rm: mm, rn: nn }, // post-increment approximated
            0x5 => ShInsn::MovWLoad { rm: mm, rn: nn },
            0x6 => ShInsn::MovLLoad { rm: mm, rn: nn },
            0x7 => ShInsn::Not { rm: mm, rn: nn },
            0x8 => ShInsn::SwapB { rm: mm, rn: nn },
            0x9 => ShInsn::SwapW { rm: mm, rn: nn },
            0xa => ShInsn::NegCarry { rm: mm, rn: nn },
            0xb => ShInsn::Neg { rm: mm, rn: nn },
            0xc => ShInsn::ExtuB { rm: mm, rn: nn },
            0xd => ShInsn::ExtuW { rm: mm, rn: nn },
            0xe => ShInsn::ExtsB { rm: mm, rn: nn },
            0xf => ShInsn::ExtsW { rm: mm, rn: nn },
            _ => return None,
        },
        0x7 => ShInsn::AddImm {
            imm: low8 as i8,
            rn: nn,
        },
        0x8 => match (op >> 8) & 0x0f {
            0x0 => ShInsn::MovBStoreDispR0 { rn: mm },
            0x1 => ShInsn::MovWStoreDispR0 { rn: mm },
            0x4 => ShInsn::MovBLoadDispR0 { rm: mm },
            0x5 => ShInsn::MovWLoadDispR0 { rm: mm },
            0x8 => ShInsn::CmpEqImm { imm: low8 as i8 },
            0x9 => ShInsn::Bt { disp: low8 as i8 },
            0xb => ShInsn::Bf { disp: low8 as i8 },
            0xd => ShInsn::BtS { disp: low8 as i8 },
            0xf => ShInsn::BfS { disp: low8 as i8 },
            _ => return None,
        },
        0x9 => ShInsn::MovWLabel { disp: low8, rn: nn },
        0xa => ShInsn::Bra {
            disp: sign_extend(op & 0x0fff, 12),
        },
        0xb => ShInsn::Bsr {
            disp: sign_extend(op & 0x0fff, 12),
        },
        0xc => match (op >> 8) & 0x0f {
            0x0 => ShInsn::MovBStoreDispR0 { rn: 0 },
            0x1 => ShInsn::MovWStoreDispR0 { rn: 0 },
            0x2 => ShInsn::MovLStoreDisp {
                disp: low8,
                rm: 0,
                rn: 0,
            },
            0x3 => ShInsn::Trapa { imm: low8 },
            0x4 => ShInsn::MovBLoadDispR0 { rm: 0 },
            0x5 => ShInsn::MovWLoadDispR0 { rm: 0 },
            0x6 => ShInsn::MovLLoadDisp {
                disp: low8,
                rm: 0,
                rn: 0,
            },
            0x7 => ShInsn::MovALabel { disp: low8, rn: 0 },
            0x8 => ShInsn::TstImm { imm: low8 },
            0x9 => ShInsn::AndImm { imm: low8 },
            0xa => ShInsn::XorImm { imm: low8 },
            0xb => ShInsn::OrImm { imm: low8 },
            _ => return None,
        },
        0xd => ShInsn::MovLLabel { disp: low8, rn: nn },
        0xe => ShInsn::MovImm {
            imm: low8 as i8,
            rn: nn,
        },
        0xf => match low {
            0x0 => ShInsn::Fadd { fm: mm, fn_: nn },
            0x1 => ShInsn::Fsub { fm: mm, fn_: nn },
            0x2 => ShInsn::Fmul { fm: mm, fn_: nn },
            0x3 => ShInsn::Fdiv { fm: mm, fn_: nn },
            0x4 => ShInsn::FcmpEq { fm: mm, fn_: nn },
            0x5 => ShInsn::FcmpGt { fm: mm, fn_: nn },
            0x6 => ShInsn::Fmov { fm: mm, fn_: nn },
            0x8 => ShInsn::Fldi0 { fn_: nn },
            0x9 => ShInsn::Fldi1 { fn_: nn },
            0xa => ShInsn::Float { fn_: nn },
            0xb => ShInsn::Ftrc { fm: nn },
            0xd => match mm {
                0x0 => ShInsn::FstsFp { fpul_to_frn: nn },
                0x1 => ShInsn::FldsFp { frm_to_fpul: nn },
                _ => return None,
            },
            0xe => match mm {
                0x0 => ShInsn::Fabs { fn_: nn },
                0x1 => ShInsn::Fsqrt { fn_: nn },
                _ => return None,
            },
            0xf => match mm {
                0x0 => ShInsn::Fneg { fn_: nn },
                _ => return None,
            },
            _ => return None,
        },
        _ => return None,
    };
    Some(insn)
}

#[inline]
fn sign_extend(value: u16, bits: u8) -> i16 {
    let shift = 16 - bits;
    ((value << shift) as i16) >> shift
}

// Internal placeholders for instructions we recognize syntactically but lift as
// side-effect conservatively or unimplemented. Kept in the public enum so tests
// can assert decoder coverage without forcing full flag semantics.
impl ShInsn {
    pub fn is_delay_slot_branch(self) -> bool {
        matches!(
            self,
            ShInsn::Bra { .. }
                | ShInsn::Bsr { .. }
                | ShInsn::BtS { .. }
                | ShInsn::BfS { .. }
                | ShInsn::Jmp { .. }
                | ShInsn::Jsr { .. }
                | ShInsn::Rts
                | ShInsn::Rte
        )
    }
}
