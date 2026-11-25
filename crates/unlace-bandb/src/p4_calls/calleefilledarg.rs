//! (unlace) `calleefilledarg` — an argument register the callee loads itself is
//! not a parameter slot, so it says nothing about the slots after it.
//!
//! # The symptom
//!
//! An Objective-C image linked with `-objc_stubs_fast` sends every message
//! through a `__objc_stubs` entry that loads the selector into `x1` and jumps
//! to `objc_msgSend`:
//!
//! ```text
//!   objc_msgSend$countByEnumeratingWithState:objects:count:
//!     adrp x1,…; ldr x1,[x1,#off]; adrp x16,…; ldr x16,[x16,#got]; br x16
//! ```
//!
//! The caller leaves `x1` alone and stages the real arguments in `x2`, `x3`
//! and `x4`:
//!
//! ```text
//!   mov x2,sp; add x3,sp,#0x40; mov w4,#0x10; bl objc_msgSend$countBy…
//! ```
//!
//! unlace printed `objc_msgSend$countByEnumeratingWithState:objects:count:(v3)`,
//! one argument, at every `for (x in …)` loop of a 72 MB app; with the address
//! of the enumeration state gone from the call, the state struct never escaped,
//! its zero-initialised slots folded through the call, and the loop body read
//! `*(objc_object **)(v6 * 8)` and compared a global at address 0.
//!
//! # Why the three arguments are lost
//!
//! `FuncCallSpecs::checkInputTrialUse` (`fspec.cc:5592`) scores each of them
//! active — a value the caller moved into the register with no other reader.
//! `x1` is scored definitely-not-used: the last call before this one killed
//! it, so what the register holds at the `bl` is an INDIRECT creation, nothing
//! the caller placed. `ParamListStandard::forceNoUse` (`fspec.cc:1623`) then
//! reads the positional rule of every register convention — the first slot
//! nobody fills ends the argument list — and marks every trial after `x1`
//! inactive. That rule is right for a C callee. It is wrong for a callee that
//! fills the slot itself: `x1` is not a parameter of the stub, and the stub's
//! own prototype, when the image declares the selector, is laid out as
//! `x0, x2, x3, …` for exactly that reason.
//!
//! # The evidence
//!
//! The callee is an Objective-C selector stub: named `objc_msgSend$<sel>`,
//! the name the linker gives the stubs it synthesizes into `__objc_stubs` and
//! the `objc` analyzer gives them in a stripped image. Its convention is
//! `objc_msgSend`'s with the selector supplied, so `x1` (`rsi`) is no
//! parameter of it and the method's arguments follow in `x2` (`rdx`) onward.
//! A C callee has no such gap: `void tramp2(void) { g_fp(g_x, 1); }` also
//! fills `rdi` and `rsi` and jumps through a register, but a caller's `idiv`
//! remainder left in `rdx` is no argument of it, and the positional cascade is
//! what keeps it off the call.
//!
//! Then the callee's own body, read by the entry-liveness walk
//! [`crate::calleedeadarg`] already caches for every direct
//! call, has to agree. The stub is a TRAMPOLINE
//! ([`CalleeEntryDead::is_trampoline`]): every path it has leaves through an
//! indirect jump (`br x16` through a GOT slot), none returns or calls, and it
//! reads no register on entry -- so whatever it does not write goes to the
//! real target exactly as the caller staged it. And the register is written on
//! every path from the entry before anything could read it
//! ([`CalleeEntryDead::proves_dead`]).
//!
//! The pass acts only on a trial the caller's own evidence has ALREADY scored
//! definitely-not-used. A slot that is both unfilled by the caller and
//! overwritten by the trampoline carries nothing either way: it is marked
//! [`ParamTrial::is_callee_filled`], and `forceNoUse` steps over it as it
//! steps over a trial with no entry, so the slots after it are scored on their
//! own evidence. A hole `buildTrialMap` backfills on such a register is the
//! same kind of slot ([`ParamActive::is_callee_filled`]), and
//! `forceInactiveChain` never materialises either as an argument. The chain
//! rule itself is untouched: a filled hole still counts against the run of
//! unfilled slots the convention tolerates between two active ones, so a
//! caller that stages `rdi` and `r8` around three empty registers still
//! prints one argument whether or not the callee loads `rdx`.
//!
//! A trial that is anything but definitely-not-used, a non-register trial, an
//! indirect call, any other callee, and a stub the walk could not cover keep
//! the positional rule. Default-on, inert outside Mach-O Objective-C: the only
//! call sites it can change are calls to a selector stub that loads an
//! argument register the caller left unset, with actively staged registers
//! after it, and on both parity corpora none is.

use crate::calleedeadarg::FuncdataCalleedeadargExt;
use crate::fspec::FuncCallSpecs;
use crate::funcdata::Funcdata;

/// Before `fillinMap`, hand `call`'s trials the callee's entry-liveness probe
/// and mark every register trial the caller scored definitely-not-used that
/// the callee writes before any read on every path from its entry.
///
/// A direct call to a selector stub ([`is_selector_stub`]) whose body is a
/// trampoline ([`CalleeEntryDead::is_trampoline`]) only: with the option off,
/// any other callee, no probe for it, or one that returns, calls or reads a
/// register on entry, the trials keep the positional rule.
pub fn mark(call: &mut FuncCallSpecs, data: &Funcdata) {
    let dead = (data
        .get_arch()
        .unlace_options
        .get::<crate::calleefilledarg::CalleeFilledArg>()
        .0
        && is_selector_stub(call.get_name()))
    .then(|| data.unlace_callee_entry_dead_shared(call.get_entry_address()))
    .flatten()
    .filter(|d| d.is_trampoline());
    let active = call.get_active_input();
    if let Some(dead) = &dead {
        for i in 0..active.get_num_trials() {
            let t = active.get_trial(i);
            let register = t
                .get_address()
                .get_space()
                .is_some_and(|s| s.get_name() == "register");
            if t.is_definitely_not_used()
                && register
                && dead.proves_dead(t.get_address(), t.get_size())
            {
                active.get_trial_mut(i).set_callee_filled();
            }
        }
    }
    active.set_callee_filled(dead.map(|d| d as std::rc::Rc<dyn crate::fspec::EntryLiveness>));
}

/// Is `name` an Objective-C selector stub, `objc_msgSend$<sel>` (with the
/// Mach-O symbol's leading underscore or without)?
fn is_selector_stub(name: &str) -> bool {
    let name = name.strip_prefix('_').unwrap_or(name);
    name.strip_prefix("objc_msgSend$")
        .is_some_and(|sel| !sel.is_empty())
}

crate::unlace_flag!(
    /// (unlace) `option calleefilledarg`: an unfilled argument register an
    /// Objective-C selector stub loads itself ends no argument list.  See
    /// [`crate::calleefilledarg`].
    CalleeFilledArg,
    "calleefilledarg",
    "Callee-filled argument slots",
    unset: true,
    shipped: true
);

#[cfg(test)]
mod tests;
