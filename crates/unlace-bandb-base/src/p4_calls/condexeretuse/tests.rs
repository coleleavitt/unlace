//! Unit tests for the re-tested-condition use rule: the reachability walk and the repeated
//! `only_op_use` walk on a hand-built re-test merge.  The end-to-end behaviour
//! is `tests/stages/kuna-condexeretuse.toml`.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_base::types::int4;

use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};

use super::*;

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
    m.set_default_code_space(2).unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    Funcdata::new("f", "f", glb, Address::new(ram, 0x1000), 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn block(fd: &mut Funcdata) -> BlockId {
    let root = fd.bblocks_root_pub();
    fd.bblocks_mut().new_block_basic(root)
}

fn op(fd: &mut Funcdata, bl: BlockId, off: u64, opc: OpCode, ins: &[VarnodeId]) -> OpId {
    let r = ram(fd);
    let o = fd.new_op(ins.len() as int4, Address::new(r, off));
    fd.op_set_opcode(o, TypeOp::new(opc, 0, format!("{opc:?}")));
    for (i, &v) in ins.iter().enumerate() {
        fd.op_set_input(o, v, i as int4).unwrap();
    }
    fd.op_insert_end(o, bl);
    o
}

fn out(fd: &mut Funcdata, o: OpId, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.new_varnode_out(size, &Address::new(r, off), o).unwrap()
}

fn input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    let vn = fd.vbank_mut().create(
        size,
        Address::new(r, off),
        Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN)),
    );
    let mut keep = |_: &mut crate::varnode::VarnodeBank,
                    _: VarnodeId,
                    _: VarnodeId|
     -> unlace_base::error::KunaResult<()> { panic!("input collision") };
    fd.vbank_mut().set_input(vn, &mut keep).unwrap()
}

fn code(fd: &mut Funcdata, off: u64) -> VarnodeId {
    let r = ram(fd);
    fd.new_code_ref(&Address::new(r, off))
}

/// `cmp r0,#0; moveq r0,#7; b<eq> ...`: init `a` branches on `a0 == 0` to `b`
/// (writes 7) or straight to the merge `c`, which branches on the same
/// condition to `t` (taken, the execution that wrote 7) or `f`.
struct Retest {
    #[allow(dead_code)]
    merged: VarnodeId,
    b: BlockId,
    c: BlockId,
    t: BlockId,
    f: BlockId,
    cbranch: OpId,
}

fn retest(fd: &mut Funcdata) -> Retest {
    let (a, b, c, f, t) = (block(fd), block(fd), block(fd), block(fd), block(fd));
    fd.bblocks_mut().add_edge(a, c);
    fd.bblocks_mut().add_edge(a, b);
    fd.bblocks_mut().add_edge(b, c);
    fd.bblocks_mut().add_edge(c, f);
    fd.bblocks_mut().add_edge(c, t);
    let a0 = input(fd, 0x20, 4);
    let zero = fd.new_constant(4, 0);
    let cmp = op(fd, a, 0x100, OpCode::CPUI_INT_EQUAL, &[a0, zero]);
    let cond = out(fd, cmp, 0x80, 1);
    let tgt = code(fd, 0x10c);
    op(fd, a, 0x104, OpCode::CPUI_CBRANCH, &[tgt, cond]);
    let seven = fd.new_constant(4, 7);
    let cp = op(fd, b, 0x108, OpCode::CPUI_COPY, &[seven]);
    let r7 = out(fd, cp, 0x60, 4);
    let phi = op(fd, c, 0x10c, OpCode::CPUI_MULTIEQUAL, &[a0, r7]);
    let merged = out(fd, phi, 0x68, 4);
    let tgt2 = code(fd, 0x200);
    let cbranch = op(fd, c, 0x110, OpCode::CPUI_CBRANCH, &[tgt2, cond]);
    Retest {
        merged,
        b,
        c,
        t,
        f,
        cbranch,
    }
}

#[test]
fn the_in_edge_fixes_the_out_block() {
    let mut fd = build_fd();
    let m = retest(&mut fd);
    assert_eq!(
        ConditionalExecution::forced_out_block(&fd, m.c, 1),
        Some(m.t)
    );
    assert_eq!(
        ConditionalExecution::forced_out_block(&fd, m.c, 0),
        Some(m.f)
    );
}

#[test]
fn a_complemented_retest_swaps_the_out_block() {
    let mut fd = build_fd();
    let m = retest(&mut fd);
    fd.obank_mut()
        .get_mut(m.cbranch)
        .unwrap()
        .set_flag(crate::op::pcodeop_flags::boolean_flip);
    assert_eq!(
        ConditionalExecution::forced_out_block(&fd, m.c, 1),
        Some(m.f)
    );
    assert_eq!(
        ConditionalExecution::forced_out_block(&fd, m.c, 0),
        Some(m.t)
    );
}

#[test]
fn reachability_takes_only_the_forced_edge_of_a_merge_it_enters() {
    let mut fd = build_fd();
    let m = retest(&mut fd);
    let reach = reachable_from(&fd, m.b).unwrap();
    assert!(reach.contains(&m.c) && reach.contains(&m.t) && !reach.contains(&m.f));
}

#[test]
fn reachability_gives_up_past_the_visit_cap() {
    let mut fd = build_fd();
    let first = block(&mut fd);
    let mut prev = first;
    for _ in 0..MAX_VISIT + 8 {
        let next = block(&mut fd);
        fd.bblocks_mut().add_edge(prev, next);
        prev = next;
    }
    assert!(reachable_from(&fd, first).is_none());
    let mut fd = build_fd();
    let first = block(&mut fd);
    let second = block(&mut fd);
    fd.bblocks_mut().add_edge(first, second);
    assert_eq!(reachable_from(&fd, first).map(|s| s.len()), Some(2));
}
