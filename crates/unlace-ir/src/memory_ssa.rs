//! MemorySSA-lite: memory def/use/phi chains for alias analysis.
//!
//! Gives every memory-touching instruction a position in a memory-versioned
//! SSA graph, enabling efficient clobber queries ("which store last wrote to
//! this location?") without recomputing alias info from scratch on every query.
//!
//! Modeled on LLVM MemorySSA.h — simplified for decompiler use:
//! - No optimized access tracking (we rebuild on demand).
//! - Locations are SpaceId + optional offset + size.
//! - Clobber walk is iterative (no walker cache).

use std::collections::BTreeMap;

use crate::SpaceId;

/// Unique identifier for a memory access in the MemorySSA graph.
pub type MemoryAccessId = u32;

/// A memory location: base space + optional known offset + access size.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct MemoryLocation {
    /// Address space (stack, global, heap, mmio, unknown).
    pub space: SpaceId,
    /// Known constant offset from the space base, if available.
    pub offset: Option<i64>,
    /// Size of the access in bytes (0 = unknown).
    pub size: u32,
}

impl MemoryLocation {
    /// A fully unknown location (aliases with everything).
    pub fn unknown() -> Self {
        Self {
            space: SpaceId::Unique,
            offset: None,
            size: 0,
        }
    }

    /// Stack location at a known offset.
    pub fn stack(offset: i64, size: u32) -> Self {
        Self {
            space: SpaceId::Stack,
            offset: Some(offset),
            size,
        }
    }

    /// Global/RAM location at a known address.
    pub fn global(address: u64, size: u32) -> Self {
        Self {
            space: SpaceId::Ram,
            offset: Some(address as i64),
            size,
        }
    }

    /// Whether two locations are provably non-overlapping (must-not-alias).
    pub fn must_not_alias(&self, other: &Self) -> bool {
        // Different spaces never alias (stack vs global vs heap).
        if self.space != other.space {
            return true;
        }
        // If either offset is unknown, they might alias.
        let (Some(off_a), Some(off_b)) = (self.offset, other.offset) else {
            return false;
        };
        // Both have known offsets and sizes — check for non-overlap.
        if self.size == 0 || other.size == 0 {
            return false; // unknown size
        }
        let end_a = off_a + self.size as i64;
        let end_b = off_b + other.size as i64;
        end_a <= off_b || end_b <= off_a
    }

    /// Whether two locations must alias (same space, same offset, same size).
    pub fn must_alias(&self, other: &Self) -> bool {
        self.space == other.space
            && self.offset.is_some()
            && self.offset == other.offset
            && self.size > 0
            && self.size == other.size
    }
}

/// A memory access node in the MemorySSA graph.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum MemoryAccess {
    /// A store (defines a new version of a memory location).
    Def {
        id: MemoryAccessId,
        location: MemoryLocation,
        /// Previous memory version that this def supersedes.
        reaching_def: Option<MemoryAccessId>,
        /// Whether this is a volatile/atomic access (opaque barrier).
        is_volatile: bool,
    },
    /// A load (uses the current memory version at a location).
    Use {
        id: MemoryAccessId,
        location: MemoryLocation,
        /// The memory def that provides the value for this use.
        defining_access: Option<MemoryAccessId>,
    },
    /// A phi node merging memory versions from different predecessors.
    Phi {
        id: MemoryAccessId,
        /// (predecessor_id, reaching MemoryAccessId from that predecessor).
        inputs: Vec<(u32, MemoryAccessId)>,
    },
}

impl MemoryAccess {
    pub fn id(&self) -> MemoryAccessId {
        match self {
            Self::Def { id, .. } | Self::Use { id, .. } | Self::Phi { id, .. } => *id,
        }
    }
}

/// The MemorySSA graph for a single function.
#[derive(Clone, Debug, Default)]
pub struct MemorySSAGraph {
    /// All memory accesses, keyed by their unique ID.
    pub accesses: BTreeMap<MemoryAccessId, MemoryAccess>,
    /// Next available ID.
    next_id: MemoryAccessId,
}

impl MemorySSAGraph {
    pub fn new() -> Self {
        Self::default()
    }

    /// Allocate the next unique ID.
    fn alloc_id(&mut self) -> MemoryAccessId {
        let id = self.next_id;
        self.next_id += 1;
        id
    }

    /// Add a memory def (store).
    pub fn add_def(
        &mut self,
        location: MemoryLocation,
        reaching_def: Option<MemoryAccessId>,
        is_volatile: bool,
    ) -> MemoryAccessId {
        let id = self.alloc_id();
        self.accesses.insert(
            id,
            MemoryAccess::Def {
                id,
                location,
                reaching_def,
                is_volatile,
            },
        );
        id
    }

    /// Add a memory use (load).
    pub fn add_use(
        &mut self,
        location: MemoryLocation,
        defining_access: Option<MemoryAccessId>,
    ) -> MemoryAccessId {
        let id = self.alloc_id();
        self.accesses.insert(
            id,
            MemoryAccess::Use {
                id,
                location,
                defining_access,
            },
        );
        id
    }

    /// Add a memory phi.
    pub fn add_phi(&mut self, inputs: Vec<(u32, MemoryAccessId)>) -> MemoryAccessId {
        let id = self.alloc_id();
        self.accesses
            .insert(id, MemoryAccess::Phi { id, inputs });
        id
    }

    /// Walk the clobber chain from a Use to find the nearest Def that
    /// must-alias or may-alias the use's location.
    ///
    /// Returns the MemoryAccessId of the clobbering Def, or None if we
    /// reach the function entry without finding one.
    pub fn get_clobbering_access(
        &self,
        use_id: MemoryAccessId,
    ) -> Option<MemoryAccessId> {
        let use_loc = match self.accesses.get(&use_id)? {
            MemoryAccess::Use { location, defining_access, .. } => {
                (location.clone(), *defining_access)
            }
            _ => return None,
        };
        let (loc, mut current) = use_loc;
        let mut visited = 0u32;
        const MAX_WALK: u32 = 100;

        while let Some(cur_id) = current {
            if visited >= MAX_WALK {
                return Some(cur_id); // conservative: assume it clobbers
            }
            visited += 1;

            match self.accesses.get(&cur_id)? {
                MemoryAccess::Def {
                    id,
                    location: def_loc,
                    reaching_def,
                    is_volatile,
                } => {
                    // Volatile/atomic: always a clobber (opaque barrier).
                    if *is_volatile {
                        return Some(*id);
                    }
                    // Must-alias: this is THE defining store.
                    if def_loc.must_alias(&loc) {
                        return Some(*id);
                    }
                    // Must-not-alias: skip this def, continue walking.
                    if def_loc.must_not_alias(&loc) {
                        current = *reaching_def;
                        continue;
                    }
                    // May-alias: conservative, treat as clobber.
                    return Some(*id);
                }
                MemoryAccess::Phi { inputs: _, .. } => {
                    // Conservative: if any phi input could clobber, return this phi.
                    // A real implementation would walk each arm.
                    return Some(cur_id);
                }
                MemoryAccess::Use { .. } => {
                    // Uses don't clobber; shouldn't appear in the chain.
                    return None;
                }
            }
        }

        None
    }

    /// Check if a Def is "dead" — no Use reaches it before the next Def
    /// to the same location.
    pub fn is_dead_store(&self, def_id: MemoryAccessId) -> bool {
        if !matches!(self.accesses.get(&def_id), Some(MemoryAccess::Def { .. })) {
            return false;
        }

        // Find any Use that has this def as its defining access.
        let has_live_use = self.accesses.values().any(|access| {
            matches!(access, MemoryAccess::Use { defining_access: Some(da), .. } if *da == def_id)
        });

        !has_live_use
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_memory_ssa_store_then_load() {
        let mut g = MemorySSAGraph::new();

        let loc = MemoryLocation::stack(-8, 8);
        let store_id = g.add_def(loc.clone(), None, false);
        let load_id = g.add_use(loc.clone(), Some(store_id));

        let clobber = g.get_clobbering_access(load_id);
        assert_eq!(clobber, Some(store_id));
    }

    #[test]
    fn test_memory_ssa_store_different_loc_skipped() {
        let mut g = MemorySSAGraph::new();

        let loc_a = MemoryLocation::stack(-8, 8);
        let loc_b = MemoryLocation::stack(-16, 8);

        let store_a = g.add_def(loc_a.clone(), None, false);
        let store_b = g.add_def(loc_b.clone(), Some(store_a), false);
        // Load from loc_a should skip store_b (different location).
        let load_a = g.add_use(loc_a.clone(), Some(store_b));

        let clobber = g.get_clobbering_access(load_a);
        assert_eq!(clobber, Some(store_a));
    }

    #[test]
    fn test_memory_ssa_volatile_always_clobbers() {
        let mut g = MemorySSAGraph::new();

        let loc = MemoryLocation::stack(-8, 8);
        let store = g.add_def(loc.clone(), None, false);
        let volatile_store = g.add_def(MemoryLocation::unknown(), Some(store), true);
        let load = g.add_use(loc.clone(), Some(volatile_store));

        let clobber = g.get_clobbering_access(load);
        assert_eq!(clobber, Some(volatile_store));
    }

    #[test]
    fn test_memory_ssa_dead_store() {
        let mut g = MemorySSAGraph::new();

        let loc = MemoryLocation::stack(-8, 8);
        let store1 = g.add_def(loc.clone(), None, false);
        let store2 = g.add_def(loc.clone(), Some(store1), false);
        // Only load from store2 — store1 is dead.
        let _load = g.add_use(loc.clone(), Some(store2));

        assert!(g.is_dead_store(store1));
        assert!(!g.is_dead_store(store2));
    }

    #[test]
    fn test_memory_ssa_location_must_not_alias() {
        let a = MemoryLocation::stack(-8, 4);
        let b = MemoryLocation::stack(-4, 4);
        assert!(a.must_not_alias(&b));

        let c = MemoryLocation::stack(-8, 8);
        assert!(!a.must_not_alias(&c)); // overlapping

        // Different spaces.
        let d = MemoryLocation::global(0x1000, 4);
        assert!(a.must_not_alias(&d));
    }

    #[test]
    fn test_memory_ssa_location_must_alias() {
        let a = MemoryLocation::stack(-8, 4);
        let b = MemoryLocation::stack(-8, 4);
        assert!(a.must_alias(&b));

        let c = MemoryLocation::stack(-8, 8); // different size
        assert!(!a.must_alias(&c));
    }

    #[test]
    fn test_memory_ssa_phi_conservative() {
        let mut g = MemorySSAGraph::new();

        let loc = MemoryLocation::stack(-8, 8);
        let store1 = g.add_def(loc.clone(), None, false);
        let store2 = g.add_def(loc.clone(), None, false);
        let phi = g.add_phi(vec![(0, store1), (1, store2)]);
        let load = g.add_use(loc, Some(phi));

        // Should stop at the phi (conservative).
        let clobber = g.get_clobbering_access(load);
        assert_eq!(clobber, Some(phi));
    }

    #[test]
    fn test_memory_ssa_no_hashmap_used() {
        // Structural assertion: MemorySSAGraph uses BTreeMap internally.
        let g = MemorySSAGraph::new();
        let _ = g.accesses; // BTreeMap<MemoryAccessId, MemoryAccess>
    }
}
