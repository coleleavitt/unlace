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
        false,
        4,
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
fn arms_are_apart_only_when_every_path_between_them_repushes() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let entry = fd.bblocks_mut().new_block_basic(root);
    let push = fd.bblocks_mut().new_block_basic(root);
    let left = fd.bblocks_mut().new_block_basic(root);
    let right = fd.bblocks_mut().new_block_basic(root);
    let join = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(entry, push);
    fd.bblocks_mut().add_edge(push, left);
    fd.bblocks_mut().add_edge(push, right);
    fd.bblocks_mut().add_edge(left, join);
    fd.bblocks_mut().add_edge(right, join);
    assert!(apart(&fd, left, right, push));
    assert!(apart(&fd, right, left, push));
    assert!(!apart(&fd, left, join, push));
    assert!(!apart(&fd, left, left, push));
    assert!(!apart(&fd, left, push, push));
    fd.bblocks_mut().add_edge(join, push);
    assert!(
        apart(&fd, left, right, push),
        "a loop back through the push re-pushes"
    );
    assert!(
        !apart(&fd, left, right, entry),
        "the back edge reaches the other arm"
    );
    fd.bblocks_mut().add_edge(left, right);
    assert!(!apart(&fd, left, right, push));
    assert!(!apart(&fd, right, left, push));
}
