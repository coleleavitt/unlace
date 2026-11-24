//! (unlace `bitfieldarith`) Pure-arithmetic bitfield get and set on a register.
//!
//! The archived master pass collapsed plain shift-and-mask arithmetic on
//! register values into bitfield operations. Main recovers bitfields only from
//! struct-typed loads, stores and mapped varnodes, so the register form stays
//! shifts and masks. This rule restores it as two unspecialised builtins, read
//! off the INT_AND or INT_OR that ends the expression:
//!
//! * get: `(x >> s) & m`, a logical or arithmetic shift of a non-constant `x` by
//!   a constant `s` and a low mask `m` of `w` bits, with `s + w` inside `x`,
//!   becomes `bitfield_get(x, s, w)`;
//! * set: `(x & ~(m << s)) | ((y & m) << s)`, `m` a low mask of `w` bits and
//!   `x` the size of the result, with `s + w` inside the result, becomes
//!   `bitfield_set(x, y, s, w)`.
//!
//! Gated by option `bitfieldarith` (default off). The original's width bound
//! (shift plus width must fit the operand) is kept.

use unlace_base::types::{int4, uint4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::userop::{BUILTIN_BITFIELD_GET, BUILTIN_BITFIELD_SET};

crate::unlace_flag!(
    /// (unlace `bitfieldarith`) Recover pure-arithmetic bitfield get and set as
    /// `bitfield_get` / `bitfield_set` (see [`crate::bitfieldarith`]).
    BitFieldArith,
    "bitfieldarith",
    "Pure-arithmetic bitfield get and set",
    unset: false,
    shipped: false
);

/// The value of `vn` when it is a constant.
fn constant(data: &Funcdata, vn: VarnodeId) -> Option<u64> {
    data.vbank()
        .get(vn)
        .filter(|v| v.is_constant())
        .map(|v| v.get_offset())
}

/// The size in bytes of `vn`.
fn size_of(data: &Funcdata, vn: VarnodeId) -> Option<int4> {
    data.vbank().get(vn).map(|v| v.get_size())
}

/// All-ones at `size` bytes.
fn mask(size: int4) -> u64 {
    if size >= 8 {
        u64::MAX
    } else if size <= 0 {
        0
    } else {
        (1u64 << (8 * size as u32)) - 1
    }
}

/// `w` when `m` is the low mask `2^w - 1` with `1 <= w <= 64`.
fn low_mask_width(m: u64) -> Option<u32> {
    let w = m.count_ones();
    let full = if w >= 64 { u64::MAX } else { (1u64 << w) - 1 };
    (w > 0 && m == full).then_some(w)
}

/// `(v, m)` when the two inputs `a`, `b` of an AND are a value and a constant.
fn split_const(data: &Funcdata, a: VarnodeId, b: VarnodeId) -> Option<(VarnodeId, u64)> {
    match (constant(data, a), constant(data, b)) {
        (None, Some(m)) => Some((a, m)),
        (Some(m), None) => Some((b, m)),
        _ => None,
    }
}

/// The two inputs of `vn`'s defining op when that op is `code`.
fn def_binary(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
    let def = data.vbank().get(vn)?.get_def()?;
    let o = data.obank().get(def)?;
    if o.code() != code || o.num_input() != 2 {
        return None;
    }
    Some((o.get_in(0)?, o.get_in(1)?))
}

/// `(v, m)` when `vn` is `v & m` with a constant `m`.
fn and_const(data: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, u64)> {
    let (a, b) = def_binary(data, vn, OpCode::CPUI_INT_AND)?;
    split_const(data, a, b)
}

/// `(x, s)` when `vn` is `x OP s` with OP one of `codes`, a constant `s` in
/// slot 1 and a non-constant `x`.
fn shift_by(data: &Funcdata, vn: VarnodeId, codes: &[OpCode]) -> Option<(VarnodeId, u64)> {
    let def = data.vbank().get(vn)?.get_def()?;
    let o = data.obank().get(def)?;
    if !codes.contains(&o.code()) || o.num_input() != 2 {
        return None;
    }
    let x = o.get_in(0)?;
    let s = constant(data, o.get_in(1)?)?;
    constant(data, x).is_none().then_some((x, s))
}

/// A recovered access: the builtin, its varnode operands and its constant
/// operands, the constants printed at `size` bytes.
struct Access {
    builtin: uint4,
    vars: Vec<VarnodeId>,
    consts: Vec<u64>,
    size: int4,
}

/// `bitfield_get(x, s, w)` for the INT_AND `op` of `(x >> s) & m`.
fn match_get(data: &Funcdata, op: OpId) -> Option<Access> {
    let o = data.obank().get(op)?;
    let size = size_of(data, o.get_out()?)?;
    let (v, m) = split_const(data, o.get_in(0)?, o.get_in(1)?)?;
    let w = low_mask_width(m)?;
    let (x, s) = shift_by(data, v, &[OpCode::CPUI_INT_RIGHT, OpCode::CPUI_INT_SRIGHT])?;
    if w as u64 > 8 * size as u64 || s.checked_add(w as u64)? > 8 * size_of(data, x)? as u64 {
        return None;
    }
    Some(Access {
        builtin: BUILTIN_BITFIELD_GET,
        vars: vec![x],
        consts: vec![s, w as u64],
        size,
    })
}

/// `bitfield_set(x, y, s, w)` for the INT_OR `op`, either operand order.
fn match_set(data: &Funcdata, op: OpId) -> Option<Access> {
    let o = data.obank().get(op)?;
    let size = size_of(data, o.get_out()?)?;
    let (a, b) = (o.get_in(0)?, o.get_in(1)?);
    set_from(data, a, b, size).or_else(|| set_from(data, b, a, size))
}

/// The set form with `clear` as `x & ~(m << s)` and `insert` as `(y & m) << s`.
fn set_from(data: &Funcdata, clear: VarnodeId, insert: VarnodeId, size: int4) -> Option<Access> {
    let (t, s) = shift_by(data, insert, &[OpCode::CPUI_INT_LEFT])?;
    let (y, m) = and_const(data, t)?;
    let w = low_mask_width(m)?;
    if s.checked_add(w as u64)? > 8 * size as u64 {
        return None;
    }
    let (x, inv) = and_const(data, clear)?;
    let expected = !m.checked_shl(s as u32)? & mask(size);
    if constant(data, x).is_some() || inv != expected || size_of(data, x)? != size {
        return None;
    }
    Some(Access {
        builtin: BUILTIN_BITFIELD_SET,
        vars: vec![x, y],
        consts: vec![s, w as u64],
        size,
    })
}

/// Rewrite the INT_AND or INT_OR `op` as the CALLOTHER `access` describes.
fn rewrite(op: OpId, data: &mut Funcdata, access: Access) -> int4 {
    let id = data.new_constant(4, access.builtin as uintb);
    let mut inputs = vec![id];
    inputs.extend(access.vars);
    for c in access.consts {
        inputs.push(data.new_constant(access.size, c as uintb));
    }
    if data.op_set_all_input(op, &inputs).is_err() {
        return 0;
    }
    data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_CALLOTHER));
    1
}

/// Rewrite a pure-arithmetic bitfield get or set (see the module docs).
pub struct RuleBitFieldArith {
    group: String,
}

impl RuleBitFieldArith {
    pub fn new(group: &str) -> RuleBitFieldArith {
        RuleBitFieldArith {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleBitFieldArith {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_AND, OpCode::CPUI_INT_OR]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleBitFieldArith::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<BitFieldArith>().0 {
            return 0;
        }
        let access = match data.obank().get(op).map(|o| o.code()) {
            Some(OpCode::CPUI_INT_AND) => match_get(data, op),
            Some(OpCode::CPUI_INT_OR) => match_set(data, op),
            _ => None,
        };
        match access {
            Some(access) => rewrite(op, data, access),
            None => 0,
        }
    }
}
