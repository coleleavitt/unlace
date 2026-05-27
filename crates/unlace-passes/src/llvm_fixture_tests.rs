//! Fixture-style tests mined from LLVM and GCC test suites.
//!
//! These tests reproduce patterns from:
//! - llvm/test/Analysis/ValueTracking/ (KnownBits)
//! - llvm/test/Analysis/ScalarEvolution/ (SCEV)
//! - llvm/test/Analysis/MemorySSA/ (clobber walks)
//! - llvm/test/Transforms/InstCombine/ (pattern simplification)
//! - GCC tree-ssa-loop-niter tests
//!
//! Each test names its source pattern in the doc comment for traceability.

#![cfg(test)]

use smallvec::smallvec;
use unlace_ir::known_bits::{ConstantRange, KnownBits};
use unlace_ir::memory_ssa::MemoryLocation;
use unlace_ir::ssa::{VarnodeSlot, build_ssa};
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

use crate::known_bits_analysis::compute_known_bits;
use crate::memory_ssa_builder::{AccessSite, build_memory_ssa, clobber_for_load};
use crate::scalar_evolution::{LoopExitPredicate, compute_trip_count};

// ===========================================================================
// LLVM ValueTracking: KnownBits patterns
// ===========================================================================

/// llvm/test/Analysis/ValueTracking/knownbits-and-or-xor-lowbit.ll
/// Pattern: y = x & 0xFF — high bits known zero.
#[test]
fn llvm_known_bits_and_mask_high_zero() {
    let x = Varnode::reg(0, 8);
    let y = Varnode::reg(8, 8);
    let mut func = Function::new("t", BlockId(0), 0x1000);
    let mut b0 = BasicBlock::new(BlockId(0));
    b0.insns.push(IrInsn::with_output(
        IrOp::IntAnd,
        y,
        smallvec![x, Varnode::constant(0xFF, 8)],
        0x1000,
    ));
    b0.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![y], 0x1004));
    func.insert_block(b0);
    let ssa = build_ssa(func);
    let map = compute_known_bits(&ssa);
    let y_sv = *ssa
        .var_map
        .get(&(BlockId(0), 0, VarnodeSlot::Output))
        .unwrap();
    let kb = map.get(&y_sv);
    assert_eq!(kb.zero & 0xFFFFFFFFFFFFFF00, 0xFFFFFFFFFFFFFF00);
}

/// llvm/test/Analysis/ValueTracking/known-bits.ll
/// Pattern: x | const → bits known one for the const's set bits.
#[test]
fn llvm_known_bits_or_const_high_bits_known() {
    let x = Varnode::reg(0, 8);
    let y = Varnode::reg(8, 8);
    let mut func = Function::new("t", BlockId(0), 0x1000);
    let mut b0 = BasicBlock::new(BlockId(0));
    b0.insns.push(IrInsn::with_output(
        IrOp::IntOr,
        y,
        smallvec![x, Varnode::constant(0xF0, 8)],
        0x1000,
    ));
    b0.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![y], 0x1004));
    func.insert_block(b0);
    let ssa = build_ssa(func);
    let map = compute_known_bits(&ssa);
    let y_sv = *ssa
        .var_map
        .get(&(BlockId(0), 0, VarnodeSlot::Output))
        .unwrap();
    let kb = map.get(&y_sv);
    // Bits in 0xF0 should be known one.
    assert_eq!(kb.one & 0xF0, 0xF0);
}

/// llvm/test/Analysis/ValueTracking/known-bits.ll
/// Pattern: x << N → low N bits are known zero.
#[test]
fn llvm_known_bits_shl_low_bits_zero() {
    let x = Varnode::reg(0, 4);
    let y = Varnode::reg(8, 4);
    let mut func = Function::new("t", BlockId(0), 0x1000);
    let mut b0 = BasicBlock::new(BlockId(0));
    b0.insns.push(IrInsn::with_output(
        IrOp::IntLeft,
        y,
        smallvec![x, Varnode::constant(3, 4)],
        0x1000,
    ));
    b0.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![y], 0x1004));
    func.insert_block(b0);
    let ssa = build_ssa(func);
    let map = compute_known_bits(&ssa);
    let y_sv = *ssa
        .var_map
        .get(&(BlockId(0), 0, VarnodeSlot::Output))
        .unwrap();
    let kb = map.get(&y_sv);
    assert_eq!(kb.zero & 0x7, 0x7); // low 3 bits zero
}

/// llvm/test/Analysis/ValueTracking: zext narrows known bits.
#[test]
fn llvm_known_bits_zext_high_bits_zero() {
    let kb = KnownBits::from_constant(0x12, 8);
    let zext = kb.zext(32);
    // Bits 8..31 should be known zero.
    assert_eq!(zext.zero & 0xFFFFFF00, 0xFFFFFF00);
    assert_eq!(zext.constant_value(), Some(0x12));
}

/// InstCombine: (x & 0xFFFF) == 0xABCD pattern.
#[test]
fn instcombine_and_mask_then_compare_constant() {
    // Verify that after masking, KnownBits for x can be intersected with the
    // comparison's implication. Not done in the SSA solver yet, but the
    // primitives should support it.
    let after_and = KnownBits::unknown(32).and(&KnownBits::from_constant(0xFFFF, 32));
    // Bits 16..31 must be zero.
    assert_eq!(after_and.zero & 0xFFFF0000, 0xFFFF0000);
}

// ===========================================================================
// LLVM ConstantRange tests
// ===========================================================================

/// llvm/include/llvm/IR/ConstantRange.h: intersect of disjoint ranges is empty.
#[test]
fn llvm_constant_range_intersect_disjoint_empty() {
    let a = ConstantRange::unsigned(0, 10, 8);
    let b = ConstantRange::unsigned(20, 30, 8);
    let r = a.intersect(&b);
    assert!(r.is_empty());
}

/// llvm/include/llvm/IR/ConstantRange.h: union of adjacent ranges.
#[test]
fn llvm_constant_range_union_adjacent() {
    let a = ConstantRange::unsigned(0, 10, 8);
    let b = ConstantRange::unsigned(10, 20, 8);
    let r = a.union(&b);
    assert!(r.contains(5));
    assert!(r.contains(15));
}

/// llvm: single-element range → fully-known KnownBits.
#[test]
fn llvm_constant_range_single_element_known() {
    let r = ConstantRange::exact(0xAB, 8);
    let kb = r.to_known_bits();
    assert_eq!(kb.constant_value(), Some(0xAB));
}

// ===========================================================================
// LLVM ScalarEvolution: trip counts
// ===========================================================================

/// llvm/test/Analysis/ScalarEvolution/trip-count-ult.ll
/// for (i = 0; i < 100; i++) → 100 iterations.
#[test]
fn llvm_scev_trip_count_ult_100() {
    let tc = compute_trip_count(0, 1, 100, LoopExitPredicate::Ult);
    assert_eq!(tc, Some(100));
}

/// llvm/test/Analysis/ScalarEvolution/trip-count-step-not-1.ll
/// for (i = 0; i < 100; i += 4) → 25 iterations.
#[test]
fn llvm_scev_trip_count_step_4() {
    let tc = compute_trip_count(0, 4, 100, LoopExitPredicate::Ult);
    assert_eq!(tc, Some(25));
}

/// GCC tree-ssa-loop-niter: i != bound exact-hit.
#[test]
fn gcc_loop_niter_ne_exact_hit() {
    let tc = compute_trip_count(0, 5, 100, LoopExitPredicate::Ne);
    assert_eq!(tc, Some(20));
}

/// GCC tree-ssa-loop-niter: i != bound non-divisible → couldn't compute.
#[test]
fn gcc_loop_niter_ne_non_divisible() {
    let tc = compute_trip_count(0, 3, 100, LoopExitPredicate::Ne);
    assert_eq!(tc, None); // 100 % 3 != 0
}

/// GCC: zero-trip loop.
#[test]
fn gcc_loop_niter_zero_trip_when_start_at_bound() {
    let tc = compute_trip_count(10, 1, 10, LoopExitPredicate::Ult);
    assert_eq!(tc, Some(0));
}

// ===========================================================================
// LLVM MemorySSA: clobber walks
// ===========================================================================

/// llvm/test/Analysis/MemorySSA/basicaa-memcpy.ll
/// Disjoint stack slots don't clobber each other.
#[test]
fn llvm_memssa_disjoint_stack_slots() {
    let slot_a = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
    let slot_b = Varnode::new(SpaceId::Stack, (-16i64) as u64, 8);
    let r = Varnode::reg(0, 8);

    let mut func = Function::new("t", BlockId(0), 0x1000);
    let mut b0 = BasicBlock::new(BlockId(0));
    b0.insns.push(IrInsn::without_output(
        IrOp::Store,
        smallvec![slot_a, Varnode::constant(1, 8)],
        0x1000,
    ));
    b0.insns.push(IrInsn::without_output(
        IrOp::Store,
        smallvec![slot_b, Varnode::constant(2, 8)],
        0x1004,
    ));
    b0.insns.push(IrInsn::with_output(
        IrOp::Load,
        r,
        smallvec![slot_a],
        0x1008,
    ));
    b0.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![r], 0x100C));
    func.insert_block(b0);
    let ssa = build_ssa(func);

    let (graph, map) = build_memory_ssa(&ssa);
    let clobber = clobber_for_load(&ssa, BlockId(0), 2, &graph, &map);
    let store_a_id = map.by_site[&AccessSite {
        block: BlockId(0),
        insn_idx: 0,
    }];
    assert_eq!(clobber, Some(store_a_id));
}

/// llvm/test/Analysis/MemorySSA/function-clobber.ll
/// Call clobbers all memory (no mod-ref summary).
#[test]
fn llvm_memssa_call_clobbers_everything() {
    let slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
    let r = Varnode::reg(0, 8);

    let mut func = Function::new("t", BlockId(0), 0x1000);
    let mut b0 = BasicBlock::new(BlockId(0));
    b0.insns.push(IrInsn::without_output(
        IrOp::Store,
        smallvec![slot, Varnode::constant(1, 8)],
        0x1000,
    ));
    b0.insns.push(IrInsn::without_output(
        IrOp::Call,
        smallvec![Varnode::constant(0x2000, 8)],
        0x1004,
    ));
    b0.insns
        .push(IrInsn::with_output(IrOp::Load, r, smallvec![slot], 0x1008));
    b0.insns
        .push(IrInsn::without_output(IrOp::Return, smallvec![r], 0x100C));
    func.insert_block(b0);
    let ssa = build_ssa(func);

    let (graph, map) = build_memory_ssa(&ssa);
    let clobber = clobber_for_load(&ssa, BlockId(0), 2, &graph, &map);
    let call_id = map.by_site[&AccessSite {
        block: BlockId(0),
        insn_idx: 1,
    }];
    assert_eq!(clobber, Some(call_id));
}

// ===========================================================================
// LLVM IR pattern matching tests (InstCombine-style)
// ===========================================================================

/// InstCombine: (x | 0) == x, so OR with zero is a no-op.
#[test]
fn instcombine_or_with_zero_constant() {
    let kb = KnownBits::from_constant(0xAB, 8);
    let zero = KnownBits::from_constant(0, 8);
    let result = kb.or(&zero);
    assert_eq!(result.constant_value(), Some(0xAB));
}

/// InstCombine: (x & 0) == 0.
#[test]
fn instcombine_and_with_zero_constant() {
    let kb = KnownBits::unknown(8);
    let zero = KnownBits::from_constant(0, 8);
    let result = kb.and(&zero);
    assert_eq!(result.constant_value(), Some(0));
}

/// InstCombine: x ^ x == 0 — verified via known bits when x is constant.
#[test]
fn instcombine_xor_self_is_zero() {
    let kb = KnownBits::from_constant(0xAB, 8);
    let result = kb.xor(&kb);
    assert_eq!(result.constant_value(), Some(0));
}

/// InstCombine: shift by full width yields zero.
#[test]
fn instcombine_shift_by_width_is_zero() {
    let kb = KnownBits::from_constant(0xFF, 8);
    let shifted = kb.shl(8);
    assert_eq!(shifted.constant_value(), Some(0));
}

// ===========================================================================
// MemoryLocation alias predicates
// ===========================================================================

/// Two stack slots at different offsets must not alias.
#[test]
fn memloc_stack_disjoint_offsets() {
    let a = MemoryLocation::stack(-8, 4);
    let b = MemoryLocation::stack(-4, 4);
    assert!(a.must_not_alias(&b));
}

/// Same stack slot must alias.
#[test]
fn memloc_stack_same_slot_must_alias() {
    let a = MemoryLocation::stack(-8, 8);
    let b = MemoryLocation::stack(-8, 8);
    assert!(a.must_alias(&b));
}

/// Different spaces never alias.
#[test]
fn memloc_different_spaces_no_alias() {
    let a = MemoryLocation::stack(-8, 8);
    let b = MemoryLocation::global(0x1000, 8);
    assert!(a.must_not_alias(&b));
}

/// Unknown location aliases with anything.
#[test]
fn memloc_unknown_may_alias_anything() {
    let unknown = MemoryLocation::unknown();
    let stack = MemoryLocation::stack(-8, 8);
    assert!(!unknown.must_not_alias(&stack));
    assert!(!stack.must_not_alias(&unknown));
}
