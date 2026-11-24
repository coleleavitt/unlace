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
mod tests {
    use super::*;

    fn die(tag: gimli::DwTag, depth: isize) -> DieSnap {
        DieSnap::new(tag, depth)
    }

    #[test]
    fn a_defined_function_reaches_its_types_and_children_only() {
        let mut dies = BTreeMap::new();
        let mut f = die(gimli::DW_TAG_subprogram, 1);
        f.low_pc = Some(0x1000);
        f.type_ref = Some(2);
        f.children = vec![3];
        dies.insert(1, f);
        dies.insert(2, die(gimli::DW_TAG_base_type, 1));
        dies.insert(3, die(gimli::DW_TAG_formal_parameter, 2));
        dies.insert(4, die(gimli::DW_TAG_structure_type, 1));
        let got = reachable_from_definitions(&dies);
        assert_eq!(got, BTreeSet::from([1, 2, 3]));
    }

    #[test]
    fn a_declaration_only_subprogram_is_not_a_root() {
        let mut dies = BTreeMap::new();
        let mut decl = die(gimli::DW_TAG_subprogram, 1);
        decl.declaration = true;
        decl.low_pc = Some(0x2000);
        decl.type_ref = Some(2);
        dies.insert(1, decl);
        dies.insert(2, die(gimli::DW_TAG_base_type, 1));
        assert!(reachable_from_definitions(&dies).is_empty());
    }

    #[test]
    fn a_static_global_reaches_its_type_but_a_local_variable_is_not_a_root() {
        let mut dies = BTreeMap::new();
        let mut global = die(gimli::DW_TAG_variable, 1);
        global.addr_location = Some(0x4000);
        global.type_ref = Some(2);
        dies.insert(1, global);
        let mut local = die(gimli::DW_TAG_variable, 2);
        local.type_ref = Some(3);
        dies.insert(4, local);
        dies.insert(2, die(gimli::DW_TAG_base_type, 1));
        dies.insert(3, die(gimli::DW_TAG_base_type, 2));
        assert_eq!(reachable_from_definitions(&dies), BTreeSet::from([1, 2]));
    }

    #[test]
    fn a_type_cycle_terminates() {
        let mut dies = BTreeMap::new();
        let mut f = die(gimli::DW_TAG_subprogram, 1);
        f.low_pc = Some(0x1000);
        f.type_ref = Some(2);
        dies.insert(1, f);
        let mut ptr = die(gimli::DW_TAG_pointer_type, 1);
        ptr.type_ref = Some(2);
        dies.insert(2, ptr);
        assert_eq!(reachable_from_definitions(&dies), BTreeSet::from([1, 2]));
    }
}
