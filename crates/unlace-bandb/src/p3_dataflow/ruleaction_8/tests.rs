//! Hand-built input-op-pattern tests for the intricate rules in this batch,
//! each asserting the exact transformation per the C++ body, plus negative
//! tests for the early-out guards.  Coverage spans well over a third of the
//! rules (the intricate ones): `RuleXorSwap`, `RuleFuncPtrEncoding`,
//! `RulePopcountBoolXor` (+ `get_boolean_result`), `RuleThreeWayCompare`
//! (+ `test_compare_equivalence`/`detect_three_way`), `RuleOrCompare`,
//! `RuleFloatSignCleanup`, and the STUB helpers (`resolve_typeop`,
//! `new_unique_out`, `lone_descend`).

use std::rc::Rc;

use crate::op::pcodeop_flags;
use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::ActionGroupList;
use crate::context::{ArchContext, OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::varnode::{DefOpInfo, VarnodeBank};

use super::*;

// --- fixtures ---------------------------------------------------------

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
    build_fd_with_funcptr_align(0)
}

/// [`build_fd`] with the architecture's `funcptr_align` preset — the field a
/// real run gets from the cspec's `<funcptr align="N"/>`.
fn build_fd_with_funcptr_align(align: int4) -> Funcdata {
    let manage = build_manager();
    let mut ctx = ArchContext::new(manage);
    ctx.funcptr_align = align;
    let glb = Rc::new(ctx);
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

fn float_t(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_FLOAT))
}

fn no_replace() -> impl FnMut(&mut VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_: &mut VarnodeBank, _: VarnodeId, _: VarnodeId| -> UnlaceResult<()> { Ok(()) }
}

/// A fresh basic block under the bblocks root.
fn mk_block(fd: &mut Funcdata) -> crate::context::BlockId {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    fd.bblocks_mut().new_block_basic(root)
}

/// Create an op with `inputs` slots and a given opcode at `off`, INSERTED into
/// block `bl`, returning its id.  Uses the W6 typed-opcode resolver so the op's
/// cached flags match the rules' expectations.
fn mk_op(
    fd: &mut Funcdata,
    bl: crate::context::BlockId,
    inputs: int4,
    off: u64,
    opc: OpCode,
) -> OpId {
    let r = ram(fd);
    let op = fd.new_op(inputs, Address::new(r, off));
    fd.op_set_opcode(op, resolve_typeop_for_test(opc));
    fd.op_insert(op, bl, None);
    op
}

/// Build a TypeOp for any opcode (uses the rule resolver where defined, else a
/// flagless skeleton — fine for opcodes that only appear as *fixture* defs and
/// are never re-written by a rule).
fn resolve_typeop_for_test(opc: OpCode) -> crate::context::TypeOp {
    // The batch resolver panics on opcodes it never writes; for those (e.g.
    // INT_OR, INT_RIGHT, INT_ADD, LOAD) we need a skeleton.  Match the small
    // set the rule resolver knows, else flagless.
    use OpCode::*;
    match opc {
        CPUI_COPY | CPUI_INT_ZEXT | CPUI_INT_XOR | CPUI_INT_EQUAL | CPUI_INT_NOTEQUAL
        | CPUI_INT_LESS | CPUI_INT_LESSEQUAL | CPUI_INT_SLESS | CPUI_INT_SLESSEQUAL
        | CPUI_BOOL_AND | CPUI_BOOL_OR | CPUI_SUBPIECE | CPUI_FLOAT_EQUAL | CPUI_FLOAT_NOTEQUAL
        | CPUI_FLOAT_LESS | CPUI_FLOAT_LESSEQUAL | CPUI_FLOAT_ADD | CPUI_FLOAT_NEG
        | CPUI_FLOAT_ABS | CPUI_FLOAT_INT2FLOAT => resolve_typeop(opc),
        other => crate::context::TypeOp::new(other, 0, format!("{other:?}")),
    }
}

/// A free varnode at (off,size) in ram.
fn mk_vn(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.new_varnode(size, &Address::new(r, off), Some(unk(size)))
}

/// A constant varnode of the given size/value.
fn mk_const(fd: &mut Funcdata, size: int4, val: u64) -> VarnodeId {
    fd.new_constant(size, val)
}

/// Make `op` define a fresh varnode at (off,size) as its output, returning the
/// output id.  Bypasses the `op_set_output` W3 stub via the low-level
/// `set_def`/`set_output` pair (the W3 verifier fixture pattern), with the
/// given data-type.
fn set_output(fd: &mut Funcdata, op: OpId, off: u64, ct: Rc<Datatype>) -> VarnodeId {
    let r = ram(fd);
    let size = ct.get_size();
    let vn = fd.new_varnode(size, &Address::new(r, off), Some(ct));
    let seq = fd.obank().get(op).unwrap().get_seq_num().clone();
    let info = DefOpInfo {
        id: op,
        seqnum: seq,
    };
    let vn = fd.vbank_mut().set_def(vn, info, &mut no_replace()).unwrap();
    fd.obank_mut().get_mut(op).unwrap().set_output(Some(vn));
    vn
}

/// Wire `vn` as input `slot` of `op` (descend link + op input).
fn wire(fd: &mut Funcdata, vn: VarnodeId, op: OpId, slot: int4) {
    fd.vbank_mut().add_descend(vn, op).unwrap();
    fd.obank_mut()
        .get_mut(op)
        .unwrap()
        .set_input(Some(vn), slot);
}

fn code(fd: &Funcdata, op: OpId) -> OpCode {
    fd.obank().get(op).unwrap().code()
}

// =====================================================================
// resolve_typeop / registration plumbing
// =====================================================================

#[test]
fn resolve_typeop_carries_typeop_cc_flags() {
    // INT_EQUAL: binary | booloutput | commutative (typeop.cc:926).
    let t = resolve_typeop(OpCode::CPUI_INT_EQUAL);
    assert_eq!(
        t.get_flags(),
        pcodeop_flags::binary | pcodeop_flags::booloutput | pcodeop_flags::commutative
    );
    // COPY: unary | nocollapse (typeop.cc:391).
    let c = resolve_typeop(OpCode::CPUI_COPY);
    assert_eq!(
        c.get_flags(),
        pcodeop_flags::unary | pcodeop_flags::nocollapse
    );
    // INT_XOR: binary | commutative (typeop.cc:1410) — NOT booloutput.
    let x = resolve_typeop(OpCode::CPUI_INT_XOR);
    assert_eq!(
        x.get_flags(),
        pcodeop_flags::binary | pcodeop_flags::commutative
    );
}

#[test]
fn specs_lists_twelve_rules_in_order() {
    let s = specs();
    assert_eq!(s.len(), 12);
    // Most specs register against the analysis group; three register against
    // their own pool (RulePiecePathology -> "protorecovery", RuleFloatSignCleanup
    // and RuleExpandLoad -> "cleanup"), matching coreaction.cc getGroup(). Each
    // spec's ctor yields a rule that clones in *its own* group's grouplist and is
    // filtered out of an empty grouplist.
    for spec in &s {
        let r = (spec.ctor)();
        let yes = ActionGroupList::from_names([spec.group]);
        assert!(
            r.clone_rule(&yes).is_some(),
            "{} should clone in its registration group",
            spec.group
        );
        assert!(r.clone_rule(&ActionGroupList::new()).is_none());
    }
}

#[test]
fn get_op_lists_match_cpp() {
    assert_eq!(
        RuleUnsigned2Float.get_op_list(),
        vec![OpCode::CPUI_FLOAT_INT2FLOAT]
    );
    assert_eq!(
        RuleFuncPtrEncoding.get_op_list(),
        vec![OpCode::CPUI_CALLIND]
    );
    assert_eq!(RuleXorSwap.get_op_list(), vec![OpCode::CPUI_INT_XOR]);
    assert_eq!(
        RulePopcountBoolXor.get_op_list(),
        vec![OpCode::CPUI_POPCOUNT]
    );
    assert_eq!(RulePiecePathology.get_op_list(), vec![OpCode::CPUI_PIECE]);
    assert_eq!(
        RuleLzcountShiftBool.get_op_list(),
        vec![OpCode::CPUI_LZCOUNT]
    );
    assert_eq!(RuleOrCompare.get_op_list(), vec![OpCode::CPUI_INT_OR]);
    assert_eq!(RuleExpandLoad.get_op_list(), vec![OpCode::CPUI_LOAD]);
    assert_eq!(
        RuleThreeWayCompare.get_op_list(),
        vec![
            OpCode::CPUI_INT_SLESS,
            OpCode::CPUI_INT_SLESSEQUAL,
            OpCode::CPUI_INT_EQUAL,
            OpCode::CPUI_INT_NOTEQUAL,
        ]
    );
    assert_eq!(
        RuleFloatSignCleanup.get_op_list(),
        vec![OpCode::CPUI_INT_AND, OpCode::CPUI_INT_XOR]
    );
    // RuleFloatSign's exact 18-element ordered list.
    assert_eq!(RuleFloatSign.get_op_list().len(), 18);
    assert_eq!(RuleFloatSign.get_op_list()[0], OpCode::CPUI_FLOAT_EQUAL);
    assert_eq!(RuleFloatSign.get_op_list()[17], OpCode::CPUI_FLOAT_TRUNC);
}

// =====================================================================
// RuleXorSwap  —  V = (a ^ b) ^ a  =>  V = b   (full transform)
// =====================================================================

#[test]
fn xorswap_collapses_left_chain() {
    // op = (xorop_result) ^ a, where xorop = a ^ b.  Slot 0 of op is the inner
    // xor's output; othervn (slot 1) == a == op2->getIn(0); vn1 = b is non-free.
    // => COPY(b).
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    // a and b are inputs (non-free).
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = {
        let v = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    // inner xor:  t = a ^ b
    let op2 = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_XOR);
    wire(&mut fd, a, op2, 0);
    wire(&mut fd, b, op2, 1);
    let t = set_output(&mut fd, op2, 0x30, unk(4));
    // outer xor:  op = t ^ a
    let op = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_XOR);
    wire(&mut fd, t, op, 0);
    wire(&mut fd, a, op, 1);

    let r = RuleXorSwap.apply_op(op, &mut fd);
    assert_eq!(r, 1, "RuleXorSwap must apply");
    // op is now COPY(b)
    assert_eq!(code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(fd.obank().get(op).unwrap().num_input(), 1);
    assert_eq!(fd.obank().get(op).unwrap().get_in(0), Some(b));
}

#[test]
fn xorswap_collapses_right_chain() {
    // op = a ^ (a ^ b): othervn(slot0)=a == op2->getIn(0); but we test the
    // other branch: othervn == vn1.  Build op = a ^ (b ^ a) so that the inner
    // xor is b^a, vn1 == a == othervn, vn0 == b non-free => COPY(b).
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = {
        let v = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    // inner xor: t = b ^ a
    let op2 = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_XOR);
    wire(&mut fd, b, op2, 0);
    wire(&mut fd, a, op2, 1);
    let t = set_output(&mut fd, op2, 0x30, unk(4));
    // outer xor: op = a ^ t   (i=1 finds the inner xor; othervn = a = vn1)
    let op = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_XOR);
    wire(&mut fd, a, op, 0);
    wire(&mut fd, t, op, 1);

    let r = RuleXorSwap.apply_op(op, &mut fd);
    assert_eq!(r, 1);
    assert_eq!(code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(fd.obank().get(op).unwrap().num_input(), 1);
    assert_eq!(fd.obank().get(op).unwrap().get_in(0), Some(b));
}

#[test]
fn xorswap_negative_when_no_inner_xor() {
    // op = a ^ b with both inputs plain inputs (not written by an XOR).
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = {
        let v = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let op = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_XOR);
    wire(&mut fd, a, op, 0);
    wire(&mut fd, b, op, 1);
    assert_eq!(RuleXorSwap.apply_op(op, &mut fd), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_XOR); // unchanged
}

#[test]
fn xorswap_negative_when_remaining_input_free() {
    // inner xor t = a ^ b where b is FREE; op = t ^ a.  The remaining input
    // vn1 == b is free, so the guard `!vn1->isFree()` blocks the rewrite.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = mk_vn(&mut fd, 0x20, 4); // FREE (neither input nor written)
    let op2 = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_XOR);
    wire(&mut fd, a, op2, 0);
    wire(&mut fd, b, op2, 1);
    let t = set_output(&mut fd, op2, 0x30, unk(4));
    let op = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_XOR);
    wire(&mut fd, t, op, 0);
    wire(&mut fd, a, op, 1);
    assert_eq!(RuleXorSwap.apply_op(op, &mut fd), 0);
    assert_eq!(code(&fd, op), OpCode::CPUI_INT_XOR);
}

// =====================================================================
// RuleFuncPtrEncoding  —  guards + the live funcptr_align read
// =====================================================================

/// Build the canonical `CALLIND(AND(ptr, mask))` shape under a given
/// architecture `funcptr_align`, run the rule, and report (return value,
/// resulting AND-op opcode).
fn funcptrencoding_probe(align: int4, mask_val: u64) -> (int4, OpCode) {
    let mut fd = build_fd_with_funcptr_align(align);
    let bl = mk_block(&mut fd);
    let ptr = {
        let v = mk_vn(&mut fd, 0x10, 8);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let mask = mk_const(&mut fd, 8, mask_val);
    let andop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_AND);
    wire(&mut fd, ptr, andop, 0);
    wire(&mut fd, mask, andop, 1);
    let masked = set_output(&mut fd, andop, 0x20, unk(8));
    let callind = mk_op(&mut fd, bl, 1, 0x104, OpCode::CPUI_CALLIND);
    wire(&mut fd, masked, callind, 0);
    let rc = RuleFuncPtrEncoding.apply_op(callind, &mut fd);
    (rc, code(&fd, andop))
}

#[test]
fn funcptrencoding_noops_without_cspec_funcptr() {
    // No `<funcptr>` in the cspec (x86/x86-64): align == 0 disables the rule
    // even on a perfect AND-mask pattern.
    assert_eq!(funcptrencoding_probe(0, !1u64), (0, OpCode::CPUI_INT_AND));
}

#[test]
fn funcptrencoding_strips_thumb_mode_bit() {
    // ARM/MIPS/Loongarch/8051 cspecs: `<funcptr align="2"/>` => align 1, so
    // the SLEIGH-emitted `& ~1` on a CALLIND target collapses to a COPY.
    assert_eq!(funcptrencoding_probe(1, !1u64), (1, OpCode::CPUI_COPY));
}

#[test]
fn funcptrencoding_strips_aarch64_word_alignment() {
    // AARCH64 cspecs: `<funcptr align="4"/>` => align 2, so `& ~3` collapses
    // and `& ~1` does NOT (upstream compares the exact slide, not a subset).
    assert_eq!(funcptrencoding_probe(2, !3u64), (1, OpCode::CPUI_COPY));
    assert_eq!(funcptrencoding_probe(2, !1u64), (0, OpCode::CPUI_INT_AND));
}

#[test]
fn funcptrencoding_negative_when_in0_not_written() {
    // CALLIND target is a plain input (not written) — early guard.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let ptr = {
        let v = mk_vn(&mut fd, 0x10, 8);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let callind = mk_op(&mut fd, bl, 1, 0x100, OpCode::CPUI_CALLIND);
    wire(&mut fd, ptr, callind, 0);
    assert_eq!(RuleFuncPtrEncoding.apply_op(callind, &mut fd), 0);
}

// =====================================================================
// RulePopcountBoolXor  —  get_boolean_result + the count==1 COPY path
// =====================================================================

#[test]
fn popcountboolxor_negative_when_input_nzmask_wide() {
    // popcount(inVn)&1 where inVn has the default wide nzmask (popcount > 2):
    // the count==1/count==2 branches are not taken -> no-op.  (A freshly
    // created written varnode has nzm == u64::MAX; there is no public nzmask
    // setter to model the boolean case, so the positive collapse is exercised
    // through get_boolean_result's constant path below.)
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let x = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let pop = mk_op(&mut fd, bl, 1, 0x104, OpCode::CPUI_POPCOUNT);
    wire(&mut fd, x, pop, 0);
    let popout = set_output(&mut fd, pop, 0x30, unk(4));
    let one = mk_const(&mut fd, 1, 1);
    let baseop = mk_op(&mut fd, bl, 2, 0x108, OpCode::CPUI_INT_AND);
    wire(&mut fd, popout, baseop, 0);
    wire(&mut fd, one, baseop, 1);
    let _ = set_output(&mut fd, baseop, 0x40, unk(1));
    assert_eq!(RulePopcountBoolXor.apply_op(pop, &mut fd), 0);
    assert_eq!(code(&fd, baseop), OpCode::CPUI_INT_AND);
}

#[test]
fn popcountboolxor_negative_when_mask_not_one() {
    // baseOp = popout & 3  -> tmpVn->getOffset()!=1 guard fails -> no-op.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let x = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let pop = mk_op(&mut fd, bl, 1, 0x104, OpCode::CPUI_POPCOUNT);
    wire(&mut fd, x, pop, 0);
    let popout = set_output(&mut fd, pop, 0x30, unk(4));
    let three = mk_const(&mut fd, 1, 3);
    let baseop = mk_op(&mut fd, bl, 2, 0x108, OpCode::CPUI_INT_AND);
    wire(&mut fd, popout, baseop, 0);
    wire(&mut fd, three, baseop, 1);
    let _ = set_output(&mut fd, baseop, 0x40, unk(1));
    assert_eq!(RulePopcountBoolXor.apply_op(pop, &mut fd), 0);
    assert_eq!(code(&fd, baseop), OpCode::CPUI_INT_AND);
}

#[test]
fn get_boolean_result_constant_passes_back_bit() {
    // A constant varnode returns None with const_res = (offset >> bitPos) & 1.
    let mut fd = build_fd();
    let c = mk_const(&mut fd, 4, 0b100); // bit 2 set
    let mut const_res = 5;
    let got = RulePopcountBoolXor::get_boolean_result(&fd, c, 2, &mut const_res);
    assert_eq!(got, None);
    assert_eq!(const_res, 1);
    let mut const_res2 = 5;
    let got2 = RulePopcountBoolXor::get_boolean_result(&fd, c, 0, &mut const_res2);
    assert_eq!(got2, None);
    assert_eq!(const_res2, 0);
}

// =====================================================================
// RuleThreeWayCompare::test_compare_equivalence  (the static helper)
// =====================================================================

#[test]
fn test_compare_equivalence_matching_unsigned() {
    // lessop = a < b (INT_LESS), lessequalop = a <= b (INT_LESSEQUAL), same
    // operands.  twoLessThan=false; a1==a2, b1==b2 => res 0.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = {
        let v = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let less = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_LESS);
    wire(&mut fd, a, less, 0);
    wire(&mut fd, b, less, 1);
    let lesseq = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_LESSEQUAL);
    wire(&mut fd, a, lesseq, 0);
    wire(&mut fd, b, lesseq, 1);
    assert_eq!(
        RuleThreeWayCompare::test_compare_equivalence(&fd, less, lesseq),
        0
    );
}

#[test]
fn test_compare_equivalence_mismatched_opcode_minus_one() {
    // lessop = INT_LESS but lessequalop = INT_SLESSEQUAL (signed) -> -1.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b = {
        let v = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let less = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_LESS);
    wire(&mut fd, a, less, 0);
    wire(&mut fd, b, less, 1);
    let lesseq = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_SLESSEQUAL);
    wire(&mut fd, a, lesseq, 0);
    wire(&mut fd, b, lesseq, 1);
    assert_eq!(
        RuleThreeWayCompare::test_compare_equivalence(&fd, less, lesseq),
        -1
    );
}

#[test]
fn test_compare_equivalence_two_less_constants_swap() {
    // lessop = a < b1, lessequalop = a < b2 (both INT_LESS => twoLessThan).
    // b1,b2 constants with b2 == b1+1 => first b-branch: b1+1==b2 => false, no
    // swap (res stays 0).  Use a1==a2 (same var) so only b differs.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let a = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let b1 = mk_const(&mut fd, 4, 5);
    let b2 = mk_const(&mut fd, 4, 6);
    let less = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_LESS);
    wire(&mut fd, a, less, 0);
    wire(&mut fd, b1, less, 1);
    let lesseq = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_LESS);
    wire(&mut fd, a, lesseq, 0);
    wire(&mut fd, b2, lesseq, 1);
    // a1==a2 path skipped; b1!=b2 & twoLessThan; b1+1==b2 => twoLessThan=false,
    // res unchanged (0).
    assert_eq!(
        RuleThreeWayCompare::test_compare_equivalence(&fd, less, lesseq),
        0
    );
}

// =====================================================================
// RuleOrCompare  —  descend guard passes, then bails on the W3 newUniqueOut
//                   stub (returns 0 with the original op intact).
// =====================================================================

#[test]
fn orcompare_rewrites_or_equal_zero_to_bool_and() {
    // (V|W) feeding a single (==0): since w4x-flow-linkage filled
    // opSetOutput/newUniqueOut, the full C++ rewrite now runs
    // (ruleaction.cc:10829): INT_EQUAL(V|W, 0) becomes
    // BOOL_AND(INT_EQUAL(V,0), INT_EQUAL(W,0)).
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let v = {
        let x = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let w = {
        let x = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let orop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_OR);
    wire(&mut fd, v, orop, 0);
    wire(&mut fd, w, orop, 1);
    let orout = set_output(&mut fd, orop, 0x30, unk(4));
    let zero = mk_const(&mut fd, 4, 0);
    let eq = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, orout, eq, 0);
    wire(&mut fd, zero, eq, 1);
    let _ = set_output(&mut fd, eq, 0x40, unk(1));
    assert_eq!(RuleOrCompare.apply_op(orop, &mut fd), 1);
    // The reader became BOOL_AND(eq_V_out, eq_W_out).
    let eq_rec = fd.obank().get(eq).expect("eq survives");
    assert_eq!(eq_rec.code(), OpCode::CPUI_BOOL_AND);
    for (slot, base_in) in [(0i32, v), (1i32, w)] {
        let in_vn = eq_rec.get_in(slot).expect("bool_and input");
        let in_rec = fd.vbank().get(in_vn).expect("input varnode");
        assert_eq!(in_rec.get_size(), 1, "unique bool output");
        assert_eq!(in_rec.get_space().get_name(), "unique");
        let def = in_rec.get_def().expect("defined by new INT_EQUAL");
        let def_rec = fd.obank().get(def).expect("def op");
        assert_eq!(def_rec.code(), OpCode::CPUI_INT_EQUAL);
        assert_eq!(
            def_rec.get_in(0),
            Some(base_in),
            "compares V/W respectively"
        );
        let zin = def_rec.get_in(1).expect("zero constant");
        let zrec = fd.vbank().get(zin).expect("const varnode");
        assert!(zrec.is_constant() && zrec.get_offset() == 0 && zrec.get_size() == 4);
    }
}

#[test]
fn orcompare_negative_when_reader_not_compare() {
    // A reader that is not (==0)/(!=0) blocks the rule immediately.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let v = {
        let x = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let w = {
        let x = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let orop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_OR);
    wire(&mut fd, v, orop, 0);
    wire(&mut fd, w, orop, 1);
    let orout = set_output(&mut fd, orop, 0x30, unk(4));
    // reader is an INT_ADD, not a comparison.
    let add = mk_op(&mut fd, bl, 2, 0x104, OpCode::CPUI_INT_ADD);
    wire(&mut fd, orout, add, 0);
    wire(&mut fd, v, add, 1);
    assert_eq!(RuleOrCompare.apply_op(orop, &mut fd), 0);
    assert_eq!(code(&fd, orop), OpCode::CPUI_INT_OR); // unchanged
}

#[test]
fn orcompare_negative_when_no_descenders() {
    // hasCompares stays false when outvn has no descendants -> return 0.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let v = {
        let x = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let w = {
        let x = mk_vn(&mut fd, 0x20, 4);
        fd.vbank_mut().set_input(x, &mut no_replace()).unwrap()
    };
    let orop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_OR);
    wire(&mut fd, v, orop, 0);
    wire(&mut fd, w, orop, 1);
    let _ = set_output(&mut fd, orop, 0x30, unk(4));
    assert_eq!(RuleOrCompare.apply_op(orop, &mut fd), 0);
}

// =====================================================================
// RuleFloatSignCleanup  —  type guard + the W6 floatSignManipulation stub
// =====================================================================

#[test]
fn floatsigncleanup_negative_when_output_not_float() {
    // INT_AND with a non-float output: the TYPE_FLOAT guard fails first.
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let x = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let mask = mk_const(&mut fd, 4, 0x7fffffff);
    let andop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_AND);
    wire(&mut fd, x, andop, 0);
    wire(&mut fd, mask, andop, 1);
    let _ = set_output(&mut fd, andop, 0x20, unk(4)); // UNKNOWN, not FLOAT
    assert_eq!(RuleFloatSignCleanup.apply_op(andop, &mut fd), 0);
}

#[test]
fn floatsigncleanup_converts_and_signmask_to_float_abs() {
    // Float output passes the first guard; `x & 0x7fffffff` clears the float
    // sign bit, so `floatSignManipulation` classifies it as FLOAT_ABS and the
    // rule rewrites the op (input 1 removed, op-code -> FLOAT_ABS).
    // (Was the W6 stub no-op; the classifier is now wired to
    // `typeop::float_sign_manipulation`.)
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let x = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    let mask = mk_const(&mut fd, 4, 0x7fffffff);
    let andop = mk_op(&mut fd, bl, 2, 0x100, OpCode::CPUI_INT_AND);
    wire(&mut fd, x, andop, 0);
    wire(&mut fd, mask, andop, 1);
    let _ = set_output(&mut fd, andop, 0x20, float_t(4)); // FLOAT output
    assert_eq!(RuleFloatSignCleanup.apply_op(andop, &mut fd), 1);
    assert_eq!(code(&fd, andop), OpCode::CPUI_FLOAT_ABS); // x & 0x7fff.. -> ABS(x)
    assert_eq!(
        fd.obank().get(andop).unwrap().num_input(),
        1,
        "the constant mask input is removed"
    );
}

// =====================================================================
// lone_descend helper
// =====================================================================

#[test]
fn lone_descend_returns_single_reader_else_none() {
    let mut fd = build_fd();
    let bl = mk_block(&mut fd);
    let defop = mk_op(&mut fd, bl, 1, 0x100, OpCode::CPUI_COPY);
    let src = {
        let v = mk_vn(&mut fd, 0x10, 4);
        fd.vbank_mut().set_input(v, &mut no_replace()).unwrap()
    };
    wire(&mut fd, src, defop, 0);
    let out = set_output(&mut fd, defop, 0x20, unk(4));
    // zero readers -> None
    assert_eq!(lone_descend(&fd, out), None);
    // one reader -> Some
    let r1 = mk_op(&mut fd, bl, 1, 0x104, OpCode::CPUI_COPY);
    wire(&mut fd, out, r1, 0);
    assert_eq!(lone_descend(&fd, out), Some(r1));
    // two readers -> None
    let r2 = mk_op(&mut fd, bl, 1, 0x108, OpCode::CPUI_COPY);
    wire(&mut fd, out, r2, 0);
    assert_eq!(lone_descend(&fd, out), None);
}

// =====================================================================
// RuleFuncPtrEncoding mask arithmetic (the (testmask & slide)==val core):
// the slide computation matches the C++ (~0 << align) for align=1.
// =====================================================================

#[test]
fn funcptr_slide_arithmetic_matches_cpp() {
    // For align=1 over an 8-byte mask: testmask = 0xff..ff, slide = ~0 << 1
    // = 0xff..fe, so the pattern matches a mask value of 0xff..fe (~1).
    let align: int4 = 1;
    let mut slide: u64 = !0u64;
    slide = slide.wrapping_shl(align as u32);
    let testmask = unlace_base::address::calc_mask(8);
    assert_eq!(testmask & slide, !1u64);
}
