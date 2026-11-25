use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_num::opcodes::OpCode;

use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};
use crate::varnode::{DefOpInfo, VarnodeBank};

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

// --- creation factories: bank-state outcomes -------------------------

#[test]
fn new_constant_creates_constant_in_const_space() {
    let mut fd = build_fd();
    let vn = fd.new_constant(4, 0x1234);
    let v = fd.vbank().get(vn).unwrap();
    assert!(v.is_constant());
    assert_eq!(v.get_offset(), 0x1234);
    assert_eq!(v.get_size(), 4);
    assert_eq!(fd.num_varnodes(), 1);
}

#[test]
fn new_unique_advances_uniq_offset_and_create_index() {
    let mut fd = build_fd();
    let a = fd.new_unique(4, None);
    let b = fd.new_unique(8, None);
    // create_index is a strict one-up counter shared by all create paths.
    assert_eq!(fd.vbank().get(a).unwrap().get_create_index(), 0);
    assert_eq!(fd.vbank().get(b).unwrap().get_create_index(), 1);
    // unique offsets advance by size; both are free temporaries.
    let oa = fd.vbank().get(a).unwrap().get_offset();
    let ob = fd.vbank().get(b).unwrap().get_offset();
    assert_eq!(ob, oa + 4);
    assert!(fd.vbank().get(a).unwrap().is_free());
}

#[test]
fn new_varnode_creates_free_in_given_space() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let m = Address::new(r, 0x80);
    let vn = fd.new_varnode(4, &m, None);
    let v = fd.vbank().get(vn).unwrap();
    assert!(v.is_free());
    assert_eq!(v.get_addr().get_offset(), 0x80);
    assert_eq!(v.get_size(), 4);
}

#[test]
fn new_varnode_space_off_matches_new_varnode() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let vn = fd.new_varnode_space_off(2, Rc::clone(&r), 0x200);
    let v = fd.vbank().get(vn).unwrap();
    assert_eq!(v.get_size(), 2);
    assert_eq!(v.get_offset(), 0x200);
    assert!(v.is_free());
}

#[test]
fn new_varnode_iop_encodes_op_in_iop_space() {
    let mut fd = build_fd();
    let pc = Address::new(ram(&fd), 0x1000);
    let op = fd.obank_mut().create_at(1, pc);
    let vn = fd.new_varnode_iop(op);
    let v = fd.vbank().get(vn).unwrap();
    let iop = fd.get_arch().manage().get_iop_space().unwrap();
    assert!(Rc::ptr_eq(v.get_space(), iop));
    // The encoded offset round-trips to the same key bit-pattern.
    assert_eq!(v.get_offset(), op_iop_encode(op));
}

#[test]
fn an_untyped_varnode_gets_its_own_skeleton_when_first_read() {
    let mut fd = build_fd();
    let (a, b, c) = (
        fd.new_constant(8, 1),
        fd.new_constant(8, 2),
        fd.new_constant(4, 3),
    );
    let ta = Rc::clone(fd.vbank().get(a).unwrap().get_type());
    assert!(ta.is_unknown_placeholder() && ta.get_size() == 8);
    assert!(
        Rc::ptr_eq(&ta, fd.vbank().get(a).unwrap().get_type()),
        "one skeleton per Varnode"
    );
    assert!(
        !Rc::ptr_eq(&ta, fd.vbank().get(b).unwrap().get_type()),
        "never shared between Varnodes"
    );
    let factory = unk(4);
    assert!(
        fd.vbank_mut()
            .get_mut(c)
            .unwrap()
            .update_type(Rc::clone(&factory))
    );
    assert!(Rc::ptr_eq(fd.vbank().get(c).unwrap().get_type(), &factory));
    assert!(!fd.vbank_mut().get_mut(c).unwrap().update_type(factory));
}

#[test]
fn new_varnode_space_creates_const_from_space() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let vn = fd.new_varnode_space(&r);
    let v = fd.vbank().get(vn).unwrap();
    // createConstFromSpace yields a constant-space varnode.
    assert!(v.is_constant());
}

#[test]
fn new_varnode_call_specs_in_fspec_space() {
    let mut fd = build_fd();
    let vn = fd.new_varnode_call_specs(0xdead);
    let v = fd.vbank().get(vn).unwrap();
    let fspec = fd.get_arch().manage().get_fspec_space().unwrap();
    assert!(Rc::ptr_eq(v.get_space(), fspec));
    assert_eq!(v.get_offset(), 0xdead);
}

// --- deletion / teardown ---------------------------------------------

#[test]
fn delete_varnode_removes_free() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let vn = fd.new_varnode(4, &Address::new(r, 0x40), None);
    assert_eq!(fd.num_varnodes(), 1);
    fd.delete_varnode(vn).unwrap();
    assert_eq!(fd.num_varnodes(), 0);
}

/// `delete_varnode` models the C++ `delete vn`, which runs `~Varnode()` and with it
/// the detach from the HighVariable (varnode.cc:629).  Skipping it leaves the freed id
/// in the high's `inst` list for the naming pass to deref.
#[test]
fn delete_varnode_detaches_high() {
    let mut fd = build_fd();
    let r = ram(&fd);
    fd.set_high_level();
    let vn = fd.new_varnode(4, &Address::new(r, 0x40), None);
    let high = fd
        .vbank()
        .get(vn)
        .unwrap()
        .get_high()
        .expect("a varnode created with the high layer on has a high");
    assert_eq!(fd.high_bank().get(high).unwrap().num_instances(), 1);
    fd.delete_varnode(vn).unwrap();
    assert!(
        fd.high_bank().get(high).is_none(),
        "the high is unattached once its last member is freed"
    );
}

#[test]
fn destroy_varnode_unhooks_readers() {
    let mut fd = build_fd();
    let r = ram(&fd);
    // Free varnode read by one op.
    let vn = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x40), None);
    let pc = Address::new(Rc::clone(&r), 0x1000);
    let op = fd.obank_mut().create_at(2, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    // Wire vn as input slot 0 of op via the descend list + op input.
    fd.vbank_mut().add_descend(vn, op).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_input(Some(vn), 0);
    // destroyVarnode: op's slot reading vn becomes null, vn is freed.
    fd.destroy_varnode(vn).unwrap();
    assert_eq!(fd.obank().get(op).unwrap().get_in(0), None);
    assert!(fd.vbank().get(vn).is_none());
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

#[test]
fn find_varnode_input_exact_match() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let inp = make_input(&mut fd, 0x100, 4);
    let got = fd.find_varnode_input(4, &Address::new(Rc::clone(&r), 0x100));
    assert_eq!(got, Some(inp));
    // Wrong size / wrong address miss.
    assert_eq!(
        fd.find_varnode_input(8, &Address::new(Rc::clone(&r), 0x100)),
        None
    );
    assert_eq!(fd.find_varnode_input(4, &Address::new(r, 0x104)), None);
}

#[test]
fn find_covered_input_returns_contained() {
    let mut fd = build_fd();
    let r = ram(&fd);
    // input at 0x100 size 2, inside the range [0x100, 0x108)
    let inp = make_input(&mut fd, 0x100, 2);
    let got = fd
        .find_covered_input(8, &Address::new(Rc::clone(&r), 0x100))
        .unwrap();
    assert_eq!(got, Some(inp));
    // A range that does not cover it (starts after) finds nothing.
    let got2 = fd.find_covered_input(2, &Address::new(r, 0x200)).unwrap();
    assert_eq!(got2, None);
}

#[test]
fn find_covering_input_returns_container() {
    let mut fd = build_fd();
    let r = ram(&fd);
    // input at 0x100 size 8 covers the 4-byte range at 0x102
    let inp = make_input(&mut fd, 0x100, 8);
    // The C++ `findCoveringInput` lower_bound-then-step-back idiom requires a
    // def-tree element *after* the queried range to step back from (in a real
    // function the written/free varnodes following the inputs); register a
    // higher-address input so the probe lands on a real element, exactly as
    // the canonical `varnode::tests::input_finders` does.
    let _hi = make_input(&mut fd, 0x400, 2);
    let got = fd
        .find_covering_input(4, &Address::new(Rc::clone(&r), 0x102))
        .unwrap();
    assert_eq!(got, Some(inp));
    // A range outside is not covered (the `_hi` input does not contain it).
    let got2 = fd.find_covering_input(4, &Address::new(r, 0x200)).unwrap();
    assert_eq!(got2, None);
}

#[test]
fn has_input_intersection_detects_overlap() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let _inp = make_input(&mut fd, 0x100, 4);
    assert!(
        fd.has_input_intersection(2, &Address::new(Rc::clone(&r), 0x102))
            .unwrap()
    );
    assert!(
        !fd.has_input_intersection(2, &Address::new(r, 0x200))
            .unwrap()
    );
}

#[test]
fn find_input_overlap_pre_check() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let inp = make_input(&mut fd, 0x100, 4);
    // A fresh free candidate at the same (addr,size) overlaps an identical
    // input -> returns that input.
    let cand = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x100), None);
    assert_eq!(fd.find_input_overlap(cand).unwrap(), Some(inp));
    // A non-overlapping candidate -> None.
    let cand2 = fd.new_varnode(4, &Address::new(Rc::clone(&r), 0x200), None);
    assert_eq!(fd.find_input_overlap(cand2).unwrap(), None);
    // An overlapping-but-not-identical candidate -> error.
    let cand3 = fd.new_varnode(2, &Address::new(r, 0x101), None);
    assert!(fd.find_input_overlap(cand3).is_err());
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

#[test]
fn storage_sources_skip_constants_and_unspecified_width_changes() {
    let mut fd = build_fd();
    let original = fd.new_varnode(4, &Address::new(ram(&fd), 0x80), None);
    let constant = fd.new_constant(4, 7);
    let temp = fd.new_unique(4, None);
    fd.total_replace(original, constant).unwrap();
    fd.unlace_inherit_storage(temp, constant);
    assert!(fd.unlace_storage_sources(constant).is_empty());
    assert!(fd.unlace_storage_sources(temp).is_empty());
    let narrow = fd.new_unique(1, None);
    fd.unlace_inherit_storage(narrow, original);
    assert!(fd.unlace_storage_sources(narrow).is_empty());
    fd.unlace_inherit_storage_slice(narrow, original, 4, 1);
    assert!(fd.unlace_storage_sources(narrow).is_empty());
}

#[test]
fn ghidra_naming_does_not_track_storage_sources() {
    let mut context = ArchContext::new(build_manager());
    context.name_style_angr = false;
    let space = context.manage().get_space_by_name("ram").unwrap().clone();
    let mut fd = Funcdata::new(
        "func",
        "func",
        Rc::new(context),
        Address::new(space.clone(), 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap();
    let original = fd.new_varnode(4, &Address::new(space, 0x80), None);
    let replacement = fd.new_unique(4, None);
    fd.total_replace(original, replacement).unwrap();
    assert!(fd.unlace_storage_sources(replacement).is_empty());
}

#[test]
fn total_replace_constant_clones_per_read() {
    // A constant being placed by op_set_input where it already has a
    // descendant must be cloned (constants get one descendant unless
    // spacebase).
    let mut fd = build_fd();
    let r = ram(&fd);
    let (src, _d) = make_written(&mut fd, 0x10, 4);
    // Reader op reading src.
    let pc = Address::new(Rc::clone(&r), 0x1000);
    let op = fd.obank_mut().create_at(1, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    fd.vbank_mut().add_descend(src, op).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_input(Some(src), 0);

    // A constant already read once (so it has a descendant).
    let c = fd.new_constant(4, 7);
    let pc2 = Address::new(r, 0x1004);
    let op2 = fd.obank_mut().create_at(1, pc2);
    fd.obank_mut()
        .change_opcode(op2, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    fd.vbank_mut().add_descend(c, op2).unwrap();
    fd.obank_mut().get_mut(op2).unwrap().set_input(Some(c), 0);

    // Replace all reads of src with the (already-used) constant c.  op's slot
    // must get a *clone* of c (a distinct constant varnode), not c itself.
    fd.total_replace(src, c).unwrap();
    let got = fd.obank().get(op).unwrap().get_in(0).unwrap();
    assert_ne!(got, c, "constant must be cloned for the second reader");
    assert!(fd.vbank().get(got).unwrap().is_constant());
    assert_eq!(fd.vbank().get(got).unwrap().get_offset(), 7);
}

#[test]
fn lone_descend_and_snapshot() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let (vn, _d) = make_written(&mut fd, 0x10, 4);
    assert_eq!(fd.lone_descend(vn), None); // zero descendants
    let pc = Address::new(r, 0x2000);
    let op = fd.obank_mut().create_at(1, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    fd.vbank_mut().add_descend(vn, op).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_input(Some(vn), 0);
    assert_eq!(fd.lone_descend(vn), Some(op));
    assert_eq!(fd.descend_snapshot(vn), vec![op]);
}

/// Inputs are flagged correctly through the bank set_input path used by the
/// finder tests (sanity check the test scaffolding itself).
#[test]
fn make_input_sets_input_flag() {
    let mut fd = build_fd();
    let inp = make_input(&mut fd, 0x100, 4);
    let v = fd.vbank().get(inp).unwrap();
    assert!(v.is_input());
    assert_eq!(v.get_flags() & varnode_flags::input, varnode_flags::input);
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

/// HUNT LIST (Exception -> Result partial-state parity; isInput guard).
/// C++ `combineInputVarnodes` throws "Varnodes being combined are not inputs"
/// (funcdata_varnode.cc:386-387) BEFORE touching the graph.  The Rust port
/// must return Err at the same point with NO mutation (no destroyed
/// varnodes, no new input).  A free (non-input) hi varnode triggers it.
#[test]
fn combine_input_varnodes_w10dm_rejects_non_input_no_mutation() {
    let mut fd = build_fd();
    // lo is a real input at 0x100 size 4; hi is a *free* varnode at 0x104.
    let lo = make_input(&mut fd, 0x100, 4);
    let r = ram(&fd);
    let hi = fd.new_varnode(4, &Address::new(r, 0x104), None);
    let before = fd.num_varnodes();
    let res = fd.combine_input_varnodes(hi, lo);
    assert!(res.is_err(), "non-input hi must be rejected (cc:386-387)");
    // Partial-state parity: the early throw leaves the graph untouched.
    assert_eq!(
        fd.num_varnodes(),
        before,
        "no varnode created/destroyed on the reject"
    );
    assert!(fd.vbank().get(lo).unwrap().is_input(), "lo input survives");
    assert!(
        fd.vbank().get(hi).unwrap().is_free(),
        "hi survives unchanged"
    );
}

/// HUNT LIST (contiguity arithmetic + Result partial-state; little-endian).
/// C++ LE branch: `otheraddr = vnLo->getAddr() + vnLo->getSize();
/// isContiguous = (otheraddr == vnHi->getAddr())` (cc:395-398).  With lo@0x100
/// size 4 -> otheraddr 0x104; a hi placed at 0x108 (NOT 0x104) is a gap, so
/// the C++ throws "not contiguous" (cc:399-400) before any mutation.
#[test]
fn combine_input_varnodes_w10dm_rejects_noncontiguous_le() {
    let mut fd = build_fd();
    let lo = make_input(&mut fd, 0x100, 4);
    let hi = make_input(&mut fd, 0x108, 4); // gap: 0x104 != 0x108
    let before = fd.num_varnodes();
    let res = fd.combine_input_varnodes(hi, lo);
    assert!(
        res.is_err(),
        "non-contiguous LE pieces must be rejected (cc:399-400)"
    );
    assert_eq!(
        fd.num_varnodes(),
        before,
        "no mutation on the contiguity reject"
    );
    // The boundary case (hi exactly at otheraddr) is the *accepted* path,
    // proven by the collapse test below — confirming the == is the real edge.
}

/// HUNT LIST (the happy path: PIECE-reader collapse, LE addr selection).
/// Two contiguous LE inputs (lo@0x100 sz4, hi@0x104 sz4) read by a single
/// PIECE(hi,lo).  Per cc:443-451 the originals are destroyed, a size-8 input
/// is created at `addr` (= lo's addr in LE, cc:389/396), and the PIECE
/// becomes a COPY reading that new input in slot 0.  No otherOps, so no
/// SUBPIECE replacements are made.
#[test]
fn combine_input_varnodes_w10dm_le_piece_collapses_to_copy() {
    let mut fd = build_fd();
    let r = ram(&fd);
    let lo = make_input(&mut fd, 0x100, 4);
    let hi = make_input(&mut fd, 0x104, 4);
    let piece = make_piece_reader(&mut fd, 0x2000, hi, lo);

    fd.combine_input_varnodes(hi, lo)
        .expect("contiguous LE inputs combine");

    // The PIECE became a COPY (cc:450).
    assert_eq!(fd.obank().get(piece).unwrap().code(), OpCode::CPUI_COPY);
    // Its single input is the new combined whole (slot 1 removed, cc:418).
    assert_eq!(
        fd.obank().get(piece).unwrap().num_input(),
        1,
        "COPY is unary now"
    );
    let whole = fd.obank().get(piece).unwrap().get_in(0).expect("copy in0");
    let wv = fd.vbank().get(whole).unwrap();
    assert!(
        wv.is_input(),
        "combined whole is a function input (cc:446-447)"
    );
    assert_eq!(wv.get_size(), 8, "outSize = hi.size + lo.size (cc:443)");
    // LE: the new input sits at lo's address (addr = vnLo->getAddr()).
    assert_eq!(wv.get_addr(), &Address::new(Rc::clone(&r), 0x100));
    // Originals are gone.
    assert!(fd.vbank().get(lo).is_none(), "vnLo destroyed (cc:445)");
    assert!(fd.vbank().get(hi).is_none(), "vnHi destroyed (cc:444)");
}
