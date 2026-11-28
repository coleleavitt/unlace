//! Close finite indirect dispatches without losing their incoming-return edge.
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::jumptable::JumpTable;
use std::collections::{BTreeSet, HashMap, HashSet};
use unlace_base::address::calc_mask;
use unlace_num::opcodes::OpCode;

/// What a dispatch can jump to: local constants and the incoming return.
#[derive(Default)]
#[doc(hidden)]
pub struct Destinations {
    pub constants: BTreeSet<u64>,
    pub returns: bool,
}

/// The destinations a bounded COPY/PHI/mask walk proves for `root`, or `None`
/// when any value is unknown.
#[doc(hidden)]
pub fn destinations(
    data: &Funcdata,
    root: VarnodeId,
    encoding: (i32, u64),
    mut budget: usize,
) -> Option<Destinations> {
    collect(data, root, encoding, &mut HashSet::new(), &mut budget)
}

fn raw_constant(
    data: &Funcdata,
    mut cursor: OpId,
    vn: VarnodeId,
    budget: &mut usize,
) -> Option<u64> {
    let value = data.vbank().get(vn)?;
    if !(1..=8).contains(&value.get_size()) {
        return None;
    }
    if value.is_constant() {
        return Some(value.get_offset());
    }
    let address = data.obank().get(cursor)?.get_addr().clone();
    while *budget != 0 {
        *budget -= 1;
        cursor = data.obank().dead_prev(cursor)?;
        let op = data.obank().get(cursor)?;
        if *op.get_addr() != address {
            return None;
        }
        let Some(out) = op.get_out().and_then(|v| data.vbank().get(v)) else {
            continue;
        };
        if out.get_addr() != value.get_addr() || out.get_size() != value.get_size() {
            continue;
        }
        return match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => {
                raw_constant(data, cursor, op.get_in(0)?, budget)
            }
            OpCode::CPUI_INT_2COMP => {
                raw_constant(data, cursor, op.get_in(0)?, budget).map(u64::wrapping_neg)
            }
            _ => None,
        }
        .map(|v| v & calc_mask(value.get_size()));
    }
    None
}

/// New direct/fallthrough edges into previously decoded instructions. Recovered
/// indirect edges are tracked separately because following them need not create
/// any new operations. Both can add values to a provisional dispatch.
///
/// Flow appends the operations it generates, and moves injected or inlined
/// sequences only next to other new operations, so the operations created
/// since `mark` are the dead list's tail.
#[doc(hidden)]
pub fn reentry_edges(
    data: &Funcdata,
    mark: u32,
    target: impl Fn(&unlace_base::address::Address) -> Option<OpId>,
    fallthru: impl Fn(OpId) -> Option<OpId>,
) -> Vec<(OpId, OpId)> {
    let old = |op: OpId| data.obank().get(op).is_some_and(|o| o.get_time() < mark);
    let mut fresh = Vec::new();
    let mut cursor = data.obank().dead_back();
    while let Some(id) = cursor.filter(|&id| !old(id)) {
        fresh.push(id);
        cursor = data.obank().dead_prev(id);
    }
    fresh.reverse();
    fresh
        .into_iter()
        .flat_map(|id| {
            let mut edges = Vec::new();
            let Some(op) = data.obank().get(id) else {
                return edges;
            };
            if matches!(op.code(), OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH)
                && let Some(to) = op
                    .get_in(0)
                    .and_then(|v| data.vbank().get(v))
                    .and_then(|v| target(v.get_addr()))
                    .filter(|&to| old(to))
                {
                    edges.push((id, to));
                }
            if !matches!(
                op.code(),
                OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN
            )
                && let Some(to) = fallthru(id).filter(|&to| old(to)) {
                    edges.push((id, to));
                }
            edges
        })
        .collect()
}

/// Operations one round's reachability walks may visit before every
/// provisional dispatch is assumed reachable.
const REACH_BUDGET: usize = 1 << 20;

/// For each provisional dispatch, the new edges whose destination reaches it
/// through decoded code. Only those edges can bring it another value, so only
/// those dispatches are retried. A walk over budget reaches every dispatch.
#[doc(hidden)]
pub fn reaching_edges(
    data: &Funcdata,
    dispatches: &BTreeSet<OpId>,
    edges: &[(OpId, OpId)],
    target: impl Fn(&unlace_base::address::Address) -> Option<OpId>,
    fallthru: impl Fn(OpId) -> Option<OpId>,
) -> std::collections::BTreeMap<OpId, Vec<(OpId, OpId)>> {
    let mut budget = REACH_BUDGET;
    let mut out: std::collections::BTreeMap<OpId, Vec<(OpId, OpId)>> = Default::default();
    for &edge in edges {
        let reached = reached(data, edge.1, dispatches, &mut budget, &target, &fallthru)
            .unwrap_or_else(|| dispatches.clone());
        for dispatch in reached {
            out.entry(dispatch).or_default().push(edge);
        }
    }
    out
}

/// The `wanted` operations reachable from `start` over raw flow: fallthrough
/// unless the operation always transfers, direct targets, every operation of an
/// instruction with an internal relative branch, and the recovered targets of
/// an indirect jump. `None` when the budget runs out.
fn reached(
    data: &Funcdata,
    start: OpId,
    wanted: &BTreeSet<OpId>,
    budget: &mut usize,
    target: &impl Fn(&unlace_base::address::Address) -> Option<OpId>,
    fallthru: &impl Fn(OpId) -> Option<OpId>,
) -> Option<BTreeSet<OpId>> {
    let mut found = BTreeSet::new();
    let mut seen = HashSet::new();
    let mut work = vec![start];
    while let Some(id) = work.pop() {
        if !seen.insert(id) {
            continue;
        }
        if *budget == 0 {
            return None;
        }
        *budget -= 1;
        if wanted.contains(&id) {
            found.insert(id);
            if found.len() == wanted.len() {
                break;
            }
        }
        let op = data.obank().get(id)?;
        match op.code() {
            OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH => {
                let destination = op.get_in(0).and_then(|v| data.vbank().get(v))?;
                if destination.is_constant() {
                    let address = op.get_addr();
                    let mut cursor = data.obank().dead_prev(id);
                    while let Some(prev) = cursor
                        .filter(|&p| data.obank().get(p).is_some_and(|o| o.get_addr() == address))
                    {
                        work.push(prev);
                        cursor = data.obank().dead_prev(prev);
                    }
                    work.extend(fallthru(id));
                } else {
                    work.extend(target(destination.get_addr()));
                    if op.code() == OpCode::CPUI_CBRANCH {
                        work.extend(fallthru(id));
                    }
                }
            }
            OpCode::CPUI_BRANCHIND => {
                if let Some(index) = data.find_jump_table_index(id) {
                    for address in data.get_jump_table(index as i32).address_table() {
                        work.extend(target(address));
                    }
                }
            }
            OpCode::CPUI_RETURN => {}
            _ if op.get_halt_type() != 0 => {}
            _ => work.extend(fallthru(id)),
        }
    }
    Some(found)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.indirectreturn_target_encoding = Some(target_encoding);
}

#[cfg(test)]
fn reentered_since(
    data: &Funcdata,
    mark: u32,
    target: impl Fn(&unlace_base::address::Address) -> Option<OpId>,
    fallthru: impl Fn(OpId) -> Option<OpId>,
) -> bool {
    !reentry_edges(data, mark, target, fallthru).is_empty()
}

/// The address mask emitted by the transfer itself, before SSA can combine it
/// with a source instruction's destructive mask.
#[doc(hidden)]
pub fn target_encoding(data: &Funcdata, branch: OpId) -> Option<(i32, u64)> {
    let op = data.obank().get(branch)?;
    let root = data.vbank().get(op.get_in(0)?)?;
    let size = root.get_size();
    if !(1..=8).contains(&size) {
        return None;
    }
    let mut result = calc_mask(size);
    let mut vn = op.get_in(0)?;
    let mut cursor = branch;
    for _ in 0..64 {
        let Some(previous) = data.obank().dead_prev(cursor) else {
            break;
        };
        cursor = previous;
        let producer = data.obank().get(cursor)?;
        if producer.get_addr() != op.get_addr() {
            break;
        }
        let Some(out) = producer.get_out().and_then(|v| data.vbank().get(v)) else {
            continue;
        };
        let value = data.vbank().get(vn)?;
        if out.get_addr() != value.get_addr() || out.get_size() != value.get_size() {
            continue;
        }
        match producer.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => vn = producer.get_in(0)?,
            OpCode::CPUI_INT_AND => {
                let a = producer.get_in(0)?;
                let b = producer.get_in(1)?;
                if let Some(bits) = raw_constant(data, cursor, a, &mut 64) {
                    result &= bits;
                    vn = b;
                } else {
                    let bits = raw_constant(data, cursor, b, &mut 64)?;
                    result &= bits;
                    vn = a;
                }
            }
            _ => return None,
        }
    }
    Some((size, result))
}

fn incoming_return(data: &Funcdata, vn: VarnodeId) -> bool {
    let Some(value) = data.vbank().get(vn).filter(|v| v.is_input()) else {
        return false;
    };
    let Some(ret) = data
        .get_arch()
        .indirect_return_addr
        .as_ref()
        .or(data.get_arch().default_return_addr.as_ref())
    else {
        return false;
    };
    let Some(space) = &ret.space else {
        return false;
    };
    if space.get_index() != value.get_space().get_index() {
        return false;
    }
    let size = value.get_size() as u32;
    let address_size = data
        .get_address()
        .get_space()
        .map_or(0, |s| s.get_addr_size());
    if size != ret.size && size != address_size {
        return false;
    }
    if size > ret.size {
        return false;
    }
    let low = ret.offset
        + if space.is_big_endian() {
            (ret.size - size) as u64
        } else {
            0
        };
    value.get_offset() == low
}

fn collect(
    data: &Funcdata,
    vn: VarnodeId,
    encoding: (i32, u64),
    seen: &mut HashSet<VarnodeId>,
    budget: &mut usize,
) -> Option<Destinations> {
    if *budget == 0 {
        return None;
    }
    *budget -= 1;
    if !seen.insert(vn) {
        return Some(Destinations::default());
    }
    let value = data.vbank().get(vn)?;
    if !(1..=8).contains(&value.get_size()) {
        return None;
    }
    if value.is_constant() {
        return Some(Destinations {
            constants: [value.get_offset()].into_iter().collect(),
            returns: false,
        });
    }
    if incoming_return(data, vn) {
        return Some(Destinations {
            constants: BTreeSet::new(),
            returns: true,
        });
    }
    let op = data.obank().get(value.get_def()?)?;
    let mut result = match op.code() {
        OpCode::CPUI_COPY | OpCode::CPUI_CAST => {
            collect(data, op.get_in(0)?, encoding, seen, budget)?
        }
        OpCode::CPUI_MULTIEQUAL => {
            let mut union = Destinations::default();
            for i in 0..op.num_input() {
                let part = collect(data, op.get_in(i)?, encoding, seen, budget)?;
                union.constants.extend(part.constants);
                union.returns |= part.returns;
            }
            union
        }
        OpCode::CPUI_INT_AND => {
            let rhs = data.vbank().get(op.get_in(1)?)?;
            if !rhs.is_constant() {
                return None;
            }
            let bits = rhs.get_offset() & calc_mask(value.get_size());
            if bits != calc_mask(value.get_size())
                && (value.get_size() > encoding.0
                    || bits != (encoding.1 & calc_mask(value.get_size())))
            {
                return None;
            }
            let next_encoding = if bits == calc_mask(value.get_size()) {
                encoding
            } else {
                (encoding.0, u64::MAX)
            };
            let mut part = collect(data, op.get_in(0)?, next_encoding, seen, budget)?;
            part.constants = part.constants.into_iter().map(|v| v & bits).collect();
            part
        }
        OpCode::CPUI_SUBPIECE => {
            let shift = data.vbank().get(op.get_in(1)?)?;
            if !shift.is_constant() || shift.get_offset() != 0 {
                return None;
            }
            let mut part = collect(data, op.get_in(0)?, encoding, seen, budget)?;
            if part.returns
                && value.get_size() as u32 != data.get_address().get_space()?.get_addr_size()
            {
                return None;
            }
            part.constants = part
                .constants
                .into_iter()
                .map(|v| v & calc_mask(value.get_size()))
                .collect();
            part
        }
        _ => return None,
    };
    result.constants = result
        .constants
        .into_iter()
        .map(|v| v & calc_mask(value.get_size()))
        .collect();
    Some(result)
}

/// Give the caller-return state a defined selector value without bypassing any
/// dispatcher operations or changing other readers of the return address.
/// Labels and guards must have been recovered before changing the selector.
#[doc(hidden)]
pub fn normalize_return_selector(data: &mut Funcdata, table: &JumpTable) -> bool {
    let Some(branch) = table.get_indirect_op() else {
        return false;
    };
    let Some(encoding) = table.unlace_target_encoding() else {
        return false;
    };
    let Some(root) = data.obank().get(branch).and_then(|op| op.get_in(0)) else {
        return false;
    };
    let budget = 128.max(4 * table.address_table().len());
    let Some(proof) = destinations(data, root, encoding, budget) else {
        return false;
    };
    if !proof.returns
        || proof.constants.is_empty()
        || !proof.constants.iter().all(|target| {
            table
                .address_table()
                .iter()
                .any(|address| address.get_offset() == *target)
        })
    {
        return false;
    }
    let size = data.vbank().get(root).unwrap().get_size();
    let mask = encoding.1 & calc_mask(size);
    let sentinel = (0..=proof.constants.len() as u64).find_map(|ordinal| {
        let mut value = 0;
        let mut source = ordinal;
        let mut bits = mask;
        while bits != 0 {
            let bit = bits & bits.wrapping_neg();
            if source & 1 != 0 {
                value |= bit;
            }
            source >>= 1;
            bits &= bits - 1;
        }
        (source == 0 && !proof.constants.contains(&value)).then_some(value)
    });
    let Some(sentinel) = sentinel else {
        return false;
    };
    let replacement = clone_selector(data, root, sentinel, &mut HashMap::new());
    data.op_set_input(branch, replacement, 0)
        .expect("validated branch selector");
    true
}

fn clone_selector(
    data: &mut Funcdata,
    vn: VarnodeId,
    sentinel: u64,
    copies: &mut HashMap<VarnodeId, VarnodeId>,
) -> VarnodeId {
    if let Some(&copy) = copies.get(&vn) {
        return copy;
    }
    let value = data.vbank().get(vn).expect("validated selector");
    if value.is_constant() {
        return vn;
    }
    let size = value.get_size();
    if incoming_return(data, vn) {
        return data.new_constant(size, sentinel);
    }
    let def = value.get_def().expect("validated selector definition");
    let producer = data.obank().get(def).unwrap();
    let code = producer.code();
    let address = producer.get_addr().clone();
    let block = producer.get_parent().expect("live selector producer");
    let inputs: Vec<_> = (0..producer.num_input())
        .map(|i| producer.get_in(i).unwrap())
        .collect();
    let op = data.new_op(inputs.len() as i32, address);
    data.op_set_opcode_code(op, code);
    let out = data.new_unique_out(size, op).expect("selector output");
    copies.insert(vn, out);
    for (slot, input) in inputs.into_iter().enumerate() {
        let copy = clone_selector(data, input, sentinel, copies);
        data.op_set_input(op, copy, slot as i32)
            .expect("selector input");
    }
    if code == OpCode::CPUI_MULTIEQUAL {
        data.op_insert_begin(op, block);
    } else {
        data.op_insert_before(op, def);
    }
    out
}

#[cfg(test)]
mod tests;
