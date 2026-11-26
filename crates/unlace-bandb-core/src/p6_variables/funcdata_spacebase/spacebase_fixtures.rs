// Hand-built `Funcdata` fixtures with a stack spacebase, shared by the unit tests of this
// crate and of unlace-bandb.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, SpacebaseSpace, UniqueSpace, VarnodeStorage,
    addrspace_flags, spacetype,
};
use unlace_base::types::int4;

use crate::context::{ArchContext, VarnodeId};
use crate::funcdata::Funcdata;

pub const SP_OFF: u64 = 0x20;
pub const SP_SIZE: int4 = 8;

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let regspc = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    m.insert_space(Rc::clone(&regspc)).unwrap();
    m.insert_space(Rc::new(SpacebaseSpace::new(
        "stack", 3, 8, &regspc, 1, true, false,
    )))
    .unwrap();
    m
}

#[doc(hidden)]
pub fn build_fd() -> Funcdata {
    let manage = build_manager();
    let regspc = Rc::clone(manage.get_space_by_name("register").unwrap());
    let stackspc = Rc::clone(manage.get_stack_space().unwrap());
    let sp_data = VarnodeStorage {
        space: Some(regspc),
        offset: SP_OFF,
        size: SP_SIZE as u32,
    };
    manage
        .add_spacebase_pointer(&stackspc, &sp_data, SP_SIZE, true)
        .unwrap();
    let glb = Rc::new(ArchContext::new(manage));
    let code = Rc::clone(glb.manage().get_space_by_name("register").unwrap());
    let entry = Address::new(code, 0x1000);
    Funcdata::new("func", "func", glb, entry, 0x1000_0000, 0x40).unwrap()
}

#[doc(hidden)]
pub fn reg_addr(fd: &Funcdata, off: u64) -> Address {
    Address::new(
        Rc::clone(
            fd.get_arch()
                .manage()
                .get_space_by_name("register")
                .unwrap(),
        ),
        off,
    )
}

#[doc(hidden)]
pub fn make_sp_in(fd: &mut Funcdata) -> VarnodeId {
    let vn = fd.new_varnode(SP_SIZE, &reg_addr(fd, SP_OFF), None);
    fd.set_input_varnode(vn).unwrap()
}
