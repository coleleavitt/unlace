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
