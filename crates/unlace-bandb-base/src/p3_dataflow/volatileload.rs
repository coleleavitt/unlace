//! Keep a proven volatile load live while its constant address is still an SSA expression.
use crate::{
    context::{OpId, VarnodeId},
    funcdata::Funcdata,
    varnode::varnode_flags,
};
use std::collections::{BTreeMap, BTreeSet};
use unlace_base::{
    address::{Address, calc_mask},
    space::AddrSpace,
};
use unlace_num::opcodes::OpCode;

/// Values proven for written varnodes: `Some` is the constant, `None` a
/// varnode proven not to be one. Valid while the op graph is unchanged.
#[doc(hidden)]
pub type Memo = BTreeMap<VarnodeId, Option<u64>>;

/// Written varnodes one proof may evaluate beyond those already in the memo.
const BUDGET: u32 = 64;

/// Fold `id` through constant integer operations. Constant leaves are free;
/// a failure caused by the exhausted budget or a cycle is not memoized.
fn constant(
    data: &Funcdata,
    id: VarnodeId,
    memo: &mut Memo,
    visiting: &mut BTreeSet<VarnodeId>,
    budget: &mut u32,
) -> Option<u64> {
    if let Some(value) = memo.get(&id) {
        return *value;
    }
    let node = data.vbank().get(id)?;
    let size = node.get_size();
    if !(1..=8).contains(&size) {
        return None;
    }
    if node.is_constant() {
        return Some(node.get_offset() & calc_mask(size));
    }
    if *budget == 0 || !visiting.insert(id) {
        return None;
    }
    *budget -= 1;
    let value = node
        .get_def()
        .and_then(|def| data.obank().get(def))
        .and_then(|op| {
            let input = op.get_in(0)?;
            let a = constant(data, input, memo, visiting, budget)?;
            let value = match op.code() {
                OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT => a,
                OpCode::CPUI_INT_SEXT => {
                    let bits = data.vbank().get(input)?.get_size() * 8;
                    ((a << (64 - bits)) as i64 >> (64 - bits)) as u64
                }
                OpCode::CPUI_INT_ADD
                | OpCode::CPUI_INT_SUB
                | OpCode::CPUI_INT_AND
                | OpCode::CPUI_INT_OR
                | OpCode::CPUI_INT_XOR
                | OpCode::CPUI_INT_LEFT
                | OpCode::CPUI_INT_RIGHT
                | OpCode::CPUI_INT_MULT => {
                    let b = constant(data, op.get_in(1)?, memo, visiting, budget)?;
                    match op.code() {
                        OpCode::CPUI_INT_ADD => a.wrapping_add(b),
                        OpCode::CPUI_INT_SUB => a.wrapping_sub(b),
                        OpCode::CPUI_INT_AND => a & b,
                        OpCode::CPUI_INT_OR => a | b,
                        OpCode::CPUI_INT_XOR => a ^ b,
                        OpCode::CPUI_INT_LEFT => {
                            if b >= 64 {
                                0
                            } else {
                                a << b
                            }
                        }
                        OpCode::CPUI_INT_RIGHT => {
                            if b >= 64 {
                                0
                            } else {
                                a >> b
                            }
                        }
                        _ => a.wrapping_mul(b),
                    }
                }
                _ => return None,
            };
            Some(value & calc_mask(size))
        });
    visiting.remove(&id);
    if value.is_some() || *budget > 0 {
        memo.insert(id, value);
    }
    value
}

/// The volatile storage `(space index, byte offset, size)` a LOAD reads, when
/// its pointer folds to a constant without reading memory or guessing an input.
fn target(data: &Funcdata, id: OpId, memo: &mut Memo) -> Option<(i32, u64, i32)> {
    let op = data
        .obank()
        .get(id)
        .filter(|o| o.get_opcode().map(|t| t.get_opcode()) == Some(OpCode::CPUI_LOAD))?;
    let size = data.vbank().get(op.get_out()?)?.get_size();
    let space = data
        .vbank()
        .get(op.get_in(0)?)
        .filter(|v| v.is_constant())?;
    let manager = data.get_arch().manage();
    if space.get_offset() >= manager.num_spaces() as u64 {
        return None;
    }
    let space = manager.get_space(space.get_offset() as i32)?;
    let mut budget = BUDGET;
    let offset = constant(data, op.get_in(1)?, memo, &mut BTreeSet::new(), &mut budget)?;
    let addr = Address::new(
        space.clone(),
        AddrSpace::address_to_byte(offset, space.get_word_size()),
    );
    let properties = data.query_local_properties(&addr, size, op.get_addr())
        | data
            .get_arch()
            .query_global_properties(&addr, size, op.get_addr());
    (properties & varnode_flags::volatil != 0).then(|| (space.get_index(), addr.get_offset(), size))
}

/// Whether a LOAD provably reads volatile storage.
#[doc(hidden)]
pub fn is_volatile(data: &Funcdata, id: OpId) -> bool {
    is_volatile_with(data, id, &mut Memo::new())
}

/// [`is_volatile`] sharing `memo` across the LOADs of one unchanged op graph.
#[doc(hidden)]
pub fn is_volatile_with(data: &Funcdata, id: OpId, memo: &mut Memo) -> bool {
    if let Some(pointer) = data
        .get_arch()
        .types()
        .filter(|types| types.has_volatile_types())
        .and(data.obank().get(id))
        .filter(|op| op.code() == OpCode::CPUI_LOAD)
        .and_then(|op| op.get_in(1))
    {
        let node = data.vbank().get(pointer);
        if node
            .and_then(|node| node.get_type().get_ptr_to())
            .is_some_and(|ty| crate::typequal::is_volatile(&ty))
        {
            return true;
        }
        let mut budget = BUDGET;
        if crate::typequal::address_type(data, pointer, &mut budget)
            .and_then(|ty| ty.get_ptr_to())
            .is_some_and(|ty| crate::typequal::is_volatile(&ty))
        {
            return true;
        }
    }
    target(data, id, memo).is_some()
}

/// Whether a volatile LOAD repeats a read its instruction already makes:
/// another live LOAD at the same instruction address reads the same storage
/// and either `kept` holds for it or it was lifted first, so one read per
/// address per instruction survives however often the SLEIGH flag macros
/// re-load an operand.
#[doc(hidden)]
pub fn rereads(
    data: &Funcdata,
    id: OpId,
    memo: &mut Memo,
    kept: impl Fn(&Funcdata, OpId) -> bool,
) -> bool {
    let want = target(data, id, memo);
    if want.is_none() && !is_volatile_with(data, id, memo) {
        return false;
    }
    let Some(op) = data.obank().get(id) else {
        return false;
    };
    let time = op.get_time();
    let siblings: Vec<OpId> = data
        .obank()
        .iter_at(op.get_addr())
        .map(|(_, sibling)| sibling)
        .filter(|&sibling| sibling != id)
        .collect();
    siblings.into_iter().any(|sibling| {
        data.obank().get(sibling).is_some_and(|o| {
            let same = if let Some(want) = want {
                target(data, sibling, memo) == Some(want)
            } else {
                o.code() == OpCode::CPUI_LOAD
                    && o.get_in(1) == op.get_in(1)
                    && o.get_in(0)
                        .and_then(|vn| data.vbank().get(vn))
                        .map(|vn| vn.get_offset())
                        == op
                            .get_in(0)
                            .and_then(|vn| data.vbank().get(vn))
                            .map(|vn| vn.get_offset())
                    && o.get_out()
                        .and_then(|vn| data.vbank().get(vn))
                        .map(|vn| vn.get_size())
                        == op
                            .get_out()
                            .and_then(|vn| data.vbank().get(vn))
                            .map(|vn| vn.get_size())
            };
            !o.is_dead() && same && (kept(data, sibling) || o.get_time() < time)
        })
    })
}

#[cfg(test)]
mod tests;
