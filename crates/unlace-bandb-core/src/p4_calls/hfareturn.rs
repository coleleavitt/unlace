//! (unlace) A floating-point result returned in a higher vector register implies
//! the lower ones.
//!
//! AAPCS64 returns a homogeneous floating-point aggregate in consecutive vector
//! registers from `v0` (`struct { float x, y, z; }` in `s0`, `s1`, `s2`), and
//! the output model's `join_per_primitive` rule lays one out the same way. A
//! member the function returns untouched from its own argument
//! (`struct hfa mkh(float a) { return (struct hfa){a, 2 * a, 3 * a}; }` leaves
//! `s0` as it came in) is an unaffected input to the ancestor check, which
//! rejects it, and the output fill-in then cannot start at `s1`: the function
//! came out `void mkh(void)`. A computed value a RETURN alone reads in a higher
//! register (not a constant, not the zero fill a narrow write leaves) is a
//! result (a compiler does not compute a dead value), so
//! [`keep_lower_results`] also keeps the first lane of each lower floating
//! output entry the RETURNs read as the function's own input.
//!
//! A first lane that is a whole doubleword (`d0`, `d1`, x86-64's `xmm0` holding
//! two floats) is `zerofillreturn`'s: it retires the zero fill above one only
//! where every later register returns a member it proves, and keeps `q0` whole
//! otherwise (a `d1` reloaded from a frame slot a call result was stored to
//! through a pointer). So [`keep_lower_results`] retires the fill above
//! narrower lanes alone (`s0`, `s1`, `s2`), and only where two or more
//! registers have one: x86-64 SysV returns `struct { float x, y, z; }` as `x`,`y`
//! in `xmm0` and `z` in `xmm1`, and that keeps returning `xmm0`, the eight
//! bytes its callers read.

use crate::context::{OpId, VarnodeId};
use crate::dtype::type_class;
use crate::fspec::ParamActive;
use crate::funcdata::Funcdata;
use unlace_base::address::Address;
use unlace_base::space::VarnodeStorage;
use unlace_num::opcodes::OpCode;

/// The width of a whole doubleword lane, whose fill `zerofillreturn` decides.
const DOUBLEWORD: i32 = 8;

/// The index among the model's floating output entries of the entry holding
/// `[off, off+size)` in the space `space`.
fn float_entry(data: &Funcdata, space: usize, off: u64, size: i32) -> Option<usize> {
    let proto = data.get_func_proto();
    if !proto.has_model() {
        return None;
    }
    let list = proto.model().output_list()?;
    list.get_entry()
        .iter()
        .filter(|e| e.get_type() == type_class::TYPECLASS_FLOAT && e.get_join_record().is_none())
        .position(|e| {
            e.get_space().get_index() as usize == space
                && e.get_base() <= off
                && off.saturating_add(size.max(0) as u64)
                    <= e.get_base().saturating_add(e.get_size().max(0) as u64)
        })
}

/// Whether every live RETURN reads, in `slot`, a value the function computes:
/// neither a constant nor a COPY of one (the zero a narrow write leaves in the
/// upper lanes of a register is a COPY of zero).
fn computed(data: &Funcdata, return_ops: &[crate::context::OpId], slot: i32) -> bool {
    return_ops.iter().all(|&r| {
        let Some(o) = data.obank().get(r) else {
            return true;
        };
        if o.is_dead() || o.get_halt_type() != 0 || o.code() != OpCode::CPUI_RETURN {
            return true;
        }
        let Some(v) = o.get_in(slot).and_then(|v| data.vbank().get(v)) else {
            return false;
        };
        if v.is_constant() || v.is_input() {
            return false;
        }
        let Some(def) = v.get_def().and_then(|d| data.obank().get(d)) else {
            return false;
        };
        !(def.code() == OpCode::CPUI_COPY
            && def
                .get_in(0)
                .and_then(|c| data.vbank().get(c))
                .is_some_and(|c| c.is_constant()))
    })
}

/// Whether every live RETURN reads, in `slot`, a constant or a COPY of one.
fn constant_fill(data: &Funcdata, return_ops: &[crate::context::OpId], slot: i32) -> bool {
    return_ops.iter().all(|&r| {
        let Some(o) = data.obank().get(r) else {
            return true;
        };
        if o.is_dead() || o.get_halt_type() != 0 || o.code() != OpCode::CPUI_RETURN {
            return true;
        }
        let Some(v) = o.get_in(slot).and_then(|v| data.vbank().get(v)) else {
            return false;
        };
        v.is_constant()
            || v.get_def()
                .and_then(|d| data.obank().get(d))
                .is_some_and(|d| {
                    d.code() == OpCode::CPUI_COPY
                        && d.get_in(0)
                            .and_then(|c| data.vbank().get(c))
                            .is_some_and(|c| c.is_constant())
                })
    })
}

/// Retire, in each floating output entry whose first lane is active, the
/// active trials above that lane that every RETURN reads as a constant (the
/// zero fill of a narrow write), when two or more entries have an active first
/// lane: the members of an aggregate returned one per register, each a scalar
/// in its register's low lane, which the output rules join per primitive.
fn retire_member_fill(
    data: &Funcdata,
    active: &mut ParamActive,
    return_ops: &[crate::context::OpId],
    entries: &[(u64, i32)],
) {
    let lane_of = |active: &ParamActive, i: i32| -> Option<(usize, bool)> {
        let t = active.get_trial(i);
        let off = t.get_address().get_offset();
        entries
            .iter()
            .position(|(b, s)| *b <= off && off < b.saturating_add((*s).max(0) as u64))
            .map(|e| (e, off == entries[e].0))
    };
    let firsts: Vec<usize> = (0..active.get_num_trials())
        .filter(|&i| {
            let t = active.get_trial(i);
            t.is_active() && t.get_size() < DOUBLEWORD
        })
        .filter_map(|i| {
            lane_of(active, i)
                .filter(|(_, first)| *first)
                .map(|(e, _)| e)
        })
        .collect();
    if firsts.len() < 2 {
        return;
    }
    for i in 0..active.get_num_trials() {
        let Some((e, first)) = lane_of(active, i) else {
            continue;
        };
        if first || !firsts.contains(&e) || !active.get_trial(i).is_active() {
            continue;
        }
        if constant_fill(data, return_ops, active.get_trial(i).get_slot()) {
            active.get_trial_mut(i).mark_inactive();
        }
    }
}

/// Mark active the trial at the start of each floating output entry below the
/// highest one an active trial lies in, when every live RETURN reads there the
/// function's own input at that storage.
pub fn keep_lower_results(
    data: &Funcdata,
    active: &mut ParamActive,
    return_ops: &[crate::context::OpId],
) {
    if data.get_func_proto().is_output_locked() {
        return;
    }
    let mut placed = Vec::new();
    for i in 0..active.get_num_trials() {
        let t = active.get_trial(i);
        let Some(space) = t.get_address().get_space() else {
            continue;
        };
        let off = t.get_address().get_offset();
        if let Some(entry) = float_entry(data, space.get_index() as usize, off, t.get_size()) {
            let real = t.is_active() && computed(data, return_ops, t.get_slot());
            placed.push((i, entry, real));
        }
    }
    let Some(top) = placed
        .iter()
        .filter(|(_, _, a)| *a)
        .map(|(_, e, _)| *e)
        .max()
        .filter(|e| *e > 0)
    else {
        return;
    };
    let entries: Vec<(u64, i32)> = {
        let proto = data.get_func_proto();
        let Some(list) = proto.model().output_list() else {
            return;
        };
        list.get_entry()
            .iter()
            .filter(|e| {
                e.get_type() == type_class::TYPECLASS_FLOAT && e.get_join_record().is_none()
            })
            .map(|e| (e.get_base(), e.get_size()))
            .collect()
    };
    for lower in 0..top {
        if placed
            .iter()
            .any(|(i, e, _)| *e == lower && active.get_trial(*i).is_active())
        {
            continue;
        }
        let Some(&(base, _)) = entries.get(lower) else {
            break;
        };
        let Some(&(idx, _, _)) = placed.iter().find(|(i, e, _)| {
            *e == lower && active.get_trial(*i).get_address().get_offset() == base
        }) else {
            break;
        };
        let slot = active.get_trial(idx).get_slot();
        let own_input = return_ops.iter().all(|&r| {
            let Some(o) = data.obank().get(r) else {
                return true;
            };
            if o.is_dead() || o.get_halt_type() != 0 || o.code() != OpCode::CPUI_RETURN {
                return true;
            }
            o.get_in(slot)
                .and_then(|v| data.vbank().get(v))
                .is_some_and(|v| v.is_input())
        });
        if !own_input {
            break;
        }
        active.get_trial_mut(idx).mark_active();
    }
    retire_member_fill(data, active, return_ops, &entries);
}

/// Whether each of `members` (in trial order) is the first lane of a distinct
/// floating output entry, ascending: the members of an aggregate returned one
/// per vector register.
pub fn per_register_members(data: &Funcdata, members: &[(VarnodeId, Address, i32)]) -> bool {
    if members.len() < 2 {
        return false;
    }
    let proto = data.get_func_proto();
    if !proto.has_model() {
        return false;
    }
    let Some(list) = proto.model().output_list() else {
        return false;
    };
    let bases: Vec<(usize, u64)> = list
        .get_entry()
        .iter()
        .filter(|e| e.get_type() == type_class::TYPECLASS_FLOAT && e.get_join_record().is_none())
        .map(|e| (e.get_space().get_index() as usize, e.get_base()))
        .collect();
    let mut last = None;
    for (_, addr, _) in members {
        let Some(space) = addr.get_space() else {
            return false;
        };
        let Some(pos) = bases
            .iter()
            .position(|(s, b)| *s == space.get_index() as usize && *b == addr.get_offset())
        else {
            return false;
        };
        if last.is_some_and(|l| pos <= l) {
            return false;
        }
        last = Some(pos);
    }
    true
}

/// Join `members` (least significant first) into one value at a join address
/// with a chain of PIECEs inserted before `retop`, the way the output rules'
/// `join_per_primitive` lays an aggregate out.
pub fn join_members(
    data: &mut Funcdata,
    retop: OpId,
    members: &[(VarnodeId, Address, i32)],
) -> Option<VarnodeId> {
    let manage = data.get_arch().manage.clone();
    let at = data.obank().get(retop)?.get_addr().clone();
    let storage = |addr: &Address, size: i32| VarnodeStorage {
        space: addr.get_space().cloned(),
        offset: addr.get_offset(),
        size: size as u32,
    };
    let (first, rest) = members.split_first()?;
    let mut acc = first.0;
    let mut pieces = vec![storage(&first.1, first.2)];
    let mut total = first.2;
    for (vn, addr, size) in rest {
        pieces.insert(0, storage(addr, *size));
        total += *size;
        let join = manage.find_add_join(&pieces, 0).ok()?;
        let joinaddr = join.get_unified().get_addr();
        let newop = data.new_op(2, at.clone());
        data.op_set_opcode_code(newop, OpCode::CPUI_PIECE);
        let out = data.new_varnode_out(total, &joinaddr, newop).ok()?;
        if let Some(v) = data.vbank_mut().get_mut(out) {
            v.set_write_mask();
        }
        data.op_insert_before(newop, retop);
        data.op_set_input(newop, *vn, 0).ok()?;
        data.op_set_input(newop, acc, 1).ok()?;
        acc = out;
    }
    Some(acc)
}
