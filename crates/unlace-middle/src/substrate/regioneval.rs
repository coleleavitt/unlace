//! Constant folding and branch helpers over a function's IR, shared by the passes that prove a
//! loop or a guard (`strlenscan`, `repstring`, `vaarg`, `bitidioms`, the loop and switch passes).

use unlace_num::opcodes::OpCode::*;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::op::PcodeOp;

#[inline]
#[doc(hidden)]
pub fn op(data: &Funcdata, id: OpId) -> Option<&PcodeOp> {
    data.obank().get(id)
}

#[inline]
#[doc(hidden)]
pub fn size(data: &Funcdata, v: VarnodeId) -> Option<i32> {
    data.vbank().get(v).map(|n| n.get_size())
}

#[doc(hidden)]
pub fn constant(data: &Funcdata, v: VarnodeId) -> Option<u64> {
    let n = data.vbank().get(v)?;
    n.is_constant().then(|| n.get_offset())
}

/// `v`'s value when it is a constant or a chain of COPYs of one.
#[doc(hidden)]
pub fn copied_constant(data: &Funcdata, mut v: VarnodeId) -> Option<u64> {
    for _ in 0..8 {
        if let Some(k) = constant(data, v) {
            return Some(k);
        }
        let d = op(data, data.vbank().get(v)?.get_def()?)?;
        if d.code() != CPUI_COPY {
            return None;
        }
        v = d.get_in(0)?;
    }
    None
}

#[doc(hidden)]
pub fn mask(width: i32) -> u64 {
    if width >= 8 {
        u64::MAX
    } else {
        (1u64 << (8 * width)) - 1
    }
}

/// The successors a CBRANCH block takes when its condition is true and false.
#[doc(hidden)]
pub fn taken(data: &Funcdata, b: BlockId) -> Option<(BlockId, BlockId)> {
    let fb = data.bblocks_ref().block(b);
    if fb.size_out() != 2 {
        return None;
    }
    let tail = op(data, data.bb_op_tail(b)?)?;
    if tail.code() != CPUI_CBRANCH {
        return None;
    }
    let (t, f) = (fb.get_true_out(), fb.get_false_out());
    Some(if tail.is_boolean_flip() {
        (f, t)
    } else {
        (t, f)
    })
}

/// The value of `v` with each `(leaf, value)` of `env` substituted, following
/// only ops defined in `region`; `None` when `v` reads anything else.
#[doc(hidden)]
pub fn eval(
    data: &Funcdata,
    v: VarnodeId,
    env: &[(VarnodeId, u64)],
    region: &[BlockId],
    depth: u32,
) -> Option<u64> {
    if let Some(&(_, x)) = env.iter().find(|(leaf, _)| *leaf == v) {
        return Some(x);
    }
    let width = size(data, v)?;
    if width > 8 || depth > 32 {
        return None;
    }
    if let Some(k) = constant(data, v) {
        return Some(k & mask(width));
    }
    let d = data.vbank().get(v)?.get_def()?;
    let o = op(data, d)?;
    if !region.contains(&o.get_parent()?) {
        return None;
    }
    let arg = |i: i32| -> Option<(u64, i32)> {
        let a = o.get_in(i)?;
        Some((eval(data, a, env, region, depth + 1)?, size(data, a)?))
    };
    let sext = |x: u64, w: i32| -> i64 {
        let s = 64 - 8 * w.min(8) as u32;
        ((x << s) as i64) >> s
    };
    let m = mask(width);
    let r = match o.code() {
        CPUI_COPY => arg(0)?.0,
        CPUI_INT_ZEXT => arg(0)?.0,
        CPUI_INT_SEXT => {
            let (x, w) = arg(0)?;
            sext(x, w) as u64
        }
        CPUI_INT_NEGATE => !arg(0)?.0,
        CPUI_INT_2COMP => arg(0)?.0.wrapping_neg(),
        CPUI_BOOL_NEGATE => (arg(0)?.0 == 0) as u64,
        CPUI_POPCOUNT => arg(0)?.0.count_ones() as u64,
        CPUI_SUBPIECE => {
            let (x, _) = arg(0)?;
            let k = constant(data, o.get_in(1)?)?;
            if k >= 8 { 0 } else { x >> (8 * k) }
        }
        code => {
            let ((a, wa), (b, _)) = (arg(0)?, arg(1)?);
            match code {
                CPUI_INT_ADD => a.wrapping_add(b),
                CPUI_INT_SUB => a.wrapping_sub(b),
                CPUI_INT_MULT => a.wrapping_mul(b),
                CPUI_INT_AND | CPUI_BOOL_AND => a & b,
                CPUI_INT_OR | CPUI_BOOL_OR => a | b,
                CPUI_INT_XOR | CPUI_BOOL_XOR => a ^ b,
                CPUI_INT_LEFT => a.checked_shl(b as u32).unwrap_or(0),
                CPUI_INT_RIGHT => a.checked_shr(b as u32).unwrap_or(0),
                CPUI_INT_SRIGHT => (sext(a, wa) >> b.min(63)) as u64,
                CPUI_INT_EQUAL => (a == b) as u64,
                CPUI_INT_NOTEQUAL => (a != b) as u64,
                CPUI_INT_LESS => (a < b) as u64,
                CPUI_INT_LESSEQUAL => (a <= b) as u64,
                CPUI_INT_SLESS => (sext(a, wa) < sext(b, wa)) as u64,
                CPUI_INT_SLESSEQUAL => (sext(a, wa) <= sext(b, wa)) as u64,
                CPUI_INT_CARRY => (a.wrapping_add(b) & mask(wa) < a) as u64,
                CPUI_INT_SCARRY => {
                    let s = sext(a, wa).wrapping_add(sext(b, wa));
                    (sext(s as u64 & mask(wa), wa) != s) as u64
                }
                CPUI_INT_SBORROW => {
                    let s = sext(a, wa).wrapping_sub(sext(b, wa));
                    (sext(s as u64 & mask(wa), wa) != s) as u64
                }
                CPUI_PIECE => {
                    let lo = size(data, o.get_in(1)?)?;
                    if lo >= 8 {
                        return None;
                    }
                    (a << (8 * lo)) | b
                }
                _ => return None,
            }
        }
    };
    Some(r & m)
}
