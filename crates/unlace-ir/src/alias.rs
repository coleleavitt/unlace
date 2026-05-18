//! Alias / pointer-provenance categorization for memory accesses.
//!
//! Each `LOAD` / `STORE` instruction can carry an optional
//! [`AliasCategory`] tag describing what kind of memory it touches.
//! Downstream optimization passes consult the tag to decide whether the
//! access is safe to fold, propagate through, or eliminate:
//!
//! * `Stack`, `Heap`, `Static`, `Unknown` — passes apply their current
//!   conservative behavior unchanged.
//! * `Mmio` and `Volatile` — passes must treat the access as opaque:
//!   never propagate a constant past it, never eliminate it even if it
//!   appears dead.
//!
//! The metadata is **additive**: existing IR shape, golden text dumps,
//! and printer output are unaffected. `None` (the default) preserves
//! pre-existing pass behavior.
//!
//! Categorization is performed at lift time (or shortly after, in
//! `unlace_passes::alias_categorize`) using:
//!
//! | Category | Heuristic                                                              |
//! |----------|------------------------------------------------------------------------|
//! | `Stack`  | base is RSP/RBP / arch-stack-register                                  |
//! | `Static` | constant address falls inside a known `.data`/`.bss`/`.rodata` section |
//! | `Heap`   | base flows from a recognised allocator call (malloc/calloc/realloc …) |
//! | `Mmio`   | constant address in a known MMIO range (per-arch, off by default)      |
//! | `Volatile` | explicit DWARF/PDB `volatile` qualifier                              |
//! | `Unknown`  | everything else                                                      |

use std::sync::atomic::{AtomicU64, Ordering};

/// Pointer-provenance / aliasing category for a memory access.
///
/// See module docs for the categorization heuristics and the optimizer
/// barrier semantics.
#[derive(
    Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, serde::Serialize, serde::Deserialize,
)]
pub enum AliasCategory {
    /// Stack-relative: base is the architectural stack/frame pointer.
    Stack,
    /// Heap: address flows from a recognised allocator call.
    Heap,
    /// Static storage: address lies in `.data`, `.bss`, or `.rodata`.
    Static,
    /// Memory-mapped IO. Reads/writes must not be reordered or removed
    /// even when they look algebraically dead. Default heuristic is
    /// off; opt-in via per-arch MMIO ranges in the categorizer.
    Mmio,
    /// Explicit `volatile` qualifier from DWARF / PDB / source-level
    /// hint. Same preservation rules as `Mmio`.
    Volatile,
    /// Could not be classified. Optimizers fall back to their existing
    /// conservative behavior.
    Unknown,
}

impl AliasCategory {
    /// `true` for categories that the optimizer must **not** propagate
    /// across or eliminate: `Mmio` and `Volatile`.
    pub const fn is_preserved(self) -> bool {
        matches!(self, Self::Mmio | Self::Volatile)
    }

    /// Short canonical lowercase name (`"stack"`, `"heap"`, …). Used
    /// only by quality / debug renderers; not part of the IR text dump.
    pub const fn name(self) -> &'static str {
        match self {
            Self::Stack => "stack",
            Self::Heap => "heap",
            Self::Static => "static",
            Self::Mmio => "mmio",
            Self::Volatile => "volatile",
            Self::Unknown => "unknown",
        }
    }
}

/// Global counter incremented by passes every time they decline to fold,
/// propagate through, or eliminate a memory access because its
/// [`AliasCategory`] is `Mmio` or `Volatile`.
///
/// This is a quality / observability counter only; it is not used to
/// drive any optimization decision. Tests in the passes crate read it
/// to confirm a barrier actually fired.
///
/// Use [`record_preserved`] to bump; use [`preserved_count`] to read;
/// use [`reset_preserved`] (test-only) to zero between cases.
static VOLATILE_PRESERVED: AtomicU64 = AtomicU64::new(0);

/// Increment the global "volatile/MMIO access preserved" counter by one.
///
/// Called by `copy_prop`, `sccp`, and `dse` whenever they detect that an
/// optimization would have touched an MMIO/Volatile-tagged LOAD/STORE
/// and they backed off.
pub fn record_preserved() {
    VOLATILE_PRESERVED.fetch_add(1, Ordering::Relaxed);
}

/// Current value of the global preservation counter.
pub fn preserved_count() -> u64 {
    VOLATILE_PRESERVED.load(Ordering::Relaxed)
}

/// Reset the global preservation counter. Intended for tests only.
pub fn reset_preserved() {
    VOLATILE_PRESERVED.store(0, Ordering::Relaxed);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn preserved_categories_are_mmio_and_volatile() {
        assert!(AliasCategory::Mmio.is_preserved());
        assert!(AliasCategory::Volatile.is_preserved());
        assert!(!AliasCategory::Stack.is_preserved());
        assert!(!AliasCategory::Heap.is_preserved());
        assert!(!AliasCategory::Static.is_preserved());
        assert!(!AliasCategory::Unknown.is_preserved());
    }

    #[test]
    fn names_are_stable() {
        assert_eq!(AliasCategory::Stack.name(), "stack");
        assert_eq!(AliasCategory::Heap.name(), "heap");
        assert_eq!(AliasCategory::Static.name(), "static");
        assert_eq!(AliasCategory::Mmio.name(), "mmio");
        assert_eq!(AliasCategory::Volatile.name(), "volatile");
        assert_eq!(AliasCategory::Unknown.name(), "unknown");
    }

    #[test]
    fn preserved_counter_increments() {
        // Counter is process-global; check monotonicity only.
        let before = preserved_count();
        record_preserved();
        record_preserved();
        assert!(preserved_count() >= before + 2);
    }
}
