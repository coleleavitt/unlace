//! Tests moved out of `funcdata_op` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `funcdata_op` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, TypeOp, VarnodeId};
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::op::pcodeop_flags;
    pub(super) use crate::varnode::DefOpInfo;
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::AddrSpace;
    pub(super) use unlace_base::types::{int4, uint4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::{ArchContext, BlockId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata_merge::FuncdataMergeExt;
use crate::funcdata_op::*;
use module_scope::*;
use unlace_base::address::{Address, SeqNum};
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

// Tests for the `funcdata_op` op-manipulation primitives (included into the
// `mod tests` in funcdata_op.rs, hence plain `//` comments here).
//
// Covered:
//   - op creation / SeqNum (uniq) allocation order via `new_op`/`new_op_seq`.
//   - def-use link integrity after each input mutation primitive.
//   - dead-list discipline (`op_insert`/`op_uninsert`/`op_unlink`/`op_destroy`).
//   - block-relative insertion ordering invariants (MULTIEQUAL-first /
//     INDIRECT-immediately-before / branch-last).
//   - boolean-flip list tracing (`op_flip_in_place_test`).
//   - scans (`get_first_return_op`, `find_primary_branch`).
//   - control-flow walks (`op_next_op`/`op_previous_op`/`op_target`).

use crate::funcdata_op::*;

// Funcdata, OpCode, pcodeop_flags, OpId/VarnodeId/TypeOp from funcdata_op

use std::rc::Rc;

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

fn ram_space(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn dt(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

/// Create an op with `inputs` slots and a given opcode at `off`, returning its id.
fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let ram = ram_space(fd);
    let op = fd.new_op(inputs, Address::new(ram, off));
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, opcode_flags(opc), format!("{opc:?}")));
    op
}

/// The minimal flag bits the ordering-invariant tests depend on (branch ops carry
/// `branch`, BRANCHIND included; everything else 0).
fn opcode_flags(opc: OpCode) -> unlace_base::types::uint4 {
    match opc {
        OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND => {
            pcodeop_flags::branch
        }
        OpCode::CPUI_RETURN => pcodeop_flags::returns,
        _ => 0,
    }
}

/// A fresh basic block under the bblocks root.
fn mk_block(fd: &mut Funcdata) -> BlockId {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    fd.bblocks_mut().new_block_basic(root)
}

fn mk_vn(fd: &mut Funcdata, off: u64) -> VarnodeId {
    let ram = ram_space(fd);
    fd.vbank_mut().create(4, Address::new(ram, off), dt(4))
}

/// A call-boundary stack value followed by a cursor PHI, with a warm crossing cache.
fn cursor_cache_fixture() -> (Funcdata, OpId, OpId, VarnodeId, VarnodeId, OpId) {
    use crate::fspec::FuncCallSpecs;
    use crate::varnode::varnode_flags;
    use unlace_base::space::{IopSpace, SpacebaseSpace};

    let mut manager = build_manager();
    manager.insert_space(Rc::new(IopSpace::new(3))).unwrap();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let stack = Rc::new(SpacebaseSpace::new("stack", 4, 8, &ram, 1, true, false));
    manager.insert_space(Rc::clone(&stack)).unwrap();
    let glb = Rc::new(ArchContext::new(manager));
    let mut fd = Funcdata::new(
        "walk",
        "walk",
        glb,
        Address::new(Rc::clone(&ram), 0x1000),
        0x10000000,
        0x100,
    )
    .unwrap();
    let entry = mk_block(&mut fd);
    let head = mk_block(&mut fd);
    let tail = mk_block(&mut fd);
    let exit = mk_block(&mut fd);
    for (index, block) in [entry, head, tail, exit].into_iter().enumerate() {
        fd.bblocks_mut().block_mut(block).set_index(index as int4);
    }
    fd.bblocks_mut().add_edge(entry, head);
    fd.bblocks_mut().add_edge(head, tail);
    fd.bblocks_mut().add_edge(head, exit);
    fd.bblocks_mut().add_edge(tail, head);

    let source = mk_op(&mut fd, 2, 0x1000, OpCode::CPUI_INT_XOR);
    let a = fd.new_constant(8, 0x1234);
    let b = fd.new_constant(8, 0x5678);
    fd.op_set_input(source, a, 0).unwrap();
    fd.op_set_input(source, b, 1).unwrap();
    let saved = fd.new_unique_out(8, source).unwrap();
    fd.op_insert_end(source, entry);

    let call = mk_op(&mut fd, 1, 0x1008, OpCode::CPUI_CALL);
    fd.op_set_opcode(call, crate::typeop::type_op_for(OpCode::CPUI_CALL));
    let target = fd.new_constant(8, 0x2000);
    fd.op_set_input(call, target, 0).unwrap();
    fd.op_insert_end(call, entry);
    fd.push_call_specs(FuncCallSpecs::new(
        call,
        Address::new(Rc::clone(&ram), 0x2000),
    ));

    let indirect = mk_op(&mut fd, 2, 0x1008, OpCode::CPUI_INDIRECT);
    fd.op_set_opcode(indirect, crate::typeop::type_op_for(OpCode::CPUI_INDIRECT));
    fd.op_set_input(indirect, saved, 0).unwrap();
    let iop = fd.new_varnode_iop(call);
    fd.op_set_input(indirect, iop, 1).unwrap();
    let affected = fd
        .new_varnode_out(8, &Address::new(stack, 0xfffffffffffffff0), indirect)
        .unwrap();
    fd.vbank_mut()
        .get_mut(affected)
        .unwrap()
        .set_flags_pub(varnode_flags::addrtied | varnode_flags::addrforce);
    fd.op_insert_before(indirect, call);

    let begin_op = mk_op(&mut fd, 1, 0x1010, OpCode::CPUI_COPY);
    let pointer = fd.new_constant(8, 0x4000);
    fd.op_set_input(begin_op, pointer, 0).unwrap();
    let begin = fd.new_unique_out(8, begin_op).unwrap();
    fd.op_insert_end(begin_op, entry);

    let phi = mk_op(&mut fd, 2, 0x1020, OpCode::CPUI_MULTIEQUAL);
    fd.op_set_opcode(phi, crate::typeop::type_op_for(OpCode::CPUI_MULTIEQUAL));
    let cursor = fd.new_unique_out(8, phi).unwrap();
    fd.op_insert_begin(phi, head);
    let increment = mk_op(&mut fd, 2, 0x1030, OpCode::CPUI_INT_ADD);
    let stride = fd.new_constant(8, 8);
    fd.op_set_input(increment, cursor, 0).unwrap();
    fd.op_set_input(increment, stride, 1).unwrap();
    let next = fd.new_unique_out(8, increment).unwrap();
    fd.op_insert_end(increment, tail);
    fd.op_set_input(phi, begin, 0).unwrap();
    fd.op_set_input(phi, next, 1).unwrap();
    fd.bb_set_order(entry);
    fd.set_high_level();
    let saved_high = fd.vbank().get(saved).unwrap().get_high().unwrap();
    let affected_high = fd.vbank().get(affected).unwrap().get_high().unwrap();
    fd.with_covermerge(|merge, data| {
        assert!(!crate::merge::MergeIntersect::intersection(
            data,
            merge.test_cache_mut(),
            saved_high,
            affected_high
        ));
        assert!(merge.test_cache_mut().affecting_ops_mut().is_populated());
    });
    (fd, call, phi, begin, cursor, indirect)
}

// --- comparison canonicalization / multiply distribution / CSE (helpers) ------

/// Make an op with `inputs` slots, opcode, and an EXPLICIT flag word (the
/// `glb->inst[opc]` opflags the W6 table would supply — set here so eval-type
/// reading guards like `get_eval_type` see the right `binary`/`booloutput` bits).
fn mk_op_flags(
    fd: &mut Funcdata,
    inputs: int4,
    off: u64,
    opc: OpCode,
    flags: unlace_base::types::uint4,
) -> OpId {
    let ram = ram_space(fd);
    let op = fd.new_op(inputs, Address::new(ram, off));
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, flags, format!("{opc:?}")));
    op
}

/// Attach a fresh output Varnode (at `off`, size 4) to an op via op_set_output.
fn give_out(fd: &mut Funcdata, op: OpId, off: u64) -> VarnodeId {
    let ram = ram_space(fd);
    let vn = fd.new_varnode(4, &Address::new(ram, off), Some(dt(4)));
    fd.op_set_output(op, vn).unwrap();
    op_out(fd, op)
}

fn op_out(fd: &Funcdata, op: OpId) -> VarnodeId {
    fd.obank().get(op).unwrap().get_out().unwrap()
}

/// Make a non-free (function-input) Varnode at (ram off, size 4) so it may carry
/// multiple descendants and is not `isFree()`.
fn mk_input(fd: &mut Funcdata, off: u64) -> VarnodeId {
    let vn = mk_vn(fd, off);
    fd.vbank_mut()
        .set_input(vn, &mut |_: &mut crate::varnode::VarnodeBank, _, _| Ok(()))
        .unwrap()
}

// --- VERIFIER adversarial tests for op_is_moveable -----------------------------
// These exercise op_is_moveable branches the 5 above leave uncovered:
// the LOAD `movingLoad` special path (op.cc:206-211 + the STORE/LOAD restriction
// arms at 252-265), and the run-off-block-end bail the Rust port added for the
// C++ do-while that has no terminating guard (op.cc:247-292).

// Helper: a 2-input INT_ADD `x + c` with an output at `out_off`, fully wired.
fn mk_add(fd: &mut Funcdata, off: u64, x: VarnodeId, cval: u64, out_off: u64) -> OpId {
    let op = mk_op_flags(fd, 2, off, OpCode::CPUI_INT_ADD, pcodeop_flags::binary);
    let c = fd.new_constant(4, cval);
    fd.op_set_input(op, x, 0).unwrap();
    fd.op_set_input(op, c, 1).unwrap();
    let _ = give_out(fd, op, out_off);
    op
}

#[test]
fn op_insert_after_skips_following_multiequals() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    // block: [copy0, multi1, copy2]
    let copy0 = mk_op(&mut fd, 0, 0x100, OpCode::CPUI_COPY);
    let multi1 = mk_op(&mut fd, 0, 0x110, OpCode::CPUI_MULTIEQUAL);
    let copy2 = mk_op(&mut fd, 0, 0x120, OpCode::CPUI_COPY);
    fd.op_insert(copy0, bl, None);
    fd.op_insert(multi1, bl, None);
    fd.op_insert(copy2, bl, None);
    // insert a non-MULTIEQUAL after copy0: skip forward over multi1, land before copy2.
    let newop = mk_op(&mut fd, 0, 0x130, OpCode::CPUI_INT_ADD);
    fd.op_insert_after(newop, copy0);
    assert_eq!(fd.bb_ops(bl), vec![copy0, multi1, newop, copy2]);
}

#[test]
fn call_position_cache_cannot_drop_a_loop_cursor_definition() {
    let (mut fd, call, phi, begin, cursor, _) = cursor_cache_fixture();
    let block = fd.obank().get(call).unwrap().get_parent().unwrap();
    let pad = mk_op(&mut fd, 1, 0x1004, OpCode::CPUI_COPY);
    let constant = fd.new_constant(8, 7);
    fd.op_set_input(pad, constant, 0).unwrap();
    fd.new_unique_out(8, pad).unwrap();
    fd.op_insert_before(pad, call);
    fd.bb_set_order(block);
    let values: Vec<_> = fd.vbank().iter_loc().collect();
    for value in values {
        crate::merge::MergeContext::vn_set_cover_dirty(&mut fd, value);
    }
    fd.with_covermerge(|merge, data| merge.merge_marker(data))
        .unwrap();
    let high = fd.vbank().get(cursor).unwrap().get_high();
    assert_eq!(fd.vbank().get(begin).unwrap().get_high(), high);
    for slot in 0..2 {
        let input = fd.obank().get(phi).unwrap().get_in(slot).unwrap();
        assert_eq!(fd.vbank().get(input).unwrap().get_high(), high);
    }
}

#[test]
fn cse_eliminate_list_collapses_same_block_match() {
    // Two identical INT_ADD(x, #1) ops in the same block; cseEliminateList keeps
    // the earlier one (lower seq order) and destroys the later, recording the
    // survivor's output.  The heritaged predicate returns true for both outputs.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let x = mk_input(&mut fd, 0x10);
    let bin = pcodeop_flags::binary;
    // op1 = INT_ADD(x, #1).
    let op1 = mk_op_flags(&mut fd, 2, 0x100, OpCode::CPUI_INT_ADD, bin);
    let c1a = fd.new_constant(4, 1);
    fd.op_set_input(op1, x, 0).unwrap();
    fd.op_set_input(op1, c1a, 1).unwrap();
    let out1 = give_out(&mut fd, op1, 0x40);
    fd.op_insert(op1, bl, None);
    // op2 = INT_ADD(x, #1) (a separate but functionally identical op).
    let op2 = mk_op_flags(&mut fd, 2, 0x104, OpCode::CPUI_INT_ADD, bin);
    let c1b = fd.new_constant(4, 1);
    fd.op_set_input(op2, x, 0).unwrap();
    fd.op_set_input(op2, c1b, 1).unwrap();
    let out2 = give_out(&mut fd, op2, 0x44);
    fd.op_insert(op2, bl, None);

    // Build the (hash, op) list the rule would (both hashes equal -> CSE match).
    let h1 = crate::op::get_cse_hash(fd.obank().get(op1).unwrap(), fd.vbank());
    let h2 = crate::op::get_cse_hash(fd.obank().get(op2).unwrap(), fd.vbank());
    assert_eq!(h1, h2, "identical ops hash equal");
    assert_ne!(h1, 0, "INT_ADD is cse-hashable");
    let mut list = vec![(h1, op1), (h2, op2)];
    let mut outlist: Vec<VarnodeId> = Vec::new();
    fd.cse_eliminate_list(&mut list, &mut outlist, |_, _| true)
        .unwrap();

    // op1 (earlier seq) survives; op2 is destroyed; its readers (none) repointed.
    assert_eq!(outlist, vec![out1], "survivor output recorded");
    assert!(
        fd.obank().get(op2).unwrap().is_dead(),
        "duplicate op destroyed"
    );
    assert!(
        !fd.obank().get(op1).unwrap().is_dead(),
        "dominator survives"
    );
    // out2 was fully freed by op_destroy -> destroyVarnode (C++ opDestroy frees
    // the output Varnode, not merely unsets it), so it is gone from the bank.
    assert!(
        fd.vbank().get(out2).is_none(),
        "destroyed op output is freed"
    );
}

#[test]
fn read_only_block_queries_keep_their_distinct_orderings() {
    let mut fd = build_fd();
    let block = mk_block(&mut fd);
    let other = mk_block(&mut fd);
    let empty = mk_block(&mut fd);
    let input = mk_vn(&mut fd, 0x100);
    let input = fd.set_input_varnode(input).unwrap();
    let mut ops = Vec::new();
    for (index, (parent, output)) in [
        (block, true),
        (block, true),
        (block, true),
        (other, true),
        (block, false),
    ]
    .into_iter()
    .enumerate()
    {
        let op = mk_op(&mut fd, 1, 0x1000 + index as u64, OpCode::CPUI_COPY);
        fd.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
        if output {
            fd.new_unique_out(4, op).unwrap();
        }
        fd.op_set_input(op, input, 0).unwrap();
        fd.op_insert(op, parent, None);
        ops.push(op);
    }
    for (&op, order) in ops.iter().zip([20, 15, 5, 1, 0]) {
        fd.obank_mut().get_mut(op).unwrap().set_order(order);
    }
    let flags: Vec<_> = fd
        .vbank()
        .iter_loc()
        .map(|id| fd.vbank().get(id).unwrap().get_flags())
        .collect();
    for _ in 0..3 {
        assert_eq!(
            fd.cse_find_in_block(ops[0], input, block, None),
            Some(ops[1])
        );
        assert_eq!(
            fd.cse_find_in_block(ops[0], input, block, Some(ops[2])),
            Some(ops[2])
        );
        assert_eq!(
            fd.cse_find_in_block(ops[0], input, block, Some(ops[4])),
            None
        );
        assert_eq!(fd.cse_find_in_block(ops[4], input, block, None), None);
        assert_eq!(
            fd.cse_find_in_block(ops[0], input, other, None),
            Some(ops[3])
        );
        assert_eq!(fd.cse_find_in_block(ops[0], input, empty, None), None);
        assert_eq!(fd.block_earliest_use(block, input), Some(ops[4]));
        assert_eq!(fd.block_earliest_use(other, input), Some(ops[3]));
        assert_eq!(fd.block_earliest_use(empty, input), None);
    }
    assert_eq!(
        flags,
        fd.vbank()
            .iter_loc()
            .map(|id| fd.vbank().get(id).unwrap().get_flags())
            .collect::<Vec<_>>()
    );
}
