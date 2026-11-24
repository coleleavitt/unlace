//! (kuna `dynalloca`) A stack pointer moved down by a run-time amount is
//! `alloca(n)`.
//!
//! A variable-length array or an `alloca` compiles to `sub rsp, n` (or `sub sp,
//! sp, xN`) with `n` computed at run time, and kuna printed the result as stack
//! pointer arithmetic, `use(&(&Stack[-8])[-((long)a0 + 0xf & ~0xf)], ...)`.
//! Hex-Rays prints `alloca(n)`. This rule turns the `PTRADD(stack pointer,
//! -n, 1)` the stack pointer's new value is typed as into `alloca(n)` once
//! types are in, when `n` is not a constant and the result is written back
//! to the stack-pointer register (an indexed pointer into the frame is not a
//! stack move).

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::userop::BUILTIN_ALLOCA;

/// `n` when `v` is `-n` with `n` not a constant.
fn negated_amount(data: &Funcdata, v: VarnodeId) -> Option<VarnodeId> {
    let d = data.obank().get(data.vbank().get(v)?.get_def()?)?;
    let n = match d.code() {
        OpCode::CPUI_INT_2COMP => d.get_in(0)?,
        OpCode::CPUI_INT_MULT => {
            let (a, b) = (d.get_in(0)?, d.get_in(1)?);
            let minus_one = |x: VarnodeId| {
                data.vbank().get(x).is_some_and(|c| {
                    let m = if c.get_size() >= 8 {
                        u64::MAX
                    } else {
                        (1u64 << (8 * c.get_size())) - 1
                    };
                    c.is_constant() && c.get_offset() & m == m
                })
            };
            if minus_one(b) {
                a
            } else if minus_one(a) {
                b
            } else {
                return None;
            }
        }
        _ => return None,
    };
    (!data.vbank().get(n)?.is_constant()).then_some(n)
}

/// The stack-pointer storage `v` is based on (its spacebase input, or a
/// `PTRSUB` off it), or `None`.
fn stack_pointer(data: &Funcdata, v: VarnodeId) -> Option<unlace_base::address::Address> {
    let n = data.vbank().get(v)?;
    if n.is_spacebase() {
        return Some(n.get_addr().clone());
    }
    let d = data.obank().get(n.get_def()?)?;
    let b = data.vbank().get(d.get_in(0)?)?;
    (d.code() == OpCode::CPUI_PTRSUB && b.is_spacebase()).then(|| b.get_addr().clone())
}

/// Rewrite `PTRADD(sp, -n, 1)` with a run-time `n` into `alloca(n)`.
pub struct RuleDynAlloca {
    group: String,
}

impl RuleDynAlloca {
    pub fn new(group: &str) -> Self {
        Self {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleDynAlloca {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_PTRADD]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(Self::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data
            .get_arch()
            .kuna_options
            .get::<crate::kuna_dynalloca::DynAlloca>()
            .0
        {
            return 0;
        }
        let Some(o) = data.obank().get(op) else {
            return 0;
        };
        let (Some(base), Some(off), Some(scale)) = (o.get_in(0), o.get_in(1), o.get_in(2)) else {
            return 0;
        };
        if data
            .vbank()
            .get(scale)
            .is_none_or(|s| !s.is_constant() || s.get_offset() != 1)
        {
            return 0;
        }
        // Only a move OF the stack pointer: the result is written back to the
        // stack-pointer register itself.
        let Some(sp) = stack_pointer(data, base) else {
            return 0;
        };
        if o.get_out()
            .and_then(|v| data.vbank().get(v))
            .is_none_or(|v| *v.get_addr() != sp)
        {
            return 0;
        }
        let Some(n) = negated_amount(data, off) else {
            return 0;
        };
        let id = data.new_constant(4, BUILTIN_ALLOCA as uintb);
        if data.op_set_all_input(op, &[id, n]).is_err() {
            return 0;
        }
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
        1
    }
}

crate::kuna_flag!(
    /// (kuna `dynalloca`) A run-time stack move prints as `alloca(n)`.
    DynAlloca,
    "dynalloca",
    "Run-time stack moves as alloca",
    unset: false,
    shipped: false
);
