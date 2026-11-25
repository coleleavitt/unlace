//! P3 partial-range call-overlap guards — the `calloverlap` decision point.
//!
//! # The gap
//!
//! [`Heritage::guard_calls`](crate::heritage::Heritage) characterizes
//! every heritaged range against each call site's prototype.  When the range is
//! *bigger* than the ABI storage it contains the characterization is
//! [`Containment::ContainedBy`](crate::fspec::Containment), and upstream Ghidra
//! runs one of two dedicated guards — `Heritage::guardCallOverlappingInput`
//! (`heritage.cc:1210`) on the input side and `Heritage::tryOutputOverlapGuard` /
//! `Heritage::guardOutputOverlap` (`heritage.cc:1249`/`:1293`) on the output side.
//! unlace shipped both as comment-only stubs, so the parameter and return entries
//! inside such a range were invisible to trial recovery.
//!
//! This is routine on x86-64: SLEIGH models `PXOR`, `MOVDQA`, `MOVDQU` and `ORPD`
//! as ONE 128-bit write to the whole `XmmReg`, so `Heritage::refinement`'s
//! `size > 4 && maxw < size` gate never fires and the range stays 16 bytes wide
//! while the SysV parameter/return entry inside it is 8.  The observable symptom is
//! a call rendered with missing arguments and a return value read from a stale
//! pre-call definition (`u(); sink = v1;` where `v1` is never assigned).
//!
//! # The levels
//!
//! The two halves are separable and carry different risk, so the option is a
//! policy with explicit modes rather than an on/off:
//!
//! * [`LEVEL_OFF`] — both branches inert; byte-identical to what unlace shipped
//!   before this option for a single partially covered ABI entry. Complete
//!   multi-slot register ranges are partitioned by `unlace_multiregargs`.
//! * [`LEVEL_AUTO`] (the default) — both guards, but only for a named
//!   eight-byte register's low four-byte general ABI slot on a truncated 32-bit
//!   address target, including e500 GPRs.
//! * [`LEVEL_IN`] — the input guard only.  Recovers the dropped argument but
//!   leaves the call's return value unrecovered.
//! * [`LEVEL_FULL`] — both upstream partial-range guards. Complete register partitions
//!   are registered at every level.
//!
//! The guards themselves are upstream `Heritage` methods and live with their
//! siblings in [`crate::heritage`]; this module owns the option's
//! parse surface and the level vocabulary the gate reads.

use unlace_base::error::UnlaceResult;
use unlace_base::types::int4;

/// `option calloverlap off` — both overlap guards stay inert.
pub const LEVEL_OFF: int4 = 0;

/// `option calloverlap auto` (the default) — both guards, but only for a narrow
/// scalar ABI slot inside a wide register on a truncated-address target.
pub const LEVEL_AUTO: int4 = 1;

/// `option calloverlap in` — the input guard (`guardCallOverlappingInput`) for
/// every contained slot.
pub const LEVEL_IN: int4 = 2;

/// `option calloverlap full` — the input guard plus the output guard
/// (`tryOutputOverlapGuard`); complete register partitions are independent.
pub const LEVEL_FULL: int4 = 3;

/// The `calloverlap` level.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CallOverlap(pub int4);

impl crate::optionset::UnlaceOption for CallOverlap {
    const NAME: &'static str = "calloverlap";
    crate::unlace_option_id!();

    fn unset() -> Self {
        CallOverlap(LEVEL_AUTO)
    }

    fn shipped() -> Self {
        CallOverlap(LEVEL_AUTO)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        OptionCallOverlap
            .apply(value)
            .map(|(v, msg)| (CallOverlap(v), msg))
    }
}

/// `option calloverlap auto|off|in|full` (C++ has no equivalent — upstream is
/// unconditionally `full`).
pub struct OptionCallOverlap;

impl OptionCallOverlap {
    /// The option name.
    pub const NAME: &'static str = "calloverlap";

    /// Parse `auto`/`off`/`in`/`full` into the guard level + a confirmation message.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(int4, String)> {
        match p1 {
            "auto" => Ok((
                LEVEL_AUTO,
                "Partial-range call overlap guards limited to narrow scalar ABI registers"
                    .to_string(),
            )),
            "off" => Ok((
                LEVEL_OFF,
                "Partial-range call overlap guards turned off".to_string(),
            )),
            "in" => Ok((
                LEVEL_IN,
                "Partial-range call overlap guards turned on, input side only \
                 (guardCallOverlappingInput)"
                    .to_string(),
            )),
            // Empty parameter reads as the full guard, matching `options::on_or_off`.
            "full" | "on" | "" => Ok((
                LEVEL_FULL,
                "Partial-range call overlap guards turned on, input + output \
                 (guardCallOverlappingInput + tryOutputOverlapGuard)"
                    .to_string(),
            )),
            _ => Err(unlace_base::error::UnlaceError::parse(
                "Must specify one of auto, off, in, full",
            )),
        }
    }
}

/// Whether a call has one low-word scalar ABI slot inside this physical register.
#[doc(hidden)]
pub fn auto_register(
    manager: &unlace_base::space::AddrSpaceManager,
    proto: &crate::fspec::FuncProto,
    addr: &unlace_base::address::Address,
    size: int4,
    output: bool,
) -> bool {
    use crate::dtype::type_class;
    use unlace_num::pcoderaw::VarnodeData;

    if size != 8
        || !manager
            .get_default_data_space()
            .is_some_and(|s| s.is_truncated() && s.get_addr_size() == 4)
    {
        return false;
    }
    let Some(space) = addr.get_space() else {
        return false;
    };
    if !manager
        .get_space_by_name("register")
        .is_some_and(|s| s.get_index() == space.get_index())
    {
        return false;
    }
    let Some(lookup) = manager.register_lookup() else {
        return false;
    };
    if lookup
        .get_exact_register_name(space, addr.get_offset(), size)
        .is_empty()
    {
        return false;
    }
    let mut slot = VarnodeData::default();
    let found = if output {
        proto.get_biggest_contained_output(addr, size, &mut slot)
    } else {
        proto.get_biggest_contained_input_param(addr, size, &mut slot)
    };
    if !found
        || slot.size != 4
        || addr.justified_contain(size, &slot.get_addr(), 4, false) != 0
        || lookup
            .get_exact_register_name(space, slot.offset, 4)
            .is_empty()
    {
        return false;
    }
    let list = if output {
        proto.model().output_list()
    } else {
        proto.model().input_opt()
    };
    let Some(list) = list else { return false };
    let mut contained = list
        .get_entry()
        .iter()
        .filter(|e| e.contained_by(addr, size))
        .peekable();
    contained.peek().is_some()
        && contained.all(|e| {
            e.get_type() == type_class::TYPECLASS_GENERAL
                && e.is_exclusion()
                && e.get_join_record().is_none()
                && e.get_base() == slot.offset
                && e.get_size() == 4
        })
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.calloverlap_auto_register = Some(auto_register);
}

#[cfg(test)]
mod tests;
