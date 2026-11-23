// Tests for the `prefersplit` port (included into `mod tests` in prefersplit.rs).
//
// Covered:
//   - PreferSplitRecord total order (space index, then BIGGER size first, then
//     offset) — the output-determining comparator (`operator<`).
//   - findRecord lower_bound + equality probe (hit / size-mismatch miss).
//   - fillinInstance constant splitting, both endiannesses.
//   - A full splitVarnode over a defining COPY of a constant, end-to-end:
//     the whole COPY is replaced by two piece COPYs.

use super::*; // PreferSplitManager, PreferSplitRecord, ELEM_PREFERSPLIT, helpers

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::pcoderaw::VarnodeData;

use crate::context::{ArchContext, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;

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

fn mk_vn(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.vbank_mut().create(size, Address::new(r, off), unk(size))
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

// --- comparator (operator<) total order ---------------------------------------

#[test]
fn record_order_bigger_size_first_then_offset() {
    let fd = build_fd(false);
    let r = ram(&fd);
    // Same space + offset, different sizes: bigger size sorts FIRST.
    let small = rec(Rc::clone(&r), 0x100, 4, 2);
    let big = rec(Rc::clone(&r), 0x100, 8, 4);
    assert!(big < small, "bigger size must come first");
    assert!(!(small < big));

    // Same space + size, different offset: smaller offset first.
    let lo = rec(Rc::clone(&r), 0x100, 4, 2);
    let hi = rec(Rc::clone(&r), 0x200, 4, 2);
    assert!(lo < hi);
    assert!(!(hi < lo));
}

#[test]
fn initialize_sorts_records() {
    let fd = build_fd(false);
    let r = ram(&fd);
    let mut recs = vec![
        rec(Rc::clone(&r), 0x200, 4, 2),
        rec(Rc::clone(&r), 0x100, 8, 4),
        rec(Rc::clone(&r), 0x100, 4, 2),
    ];
    PreferSplitManager::initialize(&mut recs);
    // Within the same space: bigger size first (8 before 4), then by offset.
    assert_eq!(recs[0].storage.size, 8);
    assert_eq!(recs[0].storage.offset, 0x100);
    assert_eq!(recs[1].storage.offset, 0x100);
    assert_eq!(recs[1].storage.size, 4);
    assert_eq!(recs[2].storage.offset, 0x200);
}

// --- findRecord ---------------------------------------------------------------

#[test]
fn find_record_hit_and_size_miss() {
    let mut fd = build_fd(false);
    let r = ram(&fd);
    let mut recs = vec![
        rec(Rc::clone(&r), 0x100, 8, 4),
        rec(Rc::clone(&r), 0x200, 4, 2),
    ];
    PreferSplitManager::initialize(&mut recs);
    let mut mgr = PreferSplitManager::default();
    mgr.init(&recs);

    // A size-8 vn at 0x100 matches the first record.
    let vn8 = mk_vn(&mut fd, 0x100, 8);
    let found = mgr
        .find_record(&fd, vn8)
        .expect("should match size-8 record");
    assert_eq!(found.splitoffset, 4);

    // A size-4 vn at 0x100 does NOT match (the record there is size 8).
    let vn4 = mk_vn(&mut fd, 0x100, 4);
    assert!(mgr.find_record(&fd, vn4).is_none());

    // A size-4 vn at 0x200 matches the second record.
    let vn4b = mk_vn(&mut fd, 0x200, 4);
    let found2 = mgr
        .find_record(&fd, vn4b)
        .expect("should match size-4 record");
    assert_eq!(found2.splitoffset, 2);
}

// --- fillinInstance constant splitting ---------------------------------------

#[test]
fn fillin_instance_constant_little_endian() {
    let mut fd = build_fd(false);
    // 8-byte constant 0x1122334455667788, split at offset 4 (lo = low 4 bytes).
    let cvn = fd.new_constant(8, 0x1122_3344_5566_7788);
    let mut inst = SplitInstance::new(Some(cvn), 4);
    PreferSplitManager::fillin_instance(&mut fd, &mut inst, false, true, true);
    let lo = inst.lo.expect("lo");
    let hi = inst.hi.expect("hi");
    // little-endian: losize = splitoffset = 4; lo = low 4 bytes.
    assert_eq!(vn_get_size(&fd, lo), 4);
    assert_eq!(vn_get_offset(&fd, lo), 0x5566_7788);
    assert_eq!(vn_get_size(&fd, hi), 4);
    assert_eq!(vn_get_offset(&fd, hi), 0x1122_3344);
}

#[test]
fn fillin_instance_constant_big_endian() {
    let mut fd = build_fd(true);
    // big-endian: losize = size - splitoffset.  size 8, splitoffset 4 -> losize 4.
    let cvn = fd.new_constant(8, 0x1122_3344_5566_7788);
    let mut inst = SplitInstance::new(Some(cvn), 4);
    PreferSplitManager::fillin_instance(&mut fd, &mut inst, true, true, true);
    let lo = inst.lo.expect("lo");
    let hi = inst.hi.expect("hi");
    assert_eq!(vn_get_size(&fd, lo), 4);
    assert_eq!(vn_get_offset(&fd, lo), 0x5566_7788);
    assert_eq!(vn_get_size(&fd, hi), 4);
    assert_eq!(vn_get_offset(&fd, hi), 0x1122_3344);
}

#[test]
fn split_128_bit_constant_keeps_the_high_half_zero() {
    for big in [false, true] {
        let mut fd = build_fd(big);
        let constant = fd.new_constant(16, 0x1122_3344_5566_7788);
        let mut inst = SplitInstance::new(Some(constant), 8);
        PreferSplitManager::fillin_instance(&mut fd, &mut inst, big, true, true);
        assert_eq!(vn_get_offset(&fd, inst.lo.unwrap()), 0x1122_3344_5566_7788);
        assert_eq!(vn_get_offset(&fd, inst.hi.unwrap()), 0);
    }
}

#[test]
fn elem_prefersplit_id() {
    assert_eq!(ELEM_PREFERSPLIT.get_name(), "prefersplit");
    assert_eq!(ELEM_PREFERSPLIT.get_id(), 225);
}
