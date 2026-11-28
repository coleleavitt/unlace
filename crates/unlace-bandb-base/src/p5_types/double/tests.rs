//! Tests for the stub-free decision logic: the static matchers
//! (`verifyMultNegOne`, `adjacentOffsets`, `isAddrTiedContiguous`), the
//! pairing discovery (`wholeList` / `findWholeSplitToPieces` /
//! `findWholeBuiltFromPieces` / `inHandLo*`), and a `LogicalForm::verify`
//! form-matrix entry.  Op-graph mutation that reaches a cross-wave stub
//! (`getOpFromConst`, `getSpaceFromConst`, `combineInputVarnodes`, the W6
//! arithmetic/float op classification) is exercised only up to the stub.

use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};
use crate::op::pcodeop_flags;

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
    Funcdata::new("func", "func", glb, addr, 0x1000_0000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}
fn dt(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let r = ram(fd);
    let op = fd.new_op(inputs, Address::new(r, off));
    let fl = match opc {
        OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND => {
            pcodeop_flags::branch
        }
        _ => 0,
    };
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, fl, format!("{opc:?}")));
    op
}

/// A plain Varnode in ram at `off` of `size` bytes (free, no def).
fn mk_vn(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.vbank_mut().create(size, Address::new(r, off), dt(size))
}

/// A constant Varnode.
fn mk_const(fd: &mut Funcdata, size: int4, val: uintb) -> VarnodeId {
    fd.new_constant(size, val)
}

/// Build a block, append `op` to it (so it gains a parent/order), and return
/// the block id.  `op` must already have its opcode set.
fn mk_block_with(fd: &mut Funcdata, ops: &[OpId]) -> crate::context::BlockId {
    let root = fd.bblocks_ref().root.expect("root");
    let bl = fd.bblocks_mut().new_block_basic(root);
    for &op in ops {
        fd.op_insert_end(op, bl);
    }
    bl
}

/// Make `op` a SUBPIECE(whole, off) with a fresh ram output of `outsize`,
/// returning the output Varnode.  Inserts `op` into block `bl`.
fn make_subpiece(
    fd: &mut Funcdata,
    op: OpId,
    whole: VarnodeId,
    off: u64,
    outsize: int4,
    out_off: u64,
    bl: crate::context::BlockId,
) -> VarnodeId {
    let r = ram(fd);
    let out = fd
        .new_varnode_out(outsize, &Address::new(r, out_off), op)
        .unwrap();
    fd.op_set_input(op, whole, 0).unwrap();
    let c = mk_const(fd, 4, off);
    fd.op_set_input(op, c, 1).unwrap();
    fd.op_insert_end(op, bl);
    out
}

// --- static matchers -----------------------------------------------------

#[test]
fn verify_mult_neg_one_matches_mult_by_allones() {
    let mut fd = build_fd();
    let op = mk_op(&mut fd, 2, 0x100, OpCode::CPUI_INT_MULT);
    let v = mk_vn(&mut fd, 0x10, 4);
    let negone = mk_const(&mut fd, 4, calc_mask(4)); // -1 in 4 bytes
    fd.op_set_input(op, v, 0).unwrap();
    fd.op_set_input(op, negone, 1).unwrap();
    assert!(verify_mult_neg_one(&fd, op));

    // A different constant is rejected (distinct operand var — a free var may
    // not have multiple descendants in the IR).
    let op2 = mk_op(&mut fd, 2, 0x108, OpCode::CPUI_INT_MULT);
    let v2 = mk_vn(&mut fd, 0x18, 4);
    let two = mk_const(&mut fd, 4, 2);
    fd.op_set_input(op2, v2, 0).unwrap();
    fd.op_set_input(op2, two, 1).unwrap();
    assert!(!verify_mult_neg_one(&fd, op2));

    // A non-MULT op is rejected.
    let op3 = mk_op(&mut fd, 2, 0x110, OpCode::CPUI_INT_ADD);
    let v3 = mk_vn(&mut fd, 0x1c, 4);
    let negone3 = mk_const(&mut fd, 4, calc_mask(4));
    fd.op_set_input(op3, v3, 0).unwrap();
    fd.op_set_input(op3, negone3, 1).unwrap();
    assert!(!verify_mult_neg_one(&fd, op3));
}

#[test]
fn adjacent_offsets_constant_form() {
    let mut fd = build_fd();
    let a = mk_const(&mut fd, 8, 0x1000);
    let b = mk_const(&mut fd, 8, 0x1004);
    assert!(adjacent_offsets(&fd, a, b, 4));
    assert!(!adjacent_offsets(&fd, a, b, 8));
    // vn2 not constant -> false.
    let c = mk_vn(&mut fd, 0x20, 8);
    assert!(!adjacent_offsets(&fd, a, c, 4));
}

#[test]
fn adjacent_offsets_add_const_form() {
    // vn1 = base; vn2 = base + 4; size1 == 4 -> true.
    let mut fd = build_fd();
    let bl = mk_block_with(&mut fd, &[]);
    let base = mk_vn(&mut fd, 0x30, 8);
    let add = mk_op(&mut fd, 2, 0x200, OpCode::CPUI_INT_ADD);
    let r = ram(&fd);
    let vn2 = fd.new_varnode_out(8, &Address::new(r, 0x40), add).unwrap();
    fd.op_set_input(add, base, 0).unwrap();
    let four = mk_const(&mut fd, 8, 4);
    fd.op_set_input(add, four, 1).unwrap();
    fd.op_insert_end(add, bl);
    assert!(adjacent_offsets(&fd, base, vn2, 4));
    assert!(!adjacent_offsets(&fd, base, vn2, 8));
}

// --- pairing discovery ---------------------------------------------------

/// Build `whole` (8 bytes) with two SUBPIECE pieces:
///   lo = SUB(whole, 0) marked PrecisLo, hi = SUB(whole, 4) marked PrecisHi.
/// Returns (whole, lo, hi).
fn build_split_off_whole(fd: &mut Funcdata) -> (VarnodeId, VarnodeId, VarnodeId) {
    let bl = mk_block_with(fd, &[]);
    // whole is the output of some op so it is "written".
    let def = mk_op(fd, 1, 0x300, OpCode::CPUI_INT_ADD);
    let r = ram(fd);
    let whole = fd.new_varnode_out(8, &Address::new(r, 0x100), def).unwrap();
    let a0 = mk_vn(fd, 0x108, 8);
    fd.op_set_input(def, a0, 0).unwrap();
    fd.op_insert_end(def, bl);

    let sublo = mk_op(fd, 2, 0x310, OpCode::CPUI_SUBPIECE);
    let lo = make_subpiece(fd, sublo, whole, 0, 4, 0x200, bl);
    fd.vbank_mut().get_mut(lo).unwrap().set_precis_lo();

    let subhi = mk_op(fd, 2, 0x320, OpCode::CPUI_SUBPIECE);
    let hi = make_subpiece(fd, subhi, whole, 4, 4, 0x210, bl);
    fd.vbank_mut().get_mut(hi).unwrap().set_precis_hi();

    (whole, lo, hi)
}

#[test]
fn whole_list_discovers_hi_lo_pair() {
    let mut fd = build_fd();
    let (whole, lo, hi) = build_split_off_whole(&mut fd);
    let vec = whole_list(&fd, whole);
    assert_eq!(vec.len(), 1, "exactly the basic split (no copies)");
    let s = &vec[0];
    assert_eq!(s.get_whole(), Some(whole));
    assert_eq!(s.get_lo(), Some(lo));
    assert_eq!(s.get_hi(), Some(hi));
    assert_eq!(s.get_size(), 8);
    assert!(s.has_both_pieces());
}

#[test]
fn whole_list_empty_without_marks() {
    // If neither piece is marked PrecisHi/Lo, wholeList returns nothing.
    let mut fd = build_fd();
    let bl = mk_block_with(&mut fd, &[]);
    let def = mk_op(&mut fd, 1, 0x300, OpCode::CPUI_INT_ADD);
    let r = ram(&fd);
    let whole = fd.new_varnode_out(8, &Address::new(r, 0x100), def).unwrap();
    let a0 = mk_vn(&mut fd, 0x108, 8);
    fd.op_set_input(def, a0, 0).unwrap();
    fd.op_insert_end(def, bl);
    let sub = mk_op(&mut fd, 2, 0x310, OpCode::CPUI_SUBPIECE);
    let _lo = make_subpiece(&mut fd, sub, whole, 0, 4, 0x200, bl);
    assert!(whole_list(&fd, whole).is_empty());
}

#[test]
fn find_whole_split_to_pieces_roundtrip() {
    let mut fd = build_fd();
    let (whole, lo, hi) = build_split_off_whole(&mut fd);
    let mut s = SplitVarnode::empty();
    s.lo = Some(lo);
    s.hi = Some(hi);
    s.wholesize = 8;
    assert!(s.find_whole_split_to_pieces(&fd));
    assert_eq!(s.get_whole(), Some(whole));
    // defpoint/defblock are filled from the whole's def.
    assert!(s.get_def_point().is_some());
    assert!(s.get_def_block().is_some());
}

#[test]
fn in_hand_lo_finds_companion_hi() {
    let mut fd = build_fd();
    let (whole, lo, hi) = build_split_off_whole(&mut fd);
    let mut s = SplitVarnode::empty();
    assert!(s.in_hand_lo(&fd, lo));
    assert_eq!(s.get_whole(), Some(whole));
    assert_eq!(s.get_lo(), Some(lo));
    assert_eq!(s.get_hi(), Some(hi));
}

#[test]
fn in_hand_lo_rejects_unmarked() {
    let mut fd = build_fd();
    let (_w, lo, _hi) = build_split_off_whole(&mut fd);
    // Clear the PrecisLo mark; inHandLo must quick-reject.
    fd.vbank_mut().get_mut(lo).unwrap().clear_precis_lo();
    let mut s = SplitVarnode::empty();
    assert!(!s.in_hand_lo(&fd, lo));
}

/// Build a PIECE(hi, lo) -> whole concatenation where hi/lo are marked and
/// written (so `findWholeBuiltFromPieces` reads their def block), used by
/// `inHandLoOut` / `findWholeBuiltFromPieces`.
fn build_concat(fd: &mut Funcdata) -> (VarnodeId, VarnodeId, VarnodeId) {
    let bl = mk_block_with(fd, &[]);
    let r = ram(fd);
    // lo/hi are COPY outputs so they are "written" in block `bl`.
    let cpylo = mk_op(fd, 1, 0x4f0, OpCode::CPUI_COPY);
    let lo = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x400), cpylo)
        .unwrap();
    let lsrc = mk_vn(fd, 0x4a0, 4);
    fd.op_set_input(cpylo, lsrc, 0).unwrap();
    fd.op_insert_end(cpylo, bl);

    let cpyhi = mk_op(fd, 1, 0x4f8, OpCode::CPUI_COPY);
    let hi = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x408), cpyhi)
        .unwrap();
    let hsrc = mk_vn(fd, 0x4a8, 4);
    fd.op_set_input(cpyhi, hsrc, 0).unwrap();
    fd.op_insert_end(cpyhi, bl);

    fd.vbank_mut().get_mut(lo).unwrap().set_precis_lo();
    fd.vbank_mut().get_mut(hi).unwrap().set_precis_hi();
    let piece = mk_op(fd, 2, 0x500, OpCode::CPUI_PIECE);
    let whole = fd
        .new_varnode_out(8, &Address::new(r, 0x410), piece)
        .unwrap();
    fd.op_set_input(piece, hi, 0).unwrap(); // most significant
    fd.op_set_input(piece, lo, 1).unwrap(); // least significant
    fd.op_insert_end(piece, bl);
    (whole, lo, hi)
}

#[test]
fn in_hand_lo_out_finds_concat() {
    let mut fd = build_fd();
    let (whole, lo, hi) = build_concat(&mut fd);
    let mut s = SplitVarnode::empty();
    assert!(s.in_hand_lo_out(&fd, lo));
    assert_eq!(s.get_whole(), Some(whole));
    assert_eq!(s.get_hi(), Some(hi));
    assert_eq!(s.get_lo(), Some(lo));
}

#[test]
fn find_whole_built_from_pieces_finds_concat() {
    let mut fd = build_fd();
    let (whole, lo, hi) = build_concat(&mut fd);
    let mut s = SplitVarnode::empty();
    s.lo = Some(lo);
    s.hi = Some(hi);
    s.wholesize = 8;
    assert!(s.find_whole_built_from_pieces(&fd));
    assert_eq!(s.get_whole(), Some(whole));
    assert!(s.get_def_point().is_some());
}

// --- form matrix: LogicalForm::verify ------------------------------------

#[test]
fn logical_form_verify_matches_and_pair() {
    // Build:  reslo = lo1 & lo2c ; reshi = hi1 & hi2c  (constant-operand AND
    // form — the reachable `findHiMatch` path that scans hi1's descendants for
    // a unique AND-by-constant).  verify(in.hi, in.lo, loop=reslo) must find
    // hiop and recover lo2/hi2.
    let mut fd = build_fd();
    let (_whole, lo1, hi1) = build_split_off_whole(&mut fd);
    let bl = mk_block_with(&mut fd, &[]);
    let r = ram(&fd);

    let lo2 = mk_const(&mut fd, 4, 0x0f0f0f0f);
    let hi2 = mk_const(&mut fd, 4, 0x00ff00ff);

    // reslo = lo1 & lo2c
    let loand = mk_op(&mut fd, 2, 0x700, OpCode::CPUI_INT_AND);
    let _reslo = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x610), loand)
        .unwrap();
    fd.op_set_input(loand, lo1, 0).unwrap();
    fd.op_set_input(loand, lo2, 1).unwrap();
    fd.op_insert_end(loand, bl);

    // reshi = hi1 & hi2c  (the single AND-by-const off hi1)
    let hiand = mk_op(&mut fd, 2, 0x708, OpCode::CPUI_INT_AND);
    let _reshi = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x618), hiand)
        .unwrap();
    fd.op_set_input(hiand, hi1, 0).unwrap();
    fd.op_set_input(hiand, hi2, 1).unwrap();
    fd.op_insert_end(hiand, bl);

    let in_ = SplitVarnode::from_pieces(&fd, lo1, hi1);
    let mut form = LogicalForm::new();
    form.in_ = in_;
    assert!(form.verify(&fd, hi1, lo1, loand));
    assert_eq!(form.lo2, Some(lo2));
    assert_eq!(form.hi2, Some(hi2));
    assert_eq!(form.hiop, Some(hiand));
}

#[test]
fn logical_form_verify_rejects_ambiguous_hi() {
    // Two AND-by-constant ops off hi1 -> findHiMatch can't distinguish
    // (count>1 -> -1) -> verify rejects.
    let mut fd = build_fd();
    let (_whole, lo1, hi1) = build_split_off_whole(&mut fd);
    let bl = mk_block_with(&mut fd, &[]);
    let r = ram(&fd);

    let lo2 = mk_const(&mut fd, 4, 0x0f0f0f0f);
    let hi2a = mk_const(&mut fd, 4, 0x00ff00ff);
    let hi2b = mk_const(&mut fd, 4, 0xff00ff00);

    let loand = mk_op(&mut fd, 2, 0x700, OpCode::CPUI_INT_AND);
    let _reslo = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x610), loand)
        .unwrap();
    fd.op_set_input(loand, lo1, 0).unwrap();
    fd.op_set_input(loand, lo2, 1).unwrap();
    fd.op_insert_end(loand, bl);

    // first AND off hi1
    let hiand1 = mk_op(&mut fd, 2, 0x708, OpCode::CPUI_INT_AND);
    let _r1 = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x618), hiand1)
        .unwrap();
    fd.op_set_input(hiand1, hi1, 0).unwrap();
    fd.op_set_input(hiand1, hi2a, 1).unwrap();
    fd.op_insert_end(hiand1, bl);
    // second AND off hi1 (ambiguity)
    let hiand2 = mk_op(&mut fd, 2, 0x710, OpCode::CPUI_INT_AND);
    let _r2 = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&r), 0x620), hiand2)
        .unwrap();
    fd.op_set_input(hiand2, hi1, 0).unwrap();
    fd.op_set_input(hiand2, hi2b, 1).unwrap();
    fd.op_insert_end(hiand2, bl);

    let in_ = SplitVarnode::from_pieces(&fd, lo1, hi1);
    let mut form = LogicalForm::new();
    form.in_ = in_;
    assert!(!form.verify(&fd, hi1, lo1, loand));
}

// --- constant / precision helpers ----------------------------------------

#[test]
fn split_varnode_constant_value_assembly() {
    let mut fd = build_fd();
    let lo = mk_const(&mut fd, 4, 0xdead);
    let hi = mk_const(&mut fd, 4, 0xbeef);
    let mut s = SplitVarnode::empty();
    s.init_partial_pieces(&fd, 8, Some(lo), Some(hi));
    assert!(s.is_constant());
    // val = (hi << 32) | lo
    assert_eq!(s.get_value(), (0xbeefu64 << 32) | 0xdead);
}

#[test]
fn exceeds_const_precision_over_eight_bytes() {
    let big = SplitVarnode::new_constant(16, 0);
    assert!(big.exceeds_const_precision());
    let ok = SplitVarnode::new_constant(8, 0);
    assert!(!ok.exceeds_const_precision());
}

#[test]
fn specs_match_coreaction_order_and_groups() {
    let s = specs();
    assert_eq!(s.len(), 4);
    assert_eq!(s[0].group, "doubleload"); // RuleDoubleLoad
    assert_eq!(s[1].group, "doubleprecis"); // RuleDoubleStore
    assert_eq!(s[2].group, "doubleprecis"); // RuleDoubleIn
    assert_eq!(s[3].group, "doubleprecis"); // RuleDoubleOut
}

// =====================================================================
// VERIFIER ADVERSARIAL TESTS (w6-s5-double, round 1)
// =====================================================================

/// A discovered function can start mid-stream, leaving the block registered as the
/// start block with no ops.  `find_create_whole` asks it for an address when a
/// double's pieces have no defining block, so an empty start block must fall back to
/// the entry address instead of panicking.
#[test]
fn start_addr_of_empty_block_is_entry_address() {
    let mut fd = build_fd();
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    assert!(fd.bb_ops(bl).is_empty(), "sanity: the block is empty");
    assert_eq!(bl_start_addr(&fd, bl), *fd.get_address());
}
