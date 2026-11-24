//! Tests moved out of `funcdata_block` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `funcdata_block` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::block::{BlockKind, block_flags};
    pub(super) use crate::context::{BlockId, OpId, VarnodeId};
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::spacetype;
    pub(super) use unlace_base::types::{int4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::{ArchContext, BlockId, OpId, TypeOp};
use crate::funcdata::Funcdata;
use crate::funcdata_block::*;
use crate::op::pcodeop_flags;
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
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
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

/// The `ram` space as a clonable handle (captured once per test so it does
/// not re-borrow `fd` while building ops).
fn ramspace(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn addr(rs: &Rc<AddrSpace>, off: u64) -> Address {
    Address::new(Rc::clone(rs), off)
}

/// Append a terminating op of the given opcode (with the matching cached
/// flags) at address `pc` into basic block `bl`; returns the op.
fn term_op(fd: &mut Funcdata, bl: BlockId, opc: OpCode, flags: u32, pc: Address) -> OpId {
    let op = fd.obank_mut().create_at(1, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, flags, format!("{opc:?}")));
    // A block op is alive in the real pipeline (create_at starts it dead, the
    // flow lift `mark_alive`s on integration); mark it so `op_destroy`'s
    // `mark_dead` can move it off the alive list.
    fd.obank_mut().mark_alive(op);
    fd.bb_insert_op(op, bl, None);
    op
}

// =======================================================================
// VERIFIER adversarial tests (rport/w10-emptyblock-orform).
//
// Target the hunt-list spots most fragile for this item: the
// `BlockBasic::isComplex` statement-count BOUNDARY (`statement > 2`, the
// off-by-one that gates ruleBlockOr/whileDo), the `unblockedMulti`
// redundant-branch dereference, and the anti-mis-fold guard (a *complex*
// orblock must NOT be absorbed, i.e. `is_complex` genuinely rejects).
// =======================================================================

/// Append a COPY op at `pc` into `bb` whose output is a fresh, no-descend
/// `ram` Varnode at `out_off`.  In `BlockBasic::isComplex` such a calculation
/// (output with `hasNoDescend()`) counts as one statement.
fn copy_with_dead_out(fd: &mut Funcdata, bb: BlockId, pc: Address, out_off: u64) -> OpId {
    let rs = ramspace(fd);
    let op = fd.new_op(1, pc);
    fd.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
    let outvn = fd.new_varnode(4, &addr(&rs, out_off), None);
    fd.op_set_output(op, outvn).unwrap();
    fd.obank_mut().mark_alive(op);
    fd.bb_insert_op(op, bb, None);
    op
}

// =======================================================================
// VERIFIER adversarial tests (rport/w10-returnsplit-nodesplit): Funcdata::
// nodeSplit (return-block duplication per in-edge) + CloneBlockOps.
// =======================================================================

/// NS1 — `node_split` duplicates a multi-in-edge RETURN block per edge,
/// cloning its ops and pulling the split edge's MULTIEQUAL input out into a
/// COPY on the duplicate (C++ `Funcdata::nodeSplit` + `CloneBlockOps`).
/// Two predecessors flow into a return block whose RETURN reads a MULTIEQUAL;
/// splitting edge 0 moves predecessor `p0` onto a fresh duplicate carrying its
/// own (COPY-fed) RETURN, while the original keeps edge 1.
#[test]
fn ns1_node_split_return_block_clones_per_in_edge() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let p0 = fd.bblocks_mut().new_block_basic(root);
    let p1 = fd.bblocks_mut().new_block_basic(root);
    let ret = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(p0, ret);
    fd.bblocks_mut().add_edge(p1, ret);
    fd.set_basic_block_range(ret, &addr(&rs, 0x8000), &addr(&rs, 0x8010));

    // A value feeding each MULTIEQUAL slot (written in the predecessors).
    let c0 = copy_with_dead_out(&mut fd, p0, addr(&rs, 0x7f00), 0x40);
    let v0 = fd.obank().get(c0).unwrap().get_out().unwrap();
    let c1 = copy_with_dead_out(&mut fd, p1, addr(&rs, 0x7f04), 0x48);
    let v1 = fd.obank().get(c1).unwrap().get_out().unwrap();

    // MULTIEQUAL in `ret`: slot 0 <- v0 (from p0), slot 1 <- v1 (from p1).
    let in0 = fd.bblocks_ref().block(ret).get_in_index(p0);
    let in1 = fd.bblocks_ref().block(ret).get_in_index(p1);
    let mq = fd.new_op(2, addr(&rs, 0x8000));
    fd.op_set_opcode(mq, crate::typeop::type_op_for(OpCode::CPUI_MULTIEQUAL));
    let mq_out = fd.new_varnode(4, &addr(&rs, 0x50), None);
    fd.op_set_output(mq, mq_out).unwrap();
    fd.op_set_input(mq, v0, in0).unwrap();
    fd.op_set_input(mq, v1, in1).unwrap();
    fd.obank_mut().mark_alive(mq);
    fd.bb_insert_op(mq, ret, None);

    // RETURN reads the MULTIEQUAL output (and a code-ref like a real return).
    let retop = fd.new_op(1, addr(&rs, 0x8008));
    fd.op_set_opcode(retop, crate::typeop::type_op_for(OpCode::CPUI_RETURN));
    fd.op_set_input(retop, mq_out, 0).unwrap();
    fd.obank_mut().mark_alive(retop);
    fd.bb_insert_op(retop, ret, None);

    let n_before = fd.bblocks_get_size();
    // Split the edge from p0 (inedge index in0).
    fd.node_split(ret, in0).expect("node_split");
    // A duplicate block was created.
    assert_eq!(
        fd.bblocks_get_size(),
        n_before + 1,
        "nodeSplit adds the duplicate block"
    );
    // p0 now flows to the duplicate, not the original ret.
    let p0_out = fd.bblocks_ref().block(p0).get_out(0);
    assert_ne!(p0_out, ret, "p0 re-routed onto the duplicate");
    // The original ret keeps exactly the p1 in-edge.
    assert_eq!(fd.bblocks_ref().block(ret).size_in(), 1);
    assert_eq!(fd.bblocks_ref().block(ret).get_in(0), p1);
    // The duplicate has p0 as its sole in-edge and carries a cloned RETURN.
    assert_eq!(fd.bblocks_ref().block(p0_out).size_in(), 1);
    assert_eq!(fd.bblocks_ref().block(p0_out).get_in(0), p0);
    let dup_ret = fd.bb_op_tail(p0_out).expect("duplicate has ops");
    assert_eq!(
        fd.obank().get(dup_ret).unwrap().code(),
        OpCode::CPUI_RETURN,
        "the cloned tail is a RETURN"
    );
    // The original 2-input MULTIEQUAL had edge in0 removed -> 1 input -> COPY.
    assert_eq!(
        fd.obank().get(mq).unwrap().code(),
        OpCode::CPUI_COPY,
        "original MULTIEQUAL collapses to COPY after one edge is pulled out"
    );
}

/// NS3 — `CloneBlockOps` clones a generic calculation op verbatim (opcode,
/// inputs, constant sharing) — exercises the non-MULTIEQUAL `patch_inputs`
/// branch with no opcode/value special-casing.  An INT_ADD reading a written
/// value and a constant is duplicated into the split block with the same
/// opcode and the same constant input.
#[test]
fn ns3_clone_block_duplicates_generic_op_and_shares_constants() {
    let mut fd = build_fd();
    let rs = ramspace(&fd);
    let root = fd.bblocks_root_pub();
    let p0 = fd.bblocks_mut().new_block_basic(root);
    let p1 = fd.bblocks_mut().new_block_basic(root);
    let ret = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().add_edge(p0, ret);
    fd.bblocks_mut().add_edge(p1, ret);
    fd.set_basic_block_range(ret, &addr(&rs, 0x9000), &addr(&rs, 0x9010));

    // MULTIEQUAL output `m`, then an INT_ADD: t = m + 7 (constant), then a
    // RETURN reading t.  The INT_ADD is the generic op to clone.
    let c0 = copy_with_dead_out(&mut fd, p0, addr(&rs, 0x8f00), 0x60);
    let v0 = fd.obank().get(c0).unwrap().get_out().unwrap();
    let c1 = copy_with_dead_out(&mut fd, p1, addr(&rs, 0x8f04), 0x68);
    let v1 = fd.obank().get(c1).unwrap().get_out().unwrap();
    let in0 = fd.bblocks_ref().block(ret).get_in_index(p0);
    let in1 = fd.bblocks_ref().block(ret).get_in_index(p1);
    let mq = fd.new_op(2, addr(&rs, 0x9000));
    fd.op_set_opcode(mq, crate::typeop::type_op_for(OpCode::CPUI_MULTIEQUAL));
    let m = fd.new_varnode(4, &addr(&rs, 0x70), None);
    fd.op_set_output(mq, m).unwrap();
    fd.op_set_input(mq, v0, in0).unwrap();
    fd.op_set_input(mq, v1, in1).unwrap();
    fd.obank_mut().mark_alive(mq);
    fd.bb_insert_op(mq, ret, None);

    let add = fd.new_op(2, addr(&rs, 0x9004));
    fd.op_set_opcode(add, crate::typeop::type_op_for(OpCode::CPUI_INT_ADD));
    let t = fd.new_varnode(4, &addr(&rs, 0x78), None);
    fd.op_set_output(add, t).unwrap();
    let k7 = fd.new_constant(4, 7);
    fd.op_set_input(add, m, 0).unwrap();
    fd.op_set_input(add, k7, 1).unwrap();
    fd.obank_mut().mark_alive(add);
    fd.bb_insert_op(add, ret, None);

    let retop = fd.new_op(1, addr(&rs, 0x9008));
    fd.op_set_opcode(retop, crate::typeop::type_op_for(OpCode::CPUI_RETURN));
    fd.op_set_input(retop, t, 0).unwrap();
    fd.obank_mut().mark_alive(retop);
    fd.bb_insert_op(retop, ret, None);

    fd.node_split(ret, in0).expect("node_split");
    let dup = fd.bblocks_ref().block(p0).get_out(0);
    // The duplicate carries a cloned INT_ADD whose constant input is shared.
    let mut found_add = false;
    let mut op = fd.bb_op_head(dup);
    while let Some(o) = op {
        let oref = fd.obank().get(o).unwrap();
        if oref.code() == OpCode::CPUI_INT_ADD {
            found_add = true;
            let kin = oref.get_in(1).expect("clone INT_ADD second input");
            let kv = fd.vbank().get(kin).expect("const in");
            assert!(
                kv.is_constant(),
                "constant input shared verbatim on the clone"
            );
            assert_eq!(
                kv.get_offset(),
                7,
                "constant value preserved (no special-casing)"
            );
        }
        op = fd.obank().get(o).unwrap().basic_neighbours().1;
    }
    assert!(
        found_add,
        "the generic INT_ADD was cloned into the duplicate block"
    );
}
