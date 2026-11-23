//! What a direct callee's own code says about a call to it, as the flow build asks
//! (`spsolve`, `calleeargs`, the callee-body summary). The passes in `p4_calls/` compute the
//! answers; flow only reads these shapes.

use unlace_base::address::Address;
use unlace_base::types::int4;

/// What the returns of a direct callee do to the stack pointer.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CalleeReturns {
    /// The extrapop every reachable return proves.
    pub proven: Option<int4>,
    /// The most any reached return adds to the stack pointer.
    pub most: Option<int4>,
}

/// (`calleeargs`) What a direct call's callee does with the stack above its
/// return address, in bytes from the first argument slot.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct StackArgs {
    /// The bytes its code touches.
    pub read: u32,
    /// The bytes that can be its arguments at this call: `read`, widened to
    /// what its returns pop and what the caller removes right after the call.
    pub bound: u32,
}

/// Is `addr` in the `register` space the callee-body summary answers for?
///
/// By name, not by `spacetype`: a processor's register file and its ram are both
/// `IPTR_PROCESSOR`, and `register` is the name
/// [`probe_callee_entry_dead`](crate::p4_calls::kuna_calleedeadarg::probe_callee_entry_dead)
/// resolves its own index from.
#[inline]
pub fn is_register(addr: &Address) -> bool {
    addr.get_space()
        .map(|s| s.get_name() == "register")
        .unwrap_or(false)
}
