use std::cell::RefCell;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use super::*;
use crate::context::ArchContext;
use crate::ctree::StmtKind;

fn build_fd() -> Funcdata {
    let mut manage = AddrSpaceManager::new();
    manage.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manage
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    manage
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            8,
            1,
            2,
            addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    Funcdata::new("f", "f", glb, Address::new(ram, 0x1000), 0x10000000, 0x40).unwrap()
}

#[test]
fn callbacks_of_a_level_run_in_registration_order_on_the_tree() {
    let seen = Rc::new(RefCell::new(Vec::new()));
    let mut registry = TreeHookRegistry::default();
    assert!(registry.is_empty());
    for tag in ["first", "second"] {
        let seen = Rc::clone(&seen);
        registry.on_ctree(
            CMaturity::Rewritten,
            Box::new(move |tree, fd| {
                seen.borrow_mut()
                    .push((tag, fd.get_name().to_string(), tree.stmt_count()));
                tree.add_stmt(StmtKind::Opaque, None);
            }),
        );
    }
    assert!(!registry.is_empty());
    assert!(registry.callbacks(CMaturity::Built).is_empty());
    assert!(registry.callbacks(CMaturity::Final).is_empty());

    let fd = build_fd();
    let mut tree = CTree::new();
    for callback in registry.callbacks(CMaturity::Rewritten) {
        (callback.borrow_mut())(&mut tree, &fd);
    }
    assert_eq!(
        *seen.borrow(),
        vec![
            ("first", "f".to_string(), 0),
            ("second", "f".to_string(), 1)
        ]
    );
    assert_eq!(tree.stmt_count(), 2);
}

#[test]
fn levels_are_listed_in_rising_order() {
    assert!(CMaturity::LEVELS.windows(2).all(|pair| pair[0] < pair[1]));
    assert_eq!(CMaturity::LEVELS.len(), 4);
}
