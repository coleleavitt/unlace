//! Matching tests for [`super`]: the op-identity and head-hoist predicates.

use unlace_num::opcodes::OpCode;

use super::{Loc, OpShape, Operand, head_hoist_allowed, movable_code, same_op};

const REG: i32 = 4;
const RAM: i32 = 3;
const UNIQUE: i32 = 5;

fn reg(offset: u64, size: i32) -> Loc {
    Loc {
        space: REG,
        temp: false,
        offset,
        size,
    }
}

fn temp(offset: u64) -> Loc {
    Loc {
        space: UNIQUE,
        temp: true,
        offset,
        size: 8,
    }
}

fn konst(value: u64) -> Operand {
    Operand::Const { value, size: 8 }
}

fn call(target: u64) -> OpShape {
    OpShape {
        code: OpCode::CPUI_CALL,
        out: None,
        ins: vec![Operand::Storage(Loc {
            space: RAM,
            temp: false,
            offset: target,
            size: 8,
        })],
    }
}

fn copy(dst: Loc, value: u64) -> OpShape {
    OpShape {
        code: OpCode::CPUI_COPY,
        out: Some(dst),
        ins: vec![konst(value)],
    }
}

#[test]
fn equal_calls_and_copies_are_one_op() {
    assert!(same_op(&call(0x401000), &call(0x401000)));
    assert!(same_op(&copy(reg(0x38, 8), 5), &copy(reg(0x38, 8), 5)));
}

#[test]
fn any_difference_is_two_ops() {
    assert!(!same_op(&call(0x401000), &call(0x402000)));
    assert!(!same_op(&copy(reg(0x38, 8), 1), &copy(reg(0x38, 8), 2)));
    assert!(!same_op(&copy(reg(0x38, 8), 1), &copy(reg(0x30, 8), 1)));
    assert!(!same_op(&copy(reg(0x38, 8), 1), &copy(reg(0x38, 4), 1)));
}

#[test]
fn unique_temporaries_never_move() {
    let load = OpShape {
        code: OpCode::CPUI_LOAD,
        out: Some(reg(0, 8)),
        ins: vec![konst(1), Operand::Storage(temp(0x100))],
    };
    assert!(!same_op(&load, &load.clone()));
    let def = copy(temp(0x100), 7);
    assert!(!same_op(&def, &def.clone()));
}

#[test]
fn control_flow_and_markers_never_move() {
    for code in [
        OpCode::CPUI_BRANCH,
        OpCode::CPUI_CBRANCH,
        OpCode::CPUI_BRANCHIND,
        OpCode::CPUI_RETURN,
        OpCode::CPUI_MULTIEQUAL,
        OpCode::CPUI_INDIRECT,
    ] {
        assert!(!movable_code(code));
    }
    assert!(movable_code(OpCode::CPUI_CALL));
    assert!(movable_code(OpCode::CPUI_STORE));
    assert!(movable_code(OpCode::CPUI_INT_ADD));
}

#[test]
fn a_pure_op_may_not_write_the_condition() {
    let zf = reg(0x206, 1);
    assert!(!head_hoist_allowed(
        &copy(reg(0x206, 1), 0),
        &Operand::Storage(zf)
    ));
    assert!(head_hoist_allowed(
        &copy(reg(0x38, 8), 0),
        &Operand::Storage(zf)
    ));
    assert!(!head_hoist_allowed(
        &copy(reg(0x200, 8), 0),
        &Operand::Storage(zf)
    ));
}

#[test]
fn a_call_moves_before_the_branch_only_over_a_temporary_condition() {
    assert!(!head_hoist_allowed(
        &call(0x401000),
        &Operand::Storage(reg(0x206, 1))
    ));
    assert!(head_hoist_allowed(
        &call(0x401000),
        &Operand::Storage(temp(0x80))
    ));
    assert!(head_hoist_allowed(&call(0x401000), &konst(1)));
}

#[test]
fn overlap_is_per_space_and_per_byte() {
    assert!(reg(0, 8).overlaps(&reg(4, 4)));
    assert!(!reg(0, 4).overlaps(&reg(4, 4)));
    let other = Loc {
        space: RAM,
        temp: false,
        offset: 0,
        size: 8,
    };
    assert!(!reg(0, 8).overlaps(&other));
}
