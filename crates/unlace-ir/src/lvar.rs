//! Logical variable (Lvar) data model — Batch 3 foundation slice.
//!
//! An [`Lvar`] is a *post-SSA* user-visible storage location: a thing that
//! will eventually become one C declaration in the printed source.
//! Multiple SSA varnodes typically map to one Lvar (e.g. all versions of
//! `rax` produced by a single C-level variable across blocks).
//!
//! This slice only defines the data model and a candidate-collection pass
//! (see `unlace_passes::lvar_collect`). Interference-graph construction,
//! coalescing, and naming are intentionally out of scope and will land in
//! follow-up Batch 3 slices.
//!
//! No `bitflags` crate dependency: [`LvarFlags`] is a hand-rolled `u32`
//! newtype with named-constant accessors. Keeps `unlace-ir`'s dep
//! surface unchanged.

use serde::{Deserialize, Serialize};

use crate::BlockId;
use crate::ssa::SsaVarnode;
use crate::types::TypeKind;

/// Stable identifier for an [`Lvar`]. Newtype around `u32`; assigned
/// densely from 0 by the producing pass (collector). Ordering is
/// deterministic by id so callers iterating `SsaFunction::lvars` see a
/// stable sequence across runs.
#[derive(
    Copy,
    Clone,
    Debug,
    PartialEq,
    Eq,
    Hash,
    PartialOrd,
    Ord,
    Serialize,
    Deserialize,
)]
pub struct LvarId(pub u32);

impl LvarId {
    pub const fn new(id: u32) -> Self {
        Self(id)
    }

    pub const fn as_u32(self) -> u32 {
        self.0
    }
}

impl std::fmt::Display for LvarId {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "lv{}", self.0)
    }
}

/// Where an [`Lvar`] physically lives.
///
/// The collector emits one variant per candidate-class. Later batches will
/// fold overlapping classes (e.g. a `Temp` whose live-range turns out to
/// alias a `Stack` slot) into a single canonical form.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, Serialize, Deserialize)]
pub enum LvarStorage {
    /// Recovered stack-frame slot at the given (signed) frame-pointer-
    /// relative byte offset.
    Stack { offset: i64 },
    /// Lives in a named architectural register (e.g. `"rax"`).
    Reg { name: String },
    /// Spilled to the stack — distinct from [`LvarStorage::Stack`] because
    /// spill slots are *compiler-introduced*, not user-declared locals.
    Spill { offset: i64 },
    /// SSA temporary that survived `variable_merge` without being
    /// coalesced into a register or stack slot.
    Temp { ssa_var: SsaVarnode },
    /// Function parameter at the given zero-based index.
    Param { idx: u32 },
    /// The function's return value pseudo-location.
    Return,
}

impl LvarStorage {
    /// Coarse storage-class label, useful for diagnostic summaries
    /// ("3 stack, 17 reg, 42 temp"). Always returns a `&'static str`.
    pub const fn class(&self) -> &'static str {
        match self {
            Self::Stack { .. } => "stack",
            Self::Reg { .. } => "reg",
            Self::Spill { .. } => "spill",
            Self::Temp { .. } => "temp",
            Self::Param { .. } => "param",
            Self::Return => "return",
        }
    }
}

/// Inclusive `[start_block, end_block]` live-range bracket. For the
/// candidate-collector slice this is a coarse approximation: the
/// definition block (start) and the highest-id observed use block (end).
/// The full liveness analysis lands in a later slice along with the
/// interference graph.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, Serialize, Deserialize)]
pub struct LiveRange {
    pub start_block: BlockId,
    /// Inclusive end block.
    pub end_block: BlockId,
}

impl LiveRange {
    pub const fn point(block: BlockId) -> Self {
        Self {
            start_block: block,
            end_block: block,
        }
    }

    /// Extend `self` so it covers `block` (no-op if already covered).
    pub fn extend_to(&mut self, block: BlockId) {
        if block < self.start_block {
            self.start_block = block;
        }
        if block > self.end_block {
            self.end_block = block;
        }
    }
}

/// Provenance of an [`Lvar`]'s identity — primarily a debugging /
/// printer hint. The collector slice only emits [`LvarSource::Inferred`];
/// later slices wire DWARF / signature / user overrides.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, Serialize, Deserialize)]
pub enum LvarSource {
    /// Synthesised purely from IR analysis.
    Inferred,
    /// Pulled from the binary's DWARF / debug info.
    FromDebug,
    /// Sourced from an inferred or stamped function signature.
    FromSig,
    /// User-overridden via configuration or interactive renaming.
    UserAssigned,
}

/// Hand-rolled bitset for [`Lvar::flags`].
///
/// Backing is a `u32`; named constants are exposed as `pub const`
/// associated values so callsites read `LvarFlags::ADDRESS_TAKEN` exactly
/// like the eventual `bitflags!`-based version. Keeping it manual avoids
/// adding a new workspace dependency for this foundation slice.
#[derive(
    Copy,
    Clone,
    Debug,
    Default,
    PartialEq,
    Eq,
    Hash,
    PartialOrd,
    Ord,
    Serialize,
    Deserialize,
)]
pub struct LvarFlags(pub u32);

impl LvarFlags {
    /// Empty / no flags set.
    pub const EMPTY: Self = Self(0);
    /// The variable's address was observed escaping (e.g. `&x` passed to
    /// a call). Blocks promotion to register storage.
    pub const ADDRESS_TAKEN: Self = Self(1 << 0);
    /// `volatile` — never elide loads/stores.
    pub const VOLATILE: Self = Self(1 << 1);
    /// Synthesised by the analyser (no user-source counterpart). Helps
    /// printers decide whether to surface or hide the declaration.
    pub const SYNTHETIC: Self = Self(1 << 2);
    /// Originates from DWARF / debug info.
    pub const FROM_DEBUG: Self = Self(1 << 3);
    /// Lvar represents the function's return value slot.
    pub const IS_RETURN: Self = Self(1 << 4);
    /// Lvar represents a formal parameter.
    pub const IS_PARAM: Self = Self(1 << 5);

    pub const fn empty() -> Self {
        Self::EMPTY
    }

    pub const fn bits(self) -> u32 {
        self.0
    }

    pub const fn contains(self, other: Self) -> bool {
        (self.0 & other.0) == other.0
    }

    pub fn insert(&mut self, other: Self) {
        self.0 |= other.0;
    }

    pub fn remove(&mut self, other: Self) {
        self.0 &= !other.0;
    }
}

impl std::ops::BitOr for LvarFlags {
    type Output = Self;
    fn bitor(self, rhs: Self) -> Self {
        Self(self.0 | rhs.0)
    }
}

impl std::ops::BitOrAssign for LvarFlags {
    fn bitor_assign(&mut self, rhs: Self) {
        self.0 |= rhs.0;
    }
}

/// A logical variable — one C declaration's worth of storage metadata.
///
/// Carried as `Vec<Lvar>` on [`crate::ssa::SsaFunction`] in deterministic
/// `id`-sorted order. Duplicates (e.g. two `Temp` candidates pointing at
/// the same SSA varnode) are allowed in this foundation slice; the
/// coalescer batch will fold them.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Lvar {
    /// Stable id, dense from 0.
    pub id: LvarId,
    /// Where the lvar physically lives.
    pub storage: LvarStorage,
    /// Coarse block-granular live range.
    pub live_range: LiveRange,
    /// User-facing C type. Defaults to [`TypeKind::Void`] until type
    /// recovery wires through.
    pub ty: TypeKind,
    /// User-visible name. `None` until the naming pass runs.
    pub name: Option<String>,
    /// Where the lvar came from (analysis vs DWARF vs user).
    pub source: LvarSource,
    /// Misc. flags (address-taken, volatile, synthetic, …).
    pub flags: LvarFlags,
}

impl Lvar {
    /// Construct a minimally-populated lvar — used by the collector pass.
    pub fn new(
        id: LvarId,
        storage: LvarStorage,
        live_range: LiveRange,
        ty: TypeKind,
        source: LvarSource,
        flags: LvarFlags,
    ) -> Self {
        Self {
            id,
            storage,
            live_range,
            ty,
            name: None,
            source,
            flags,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::BlockId;

    fn b(id: u32) -> BlockId {
        BlockId(id)
    }

    #[test]
    fn lvar_id_display_and_accessors() {
        let id = LvarId::new(7);
        assert_eq!(id.as_u32(), 7);
        assert_eq!(format!("{id}"), "lv7");
    }

    #[test]
    fn lvar_flags_bitops() {
        let mut f = LvarFlags::empty();
        assert_eq!(f.bits(), 0);
        f.insert(LvarFlags::ADDRESS_TAKEN);
        assert!(f.contains(LvarFlags::ADDRESS_TAKEN));
        assert!(!f.contains(LvarFlags::VOLATILE));

        let combined = LvarFlags::IS_PARAM | LvarFlags::SYNTHETIC;
        assert!(combined.contains(LvarFlags::IS_PARAM));
        assert!(combined.contains(LvarFlags::SYNTHETIC));
        assert!(!combined.contains(LvarFlags::ADDRESS_TAKEN));

        f.remove(LvarFlags::ADDRESS_TAKEN);
        assert_eq!(f.bits(), 0);
    }

    #[test]
    fn live_range_extension() {
        let mut lr = LiveRange::point(b(5));
        assert_eq!(lr.start_block, b(5));
        assert_eq!(lr.end_block, b(5));

        lr.extend_to(b(10));
        assert_eq!(lr.start_block, b(5));
        assert_eq!(lr.end_block, b(10));

        lr.extend_to(b(2));
        assert_eq!(lr.start_block, b(2));
        assert_eq!(lr.end_block, b(10));

        // No-op extension.
        lr.extend_to(b(7));
        assert_eq!(lr.start_block, b(2));
        assert_eq!(lr.end_block, b(10));
    }

    #[test]
    fn storage_class_labels() {
        assert_eq!(LvarStorage::Stack { offset: -8 }.class(), "stack");
        assert_eq!(
            LvarStorage::Reg {
                name: "rax".into()
            }
            .class(),
            "reg"
        );
        assert_eq!(LvarStorage::Spill { offset: -16 }.class(), "spill");
        assert_eq!(LvarStorage::Param { idx: 0 }.class(), "param");
        assert_eq!(LvarStorage::Return.class(), "return");
    }

    #[test]
    fn lvar_new_populates_defaults() {
        let lv = Lvar::new(
            LvarId::new(0),
            LvarStorage::Param { idx: 1 },
            LiveRange::point(b(0)),
            TypeKind::Int,
            LvarSource::FromSig,
            LvarFlags::IS_PARAM,
        );
        assert_eq!(lv.id, LvarId::new(0));
        assert_eq!(lv.name, None);
        assert_eq!(lv.ty, TypeKind::Int);
        assert!(lv.flags.contains(LvarFlags::IS_PARAM));
    }
}
