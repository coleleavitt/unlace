//! Lua bytecode → unlace IR lifter.
//!
//! Lua is a register machine: each function prototype owns a flat register
//! file (`R(0)..R(maxstacksize)`) plus a constant pool, an upvalue list, and
//! nested prototypes. This module walks a parsed [`Chunk`] and lowers every
//! prototype into a flat [`IrInsn`] sequence.
//!
//! Mapping conventions:
//! - Lua register `R(n)` → `Varnode::reg(n, 8)` (Lua values are tagged 8-byte
//!   cells; we model them as opaque 8-byte scalars).
//! - Numeric / boolean constants become `Const`-space varnodes carrying the
//!   value. String and `nil` constants are represented by their pool index in
//!   a `Const` varnode (a disassembler-grade approximation — the IR has no
//!   string space).
//! - Operations with no scalar IR equivalent (table indexing, closures,
//!   concat, varargs, metamethod dispatch) are lowered to `Callother`.
//! - Branch targets are program-counter indices encoded as `Const` varnodes;
//!   `addr` on each `IrInsn` is the pc it was lifted from.

use smallvec::{smallvec, SmallVec};
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::chunk::{Chunk, ParseError, Prototype};
use crate::decode::DecodedInsn;
use crate::opcodes::LuaOpcode;
use crate::stdlib::{detect_stdlib_calls, StdlibAnnotation};

/// A single Lua function prototype lowered to IR.
#[derive(Debug, Clone)]
pub struct LiftedFunction {
    /// Synthetic name: `lua_main` for the chunk entry, `lua_proto_<n>` for
    /// nested prototypes (DFS order), or the debug source name when present.
    pub name: String,
    /// Declared fixed parameter count.
    pub num_params: u8,
    /// Whether the prototype accepts a variable argument list.
    pub is_vararg: bool,
    /// DFS index of this prototype within the chunk (`0` == main).
    pub proto_index: usize,
    /// Lifted IR instructions, one-or-more per source bytecode instruction.
    pub ir: Vec<IrInsn>,
    /// Recognised Lua standard-library calls within this prototype.
    pub stdlib_calls: Vec<StdlibAnnotation>,
}

/// Errors raised while lifting Lua bytecode.
#[derive(Debug, thiserror::Error)]
pub enum LuaLiftError {
    /// The chunk could not be parsed.
    #[error("lua bytecode parse failed: {0}")]
    Parse(#[from] ParseError),
}

/// Lift every prototype in a parsed chunk into IR, main function first,
/// followed by nested prototypes in depth-first order.
pub fn lift_chunk(chunk: &Chunk) -> Result<Vec<LiftedFunction>, LuaLiftError> {
    let mut out = Vec::new();
    let mut counter = 0usize;
    lift_proto_recursive(&chunk.main_proto, &mut counter, true, &mut out);
    Ok(out)
}

fn lift_proto_recursive(
    proto: &Prototype,
    counter: &mut usize,
    is_main: bool,
    out: &mut Vec<LiftedFunction>,
) {
    let proto_index = *counter;
    *counter += 1;

    let name = if is_main {
        "lua_main".to_string()
    } else if let Some(src) = &proto.source_name {
        if src.is_empty() {
            format!("lua_proto_{proto_index}")
        } else {
            format!("lua_proto_{proto_index}_{}", sanitize(src))
        }
    } else {
        format!("lua_proto_{proto_index}")
    };

    out.push(LiftedFunction {
        name,
        num_params: proto.num_params,
        is_vararg: proto.is_vararg,
        proto_index,
        ir: lift_prototype(proto),
        stdlib_calls: detect_stdlib_calls(proto),
    });

    for child in &proto.protos {
        lift_proto_recursive(child, counter, false, out);
    }
}

/// Lower a single prototype's instruction list into IR.
fn lift_prototype(proto: &Prototype) -> Vec<IrInsn> {
    let mut ctx = LiftCtx::default();
    for (pc, insn) in proto.instructions.iter().enumerate() {
        ctx.lift_insn(pc as u64, insn, proto);
    }
    ctx.ir
}

#[derive(Default)]
struct LiftCtx {
    ir: Vec<IrInsn>,
    unique_counter: u64,
}

impl LiftCtx {
    fn alloc_temp(&mut self) -> Varnode {
        let vn = Varnode::unique(self.unique_counter, 8);
        self.unique_counter += 8;
        vn
    }

    fn push(&mut self, insn: IrInsn) {
        self.ir.push(insn);
    }

    /// Lower one decoded Lua instruction at program counter `pc`. Dispatches to
    /// a category handler; each handler returns `true` once it has emitted IR.
    fn lift_insn(&mut self, pc: u64, insn: &DecodedInsn, proto: &Prototype) {
        let handled = self.lift_loads(pc, insn, proto)
            || self.lift_arith(pc, insn, proto)
            || self.lift_table_ops(pc, insn)
            || self.lift_compare(pc, insn)
            || self.lift_control_flow(pc, insn)
            || self.lift_misc(pc, insn);
        if !handled {
            self.push(IrInsn::without_output(IrOp::Unimplemented, SmallVec::new(), pc));
        }
    }

    /// MOVE and the LOAD* family.
    fn lift_loads(&mut self, pc: u64, insn: &DecodedInsn, proto: &Prototype) -> bool {
        let a = reg(insn.a);
        match insn.opcode {
            LuaOpcode::Move => {
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![reg(insn.b)], pc));
            }
            LuaOpcode::LoadK => {
                let src = const_from_pool(proto, insn.bx as usize);
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![src], pc));
            }
            LuaOpcode::LoadKx => {
                // LOADKX is followed by an EXTRAARG carrying the real index;
                // without fusing it we emit an opaque load.
                self.push(IrInsn::with_output(IrOp::Callother, a, SmallVec::new(), pc));
            }
            LuaOpcode::LoadI => {
                let v = insn.sbx as i64 as u64;
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![Varnode::constant(v, 8)], pc));
            }
            LuaOpcode::LoadF => {
                let v = (insn.sbx as f64).to_bits();
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![Varnode::constant(v, 8)], pc));
            }
            LuaOpcode::LoadBool => {
                let v = u64::from(insn.b != 0);
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![Varnode::constant(v, 8)], pc));
            }
            LuaOpcode::LoadTrue => {
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![Varnode::constant(1, 8)], pc));
            }
            LuaOpcode::LoadFalse | LuaOpcode::LFalseSkip => {
                self.push(IrInsn::with_output(IrOp::Copy, a, smallvec![Varnode::constant(0, 8)], pc));
            }
            LuaOpcode::LoadNil => {
                // LOADNIL R(A)..R(A+B) := nil
                for i in 0..=insn.b {
                    let dst = reg(insn.a.wrapping_add(i));
                    self.push(IrInsn::with_output(
                        IrOp::Copy,
                        dst,
                        smallvec![Varnode::constant(0, 8)],
                        pc,
                    ));
                }
            }
            _ => return false,
        }
        true
    }

    /// Register/register, register/constant and unary arithmetic.
    fn lift_arith(&mut self, pc: u64, insn: &DecodedInsn, proto: &Prototype) -> bool {
        let a = reg(insn.a);
        if let Some(op) = rr_binop(insn.opcode) {
            self.push(IrInsn::with_output(op, a, smallvec![reg(insn.b), reg(insn.c)], pc));
            return true;
        }
        match insn.opcode {
            LuaOpcode::AddI | LuaOpcode::ShrI | LuaOpcode::ShlI => {
                let op = match insn.opcode {
                    LuaOpcode::AddI => IrOp::IntAdd,
                    LuaOpcode::ShrI => IrOp::IntSright,
                    _ => IrOp::IntLeft,
                };
                let imm = Varnode::constant(insn.sc_as_imm(), 8);
                self.push(IrInsn::with_output(op, a, smallvec![reg(insn.b), imm], pc));
            }
            LuaOpcode::AddK
            | LuaOpcode::SubK
            | LuaOpcode::MulK
            | LuaOpcode::ModK
            | LuaOpcode::PowK
            | LuaOpcode::DivK
            | LuaOpcode::IDivK
            | LuaOpcode::BAndK
            | LuaOpcode::BOrK
            | LuaOpcode::BXorK => {
                let op = match insn.opcode {
                    LuaOpcode::AddK => IrOp::IntAdd,
                    LuaOpcode::SubK => IrOp::IntSub,
                    LuaOpcode::MulK => IrOp::IntMult,
                    LuaOpcode::ModK => IrOp::IntSrem,
                    LuaOpcode::DivK => IrOp::FloatDiv,
                    LuaOpcode::IDivK => IrOp::IntSdiv,
                    LuaOpcode::BAndK => IrOp::IntAnd,
                    LuaOpcode::BOrK => IrOp::IntOr,
                    LuaOpcode::BXorK => IrOp::IntXor,
                    _ => IrOp::Callother, // PowK
                };
                let k = const_from_pool(proto, insn.c as usize);
                self.push(IrInsn::with_output(op, a, smallvec![reg(insn.b), k], pc));
            }
            LuaOpcode::Unm => {
                self.push(IrInsn::with_output(IrOp::IntNegate, a, smallvec![reg(insn.b)], pc));
            }
            LuaOpcode::BNot => {
                self.push(IrInsn::with_output(IrOp::Int2comp, a, smallvec![reg(insn.b)], pc));
            }
            LuaOpcode::Not => {
                self.push(IrInsn::with_output(IrOp::BoolNegate, a, smallvec![reg(insn.b)], pc));
            }
            LuaOpcode::Len => {
                self.push(IrInsn::with_output(IrOp::Callother, a, smallvec![reg(insn.b)], pc));
            }
            LuaOpcode::MmBin | LuaOpcode::MmBinI | LuaOpcode::MmBinK => {
                // Metamethod binop resolves into R(A) — model as opaque.
                self.push(IrInsn::with_output(
                    IrOp::Callother,
                    a,
                    smallvec![reg(insn.b), reg(insn.c)],
                    pc,
                ));
            }
            LuaOpcode::Concat => {
                self.push(IrInsn::with_output(
                    IrOp::Callother,
                    a,
                    smallvec![reg(insn.b), reg(insn.c)],
                    pc,
                ));
            }
            _ => return false,
        }
        true
    }

    /// Table, upvalue, global and closure access — no scalar IR equivalent.
    fn lift_table_ops(&mut self, pc: u64, insn: &DecodedInsn) -> bool {
        let a = reg(insn.a);
        match insn.opcode {
            LuaOpcode::NewTable | LuaOpcode::Closure => {
                self.push(IrInsn::with_output(IrOp::Callother, a, SmallVec::new(), pc));
            }
            LuaOpcode::GetTable
            | LuaOpcode::GetField
            | LuaOpcode::GetI
            | LuaOpcode::GetTabup
            | LuaOpcode::MethodSelf => {
                self.push(IrInsn::with_output(
                    IrOp::Callother,
                    a,
                    smallvec![reg(insn.b), reg(insn.c)],
                    pc,
                ));
            }
            LuaOpcode::SetTable
            | LuaOpcode::SetField
            | LuaOpcode::SetI
            | LuaOpcode::SetTabup
            | LuaOpcode::SetList => {
                self.push(IrInsn::without_output(
                    IrOp::Callother,
                    smallvec![a, reg(insn.b), reg(insn.c)],
                    pc,
                ));
            }
            LuaOpcode::GetUpval | LuaOpcode::GetGlobal => {
                self.push(IrInsn::with_output(IrOp::Callother, a, SmallVec::new(), pc));
            }
            LuaOpcode::SetUpval | LuaOpcode::SetGlobal => {
                self.push(IrInsn::without_output(IrOp::Callother, smallvec![a], pc));
            }
            _ => return false,
        }
        true
    }

    /// Comparison instructions. Lua compares skip the following JMP when the
    /// test disagrees with `k`; we emit the boolean into a temp followed by a
    /// conditional branch over the JMP slot (pc + 2).
    fn lift_compare(&mut self, pc: u64, insn: &DecodedInsn) -> bool {
        match insn.opcode {
            LuaOpcode::Eq | LuaOpcode::EqK | LuaOpcode::EqI => {
                self.compare(pc, IrOp::IntEqual, reg(insn.b), reg(insn.c));
            }
            LuaOpcode::Lt | LuaOpcode::LtI | LuaOpcode::GtI => {
                self.compare(pc, IrOp::IntSless, reg(insn.b), reg(insn.c));
            }
            LuaOpcode::Le | LuaOpcode::LeI | LuaOpcode::GeI => {
                self.compare(pc, IrOp::IntSlessequal, reg(insn.b), reg(insn.c));
            }
            LuaOpcode::Test | LuaOpcode::TestSet => {
                self.push(IrInsn::without_output(
                    IrOp::Cbranch,
                    smallvec![Varnode::constant(pc + 2, 8), reg(insn.a)],
                    pc,
                ));
            }
            _ => return false,
        }
        true
    }

    /// Jumps, loops, calls and returns.
    fn lift_control_flow(&mut self, pc: u64, insn: &DecodedInsn) -> bool {
        match insn.opcode {
            LuaOpcode::Jmp | LuaOpcode::ForPrep | LuaOpcode::TForPrep => {
                let target = jump_target(pc, insn);
                self.push(IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![Varnode::constant(target, 8)],
                    pc,
                ));
            }
            LuaOpcode::ForLoop | LuaOpcode::TForLoop => {
                // Advance the counter, branch back when continuing.
                let target = jump_target(pc, insn);
                let cond = self.alloc_temp();
                self.push(IrInsn::with_output(
                    IrOp::IntSless,
                    cond,
                    smallvec![reg(insn.a), reg(insn.a.wrapping_add(1))],
                    pc,
                ));
                self.push(IrInsn::without_output(
                    IrOp::Cbranch,
                    smallvec![Varnode::constant(target, 8), cond],
                    pc,
                ));
            }
            LuaOpcode::TForCall => {
                // Iterator call: R(A+4..) := R(A)(R(A+1), R(A+2)).
                self.push(IrInsn::without_output(IrOp::Callind, smallvec![reg(insn.a)], pc));
            }
            LuaOpcode::Call => {
                self.push(IrInsn::without_output(IrOp::Callind, smallvec![reg(insn.a)], pc));
            }
            LuaOpcode::TailCall => {
                self.push(IrInsn::without_output(IrOp::Callind, smallvec![reg(insn.a)], pc));
                self.push(IrInsn::without_output(IrOp::Return, SmallVec::new(), pc));
            }
            LuaOpcode::Return | LuaOpcode::Return1 => {
                self.push(IrInsn::without_output(IrOp::Return, smallvec![reg(insn.a)], pc));
            }
            LuaOpcode::Return0 => {
                self.push(IrInsn::without_output(IrOp::Return, SmallVec::new(), pc));
            }
            _ => return false,
        }
        true
    }

    /// Vararg handling and bookkeeping ops with no observable scalar effect.
    fn lift_misc(&mut self, pc: u64, insn: &DecodedInsn) -> bool {
        match insn.opcode {
            LuaOpcode::Vararg => {
                self.push(IrInsn::with_output(IrOp::Callother, reg(insn.a), SmallVec::new(), pc));
            }
            LuaOpcode::VarargPrep
            | LuaOpcode::Close
            | LuaOpcode::Tbc
            | LuaOpcode::ExtraArg => {
                // Keep a placeholder so pc indices stay aligned with source.
                self.push(IrInsn::without_output(IrOp::Callother, SmallVec::new(), pc));
            }
            _ => return false,
        }
        true
    }

    /// Emit a comparison into a temp followed by a conditional branch over the
    /// JMP slot that always follows a Lua compare instruction.
    fn compare(&mut self, pc: u64, op: IrOp, lhs: Varnode, rhs: Varnode) {
        let cond = self.alloc_temp();
        self.push(IrInsn::with_output(op, cond, smallvec![lhs, rhs], pc));
        self.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(pc + 2, 8), cond],
            pc,
        ));
    }
}

/// Map a register/register Lua opcode to its IR binop, if it is one.
fn rr_binop(opcode: LuaOpcode) -> Option<IrOp> {
    Some(match opcode {
        LuaOpcode::Add => IrOp::IntAdd,
        LuaOpcode::Sub => IrOp::IntSub,
        LuaOpcode::Mul => IrOp::IntMult,
        LuaOpcode::Div => IrOp::FloatDiv,
        LuaOpcode::IDiv => IrOp::IntSdiv,
        LuaOpcode::Mod => IrOp::IntSrem,
        LuaOpcode::Pow => IrOp::Callother,
        LuaOpcode::BAnd => IrOp::IntAnd,
        LuaOpcode::BOr => IrOp::IntOr,
        LuaOpcode::BXor => IrOp::IntXor,
        LuaOpcode::Shl => IrOp::IntLeft,
        LuaOpcode::Shr => IrOp::IntSright,
        _ => return None,
    })
}

/// Map a Lua register index to a register-space varnode.
fn reg(index: u16) -> Varnode {
    Varnode::reg(index as u64, 8)
}

/// Resolve a constant-pool entry into a `Const` varnode. Numeric and boolean
/// constants carry their value; strings and `nil` carry the pool index (the IR
/// has no string space — this is a disassembler-grade approximation).
fn const_from_pool(proto: &Prototype, idx: usize) -> Varnode {
    use crate::chunk::Constant;
    match proto.constants.get(idx) {
        Some(Constant::Integer(v)) => Varnode::constant(*v as u64, 8),
        Some(Constant::Float(f)) => Varnode::constant(f.to_bits(), 8),
        Some(Constant::Bool(b)) => Varnode::constant(u64::from(*b), 8),
        Some(Constant::String(_)) | Some(Constant::Nil) | None => {
            Varnode::constant(idx as u64, 8)
        }
    }
}

/// Compute the absolute pc a jump-family instruction targets.
fn jump_target(pc: u64, insn: &DecodedInsn) -> u64 {
    // Lua 5.4 JMP uses the sJ field; everything else uses sBx. Targets are
    // relative to the *next* instruction.
    let offset = if insn.opcode == LuaOpcode::Jmp && insn.sj != 0 {
        insn.sj as i64
    } else {
        insn.sbx as i64
    };
    (pc as i64 + 1 + offset).max(0) as u64
}

/// Sanitise a Lua source name into an identifier-safe suffix.
fn sanitize(s: &str) -> String {
    s.chars()
        .map(|c| if c.is_ascii_alphanumeric() { c } else { '_' })
        .take(32)
        .collect()
}

impl DecodedInsn {
    /// Interpret the C field of a 5.4 immediate-arithmetic instruction as a
    /// signed immediate (`sC` is biased by 128 in the reference VM).
    fn sc_as_imm(&self) -> u64 {
        (self.c as i64 - 128) as u64
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::chunk::{ChunkHeader, Constant, DebugInfo, LuaVersion, Prototype};
    use crate::opcodes::InsnFormat;

    fn insn(opcode: LuaOpcode, a: u16, b: u16, c: u16) -> DecodedInsn {
        DecodedInsn {
            opcode,
            raw: 0,
            a,
            b,
            c,
            k: false,
            bx: 0,
            sbx: 0,
            ax: 0,
            sj: 0,
            format: InsnFormat::ABC,
        }
    }

    fn proto(instructions: Vec<DecodedInsn>, constants: Vec<Constant>) -> Prototype {
        Prototype {
            source_name: None,
            line_defined: 0,
            last_line_defined: 0,
            num_params: 0,
            is_vararg: false,
            max_stack_size: 8,
            instructions,
            constants,
            upvalues: Vec::new(),
            protos: Vec::new(),
            debug: DebugInfo {
                line_info: Vec::new(),
                abs_line_info: Vec::new(),
                locals: Vec::new(),
                upvalue_names: Vec::new(),
            },
        }
    }

    #[test]
    fn move_lifts_to_copy() {
        let p = proto(vec![insn(LuaOpcode::Move, 0, 1, 0)], vec![]);
        let ir = lift_prototype(&p);
        assert_eq!(ir.len(), 1);
        assert_eq!(ir[0].op, IrOp::Copy);
        assert_eq!(ir[0].output, Some(Varnode::reg(0, 8)));
        assert_eq!(ir[0].inputs[0], Varnode::reg(1, 8));
    }

    #[test]
    fn add_lifts_to_int_add() {
        let p = proto(vec![insn(LuaOpcode::Add, 2, 0, 1)], vec![]);
        let ir = lift_prototype(&p);
        assert_eq!(ir[0].op, IrOp::IntAdd);
        assert_eq!(ir[0].output, Some(Varnode::reg(2, 8)));
    }

    #[test]
    fn loadk_resolves_integer_constant() {
        let mut i = insn(LuaOpcode::LoadK, 0, 0, 0);
        i.bx = 0;
        let p = proto(vec![i], vec![Constant::Integer(42)]);
        let ir = lift_prototype(&p);
        assert_eq!(ir[0].op, IrOp::Copy);
        assert_eq!(ir[0].inputs[0], Varnode::constant(42, 8));
    }

    #[test]
    fn compare_emits_temp_and_cbranch() {
        let p = proto(vec![insn(LuaOpcode::Eq, 0, 1, 2)], vec![]);
        let ir = lift_prototype(&p);
        assert_eq!(ir.len(), 2);
        assert_eq!(ir[0].op, IrOp::IntEqual);
        assert_eq!(ir[1].op, IrOp::Cbranch);
        // Cbranch target is the JMP slot (pc + 2).
        assert_eq!(ir[1].inputs[0], Varnode::constant(2, 8));
    }

    #[test]
    fn return_lifts_to_return() {
        let p = proto(vec![insn(LuaOpcode::Return0, 0, 0, 0)], vec![]);
        let ir = lift_prototype(&p);
        assert_eq!(ir[0].op, IrOp::Return);
    }

    #[test]
    fn unknown_opcode_lifts_to_unimplemented() {
        let p = proto(vec![insn(LuaOpcode::Unknown(0xff), 0, 0, 0)], vec![]);
        let ir = lift_prototype(&p);
        assert_eq!(ir[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn chunk_lifts_main_then_nested() {
        let mut main = proto(vec![insn(LuaOpcode::Return0, 0, 0, 0)], vec![]);
        let child = proto(vec![insn(LuaOpcode::Return0, 0, 0, 0)], vec![]);
        main.protos.push(child);
        let chunk = Chunk {
            header: ChunkHeader {
                version: LuaVersion::Lua54,
                format: 0,
                little_endian: true,
                int_size: 4,
                size_t_size: 8,
                instruction_size: 4,
                number_size: 8,
                number_is_integer: false,
            },
            main_proto: main,
        };
        let fns = lift_chunk(&chunk).unwrap();
        assert_eq!(fns.len(), 2);
        assert_eq!(fns[0].name, "lua_main");
        assert_eq!(fns[0].proto_index, 0);
        assert_eq!(fns[1].proto_index, 1);
    }
}
