//! Recursion guards for [`super::build_datatype`]'s DWARF type walk.
//!
//! [`Guard::Cycle`] follows Ghidra's
//! `DWARFDataTypeImporter.trackRecursion`: each DIE offset may appear twice on
//! the current path; a third entry is refused. Successful [`TypeWalk::enter`]
//! calls are paired with [`TypeWalk::leave`], so returning from a branch releases
//! its count. This distinguishes a cycle from a deep, finite type declaration.
//! [`MAX_NESTING`] also bounds the native stack for long acyclic chains.
//!
//! [`Guard::Depth`] retains the legacy three-hop budget for the guard's own tests.
//! It counts transparent qualifiers too, so ordinary declarations such as
//! `const char **` exceed it. Either guard's refusal makes the caller yield
//! `void` for that part of the type.

use std::collections::{BTreeMap, BTreeSet};

/// Re-entry count at which a DIE offset is refused — upstream's `case 3`.
const MAX_REENTRY: u32 = 3;

/// Absolute nesting bound for the cycle-guarded walk: a native-stack backstop for
/// a forged `.debug_info` whose type chain is long but never repeats an offset
/// (the cycle counter alone would let it recurse once per DIE in the unit). No
/// real declaration comes close — the deepest in the C corpus measured here is 4.
const MAX_NESTING: u32 = 64;

/// The legacy hop budget (`MAX_TYPE_DEPTH`), retained for the guard's tests.
const MAX_TYPE_DEPTH: u32 = 3;

/// The recursion guard threaded through [`super::build_datatype`].
///
/// [`Guard`] is the guard proper; `active` is the (unlace `dwarfstructs`) set of
/// aggregate names whose field population is on the current path, so a
/// self-referential member resolves to the interned shell instead of re-entering
/// the populate — see [`super::dwarfstructs`].
pub(super) struct TypeWalk {
    guard: Guard,
    active: BTreeSet<String>,
}

/// The recursion-guard arms proper.
pub(super) enum Guard {
    /// The legacy flat hop budget, every hop counted.
    Depth { depth: u32 },
    /// Default: upstream's per-offset re-entry counter plus a stack backstop.
    Cycle {
        counts: BTreeMap<usize, u32>,
        nesting: u32,
    },
}

impl TypeWalk {
    /// The cycle-guarded walk every caller uses.
    pub(super) fn new() -> Self {
        Self::with_gate(true)
    }

    /// A walk with the guard chosen explicitly (the unit tests).
    pub(super) fn with_gate(full_depth: bool) -> Self {
        let guard = if full_depth {
            Guard::Cycle {
                counts: BTreeMap::new(),
                nesting: 0,
            }
        } else {
            Guard::Depth { depth: 0 }
        };
        TypeWalk {
            guard,
            active: BTreeSet::new(),
        }
    }

    /// (unlace `dwarfstructs`) Claim `name` for field population on this path.
    /// `false` => the aggregate is already being populated by an outer frame, so
    /// the caller must hand back the interned shell rather than recurse.
    pub(super) fn begin_aggregate(&mut self, name: &str) -> bool {
        self.active.insert(name.to_string())
    }

    /// (unlace `dwarfstructs`) Release a name claimed by [`Self::begin_aggregate`].
    pub(super) fn end_aggregate(&mut self, name: &str) {
        self.active.remove(name);
    }

    /// Begin resolving the DIE at `off`; `false` => refuse (cycle, or a bound
    /// hit), and the caller yields `void` for this piece of the type.
    pub(super) fn enter(&mut self, off: usize) -> bool {
        match &mut self.guard {
            Guard::Depth { depth } => {
                if *depth >= MAX_TYPE_DEPTH {
                    return false;
                }
                *depth += 1;
                true
            }
            Guard::Cycle { counts, nesting } => {
                if *nesting >= MAX_NESTING {
                    return false;
                }
                let seen = counts.entry(off).or_insert(0);
                if *seen + 1 >= MAX_REENTRY {
                    return false;
                }
                *seen += 1;
                *nesting += 1;
                true
            }
        }
    }

    /// Finish the DIE at `off` (pairs with an [`Self::enter`] that returned true).
    pub(super) fn leave(&mut self, off: usize) {
        match &mut self.guard {
            Guard::Depth { depth } => *depth = depth.saturating_sub(1),
            Guard::Cycle { counts, nesting } => {
                if let Some(seen) = counts.get_mut(&off) {
                    *seen = seen.saturating_sub(1);
                }
                *nesting = nesting.saturating_sub(1);
            }
        }
    }

    /// Whether the transparent `typedef`/`const`/`volatile`/`restrict` hops are
    /// collapsed for EVERY caller ([`super::strip_qualifiers`]), not just the C++
    /// one. Under the cycle guard they no longer need collapsing to survive a
    /// budget — but collapsing is what carries an anonymous aggregate's typedef
    /// name onto it, and full-depth resolution reaches many more of those (a
    /// local `mbstate_t` would otherwise intern as the shared `anon_struct`).
    pub(super) fn collapse_qualifiers(&self) -> bool {
        matches!(self.guard, Guard::Cycle { .. })
    }
}

#[cfg(test)]
mod tests;
