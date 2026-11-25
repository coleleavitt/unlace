use super::*;
use crate::context::{ArchContext, TypeOp};
use crate::op::pcodeop_flags;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

// A global-state phi entering a cleanup loop is bookkeeping for prior
// writes. Treating its outgoing COPY as a fresh computation made the
// LS free-list loop print an extra byte-global assignment on every trip.
#[test]
fn a_loop_carried_global_state_copy_is_not_a_moved_write() {
    let mut spaces = AddrSpaceManager::new();
    spaces.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    spaces
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    spaces.insert_space(Rc::clone(&ram)).unwrap();
    let arch = Rc::new(ArchContext::new(spaces));
    let mut data = Funcdata::new(
        "cleanup",
        "cleanup",
        arch,
        Address::new(Rc::clone(&ram), 0x1000),
        0x1000_0000,
        0x40,
    )
    .unwrap();
    let root = data.bblocks_ref().root.unwrap();
    let entry = data.bblocks_mut().new_block_basic(root);
    let cleanup = data.bblocks_mut().new_block_basic(root);
    let phi = data.new_op(2, Address::new(Rc::clone(&ram), 0x1000));
    data.op_set_opcode(
        phi,
        TypeOp::new(OpCode::CPUI_MULTIEQUAL, pcodeop_flags::marker, "MULTIEQUAL"),
    );
    for slot in 0..2 {
        let old = data.new_constant(1, slot as u64);
        data.op_set_input(phi, old, slot).unwrap();
    }
    let state = data.new_unique_out(1, phi).unwrap();
    data.op_insert(phi, entry, None);
    let copy = data.new_op(1, Address::new(Rc::clone(&ram), 0x1010));
    data.op_set_opcode(copy, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    data.op_set_input(copy, state, 0).unwrap();
    data.new_varnode_out(1, &Address::new(ram, 0x2000), copy)
        .unwrap();
    data.op_insert(copy, cleanup, None);
    assert!(!write_moves(&data, copy, state));
    // An independently computed byte, in the same block layout, really
    // would move its store onto an earlier path if merged with the global.
    data.op_set_opcode(phi, TypeOp::new(OpCode::CPUI_INT_ADD, 0, "INT_ADD"));
    assert!(write_moves(&data, copy, state));
}
