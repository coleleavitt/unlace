//! WebAssembly → IR lifter.
//!
//! Decodes a subset of the core Wasm instruction set using `wasmparser` and
//! lifts them to the unlace IR.  This lifter operates on raw Wasm bytecode
//! (function bodies) rather than machine code, so `lift_insn` decodes one Wasm
//! operator at a time.
//!
//! # Register file model
//!
//! Wasm locals (including parameters) are mapped into the register space at
//! offsets `i * 8`.  The operand stack is modeled via unique-space temporaries.

use smallvec::SmallVec;
use tracing::trace;
use wasmparser::{BinaryReader, Operator};

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

// ---------------------------------------------------------------------------
// Constants
// ---------------------------------------------------------------------------

/// Maximum number of locals we pre-allocate in the register file.
const MAX_LOCALS: usize = 256;

/// Base offset in unique-space for stack temporaries.
const UNIQUE_BASE: u64 = 0x2000;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Build a register-space Varnode for local `idx` (8 bytes per slot).
#[inline]
fn local_reg(idx: u32, size: u8) -> Varnode {
    Varnode::reg((idx as u64) * 8, size)
}

/// Build a constant Varnode.
#[inline]
fn const_vn(val: u64, size: u8) -> Varnode {
    Varnode::constant(val, size)
}

/// Build a unique temporary.
#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, size)
}

/// Build a RAM-space target for branch addresses (using Wasm bytecode offsets).
#[inline]
fn ram_target(offset: u64) -> Varnode {
    Varnode::ram(offset, 4)
}

// ---------------------------------------------------------------------------
// WasmLifter
// ---------------------------------------------------------------------------

/// WebAssembly lifter implementing the [`Lifter`] trait.
pub struct WasmLifter {
    register_file: RegisterFile,
    #[allow(dead_code)]
    num_locals: u32,
}

impl WasmLifter {
    /// Create a new Wasm lifter with a given number of locals (including params).
    pub fn new() -> Self {
        Self::with_locals(64)
    }

    /// Create a Wasm lifter configured for `n` locals.
    pub fn with_locals(n: u32) -> Self {
        let count = (n as usize).min(MAX_LOCALS);
        let mut regs = Vec::with_capacity(count);
        for i in 0..count {
            regs.push(RegisterDef {
                name: "local", // all locals share a generic name
                varnode: Varnode::reg((i as u64) * 8, 8),
            });
        }
        Self {
            register_file: RegisterFile { registers: regs },
            num_locals: n,
        }
    }

    /// Lift a single Wasm operator into IR instructions.
    fn lift_operator(&self, op: &Operator, addr: u64, len: usize) -> Result<LiftedInsn, LiftError> {
        let ops: Vec<IrInsn> = match op {
            // -- Constants --
            Operator::I32Const { value } => {
                let dest = tmp(0, 4);
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    dest,
                    SmallVec::from_slice(&[const_vn(*value as u32 as u64, 4)]),
                    addr,
                )]
            }
            Operator::I64Const { value } => {
                let dest = tmp(0, 8);
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    dest,
                    SmallVec::from_slice(&[const_vn(*value as u64, 8)]),
                    addr,
                )]
            }

            // -- i32 arithmetic --
            Operator::I32Add => self.binop(IrOp::IntAdd, 4, addr),
            Operator::I32Sub => self.binop(IrOp::IntSub, 4, addr),
            Operator::I32Mul => self.binop(IrOp::IntMult, 4, addr),
            Operator::I32And => self.binop(IrOp::IntAnd, 4, addr),
            Operator::I32Or => self.binop(IrOp::IntOr, 4, addr),
            Operator::I32Xor => self.binop(IrOp::IntXor, 4, addr),

            // -- i64 arithmetic --
            Operator::I64Add => self.binop(IrOp::IntAdd, 8, addr),
            Operator::I64Sub => self.binop(IrOp::IntSub, 8, addr),
            Operator::I64Mul => self.binop(IrOp::IntMult, 8, addr),
            Operator::I64And => self.binop(IrOp::IntAnd, 8, addr),
            Operator::I64Or => self.binop(IrOp::IntOr, 8, addr),
            Operator::I64Xor => self.binop(IrOp::IntXor, 8, addr),

            // -- Loads --
            Operator::I32Load { memarg } => {
                let addr_vn = tmp(0, 4);
                let offset_vn = const_vn(memarg.offset, 4);
                let ea = tmp(1, 4);
                let dest = tmp(2, 4);
                vec![
                    IrInsn::with_output(
                        IrOp::IntAdd,
                        ea,
                        SmallVec::from_slice(&[addr_vn, offset_vn]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Load,
                        dest,
                        SmallVec::from_slice(&[const_vn(0, 4), ea]),
                        addr,
                    ),
                ]
            }
            Operator::I64Load { memarg } => {
                let addr_vn = tmp(0, 8);
                let offset_vn = const_vn(memarg.offset, 8);
                let ea = tmp(1, 8);
                let dest = tmp(2, 8);
                vec![
                    IrInsn::with_output(
                        IrOp::IntAdd,
                        ea,
                        SmallVec::from_slice(&[addr_vn, offset_vn]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Load,
                        dest,
                        SmallVec::from_slice(&[const_vn(0, 8), ea]),
                        addr,
                    ),
                ]
            }

            // -- Stores --
            Operator::I32Store { memarg } => {
                let val = tmp(0, 4);
                let base = tmp(1, 4);
                let offset_vn = const_vn(memarg.offset, 4);
                let ea = tmp(2, 4);
                vec![
                    IrInsn::with_output(
                        IrOp::IntAdd,
                        ea,
                        SmallVec::from_slice(&[base, offset_vn]),
                        addr,
                    ),
                    IrInsn::without_output(
                        IrOp::Store,
                        SmallVec::from_slice(&[const_vn(0, 4), ea, val]),
                        addr,
                    ),
                ]
            }
            Operator::I64Store { memarg } => {
                let val = tmp(0, 8);
                let base = tmp(1, 8);
                let offset_vn = const_vn(memarg.offset, 8);
                let ea = tmp(2, 8);
                vec![
                    IrInsn::with_output(
                        IrOp::IntAdd,
                        ea,
                        SmallVec::from_slice(&[base, offset_vn]),
                        addr,
                    ),
                    IrInsn::without_output(
                        IrOp::Store,
                        SmallVec::from_slice(&[const_vn(0, 8), ea, val]),
                        addr,
                    ),
                ]
            }

            // -- Locals --
            Operator::LocalGet { local_index } => {
                let src = local_reg(*local_index, 8);
                let dest = tmp(0, 8);
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    dest,
                    SmallVec::from_slice(&[src]),
                    addr,
                )]
            }
            Operator::LocalSet { local_index } => {
                let dest = local_reg(*local_index, 8);
                let src = tmp(0, 8);
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    dest,
                    SmallVec::from_slice(&[src]),
                    addr,
                )]
            }

            // -- Control flow --
            Operator::Call { function_index } => {
                let target = ram_target(*function_index as u64);
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[target]),
                    addr,
                )]
            }
            Operator::Return => {
                vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::new(),
                    addr,
                )]
            }

            // -- Structured control flow → branches --
            Operator::Block { .. } => {
                // Block is a label target; emit a no-op branch marker to self
                // (downstream passes will use block structure for CFG recovery)
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[ram_target(addr)]),
                    addr,
                )]
            }
            Operator::Loop { .. } => {
                // Loop header — branch target for back-edges
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[ram_target(addr)]),
                    addr,
                )]
            }
            Operator::Br { relative_depth } => {
                let target = ram_target(*relative_depth as u64);
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[target]),
                    addr,
                )]
            }
            Operator::BrIf { relative_depth } => {
                let cond = tmp(0, 4);
                let target = ram_target(*relative_depth as u64);
                vec![IrInsn::without_output(
                    IrOp::Cbranch,
                    SmallVec::from_slice(&[target, cond]),
                    addr,
                )]
            }

            // -- Fallback --
            other => {
                trace!(?other, "unimplemented wasm operator");
                vec![IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                )]
            }
        };

        Ok(LiftedInsn { ir_ops: ops, len })
    }

    /// Emit a binary op: result = op(lhs, rhs).
    fn binop(&self, op: IrOp, size: u8, addr: u64) -> Vec<IrInsn> {
        let lhs = tmp(0, size);
        let rhs = tmp(1, size);
        let dest = tmp(2, size);
        vec![IrInsn::with_output(
            op,
            dest,
            SmallVec::from_slice(&[lhs, rhs]),
            addr,
        )]
    }
}

impl Default for WasmLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for WasmLifter {
    fn arch(&self) -> ArchId {
        ArchId::Wasm
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }

        let mut reader = BinaryReader::new(bytes, addr as usize);

        let op = reader
            .read_operator()
            .map_err(|e| LiftError::Decode(e.to_string()))?;

        // Length = number of bytes consumed from our slice
        let len = reader.original_position() - addr as usize;

        self.lift_operator(&op, addr, len)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::SpaceId;

    fn lifter() -> WasmLifter {
        WasmLifter::with_locals(8)
    }

    /// Encode an i32.const with a given value (LEB128).
    fn encode_i32_const(val: i32) -> Vec<u8> {
        let mut buf = vec![0x41]; // i32.const opcode
        leb128_encode_i32(&mut buf, val);
        buf
    }

    /// Encode an i64.const with a given value (LEB128).
    fn encode_i64_const(val: i64) -> Vec<u8> {
        let mut buf = vec![0x42]; // i64.const opcode
        leb128_encode_i64(&mut buf, val);
        buf
    }

    fn leb128_encode_i32(buf: &mut Vec<u8>, mut val: i32) {
        loop {
            let byte = (val & 0x7f) as u8;
            val >>= 7;
            if (val == 0 && byte & 0x40 == 0) || (val == -1 && byte & 0x40 != 0) {
                buf.push(byte);
                break;
            }
            buf.push(byte | 0x80);
        }
    }

    fn leb128_encode_i64(buf: &mut Vec<u8>, mut val: i64) {
        loop {
            let byte = (val & 0x7f) as u8;
            val >>= 7;
            if (val == 0 && byte & 0x40 == 0) || (val == -1 && byte & 0x40 != 0) {
                buf.push(byte);
                break;
            }
            buf.push(byte | 0x80);
        }
    }

    // -----------------------------------------------------------------------
    // Test 1: Constants
    // -----------------------------------------------------------------------

    #[test]
    fn test_constants() {
        let l = lifter();

        // i32.const 42
        let bytes = encode_i32_const(42);
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 4);
        assert_eq!(result.ir_ops[0].inputs[0], const_vn(42, 4));

        // i64.const -1
        let bytes = encode_i64_const(-1);
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 8);
        assert_eq!(
            result.ir_ops[0].inputs[0],
            const_vn((-1i64) as u64, 8)
        );
    }

    // -----------------------------------------------------------------------
    // Test 2: Arithmetic
    // -----------------------------------------------------------------------

    #[test]
    fn test_arithmetic() {
        let l = lifter();

        // i32.add = 0x6A
        let result = l.lift_insn(&[0x6A], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 4);
        assert_eq!(result.len, 1);

        // i32.sub = 0x6B
        let result = l.lift_insn(&[0x6B], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);

        // i32.mul = 0x6C
        let result = l.lift_insn(&[0x6C], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntMult);

        // i32.and = 0x71
        let result = l.lift_insn(&[0x71], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAnd);

        // i32.or = 0x72
        let result = l.lift_insn(&[0x72], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntOr);

        // i32.xor = 0x73
        let result = l.lift_insn(&[0x73], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntXor);

        // i64.add = 0x7C
        let result = l.lift_insn(&[0x7C], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 8);

        // i64.sub = 0x7D
        let result = l.lift_insn(&[0x7D], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 8);

        // i64.mul = 0x7E
        let result = l.lift_insn(&[0x7E], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntMult);
        assert_eq!(result.ir_ops[0].output.unwrap().size, 8);
    }

    // -----------------------------------------------------------------------
    // Test 3: Memory (load/store)
    // -----------------------------------------------------------------------

    #[test]
    fn test_memory() {
        let l = lifter();

        // i32.load: 0x28, align=2, offset=8
        // Encoding: 0x28 <align:u32> <offset:u32> (LEB128)
        let bytes = vec![0x28, 0x02, 0x08]; // align=2, offset=8
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops.len(), 2);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd); // EA calculation
        assert_eq!(result.ir_ops[1].op, IrOp::Load);
        // offset constant = 8
        assert_eq!(result.ir_ops[0].inputs[1], const_vn(8, 4));

        // i32.store: 0x36, align=2, offset=0
        let bytes = vec![0x36, 0x02, 0x00]; // align=2, offset=0
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops.len(), 2);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Store);
    }

    // -----------------------------------------------------------------------
    // Test 4: Locals (get/set)
    // -----------------------------------------------------------------------

    #[test]
    fn test_locals() {
        let l = lifter();

        // local.get 3: opcode 0x20, index 3 (LEB128)
        let bytes = vec![0x20, 0x03];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        // Source is local 3 → register offset 3*8=24
        let src = result.ir_ops[0].inputs[0];
        assert_eq!(src.space, SpaceId::Register);
        assert_eq!(src.offset, 24);

        // local.set 5: opcode 0x21, index 5
        let bytes = vec![0x21, 0x05];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        // Dest is local 5 → register offset 5*8=40
        let dest = result.ir_ops[0].output.unwrap();
        assert_eq!(dest.space, SpaceId::Register);
        assert_eq!(dest.offset, 40);
    }

    // -----------------------------------------------------------------------
    // Test 5: Calls
    // -----------------------------------------------------------------------

    #[test]
    fn test_calls() {
        let l = lifter();

        // call 7: opcode 0x10, func_index=7 (LEB128)
        let bytes = vec![0x10, 0x07];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Call);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(7));
        assert!(result.ir_ops[0].output.is_none());

        // return: opcode 0x0F
        let bytes = vec![0x0F];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Return);
        assert!(result.ir_ops[0].output.is_none());
    }

    // -----------------------------------------------------------------------
    // Test 6: Branches (block/loop/br/br_if)
    // -----------------------------------------------------------------------

    #[test]
    fn test_branches() {
        let l = lifter();

        // block (void): opcode 0x02, blocktype 0x40 (empty)
        let bytes = vec![0x02, 0x40];
        let result = l.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x100));

        // loop (void): opcode 0x03, blocktype 0x40
        let bytes = vec![0x03, 0x40];
        let result = l.lift_insn(&bytes, 0x200).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x200));

        // br 2: opcode 0x0C, relative_depth=2
        let bytes = vec![0x0C, 0x02];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(2));

        // br_if 1: opcode 0x0D, relative_depth=1
        let bytes = vec![0x0D, 0x01];
        let result = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Cbranch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(1));
        // condition operand
        assert_eq!(result.ir_ops[0].inputs[1], tmp(0, 4));
    }
}
