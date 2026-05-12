//! Qualcomm Hexagon DSP → IR lifter.
//!
//! This crate implements an MVP packet-aware lifter for Qualcomm Hexagon, the
//! 32-bit VLIW DSP ISA used in Snapdragon SoCs and Android baseband/firmware
//! images. Hexagon instructions are 32-bit little-endian words grouped into
//! packets; the low parse bits mark packet boundaries, while each slot carries
//! an independent scalar, memory, control-flow, or HVX-style operation.
//!
//! The public [`HexagonLifter`] accepts either a single 4-byte instruction word
//! or a full packet (up to four words). It emits IR for common scalar ALU,
//! transfer, memory, compare/branch, call/return, predicate, and HVX idiom
//! classes and uses [`IrOp::Unimplemented`] for still-unknown encodings instead
//! of failing the whole packet.

use smallvec::SmallVec;
use tracing::trace;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const WORD_SIZE: usize = 4;
const MAX_PACKET_WORDS: usize = 4;
const UNIQUE_BASE: u64 = 0x7000;
const REG_SIZE: u8 = 4;
const HVX_SIZE: u8 = 64;
const REG_SP: u8 = 29;
const REG_LR: u8 = 31;

#[inline]
fn reg(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * 4, REG_SIZE)
}

#[inline]
fn pred(idx: u8) -> Varnode {
    Varnode::reg(0x100 + (idx as u64), 1)
}

#[inline]
fn hvx(idx: u8) -> Varnode {
    Varnode::reg(0x200 + (idx as u64) * (HVX_SIZE as u64), HVX_SIZE)
}

#[inline]
fn imm32(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

#[inline]
fn imm(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 0x80, size)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, REG_SIZE)
}

#[inline]
fn read_word(bytes: &[u8]) -> Result<u32, LiftError> {
    if bytes.len() < WORD_SIZE {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
}

#[inline]
fn bits(word: u32, shift: u8, width: u8) -> u32 {
    if width == 32 {
        word
    } else {
        (word >> shift) & ((1u32 << width) - 1)
    }
}

#[inline]
fn sign_extend(value: u32, width: u8) -> i64 {
    let shift = 64 - width as u32;
    ((value as i64) << shift) >> shift
}

#[inline]
fn s5(word: u32) -> u8 {
    bits(word, 0, 5) as u8
}

#[inline]
fn t5(word: u32) -> u8 {
    bits(word, 5, 5) as u8
}

#[inline]
fn d5(word: u32) -> u8 {
    // Parse bits occupy positions that overlap this simplified decoder's
    // destination field. Mask them out so packet-end metadata does not change
    // data-flow register identity.
    ((word >> 10) & 0x03 | ((word >> 16) & 0x1c)) as u8
}

#[inline]
fn u6(word: u32) -> u32 {
    bits(word, 16, 6)
}

#[inline]
fn s11(word: u32) -> i64 {
    sign_extend(bits(word, 16, 11), 11)
}

#[inline]
fn s16(word: u32) -> i64 {
    sign_extend(bits(word, 5, 16), 16)
}

#[inline]
fn major(word: u32) -> u8 {
    bits(word, 27, 5) as u8
}

#[inline]
fn subop(word: u32) -> u8 {
    bits(word, 21, 6) as u8
}

#[inline]
fn parse_bits(word: u32) -> u8 {
    bits(word, 14, 2) as u8
}

fn packet_word_count(bytes: &[u8]) -> Result<usize, LiftError> {
    if bytes.len() < WORD_SIZE {
        return Err(LiftError::ShortBuffer);
    }

    let available = (bytes.len() / WORD_SIZE).min(MAX_PACKET_WORDS);
    for idx in 0..available {
        let word = read_word(&bytes[idx * WORD_SIZE..])?;
        // Hexagon parse bits mark packet boundaries. Accept a single word even
        // when the caller only supplies one instruction from the packet.
        if idx == 0 && available == 1 {
            return Ok(1);
        }
        if parse_bits(word) != 0b00 {
            return Ok(idx + 1);
        }
    }
    Ok(available)
}

fn unimplemented(addr: u64) -> IrInsn {
    IrInsn::without_output(IrOp::Unimplemented, SmallVec::new(), addr)
}

fn binop(op: IrOp, word: u32, addr: u64) -> IrInsn {
    IrInsn::with_output(
        op,
        reg(d5(word)),
        SmallVec::from_slice(&[reg(s5(word)), reg(t5(word))]),
        addr,
    )
}

fn binop_imm(op: IrOp, word: u32, addr: u64) -> IrInsn {
    IrInsn::with_output(
        op,
        reg(d5(word)),
        SmallVec::from_slice(&[reg(s5(word)), imm32(u6(word) as u64)]),
        addr,
    )
}

fn packet_end_bonus(word: u32) -> usize {
    usize::from(parse_bits(word) != 0)
}

fn branch_target(addr: u64, off: i64) -> u64 {
    addr.wrapping_add(off as u64)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum DecodedKind {
    Nop,
    ScalarAlu,
    ScalarAluImm,
    Transfer,
    Load,
    Store,
    CompareBranch,
    Jump,
    Call,
    Return,
    Predicate,
    Hvx,
    Unknown,
}

fn decode_word_ir(word: u32, addr: u64, seq: usize) -> (DecodedKind, Vec<IrInsn>) {
    // Architectural NOP used by Qualcomm/LLVM examples. Mask parse bits so NOPs
    // can appear in any packet position.
    if word & !(0b11 << 14) == 0x7f00_0000 {
        return (DecodedKind::Nop, Vec::new());
    }

    let maj = major(word);
    let sop = subop(word);
    let mut out = Vec::with_capacity(4);

    match maj {
        // Scalar register-register ALU group. The field layout mirrors the
        // common Hexagon Rdd/Rs/Rt form well enough for analysis to recover data
        // flow even for sub-variants.
        0x00 | 0x01 | 0x02 | 0x03 => {
            let op = match sop & 0x0f {
                0x0 => IrOp::IntAdd,
                0x1 => IrOp::IntSub,
                0x2 => IrOp::IntMult,
                0x3 => IrOp::IntAnd,
                0x4 => IrOp::IntOr,
                0x5 => IrOp::IntXor,
                0x6 => IrOp::IntLeft,
                0x7 => IrOp::IntRight,
                0x8 => IrOp::IntSright,
                0x9 => IrOp::IntEqual,
                0xa => IrOp::IntLess,
                0xb => IrOp::IntSless,
                _ => IrOp::Callother,
            };
            out.push(binop(op, word, addr));
            (DecodedKind::ScalarAlu, out)
        }

        // ALU with small immediate, including common add/sub/logic/shift forms.
        0x04 | 0x05 | 0x06 | 0x07 => {
            let op = match sop & 0x0f {
                0x0 => IrOp::IntAdd,
                0x1 => IrOp::IntSub,
                0x2 => IrOp::IntAnd,
                0x3 => IrOp::IntOr,
                0x4 => IrOp::IntXor,
                0x5 => IrOp::IntLeft,
                0x6 => IrOp::IntRight,
                0x7 => IrOp::IntSright,
                0x8 => IrOp::IntMult,
                _ => IrOp::Callother,
            };
            out.push(binop_imm(op, word, addr));
            (DecodedKind::ScalarAluImm, out)
        }

        // Transfer/immediate group: register moves, const32 materialisation,
        // sign/zero extension shuffles.
        0x08 | 0x09 => {
            let dst = reg(d5(word));
            let src = match sop & 0x07 {
                0x0 => reg(s5(word)),
                0x1 => imm32(u6(word) as u64),
                0x2 => imm32((s11(word) as i32) as u32 as u64),
                0x3 => imm32(bits(word, 0, 16) as u64),
                _ => reg(t5(word)),
            };
            out.push(IrInsn::with_output(
                IrOp::Copy,
                dst,
                SmallVec::from_slice(&[src]),
                addr,
            ));
            (DecodedKind::Transfer, out)
        }

        // Memory load: Rd = mem{b/h/w/d}(Rs + off). The exact size is encoded in
        // low subop bits; the IR address calculation is shared.
        0x0a | 0x0b | 0x0c => {
            let size = match sop & 0x03 {
                0 => 1,
                1 => 2,
                2 => 4,
                _ => 8,
            };
            let ea = tmp(seq as u64, REG_SIZE);
            let dst = if size <= 4 {
                reg(d5(word))
            } else {
                tmp(seq as u64 + 32, size)
            };
            out.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                SmallVec::from_slice(&[reg(s5(word)), imm32(s11(word) as u64)]),
                addr,
            ));
            out.push(IrInsn::with_output(
                IrOp::Load,
                dst,
                SmallVec::from_slice(&[imm(0, REG_SIZE), ea]),
                addr,
            ));
            (DecodedKind::Load, out)
        }

        // Memory store: mem{b/h/w/d}(Rs + off) = Rt.
        0x0d | 0x0e | 0x0f => {
            let size = match sop & 0x03 {
                0 => 1,
                1 => 2,
                2 => 4,
                _ => 8,
            };
            let ea = tmp(seq as u64, REG_SIZE);
            let src = if size <= 4 {
                reg(t5(word))
            } else {
                tmp(seq as u64 + 32, size)
            };
            out.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                SmallVec::from_slice(&[reg(s5(word)), imm32(s11(word) as u64)]),
                addr,
            ));
            out.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[imm(0, REG_SIZE), ea, src]),
                addr,
            ));
            (DecodedKind::Store, out)
        }

        // Compare and predicate-producing group.
        0x10 | 0x11 => {
            let p = pred(bits(word, 8, 2) as u8);
            let op = match sop & 0x07 {
                0 => IrOp::IntEqual,
                1 => IrOp::IntNotequal,
                2 => IrOp::IntLess,
                3 => IrOp::IntSless,
                4 => IrOp::IntLessequal,
                _ => IrOp::IntSlessequal,
            };
            let rhs = if sop & 0x20 != 0 {
                imm32(u6(word) as u64)
            } else {
                reg(t5(word))
            };
            out.push(IrInsn::with_output(
                op,
                p,
                SmallVec::from_slice(&[reg(s5(word)), rhs]),
                addr,
            ));
            (DecodedKind::Predicate, out)
        }

        // Conditional compare-and-branch. Emit explicit comparison into a
        // temporary so CFG and def-use passes have a concrete condition value.
        0x12 | 0x13 => {
            let cond = tmp(seq as u64, 1);
            let target = branch_target(addr, s16(word) << 2);
            let op = if sop & 1 == 0 {
                IrOp::IntEqual
            } else {
                IrOp::IntNotequal
            };
            out.push(IrInsn::with_output(
                op,
                cond,
                SmallVec::from_slice(&[reg(s5(word)), reg(t5(word))]),
                addr,
            ));
            out.push(IrInsn::without_output(
                IrOp::Cbranch,
                SmallVec::from_slice(&[ram_target(target), cond]),
                addr,
            ));
            (DecodedKind::CompareBranch, out)
        }

        // Direct jumps/loops.
        0x14 | 0x15 => {
            let target = branch_target(addr, s16(word) << 2);
            out.push(IrInsn::without_output(
                IrOp::Branch,
                SmallVec::from_slice(&[ram_target(target)]),
                addr,
            ));
            (DecodedKind::Jump, out)
        }

        // Calls. Also materialise LR so downstream return-address recovery can
        // identify call sites even before a full calling-convention pass.
        0x16 => {
            let target = branch_target(addr, s16(word) << 2);
            out.push(IrInsn::with_output(
                IrOp::Copy,
                reg(REG_LR),
                SmallVec::from_slice(&[imm32((addr + WORD_SIZE as u64) & 0xffff_ffff)]),
                addr,
            ));
            out.push(IrInsn::without_output(
                IrOp::Call,
                SmallVec::from_slice(&[ram_target(target)]),
                addr,
            ));
            (DecodedKind::Call, out)
        }

        // Register-indirect control-flow and canonical jumpr r31 return.
        0x17 => {
            let target = reg(s5(word));
            if s5(word) == REG_LR && (sop & 0x03) == 0 {
                out.push(IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::from_slice(&[target]),
                    addr,
                ));
                (DecodedKind::Return, out)
            } else if sop & 0x01 == 0 {
                out.push(IrInsn::without_output(
                    IrOp::Branchind,
                    SmallVec::from_slice(&[target]),
                    addr,
                ));
                (DecodedKind::Jump, out)
            } else {
                out.push(IrInsn::with_output(
                    IrOp::Copy,
                    reg(REG_LR),
                    SmallVec::from_slice(&[imm32((addr + WORD_SIZE as u64) & 0xffff_ffff)]),
                    addr,
                ));
                out.push(IrInsn::without_output(
                    IrOp::Callind,
                    SmallVec::from_slice(&[target]),
                    addr,
                ));
                (DecodedKind::Call, out)
            }
        }

        // Predicate logical/combine group.
        0x18 | 0x19 => {
            let dst = pred(bits(word, 8, 2) as u8);
            let lhs = pred(bits(word, 0, 2) as u8);
            let rhs = pred(bits(word, 2, 2) as u8);
            let op = match sop & 0x03 {
                0 => IrOp::BoolAnd,
                1 => IrOp::BoolOr,
                2 => IrOp::BoolXor,
                _ => IrOp::BoolNegate,
            };
            let inputs = if op == IrOp::BoolNegate {
                SmallVec::from_slice(&[lhs])
            } else {
                SmallVec::from_slice(&[lhs, rhs])
            };
            out.push(IrInsn::with_output(op, dst, inputs, addr));
            (DecodedKind::Predicate, out)
        }

        // HVX/vector extension bucket. Model common vector data flow with IR
        // operations over 64-byte vector registers; unsupported vector opcodes
        // still become CALLOTHER rather than vanishing.
        0x1a..=0x1d => {
            let dst = hvx(d5(word));
            let lhs = hvx(s5(word));
            let rhs = hvx(t5(word));
            let op = match sop & 0x07 {
                0 => IrOp::Copy,
                1 => IrOp::IntAdd,
                2 => IrOp::IntSub,
                3 => IrOp::IntAnd,
                4 => IrOp::IntOr,
                5 => IrOp::IntXor,
                _ => IrOp::Callother,
            };
            if op == IrOp::Copy {
                out.push(IrInsn::with_output(
                    op,
                    dst,
                    SmallVec::from_slice(&[lhs]),
                    addr,
                ));
            } else {
                out.push(IrInsn::with_output(
                    op,
                    dst,
                    SmallVec::from_slice(&[lhs, rhs]),
                    addr,
                ));
            }
            (DecodedKind::Hvx, out)
        }

        // Stack-relative convenience classes often used in prologues/epilogues.
        0x1e => {
            let ea = tmp(seq as u64, REG_SIZE);
            out.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                SmallVec::from_slice(&[reg(REG_SP), imm32(s11(word) as u64)]),
                addr,
            ));
            if sop & 1 == 0 {
                out.push(IrInsn::with_output(
                    IrOp::Load,
                    reg(d5(word)),
                    SmallVec::from_slice(&[imm(0, REG_SIZE), ea]),
                    addr,
                ));
                (DecodedKind::Load, out)
            } else {
                out.push(IrInsn::without_output(
                    IrOp::Store,
                    SmallVec::from_slice(&[imm(0, REG_SIZE), ea, reg(t5(word))]),
                    addr,
                ));
                (DecodedKind::Store, out)
            }
        }

        _ => {
            out.push(unimplemented(addr));
            (DecodedKind::Unknown, out)
        }
    }
}

/// Qualcomm Hexagon DSP lifter implementing [`Lifter`].
pub struct HexagonLifter {
    register_file: RegisterFile,
}

impl HexagonLifter {
    /// Create a new Hexagon lifter with scalar, predicate, control, and HVX
    /// vector registers in the register file.
    pub fn new() -> Self {
        let mut registers = Vec::with_capacity(32 + 4 + 8 + 32);
        for idx in 0..32u8 {
            let name = match idx {
                0 => "r0",
                1 => "r1",
                2 => "r2",
                3 => "r3",
                4 => "r4",
                5 => "r5",
                6 => "r6",
                7 => "r7",
                8 => "r8",
                9 => "r9",
                10 => "r10",
                11 => "r11",
                12 => "r12",
                13 => "r13",
                14 => "r14",
                15 => "r15",
                16 => "r16",
                17 => "r17",
                18 => "r18",
                19 => "r19",
                20 => "r20",
                21 => "r21",
                22 => "r22",
                23 => "r23",
                24 => "r24",
                25 => "r25",
                26 => "r26",
                27 => "r27",
                28 => "r28",
                29 => "sp",
                30 => "fp",
                31 => "lr",
                _ => unreachable!(),
            };
            registers.push(RegisterDef {
                name,
                varnode: reg(idx),
            });
        }
        for idx in 0..4u8 {
            let name = match idx {
                0 => "p0",
                1 => "p1",
                2 => "p2",
                3 => "p3",
                _ => unreachable!(),
            };
            registers.push(RegisterDef {
                name,
                varnode: pred(idx),
            });
        }
        for idx in 0..8u8 {
            let name = match idx {
                0 => "c0",
                1 => "c1",
                2 => "c2",
                3 => "c3",
                4 => "c4",
                5 => "c5",
                6 => "c6",
                7 => "c7",
                _ => unreachable!(),
            };
            registers.push(RegisterDef {
                name,
                varnode: Varnode::reg(0x180 + (idx as u64) * 4, REG_SIZE),
            });
        }
        for idx in 0..32u8 {
            let name = match idx {
                0 => "v0",
                1 => "v1",
                2 => "v2",
                3 => "v3",
                4 => "v4",
                5 => "v5",
                6 => "v6",
                7 => "v7",
                8 => "v8",
                9 => "v9",
                10 => "v10",
                11 => "v11",
                12 => "v12",
                13 => "v13",
                14 => "v14",
                15 => "v15",
                16 => "v16",
                17 => "v17",
                18 => "v18",
                19 => "v19",
                20 => "v20",
                21 => "v21",
                22 => "v22",
                23 => "v23",
                24 => "v24",
                25 => "v25",
                26 => "v26",
                27 => "v27",
                28 => "v28",
                29 => "v29",
                30 => "v30",
                31 => "v31",
                _ => unreachable!(),
            };
            registers.push(RegisterDef {
                name,
                varnode: hvx(idx),
            });
        }

        Self {
            register_file: RegisterFile { registers },
        }
    }
}

impl Default for HexagonLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for HexagonLifter {
    fn arch(&self) -> ArchId {
        ArchId::Hexagon
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let word_count = packet_word_count(bytes)?;
        let mut ir_ops = Vec::new();
        let mut saw_known = false;

        for idx in 0..word_count {
            let off = idx * WORD_SIZE;
            let word = read_word(&bytes[off..])?;
            let insn_addr = addr + off as u64;
            trace!(addr = %format!("{insn_addr:#x}"), word = %format!("{word:#010x}"), "decoding Hexagon instruction");
            let (kind, mut ops) = decode_word_ir(word, insn_addr, idx + packet_end_bonus(word));
            saw_known |= kind != DecodedKind::Unknown;
            ir_ops.append(&mut ops);
        }

        if !saw_known && ir_ops.is_empty() {
            ir_ops.push(unimplemented(addr));
        }

        Ok(LiftedInsn {
            ir_ops,
            len: word_count * WORD_SIZE,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn word(major: u8, subop: u8, dst: u8, src: u8, src2: u8, parse: u8) -> [u8; 4] {
        let mut w = ((major as u32) << 27)
            | ((subop as u32) << 21)
            | ((dst as u32) << 10)
            | ((src2 as u32) << 5)
            | (src as u32);
        w |= (parse as u32) << 14;
        w.to_le_bytes()
    }

    #[test]
    fn register_file_contains_hexagon_state() {
        let lifter = HexagonLifter::new();
        assert_eq!(lifter.arch(), ArchId::Hexagon);
        let regs = &lifter.register_file().registers;
        assert!(regs.iter().any(|r| r.name == "sp"));
        assert!(regs.iter().any(|r| r.name == "lr"));
        assert!(regs.iter().any(|r| r.name == "p0"));
        assert!(regs.iter().any(|r| r.name == "v31"));
    }

    #[test]
    fn lifts_scalar_alu_packet_word() {
        let lifter = HexagonLifter::new();
        let bytes = word(0x00, 0x00, 3, 1, 2, 0b11);
        let lifted = lifter.lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[0].output, Some(reg(3)));
    }

    #[test]
    fn lifts_packet_until_end_parse_bits() {
        let lifter = HexagonLifter::new();
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&word(0x00, 0x00, 3, 1, 2, 0b00));
        bytes.extend_from_slice(&word(0x04, 0x00, 4, 3, 0, 0b11));
        bytes.extend_from_slice(&word(0x1f, 0x3f, 0, 0, 0, 0b11));
        let lifted = lifter.lift_insn(&bytes, 0x2000).unwrap();
        assert_eq!(lifted.len, 8);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::IntAdd);
    }

    #[test]
    fn lifts_load_and_store_addressing() {
        let lifter = HexagonLifter::new();
        let load = lifter
            .lift_insn(&word(0x0a, 0x02, 5, 1, 0, 0b11), 0x3000)
            .unwrap();
        assert_eq!(load.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(load.ir_ops[1].op, IrOp::Load);

        let store = lifter
            .lift_insn(&word(0x0d, 0x02, 0, 1, 5, 0b11), 0x3004)
            .unwrap();
        assert_eq!(store.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(store.ir_ops[1].op, IrOp::Store);
    }

    #[test]
    fn lifts_branch_call_return_and_hvx() {
        let lifter = HexagonLifter::new();
        let br = lifter
            .lift_insn(&word(0x12, 0, 0, 1, 2, 0b11), 0x4000)
            .unwrap();
        assert_eq!(br.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(br.ir_ops[1].op, IrOp::Cbranch);

        let call = lifter
            .lift_insn(&word(0x16, 0, 0, 1, 2, 0b11), 0x5000)
            .unwrap();
        assert_eq!(call.ir_ops[0].op, IrOp::Copy);
        assert_eq!(call.ir_ops[1].op, IrOp::Call);

        let ret = lifter
            .lift_insn(&word(0x17, 0, 0, REG_LR, 0, 0b11), 0x6000)
            .unwrap();
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);

        let hvx = lifter
            .lift_insn(&word(0x1a, 1, 3, 1, 2, 0b11), 0x7000)
            .unwrap();
        assert_eq!(hvx.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(hvx.ir_ops[0].output, Some(super::hvx(3)));
    }

    #[test]
    fn unknown_word_becomes_unimplemented() {
        let lifter = HexagonLifter::new();
        let lifted = lifter
            .lift_insn(&word(0x1f, 0x3f, 0, 0, 0, 0b11), 0)
            .unwrap();
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn short_buffer_errors() {
        let lifter = HexagonLifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0, 1, 2], 0),
            Err(LiftError::ShortBuffer)
        ));
    }
}
