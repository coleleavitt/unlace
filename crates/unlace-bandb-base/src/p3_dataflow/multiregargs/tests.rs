use super::*;
use crate::dtype::{Datatype, type_class, type_metatype};
use crate::fspec::{ParamEntry, ProtoModel};
use std::rc::Rc;
use unlace_base::space::{AddrSpace, AddrSpaceManager, ConstantSpace};

fn prototype(
    big: bool,
    offsets: &[u64],
    width: int4,
) -> (FuncProto, AddrSpaceManager, Rc<AddrSpace>) {
    let ranges: Vec<_> = offsets.iter().map(|&off| (off, width)).collect();
    prototype_ranges(big, "register", &ranges)
}

#[doc(hidden)]
pub fn prototype_ranges(
    big: bool,
    name: &str,
    ranges: &[(u64, int4)],
) -> (FuncProto, AddrSpaceManager, Rc<AddrSpace>) {
    prototype_ranges_class(big, name, ranges, type_class::TYPECLASS_GENERAL)
}

fn prototype_ranges_class(
    big: bool,
    name: &str,
    ranges: &[(u64, int4)],
    class: type_class,
) -> (FuncProto, AddrSpaceManager, Rc<AddrSpace>) {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            big,
            8,
            1,
            1,
            0,
            0,
            0,
        )))
        .unwrap();
    let space = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        name,
        big,
        8,
        1,
        2,
        0,
        0,
        0,
    ));
    let space = if name == "register" {
        manager.get_space_by_name("register").unwrap().clone()
    } else {
        manager.insert_space(space.clone()).unwrap();
        space
    };
    let mut model = ProtoModel::new(&manager);
    model.build_param_list("standard").unwrap();
    for (i, &(offset, width)) in ranges.iter().enumerate() {
        let input = model.input_mut();
        let entry = ParamEntry::seed(
            i as int4,
            class,
            space.clone(),
            offset,
            width,
            1,
            0,
            0,
            true,
            false,
            input.get_entry(),
            &manager,
        )
        .unwrap();
        input.push_entry(entry);
    }
    model.input_mut().finish_decode();
    let mut proto = FuncProto::new();
    proto.set_internal(
        Rc::new(model),
        Rc::new(Datatype::new(0, type_metatype::TYPE_VOID)),
    );
    (proto, manager, space)
}

#[test]
fn complete_two_and_four_slot_partitions_in_both_byte_orders() {
    for big in [false, true] {
        for width in [4, 8] {
            for count in [2, 4] {
                let offsets: Vec<_> = (0..count).map(|i| 0x20 + (i * width) as u64).collect();
                let (proto, manager, space) = prototype(big, &offsets, width);
                let pieces =
                    input_partition(&proto, &manager, &Address::new(space, 0x20), count * width)
                        .unwrap();
                assert_eq!(pieces.iter().map(|p| p.offset).collect::<Vec<_>>(), offsets);
                assert!(pieces.iter().all(|p| p.size == width as u32));
            }
        }
    }
}

#[test]
fn one_entry_padding_gaps_and_partial_entries_are_not_complete_partitions() {
    for big in [false, true] {
        let (proto, manager, space) = prototype(big, &[0x20], 8);
        assert!(
            input_partition(&proto, &manager, &Address::new(space.clone(), 0x20), 16).is_none()
        );
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 8).is_none());
        let (proto, manager, space) = prototype(big, &[0x20, 0x28], 4);
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 12).is_none());
        let (proto, manager, space) = prototype(big, &[0x20, 0x24], 4);
        for (start, size) in [
            (0x1c, 12),
            (0x22, 6),
            (0x20, 6),
            (0x20, 10),
            (0x20, 0),
            (0x20, 128),
        ] {
            assert!(
                input_partition(&proto, &manager, &Address::new(space.clone(), start), size)
                    .is_none()
            );
        }
    }
}

#[test]
fn floating_register_aliases_are_not_integer_argument_partitions() {
    for big in [false, true] {
        let (proto, manager, space) = prototype_ranges_class(
            big,
            "register",
            &[(0x20, 4), (0x24, 4)],
            type_class::TYPECLASS_FLOAT,
        );
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 8).is_none());
    }
}

#[test]
fn mixed_size_unique_entries_are_sorted_by_address() {
    let (proto, manager, space) = prototype_ranges(false, "register", &[(0x24, 8), (0x20, 4)]);
    let pieces = input_partition(&proto, &manager, &Address::new(space, 0x20), 12).unwrap();
    assert_eq!(
        pieces
            .iter()
            .map(|p| (p.offset, p.size))
            .collect::<Vec<_>>(),
        vec![(0x20, 4), (0x24, 8)]
    );
}

#[test]
fn overlapping_aliases_data_spaces_and_too_many_slots_decline() {
    for big in [false, true] {
        let (proto, manager, space) =
            prototype_ranges(big, "register", &[(0x20, 4), (0x24, 4), (0x20, 8)]);
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 8).is_none());
        let (proto, manager, space) = prototype_ranges(big, "data", &[(0x20, 4), (0x24, 4)]);
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 8).is_none());
        let ranges: Vec<_> = (0..9).map(|i| (0x20 + i, 1)).collect();
        let (proto, manager, space) = prototype_ranges(big, "register", &ranges);
        assert!(input_partition(&proto, &manager, &Address::new(space, 0x20), 9).is_none());
    }
}
