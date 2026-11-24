//! Tests moved out of `expression` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `expression` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{OpId, VarnodeId};
    pub(super) use crate::op::PcodeOpBank;
    pub(super) use crate::varnode::VarnodeBank;
    pub(super) use unlace_base::types::{int4, uintb};
    pub(super) use unlace_num::opcodes::{OpCode, get_booleanflip};
}
use crate::context::{ArchContext, OpId, TypeOp, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::expression::*;
use crate::expression::{
    AdditiveEdge, BooleanExpressionMatch, BooleanMatch, PcodeOpNode, TermOrder, boolean_match,
    functional_difference, functional_equality, functional_equality_level, pointer_equality,
    root_pointer, term_order,
};
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;
use crate::varnode::DefOpInfo;
use module_scope::*;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

// Unit tests for `expression.rs`.
//
// These build small hand-wired Varnode/PcodeOp graphs on a real [`Funcdata`]
// and pin the equality / term-order / boolean-match machinery against the C++
// semantics (`expression.cc`).  The term-order comparator and the
// functional-equality contingent-pair protocol are the load-bearing surfaces
// (`RuleTermOrder` and the constant-collapse rules consume them), so they get
// exhaustive coverage.

use std::rc::Rc;

// -----------------------------------------------------------------------------
// Fixture
// -----------------------------------------------------------------------------

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

fn const_space(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space(0).unwrap())
}

fn dt(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn opcode_flags(opc: OpCode) -> unlace_base::types::uint4 {
    // A pragmatic stand-in for the W6 op-info table: the property bits these tests
    // actually read (`branch`, `returns`, `booloutput`, `commutative`).
    match opc {
        OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND => {
            pcodeop_flags::branch
        }
        OpCode::CPUI_RETURN => pcodeop_flags::returns,
        // Boolean-output comparison ops (also commutative for EQUAL/NOTEQUAL).
        OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => {
            pcodeop_flags::booloutput | pcodeop_flags::commutative
        }
        OpCode::CPUI_BOOL_AND | OpCode::CPUI_BOOL_OR | OpCode::CPUI_BOOL_XOR => {
            pcodeop_flags::booloutput | pcodeop_flags::commutative
        }
        OpCode::CPUI_BOOL_NEGATE | OpCode::CPUI_INT_LESS | OpCode::CPUI_INT_SLESS => {
            pcodeop_flags::booloutput
        }
        // Commutative arithmetic/logical ops.
        OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_MULT
        | OpCode::CPUI_INT_AND
        | OpCode::CPUI_INT_OR
        | OpCode::CPUI_INT_XOR => pcodeop_flags::commutative,
        _ => 0,
    }
}

fn mk_op(fd: &mut Funcdata, inputs: int4, off: u64, opc: OpCode) -> OpId {
    let ram = ram_space(fd);
    let op = fd.new_op(inputs, Address::new(ram, off));
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, opcode_flags(opc), format!("{opc:?}")));
    op
}

/// A free (non-written) varnode at a ram offset.  A free non-spacebase varnode
/// may have at most ONE descendant (the C++ `addDescend` invariant), so this is
/// only for single-reader / leaf terms; use [`mk_input`] for shared operands.
fn mk_vn(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let ram = ram_space(fd);
    fd.vbank_mut()
        .create(size, Address::new(ram, off), dt(size))
}

/// A formal *input* varnode (allowed multiple descendants), for operands read by
/// more than one op.  Mirrors `setInputVarnode`; with a distinct address the
/// `xref` collision callback never fires, so a no-op thunk suffices.
fn mk_input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let ram = ram_space(fd);
    let vn = fd
        .vbank_mut()
        .create(size, Address::new(ram, off), dt(size));
    let mut noop_thunk = |_b: &mut crate::varnode::VarnodeBank,
                          _o: VarnodeId,
                          _n: VarnodeId|
     -> unlace_base::error::UnlaceResult<()> {
        panic!("mk_input: distinct addresses must not collide")
    };
    fd.vbank_mut().set_input(vn, &mut noop_thunk).unwrap()
}

/// A constant varnode.
fn mk_const(fd: &mut Funcdata, val: u64, size: int4) -> VarnodeId {
    let c = const_space(fd);
    fd.vbank_mut().create(size, Address::new(c, val), dt(size))
}

/// Mark `op` as the definition of a fresh written varnode at `off`/`size` and
/// return it.  Mirrors `newVarnodeOut` without the W4 property seeding: create a
/// defined varnode in the bank (`create_def`, which sets the `written` flag) then
/// set it as the op's output.
///
/// `create_def` runs `xref`, which only invokes the `replace_reads` callback on a
/// *location collision*.  Every test output here has a distinct address, so no
/// collision occurs and the callback never fires — a no-op thunk that ignores the
/// op bank is sufficient (it sidesteps the missing `banks_mut()` split accessor).
fn mk_out(fd: &mut Funcdata, op: OpId, off: u64, size: int4) -> VarnodeId {
    let ram = ram_space(fd);
    let seq = fd.obank().get(op).unwrap().get_seq_num().clone();
    let def = DefOpInfo {
        id: op,
        seqnum: seq,
    };
    let vn = {
        let mut noop_thunk = |_b: &mut crate::varnode::VarnodeBank,
                              _o: VarnodeId,
                              _n: VarnodeId|
         -> unlace_base::error::UnlaceResult<()> {
            panic!("mk_out: distinct addresses must not collide (xref replace fired)")
        };
        fd.vbank_mut()
            .create_def(size, Address::new(ram, off), dt(size), def, &mut noop_thunk)
            .unwrap()
    };
    fd.obank_mut().get_mut(op).unwrap().set_output(Some(vn));
    vn
}

/// Wire `reader` to read `vn` in `slot` (op input + descend link).
fn wire_read(fd: &mut Funcdata, reader: OpId, vn: VarnodeId, slot: int4) {
    fd.obank_mut()
        .get_mut(reader)
        .unwrap()
        .set_input(Some(vn), slot);
    fd.vbank_mut().add_descend(vn, reader).unwrap();
}

#[test]
fn functional_equality_level_contingent_single_input() {
    // Two COPY ops reading distinct (free) inputs: same opcode, 1 input.
    // level0(inputs) == 1 (contingent), so functionalEqualityLevel returns 1 and
    // res1[0]/res2[0] are the two input varnodes.
    let mut fd = build_fd();
    let in_a = mk_input(&mut fd, 0x100, 4); // non-free so level0 is contingent (1), not -1
    let in_b = mk_input(&mut fd, 0x200, 4);
    let cp1 = mk_op(&mut fd, 1, 0x1000, OpCode::CPUI_COPY);
    let out1 = mk_out(&mut fd, cp1, 0x300, 4);
    wire_read(&mut fd, cp1, in_a, 0);
    let cp2 = mk_op(&mut fd, 1, 0x1004, OpCode::CPUI_COPY);
    let out2 = mk_out(&mut fd, cp2, 0x400, 4);
    wire_read(&mut fd, cp2, in_b, 0);

    let mut r1 = [out1, out1];
    let mut r2 = [out2, out2];
    let res = functional_equality_level(out1, out2, &mut r1, &mut r2, fd.vbank(), fd.obank());
    assert_eq!(res, 1, "single-input contingent match returns 1 pair");
    assert_eq!(r1[0], in_a);
    assert_eq!(r2[0], in_b);
}

#[test]
fn functional_equality_level_commutative_flip() {
    // op1 = a + b ; op2 = b + a (commutative INT_ADD with same operands swapped).
    // The straight pairing (a,b)/(b,a) is contingent both slots; the flip detects
    // a==a, b==b and returns 0 (provably equal).  Uses the SAME varnodes so the
    // == identity test in level0 fires.
    let mut fd = build_fd();
    let a = mk_input(&mut fd, 0x100, 4); // shared by both adds -> must allow 2 descendants
    let b = mk_input(&mut fd, 0x200, 4);
    let add1 = mk_op(&mut fd, 2, 0x1000, OpCode::CPUI_INT_ADD);
    let out1 = mk_out(&mut fd, add1, 0x300, 4);
    wire_read(&mut fd, add1, a, 0);
    wire_read(&mut fd, add1, b, 1);
    let add2 = mk_op(&mut fd, 2, 0x1004, OpCode::CPUI_INT_ADD);
    let out2 = mk_out(&mut fd, add2, 0x400, 4);
    wire_read(&mut fd, add2, b, 0); // swapped
    wire_read(&mut fd, add2, a, 1);

    assert!(
        functional_equality(out1, out2, fd.vbank(), fd.obank()),
        "commutative INT_ADD with swapped identical operands is functionally equal"
    );
}
