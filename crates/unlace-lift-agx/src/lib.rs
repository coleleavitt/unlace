//! Apple AGX (M-series GPU) → IR lifter.
//!
//! Apple AGX is an undocumented GPU ISA used by Apple M-series SoCs.  This
//! lifter intentionally models a conservative, research-grade core: a stable
//! register file and a compact decoder for scalar/control/memory/vector-like
//! pseudo-encodings used by tests and experiments.  Unknown encodings lift to
//! [`IrOp::Unimplemented`] instead of failing, so AGX binaries can flow through
//! the rest of unlace while decoder coverage grows.
//!
//! # Instruction format
//!
//! AGX instructions are treated as fixed-width 64-bit little-endian words.  The
//! low byte is a primary opcode and the next bytes carry destination/source
//! register IDs plus a 32-bit immediate/displacement:
//!
//! ```text
//! bits  0..=7   opcode
//! bits  8..=15  dst / predicate / branch predicate
//! bits 16..=23  src0 / base
//! bits 24..=31  src1 / value register
//! bits 32..=63  imm32 (signed for branches and memory offsets)
//! ```
//!
//! The mapping is deliberately small but useful: scalar integer/floating ALU,
//! moves, loads/stores, direct and predicated branches, calls/returns, and
//! CALLOTHER hooks for common GPU operations (texture/sample, barriers, atomics,
//! and lane/vector operations).

use smallvec::{SmallVec, smallvec};
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// Fixed AGX instruction size in bytes.
pub const INSN_SIZE: usize = 8;

/// Number of modeled scalar general-purpose registers.
pub const NUM_GPRS: usize = 128;
/// Number of modeled 32-bit predicate registers.
pub const NUM_PREDS: usize = 16;
/// Number of modeled 128-bit vector registers.
pub const NUM_VECS: usize = 64;

const GPR_BASE: u64 = 0;
const PRED_BASE: u64 = GPR_BASE + (NUM_GPRS as u64) * 8;
const VEC_BASE: u64 = PRED_BASE + (NUM_PREDS as u64) * 4;
const SPECIAL_BASE: u64 = VEC_BASE + (NUM_VECS as u64) * 16;
const UNIQUE_BASE: u64 = 0x4000;

const REG_EXEC_MASK: u64 = SPECIAL_BASE;
const REG_THREAD_ID: u64 = SPECIAL_BASE + 8;
const REG_BLOCK_ID: u64 = SPECIAL_BASE + 16;
const REG_SP: u64 = SPECIAL_BASE + 24;
const REG_PC: u64 = SPECIAL_BASE + 32;

/// CALLOTHER tag for AGX texture/sample operations.
pub const CALLOTHER_AGX_TEXTURE_SAMPLE: u64 = 0xA6_00;
/// CALLOTHER tag for AGX memory/threadgroup barriers.
pub const CALLOTHER_AGX_BARRIER: u64 = 0xA6_01;
/// CALLOTHER tag for AGX atomic memory operations.
pub const CALLOTHER_AGX_ATOMIC: u64 = 0xA6_02;
/// CALLOTHER tag for AGX lane/quad shuffle operations.
pub const CALLOTHER_AGX_LANE_OP: u64 = 0xA6_03;
/// CALLOTHER tag for AGX vector ALU operations that have no scalar IR opcode.
pub const CALLOTHER_AGX_VECTOR_ALU: u64 = 0xA6_04;

const OP_NOP: u8 = 0x00;
const OP_MOV: u8 = 0x01;
const OP_MOVI: u8 = 0x02;
const OP_ADD: u8 = 0x10;
const OP_SUB: u8 = 0x11;
const OP_MUL: u8 = 0x12;
const OP_AND: u8 = 0x13;
const OP_OR: u8 = 0x14;
const OP_XOR: u8 = 0x15;
const OP_SHL: u8 = 0x16;
const OP_SHR: u8 = 0x17;
const OP_SAR: u8 = 0x18;
const OP_CMP_EQ: u8 = 0x20;
const OP_CMP_NE: u8 = 0x21;
const OP_CMP_LT: u8 = 0x22;
const OP_CMP_SLT: u8 = 0x23;
const OP_FADD: u8 = 0x30;
const OP_FSUB: u8 = 0x31;
const OP_FMUL: u8 = 0x32;
const OP_FDIV: u8 = 0x33;
const OP_FCMP_LT: u8 = 0x34;
const OP_LOAD: u8 = 0x40;
const OP_STORE: u8 = 0x41;
const OP_BRA: u8 = 0x50;
const OP_BRA_P: u8 = 0x51;
const OP_CALL: u8 = 0x52;
const OP_RET: u8 = 0x53;
const OP_TEX: u8 = 0x60;
const OP_BARRIER: u8 = 0x61;
const OP_ATOMIC: u8 = 0x62;
const OP_LANE: u8 = 0x63;
const OP_VADD: u8 = 0x70;
const OP_VMUL: u8 = 0x71;

#[inline]
fn gpr(idx: u8, size: u8) -> Varnode {
    Varnode::reg(GPR_BASE + (idx as u64) * 8, size)
}

#[inline]
fn pred(idx: u8) -> Varnode {
    Varnode::reg(PRED_BASE + ((idx as u64) % NUM_PREDS as u64) * 4, 1)
}

#[inline]
fn vec_reg(idx: u8) -> Varnode {
    Varnode::reg(VEC_BASE + ((idx as u64) % NUM_VECS as u64) * 16, 16)
}

#[inline]
fn special(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 8)
}

fn unimplemented(addr: u64) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::<[Varnode; 3]>::new(),
            addr,
        )],
        len: INSN_SIZE,
    }
}

#[derive(Debug, Clone, Copy)]
struct AgxInsn {
    opcode: u8,
    dst: u8,
    src0: u8,
    src1: u8,
    imm: i32,
}

impl AgxInsn {
    fn decode(bytes: &[u8]) -> Result<Self, LiftError> {
        if bytes.len() < INSN_SIZE {
            return Err(LiftError::ShortBuffer);
        }
        let word = u64::from_le_bytes(bytes[..INSN_SIZE].try_into().expect("slice length checked"));
        Ok(Self {
            opcode: word as u8,
            dst: ((word >> 8) & 0xff) as u8,
            src0: ((word >> 16) & 0xff) as u8,
            src1: ((word >> 24) & 0xff) as u8,
            imm: ((word >> 32) as u32) as i32,
        })
    }

    fn imm64(self) -> u64 {
        self.imm as i64 as u64
    }

    fn relative_target(self, addr: u64) -> u64 {
        addr.wrapping_add(INSN_SIZE as u64)
            .wrapping_add(self.imm as i64 as u64)
    }
}

/// Apple AGX architecture lifter.
pub struct AgxLifter {
    register_file: RegisterFile,
}

impl AgxLifter {
    /// Create a new AGX lifter with scalar, predicate, vector and execution
    /// state registers.
    pub fn new() -> Self {
        let mut registers = Vec::with_capacity(NUM_GPRS + NUM_PREDS + NUM_VECS + 5);

        for i in 0..NUM_GPRS {
            let name = Box::leak(format!("r{i}").into_boxed_str());
            registers.push(RegisterDef {
                name,
                varnode: gpr(i as u8, 8),
            });
        }
        for i in 0..NUM_PREDS {
            let name = Box::leak(format!("p{i}").into_boxed_str());
            registers.push(RegisterDef {
                name,
                varnode: pred(i as u8),
            });
        }
        for i in 0..NUM_VECS {
            let name = Box::leak(format!("v{i}").into_boxed_str());
            registers.push(RegisterDef {
                name,
                varnode: vec_reg(i as u8),
            });
        }
        registers.extend([
            RegisterDef {
                name: "exec_mask",
                varnode: special(REG_EXEC_MASK, 8),
            },
            RegisterDef {
                name: "thread_id",
                varnode: special(REG_THREAD_ID, 8),
            },
            RegisterDef {
                name: "block_id",
                varnode: special(REG_BLOCK_ID, 8),
            },
            RegisterDef {
                name: "sp",
                varnode: special(REG_SP, 8),
            },
            RegisterDef {
                name: "pc",
                varnode: special(REG_PC, 8),
            },
        ]);

        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_binop(&self, insn: AgxInsn, addr: u64, op: IrOp) -> LiftedInsn {
        LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                gpr(insn.dst, 8),
                smallvec![gpr(insn.src0, 8), gpr(insn.src1, 8)],
                addr,
            )],
            len: INSN_SIZE,
        }
    }

    fn lift_float_binop(&self, insn: AgxInsn, addr: u64, op: IrOp) -> LiftedInsn {
        LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                gpr(insn.dst, 4),
                smallvec![gpr(insn.src0, 4), gpr(insn.src1, 4)],
                addr,
            )],
            len: INSN_SIZE,
        }
    }

    fn lift_compare(&self, insn: AgxInsn, addr: u64, op: IrOp) -> LiftedInsn {
        LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                pred(insn.dst),
                smallvec![gpr(insn.src0, 8), gpr(insn.src1, 8)],
                addr,
            )],
            len: INSN_SIZE,
        }
    }

    fn lift_memory(&self, insn: AgxInsn, addr: u64, is_store: bool) -> LiftedInsn {
        let ea = tmp(0, 8);
        let mut ops = Vec::with_capacity(2);
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            smallvec![gpr(insn.src0, 8), const_vn(insn.imm64(), 8)],
            addr,
        ));
        if is_store {
            ops.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![ea, gpr(insn.src1, 8)],
                addr,
            ));
        } else {
            ops.push(IrInsn::with_output(
                IrOp::Load,
                gpr(insn.dst, 8),
                smallvec![ea],
                addr,
            ));
        }
        LiftedInsn {
            ir_ops: ops,
            len: INSN_SIZE,
        }
    }

    fn lift_callother(
        &self,
        insn: AgxInsn,
        addr: u64,
        tag: u64,
        output: Option<Varnode>,
    ) -> LiftedInsn {
        let inputs = smallvec![
            const_vn(tag, 8),
            gpr(insn.dst, 8),
            gpr(insn.src0, 8),
            gpr(insn.src1, 8),
            const_vn(insn.imm64(), 8),
        ];
        let ir = match output {
            Some(out) => IrInsn::with_output(IrOp::Callother, out, inputs, addr),
            None => IrInsn::without_output(IrOp::Callother, inputs, addr),
        };
        LiftedInsn {
            ir_ops: vec![ir],
            len: INSN_SIZE,
        }
    }

    fn lift_inner(&self, insn: AgxInsn, addr: u64) -> LiftedInsn {
        match insn.opcode {
            OP_NOP => LiftedInsn {
                ir_ops: Vec::new(),
                len: INSN_SIZE,
            },
            OP_MOV => LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    gpr(insn.dst, 8),
                    smallvec![gpr(insn.src0, 8)],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_MOVI => LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    gpr(insn.dst, 8),
                    smallvec![const_vn(insn.imm64(), 8)],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_ADD => self.lift_binop(insn, addr, IrOp::IntAdd),
            OP_SUB => self.lift_binop(insn, addr, IrOp::IntSub),
            OP_MUL => self.lift_binop(insn, addr, IrOp::IntMult),
            OP_AND => self.lift_binop(insn, addr, IrOp::IntAnd),
            OP_OR => self.lift_binop(insn, addr, IrOp::IntOr),
            OP_XOR => self.lift_binop(insn, addr, IrOp::IntXor),
            OP_SHL => self.lift_binop(insn, addr, IrOp::IntLeft),
            OP_SHR => self.lift_binop(insn, addr, IrOp::IntRight),
            OP_SAR => self.lift_binop(insn, addr, IrOp::IntSright),
            OP_CMP_EQ => self.lift_compare(insn, addr, IrOp::IntEqual),
            OP_CMP_NE => self.lift_compare(insn, addr, IrOp::IntNotequal),
            OP_CMP_LT => self.lift_compare(insn, addr, IrOp::IntLess),
            OP_CMP_SLT => self.lift_compare(insn, addr, IrOp::IntSless),
            OP_FADD => self.lift_float_binop(insn, addr, IrOp::FloatAdd),
            OP_FSUB => self.lift_float_binop(insn, addr, IrOp::FloatSub),
            OP_FMUL => self.lift_float_binop(insn, addr, IrOp::FloatMult),
            OP_FDIV => self.lift_float_binop(insn, addr, IrOp::FloatDiv),
            OP_FCMP_LT => LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::FloatLess,
                    pred(insn.dst),
                    smallvec![gpr(insn.src0, 4), gpr(insn.src1, 4)],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_LOAD => self.lift_memory(insn, addr, false),
            OP_STORE => self.lift_memory(insn, addr, true),
            OP_BRA => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![ram_target(insn.relative_target(addr))],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_BRA_P => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Cbranch,
                    smallvec![ram_target(insn.relative_target(addr)), pred(insn.dst)],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_CALL => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Call,
                    smallvec![ram_target(insn.relative_target(addr))],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_RET => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
                len: INSN_SIZE,
            },
            OP_TEX => self.lift_callother(
                insn,
                addr,
                CALLOTHER_AGX_TEXTURE_SAMPLE,
                Some(gpr(insn.dst, 8)),
            ),
            OP_BARRIER => self.lift_callother(insn, addr, CALLOTHER_AGX_BARRIER, None),
            OP_ATOMIC => {
                self.lift_callother(insn, addr, CALLOTHER_AGX_ATOMIC, Some(gpr(insn.dst, 8)))
            }
            OP_LANE => {
                self.lift_callother(insn, addr, CALLOTHER_AGX_LANE_OP, Some(gpr(insn.dst, 8)))
            }
            OP_VADD | OP_VMUL => self.lift_callother(
                insn,
                addr,
                CALLOTHER_AGX_VECTOR_ALU,
                Some(vec_reg(insn.dst)),
            ),
            _ => unimplemented(addr),
        }
    }
}

impl Default for AgxLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for AgxLifter {
    fn arch(&self) -> ArchId {
        ArchId::Agx
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let insn = AgxInsn::decode(bytes)?;
        trace!(
            addr = %format!("{addr:#x}"),
            opcode = %format!("{:#04x}", insn.opcode),
            dst = insn.dst,
            src0 = insn.src0,
            src1 = insn.src1,
            imm = insn.imm,
            "decoding AGX instruction"
        );
        Ok(self.lift_inner(insn, addr))
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn encode(opcode: u8, dst: u8, src0: u8, src1: u8, imm: i32) -> [u8; 8] {
        let word = (opcode as u64)
            | ((dst as u64) << 8)
            | ((src0 as u64) << 16)
            | ((src1 as u64) << 24)
            | ((imm as u32 as u64) << 32);
        word.to_le_bytes()
    }

    #[test]
    fn register_file_models_agx_execution_state() {
        let lifter = AgxLifter::new();
        let regs = &lifter.register_file().registers;
        assert_eq!(regs.len(), NUM_GPRS + NUM_PREDS + NUM_VECS + 5);
        assert_eq!(regs[0].name, "r0");
        assert_eq!(regs[NUM_GPRS].name, "p0");
        assert_eq!(regs[NUM_GPRS + NUM_PREDS].name, "v0");
        assert_eq!(regs.last().unwrap().name, "pc");
    }

    #[test]
    fn lifts_scalar_add() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_ADD, 1, 2, 3, 0), 0x1000)
            .unwrap();
        assert_eq!(result.len, INSN_SIZE);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output, Some(gpr(1, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], gpr(2, 8));
        assert_eq!(result.ir_ops[0].inputs[1], gpr(3, 8));
    }

    #[test]
    fn lifts_mov_immediate() {
        let lifter = AgxLifter::new();
        let result = lifter.lift_insn(&encode(OP_MOVI, 4, 0, 0, -7), 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(gpr(4, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], const_vn((-7i64) as u64, 8));
    }

    #[test]
    fn lifts_memory_load_and_store() {
        let lifter = AgxLifter::new();
        let load = lifter
            .lift_insn(&encode(OP_LOAD, 1, 2, 0, 16), 0x2000)
            .unwrap();
        assert_eq!(load.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(load.ir_ops[1].op, IrOp::Load);
        assert_eq!(load.ir_ops[1].output, Some(gpr(1, 8)));

        let store = lifter
            .lift_insn(&encode(OP_STORE, 0, 2, 3, -8), 0x2008)
            .unwrap();
        assert_eq!(store.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(store.ir_ops[1].op, IrOp::Store);
        assert_eq!(store.ir_ops[1].inputs[1], gpr(3, 8));
    }

    #[test]
    fn lifts_branches_and_calls() {
        let lifter = AgxLifter::new();
        let branch = lifter
            .lift_insn(&encode(OP_BRA, 0, 0, 0, 0x20), 0x1000)
            .unwrap();
        assert_eq!(branch.ir_ops[0].op, IrOp::Branch);
        assert_eq!(branch.ir_ops[0].inputs[0], ram_target(0x1028));

        let cbranch = lifter
            .lift_insn(&encode(OP_BRA_P, 3, 0, 0, -8), 0x1000)
            .unwrap();
        assert_eq!(cbranch.ir_ops[0].op, IrOp::Cbranch);
        assert_eq!(cbranch.ir_ops[0].inputs[0], ram_target(0x1000));
        assert_eq!(cbranch.ir_ops[0].inputs[1], pred(3));

        let call = lifter
            .lift_insn(&encode(OP_CALL, 0, 0, 0, 4), 0x1000)
            .unwrap();
        assert_eq!(call.ir_ops[0].op, IrOp::Call);
        assert_eq!(call.ir_ops[0].inputs[0], ram_target(0x100c));
    }

    #[test]
    fn lifts_gpu_specific_ops_as_callother() {
        let lifter = AgxLifter::new();
        let tex = lifter.lift_insn(&encode(OP_TEX, 1, 2, 3, 4), 0).unwrap();
        assert_eq!(tex.ir_ops[0].op, IrOp::Callother);
        assert_eq!(tex.ir_ops[0].output, Some(gpr(1, 8)));
        assert_eq!(
            tex.ir_ops[0].inputs[0],
            const_vn(CALLOTHER_AGX_TEXTURE_SAMPLE, 8)
        );

        let barrier = lifter
            .lift_insn(&encode(OP_BARRIER, 0, 0, 0, 0), 0)
            .unwrap();
        assert_eq!(barrier.ir_ops[0].op, IrOp::Callother);
        assert_eq!(barrier.ir_ops[0].output, None);
        assert_eq!(
            barrier.ir_ops[0].inputs[0],
            const_vn(CALLOTHER_AGX_BARRIER, 8)
        );

        let vadd = lifter.lift_insn(&encode(OP_VADD, 5, 6, 7, 0), 0).unwrap();
        assert_eq!(vadd.ir_ops[0].op, IrOp::Callother);
        assert_eq!(vadd.ir_ops[0].output, Some(vec_reg(5)));
    }

    #[test]
    fn unknown_opcode_lifts_to_unimplemented() {
        let lifter = AgxLifter::new();
        let result = lifter.lift_insn(&encode(0xff, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn short_buffer_errors() {
        let lifter = AgxLifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0; 7], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    #[test]
    fn lifts_scalar_sub() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_SUB, 5, 6, 7, 0), 0x2000)
            .unwrap();
        assert_eq!(result.len, INSN_SIZE);
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[0].output, Some(gpr(5, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], gpr(6, 8));
        assert_eq!(result.ir_ops[0].inputs[1], gpr(7, 8));
    }

    #[test]
    fn lifts_scalar_mul() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_MUL, 10, 11, 12, 0), 0)
            .unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntMult);
        assert_eq!(result.ir_ops[0].output, Some(gpr(10, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], gpr(11, 8));
        assert_eq!(result.ir_ops[0].inputs[1], gpr(12, 8));
    }

    #[test]
    fn lifts_float_add_sub_mul() {
        let lifter = AgxLifter::new();

        let fadd = lifter
            .lift_insn(&encode(OP_FADD, 1, 2, 3, 0), 0)
            .unwrap();
        assert_eq!(fadd.ir_ops[0].op, IrOp::FloatAdd);
        assert_eq!(fadd.ir_ops[0].output, Some(gpr(1, 4)));
        assert_eq!(fadd.ir_ops[0].inputs[0], gpr(2, 4));
        assert_eq!(fadd.ir_ops[0].inputs[1], gpr(3, 4));

        let fsub = lifter
            .lift_insn(&encode(OP_FSUB, 4, 5, 6, 0), 0)
            .unwrap();
        assert_eq!(fsub.ir_ops[0].op, IrOp::FloatSub);
        assert_eq!(fsub.ir_ops[0].output, Some(gpr(4, 4)));

        let fmul = lifter
            .lift_insn(&encode(OP_FMUL, 7, 8, 9, 0), 0)
            .unwrap();
        assert_eq!(fmul.ir_ops[0].op, IrOp::FloatMult);
        assert_eq!(fmul.ir_ops[0].output, Some(gpr(7, 4)));
    }

    #[test]
    fn lifts_register_mov() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_MOV, 3, 10, 0, 0), 0)
            .unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(gpr(3, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], gpr(10, 8));
    }

    #[test]
    fn lifts_return() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_RET, 0, 0, 0, 0), 0x3000)
            .unwrap();
        assert_eq!(result.len, INSN_SIZE);
        assert_eq!(result.ir_ops[0].op, IrOp::Return);
        assert_eq!(result.ir_ops[0].output, None);
        assert!(result.ir_ops[0].inputs.is_empty());
    }

    #[test]
    fn lifts_atomic_and_lane_as_callother() {
        let lifter = AgxLifter::new();

        let atomic = lifter
            .lift_insn(&encode(OP_ATOMIC, 2, 3, 4, 0), 0)
            .unwrap();
        assert_eq!(atomic.ir_ops[0].op, IrOp::Callother);
        assert_eq!(atomic.ir_ops[0].output, Some(gpr(2, 8)));
        assert_eq!(
            atomic.ir_ops[0].inputs[0],
            const_vn(CALLOTHER_AGX_ATOMIC, 8)
        );

        let lane = lifter
            .lift_insn(&encode(OP_LANE, 5, 6, 7, 0), 0)
            .unwrap();
        assert_eq!(lane.ir_ops[0].op, IrOp::Callother);
        assert_eq!(lane.ir_ops[0].output, Some(gpr(5, 8)));
        assert_eq!(
            lane.ir_ops[0].inputs[0],
            const_vn(CALLOTHER_AGX_LANE_OP, 8)
        );
    }

    #[test]
    fn lifts_nop() {
        let lifter = AgxLifter::new();
        let result = lifter
            .lift_insn(&encode(OP_NOP, 0, 0, 0, 0), 0)
            .unwrap();
        assert_eq!(result.len, INSN_SIZE);
        assert!(result.ir_ops.is_empty());
    }
}
