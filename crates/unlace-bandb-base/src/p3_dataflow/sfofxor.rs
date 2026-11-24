//! x86 `SF != OF` signed-less idiom (unlace#1271, option `sfofxor`).
//!
//! The x86 `jl` and `jge` conditions read `SF xor OF` after a `cmp`. The lifter models the
//! flags over the compared operands `a` and `b`: `INT_SLESS(a, b)` for one and `INT_SBORROW(a, b)`
//! for the other. Their XOR is the signed `a < b` predicate for the sign flag as the ISA defines it
//! (the sign of `a - b`), so under `sfofxor` (default off) [`RuleSfOfXor`] folds the one-byte XOR
//! to `INT_SLESS(a, b)`. The lifter's own flag definitions must be checked before the option is
//! trusted. The match is strictly structural: both inputs are direct definitions of the same two
//! operands in the same order, and anything else is left alone.

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

/// Fold `INT_XOR(INT_SLESS(a, b), INT_SBORROW(a, b))` (or the BOOL_XOR form) to `INT_SLESS(a, b)`.
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
        let (Some(dx), Some(dy)) = (vn_def(data, x), vn_def(data, y)) else {
            return 0;
        };
        let (sless, sborrow) = match (op_code(data, dx), op_code(data, dy)) {
            (Some(OpCode::CPUI_INT_SLESS), Some(OpCode::CPUI_INT_SBORROW)) => (dx, dy),
            (Some(OpCode::CPUI_INT_SBORROW), Some(OpCode::CPUI_INT_SLESS)) => (dy, dx),
            _ => return 0,
        };
        let (Some(a), Some(b)) = (op_in(data, sless, 0), op_in(data, sless, 1)) else {
            return 0;
        };
        if (op_in(data, sborrow, 0), op_in(data, sborrow, 1)) != (Some(a), Some(b)) {
            return 0;
        }
        data.op_set_opcode(op, TypeOp::new(OpCode::CPUI_INT_SLESS, 0, "INT_SLESS"));
        data.op_set_input(op, a, 0)
            .expect("RuleSfOfXor: opSetInput a (internal invariant)");
        data.op_set_input(op, b, 1)
            .expect("RuleSfOfXor: opSetInput b (internal invariant)");
        1
    }
}

fn op_in(data: &Funcdata, op: OpId, slot: int4) -> Option<VarnodeId> {
    data.obank().get(op).and_then(|o| o.get_in(slot))
}
fn op_code(data: &Funcdata, op: OpId) -> Option<OpCode> {
    data.obank().get(op).map(|o| o.code())
}
fn vn_def(data: &Funcdata, vn: VarnodeId) -> Option<OpId> {
    data.vbank().get(vn).and_then(|v| v.get_def())
}
fn vn_size(data: &Funcdata, vn: VarnodeId) -> int4 {
    data.vbank().get(vn).map(|v| v.get_size()).unwrap_or(0)
}
