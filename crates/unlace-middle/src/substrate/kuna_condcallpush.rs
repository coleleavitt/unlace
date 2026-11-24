//! (kuna `condcallpush`) A call instruction's own return-address push is not a statement when
//! `BlockBasic::isComplex` sizes a condition block.
//!
//! On x86 a `CALL` instruction lifts to a stack-pointer adjust, a `STORE` of the return address
//! and the `CALL` op, all at the call's address. The main loop builds its structure on its first
//! pass, while that `STORE` is still live, so `isComplex` counts it and every block that tests a
//! call result reaches three statements. `ruleBlockOr` then declines to fold the block into an
//! `&&`/`||` chain. Dead-code removal deletes the `STORE` on a later pass, but the structure is
//! kept, so the source's `if (a && f(x) && !g(x))` prints as one nested `if` per call. With the
//! option on, such a `STORE` is skipped when the block's branch tests the call's result; a call
//! made only for its effect keeps the count, so it is not pulled into the condition as a comma
//! operand.

use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna `condcallpush`) Skip a call's own return-address `STORE` when
    /// `BlockBasic::isComplex` counts a block whose branch tests the call's result.
    CondCallPush,
    "condcallpush",
    "skipping a call's return-address push in condition complexity",
    unset: false,
    shipped: true
);

/// Bound on the varnodes visited walking back from the branch.
const MAX_WALK: usize = 32;

/// Is `op` a `STORE` lifted from the same instruction as a call whose result its block's
/// branch tests?
pub fn is_call_push(data: &Funcdata, op: OpId) -> bool {
    let Some(o) = data.obank().get(op) else {
        return false;
    };
    if o.code() != OpCode::CPUI_STORE {
        return false;
    }
    let Some(bb) = o.get_parent() else {
        return false;
    };
    let addr = o.get_addr().clone();
    let call = data.bb_ops(bb).into_iter().find(|&c| {
        data.obank()
            .get(c)
            .is_some_and(|c| c.is_call() && *c.get_addr() == addr)
    });
    call.is_some_and(|call| branch_reads_call(data, bb, call))
}

/// Does the branch condition of `bb` depend, through ops of `bb`, on a value `call` produces
/// (its output, or an `INDIRECT` the call creates)?
fn branch_reads_call(data: &Funcdata, bb: BlockId, call: OpId) -> bool {
    let Some(b) = data.bb_op_tail(bb).and_then(|t| data.obank().get(t)) else {
        return false;
    };
    if b.code() != OpCode::CPUI_CBRANCH {
        return false;
    }
    let mut work: Vec<VarnodeId> = b.get_in(1).into_iter().collect();
    let mut seen = 0usize;
    while let Some(vn) = work.pop() {
        seen += 1;
        if seen > MAX_WALK {
            return false;
        }
        let Some(def) = data.vbank().get(vn).and_then(|v| v.get_def()) else {
            continue;
        };
        if def == call {
            return true;
        }
        let Some(d) = data.obank().get(def) else {
            continue;
        };
        if d.get_parent() != Some(bb) {
            continue;
        }
        if d.code() == OpCode::CPUI_INDIRECT {
            if indirect_effect(data, d.get_in(1)) == Some(call) {
                return true;
            }
            continue;
        }
        work.extend((0..d.num_input()).filter_map(|i| d.get_in(i)));
    }
    false
}

/// The op an `INDIRECT`'s second input names (an `iop` constant).
fn indirect_effect(data: &Funcdata, iop: Option<VarnodeId>) -> Option<OpId> {
    let off = data.vbank().get(iop?)?.get_addr().get_offset();
    Some(OpId::from(slotmap::KeyData::from_ffi(off)))
}
