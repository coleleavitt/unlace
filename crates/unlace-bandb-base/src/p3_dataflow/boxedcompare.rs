//! An equality compare of a value against all ones is decided when every bit of the
//! value is known to be 1. A NaN-boxed register read compares the upper half of the
//! register with all ones; after a boxed write (`0xffffffff00000000 | zext(x)`), a boxed
//! load or a join of such values that test is true, and folding it removes the canonical-NaN
//! branch the unboxing would otherwise print. Under `fpargboxed` (RISC-V only) the upper half
//! of an FP argument register on entry, and of `fa0`/`fa1` written by a call, counts as all
//! ones too, as the psABI requires a float argument or return value narrower than FLEN to be
//! NaN-boxed. A half-precision read tests the upper 48 bits instead; those count as all ones
//! when they are exactly bits 16..63 of such a register, the shape only a half unboxing reads.
//! With 16-byte f registers (FLEN 128, `RISCV:LE:64:GQ`) bits 64..127 are the boxed ones, and
//! the double unboxing test (bytes 8..16) folds the same way.

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, SyscallFamily, VarnodeId};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `fpargboxed`) A RISC-V FP argument register on entry, and an FP return register
    /// after a call, holds a NaN-boxed value: its upper 32 bits are all ones.
    FpArgBoxed,
    "fpargboxed",
    "NaN-boxed RISC-V FP arguments",
    unset: false,
    shipped: true
);

/// How many argument registers (`fa0`..) `vn` may lie in under `fpargboxed`: all eight for an
/// input on entry, `fa0`/`fa1` for a call's output, none otherwise (or on another processor).
fn boxed_limit(data: &Funcdata, vn: VarnodeId) -> u32 {
    let Some(v) = data.vbank().get(vn) else {
        return 0;
    };
    let arch = data.get_arch();
    if arch.syscall_regs_family != Some(SyscallFamily::RiscV)
        || !arch.unlace_options.get::<FpArgBoxed>().0
    {
        return 0;
    }
    if v.is_input() {
        return 8;
    }
    let call = v
        .get_def()
        .and_then(|d| data.obank().get(d))
        .is_some_and(|o| matches!(o.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND));
    if call { 2 } else { 0 }
}

/// The FP argument register (its byte size, 8 or 16 for FLEN 64 or 128) that holds
/// `[offset, offset + size)` at byte `start` of it, if any.
fn argument_register(data: &Funcdata, vn: VarnodeId, limit: u32) -> Option<(u64, u64)> {
    let v = data.vbank().get(vn)?;
    let (space, offset, size) = (v.get_space(), v.get_offset(), v.get_size() as u64);
    let lookup = data.get_arch().manage().register_lookup()?;
    for reg in [8u64, 16] {
        for start in 0..reg {
            let Some(base) = offset.checked_sub(start) else {
                break;
            };
            if start + size > reg {
                continue;
            }
            // the exact name: a 16-byte f register (FLEN 128) has no 8-byte name at its offset
            let name = lookup.get_exact_register_name(space, base, reg as int4);
            let argument = name
                .strip_prefix("fa")
                .and_then(|n| n.parse::<u32>().ok())
                .is_some_and(|n| n < limit);
            if argument {
                return Some((reg, start));
            }
        }
    }
    None
}

/// The bits of `vn` known to be 1 under `fpargboxed` because it lies in the boxed upper part
/// of a RISC-V FP register the psABI boxes: an argument register (`fa0`..`fa7`) on entry, or a
/// return register (`fa0`, `fa1`) written by a call. With 8-byte registers bits 32..63 are
/// ones (anything narrower than a double is boxed), with 16-byte ones (FLEN 128) bits 64..127.
/// Heritage often splits the register, so the varnode can be a piece of it; a piece that is
/// exactly the register's bytes from 2, 4 or 8 to its end is the unboxing test of a value of
/// that size and counts as all ones.
fn boxed_register(data: &Funcdata, vn: VarnodeId) -> u64 {
    let Some(v) = data.vbank().get(vn) else {
        return 0;
    };
    let size = v.get_size();
    if !(1..=8).contains(&size) {
        return 0;
    }
    let limit = boxed_limit(data, vn);
    if limit == 0 {
        return 0;
    }
    let Some((reg, start)) = argument_register(data, vn, limit) else {
        return 0;
    };
    if start + size as u64 == reg && matches!(start, 2 | 4 | 8) && start > 0 {
        return unlace_base::address::calc_mask(size);
    }
    // register bit 8 * start + i is varnode bit i; the boxed bits start at 32 or 64
    let boxed = if reg == 8 { 32u64 } else { 64 };
    let low = boxed.saturating_sub(8 * start);
    if low >= 64 {
        return 0;
    }
    (u64::MAX << low) & unlace_base::address::calc_mask(size)
}

/// The byte size of `vn` when it is a whole boxed FP register (an argument on entry or a call
/// result, 8 or 16 bytes).
fn whole_boxed_size(data: &Funcdata, vn: VarnodeId) -> Option<u64> {
    let v = data.vbank().get(vn)?;
    let size = v.get_size() as u64;
    let limit = boxed_limit(data, vn);
    if limit == 0 || !matches!(size, 8 | 16) {
        return None;
    }
    match argument_register(data, vn, limit) {
        Some((reg, 0)) if reg == size => Some(size),
        _ => None,
    }
}

/// Is `vn` a whole boxed 8-byte FP register (an argument on entry or call result)?
fn whole_boxed(data: &Funcdata, vn: VarnodeId) -> bool {
    whole_boxed_size(data, vn) == Some(8)
}

/// Is `vn` a whole boxed FP register shifted right by 16 (the half unboxing test's source)?
fn upper_half_word(data: &Funcdata, vn: VarnodeId) -> bool {
    let Some(op) = data
        .vbank()
        .get(vn)
        .and_then(|v| v.get_def())
        .and_then(|d| data.obank().get(d))
    else {
        return false;
    };
    op.code() == OpCode::CPUI_INT_RIGHT
        && op
            .get_in(1)
            .and_then(|c| data.vbank().get(c))
            .is_some_and(|c| c.is_constant() && c.get_offset() == 16)
        && op.get_in(0).is_some_and(|w| whole_boxed(data, w))
}

/// Bits of `vn` that are 1 on every path through bit operations, shifts by a constant,
/// copies and joins; `budget` bounds the definitions visited.
fn known_ones(data: &Funcdata, vn: VarnodeId, budget: &mut u32) -> u64 {
    let Some(v) = data.vbank().get(vn) else {
        return 0;
    };
    let size = v.get_size();
    if !(1..=8).contains(&size) {
        return 0;
    }
    let mask = unlace_base::address::calc_mask(size);
    if v.is_constant() {
        return v.get_offset() & mask;
    }
    if v.is_input() {
        return boxed_register(data, vn) & mask;
    }
    if *budget == 0 {
        return 0;
    }
    *budget -= 1;
    let Some(op) = v.get_def().and_then(|id| data.obank().get(id)) else {
        return 0;
    };
    let constant = |slot: int4| {
        op.get_in(slot)
            .and_then(|i| data.vbank().get(i))
            .filter(|i| i.is_constant())
            .map(|i| i.get_offset())
    };
    let size_of = |slot: int4| {
        op.get_in(slot)
            .and_then(|i| data.vbank().get(i))
            .map_or(0, |i| i.get_size())
    };
    let mut input = |slot: int4| op.get_in(slot).map_or(0, |i| known_ones(data, i, budget));
    let ones = match op.code() {
        OpCode::CPUI_CALL | OpCode::CPUI_CALLIND => boxed_register(data, vn),
        OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT => input(0),
        OpCode::CPUI_INT_OR => input(0) | input(1),
        OpCode::CPUI_INT_AND => input(0) & input(1),
        OpCode::CPUI_INT_RIGHT => match constant(1) {
            Some(s) if s < 64 => input(0) >> s,
            _ => 0,
        },
        OpCode::CPUI_INT_LEFT => match constant(1) {
            Some(s) if s < 64 => input(0) << s,
            _ => 0,
        },
        OpCode::CPUI_PIECE => {
            let low = size_of(1);
            if !(1..8).contains(&low) {
                return 0;
            }
            input(0) << (low * 8) | input(1)
        }
        OpCode::CPUI_SUBPIECE => match constant(1) {
            // the unboxing test of a value 2, 4 or 8 bytes wide: the register's bytes from there
            // to its end
            Some(shift)
                if matches!(shift, 2 | 4 | 8)
                    && op.get_in(0).and_then(|w| whole_boxed_size(data, w))
                        == Some(shift + size as u64) =>
            {
                mask
            }
            Some(0) if size == 6 && op.get_in(0).is_some_and(|w| upper_half_word(data, w)) => mask,
            Some(shift) if shift < 8 => input(0) >> (shift * 8),
            _ => 0,
        },
        OpCode::CPUI_MULTIEQUAL => (0..op.num_input()).fold(mask, |acc, slot| acc & input(slot)),
        _ => 0,
    };
    ones & mask
}

/// Fold `x == ~0` / `x != ~0` when every bit of `x` is known to be 1 (see the module docs).
pub struct RuleBoxedCompare {
    group: String,
}

impl RuleBoxedCompare {
    pub fn new(group: &str) -> RuleBoxedCompare {
        RuleBoxedCompare {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleBoxedCompare {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_EQUAL, OpCode::CPUI_INT_NOTEQUAL]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleBoxedCompare::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let Some(o) = data.obank().get(op) else {
            return 0;
        };
        let equal = o.code() == OpCode::CPUI_INT_EQUAL;
        let (Some(a), Some(b)) = (o.get_in(0), o.get_in(1)) else {
            return 0;
        };
        let all_ones = |id: VarnodeId| {
            data.vbank().get(id).is_some_and(|v| {
                v.is_constant()
                    && (1..=8).contains(&v.get_size())
                    && v.get_offset() == unlace_base::address::calc_mask(v.get_size())
            })
        };
        let value = if all_ones(b) {
            a
        } else if all_ones(a) {
            b
        } else {
            return 0;
        };
        let Some(size) = data.vbank().get(value).map(|v| v.get_size()) else {
            return 0;
        };
        if !(1..=8).contains(&size) || data.vbank().get(value).is_some_and(|v| v.is_constant()) {
            return 0;
        }
        let mask = unlace_base::address::calc_mask(size);
        if known_ones(data, value, &mut 64) != mask {
            return 0;
        }
        let result = data.new_constant(1, u64::from(equal));
        data.op_remove_input(op, 1);
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
        if data.op_set_input(op, result, 0).is_err() {
            return 0;
        }
        1
    }
}
