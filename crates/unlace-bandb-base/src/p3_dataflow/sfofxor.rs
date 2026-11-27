//! x86 `SF != OF` signed-less idiom (unlace#1271, option `sfofxor`).
//!
//! The x86 `jl` and `jge` conditions read `SF xor OF` after a `cmp a, b`. The lifter defines
//! `SF = (a - b) s< 0` (`INT_SLESS(INT_SUB(a, b), 0)`) and `OF` as `INT_SBORROW(a, b)`. Their XOR is
//! `a s< b`, so under `sfofxor` (default off) [`RuleSfOfXor`] folds the one-byte XOR of those two
//! flags to `INT_SLESS(a, b)`. The match is strictly structural: the sign flag and the borrow must
//! read the same two operands in the same order. The XOR of `INT_SLESS(a, b)` with
//! `INT_SBORROW(a, b)` is the sign flag, not `a s< b`, so that pair is left alone.

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, TypeOp, VarnodeId};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `sfofxor`) Fold the x86 `SF != OF` signed-less idiom to `INT_SLESS`.
    SfOfXor,
    "sfofxor",
    "fold the SF xor OF signed-less idiom to INT_SLESS",
    unset: false,
    shipped: false
);

/// Fold `INT_XOR(SF, OF)` (or the BOOL_XOR form) to `INT_SLESS(a, b)`, where `SF` is
/// `INT_SLESS(INT_SUB(a, b), 0)` and `OF` is `INT_SBORROW(a, b)`.
pub struct RuleSfOfXor {
    group: String,
}

impl RuleSfOfXor {
    pub fn new(group: &str) -> RuleSfOfXor {
        RuleSfOfXor {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleSfOfXor {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_XOR, OpCode::CPUI_BOOL_XOR]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleSfOfXor::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<SfOfXor>().0 {
            return 0;
        }
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            return 0;
        };
        if vn_size(data, out) != 1 {
            return 0;
        }
        let (Some(x), Some(y)) = (op_in(data, op, 0), op_in(data, op, 1)) else {
            return 0;
        };
        let folded = [(x, y), (y, x)].into_iter().find_map(|(sign, borrow)| {
            let (a, b) = sign_of_difference(data, sign)?;
            (operands(data, borrow, OpCode::CPUI_INT_SBORROW)? == (a, b)).then_some((a, b))
        });
        let Some((a, b)) = folded else {
            return 0;
        };
        data.op_set_opcode(op, TypeOp::new(OpCode::CPUI_INT_SLESS, 0, "INT_SLESS"));
        data.op_set_input(op, a, 0)
            .expect("RuleSfOfXor: opSetInput a (internal invariant)");
        data.op_set_input(op, b, 1)
            .expect("RuleSfOfXor: opSetInput b (internal invariant)");
        1
    }
}

/// `(a, b)` when `vn` is `INT_SLESS(INT_SUB(a, b), 0)`, the x86 sign flag after `a - b`.
fn sign_of_difference(data: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, VarnodeId)> {
    let (diff, zero) = operands(data, vn, OpCode::CPUI_INT_SLESS)?;
    let zv = data.vbank().get(zero)?;
    if !zv.is_constant() || zv.get_offset() != 0 {
        return None;
    }
    operands(data, diff, OpCode::CPUI_INT_SUB)
}

/// The two inputs of `vn`'s defining op when that op has `code`.
fn operands(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
    let def = data.vbank().get(vn)?.get_def()?;
    let o = data.obank().get(def)?;
    if o.code() != code {
        return None;
    }
    Some((o.get_in(0)?, o.get_in(1)?))
}

fn op_in(data: &Funcdata, op: OpId, slot: int4) -> Option<VarnodeId> {
    data.obank().get(op).and_then(|o| o.get_in(slot))
}

#[cfg(test)]
#[path = "sfofxor/tests.rs"]
mod tests;
fn vn_size(data: &Funcdata, vn: VarnodeId) -> int4 {
    data.vbank().get(vn).map(|v| v.get_size()).unwrap_or(0)
}
