//! (unlace `floatidentity`) Fold the floating-point identities a compiler leaves
//! behind: `x + -0.0` and `x - +0.0` to `x`, `x * 1.0`, `1.0 * x` and `x / 1.0` to `x`,
//! `(-x) + y` to `y - x`, `x + (-y)` to `x - y` and `x - (-y)` to `x + y`.
//!
//! Ported from the float rules of the original unlace `algebraic_simplify.rs`
//! (`origin/master`), except that the original also folded `x + +0.0`, which turns
//! `-0.0` into `+0.0`; that form is left alone. The constant folds run only where [`super::floatquiet::can_elide`]
//! allows the NaN quieting an arithmetic op performs to be dropped; the negation
//! folds are exact.

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use super::floatquiet::can_elide;
use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `floatidentity`) Fold float zero, one and negation identities
    /// (see [`crate::floatidentity`]).
    FloatIdentity,
    "floatidentity",
    "Float identity folding",
    unset: false,
    shipped: false
);

/// The float constants the identity folds recognise, by encoding.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Konst {
    PosZero,
    NegZero,
    One,
}

fn konst(data: &Funcdata, vn: VarnodeId) -> Option<Konst> {
    let v = data.vbank().get(vn)?;
    if !v.is_constant() {
        return None;
    }
    match (v.get_size(), v.get_offset()) {
        (4, 0) | (8, 0) => Some(Konst::PosZero),
        (4, 0x8000_0000) | (8, 0x8000_0000_0000_0000) => Some(Konst::NegZero),
        (4, 0x3f80_0000) | (8, 0x3ff0_0000_0000_0000) => Some(Konst::One),
        _ => None,
    }
}

/// The operand of a FLOAT_NEG that defines `vn`, if `vn` is a negation.
fn negated(data: &Funcdata, vn: VarnodeId) -> Option<VarnodeId> {
    let def = data.vbank().get(vn)?.get_def()?;
    let neg = data.obank().get(def)?;
    (neg.code() == OpCode::CPUI_FLOAT_NEG)
        .then(|| neg.get_in(0))
        .flatten()
}

/// The opcode and both inputs of a binary op.
fn binary(data: &Funcdata, op: OpId) -> Option<(OpCode, VarnodeId, VarnodeId)> {
    let o = data.obank().get(op)?;
    Some((o.code(), o.get_in(0)?, o.get_in(1)?))
}

/// Turn `op` into a COPY of its input `keep` (slot 0 or 1), dropping the other.
fn become_copy(data: &mut Funcdata, op: OpId, keep: int4) -> int4 {
    data.op_set_opcode(op, crate::typeop::seam_type_op_for(OpCode::CPUI_COPY));
    data.op_remove_input(op, 1 - keep);
    1
}

/// Turn `op` into `code` applied to `in0` and `in1`.
fn become_binary(
    data: &mut Funcdata,
    op: OpId,
    code: OpCode,
    in0: VarnodeId,
    in1: VarnodeId,
) -> int4 {
    data.op_set_input(op, in0, 0)
        .expect("floatidentity: opSetInput in0");
    data.op_set_input(op, in1, 1)
        .expect("floatidentity: opSetInput in1");
    data.op_set_opcode(op, crate::typeop::seam_type_op_for(code));
    1
}

fn fold(data: &mut Funcdata, op: OpId) -> int4 {
    let Some((code, a, b)) = binary(data, op) else {
        return 0;
    };
    let (ka, kb) = (konst(data, a), konst(data, b));
    match code {
        OpCode::CPUI_FLOAT_ADD => {
            if kb == Some(Konst::NegZero) && can_elide(data, a) {
                return become_copy(data, op, 0);
            }
            if ka == Some(Konst::NegZero) && can_elide(data, b) {
                return become_copy(data, op, 1);
            }
            if let Some(x) = negated(data, a) {
                return become_binary(data, op, OpCode::CPUI_FLOAT_SUB, b, x);
            }
            if let Some(y) = negated(data, b) {
                return become_binary(data, op, OpCode::CPUI_FLOAT_SUB, a, y);
            }
            0
        }
        OpCode::CPUI_FLOAT_SUB => {
            if kb == Some(Konst::PosZero) && can_elide(data, a) {
                return become_copy(data, op, 0);
            }
            if let Some(y) = negated(data, b) {
                return become_binary(data, op, OpCode::CPUI_FLOAT_ADD, a, y);
            }
            0
        }
        OpCode::CPUI_FLOAT_MULT => {
            if kb == Some(Konst::One) && can_elide(data, a) {
                return become_copy(data, op, 0);
            }
            if ka == Some(Konst::One) && can_elide(data, b) {
                return become_copy(data, op, 1);
            }
            0
        }
        OpCode::CPUI_FLOAT_DIV => {
            if kb == Some(Konst::One) && can_elide(data, a) {
                return become_copy(data, op, 0);
            }
            0
        }
        _ => 0,
    }
}

/// Rule `RuleFloatIdentity` (name "floatidentity", group "analysis" in the schedule).
pub struct RuleFloatIdentity {
    group: String,
}

impl RuleFloatIdentity {
    pub fn new(group: &str) -> RuleFloatIdentity {
        RuleFloatIdentity {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleFloatIdentity {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![
            OpCode::CPUI_FLOAT_ADD,
            OpCode::CPUI_FLOAT_SUB,
            OpCode::CPUI_FLOAT_MULT,
            OpCode::CPUI_FLOAT_DIV,
        ]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleFloatIdentity::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<FloatIdentity>().0 {
            return 0;
        }
        fold(data, op)
    }
}

#[cfg(test)]
#[path = "floatidentity/tests.rs"]
mod tests;
