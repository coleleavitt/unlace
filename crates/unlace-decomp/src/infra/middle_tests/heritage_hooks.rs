//! Tests moved out of `heritage` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `heritage` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::BlockId;
    pub(super) use crate::coreoptions::{LEVEL_FULL, LEVEL_GLOBAL, LEVEL_OFF};
    pub(super) use crate::overrides::Override;
    pub(super) use crate::restartlog::{RestartLog, UnlaceRestartReason};
    pub(super) use crate::varnode::varnode_flags;
    pub(super) use std::rc::Rc;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::error::UnlaceResult;
    pub(super) use unlace_base::space::{AddrSpace, spacetype};
    pub(super) use unlace_base::types::{int4, uint4, uintb};
}
use crate::context::ArchContext;
use crate::funcdata::Funcdata;
use crate::heritage::*;
use module_scope::*;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags,
};
use unlace_num::opcodes::OpCode as TOpCode;

// ---- fixtures ---------------------------------------------------------

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

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn raddr(fd: &Funcdata, off: u64) -> Address {
    Address::new(ram(fd), off)
}

/// Build a CFG of `n` basic blocks (indices 0..n in creation order) inside
/// the function's `bblocks` graph, wire `edges`, set reverse-post-order
/// indices to creation order, and run the forward-dominator pass.  Returns
/// the block ids (index i is `blocks[i]`).
///
/// The blocks are created in DFS/reverse-post order (the C++ `buildADT`
/// precondition); for the small acyclic/loop CFGs below, creation order IS
/// a valid reverse-post order with block 0 the start.
fn build_cfg(fd: &mut Funcdata, n: usize, edges: &[(usize, usize)]) -> Vec<BlockId> {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    let g = fd.bblocks_mut();
    let mut blocks = Vec::with_capacity(n);
    for _ in 0..n {
        blocks.push(g.new_block_basic(root));
    }
    for (i, &id) in blocks.iter().enumerate() {
        g.block_mut(id).set_index(i as int4);
    }
    for &(a, b) in edges {
        g.add_edge(blocks[a], blocks[b]);
    }
    g.calc_forward_dominator(root, &[blocks[0]]);
    blocks
}

fn entry_partition_fixture(big: bool, wide: bool) -> (Funcdata, Address) {
    let mut manager = build_manager();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        big,
        4,
        1,
        3,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    manager.insert_space(register.clone()).unwrap();
    let arch = Rc::new(ArchContext::new(manager));
    let entry = Address::new(
        arch.manage().get_space_by_name("ram").unwrap().clone(),
        0x1000,
    );
    let mut fd = Funcdata::new("func", "func", arch, entry, 0x10000000, 0x40).unwrap();
    let block = build_cfg(&mut fd, 1, &[])[0];
    let root = fd.bblocks_ref().root.unwrap();
    fd.bblocks_mut().set_start_block(root, block);
    let mut model = crate::fspec::ProtoModel::new(fd.get_arch().manage());
    model.build_param_list("standard").unwrap();
    let ranges = if wide {
        vec![(0x20, 8)]
    } else {
        vec![(0x20, 4), (0x24, 4)]
    };
    for (group, (offset, width)) in ranges.into_iter().enumerate() {
        let entry = crate::fspec::ParamEntry::seed(
            group as int4,
            crate::dtype::type_class::TYPECLASS_GENERAL,
            register.clone(),
            offset,
            width,
            1,
            0,
            0,
            true,
            false,
            model.input().get_entry(),
            fd.get_arch().manage(),
        )
        .unwrap();
        model.input_mut().push_entry(entry);
    }
    model.input_mut().finish_decode();
    fd.get_func_proto_mut().set_internal(
        Rc::new(model),
        Rc::new(crate::dtype::Datatype::new(
            0,
            crate::dtype::type_metatype::TYPE_VOID,
        )),
    );
    (fd, Address::new(register, 0x20))
}

// ---- Augmented dominator tree + phi placement (the SSA core) ----------

/// Map the computed `merge` block ids back to their indices, sorted.
fn merge_indices(h: &Heritage, fd: &Funcdata) -> Vec<int4> {
    let mut v: Vec<int4> = h
        .merge_points()
        .iter()
        .map(|&b| fd.bblocks_ref().block(b).get_index())
        .collect();
    v.sort_unstable();
    v
}

// ---- realized driver: runs cleanly on the empty IR (no Varnodes/ops) ---
//
// (The end-to-end SSA-construction parity — real reads linked to writes,
// phi placement — is the `heritage_b3` gate, which drives a real corpus
// function through ActionHeritage and diffs the post-heritage IR against
// the C++ B3 snapshot.  These unit checks pin the driver's empty-IR base
// case: it walks the spaces, builds an empty disjoint cover, places no
// phis, renames nothing, and advances `pass`.)

fn stack_fixture() -> (Funcdata, Rc<AddrSpace>) {
    let mut manager = build_manager();
    let ram = manager.get_space_by_name("ram").unwrap().clone();
    let stack = Rc::new(unlace_base::space::SpacebaseSpace::new(
        "stack", 3, 4, &ram, 0, true, false,
    ));
    manager.insert_space(stack.clone()).unwrap();
    manager
        .insert_space(Rc::new(unlace_base::space::IopSpace::new(4)))
        .unwrap();
    let arch = Rc::new(ArchContext::new(manager));
    let entry = Address::new(ram, 0x1000);
    let fd = Funcdata::new("func", "func", arch, entry, 0x10000000, 0x40).unwrap();
    (fd, stack)
}

fn overflowing_input_fixture() -> (Funcdata, Address) {
    let (mut fd, stack) = stack_fixture();
    let existing = fd.new_varnode(4, &Address::new(stack.clone(), 0), None);
    fd.set_input_varnode(existing).unwrap();
    (fd, Address::new(stack, 0xffff_fffa))
}

fn append_overflowing_read(fd: &mut Funcdata, block: BlockId, addr: &Address) {
    append_read(fd, block, addr, 10);
}

fn append_read(fd: &mut Funcdata, block: BlockId, addr: &Address, size: int4) {
    let op = fd.new_op(1, fd.get_address().clone());
    fd.op_set_opcode_code(op, unlace_num::opcodes::OpCode::CPUI_COPY);
    let input = fd.new_varnode(size, addr, None);
    fd.vbank_mut().get_mut(input).unwrap().set_active_heritage();
    fd.op_set_input(op, input, 0).unwrap();
    fd.new_unique_out(size, op).unwrap();
    fd.op_insert_end(op, block);
}

// ---- w10-proto-cluster verifier: processJoins join-space splitting ----
//
// The branch named "w10-proto-cluster" actually ports
// `Heritage::processJoins` and its helpers (heritage.cc:2068-2313). These
// adversarial tests target the fragile spots the hunt list flagged:
// (A) `split_join_level` size-accumulation / branch selection
//     (register-piece vs newUnique, the at-least-once `numinhalf`),
// (B) the 2-1 `nextlev` mapping with the `None` filler for unsplit pieces,
// (C) the snapshot-vs-live-set loop boundary of `process_joins` on an
//     empty join space (the documented no-op path).

use unlace_base::space::{JoinSpace, VarnodeStorage};

/// Manager with a join space (index after the std spaces) plus two distinct
/// 8-byte register-bearing pieces in `ram`.
fn build_manager_with_join() -> AddrSpaceManager {
    let mut m = build_manager(); // #(0) unique(1) ram(2)
    // JoinSpace at index 3; insert_space wires manager.joinspace.
    m.insert_space(Rc::new(JoinSpace::new(3, false))).unwrap();
    m
}

fn vstore(spc: &Rc<AddrSpace>, off: u64, size: u32) -> VarnodeStorage {
    VarnodeStorage {
        space: Some(Rc::clone(spc)),
        offset: off,
        size,
    }
}

fn build_fd_with_join() -> Funcdata {
    let manage = build_manager_with_join();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

// ---- w10-revisit-ssa: remove_revisited_markers adversarial tests --------
//
// These directly exercise `Heritage::remove_revisited_markers` (the
// re-heritage revisit, C++ heritage.cc:245), which is currently unreached on
// the datatest corpus (the upstream multi-pass `collect` machinery that
// populates `removevars` does not yet produce them in the Rust engine), so
// they are the only guards that the branch logic matches the C++.

use unlace_base::space::IopSpace;

/// Manager with constant / unique / iop / ram (the INDIRECT case needs the
/// iop space for `new_varnode_iop`).
fn build_manager_iop() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        3,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd_iop() -> Funcdata {
    let manage = build_manager_iop();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

/// Build a marker op of `code` in block `bl` whose output Varnode is a
/// size-`out_size` write at `out_addr`.  Returns (op, out_vn).  Inserted at
/// the end of the block.
fn make_marker(
    fd: &mut Funcdata,
    bl: BlockId,
    code: TOpCode,
    out_addr: &Address,
    out_size: int4,
    ninputs: int4,
) -> (crate::context::OpId, crate::context::VarnodeId) {
    let pc = raddr(fd, 0x2000);
    let op = fd.new_op(ninputs, pc);
    // `remove_revisited_markers` branches only on `op.code()`; resolve the
    // opcode through the generic `inst[]` resolution (works for COPY/INDIRECT/
    // MULTIEQUAL alike).
    fd.op_set_opcode_code(op, code);
    let out = fd
        .new_varnode_out(out_size, out_addr, op)
        .expect("marker out");
    // Wire every input slot to a fresh constant so op_unlink's per-input
    // opUnsetInput has a real link to clear (C++ markers always have their
    // inputs set before removeRevisitedMarkers runs).
    for slot in 0..ninputs {
        let c = fd.new_constant(out_size, slot as uintb);
        fd.op_set_input(op, c, slot).expect("marker input");
    }
    fd.op_insert(op, bl, None); // append at block end
    (op, out)
}

#[test]
fn entry_partition_preserves_locked_legal_wide_and_partial_inputs() {
    for (wide, locked) in [(true, false), (false, true)] {
        let (mut fd, addr) = entry_partition_fixture(true, wide);
        fd.get_func_proto_mut().set_input_lock(locked);
        let value = Heritage::new().new_entry_input(&mut fd, 8, &addr).unwrap();
        assert!(fd.vbank().get(value).unwrap().is_input());
        assert_eq!(fd.vbank().get(value).unwrap().get_size(), 8);
    }
    let (mut fd, addr) = entry_partition_fixture(true, false);
    let partial = fd.new_varnode(2, &addr, None);
    fd.set_input_varnode(partial).unwrap();
    assert!(Heritage::new().entry_partition(&fd, &addr, 8).is_none());
}

#[test]
fn entry_partition_preserves_a_partially_locked_prototype() {
    let (mut fd, addr) = entry_partition_fixture(true, false);
    for i in 0..2 {
        let piece = crate::fspec::ParameterPieces {
            addr: Address::new(addr.get_space().unwrap().clone(), 0x20 + i as u64 * 4),
            type_: Some(Rc::new(crate::dtype::Datatype::new(
                4,
                crate::dtype::type_metatype::TYPE_INT,
            ))),
            flags: if i == 1 {
                crate::fspec::parameter_pieces_flags::TYPELOCK
            } else {
                0
            },
        };
        fd.get_func_proto_mut().set_param(i, "param", &piece);
    }
    assert!(!fd.get_func_proto().is_input_locked());
    assert!(Heritage::new().entry_partition(&fd, &addr, 8).is_none());
}

#[test]
fn heritage_driver_runs_and_advances_pass() {
    let mut fd = build_fd();
    let _b = build_cfg(&mut fd, 2, &[(0, 1)]);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    assert_eq!(h.get_pass(), 0, "fresh heritage starts at pass 0");
    // Empty function: the driver walks the spaces (no free Varnodes),
    // places no phis, renames nothing, and bumps the pass counter.
    h.heritage(&mut fd, None).unwrap();
    assert_eq!(h.get_pass(), 1, "one heritage pass advances `pass` to 1");
    assert_eq!(
        fd.vbank().num_varnodes(),
        0,
        "empty function: no Varnodes created"
    );
}

#[test]
fn entry_partition_reuses_slots_and_replaces_an_illegal_wide_input() {
    for big in [false, true] {
        let (mut fd, addr) = entry_partition_fixture(big, false);
        let original = fd.new_varnode(8, &addr, None);
        fd.set_input_varnode(original).unwrap();
        let heritage = Heritage::new();
        let value = heritage.new_entry_input(&mut fd, 8, &addr).unwrap();
        assert_eq!(value, original);
        assert!(!fd.vbank().get(value).unwrap().is_input());
        let piece = fd
            .obank()
            .get(fd.vbank().get(value).unwrap().get_def().unwrap())
            .unwrap();
        assert_eq!(piece.code(), unlace_num::opcodes::OpCode::CPUI_PIECE);
        for slot in 0..2 {
            let vn = fd.vbank().get(piece.get_in(slot).unwrap()).unwrap();
            assert!(vn.is_input());
            assert_eq!(vn.get_size(), 4);
            assert_eq!(
                vn.get_addr().get_offset(),
                if big {
                    0x20 + slot as u64 * 4
                } else {
                    0x24 - slot as u64 * 4
                }
            );
        }
        let again = heritage.new_entry_input(&mut fd, 8, &addr).unwrap();
        assert!(fd.vbank().get(again).unwrap().is_written());
        assert_eq!(
            fd.vbank()
                .iter_def_flag(crate::varnode::varnode_flags::input)
                .count(),
            2
        );
    }
}

#[test]
fn entry_partition_declines_protected_whole_inputs_and_locked_slots() {
    for flags in [
        0,
        crate::varnode::varnode_flags::typelock,
        crate::varnode::varnode_flags::namelock,
        crate::varnode::varnode_flags::persist,
        crate::varnode::varnode_flags::addrtied,
    ] {
        let (mut fd, addr) = entry_partition_fixture(true, false);
        let whole = fd.new_varnode(8, &addr, None);
        fd.set_input_varnode(whole).unwrap();
        if flags == 0 {
            fd.vbank_mut().get_mut(whole).unwrap().set_write_mask();
        } else {
            fd.vbank_mut().get_mut(whole).unwrap().set_flags_pub(flags);
        }
        assert!(Heritage::new().entry_partition(&fd, &addr, 8).is_none());
        assert!(fd.vbank().get(whole).unwrap().is_input());
    }
    let (mut fd, addr) = entry_partition_fixture(true, false);
    let slot = fd.new_varnode(4, &addr, None);
    fd.set_input_varnode(slot).unwrap();
    fd.vbank_mut()
        .get_mut(slot)
        .unwrap()
        .set_flags_pub(crate::varnode::varnode_flags::typelock);
    assert!(Heritage::new().entry_partition(&fd, &addr, 8).is_none());
}

#[test]
fn guard_input_rewrites_existing_whole_and_tiles_complete_holes() {
    for big in [false, true] {
        let (mut fd, addr) = entry_partition_fixture(big, false);
        let whole = fd.new_varnode(8, &addr, None);
        fd.set_input_varnode(whole).unwrap();
        let mut heritage = Heritage::new();
        heritage.guard_input(&mut fd, &addr, 8, &[whole]);
        let value = fd.vbank().get(whole).unwrap();
        assert!(value.is_written());
        assert!(value.is_active_heritage());
        assert!(!value.is_write_mask());
        let block = fd
            .bblocks_ref()
            .block(fd.bblocks_ref().root.unwrap())
            .get_block(0);
        let copy = fd.new_op(1, fd.get_address().clone());
        fd.op_set_opcode(
            copy,
            typeop_skeleton(unlace_num::opcodes::OpCode::CPUI_COPY),
        );
        let read = fd.new_varnode(8, &addr, None);
        fd.vbank_mut().get_mut(read).unwrap().set_active_heritage();
        fd.op_set_input(copy, read, 0).unwrap();
        fd.new_unique_out(8, copy).unwrap();
        fd.op_insert_end(copy, block);
        heritage.domchild = vec![vec![]];
        heritage.rename(&mut fd).unwrap();
        assert_eq!(fd.obank().get(copy).unwrap().get_in(0), Some(whole));
        assert_eq!(
            fd.vbank()
                .iter_def_flag(crate::varnode::varnode_flags::input)
                .count(),
            2
        );
        let old_slots: Vec<_> = fd
            .vbank()
            .iter_def_flag(crate::varnode::varnode_flags::input)
            .collect();
        let tail_addr = Address::new(addr.get_space().unwrap().clone(), 0x28);
        let tail = fd.new_varnode(4, &tail_addr, None);
        fd.set_input_varnode(tail).unwrap();
        Heritage::new().guard_input(&mut fd, &addr, 12, &[tail]);
        let inputs: Vec<_> = fd
            .vbank()
            .iter_def_flag(crate::varnode::varnode_flags::input)
            .map(|id| fd.vbank().get(id).unwrap().get_size())
            .collect();
        assert_eq!(inputs, [4, 4, 4]);
        let final_op = fd
            .obank()
            .iter_alive()
            .filter(|&op| {
                fd.obank().get(op).unwrap().code() == unlace_num::opcodes::OpCode::CPUI_PIECE
            })
            .find(|&op| {
                fd.obank()
                    .get(op)
                    .unwrap()
                    .get_out()
                    .is_some_and(|vn| fd.vbank().get(vn).unwrap().get_size() == 12)
            })
            .unwrap();
        let final_piece = fd.obank().get(final_op).unwrap();
        let final_value = fd.vbank().get(final_piece.get_out().unwrap()).unwrap();
        assert!(final_value.is_written() && final_value.is_active_heritage());
        assert_eq!(final_piece.get_in(if big { 1 } else { 0 }), Some(tail));
        let pair = final_piece.get_in(if big { 0 } else { 1 }).unwrap();
        let pair_op = fd
            .obank()
            .get(fd.vbank().get(pair).unwrap().get_def().unwrap())
            .unwrap();
        assert_eq!(pair_op.get_in(0), Some(old_slots[if big { 0 } else { 1 }]));
        assert_eq!(pair_op.get_in(1), Some(old_slots[if big { 1 } else { 0 }]));
    }
}

#[test]
fn rename_returns_invalid_entry_input_errors_from_all_paths() {
    use unlace_num::opcodes::OpCode;
    for path in ["read", "child", "phi", "indirect"] {
        let (mut fd, addr) = overflowing_input_fixture();
        let blocks = build_cfg(&mut fd, 2, &[(0, 1)]);
        let mut h = Heritage::new();
        h.build_info_list(&fd);
        h.build_adt(&fd);
        let mut stack = VariableStack::new();
        match path {
            "read" | "child" => {
                append_overflowing_read(&mut fd, blocks[usize::from(path == "child")], &addr);
            }
            "phi" => {
                let op = fd.new_op(1, fd.get_address().clone());
                fd.op_set_opcode_code(op, OpCode::CPUI_MULTIEQUAL);
                let input = fd.new_varnode(10, &addr, None);
                fd.op_set_input(op, input, 0).unwrap();
                fd.new_unique_out(10, op).unwrap();
                fd.op_insert_begin(op, blocks[1]);
            }
            "indirect" => {
                append_overflowing_read(&mut fd, blocks[0], &addr);
                let effect = fd.bb_ops(blocks[0])[0];
                let indirect = fd.new_indirect_op(effect, &addr, 10, 0);
                let old = fd.obank().get(indirect).unwrap().get_in(0).unwrap();
                let constant = fd.new_constant(10, 0);
                fd.op_set_input(indirect, constant, 0).unwrap();
                fd.delete_varnode(old).unwrap();
                let output = fd.obank().get(indirect).unwrap().get_out().unwrap();
                stack.insert(addr.clone(), vec![output]);
            }
            _ => unreachable!(),
        }
        let error = h
            .rename_recurse(&mut fd, blocks[0], &mut stack)
            .unwrap_err();
        assert!(
            error
                .to_string()
                .contains("requested input stack[0xfffffffa,0x100000004)"),
            "{path}: {error}"
        );
    }
}

/// A later pass whose unaligned read joins two ranges heritaged apart,
/// refined at every byte by a frame byte copy into the second. Each earlier
/// MULTIEQUAL spans several of the new partitions; the one starting at the
/// copied byte used to be collected as an 8-byte write of a 1-byte range,
/// and that range's own byte-copy refinement indexed past its array.
#[test]
fn a_revisited_range_refined_across_old_phis_keeps_each_partition_whole() {
    use unlace_num::opcodes::OpCode;
    let mut manager = build_manager();
    let ram = manager.get_space_by_name("ram").unwrap().clone();
    let stack = Rc::new(unlace_base::space::SpacebaseSpace::new(
        "stack", 3, 4, &ram, 0, true, false,
    ));
    manager.insert_space(stack.clone()).unwrap();
    manager
        .insert_space(Rc::new(unlace_base::space::IopSpace::new(4)))
        .unwrap();
    let arch = Rc::new(ArchContext::new(manager));
    let entry = Address::new(ram, 0x1000);
    let mut fd = Funcdata::new("func", "func", arch, entry, 0x10000000, 0x40).unwrap();
    let blocks = build_cfg(&mut fd, 4, &[(0, 1), (0, 2), (1, 3), (2, 3)]);
    let at = |off: u64| Address::new(stack.clone(), 0xffff_ffd8 + off);
    let copy = |fd: &mut Funcdata,
                block: BlockId,
                input: crate::context::VarnodeId,
                out: &Address,
                size: int4| {
        let op = fd.new_op(1, fd.get_address().clone());
        fd.op_set_opcode_code(op, OpCode::CPUI_COPY);
        fd.op_set_input(op, input, 0).unwrap();
        fd.new_varnode_out(size, out, op).unwrap();
        fd.op_insert_end(op, block);
        op
    };
    let read = |fd: &mut Funcdata, block: BlockId, from: &Address, size: int4| {
        let input = fd.new_varnode(size, from, None);
        let op = fd.new_op(1, fd.get_address().clone());
        fd.op_set_opcode_code(op, OpCode::CPUI_COPY);
        fd.op_set_input(op, input, 0).unwrap();
        fd.new_unique_out(size, op).unwrap();
        fd.op_insert_end(op, block);
        op
    };
    for (block, base) in [(blocks[1], 1), (blocks[2], 3)] {
        for (slot, value) in [(0, base), (8, base + 1)] {
            let constant = fd.new_constant(8, value);
            copy(&mut fd, block, constant, &at(slot), 8);
        }
    }
    read(&mut fd, blocks[3], &at(0), 8);
    read(&mut fd, blocks[3], &at(8), 8);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    h.heritage(&mut fd, None).unwrap();
    let phis = |fd: &Funcdata| {
        fd.obank()
            .iter_alive()
            .filter(|&op| fd.obank().get(op).unwrap().code() == OpCode::CPUI_MULTIEQUAL)
            .count()
    };
    assert_eq!(phis(&fd), 2, "one phi per 8-byte slot");

    let unaligned = read(&mut fd, blocks[3], &at(3), 8);
    let byte = fd.new_constant(1, 5);
    let copied = copy(&mut fd, blocks[3], byte, &at(8), 1);
    fd.note_stack_byte_copy_op(copied);
    h.heritage(&mut fd, None).unwrap();

    for vn in fd.vbank().loc_space_ids(&stack) {
        let v = fd.vbank().get(vn).unwrap();
        if v.is_write_mask() || (!v.is_written() && v.has_no_descend()) {
            continue;
        }
        let (start, range) = h.globaldisjoint.find(v.get_addr()).expect("heritaged");
        let off = v.get_addr().get_offset() - start.get_offset();
        assert!(
            off + v.get_size() as u64 <= range.size as u64,
            "{:#x}+{} lies across the cover {:#x}+{}",
            v.get_addr().get_offset(),
            v.get_size(),
            start.get_offset(),
            range.size
        );
    }
    let input = fd.obank().get(unaligned).unwrap().get_in(0).unwrap();
    assert!(
        !fd.vbank().get(input).unwrap().is_free(),
        "the unaligned read is linked"
    );
}

// (A) fast-path: when cursize already equals the current piece size, the
// level pushes the Varnode unchanged plus a `None` filler and advances
// recnum by one — the 2-1 mapping must stay aligned across a 3-piece record
// whose middle position is consumed exactly.
#[test]
fn join_padding_is_a_constant_read_and_never_a_written_location() {
    for write in [false, true] {
        let mut fd = build_fd_with_join();
        let blocks = build_cfg(&mut fd, 1, &[]);
        let ram = ram(&fd);
        let constant = fd.get_arch().manage().get_constant_space().unwrap().clone();
        let pieces = [
            vstore(&ram, 0x40, 4),
            vstore(&constant, 0, 4),
            vstore(&ram, 0x50, 8),
        ];
        let join = fd.get_arch().manage().find_add_join(&pieces, 0).unwrap();
        let unified = join.get_unified();
        let address = Address::new(unified.space.clone().unwrap(), unified.offset);
        let h = Heritage::new();
        if write {
            let (_, value) = make_marker(&mut fd, blocks[0], TOpCode::CPUI_COPY, &address, 16, 1);
            h.split_join_write(&mut fd, value, &join);
        } else {
            let (op, _) = make_marker(
                &mut fd,
                blocks[0],
                TOpCode::CPUI_COPY,
                &Address::new(ram.clone(), 0x100),
                16,
                1,
            );
            let value = fd.new_varnode(16, &address, None);
            fd.op_set_input(op, value, 0).unwrap();
            h.split_join_read(&mut fd, value, &join);
        }
        let mut fields = Vec::new();
        let mut padding_read = false;
        for (_, id) in fd.obank().iter_all() {
            let op = fd.obank().get(id).unwrap();
            if let Some(out) = op.get_out() {
                let value = fd.vbank().get(out).unwrap();
                assert!(!value.is_constant());
                if write && matches!(value.get_addr().get_offset(), 0x40 | 0x50) {
                    fields.push((value.get_addr().get_offset(), value.get_size()));
                }
            }
            if !write && op.code() == TOpCode::CPUI_PIECE {
                padding_read |= (0..op.num_input()).any(|slot| {
                    fd.vbank().get(op.get_in(slot).unwrap()).is_some_and(|v| {
                        v.is_constant() && v.get_size() == 4 && v.get_offset() == 0
                    })
                });
            }
        }
        if write {
            fields.sort_unstable();
            assert_eq!(fields, vec![(0x40, 4), (0x50, 8)]);
        } else {
            assert!(padding_read);
        }
    }
}
