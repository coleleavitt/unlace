use super::*;
use crate::context::{ArchContext, GlobalQuery};
use std::rc::Rc;
use unlace_base::space::{
    AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

fn function(word_size: u32) -> Funcdata {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        word_size,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    let mut arch = ArchContext::new(manager);
    let mut query = GlobalQuery::default();
    *query.flagbase.split(&Address::new(ram.clone(), 0x50000004)) = 0;
    *query.flagbase.split(&Address::new(ram.clone(), 0x50000000)) = varnode_flags::volatil;
    arch.global_query = Some(Rc::new(query));
    Funcdata::new(
        "read",
        "read",
        Rc::new(arch),
        Address::new(ram, 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap()
}
fn operation(
    fd: &mut Funcdata,
    opcode: OpCode,
    size: i32,
    inputs: &[VarnodeId],
) -> (OpId, VarnodeId) {
    let op = fd.new_op(inputs.len() as i32, fd.get_address().clone());
    fd.op_set_opcode_code(op, opcode);
    for (i, &vn) in inputs.iter().enumerate() {
        fd.op_set_input(op, vn, i as i32).unwrap();
    }
    let vn = fd.new_unique_out(size, op).unwrap();
    (op, vn)
}
fn fold(fd: &Funcdata, id: VarnodeId) -> Option<u64> {
    let mut budget = BUDGET;
    constant(fd, id, &mut Memo::new(), &mut BTreeSet::new(), &mut budget)
}
#[test]
fn constant_proof_respects_widths_unknowns_cycles_and_budget() {
    let mut fd = function(1);
    let a = fd.new_constant(4, 0xfffffff0);
    let b = fd.new_constant(4, 0x50000010);
    let (_, mut value) = operation(&mut fd, OpCode::CPUI_INT_ADD, 4, &[a, b]);
    assert_eq!(fold(&fd, value), Some(0x50000000));
    let neg = fd.new_constant(1, 0x80);
    let (_, sext) = operation(&mut fd, OpCode::CPUI_INT_SEXT, 8, &[neg]);
    assert_eq!(fold(&fd, sext), Some(0xffffffffffffff80));
    let unknown = fd.new_unique(4, None);
    let (_, unproved) = operation(&mut fd, OpCode::CPUI_INT_ADD, 4, &[value, unknown]);
    assert_eq!(fold(&fd, unproved), None);
    let (cycle, cyclic) = operation(&mut fd, OpCode::CPUI_COPY, 4, &[value]);
    fd.op_set_input(cycle, cyclic, 0).unwrap();
    assert_eq!(fold(&fd, cyclic), None);
    let mut sum = value;
    for _ in 0..63 {
        let four = fd.new_constant(4, 4);
        sum = operation(&mut fd, OpCode::CPUI_INT_ADD, 4, &[sum, four]).1;
    }
    assert_eq!(fold(&fd, sum), Some(0x50000000 + 63 * 4));
    for _ in 0..64 {
        value = operation(&mut fd, OpCode::CPUI_COPY, 4, &[value]).1;
    }
    assert_eq!(fold(&fd, value), None);
}
#[test]
fn only_proven_volatile_loads_are_kept_with_word_addresses_converted() {
    for word_size in [1, 2] {
        let mut fd = function(word_size);
        let space = fd.new_constant(4, 2);
        for (offset, expected) in [(0x50000000, true), (0x50000004, false)] {
            let ptr = fd.new_constant(4, offset / word_size as u64);
            let (load, value) = operation(&mut fd, OpCode::CPUI_LOAD, 4, &[space, ptr]);
            assert_eq!(is_volatile(&fd, load), expected);
            assert_eq!(fold(&fd, value), None);
        }
        let ptr = fd.new_unique(4, None);
        let (load, _) = operation(&mut fd, OpCode::CPUI_LOAD, 4, &[space, ptr]);
        assert!(!is_volatile(&fd, load));
        let other = fd.new_unique(4, None);
        let (copy, _) = operation(&mut fd, OpCode::CPUI_COPY, 4, &[other]);
        assert!(!is_volatile(&fd, copy));
    }
}
#[test]
fn a_second_load_of_one_address_in_an_instruction_is_a_reread() {
    let mut fd = function(1);
    let space = fd.new_constant(4, 2);
    let load = |fd: &mut Funcdata, offset: u64| {
        let ptr = fd.new_constant(4, offset);
        let (op, _) = operation(fd, OpCode::CPUI_LOAD, 4, &[space, ptr]);
        fd.obank_mut().mark_alive(op);
        op
    };
    let first = load(&mut fd, 0x50000000);
    let second = load(&mut fd, 0x50000000);
    let plain = load(&mut fd, 0x50000004);
    let memo = &mut Memo::new();
    assert!(!rereads(&fd, first, memo, |_, _| false));
    assert!(rereads(&fd, second, memo, |_, _| false));
    assert!(rereads(&fd, first, memo, |_, op| op == second));
    assert!(!rereads(&fd, plain, memo, |_, _| true));
}
