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
//! - the join is not a loop variable: its block is not a loop head and its
//!   output is not loop-carried ([`loop_carried`]), so neither an induction
//!   update nor a loop's initial value is split from the loop variable;
//! - the input is written by an op that is not a COPY, MULTIEQUAL or INDIRECT
//!   (an assignment `r = a;` to the join variable stays merged) and that does
//!   not read the join value;
//! - the input is not address-tied, persistent or an input, and some op other
//!   than this MULTIEQUAL that is not a MULTIEQUAL or INDIRECT reads it;
//! - the input is not loop-carried ([`loop_carried`]): no COPY or MULTIEQUAL
//!   output of it reaches a MULTIEQUAL in a loop head, so a loop counter read
//!   at its loop exit, or the value a loop starts from, stays the loop variable.

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
    if ctx.block_num_in(bl) != nin || loop_head(ctx, op) || loop_carried(ctx, out, op) {
        return slots;
    }
    for slot in 0..nin {
        let Some(vn) = ctx.op_in(op, slot) else {
            continue;
        };
        if vn == out || ctx.vn_is_input(vn) || !ctx.vn_is_written(vn) {
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
        if read_as_value(ctx, vn, Some(op)) && !loop_carried(ctx, vn, op) {
            slots.push(slot);
        }
    }
    slots
}

/// Walk limit for [`loop_carried`]; past it a value counts as not loop-carried.
const LOOP_CARRIED_LIMIT: usize = 64;

/// Is `vn` loop-carried? Walk its COPY and MULTIEQUAL descendants (never the
/// join `join` itself) and report whether one of them is a MULTIEQUAL in a loop
/// head ([`loop_head`]). The value then enters that loop as the loop variable,
/// along a back edge as its next value or along the entry edge as the value the
/// loop starts from; either way a join that reads it is the loop variable, not a
/// second one.
fn loop_carried(ctx: &dyn MergeContext, vn: VarnodeId, join: OpId) -> bool {
    let mut work = vec![vn];
    let mut seen: Vec<VarnodeId> = Vec::new();
    while let Some(cur) = work.pop() {
        if seen.contains(&cur) || seen.len() >= LOOP_CARRIED_LIMIT {
            continue;
        }
        seen.push(cur);
        for reader in ctx.vn_descend(cur) {
            if reader == join {
                continue;
            }
            match ctx.op_code(reader) {
                OpCode::CPUI_MULTIEQUAL if loop_head(ctx, reader) => return true,
                OpCode::CPUI_MULTIEQUAL | OpCode::CPUI_COPY => {}
                _ => continue,
            }
            if let Some(out) = ctx.op_out(reader) {
                work.push(out);
            }
        }
    }
    false
}

/// Is MULTIEQUAL `op` in a loop head, a block that dominates one of its
/// predecessors (the source of a back edge)?
fn loop_head(ctx: &dyn MergeContext, op: OpId) -> bool {
    let bl = ctx.op_parent(op);
    (0..ctx.block_num_in(bl)).any(|slot| ctx.block_dominates(bl, ctx.block_in(bl, slot)))
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

/// (unlace) Parse `option phiarm on|off`.
pub struct OptionPhiArm;

impl OptionPhiArm {
    /// The option name.
    pub const NAME: &'static str = "phiarm";

    /// Parse and validate the value.
    pub fn apply(&self, p1: &str) -> unlace_base::error::UnlaceResult<(bool, String)> {
        let on = crate::options::on_or_off(p1)?;
        let state = if on { "on" } else { "off" };
        Ok((on, format!("Phi-arm variable split turned {state}")))
    }
}

/// (unlace) Trim phi arms that are variables of their own before the required
/// merge (option `phiarm`, default off).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct PhiArmSplit(pub bool);

impl crate::optionset::UnlaceOption for PhiArmSplit {
    const NAME: &'static str = "phiarm";
    crate::unlace_option_id!();

    fn unset() -> Self {
        PhiArmSplit(false)
    }

    fn shipped() -> Self {
        PhiArmSplit(false)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (on, msg) = OptionPhiArm.apply(value)?;
        Ok((PhiArmSplit(on), msg))
    }
}

#[cfg(test)]
mod tests;
