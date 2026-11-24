//! Keep a phi arm's value its own variable (option `phiarm`).
//!
//! `Merge::mergeOp` (`merge.cc:719`) forces a MULTIEQUAL's output and every
//! input it does not trim into one HighVariable; upstream trims only on a
//! required-test or Cover conflict. When an arm computes a value that is also
//! used on that arm in its own right (`x = f(); g(x);`) and then flows into the
//! join, the join variable and `x` become one name, and so do the values of
//! every other arm: two source variables that only met at the join print as
//! one. Hex-Rays splits such arms before allocating variables
//! (`BREAK_PHI_ARM_MERGES`); here [`arm_slots`] names the MULTIEQUAL inputs to
//! trim, each gets upstream's `trimOpInput` COPY at the end of its predecessor
//! (`r = x;`), and [`keeps_apart`] stops the later speculative merges from
//! joining the arm value back into the join variable.
//!
//! A slot is an arm value when all of these hold:
//!
//! - the join variable is not address-tied, persistent or an input, and some op
//!   that is not a MULTIEQUAL or INDIRECT reads it;
//! - the slot's predecessor is not dominated by the join block (not a loop back
//!   edge, so an induction update stays in its loop variable);
//! - the input is written by an op that is not a COPY, MULTIEQUAL or INDIRECT
//!   (an assignment `r = a;` to the join variable stays merged) and that does
//!   not read the join value;
//! - the input is not address-tied, persistent or an input, and some op other
//!   than this MULTIEQUAL that is not a MULTIEQUAL or INDIRECT reads it.

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{HighVariableId, OpId, VarnodeId};
use crate::merge::MergeContext;

/// The input slots of MULTIEQUAL `op` whose values keep their own variable.
pub fn arm_slots(ctx: &mut dyn MergeContext, op: OpId) -> Vec<int4> {
    let mut slots = Vec::new();
    if ctx.op_code(op) != OpCode::CPUI_MULTIEQUAL {
        return slots;
    }
    let Some(out) = ctx.op_out(op) else {
        return slots;
    };
    let Some(out_high) = ctx.vn_high(out) else {
        return slots;
    };
    if pinned(ctx, out_high) || !read_as_value(ctx, out, None) {
        return slots;
    }
    let bl = ctx.op_parent(op);
    let nin = ctx.op_num_input(op);
    if ctx.block_num_in(bl) != nin {
        return slots;
    }
    for slot in 0..nin {
        let Some(vn) = ctx.op_in(op, slot) else {
            continue;
        };
        if vn == out || ctx.vn_is_input(vn) || !ctx.vn_is_written(vn) {
            continue;
        }
        if ctx.block_dominates(bl, ctx.block_in(bl, slot)) {
            continue;
        }
        let Some(def) = ctx.vn_def(vn) else {
            continue;
        };
        if ctx.op_is_marker(def) || ctx.op_code(def) == OpCode::CPUI_COPY {
            continue;
        }
        if (0..ctx.op_num_input(def)).any(|i| ctx.op_in(def, i) == Some(out)) {
            continue;
        }
        let Some(high) = ctx.vn_high(vn) else {
            continue;
        };
        if high == out_high || pinned(ctx, high) {
            continue;
        }
        if read_as_value(ctx, vn, Some(op)) {
            slots.push(slot);
        }
    }
    slots
}

/// Is `high` a variable a trim must not move (address-tied, persistent, input)?
fn pinned(ctx: &mut dyn MergeContext, high: HighVariableId) -> bool {
    ctx.high_is_addr_tied(high) || ctx.high_is_persist(high) || ctx.high_is_input(high)
}

/// Does an op other than `skip` that is not a MULTIEQUAL or INDIRECT read `vn`?
fn read_as_value(ctx: &dyn MergeContext, vn: VarnodeId, skip: Option<OpId>) -> bool {
    ctx.vn_descend(vn)
        .into_iter()
        .any(|r| Some(r) != skip && !ctx.op_is_marker(r))
}

/// Would merging `a` and `b` join an arm value in `arms` back into the join
/// variable it was trimmed from?
pub fn keeps_apart(
    arms: &[(VarnodeId, VarnodeId)],
    ctx: &dyn MergeContext,
    a: HighVariableId,
    b: HighVariableId,
) -> bool {
    if arms.is_empty() || a == b {
        return false;
    }
    arms.iter().any(|&(arm, join)| {
        let (Some(ha), Some(hj)) = (ctx.vn_high(arm), ctx.vn_high(join)) else {
            return false;
        };
        ha != hj && ((ha == a && hj == b) || (ha == b && hj == a))
    })
}

/// (kuna) Parse `option phiarm on|off`.
pub struct OptionPhiArm;

impl OptionPhiArm {
    /// The option name.
    pub const NAME: &'static str = "phiarm";

    /// Parse and validate the value.
    pub fn apply(&self, p1: &str) -> unlace_base::error::KunaResult<(bool, String)> {
        let on = crate::options::on_or_off(p1)?;
        let state = if on { "on" } else { "off" };
        Ok((on, format!("Phi-arm variable split turned {state}")))
    }
}

/// (kuna) Trim phi arms that are variables of their own before the required
/// merge (option `phiarm`, default off).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct PhiArmSplit(pub bool);

impl crate::kuna_optionset::KunaOption for PhiArmSplit {
    const NAME: &'static str = "phiarm";
    crate::kuna_option_id!();

    fn unset() -> Self {
        PhiArmSplit(false)
    }

    fn shipped() -> Self {
        PhiArmSplit(false)
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, msg) = OptionPhiArm.apply(value)?;
        Ok((PhiArmSplit(on), msg))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::kuna_optionset::KunaOption;

    #[test]
    fn option_parses_and_ships_off() {
        assert_eq!(PhiArmSplit::shipped(), PhiArmSplit(false));
        assert_eq!(PhiArmSplit::parse("on").unwrap().0, PhiArmSplit(true));
        assert_eq!(PhiArmSplit::parse("off").unwrap().0, PhiArmSplit(false));
        assert!(PhiArmSplit::parse("maybe").is_err());
    }
}
