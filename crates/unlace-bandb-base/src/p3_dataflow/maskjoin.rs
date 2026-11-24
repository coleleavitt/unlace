//! Two masks of one value joined into the value: `(x & m1) + (x & m2)`, `(x & m1) | (x & m2)`
//! and `(x & m1) ^ (x & m2)` with `m1 & m2 == 0` are `x & (m1 | m2)`, and `x` when the masks
//! cover every bit of it. ARM's `vmov d0, r0, r1` lifts as `zext(r1) << 32 + zext(r0)`; after a
//! call returns a `double` in r0:r1, the halves simplify to `v & 0xffffffff00000000` and
//! `v & 0xffffffff` of the same `v`, and the sum printed as two masked halves of a union cast.
//! A half may also still be the zero-extended piece moved back into place, `zext(SUB(v, 4)) << 32`
//! or `zext(SUB(v, 0))`, which keeps the same bits.
//! [`RuleMaskJoin`] is a plain algebraic identity: the masked values share no set bit, so the
//! sum, the or and the exclusive or are the same value.

use unlace_base::address::calc_mask;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::kuna_selectdiv::{constant, def_of, input, same, size};

/// `(x, m)` when `vn` is `x & m` for a constant `m`, or the same value as a
/// zero-extended piece of `x` moved back into place: `zext(SUB(x, k)) << 8k`
/// (`k` 0 without the shift), the piece also read as `SUB(x >> 8k, 0)`, keeps
/// exactly the bits of `x` from `8k` to the piece's top.
fn masked(data: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, uintb)> {
    if let Some(op) = def_of(data, vn, OpCode::CPUI_INT_AND) {
        let (a, b) = (input(data, op, 0)?, input(data, op, 1)?);
        return if let Some(m) = constant(data, b) {
            Some((a, m))
        } else {
            constant(data, a).map(|m| (b, m))
        };
    }
    let bytes = size(data, vn);
    let (zext, shift) = match def_of(data, vn, OpCode::CPUI_INT_LEFT) {
        Some(op) => (input(data, op, 0)?, constant(data, input(data, op, 1)?)?),
        None => (vn, 0),
    };
    if shift % 8 != 0 {
        return None;
    }
    let zop = def_of(data, zext, OpCode::CPUI_INT_ZEXT)?;
    if size(data, zext) != bytes {
        return None;
    }
    let piece = input(data, zop, 0)?;
    let (x, k) = piece_of(data, piece)?;
    let width = size(data, piece) as uintb;
    if k * 8 != shift || size(data, x) != bytes || k + width > bytes as uintb {
        return None;
    }
    let mask = calc_mask((k + width) as int4) & !calc_mask(k as int4);
    Some((x, mask))
}

/// `(x, k)` when `piece` is the bytes of `x` from `k`: `SUB(x, k)`, or
/// `SUB(x >> 8k, 0)` for a logical shift.
fn piece_of(data: &Funcdata, piece: VarnodeId) -> Option<(VarnodeId, uintb)> {
    let sub = def_of(data, piece, OpCode::CPUI_SUBPIECE)?;
    let (whole, k) = (input(data, sub, 0)?, constant(data, input(data, sub, 1)?)?);
    if k == 0 {
        if let Some(shr) = def_of(data, whole, OpCode::CPUI_INT_RIGHT) {
            let bits = constant(data, input(data, shr, 1)?)?;
            if bits % 8 == 0 && bits > 0 {
                return Some((input(data, shr, 0)?, bits / 8));
            }
        }
    }
    Some((whole, k))
}

/// The joined masks `(x, m1 | m2)` of a disjoint join, or None.
pub(crate) fn disjoint_join(data: &Funcdata, op: OpId) -> Option<(VarnodeId, uintb)> {
    let out = data.obank().get(op)?.get_out()?;
    let bytes = size(data, out);
    if bytes <= 0 || bytes as usize > std::mem::size_of::<uintb>() {
        return None;
    }
    let (x1, m1) = masked(data, input(data, op, 0)?)?;
    let (x2, m2) = masked(data, input(data, op, 1)?)?;
    let mask = calc_mask(bytes);
    if !same(data, x1, x2) || size(data, x1) != bytes || m1 & m2 & mask != 0 {
        return None;
    }
    if data.vbank().get(x1)?.is_constant() {
        return None;
    }
    Some((x1, (m1 | m2) & mask))
}

pub struct RuleMaskJoin {
    group: String,
}

impl RuleMaskJoin {
    pub fn new(group: &str) -> RuleMaskJoin {
        RuleMaskJoin {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleMaskJoin {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![
            OpCode::CPUI_INT_ADD,
            OpCode::CPUI_INT_OR,
            OpCode::CPUI_INT_XOR,
        ]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleMaskJoin::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let Some((x, joined)) = disjoint_join(data, op) else {
            return 0;
        };
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            return 0;
        };
        let bytes = size(data, out);
        if joined == calc_mask(bytes) {
            data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
            if data.op_set_input(op, x, 0).is_err() {
                return 0;
            }
            data.op_remove_input(op, 1);
        } else {
            let m = data.new_constant(bytes, joined);
            data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_INT_AND));
            if data.op_set_input(op, x, 0).is_err() || data.op_set_input(op, m, 1).is_err() {
                return 0;
            }
        }
        1
    }
}
