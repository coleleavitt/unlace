//! Tests moved out of `funcdata_varnode` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `funcdata_varnode` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::dtype::{Datatype, type_metatype};
    pub(super) use crate::fspec::effect_type;
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::varnode::{DefOpInfo, varnode_flags};
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::{AddrSpace, spacetype};
    pub(super) use unlace_base::types::{Wrap, int4, uint1, uint4, uintb, uintm};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata_varnode::*;
use crate::varnode::{DefOpInfo, VarnodeBank};
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_num::opcodes::OpCode;

/// Build an AddrSpaceManager with constant/unique/iop/fspec/ram spaces.
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

/// A no-op `replace_reads` callback (no equivalent varnode is expected in the
/// test scaffolding, which builds varnodes at distinct addresses).
fn no_replace() -> impl FnMut(&mut VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_: &mut VarnodeBank, _: VarnodeId, _: VarnodeId| -> UnlaceResult<()> { Ok(()) }
}

fn append_test_op(
    fd: &mut Funcdata,
    block: crate::context::BlockId,
    offset: u64,
    opcode: OpCode,
    flags: uint4,
) -> OpId {
    let op = fd.new_op(0, Address::new(ram(fd), offset));
    fd.op_set_opcode(op, TypeOp::new(opcode, flags, format!("{opcode:?}")));
    fd.op_insert_end(op, block);
    op
}

// --- finders: boundary cases -----------------------------------------

/// Make an input varnode at (addr,size) by creating a free one and flipping
/// it to input directly in the bank (bypasses the xref split-borrow, which
/// `setInputVarnode` needs and is the seam owner's — see module doc).
fn make_input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    let vn = fd.new_varnode(size, &Address::new(r, off), None);
    fd.vbank_mut().set_input(vn, &mut no_replace()).unwrap()
}

// --- totalReplace def-use rewiring -----------------------------------

/// Make a written varnode (output of a fresh op) so it can have multiple
/// descendants (free non-spacebase varnodes are limited to one).
fn make_written(fd: &mut Funcdata, off: u64, size: int4) -> (VarnodeId, OpId) {
    let r = ram(fd);
    let pc = Address::new(Rc::clone(&r), off);
    let defop = fd.obank_mut().create_at(1, pc);
    fd.obank_mut()
        .change_opcode(defop, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    let vn = fd.new_varnode(size, &Address::new(r, off), Some(unk(size)));
    // Promote vn to written (output of defop) via the bank set_def path.
    let seq = fd.obank().get(defop).unwrap().get_seq_num().clone();
    let info = DefOpInfo {
        id: defop,
        seqnum: seq,
    };
    let vn = fd.vbank_mut().set_def(vn, info, &mut no_replace()).unwrap();
    fd.obank_mut().get_mut(defop).unwrap().set_output(Some(vn));
    (vn, defop)
}

// =====================================================================
// VERIFIER (w10-doublemove): adversarial tests for combine_input_varnodes
// (funcdata_varnode.cc:383).  The ported body has NO porter unit test in
// this module, so these pin the C++-faithful behavior at the spots the
// hunt list flagged: the isInput / contiguity guards (and the partial-state
// they leave on the throw path), the little-endian contiguity arithmetic,
// and the PIECE-reader -> COPY collapse with the new combined input.
// =====================================================================

/// Build a 2-input PIECE op reading (vnhi, vnlo) and register it on both
/// operands' descend lists (mirrors how RuleDoubleOut would have wired it).
fn make_piece_reader(fd: &mut Funcdata, off: u64, vnhi: VarnodeId, vnlo: VarnodeId) -> OpId {
    let r = ram(fd);
    let pc = Address::new(r, off);
    let op = fd.obank_mut().create_at(2, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(OpCode::CPUI_PIECE, 0, "PIECE"));
    fd.vbank_mut().add_descend(vnhi, op).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_input(Some(vnhi), 0);
    fd.vbank_mut().add_descend(vnlo, op).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_input(Some(vnlo), 1);
    op
}

#[test]
fn synthetic_import_literals_survive_all_constructors_and_clones() {
    let mut context = ArchContext::new(build_manager());
    context.nullable_literal_values = Rc::new([0x402000].into_iter().collect());
    let ram = context.manage().get_space_by_name("ram").unwrap().clone();
    let address = Address::new(ram.clone(), 0x1000);
    let mut fd = Funcdata::new(
        "literal",
        "literal",
        Rc::new(context),
        address,
        0x10000000,
        0x40,
    )
    .unwrap();
    let constant_address = fd.get_arch().get_constant(0x402000);
    let a = fd.new_constant(8, 0x402000);
    let b = fd.new_varnode(8, &constant_address, None);
    let c = fd.new_code_ref(&Address::new(ram, 0x402000));
    for original in [a, b, c] {
        assert!(fd.vbank().get(original).unwrap().is_synthetic_literal());
        let cloned = fd.clone_varnode(original);
        assert!(fd.vbank().get(cloned).unwrap().is_synthetic_literal());
        let mut other = build_fd();
        let cloned = other.clone_varnode_from(&fd, original);
        assert!(other.vbank().get(cloned).unwrap().is_synthetic_literal());
    }
    let ordinary = fd.new_constant(8, 0x403000);
    assert!(!fd.vbank().get(ordinary).unwrap().is_synthetic_literal());
    fd.vbank_mut()
        .get_mut(c)
        .unwrap()
        .set_synthetic_literal(false);
    assert!(!fd.vbank().get(c).unwrap().is_synthetic_literal());
}

#[test]
fn total_replace_rewires_all_reads() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let (vn, _d1) = make_written(&mut fd, 0x10, 4);
    let (newvn, _d2) = make_written(&mut fd, 0x20, 4);
    // Two reader ops reading vn in slot 0.
    let mut readers = Vec::new();
    for i in 0..2 {
        let pc = Address::new(Rc::clone(&r), 0x1000 + i * 4);
        let op = fd.obank_mut().create_at(1, pc);
        fd.obank_mut()
            .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.vbank_mut().add_descend(vn, op).unwrap();
        fd.obank_mut().get_mut(op).unwrap().set_input(Some(vn), 0);
        readers.push(op);
    }
    assert_eq!(fd.vbank().get(vn).unwrap().num_descend(), 2);
    assert_eq!(fd.vbank().get(newvn).unwrap().num_descend(), 0);

    fd.total_replace(vn, newvn).unwrap();

    // All readers now read newvn; vn has no descendants left.
    for &op in &readers {
        assert_eq!(fd.obank().get(op).unwrap().get_in(0), Some(newvn));
    }
    assert_eq!(fd.vbank().get(vn).unwrap().num_descend(), 0);
    assert_eq!(fd.vbank().get(newvn).unwrap().num_descend(), 2);
}

#[test]
fn storage_sources_survive_replacements_clones_and_source_deletion() {
    let mut fd = build_fd();
    let original = fd.new_varnode(4, &Address::new(ram(&fd), 0x80), None);
    let first = fd.new_unique(4, None);
    fd.total_replace(original, first).unwrap();
    fd.delete_varnode(original).unwrap();
    let second = fd.new_unique(4, None);
    fd.total_replace(first, second).unwrap();
    let cloned = fd.clone_varnode(second);
    for vn in [first, second, cloned] {
        let sources = fd.unlace_storage_sources(vn);
        assert_eq!(sources.len(), 1);
        assert_eq!(sources[0].address.get_offset(), 0x80);
        assert_eq!(sources[0].size, 4);
    }
    fd.delete_varnode(first).unwrap();
    assert!(fd.unlace_storage_sources(first).is_empty());
    let reused = fd.new_unique(4, None);
    assert!(fd.unlace_storage_sources(reused).is_empty());
    fd.clear();
    assert!(fd.unlace_storage_sources(second).is_empty());
}

#[test]
fn storage_sources_slice_each_home_from_its_significance_offset() {
    let mut fd = build_fd();
    let little = fd.new_varnode(8, &Address::new(ram(&fd), 0x80), None);
    let big_space = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "bigreg",
        true,
        8,
        1,
        5,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    let big = fd.new_varnode(8, &Address::new(big_space, 0x100), None);
    let temp = fd.new_unique(8, None);
    fd.unlace_inherit_storage(temp, little);
    fd.unlace_inherit_storage(temp, big);
    fd.unlace_inherit_storage(temp, little);
    assert_eq!(fd.unlace_storage_sources(temp).len(), 2);
    let slice = fd.new_unique(2, None);
    fd.unlace_inherit_storage_slice(slice, temp, 1, 2);
    let sources = fd.unlace_storage_sources(slice);
    assert_eq!(sources.len(), 2);
    assert_eq!(sources[0].address.get_offset(), 0x81);
    assert_eq!(sources[1].address.get_offset(), 0x105);
    assert!(sources.iter().all(|source| source.size == 2));
}

#[test]
fn removed_extensions_preserve_low_byte_homes_without_arithmetic_origins() {
    for opcode in [
        OpCode::CPUI_INT_ZEXT,
        OpCode::CPUI_INT_SEXT,
        OpCode::CPUI_INT_ADD,
    ] {
        let mut fd = build_fd();
        let memory = ram(&fd);
        let size = if opcode == OpCode::CPUI_INT_ADD { 4 } else { 1 };
        let input = fd.new_unique(size, None);
        let op = fd.new_op(
            if opcode == OpCode::CPUI_INT_ADD { 2 } else { 1 },
            Address::new(memory.clone(), 0x1000),
        );
        fd.op_set_opcode_code(op, opcode);
        fd.new_varnode_out(4, &Address::new(memory, 0x80), op)
            .unwrap();
        fd.op_set_input(op, input, 0).unwrap();
        if opcode == OpCode::CPUI_INT_ADD {
            let constant = fd.new_constant(size, 1);
            fd.op_set_input(op, constant, 1).unwrap();
        }
        fd.op_destroy(op);
        let sources = fd.unlace_storage_sources(input);
        if opcode == OpCode::CPUI_INT_ADD {
            assert!(sources.is_empty());
        } else {
            assert_eq!(sources.len(), 1);
            assert_eq!(sources[0].address.get_offset(), 0x80);
            assert_eq!(sources[0].size, 1);
        }
    }
}
