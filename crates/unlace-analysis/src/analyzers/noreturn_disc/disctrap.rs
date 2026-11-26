//! (unlace `noreturntrap`, unlace#837) A call sealed by an `int3` pad is enough
//! evidence on its own that its callee never returns.
//!
//! MSVC, and clang and rustc targeting Windows, end a function whose last act is
//! a call to a `noreturn` callee with that call and an `int3` pad, and start the
//! next function after the pad. The compiler emitted no code to continue in: had
//! the callee returned, control would run into the trap. The tally in
//! [`super::discover_noreturn`] counts such a site as one vote of three, which
//! misses a no-return routine the binary calls from one such site only. The
//! statically linked VC++ 2008 CRT is that shape: `_exit` is
//! `doexit(code, 1, 0)` (it returns only when its third argument is nonzero, so
//! its body proves nothing), `abort` ends `call _exit ; int3 ; int3`, and
//! `raise` calls it once more where its fall-through is a join. Without `_exit`
//! the whole `abort` / `terminate` / `unexpected` / `_inconsistency` /
//! `CallUnexpected` chain stays returning, though IDA marks all of it.
//!
//! The rule is a judgement call (it reads what the compiler believed, not the
//! callee), so it has its own option. It takes a sealed site only where no other
//! site contradicts it: a call whose fall-through is decoded code that nothing
//! but the call reaches is one the compiler expected to return from, and it
//! vetoes the conclusion. A fall-through that is a join (some branch targets it
//! too) says nothing either way, and neither does `__debugbreak()` after a
//! returning call: the compiler emits the rest of the function behind that
//! `int3`, so the pad does not run into the next function.

use crate::listing::model::Insn;
use crate::listing::{Listing, RefKind};

use super::discstrict::is_int3;

enum Site {
    Sealed,
    Continued,
    Neutral,
}

/// Does `callee` have a call site sealed by an `int3` pad, and no call site the
/// compiler continued after?
pub(super) fn sealed_by_trap(listing: &Listing, file: &object::File, callee: u64) -> bool {
    let mut sealed = false;
    for site in listing
        .refs_to(callee)
        .iter()
        .filter(|r| r.kind == RefKind::Call)
    {
        let Some(call) = listing.instruction_at(site.from) else {
            continue;
        };
        match classify(listing, file, site.from, call, callee) {
            Site::Sealed => sealed = true,
            Site::Continued => return false,
            Site::Neutral => {}
        }
    }
    sealed
}

fn classify(listing: &Listing, file: &object::File, at: u64, call: &Insn, callee: u64) -> Site {
    let Some(fall) = call.fall_through else {
        return Site::Neutral;
    };
    let Some(next) = listing.instruction_at(fall) else {
        return Site::Neutral;
    };
    if is_int3(next) {
        let mut end = fall;
        while crate::analyzers::noreturn_propagate::bytes_at(file, end, 1) == Some(&[0xcc]) {
            end += 1;
        }
        let into_next = end != callee && listing.function_at(end).is_some();
        return if into_next || listing.is_data(end) {
            Site::Sealed
        } else {
            Site::Neutral
        };
    }
    if crate::analyzers::noreturn_propagate::is_padding_nop(next)
        || listing.function_at(fall).is_some()
    {
        return Site::Neutral;
    }
    if listing.refs_to(fall).iter().all(|r| r.from == at) {
        Site::Continued
    } else {
        Site::Neutral
    }
}
