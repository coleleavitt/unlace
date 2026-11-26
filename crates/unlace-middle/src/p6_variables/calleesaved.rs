//! Keep variables the compiler kept in one callee-saved register across
//! different calls apart (option `calleesaved`).
//!
//! A compiler keeps a value that must survive a call in a callee-saved
//! register, and reuses the same register for an unrelated value that must
//! survive a later call. The two are separate SSA webs with no data flow
//! between them, but they share the register and, often, the type, so
//! `Merge::mergeByDatatype` joins them into one variable. With the option on,
//! [`span_key`] keys every gathered high that lives wholly in one register the
//! function's own prototype model marks unaffected by calls and whose Cover
//! holds a CALL in its interior; `merge_by_datatype` never puts two highs with
//! the same key in one group.

use unlace_base::address::Address;
use unlace_base::space::spacetype;
use unlace_base::types::int4;

use crate::context::{HighVariableId, OpId};
use crate::merge::MergeContext;

/// Every live CALL op of the function, the input to [`span_key`].
pub fn call_ops(ctx: &dyn MergeContext) -> Vec<OpId> {
    ctx.ops_alive()
        .into_iter()
        .filter(|&op| ctx.op_is_call(op))
        .collect()
}

/// The callee-saved register `high` lives in when it is live across one of
/// `calls`, or `None`.
pub fn span_key(
    ctx: &dyn MergeContext,
    high: HighVariableId,
    calls: &[OpId],
) -> Option<(Address, int4)> {
    if calls.is_empty() {
        return None;
    }
    let (addr, size) = crate::typemerge::single_storage(ctx, high)?;
    if addr.get_space()?.get_type() != spacetype::IPTR_PROCESSOR {
        return None;
    }
    if !ctx.storage_callee_saved(&addr, size) {
        return None;
    }
    let cover = ctx.high_get_cover(high);
    let spans = calls.iter().any(|&op| {
        let (blk, point) = ctx.op_cover_point(op);
        cover.contain(blk, point, 2)
    });
    spans.then_some((addr, size))
}

/// May a high keyed `b` join a group whose head is keyed `a`?
pub fn joins(a: &Option<(Address, int4)>, b: &Option<(Address, int4)>) -> bool {
    !(a.is_some() && a == b)
}

/// (unlace) Parse `option calleesaved on|off`.
pub struct OptionCalleeSaved;

impl OptionCalleeSaved {
    /// The option name.
    pub const NAME: &'static str = "calleesaved";

    /// Parse and validate the value.
    pub fn apply(&self, p1: &str) -> unlace_base::error::UnlaceResult<(bool, String)> {
        let on = crate::options::on_or_off(p1)?;
        let state = if on { "on" } else { "off" };
        Ok((
            on,
            format!("Callee-saved register variable split turned {state}"),
        ))
    }
}

/// (unlace) Keep same-register variables live across different calls apart in
/// `ActionMergeType` (option `calleesaved`, default off).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CalleeSavedSplit(pub bool);

impl crate::optionset::UnlaceOption for CalleeSavedSplit {
    const NAME: &'static str = "calleesaved";
    crate::unlace_option_id!();

    fn unset() -> Self {
        CalleeSavedSplit(false)
    }

    fn shipped() -> Self {
        CalleeSavedSplit(false)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (on, msg) = OptionCalleeSaved.apply(value)?;
        Ok((CalleeSavedSplit(on), msg))
    }
}

#[cfg(test)]
mod tests;
