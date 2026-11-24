//! Port of `decompiler/cpp/unlace_returnpair.{cc,hh}` — return-register pairing
//! sub-stage (unlace GH-6990, S4 trial finalization).
//!
//! On an ABI with an output `<join>` rule over a register pair (SPARC and
//! friends), a void function whose second output register (o1) passively carries
//! a prologue value through the save/restore window to the RETURN op gets BOTH
//! o0 and o1 marked as active return trials; `ActionReturnRecovery::buildReturnOutput`
//! then joins them and emits `return CONCAT44(param_2,param_1)` with a spurious
//! 8-byte return type (GH-6990) instead of recovering the single (or empty)
//! return.
//!
//! The decision is a P0 assertion: `option returnpair pair|single` (default
//! `pair` = upstream join behavior, byte-identical output).  When `single`,
//! `buildReturnOutput` refuses to join a multi-register return, keeping only the
//! first return register.
//!
//! # What this port covers (and the two boundaries it cannot)
//!
//! The whole upstream `unlace_returnpair.cc` IS the option class
//! `OptionReturnPair::apply`: it parses `pair`/`single` and writes the arch flag
//! `return_single`.  The actual rewrite is a one-line gate inside
//! `ActionReturnRecovery::buildReturnOutput` (**`coreaction.cc`, not this file**).
//!
//! This module therefore ports:
//!
//! * [`ReturnPairForm`] + [`parse_return_pair_form`] — the `pair`/`single`
//!   parse and the confirmation message, the faithful decision body of
//!   `OptionReturnPair::apply` (the `glb->return_single = single` write becomes
//!   the returned `ReturnPairForm`; the [the registered option `ReturnSingle`] flag is
//!   already threaded — `architecture.rs`).
//! * [`keep_single_return`] — the reusable `buildReturnOutput` gate predicate
//!   (`return_single && newparam.size() > 2`), so the later wave's
//!   `ActionReturnRecovery` port (in `coreaction.cc`) calls one shared helper
//!   instead of re-deriving the condition.
//!
//! ## STUB(W4/W9) — the `ArchOption`/console wiring
//!
//! Upstream `OptionReturnPair : ArchOption` is registered with the option
//! database and invoked by the console.  Wiring a new `ArchOption` subclass
//! requires a setter on `ArchOptionContext` (`set_return_single`, in `options.rs`,
//! a file this pack does not own) and the console's option-dispatch surface (W9).
//! Until then the parse/decision is exposed as a free function; the live flag
//! flows through [the registered option `ReturnSingle`].  Noted in the structured losses.
//!
//! ## STUB (cross-file) — the `buildReturnOutput` resize site
//!
//! `ActionReturnRecovery::buildReturnOutput` (the consumer of this gate) lives in
//! `coreaction.cc`, which is not yet ported and is **outside this pack's owned
//! files**.  When that Action lands, its `newparam.resize(2)` branch should call
//! [`keep_single_return`].  Noted in the structured losses.

use unlace_base::error::{UnlaceError, UnlaceResult};

/// (unlace GH-6990) How multi-register return values are joined
/// (the two values of `option returnpair`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ReturnPairForm {
    /// `pair` (default): upstream behavior — join a register pair into a wide
    /// return (`glb->return_single = false`).
    Pair,
    /// `single`: refuse to join a multi-register return, keeping only the first
    /// return register (`glb->return_single = true`).
    Single,
}

impl ReturnPairForm {
    /// The resolved `glb->return_single` flag for this form (C++ `bool single`).
    pub fn return_single(self) -> bool {
        matches!(self, ReturnPairForm::Single)
    }

    /// The `option returnpair <p1>` token for this form.
    pub fn as_str(self) -> &'static str {
        match self {
            ReturnPairForm::Pair => "pair",
            ReturnPairForm::Single => "single",
        }
    }
}

/// Parse the `option returnpair pair|single` argument and produce the resolved
/// form plus the confirmation message (C++ `OptionReturnPair::apply`).
///
/// The C++ returns the error text as a normal (non-throwing) `string`; the Rust
/// port surfaces it as a `UnlaceError::parse` (the established option-parse error
/// idiom in `options.rs`).  The caller writes the resolved
/// [`ReturnPairForm::return_single`] into [the registered option `ReturnSingle`].
pub fn parse_return_pair_form(p1: &str) -> UnlaceResult<(ReturnPairForm, String)> {
    let form = if p1 == "single" {
        ReturnPairForm::Single
    } else if p1 == "pair" {
        ReturnPairForm::Pair
    } else {
        return Err(UnlaceError::parse("Must specify pair or single"));
    };
    // C++ writes glb->return_single here; Rust leaves it to the caller (Architecture::return_single).
    Ok((form, format!("Return-register pairing set to {p1} form")))
}

/// The `ActionReturnRecovery::buildReturnOutput` gate (C++ `coreaction.cc:1892`).
///
/// Returns `true` when the gathered return varnodes should be truncated to the
/// first register pair slot (`newparam[0]` is the return-indirect reference and
/// `newparam[1]` the first return register, so `size > 2` means at
/// least one extra register was gathered).  The consumer (`coreaction.cc`, a
/// later wave) does `newparam.resize(2)` when this is `true`.
///
/// `return_single` is [the registered option `ReturnSingle`]; `newparam_size` is the
/// `newparam.size()` at the resize point.
pub fn keep_single_return(return_single: bool, newparam_size: usize) -> bool {
    return_single && newparam_size > 2
}

/// (unlace GH-6990) Keep multi-register return values single, un-joined
/// (C++ `return_single`).
#[derive(Clone, Debug, PartialEq)]
pub struct ReturnSingle(pub bool);

impl crate::optionset::UnlaceOption for ReturnSingle {
    const NAME: &'static str = "returnpair";
    crate::unlace_option_id!();

    fn unset() -> Self {
        ReturnSingle(false)
    }

    fn shipped() -> Self {
        ReturnSingle(false)
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (v, msg) = crate::returnpair::parse_return_pair_form(value)
            .map(|(form, msg)| (form.return_single(), msg))?;
        Ok((ReturnSingle(v), msg))
    }
}

#[cfg(test)]
#[path = "returnpair/tests.rs"]
mod tests;
