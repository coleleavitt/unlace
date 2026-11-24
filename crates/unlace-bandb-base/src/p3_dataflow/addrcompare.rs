//! P3 stack-address equality folding (unlace `addrcompare`).
//!
//! IDA's "Optimize away address comparisons" folds a comparison between the
//! addresses of distinct stack or global objects to a constant. This pass takes
//! the stack equality that the frame proves. An address is a stack address when
//! it is the function's spacebase value, or a `PTRSUB`/`INT_ADD` of that
//! spacebase with a constant, so two such addresses of one spacebase value are
//! that frame base plus two constants. They are equal exactly when the offsets
//! agree modulo the operand size, so `INT_EQUAL` folds to the match and
//! `INT_NOTEQUAL` to its negation. Ordering comparisons are left alone, since
//! their result depends on wrap-around of the frame base. Addresses from
//! different bases and global addresses are not classified yet.
//!
//! Gated by option `addrcompare` (default off). It runs from
//! [`ActionRangeFold`](crate::rangefold::ActionRangeFold), so the action
//! schedule is unchanged.

use unlace_base::address::calc_mask;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace) Fold equality between stack addresses of one frame (option `addrcompare`).
    /// See [`crate::addrcompare`].
    AddrCompare,
    "addrcompare",
    "stack-address equality folding",
    unset: false,
    shipped: false
);

/// The spacebase value an address is taken from, and the constant offset from it.
fn stack_address(data: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, uintb)> {
    let v = data.vbank().get(vn)?;
    if v.is_spacebase() {
        return Some((vn, 0));
    }
    let def = data.obank().get(v.get_def()?)?;
    if !matches!(def.code(), OpCode::CPUI_PTRSUB | OpCode::CPUI_INT_ADD) || def.num_input() != 2 {
        return None;
    }
    let base = def.get_in(0)?;
    let offset = data.vbank().get(def.get_in(1)?)?;
    if !data.vbank().get(base)?.is_spacebase() || !offset.is_constant() {
        return None;
    }
    Some((base, offset.get_offset()))
}

/// The value of an equality between two stack addresses of one frame, when the offsets decide it.
fn fold_value(data: &Funcdata, op: OpId) -> Option<bool> {
    let o = data.obank().get(op)?;
    let equal = match o.code() {
        OpCode::CPUI_INT_EQUAL => true,
        OpCode::CPUI_INT_NOTEQUAL => false,
        _ => return None,
    };
    if o.num_input() != 2 {
        return None;
    }
    let (a, b) = (o.get_in(0)?, o.get_in(1)?);
    let (base_a, off_a) = stack_address(data, a)?;
    let (base_b, off_b) = stack_address(data, b)?;
    let size = data.vbank().get(a)?.get_size();
    if base_a != base_b || !(1..=8).contains(&size) {
        return None;
    }
    let same = (off_a.wrapping_sub(off_b) & calc_mask(size)) == 0;
    Some(same == equal)
}

/// Fold every decided equality between stack addresses; returns the count.
pub fn addrcompare_apply(data: &mut Funcdata) -> int4 {
    let ops: Vec<OpId> = data.obank().iter_alive().collect();
    let folds: Vec<(OpId, bool)> = ops
        .into_iter()
        .filter_map(|op| fold_value(data, op).map(|value| (op, value)))
        .collect();
    for &(op, value) in &folds {
        let k = data.new_constant(1, value as uintb);
        data.op_remove_input(op, 1);
        data.op_set_input(op, k, 0)
            .expect("addrcompare: set constant");
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
    }
    folds.len() as int4
}
