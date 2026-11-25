//! (unlace `dwarfondemand`) The reachability set behind on-demand DWARF type import.
//!
//! The eager import materializes every DIE of every unit. On a multi-GB debug file
//! most of those types are never named by a function the decompiler reads. This
//! module computes the DIEs a function or a global can reach: the defined
//! subprograms (`DW_AT_low_pc`, not declaration-only) and the CU-level variables
//! with a static address are the roots, and the edges are the references a type
//! mapper follows (`DW_AT_type`, `DW_AT_specification`/`DW_AT_abstract_origin`,
//! `DW_AT_discr`) plus the DIE-tree children. The walk is iterative, so a deep or
//! cyclic type chain in a hostile file cannot exhaust the stack.

use std::collections::{BTreeMap, BTreeSet};

use super::DieSnap;

/// The offsets of every DIE reachable from a defined subprogram or a static
/// global in one unit's snapshot. Offsets that name no DIE are ignored.
pub(super) fn reachable_from_definitions(dies: &BTreeMap<usize, DieSnap>) -> BTreeSet<usize> {
    let mut seen = BTreeSet::new();
    let mut stack: Vec<usize> = dies
        .iter()
        .filter(|(_, d)| is_root(d))
        .map(|(&off, _)| off)
        .collect();
    while let Some(off) = stack.pop() {
        if !seen.insert(off) {
            continue;
        }
        let Some(die) = dies.get(&off) else { continue };
        stack.extend(die.type_ref);
        stack.extend(die.origin_ref);
        stack.extend(die.discr_ref);
        stack.extend(die.children.iter().copied());
    }
    seen
}

/// A root: a defined (not declaration-only) subprogram, or a CU-level variable
/// whose location is a static address.
fn is_root(die: &DieSnap) -> bool {
    match die.tag {
        gimli::DW_TAG_subprogram => die.low_pc.is_some() && !die.declaration,
        gimli::DW_TAG_variable => die.depth == 1 && die.addr_location.is_some(),
        _ => false,
    }
}

#[cfg(test)]
mod tests;
