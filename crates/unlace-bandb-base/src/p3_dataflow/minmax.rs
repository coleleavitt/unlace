//! (unlace `minmax`) Branch-free min and max written as arithmetic become
//! `min(a, b)` and `max(a, b)`.
//!
//! A compiler lowers `a < b ? a : b` without a branch to the sign of the
//! difference `d = a - b`. `s = d >> (W - 1)` is arithmetic, all ones when `d`
//! is negative and zero otherwise, so:
//!
//! * `min(a, b) = b + (d & s)`, an `INT_ADD` of `b` and `d & s`;
//! * `max(a, b) = a - (d & s)`, an `INT_SUB` of `a` and `d & s`.
//!
//! The rule rewrites that op in place into `CALLOTHER(BUILTIN_MIN, a, b)` or
//! `CALLOTHER(BUILTIN_MAX, a, b)`, so every reader of its output keeps its
//! value. The sign of `d` decides the choice, which equals the signed min or max
//! only when `a - b` does not overflow; the rule is therefore behind `option
//! minmax`, off by default.

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::userop::{BUILTIN_MAX, BUILTIN_MIN};

crate::unlace_flag!(
    /// (unlace `minmax`) Fold a branch-free min or max written as arithmetic on
    /// the sign of a difference into `min(a, b)` / `max(a, b)` (see [`crate::minmax`]).
    MinMax,
    "minmax",
    "Branch-free min and max",
    unset: false,
    shipped: false
);

/// `(l, r)` when `vn` is defined by a two-input `code` op.
fn def_binary(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
    let def = data.vbank().get(vn)?.get_def()?;
    let o = data.obank().get(def)?;
    if o.code() != code || o.num_input() != 2 {
        return None;
    }
    Some((o.get_in(0)?, o.get_in(1)?))
}

/// Is `s` the sign of `d` smeared over the word, `INT_SRIGHT(d, W - 1)`?
fn is_sign_smear(data: &Funcdata, s: VarnodeId, d: VarnodeId) -> bool {
    let Some((src, amount)) = def_binary(data, s, OpCode::CPUI_INT_SRIGHT) else {
        return false;
    };
    let Some(size) = data.vbank().get(d).map(|v| v.get_size()) else {
        return false;
    };
    src == d
        && size > 0
        && data
            .vbank()
            .get(amount)
            .is_some_and(|c| c.is_constant() && c.get_offset() == 8 * size as u64 - 1)
}

/// `(a, b)` when `and` is `d & s` for `d = a - b` and `s` the sign of `d`.
fn masked_difference(data: &Funcdata, and: VarnodeId) -> Option<(VarnodeId, VarnodeId)> {
    let (l, r) = def_binary(data, and, OpCode::CPUI_INT_AND)?;
    [(l, r), (r, l)].into_iter().find_map(|(d, s)| {
        let (a, b) = def_binary(data, d, OpCode::CPUI_INT_SUB)?;
        is_sign_smear(data, s, d).then_some((a, b))
    })
}

/// The builtin id and `(a, b)` operands when `op` is the min or max arithmetic.
fn minmax_call(data: &Funcdata, op: OpId) -> Option<(uintb, (VarnodeId, VarnodeId))> {
    let o = data.obank().get(op)?;
    let (lhs, rhs) = (o.get_in(0)?, o.get_in(1)?);
    match o.code() {
        OpCode::CPUI_INT_ADD => [(lhs, rhs), (rhs, lhs)].into_iter().find_map(|(b, and)| {
            let (a, sub) = masked_difference(data, and)?;
            (sub == b).then_some((BUILTIN_MIN as uintb, (a, b)))
        }),
        OpCode::CPUI_INT_SUB => {
            let (a, b) = masked_difference(data, rhs)?;
            (a == lhs).then_some((BUILTIN_MAX as uintb, (a, b)))
        }
        _ => None,
    }
}

/// `INT_ADD` and `INT_SUB` of a sign-selected difference become `min` / `max`.
pub struct RuleMinMax {
    group: String,
}

impl RuleMinMax {
    pub fn new(group: &str) -> RuleMinMax {
        RuleMinMax {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleMinMax {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ADD, OpCode::CPUI_INT_SUB]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleMinMax::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<MinMax>().0 {
            return 0;
        }
        let Some((builtin, (a, b))) = minmax_call(data, op) else {
            return 0;
        };
        let id = data.new_constant(4, builtin);
        if data.op_set_all_input(op, &[id, a, b]).is_err() {
            return 0;
        }
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
        1
    }
}
