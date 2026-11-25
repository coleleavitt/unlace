use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::pcoderaw::VarnodeData;

use super::*;

fn manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn records(manage: &AddrSpaceManager) -> Vec<PreferSplitRecord> {
    let reg = Rc::clone(manage.get_space_by_name("register").unwrap());
    vec![PreferSplitRecord {
        storage: VarnodeData {
            space: Some(reg),
            size: 16,
            offset: 0,
        },
        splitoffset: 8,
    }]
}

#[test]
fn whole_register_and_each_piece_hit() {
    let manage = manager();
    let recs = records(&manage);
    let reg = Rc::clone(manage.get_space_by_name("register").unwrap());
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 0),
        16
    ));
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 0),
        8
    ));
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 8),
        8
    ));
}

#[test]
fn a_single_precision_scalar_inside_either_piece_hits() {
    let manage = manager();
    let recs = records(&manage);
    let reg = Rc::clone(manage.get_space_by_name("register").unwrap());
    // Little-endian `s0` is the low word of `d0`; big-endian is the high one.
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 0),
        4
    ));
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 4),
        4
    ));
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 8),
        4
    ));
    assert!(is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 12),
        4
    ));
}

#[test]
fn integer_and_unrelated_storage_miss() {
    let manage = manager();
    let recs = records(&manage);
    let reg = Rc::clone(manage.get_space_by_name("register").unwrap());
    // The next argument register is not part of the split container.
    assert!(!is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 0x10),
        8
    ));
    // An access that crosses the split is not a scalar the split creates.
    assert!(!is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 4),
        8
    ));
    // A register window that runs past the container.
    assert!(!is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 12),
        8
    ));
    assert!(!is_split_storage(
        &recs,
        &Address::new(Rc::clone(&reg), 0),
        20
    ));
}
