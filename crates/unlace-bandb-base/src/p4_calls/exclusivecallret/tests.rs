use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use super::*;
use crate::context::ArchContext;

fn build_fd() -> Funcdata {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        true,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    Funcdata::new("f", "f", glb, Address::new(ram, 0x1000), 0x10000000, 0x40).unwrap()
}

#[test]
fn call_return_arms_must_be_disjoint_and_share_the_producer() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let entry = fd.bblocks_mut().new_block_basic(root);
    let head = fd.bblocks_mut().new_block_basic(root);
    let left = fd.bblocks_mut().new_block_basic(root);
    let right = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(entry, head);
    fd.bblocks_mut().add_edge(head, left);
    fd.bblocks_mut().add_edge(head, right);
    let end = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(left, end);
    assert!(disjoint(&fd, end, right));
    assert!(disjoint(&fd, right, end));
    assert!(shared_producer(&fd, head, left, right));
    assert!(shared_producer(&fd, head, end, right));
    assert!(!shared_producer(&fd, entry, left, right));
    assert!(!disjoint(&fd, left, left));
    assert!(!disjoint(&fd, head, right));
    fd.bblocks_mut().add_edge(left, right);
    assert!(!disjoint(&fd, left, right));
    assert!(!disjoint(&fd, right, left));
}
