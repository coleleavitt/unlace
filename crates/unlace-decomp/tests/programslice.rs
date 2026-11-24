//! Backward and forward program slices (`unlace_decomp::programslice`) over a small SSA chain:
//! `a = copy 1; b = a + 2; c = b + 3` plus an unrelated `d = copy 9`.

use std::collections::BTreeSet;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use unlace_decomp::context::{ArchContext, OpId, TypeOp, VarnodeId};
use unlace_decomp::dtype::{Datatype, type_metatype};
use unlace_decomp::funcdata::Funcdata;
use unlace_decomp::programslice::{SliceCriterion, backward_slice, forward_slice};
use unlace_decomp::varnode::{DefOpInfo, VarnodeBank};

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn unk(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn no_replace() -> impl FnMut(&mut VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_: &mut VarnodeBank, _: VarnodeId, _: VarnodeId| Ok(())
}

fn mk_op(fd: &mut Funcdata, off: u64, inputs: int4, opc: OpCode) -> OpId {
    let r = ram(fd);
    let pc = Address::new(r, off);
    let op = fd.obank_mut().create_at(inputs, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, 0, format!("{opc:?}")));
    op
}

fn new_vn(fd: &mut Funcdata, off: u64) -> VarnodeId {
    let r = ram(fd);
    fd.new_varnode(4, &Address::new(r, off), Some(unk(4)))
}

fn set_def(fd: &mut Funcdata, vn: VarnodeId, defop: OpId) -> VarnodeId {
    let seq = fd.obank().get(defop).unwrap().get_seq_num().clone();
    let info = DefOpInfo {
        id: defop,
        seqnum: seq,
    };
    let vn = fd.vbank_mut().set_def(vn, info, &mut no_replace()).unwrap();
    fd.obank_mut().get_mut(defop).unwrap().set_output(Some(vn));
    vn
}

fn wire(fd: &mut Funcdata, vn: VarnodeId, op: OpId, slot: int4) {
    fd.vbank_mut().add_descend(vn, op).unwrap();
    fd.obank_mut()
        .get_mut(op)
        .unwrap()
        .set_input(Some(vn), slot);
}

struct Chain {
    fd: Funcdata,
    op_a: OpId,
    op_b: OpId,
    op_c: OpId,
    op_d: OpId,
    a: VarnodeId,
    b: VarnodeId,
    c: VarnodeId,
    d: VarnodeId,
    k9: VarnodeId,
}

/// `a = copy k1; b = a + k2; c = b + k3; d = copy k9`.
fn build_chain() -> Chain {
    let mut fd = build_fd();

    let op_a = mk_op(&mut fd, 0x1000, 1, OpCode::CPUI_COPY);
    let k1 = new_vn(&mut fd, 0x100);
    wire(&mut fd, k1, op_a, 0);
    let a = new_vn(&mut fd, 0x200);
    let a = set_def(&mut fd, a, op_a);

    let op_b = mk_op(&mut fd, 0x1004, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, a, op_b, 0);
    let k2 = new_vn(&mut fd, 0x104);
    wire(&mut fd, k2, op_b, 1);
    let b = new_vn(&mut fd, 0x204);
    let b = set_def(&mut fd, b, op_b);

    let op_c = mk_op(&mut fd, 0x1008, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, b, op_c, 0);
    let k3 = new_vn(&mut fd, 0x108);
    wire(&mut fd, k3, op_c, 1);
    let c = new_vn(&mut fd, 0x208);
    let c = set_def(&mut fd, c, op_c);

    let op_d = mk_op(&mut fd, 0x1010, 1, OpCode::CPUI_COPY);
    let k9 = new_vn(&mut fd, 0x110);
    wire(&mut fd, k9, op_d, 0);
    let d = new_vn(&mut fd, 0x210);
    let d = set_def(&mut fd, d, op_d);

    Chain {
        fd,
        op_a,
        op_b,
        op_c,
        op_d,
        a,
        b,
        c,
        d,
        k9,
    }
}

#[test]
fn backward_slice_from_the_end_of_the_chain_stops_at_its_start() {
    let ch = build_chain();
    let slice = backward_slice(
        &ch.fd,
        SliceCriterion {
            op: ch.op_c,
            varnode: ch.c,
        },
    );
    let expected: BTreeSet<OpId> = [ch.op_a, ch.op_b, ch.op_c].into_iter().collect();
    assert_eq!(slice.ops, expected);
    assert!(slice.vars.contains(&ch.a));
    assert!(slice.vars.contains(&ch.b));
    assert!(!slice.ops.contains(&ch.op_d));
    assert!(!slice.vars.contains(&ch.d));
    assert!(!slice.vars.contains(&ch.k9));
}

#[test]
fn forward_slice_from_the_start_reaches_every_reader_but_not_the_unrelated_chain() {
    let ch = build_chain();
    let slice = forward_slice(
        &ch.fd,
        SliceCriterion {
            op: ch.op_a,
            varnode: ch.a,
        },
    );
    assert!(slice.ops.contains(&ch.op_a));
    assert!(slice.ops.contains(&ch.op_b));
    assert!(slice.ops.contains(&ch.op_c));
    assert!(!slice.ops.contains(&ch.op_d));
    assert!(slice.vars.contains(&ch.b));
    assert!(slice.vars.contains(&ch.c));
    assert!(!slice.vars.contains(&ch.d));
}

#[test]
fn criterion_the_op_neither_reads_nor_defines_gives_an_empty_slice() {
    let ch = build_chain();
    let bad = SliceCriterion {
        op: ch.op_d,
        varnode: ch.b,
    };
    assert!(backward_slice(&ch.fd, bad).ops.is_empty());
    assert!(forward_slice(&ch.fd, bad).vars.is_empty());
}

#[test]
fn slices_are_read_only_and_leave_the_def_use_graph_unchanged() {
    let ch = build_chain();
    let _ = backward_slice(
        &ch.fd,
        SliceCriterion {
            op: ch.op_c,
            varnode: ch.c,
        },
    );
    let _ = forward_slice(
        &ch.fd,
        SliceCriterion {
            op: ch.op_a,
            varnode: ch.a,
        },
    );
    assert_eq!(
        ch.fd.vbank().get(ch.c).and_then(|v| v.get_def()),
        Some(ch.op_c)
    );
    assert_eq!(ch.fd.vbank().get(ch.a).unwrap().num_descend(), 1);
}
