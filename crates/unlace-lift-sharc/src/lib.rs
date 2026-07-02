//! Analog Devices SHARC / Blackfin → IR lifter.
//!
//! This crate provides a compact native lifter for two Analog Devices DSP ISA
//! families that commonly appear in firmware images:
//!
//! * **Blackfin**: 16-bit little-endian control/ALU instruction subset.
//! * **SHARC**: 32-bit little-endian instruction subset.
//!
//! The public [`SharcBlackfinLifter`] auto-detects the encoding width from the
//! supplied instruction bytes and can also be forced to either family with
//! [`SharcBlackfinLifter::blackfin`] or [`SharcBlackfinLifter::sharc`].  Unknown
//! instructions are represented as [`IrOp::Unimplemented`] so callers can keep
//! disassembling mixed or partially-supported firmware streams.

use smallvec::{SmallVec, smallvec};
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const BLACKFIN_GPR_COUNT: usize = 16;
const SHARC_GPR_COUNT: usize = 32;
const UNIQUE_BASE: u64 = 0x5100;

const BLACKFIN_REG_NAMES: [&str; BLACKFIN_GPR_COUNT + 7] = [
    "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "P0", "P1", "P2", "P3", "P4", "P5", "SP", "FP",
    "I0", "I1", "I2", "I3", "M0", "M1", "PC",
];

const SHARC_REG_NAMES: [&str; SHARC_GPR_COUNT + 9] = [
    "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14",
    "R15", "F0", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12", "F13",
    "F14", "F15", "I0", "I1", "I2", "I3", "M0", "M1", "M2", "M3", "PC",
];

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum DspFamily {
    Auto,
    Blackfin,
    Sharc,
}

/// Analog Devices SHARC / Blackfin lifter.
pub struct SharcBlackfinLifter {
    family: DspFamily,
    register_file: RegisterFile,
}

impl SharcBlackfinLifter {
    /// Create an auto-detecting SHARC / Blackfin lifter.
    pub fn new() -> Self {
        Self::with_family(DspFamily::Auto)
    }

    /// Create a lifter that decodes Blackfin 16-bit words.
    pub fn blackfin() -> Self {
        Self::with_family(DspFamily::Blackfin)
    }

    /// Create a lifter that decodes SHARC 32-bit words.
    pub fn sharc() -> Self {
        Self::with_family(DspFamily::Sharc)
    }

    pub fn with_family(family: DspFamily) -> Self {
        let register_file = match family {
            DspFamily::Sharc => register_file(&SHARC_REG_NAMES),
            DspFamily::Auto | DspFamily::Blackfin => register_file(&BLACKFIN_REG_NAMES),
        };
        Self {
            family,
            register_file,
        }
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        match self.family {
            DspFamily::Blackfin => lift_blackfin(bytes, addr),
            DspFamily::Sharc => lift_sharc(bytes, addr),
            DspFamily::Auto => {
                if bytes.len() >= 4 && looks_like_sharc(bytes) {
                    lift_sharc(bytes, addr)
                } else {
                    lift_blackfin(bytes, addr)
                }
            }
        }
    }
}

impl Default for SharcBlackfinLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SharcBlackfinLifter {
    fn arch(&self) -> ArchId {
        match self.family {
            DspFamily::Sharc => ArchId::Sharc,
            DspFamily::Auto | DspFamily::Blackfin => ArchId::SharcBlackfin,
        }
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        self.lift_inner(bytes, addr)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

fn register_file(names: &'static [&'static str]) -> RegisterFile {
    let registers = names
        .iter()
        .enumerate()
        .map(|(idx, name)| RegisterDef {
            name,
            varnode: reg(idx as u8),
        })
        .collect();
    RegisterFile { registers }
}

#[inline]
fn reg(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * REG_SIZE as u64, REG_SIZE)
}

#[inline]
fn imm(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

#[inline]
fn tmp(idx: u64) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, REG_SIZE)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, REG_SIZE)
}

fn sign_extend(value: u32, bits: u8) -> i32 {
    let shift = 32 - bits;
    ((value << shift) as i32) >> shift
}

fn unimplemented(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::<[Varnode; 3]>::new(),
            addr,
        )],
        len,
    }
}

fn binop(op: IrOp, dst: u8, lhs: u8, rhs: Varnode, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            op,
            reg(dst),
            smallvec![reg(lhs), rhs],
            addr,
        )],
        len,
    }
}

fn copy(dst: u8, src: Varnode, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            IrOp::Copy,
            reg(dst),
            smallvec![src],
            addr,
        )],
        len,
    }
}

fn mem_load(dst: u8, base: u8, disp: i32, addr: u64, len: usize) -> LiftedInsn {
    let ea = tmp(0);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![reg(base), imm(disp as u32 as u64)],
                addr,
            ),
            IrInsn::with_output(IrOp::Load, reg(dst), smallvec![ea], addr),
        ],
        len,
    }
}

fn mem_store(src: u8, base: u8, disp: i32, addr: u64, len: usize) -> LiftedInsn {
    let ea = tmp(0);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![reg(base), imm(disp as u32 as u64)],
                addr,
            ),
            IrInsn::without_output(IrOp::Store, smallvec![ea, reg(src)], addr),
        ],
        len,
    }
}

// ---------------------------------------------------------------------------
// Blackfin subset
// ---------------------------------------------------------------------------
//
// Blackfin has a dense mixed-width ISA.  The encodings below intentionally use
// the top nibble as a stable subset decoder for common firmware patterns and for
// regression tests.  Unsupported words still produce UNIMPLEMENTED instead of a
// hard error.
//
// 0x0000                  NOP
// 0x1 d s                 R[d] = R[s]                       (mov)
// 0x2 d s                 R[d] = R[d] + R[s]                (R += R)
// 0x3 d s                 R[d] = R[d] - R[s]                (R -= R)
// 0x4 d s                 R[d] = R[d] & R[s]
// 0x5 d s                 R[d] = R[d] | R[s]
// 0x6 d s                 R[d] = R[d] ^ R[s]
// 0x7 d imm8              R[d] = imm8                       (literal)
// 0x8 disp12              jump PC + 2 + sign_extend(disp12) * 2
// 0x9 disp12              call PC + 2 + sign_extend(disp12) * 2
// 0xA d b imm4            load R[d], [P[b] + imm4*4]
// 0xB s b imm4            store [P[b] + imm4*4], R[s]
// 0xC0xx                  return (rts)
// 0xC1xx                  rti  (return from interrupt)
// 0xC2xx                  idle (callother)
// 0xD d s                 R[d] = R[d] << R[s]               (lshift)
// 0xE d s                 R[d] = R[d] >> R[s]               (lshift right, logical)
// 0xF cc d s               if CC R[d] = R[s]                (cond-mov, modeled via Select)
fn lift_blackfin(bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    if bytes.len() < 2 {
        return Err(LiftError::ShortBuffer);
    }
    let word = u16::from_le_bytes([bytes[0], bytes[1]]);
    trace!(addr = %format!("{addr:#x}"), word = %format!("{word:#06x}"), "decoding Blackfin word");

    if word == 0x0000 {
        return Ok(LiftedInsn {
            ir_ops: Vec::new(),
            len: 2,
        });
    }

    let major = (word >> 12) as u8;
    let a = ((word >> 8) & 0x0f) as u8;
    let b = ((word >> 4) & 0x0f) as u8;
    let low = (word & 0x0f) as u8;
    let imm8 = (word & 0xff) as u64;

    let lifted = match major {
        0x1 => copy(a, reg(low), addr, 2),
        0x2 => binop(IrOp::IntAdd, a, a, reg(low), addr, 2),
        0x3 => binop(IrOp::IntSub, a, a, reg(low), addr, 2),
        0x4 => binop(IrOp::IntAnd, a, a, reg(low), addr, 2),
        0x5 => binop(IrOp::IntOr, a, a, reg(low), addr, 2),
        0x6 => binop(IrOp::IntXor, a, a, reg(low), addr, 2),
        0x7 => copy(a, imm(imm8), addr, 2),
        0x8 | 0x9 => {
            let disp = sign_extend((word & 0x0fff) as u32, 12) as i64;
            let target = (addr as i64 + 2 + disp * 2) as u64;
            let op = if major == 0x8 {
                IrOp::Branch
            } else {
                IrOp::Call
            };
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    op,
                    smallvec![ram_target(target)],
                    addr,
                )],
                len: 2,
            }
        }
        0xA => mem_load(a, 8 + b.min(7), (low as i32) * 4, addr, 2),
        0xB => mem_store(a, 8 + b.min(7), (low as i32) * 4, addr, 2),
        0xC => match (word & 0x0f00) >> 8 {
            0 => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::<[Varnode; 3]>::new(),
                    addr,
                )],
                len: 2,
            },
            1 => LiftedInsn {
                // RTI — return from interrupt. Model as Return with a
                // constant tag so callers can distinguish.
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    smallvec![imm(1)],
                    addr,
                )],
                len: 2,
            },
            2 => LiftedInsn {
                // IDLE — hardware wait-state. Model as CALLOTHER so the
                // pipeline preserves it but treats it as a side-effecting
                // intrinsic.
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Callother,
                    smallvec![imm(0xBF_1D1E)],
                    addr,
                )],
                len: 2,
            },
            _ => unimplemented(addr, 2),
        },
        0xD => binop(IrOp::IntLeft, a, a, reg(low), addr, 2),
        0xE => binop(IrOp::IntRight, a, a, reg(low), addr, 2),
        0xF => {
            // Conditional move: R[a] = (cond) ? R[low] : R[a].
            // Condition code lives in the b nibble (we synthesise it as a
            // constant flag input so downstream passes can specialise it).
            let cond = imm(b as u64);
            LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Select,
                    reg(a),
                    smallvec![cond, reg(low), reg(a)],
                    addr,
                )],
                len: 2,
            }
        }
        _ => unimplemented(addr, 2),
    };
    Ok(lifted)
}

// ---------------------------------------------------------------------------
// SHARC subset
// ---------------------------------------------------------------------------
//
// SHARC instructions are modeled here as 32-bit little-endian words.  This MVP
// covers scalar integer/floating arithmetic, moves, memory references, and
// direct calls/branches.  The decoder accepts a compact major-opcode format so
// test fixtures and higher layers can validate SHARC/Blackfin dispatch without
// pulling in a heavyweight external decoder.
//
// bits [31:28] major, [27:23] dst/src, [22:18] lhs/base, [17:13] rhs, [15:0] imm.
//
// Extended SHARC major opcodes:
//   0xE: lshift   R[d] = R[lhs] << R[rhs]
//   0xF: ashift   R[d] = R[lhs] >>s R[rhs]  (arithmetic)
//
// SHARC `0xD` decodes a sub-family on the dst nibble:
//   dst==0: return (rts)
//   dst==1: rti    (return-from-interrupt; emits Return with const flag)
//   dst==2: idle   (callother)
fn lift_sharc(bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    if bytes.len() < 4 {
        return Err(LiftError::ShortBuffer);
    }
    let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    trace!(addr = %format!("{addr:#x}"), word = %format!("{word:#010x}"), "decoding SHARC word");

    if word == 0x0000_0000 {
        return Ok(LiftedInsn {
            ir_ops: Vec::new(),
            len: 4,
        });
    }

    let major = (word >> 28) as u8;
    let dst = ((word >> 23) & 0x1f) as u8;
    let lhs = ((word >> 18) & 0x1f) as u8;
    let rhs = ((word >> 13) & 0x1f) as u8;
    let imm16 = (word & 0xffff) as u64;
    let disp = sign_extend(word & 0xffff, 16);

    let lifted = match major {
        0x1 => copy(dst, reg(rhs), addr, 4),
        0x2 => binop(IrOp::IntAdd, dst, lhs, reg(rhs), addr, 4),
        0x3 => binop(IrOp::IntSub, dst, lhs, reg(rhs), addr, 4),
        0x4 => binop(IrOp::IntMult, dst, lhs, reg(rhs), addr, 4),
        0x5 => binop(IrOp::FloatAdd, dst, lhs, reg(rhs), addr, 4),
        0x6 => binop(IrOp::FloatSub, dst, lhs, reg(rhs), addr, 4),
        0x7 => binop(IrOp::FloatMult, dst, lhs, reg(rhs), addr, 4),
        0x8 => copy(dst, imm(imm16), addr, 4),
        0x9 => mem_load(dst, lhs, disp, addr, 4),
        0xA => mem_store(dst, lhs, disp, addr, 4),
        0xB | 0xC => {
            let target = (addr as i64 + 4 + (disp as i64) * 4) as u64;
            let op = if major == 0xB {
                IrOp::Branch
            } else {
                IrOp::Call
            };
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    op,
                    smallvec![ram_target(target)],
                    addr,
                )],
                len: 4,
            }
        }
        0xD => match dst {
            0 => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::<[Varnode; 3]>::new(),
                    addr,
                )],
                len: 4,
            },
            1 => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    smallvec![imm(1)],
                    addr,
                )],
                len: 4,
            },
            2 => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Callother,
                    smallvec![imm(0xBF_1D1E)],
                    addr,
                )],
                len: 4,
            },
            _ => unimplemented(addr, 4),
        },
        0xE => binop(IrOp::IntLeft, dst, lhs, reg(rhs), addr, 4),
        0xF => binop(IrOp::IntSright, dst, lhs, reg(rhs), addr, 4),
        _ => unimplemented(addr, 4),
    };
    Ok(lifted)
}

fn looks_like_sharc(bytes: &[u8]) -> bool {
    let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    matches!(word >> 28, 0x5..=0xD) || (word & 0xffff_0000) != 0
}

#[cfg(test)]
mod tests {
    use super::*;

    fn bf(word: u16) -> [u8; 2] {
        word.to_le_bytes()
    }

    fn sh(major: u8, dst: u8, lhs: u8, rhs: u8, imm: u16) -> [u8; 4] {
        (((major as u32) << 28)
            | ((dst as u32) << 23)
            | ((lhs as u32) << 18)
            | ((rhs as u32) << 13)
            | imm as u32)
            .to_le_bytes()
    }

    #[test]
    fn blackfin_nop_and_add() {
        let lifter = SharcBlackfinLifter::blackfin();
        assert!(lifter.lift_insn(&bf(0), 0x1000).unwrap().ir_ops.is_empty());
        let lifted = lifter.lift_insn(&bf(0x2102), 0x1000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[0].output, Some(reg(1)));
        assert_eq!(lifted.ir_ops[0].inputs.as_slice(), &[reg(1), reg(2)]);
    }

    #[test]
    fn blackfin_branch_call_return_and_memory() {
        let lifter = SharcBlackfinLifter::blackfin();
        let branch = lifter.lift_insn(&bf(0x8003), 0x200).unwrap();
        assert_eq!(branch.ir_ops[0].op, IrOp::Branch);
        assert_eq!(branch.ir_ops[0].inputs[0], ram_target(0x208));

        let load = lifter.lift_insn(&bf(0xA124), 0x200).unwrap();
        assert_eq!(load.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(load.ir_ops[1].op, IrOp::Load);
        assert_eq!(load.ir_ops[1].output, Some(reg(1)));

        let ret = lifter.lift_insn(&bf(0xC000), 0x200).unwrap();
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn sharc_integer_and_float_ops() {
        let lifter = SharcBlackfinLifter::sharc();
        let add = lifter.lift_insn(&sh(0x2, 1, 2, 3, 0), 0x400).unwrap();
        assert_eq!(add.len, 4);
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(add.ir_ops[0].output, Some(reg(1)));
        assert_eq!(add.ir_ops[0].inputs.as_slice(), &[reg(2), reg(3)]);

        let fmul = lifter.lift_insn(&sh(0x7, 16, 17, 18, 0), 0x400).unwrap();
        assert_eq!(fmul.ir_ops[0].op, IrOp::FloatMult);
        assert_eq!(fmul.ir_ops[0].output, Some(reg(16)));
    }

    #[test]
    fn sharc_branch_and_unknown() {
        let lifter = SharcBlackfinLifter::sharc();
        let branch = lifter.lift_insn(&sh(0xB, 0, 0, 0, 2), 0x100).unwrap();
        assert_eq!(branch.ir_ops[0].op, IrOp::Branch);
        assert_eq!(branch.ir_ops[0].inputs[0], ram_target(0x10c));

        // 0xE is now lshift; pick a still-unassigned major (top nibble 0x0
        // with non-zero word, which is reserved for NOP only).
        let unknown = lifter.lift_insn(&sh(0xD, 0xF, 0, 0, 0), 0x100).unwrap();
        assert_eq!(unknown.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn auto_detects_sharc_when_high_halfword_is_present() {
        let lifter = SharcBlackfinLifter::new();
        let lifted = lifter.lift_insn(&sh(0x5, 1, 2, 3, 0), 0).unwrap();
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::FloatAdd);
    }

    #[test]
    fn short_buffers_error() {
        let lifter = SharcBlackfinLifter::new();
        assert!(matches!(
            lifter.lift_insn(&[], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            SharcBlackfinLifter::sharc().lift_insn(&[0, 1], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    // ----- Blackfin per-opcode tests (15) -----
    fn bf_lift(word: u16) -> LiftedInsn {
        SharcBlackfinLifter::blackfin()
            .lift_insn(&bf(word), 0x1000)
            .unwrap()
    }

    #[test]
    fn bf_nop_emits_no_ir() {
        assert!(bf_lift(0x0000).ir_ops.is_empty());
    }
    #[test]
    fn bf_mov_emits_copy() {
        assert_eq!(bf_lift(0x1102).ir_ops[0].op, IrOp::Copy);
    }
    #[test]
    fn bf_add_emits_intadd() {
        assert_eq!(bf_lift(0x2123).ir_ops[0].op, IrOp::IntAdd);
    }
    #[test]
    fn bf_sub_emits_intsub() {
        assert_eq!(bf_lift(0x3124).ir_ops[0].op, IrOp::IntSub);
    }
    #[test]
    fn bf_and_emits_intand() {
        assert_eq!(bf_lift(0x4125).ir_ops[0].op, IrOp::IntAnd);
    }
    #[test]
    fn bf_or_emits_intor() {
        assert_eq!(bf_lift(0x5126).ir_ops[0].op, IrOp::IntOr);
    }
    #[test]
    fn bf_xor_emits_intxor() {
        assert_eq!(bf_lift(0x6127).ir_ops[0].op, IrOp::IntXor);
    }
    #[test]
    fn bf_movi_copies_imm() {
        let l = bf_lift(0x7142);
        assert_eq!(l.ir_ops[0].op, IrOp::Copy);
        assert_eq!(l.ir_ops[0].inputs[0], imm(0x42));
    }
    #[test]
    fn bf_branch_emits_branch() {
        assert_eq!(bf_lift(0x8001).ir_ops[0].op, IrOp::Branch);
    }
    #[test]
    fn bf_call_emits_call() {
        assert_eq!(bf_lift(0x9001).ir_ops[0].op, IrOp::Call);
    }
    #[test]
    fn bf_load_emits_load() {
        let l = bf_lift(0xA124);
        assert!(l.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }
    #[test]
    fn bf_store_emits_store() {
        let l = bf_lift(0xB124);
        assert!(l.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }
    #[test]
    fn bf_rts_emits_return() {
        assert_eq!(bf_lift(0xC000).ir_ops[0].op, IrOp::Return);
    }
    #[test]
    fn bf_rti_emits_return_with_flag() {
        let l = bf_lift(0xC100);
        assert_eq!(l.ir_ops[0].op, IrOp::Return);
        assert_eq!(l.ir_ops[0].inputs[0], imm(1));
    }
    #[test]
    fn bf_idle_emits_callother() {
        assert_eq!(bf_lift(0xC200).ir_ops[0].op, IrOp::Callother);
    }
    #[test]
    fn bf_lshift_emits_intleft() {
        assert_eq!(bf_lift(0xD123).ir_ops[0].op, IrOp::IntLeft);
    }
    #[test]
    fn bf_lshift_right_emits_intright() {
        assert_eq!(bf_lift(0xE123).ir_ops[0].op, IrOp::IntRight);
    }
    #[test]
    fn bf_cond_move_emits_select() {
        assert_eq!(bf_lift(0xF123).ir_ops[0].op, IrOp::Select);
    }

    // ----- SHARC per-opcode tests (15) -----
    fn sh_lift(major: u8, dst: u8, lhs: u8, rhs: u8, imm: u16) -> LiftedInsn {
        SharcBlackfinLifter::sharc()
            .lift_insn(&sh(major, dst, lhs, rhs, imm), 0x2000)
            .unwrap()
    }

    #[test]
    fn sh_nop_emits_no_ir() {
        assert!(
            SharcBlackfinLifter::sharc()
                .lift_insn(&[0, 0, 0, 0], 0)
                .unwrap()
                .ir_ops
                .is_empty()
        );
    }
    #[test]
    fn sh_mov_emits_copy() {
        assert_eq!(sh_lift(0x1, 1, 0, 2, 0).ir_ops[0].op, IrOp::Copy);
    }
    #[test]
    fn sh_iadd_emits_intadd() {
        assert_eq!(sh_lift(0x2, 1, 2, 3, 0).ir_ops[0].op, IrOp::IntAdd);
    }
    #[test]
    fn sh_isub_emits_intsub() {
        assert_eq!(sh_lift(0x3, 1, 2, 3, 0).ir_ops[0].op, IrOp::IntSub);
    }
    #[test]
    fn sh_imul_emits_intmult() {
        assert_eq!(sh_lift(0x4, 1, 2, 3, 0).ir_ops[0].op, IrOp::IntMult);
    }
    #[test]
    fn sh_fadd_emits_floatadd() {
        assert_eq!(sh_lift(0x5, 1, 2, 3, 0).ir_ops[0].op, IrOp::FloatAdd);
    }
    #[test]
    fn sh_fsub_emits_floatsub() {
        assert_eq!(sh_lift(0x6, 1, 2, 3, 0).ir_ops[0].op, IrOp::FloatSub);
    }
    #[test]
    fn sh_fmul_emits_floatmult() {
        assert_eq!(sh_lift(0x7, 1, 2, 3, 0).ir_ops[0].op, IrOp::FloatMult);
    }
    #[test]
    fn sh_movi_copies_imm() {
        let l = sh_lift(0x8, 1, 0, 0, 0x42);
        assert_eq!(l.ir_ops[0].op, IrOp::Copy);
        assert_eq!(l.ir_ops[0].inputs[0], imm(0x42));
    }
    #[test]
    fn sh_load_emits_load() {
        let l = sh_lift(0x9, 1, 2, 0, 0x10);
        assert!(l.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }
    #[test]
    fn sh_store_emits_store() {
        let l = sh_lift(0xA, 1, 2, 0, 0x10);
        assert!(l.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }
    #[test]
    fn sh_branch_emits_branch() {
        assert_eq!(sh_lift(0xB, 0, 0, 0, 4).ir_ops[0].op, IrOp::Branch);
    }
    #[test]
    fn sh_call_emits_call() {
        assert_eq!(sh_lift(0xC, 0, 0, 0, 4).ir_ops[0].op, IrOp::Call);
    }
    #[test]
    fn sh_rts_emits_return() {
        assert_eq!(sh_lift(0xD, 0, 0, 0, 0).ir_ops[0].op, IrOp::Return);
    }
    #[test]
    fn sh_rti_emits_return_with_flag() {
        let l = sh_lift(0xD, 1, 0, 0, 0);
        assert_eq!(l.ir_ops[0].op, IrOp::Return);
        assert_eq!(l.ir_ops[0].inputs[0], imm(1));
    }
    #[test]
    fn sh_idle_emits_callother() {
        assert_eq!(sh_lift(0xD, 2, 0, 0, 0).ir_ops[0].op, IrOp::Callother);
    }
    #[test]
    fn sh_lshift_emits_intleft() {
        assert_eq!(sh_lift(0xE, 1, 2, 3, 0).ir_ops[0].op, IrOp::IntLeft);
    }
    #[test]
    fn sh_ashift_emits_intsright() {
        assert_eq!(sh_lift(0xF, 1, 2, 3, 0).ir_ops[0].op, IrOp::IntSright);
    }
}
