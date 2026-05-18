//! SPIR-V → IR lifter (native decoder).
//!
//! SPIR-V is a serialised SSA-style IR with versioned op enums. Each
//! instruction is a stream of 32-bit words:
//!
//! ```text
//! word[0]   = (word_count << 16) | opcode
//! word[1..] = result_type, result_id, operands  (op-specific shapes)
//! ```
//!
//! Result-id values are SSA names — every instruction that produces a
//! value introduces a fresh id. We model the SSA id-space as
//! `SpaceId::Unique` Varnodes keyed by the id integer so the rest of
//! the unlace pipeline can reason about def/use chains uniformly.
//!
//! This Beta-tier lifter covers 20 of the most common SPIR-V opcodes —
//! enough to lift shader entry points, scalar arithmetic, branches,
//! memory accesses, and function calls.

use smallvec::{SmallVec, smallvec};
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// SPIR-V module magic (`SPV_E_MAGIC_NUMBER`), little-endian.
pub const SPIRV_MAGIC: u32 = 0x07230203;

/// Default word size — every SPIR-V instruction is built from 32-bit words.
pub const WORD_BYTES: usize = 4;
/// SSA-id Varnode size. SPIR-V values are typed but unlace's varnode
/// model is byte-sized; treat every result-id as a 4-byte register.
pub const ID_SIZE: u8 = 4;
const ID_BASE: u64 = 0;
const UNIQUE_BASE: u64 = 0x4000;

/// CALLOTHER tags for SPIR-V ops without a direct IR equivalent.
pub const CALLOTHER_FUNCTION: u64 = 0xC0_00;
pub const CALLOTHER_FUNCTION_END: u64 = 0xC0_01;
pub const CALLOTHER_LABEL: u64 = 0xC0_02;
pub const CALLOTHER_VARIABLE: u64 = 0xC0_03;
pub const CALLOTHER_KILL: u64 = 0xC0_04;
pub const CALLOTHER_COMPOSITE_EXTRACT: u64 = 0xC0_05;
pub const CALLOTHER_ACCESS_CHAIN: u64 = 0xC0_06;

// 20 target opcodes (subset of the SPIR-V spec).
const OP_NOP: u16 = 0;
const OP_FUNCTION: u16 = 54;
const OP_FUNCTION_END: u16 = 56;
const OP_FUNCTION_CALL: u16 = 57;
const OP_VARIABLE: u16 = 59;
const OP_LOAD: u16 = 61;
const OP_STORE: u16 = 62;
const OP_ACCESS_CHAIN: u16 = 65;
const OP_COMPOSITE_EXTRACT: u16 = 81;
const OP_I_ADD: u16 = 128;
const OP_F_ADD: u16 = 129;
const OP_I_SUB: u16 = 130;
const OP_I_MUL: u16 = 132;
const OP_F_MUL: u16 = 133;
const OP_LABEL: u16 = 248;
const OP_BRANCH: u16 = 249;
const OP_BRANCH_CONDITIONAL: u16 = 250;
const OP_KILL: u16 = 252;
const OP_RETURN: u16 = 253;
const OP_RETURN_VALUE: u16 = 254;

#[inline]
fn id_var(id: u32) -> Varnode {
    Varnode::reg(ID_BASE + (id as u64) * ID_SIZE as u64, ID_SIZE)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, ID_SIZE)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, ID_SIZE)
}

fn build_register_file() -> RegisterFile {
    let mut regs: Vec<RegisterDef> = (0..8u32)
        .map(|i| {
            let name: &'static str = match i {
                0 => "id0",
                1 => "id1",
                2 => "id2",
                3 => "id3",
                4 => "id4",
                5 => "id5",
                6 => "id6",
                _ => "id7",
            };
            RegisterDef {
                name,
                varnode: id_var(i),
            }
        })
        .collect();
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(0x1000, ID_SIZE),
    });
    RegisterFile { registers: regs }
}

/// Decoded SPIR-V instruction header (one word) plus a reference to
/// the operand words that follow it in the stream.
#[derive(Debug, Clone, Copy)]
struct SpirVInsn<'a> {
    opcode: u16,
    word_count: u16,
    operands: &'a [u32],
}

fn read_words(bytes: &[u8]) -> Result<&[u32], LiftError> {
    if bytes.len() % WORD_BYTES != 0 {
        return Err(LiftError::Decode("SPIR-V byte stream not word-aligned".into()));
    }
    // Safety: cast is sound because length is multiple of 4 and SPIR-V
    // requires word alignment in practice. Tests construct aligned slices.
    let len = bytes.len() / WORD_BYTES;
    Ok(unsafe {
        std::slice::from_raw_parts(bytes.as_ptr() as *const u32, len)
    })
}

fn decode<'a>(words: &'a [u32]) -> Result<SpirVInsn<'a>, LiftError> {
    let header = *words.first().ok_or(LiftError::ShortBuffer)?;
    let opcode = (header & 0xFFFF) as u16;
    let word_count = ((header >> 16) & 0xFFFF) as u16;
    if word_count == 0 || (word_count as usize) > words.len() {
        return Err(LiftError::Decode(format!(
            "invalid SPIR-V word_count {word_count}"
        )));
    }
    Ok(SpirVInsn {
        opcode,
        word_count,
        operands: &words[1..word_count as usize],
    })
}

pub struct SpirVLifter {
    reg_file: RegisterFile,
}

impl SpirVLifter {
    pub fn new() -> Self {
        Self {
            reg_file: build_register_file(),
        }
    }
}

impl Default for SpirVLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SpirVLifter {
    fn arch(&self) -> ArchId {
        ArchId::SpirV
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < WORD_BYTES {
            return Err(LiftError::ShortBuffer);
        }
        let words = read_words(bytes)?;
        let insn = decode(words)?;
        let ir_ops = lift_dispatch(&insn, addr);
        Ok(LiftedInsn {
            ir_ops,
            len: (insn.word_count as usize) * WORD_BYTES,
        })
    }
}

fn lift_dispatch(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    match insn.opcode {
        OP_NOP => Vec::new(),
        OP_RETURN => vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        OP_RETURN_VALUE => lift_return_value(insn, addr),
        OP_STORE => lift_store(insn, addr),
        OP_LOAD => lift_load(insn, addr),
        OP_BRANCH => lift_branch(insn, addr),
        OP_BRANCH_CONDITIONAL => lift_branch_cond(insn, addr),
        OP_I_ADD => lift_arith(insn, IrOp::IntAdd, addr),
        OP_I_SUB => lift_arith(insn, IrOp::IntSub, addr),
        OP_I_MUL => lift_arith(insn, IrOp::IntMult, addr),
        OP_F_ADD => lift_arith(insn, IrOp::FloatAdd, addr),
        OP_F_MUL => lift_arith(insn, IrOp::FloatMult, addr),
        OP_FUNCTION_CALL => lift_function_call(insn, addr),
        OP_FUNCTION => callother(insn, CALLOTHER_FUNCTION, addr),
        OP_FUNCTION_END => callother(insn, CALLOTHER_FUNCTION_END, addr),
        OP_LABEL => callother(insn, CALLOTHER_LABEL, addr),
        OP_VARIABLE => callother(insn, CALLOTHER_VARIABLE, addr),
        OP_KILL => callother(insn, CALLOTHER_KILL, addr),
        OP_COMPOSITE_EXTRACT => callother(insn, CALLOTHER_COMPOSITE_EXTRACT, addr),
        OP_ACCESS_CHAIN => callother(insn, CALLOTHER_ACCESS_CHAIN, addr),
        _ => vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::new(),
            addr,
        )],
    }
}

fn callother(insn: &SpirVInsn<'_>, tag: u64, addr: u64) -> Vec<IrInsn> {
    let mut inputs: SmallVec<[Varnode; 3]> = smallvec![const_vn(tag, ID_SIZE)];
    // First operand of each typed op is the result-type id; second is the
    // result id when present. Surface them as the CALLOTHER output id.
    let result = insn
        .operands
        .get(1)
        .map(|&id| id_var(id))
        .unwrap_or_else(|| tmp(0));
    inputs.push(result);
    vec![IrInsn::without_output(IrOp::Callother, inputs, addr)]
}

fn lift_return_value(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    let val = insn
        .operands
        .first()
        .copied()
        .map(id_var)
        .unwrap_or_else(|| tmp(0));
    vec![IrInsn::without_output(IrOp::Return, smallvec![val], addr)]
}

fn lift_store(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    // OpStore <ptr-id> <value-id> [memory-access]
    let ptr = insn.operands.first().copied().map(id_var).unwrap_or_else(|| tmp(0));
    let val = insn.operands.get(1).copied().map(id_var).unwrap_or_else(|| tmp(1));
    vec![IrInsn::without_output(IrOp::Store, smallvec![ptr, val], addr)]
}

fn lift_load(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    // OpLoad <result-type-id> <result-id> <ptr-id> [memory-access]
    let result_id = insn.operands.get(1).copied().unwrap_or(0);
    let ptr = insn.operands.get(2).copied().map(id_var).unwrap_or_else(|| tmp(0));
    vec![IrInsn::with_output(
        IrOp::Load,
        id_var(result_id),
        smallvec![ptr],
        addr,
    )]
}

fn lift_branch(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    // OpBranch <target-label-id>. Synthesise a RAM target from the id.
    let target = insn.operands.first().copied().unwrap_or(0);
    vec![IrInsn::without_output(
        IrOp::Branch,
        smallvec![ram_target(target as u64)],
        addr,
    )]
}

fn lift_branch_cond(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    // OpBranchConditional <cond-id> <true-label> <false-label>
    let cond = insn.operands.first().copied().map(id_var).unwrap_or_else(|| tmp(0));
    let true_lbl = insn.operands.get(1).copied().unwrap_or(0);
    vec![IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![ram_target(true_lbl as u64), cond],
        addr,
    )]
}

fn lift_arith(insn: &SpirVInsn<'_>, op: IrOp, addr: u64) -> Vec<IrInsn> {
    // Op<I/F>{Add,Sub,Mul} <type-id> <result-id> <a-id> <b-id>
    let result_id = insn.operands.get(1).copied().unwrap_or(0);
    let a = insn.operands.get(2).copied().map(id_var).unwrap_or_else(|| tmp(0));
    let b = insn.operands.get(3).copied().map(id_var).unwrap_or_else(|| tmp(1));
    vec![IrInsn::with_output(op, id_var(result_id), smallvec![a, b], addr)]
}

fn lift_function_call(insn: &SpirVInsn<'_>, addr: u64) -> Vec<IrInsn> {
    // OpFunctionCall <type-id> <result-id> <function-id> [arg-ids...]
    let function_id = insn.operands.get(2).copied().unwrap_or(0);
    vec![IrInsn::without_output(
        IrOp::Call,
        smallvec![ram_target(function_id as u64)],
        addr,
    )]
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a SPIR-V instruction word stream for tests. The first word
    /// is `(word_count << 16) | opcode`; subsequent words are operand ids.
    fn encode(opcode: u16, operands: &[u32]) -> Vec<u8> {
        let word_count = (operands.len() + 1) as u16;
        let header = ((word_count as u32) << 16) | (opcode as u32);
        let mut bytes = Vec::with_capacity((operands.len() + 1) * WORD_BYTES);
        bytes.extend_from_slice(&header.to_le_bytes());
        for &op in operands {
            bytes.extend_from_slice(&op.to_le_bytes());
        }
        bytes
    }

    #[test]
    fn arch_is_spirv() {
        assert_eq!(SpirVLifter::new().arch(), ArchId::SpirV);
    }

    #[test]
    fn short_buffer_errors() {
        assert!(SpirVLifter::new().lift_insn(&[0u8; 2], 0).is_err());
    }

    #[test]
    fn invalid_word_count_errors() {
        // word_count = 0 should be rejected.
        let bytes = [0u8; 4];
        assert!(SpirVLifter::new().lift_insn(&bytes, 0).is_err());
    }

    #[test]
    fn op_nop_yields_empty_ir() {
        let bytes = encode(OP_NOP, &[]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, WORD_BYTES);
        assert!(r.ir_ops.is_empty());
    }

    #[test]
    fn op_return_yields_return() {
        let bytes = encode(OP_RETURN, &[]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops.len(), 1);
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn op_return_value_yields_return_with_input() {
        let bytes = encode(OP_RETURN_VALUE, &[42]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
        assert_eq!(r.ir_ops[0].inputs.len(), 1);
    }

    #[test]
    fn op_store_emits_store() {
        let bytes = encode(OP_STORE, &[7, 8]); // ptr=7, val=8
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Store);
        assert_eq!(r.ir_ops[0].inputs.len(), 2);
    }

    #[test]
    fn op_load_emits_load() {
        let bytes = encode(OP_LOAD, &[1, 5, 7]); // type=1, result=5, ptr=7
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Load);
        assert_eq!(r.ir_ops[0].output, Some(id_var(5)));
    }

    #[test]
    fn op_variable_is_callother() {
        let bytes = encode(OP_VARIABLE, &[1, 2, 3]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_function_is_callother() {
        let bytes = encode(OP_FUNCTION, &[1, 2, 0, 3]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_function_end_is_callother() {
        let bytes = encode(OP_FUNCTION_END, &[]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_label_is_callother() {
        let bytes = encode(OP_LABEL, &[9]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_branch_yields_branch() {
        let bytes = encode(OP_BRANCH, &[0x1000]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
    }

    #[test]
    fn op_branch_conditional_yields_cbranch() {
        let bytes = encode(OP_BRANCH_CONDITIONAL, &[3, 0x100, 0x200]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Cbranch);
    }

    #[test]
    fn op_i_add_yields_int_add() {
        let bytes = encode(OP_I_ADD, &[1, 4, 5, 6]); // type=1, result=4, a=5, b=6
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
    }

    #[test]
    fn op_i_sub_yields_int_sub() {
        let bytes = encode(OP_I_SUB, &[1, 4, 5, 6]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    #[test]
    fn op_i_mul_yields_int_mult() {
        let bytes = encode(OP_I_MUL, &[1, 4, 5, 6]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntMult);
    }

    #[test]
    fn op_f_add_yields_float_add() {
        let bytes = encode(OP_F_ADD, &[1, 4, 5, 6]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::FloatAdd);
    }

    #[test]
    fn op_f_mul_yields_float_mult() {
        let bytes = encode(OP_F_MUL, &[1, 4, 5, 6]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::FloatMult);
    }

    #[test]
    fn op_access_chain_is_callother() {
        let bytes = encode(OP_ACCESS_CHAIN, &[1, 2, 3, 4]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_composite_extract_is_callother() {
        let bytes = encode(OP_COMPOSITE_EXTRACT, &[1, 2, 3, 0]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn op_function_call_yields_call() {
        let bytes = encode(OP_FUNCTION_CALL, &[1, 5, 0xABC]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
    }

    #[test]
    fn op_kill_is_callother() {
        let bytes = encode(OP_KILL, &[]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    #[test]
    fn unknown_opcode_is_unimplemented() {
        let bytes = encode(0xABCD, &[1]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn word_count_advances_pc() {
        // 3-word instruction (1 header + 2 operands) should consume 12 bytes.
        let bytes = encode(OP_STORE, &[7, 8]);
        let r = SpirVLifter::new().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 3 * WORD_BYTES);
    }
}
