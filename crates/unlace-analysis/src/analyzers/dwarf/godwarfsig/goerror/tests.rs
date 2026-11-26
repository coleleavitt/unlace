use super::*;

fn graph(table: &str) -> Facts {
    let mut facts = Facts::default();
    for (offset, tag, name, size, kind, target) in [
        (1, gimli::DW_TAG_base_type, "int", Some(8), Some(2), None),
        (2, gimli::DW_TAG_typedef, "error", None, None, Some(3)),
        (3, gimli::DW_TAG_typedef, "error", None, Some(20), Some(4)),
        (
            4,
            gimli::DW_TAG_typedef,
            "runtime.iface",
            None,
            None,
            Some(5),
        ),
        (
            5,
            gimli::DW_TAG_structure_type,
            "runtime.iface",
            Some(16),
            Some(25),
            None,
        ),
        (6, gimli::DW_TAG_member, "tab", None, None, Some(8)),
        (7, gimli::DW_TAG_member, "data", None, None, Some(11)),
        (8, gimli::DW_TAG_pointer_type, "", None, Some(22), Some(9)),
        (9, gimli::DW_TAG_typedef, table, None, None, Some(10)),
        (
            10,
            gimli::DW_TAG_structure_type,
            table,
            Some(32),
            Some(25),
            None,
        ),
        (
            11,
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
    facts.dies.get_mut(&1).unwrap().encoding = Some(gimli::DW_ATE_signed);
    facts.dies.get_mut(&5).unwrap().children = vec![6, 7];
    facts.dies.get_mut(&6).unwrap().data_member_location = Some(0);
    facts.dies.get_mut(&7).unwrap().data_member_location = Some(8);
    facts.dies.get_mut(&8).unwrap().name = format!("*{table}");
    facts
}

#[test]
fn observed_int_error_graphs_keep_table_and_data_separate() {
    for table in ["runtime.itab", "internal/abi.ITab"] {
        let facts = graph(table);
        assert!(facts.int_error_results(1, 2));
        assert!(
            !facts.int_error_results(1, 5),
            "storage alone does not establish error"
        );
        assert!(
            facts.scalar(2, &mut BTreeSet::new(), &mut 256).is_none(),
            "error is not a scalar or an accepted input"
        );
    }
}

#[test]
fn first_result_requires_actual_go_int() {
    for change in 0..5 {
        let mut facts = graph("runtime.itab");
        match change {
            0 => facts.extras.get_mut(&1).unwrap().kind = Some(6),
            1 => facts.dies.get_mut(&1).unwrap().name = "int64".into(),
            2 => facts.dies.get_mut(&1).unwrap().byte_size = Some(4),
            3 => facts.dies.get_mut(&1).unwrap().encoding = Some(gimli::DW_ATE_unsigned),
            _ => facts.extras.get_mut(&1).unwrap().invalid = true,
        }
        assert!(!facts.int_error_results(1, 2), "mutation {change}");
    }
}

#[test]
fn nominal_interface_and_runtime_layout_are_both_required() {
    for change in 0..9 {
        let mut facts = graph("runtime.itab");
        match change {
            0 => facts.extras.get_mut(&3).unwrap().kind = None,
            1 => facts.extras.get_mut(&3).unwrap().kind = Some(25),
            2 => facts.dies.get_mut(&2).unwrap().name = "main.Other".into(),
            3 => facts.dies.get_mut(&5).unwrap().name = "runtime.eface".into(),
            4 => facts.extras.get_mut(&5).unwrap().kind = Some(20),
            5 => facts.dies.get_mut(&5).unwrap().byte_size = Some(24),
            6 => facts.dies.get_mut(&4).unwrap().tag = gimli::DW_TAG_volatile_type,
            7 => facts.dies.get_mut(&5).unwrap().declaration = true,
            _ => facts.dies.get_mut(&3).unwrap().type_ref = Some(3),
        }
        assert!(!facts.int_error_results(1, 2), "mutation {change}");
    }
}

#[test]
fn interface_members_refuse_changed_or_incomplete_storage() {
    for change in 0..9 {
        let mut facts = graph("runtime.itab");
        match change {
            0 => facts.dies.get_mut(&6).unwrap().name = "_type".into(),
            1 => facts.dies.get_mut(&7).unwrap().data_member_location = Some(0),
            2 => facts.dies.get_mut(&6).unwrap().bit_size = Some(64),
            3 => facts.dies.get_mut(&7).unwrap().member_location_unknown = true,
            4 => facts.dies.get_mut(&7).unwrap().type_ref = None,
            5 => facts.dies.get_mut(&5).unwrap().children.reverse(),
            6 => facts.dies.get_mut(&5).unwrap().children.push(7),
            7 => facts.dies.get_mut(&7).unwrap().alignment = Some(4),
            _ => facts.extras.get_mut(&6).unwrap().invalid = true,
        }
        assert!(!facts.int_error_results(1, 2), "mutation {change}");
    }
}

#[test]
fn interface_pointers_require_the_observed_table_and_opaque_data() {
    for change in 0..10 {
        let mut facts = graph("internal/abi.ITab");
        match change {
            0 => facts.dies.get_mut(&8).unwrap().name = "*other.Table".into(),
            1 => facts.dies.get_mut(&8).unwrap().byte_size = Some(4),
            2 => facts.extras.get_mut(&8).unwrap().kind = None,
            3 => facts.dies.get_mut(&9).unwrap().type_ref = Some(9),
            4 => facts.dies.get_mut(&10).unwrap().byte_size = Some(24),
            5 => facts.extras.get_mut(&10).unwrap().kind = Some(20),
            6 => facts.dies.get_mut(&11).unwrap().type_ref = Some(1),
            7 => facts.dies.get_mut(&11).unwrap().name = "*void".into(),
            8 => facts.dies.get_mut(&11).unwrap().byte_size = Some(16),
            _ => facts.extras.get_mut(&11).unwrap().kind = Some(22),
        }
        assert!(!facts.int_error_results(1, 2), "mutation {change}");
    }
}
