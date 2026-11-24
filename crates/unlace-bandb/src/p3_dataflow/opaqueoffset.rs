//! Fold an `INT_EQUAL` or `INT_NOTEQUAL` between two values that share one
//! opaque base (option `opaqueoffset`, default off).
//!
//! Compilers emit loop guards and peel checks over addresses they know relative
//! to the stack pointer: `sp + 0x40 == sp + 8`, or `((sp + 0x40) - (sp + 4)) & 4`.
//! Each side is a known constant away from one opaque value, so the comparison
//! is decided although the value itself is unknown.
//!
//! A varnode is read as `base + offset`, wrapping at its own width, where
//! `base` is the SSA value no COPY, INT_ADD or INT_SUB explains and a constant
//! has no base. INT_ADD moves the offset by a constant addend, INT_SUB by a
//! constant subtrahend or, when both sides share a base, cancels it; INT_AND of
//! two constants folds; any other definition is an opaque base of its own.
//! Two sides with the same base differ by a constant, which decides `==` and
//! `!=` exactly. Ordering comparisons are not folded: `sp + 0x40 < sp + 8`
//! depends on `sp`. Identity is the SSA varnode, so one `VarnodeId` is one value
//! at every read.

use unlace_base::address::calc_mask;
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// Bound on the walk through definitions; past it a value is an opaque base.
const MAX_DEPTH: u32 = 48;

/// A value known to equal `base + offset` at its own width; `base == None`
/// means the constant `offset`.
#[derive(Clone, Copy, PartialEq, Eq)]
struct Linear {
    base: Option<VarnodeId>,
    offset: u64,
}

impl Linear {
    fn opaque(vn: VarnodeId) -> Linear {
        Linear {
            base: Some(vn),
            offset: 0,
        }
    }
}

/// The result of `op` when it is `INT_EQUAL` or `INT_NOTEQUAL` over two values
/// with the same base, or two constants, and the result is the same for every input.
pub fn prove(data: &Funcdata, op: OpId) -> Option<bool> {
    let o = data.obank().get(op)?;
    let (code, in0, in1) = (o.code(), o.get_in(0)?, o.get_in(1)?);
    let equal_test = match code {
        OpCode::CPUI_INT_EQUAL => true,
        OpCode::CPUI_INT_NOTEQUAL => false,
        _ => return None,
    };
    let size = data.vbank().get(in0)?.get_size();
    if !(1..=8).contains(&size) || data.vbank().get(in1)?.get_size() != size {
        return None;
    }
    let left = linear(data, in0, 0)?;
    let right = linear(data, in1, 0)?;
    if left.base != right.base {
        return None;
    }
    let equal = left.offset.wrapping_sub(right.offset) & calc_mask(size) == 0;
    Some(equal == equal_test)
}

/// Read `vn` as `base + offset`. Every refusal is an opaque base, which is
/// sound: the value is then only compared with itself.
fn linear(data: &Funcdata, vn: VarnodeId, depth: u32) -> Option<Linear> {
    let v = data.vbank().get(vn)?;
    let mask = calc_mask(v.get_size());
    if v.is_constant() {
        return Some(Linear {
            base: None,
            offset: v.get_offset() & mask,
        });
    }
    let Some(def) = v.get_def() else {
        return Some(Linear::opaque(vn));
    };
    if depth >= MAX_DEPTH {
        return Some(Linear::opaque(vn));
    }
    let o = data.obank().get(def)?;
    let form = match o.code() {
        OpCode::CPUI_COPY => linear(data, o.get_in(0)?, depth + 1)?,
        OpCode::CPUI_INT_ADD => {
            let a = linear(data, o.get_in(0)?, depth + 1)?;
            let b = linear(data, o.get_in(1)?, depth + 1)?;
            match (a.base, b.base) {
                (None, _) => Linear {
                    base: b.base,
                    offset: a.offset.wrapping_add(b.offset),
                },
                (_, None) => Linear {
                    base: a.base,
                    offset: a.offset.wrapping_add(b.offset),
                },
                _ => return Some(Linear::opaque(vn)),
            }
        }
        OpCode::CPUI_INT_SUB => {
            let a = linear(data, o.get_in(0)?, depth + 1)?;
            let b = linear(data, o.get_in(1)?, depth + 1)?;
            match (a.base, b.base) {
                (_, None) => Linear {
                    base: a.base,
                    offset: a.offset.wrapping_sub(b.offset),
                },
                (Some(x), Some(y)) if x == y => Linear {
                    base: None,
                    offset: a.offset.wrapping_sub(b.offset),
                },
                _ => return Some(Linear::opaque(vn)),
            }
        }
        OpCode::CPUI_INT_AND => {
            let a = linear(data, o.get_in(0)?, depth + 1)?;
            let b = linear(data, o.get_in(1)?, depth + 1)?;
            match (a.base, b.base) {
                (None, None) => Linear {
                    base: None,
                    offset: a.offset & b.offset,
                },
                _ => return Some(Linear::opaque(vn)),
            }
        }
        _ => return Some(Linear::opaque(vn)),
    };
    Some(Linear {
        offset: form.offset & mask,
        ..form
    })
}
