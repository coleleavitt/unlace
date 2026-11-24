//! Tests moved out of `transform` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `transform` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use unlace_base::address::{Address, calc_mask};
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::spacetype;
    pub(super) use unlace_base::types::{Wrap, int4, uint4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::{ArchContext, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::transform::*;
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, IopSpace, UniqueSpace, addrspace_flags, spacetype,
};

// Tests for the `transform` placeholder-graph (included into `mod tests` in
// transform.rs, hence plain `//` comments here).
//
// Covered:
//   - LaneDescription geometry (uniform / two-lane / getBoundary / subset /
//     restriction / extension), matching the C++ exactly.
//   - LanedRegister parse/iter/mask semantics.
//   - placeholder-graph construction: every `new*`/`get*` factory, the
//     pieceMap/newVarnodes/newOps allocation order, the def/output/input
//     cross-links, preexistingGuard, getPiece dedup.
//   - apply() materialization on a synthetic pure-varnode transform: the
//     pieceMap-then-newVarnodes visit order produces ASCENDING create-indices on
//     the real IR (the load-bearing allocation order).
//   - the W6/W3-varnode seams return structured errors (op materialization,
//     piece materialization, input transform).

use crate::transform::*;

// --- test harness -------------------------------------------------------------

fn build_manager() -> AddrSpaceManager {
    build_manager_endian(false)
}

fn build_manager_endian(big_endian: bool) -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big_endian,
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

/// A fresh free varnode in ram at `off`, size `s`.
fn mk_vn(fd: &mut Funcdata, off: u64, s: int4) -> VarnodeId {
    let ram = ram_space(fd);
    fd.vbank_mut().create(s, Address::new(ram, off), dt(s))
}

/// A fresh free constant varnode of value `val`, size `s`.
fn mk_const(fd: &mut Funcdata, val: u64, s: int4) -> VarnodeId {
    fd.new_constant(s, val)
}

#[test]
fn apply_piece_materializes_varnode_and_transfers_consume() {
    // A non-constant piece (def==None) reaches createVarnodes → createReplacement
    // (piece) → newVarnode + transferVarnodeProperties, all live.
    let mut fd = build_fd();
    let vn = mk_vn(&mut fd, 0x100, 8);
    // Give the source a non-trivial consume mask so the transfer is observable.
    fd.vbank_mut()
        .get_mut(vn)
        .unwrap()
        .set_consume(0xffff_ffff_ffff_ffff);
    let ci = fd.vbank().get(vn).unwrap().get_create_index() as int4;
    let mut tm = TransformManager::new();
    let desc = LaneDescription::uniform(8, 2); // four real (non-constant) 2-byte lanes
    tm.new_split(&fd, vn, &desc);
    tm.apply(&mut fd)
        .expect("piece materialization runs to completion");

    // Lane 0 is the least-significant 2 bytes: a real ram Varnode at offset 0x100.
    let lane0 = TVarRef::Piece { key: ci, idx: 0 };
    let v0 = tm.var(lane0).get_replacement().expect("lane0 materialized");
    let rv = fd.vbank().get(v0).unwrap();
    assert!(!rv.is_constant());
    assert_eq!(rv.get_size(), 2, "lane is the 2-byte lane size");
    assert_eq!(
        rv.get_offset(),
        0x100,
        "little-endian lane 0 at the base offset"
    );
    // transferVarnodeProperties copies the (masked) consume bits.
    assert_eq!(
        rv.get_consume(),
        0xffff,
        "consume transferred & masked to the 2-byte lane"
    );
}

#[test]
fn split_lanes_keep_consumed_bits_in_both_byte_orders() {
    for big_endian in [false, true] {
        for mask in [
            0x0000_0000_ffff_ffff,
            0xffff_ffff_0000_0000,
            0x0123_4567_89ab_cdef,
        ] {
            let arch = Rc::new(ArchContext::new(build_manager_endian(big_endian)));
            let ram = Rc::clone(arch.manage().get_space_by_name("ram").unwrap());
            let mut fd = Funcdata::new(
                "lanes",
                "lanes",
                arch,
                Address::new(ram, 0x1000),
                0x10000000,
                0x40,
            )
            .unwrap();
            let vn = mk_vn(&mut fd, 0x100, 8);
            fd.vbank_mut().get_mut(vn).unwrap().set_consume(mask);
            let key = fd.vbank().get(vn).unwrap().get_create_index() as int4;
            let mut tm = TransformManager::new();
            tm.new_split(&fd, vn, &LaneDescription::uniform(8, 4));
            tm.apply(&mut fd).unwrap();
            for idx in 0..2 {
                let replacement = tm
                    .var(TVarRef::Piece { key, idx })
                    .get_replacement()
                    .unwrap();
                let lane = fd.vbank().get(replacement).unwrap();
                let storage_offset = if big_endian { (1 - idx) * 4 } else { idx * 4 };
                assert_eq!(lane.get_offset(), 0x100 + storage_offset as u64);
                assert_eq!(lane.get_consume(), (mask >> (idx * 32)) & 0xffff_ffff);
            }
        }
    }
}
