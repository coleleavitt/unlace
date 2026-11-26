use super::*;

/// `main.Shape` -> `main.Shape` (kind 20) -> `runtime.iface` {tab, data},
/// the chain Go's linker writes for an interface formal.
fn graph() -> Facts {
    let mut facts = Facts::default();
    for (offset, tag, name, size, kind, target) in [
        (1, gimli::DW_TAG_typedef, "main.Shape", None, None, Some(2)),
        (
            2,
            gimli::DW_TAG_typedef,
            "main.Shape",
            None,
            Some(20),
            Some(3),
        ),
        (
            3,
            gimli::DW_TAG_structure_type,
            "runtime.iface",
            Some(16),
            Some(25),
            None,
        ),
        (4, gimli::DW_TAG_member, "tab", None, None, Some(6)),
        (5, gimli::DW_TAG_member, "data", None, None, Some(9)),
        (
            6,
            gimli::DW_TAG_pointer_type,
            "*runtime.itab",
            None,
            Some(22),
            Some(7),
        ),
        (
            7,
            gimli::DW_TAG_typedef,
            "runtime.itab",
            None,
            None,
            Some(8),
        ),
        (
            8,
            gimli::DW_TAG_structure_type,
            "runtime.itab",
            Some(32),
            Some(25),
            None,
        ),
        (
            9,
            gimli::DW_TAG_pointer_type,
            "unsafe.Pointer",
            None,
            None,
            None,
        ),
    ] {
        let mut die = DieSnap::new(tag, 1);
        die.name = name.into();
        die.byte_size = size;
        die.type_ref = target;
        facts.dies.insert(offset, die);
        facts.extras.insert(
            offset,
            Extra {
                kind,
                ..Extra::default()
            },
        );
    }
    facts.dies.get_mut(&3).unwrap().children = vec![4, 5];
    facts.dies.get_mut(&4).unwrap().data_member_location = Some(0);
    facts.dies.get_mut(&5).unwrap().data_member_location = Some(8);
    facts
}

#[test]
fn a_nominal_interface_names_itself() {
    assert_eq!(graph().interface_input(1).as_deref(), Some("main.Shape"));
    assert_eq!(graph().interface_input(2).as_deref(), Some("main.Shape"));
}

#[test]
fn storage_alone_or_a_changed_chain_is_refused() {
    assert_eq!(graph().interface_input(3), None, "no interface-kind link");
    for change in 0..6 {
        let mut facts = graph();
        match change {
            0 => facts.extras.get_mut(&2).unwrap().kind = Some(25),
            1 => facts.dies.get_mut(&2).unwrap().name = "main.Other".into(),
            2 => facts.dies.get_mut(&3).unwrap().name = "runtime.eface".into(),
            3 => facts.dies.get_mut(&3).unwrap().children.reverse(),
            4 => facts.dies.get_mut(&9).unwrap().name = "*void".into(),
            _ => facts.dies.get_mut(&2).unwrap().type_ref = Some(1),
        }
        assert_eq!(facts.interface_input(1), None, "mutation {change}");
    }
}
