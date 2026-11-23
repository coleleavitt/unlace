//! Tests moved out of `prefersplit` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `prefersplit` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use unlace_base::address::{Address, calc_mask};
    pub(super) use unlace_base::marshal::ElementId;
    pub(super) use unlace_base::space::{AddrSpace, spacetype};
    pub(super) use unlace_base::types::{int4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
    pub(super) use unlace_num::pcoderaw::VarnodeData;
}
use crate::context::{ArchContext, BlockId, OpId, TypeOp, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::prefersplit::*;
use module_scope::*;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

// Tests for the `prefersplit` port (included into `mod tests` in prefersplit.rs).
//
// Covered:
//   - PreferSplitRecord total order (space index, then BIGGER size first, then
//     offset) — the output-determining comparator (`operator<`).
//   - findRecord lower_bound + equality probe (hit / size-mismatch miss).
//   - fillinInstance constant splitting, both endiannesses.
//   - A full splitVarnode over a defining COPY of a constant, end-to-end:
//     the whole COPY is replaced by two piece COPYs.

use crate::prefersplit::*;

// PreferSplitManager, PreferSplitRecord, ELEM_PREFERSPLIT, helpers

use std::rc::Rc;

fn build_manager(big: bool) -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big,
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

fn build_fd(big: bool) -> Funcdata {
    let manage = build_manager(big);
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x1000_0000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn unk(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let r = ram(fd);
    let op = fd.new_op(inputs, Address::new(r, off));
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, 0, format!("{opc:?}")));
    op
}

fn mk_vn(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.vbank_mut().create(size, Address::new(r, off), unk(size))
}

fn mk_block(fd: &mut Funcdata) -> BlockId {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    fd.bblocks_mut().new_block_basic(root)
}

fn rec(space: Rc<AddrSpace>, off: u64, size: u32, splitoffset: int4) -> PreferSplitRecord {
    PreferSplitRecord {
        storage: VarnodeData {
            space: Some(space),
            offset: off,
            size,
        },
        splitoffset,
    }
}

#[test]
fn split_zero_extension_to_128_bits_keeps_the_high_half_zero() {
    for big in [false, true] {
        let mut fd = build_fd(big);
        let block = mk_block(&mut fd);
        let op = mk_op(&mut fd, 1, 0x10, OpCode::CPUI_INT_ZEXT);
        let constant = fd.new_constant(8, 0x1122_3344_5566_7788);
        fd.op_set_input(op, constant, 0).unwrap();
        let whole = mk_vn(&mut fd, 0x100, 16);
        fd.op_set_output(op, whole).unwrap();
        fd.op_insert_end(op, block);
        let mut mgr = PreferSplitManager::default();
        mgr.init(&[rec(ram(&fd), 0x100, 16, 8)]);
        mgr.split(&mut fd);
        let copies: Vec<_> = fd
            .bb_ops(block)
            .iter()
            .copied()
            .filter(|&op| !op_is_dead(&fd, op))
            .collect();
        assert_eq!(copies.len(), 2);
        for copy in copies {
            let output = op_get_out(&fd, copy).unwrap();
            let value = vn_get_offset(&fd, op_get_in(&fd, copy, 0));
            let high = vn_get_offset(&fd, output) == if big { 0x100 } else { 0x108 };
            assert_eq!(value, if high { 0 } else { 0x1122_3344_5566_7788 });
        }
    }
}

// --- end-to-end split over a defining COPY of a constant ----------------------

#[test]
fn split_defining_copy_of_constant() {
    let mut fd = build_fd(false);
    let r = ram(&fd);
    let bl = mk_block(&mut fd);

    // whole = COPY #0x1122334455667788  (the whole 8-byte value at 0x100)
    let copy = mk_op(&mut fd, 1, 0x10, OpCode::CPUI_COPY);
    let cin = fd.new_constant(8, 0x1122_3344_5566_7788);
    fd.op_set_input(copy, cin, 0).unwrap();
    let whole = mk_vn(&mut fd, 0x100, 8);
    fd.op_set_output(copy, whole).unwrap();
    fd.op_insert_end(copy, bl);

    // Record: split storage at ram:0x100 size 8 at offset 4.
    let mut recs = vec![rec(Rc::clone(&r), 0x100, 8, 4)];
    PreferSplitManager::initialize(&mut recs);
    let mut mgr = PreferSplitManager::default();
    mgr.init(&recs);

    mgr.split(&mut fd);

    // The original COPY (8-byte whole) is destroyed; two piece COPYs remain in
    // the block.  The whole varnode must now have no descendants/def.
    let ops = fd.bb_ops(bl);
    let copies: Vec<OpId> = ops
        .iter()
        .copied()
        .filter(|&o| op_code(&fd, o) == OpCode::CPUI_COPY && !op_is_dead(&fd, o))
        .collect();
    assert_eq!(copies.len(), 2, "two piece COPYs replace the whole COPY");
    // Each piece COPY writes a 4-byte piece.
    for &c in &copies {
        let out = op_get_out(&fd, c).expect("piece COPY has out");
        assert_eq!(vn_get_size(&fd, out), 4);
    }
    // The original COPY is dead.
    assert!(op_is_dead(&fd, copy));
}

/// A free (not yet input) whole register read by a COPY into another listed
/// register must split.  The reading branch consults `find_record` while the
/// walk runs, so the record table has to stay visible for the whole `split`.
#[test]
fn split_reading_copy_of_free_storage() {
    let mut fd = build_fd(false);
    let r = ram(&fd);
    let bl = mk_block(&mut fd);

    let copy = mk_op(&mut fd, 1, 0x10, OpCode::CPUI_COPY);
    let src = mk_vn(&mut fd, 0x100, 8);
    fd.op_set_input(copy, src, 0).unwrap();
    let dst = mk_vn(&mut fd, 0x200, 8);
    fd.op_set_output(copy, dst).unwrap();
    fd.op_insert_end(copy, bl);

    let mut recs = vec![rec(Rc::clone(&r), 0x100, 8, 4), rec(r, 0x200, 8, 4)];
    PreferSplitManager::initialize(&mut recs);
    let mut mgr = PreferSplitManager::default();
    mgr.init(&recs);

    mgr.split(&mut fd);

    let copies: Vec<OpId> = fd
        .bb_ops(bl)
        .iter()
        .copied()
        .filter(|&o| op_code(&fd, o) == OpCode::CPUI_COPY && !op_is_dead(&fd, o))
        .collect();
    assert_eq!(
        copies.len(),
        2,
        "a free 8-byte read through a listed storage splits"
    );
    assert!(op_is_dead(&fd, copy));
}
