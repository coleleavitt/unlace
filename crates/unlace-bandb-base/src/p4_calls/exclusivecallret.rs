//! P4 mutually exclusive call and return uses in trial scoring.
//!
//! `Funcdata::only_op_use` (C++ `Funcdata::onlyOpUse`, `funcdata_varnode.cc:1851`)
//! rejects a trial whose value has another CALL or RETURN use. GCC compiles
//! `return a(x) ? b(x) : x` with a tail call to `b`, so the same scalar is the
//! tail call's argument on one arm and the function's return on the other. Each
//! use vetoes the other's trial although no execution reaches both, and the
//! function is recovered `void` or the tail call loses its argument.
//!
//! The rule skips a CALL/CALLIND use while scoring a RETURN trial, and a RETURN
//! use while scoring a call's input trial, when the two ops sit in distinct
//! blocks, neither reaches the other and the RETURN is a normal return. The use
//! must read the value as data, not as a call target or return address. An
//! input trial also requires that the value was produced in a block both uses
//! follow through single-entry, single-exit chains, so it was prepared for the
//! branch rather than merely still live.
//!
//! The rule is limited to the shape `calloverlap auto` recovers: a four-byte
//! trial in the low word of a named eight-byte register on a truncated 32-bit
//! address target, such as an e500 GPR. Reachability is
//! [`exclusivearguse`](crate::exclusivearguse)'s bounded walk,
//! which declines once its bound is exceeded.

use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::exclusivearguse::{MAX_VISIT, def_block, reaches};
use crate::funcdata::Funcdata;

/// Whether the trial matched at `opmatch` has the narrow scalar shape the rule
/// covers. Independent of the use being scored, so it is computed once per walk.
#[doc(hidden)]
pub fn applies(data: &Funcdata, opmatch: OpId, trial: &crate::fspec::ParamTrial) -> bool {
    if trial.get_size() != 4
        || !data.get_func_proto().has_model()
        || !data.obank().get(opmatch).is_some_and(|o| {
            matches!(
                o.code(),
                OpCode::CPUI_CALL | OpCode::CPUI_CALLIND | OpCode::CPUI_RETURN
            )
        })
    {
        return false;
    }
    let addr = trial.get_address();
    let Some(space) = addr.get_space() else {
        return false;
    };
    let wide = addr - if space.is_big_endian() { 4 } else { 0 };
    crate::calloverlap::auto_register(
        data.get_arch().manage(),
        data.get_func_proto(),
        &wide,
        8,
        true,
    )
}

/// Whether `op`'s read of `reader` is a call or return use on a path that cannot
/// co-execute with the trial matched at `opmatch`, whose root value is `value`.
#[doc(hidden)]
pub fn skips_use(
    data: &Funcdata,
    opmatch: OpId,
    op: OpId,
    value: VarnodeId,
    reader: VarnodeId,
) -> bool {
    let (Some(m), Some(o)) = (data.obank().get(opmatch), data.obank().get(op)) else {
        return false;
    };
    if o.get_slot(reader) <= 0 {
        return false;
    }
    let (ret, call) = match (m.code(), o.code()) {
        (OpCode::CPUI_RETURN, OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) => (m, o),
        (OpCode::CPUI_CALL | OpCode::CPUI_CALLIND, OpCode::CPUI_RETURN) => (o, m),
        _ => return false,
    };
    if ret.get_halt_type() != 0 {
        return false;
    }
    let (Some(r), Some(c)) = (ret.get_parent(), call.get_parent()) else {
        return false;
    };
    disjoint(data, r, c)
        && (m.code() == OpCode::CPUI_RETURN
            || def_block(data, value).is_some_and(|d| shared_producer(data, d, r, c)))
}

/// Distinct blocks neither of which reaches the other.
fn disjoint(data: &Funcdata, a: BlockId, b: BlockId) -> bool {
    a != b && !reaches(data, a, b) && !reaches(data, b, a)
}

/// `producer` precedes both `a` and `b` through chains of single-entry,
/// single-exit blocks.
fn shared_producer(data: &Funcdata, producer: BlockId, a: BlockId, b: BlockId) -> bool {
    let graph = data.bblocks_ref();
    let follows = |mut bl: BlockId| {
        for _ in 0..MAX_VISIT {
            let block = graph.block(bl);
            if block.size_in() != 1 {
                return false;
            }
            let prev = block.get_in(0);
            if prev == producer {
                return true;
            }
            if graph.block(prev).size_out() != 1 {
                return false;
            }
            bl = prev;
        }
        false
    };
    a != b && follows(a) && follows(b)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.exclusivecallret_applies = Some(applies);
    hooks.exclusivecallret_skips_use = Some(skips_use);
}

#[cfg(test)]
mod tests;
