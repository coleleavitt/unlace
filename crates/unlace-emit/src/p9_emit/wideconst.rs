//! (kuna `wideconst`) A constant wider than 64 bits prints as one literal.
//!
//! A Varnode constant holds at most 64 bits, so a wider value the lifter
//! assembles from pieces (EVM's `PUSH20`/`PUSH32`, built from a 7-byte and an
//! 8-byte immediate and shifted by the continuation bytes) stays an expression
//! tree of `ZEXT`, `<<` and `|` over constants, and prints as
//! `((ZEXT732(0xffffffffffffff) << 0x40 | ZEXT832(0xffffffffffffffff)) << 0x28 |
//! ZEXT532(0xffffffffff))`. [`wide_literal`] evaluates such a tree exactly and
//! returns its hexadecimal literal, which the printer emits in place of the tree.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// Bytes of the widest value folded (a 256-bit EVM word).
const MAX_BYTES: usize = 32;
/// Deepest expression tree folded.
const MAX_DEPTH: u32 = 16;

/// A value of up to 256 bits as little-endian 64-bit limbs.
type Wide = [u64; 4];

fn mask(v: Wide, bytes: usize) -> Wide {
    let mut out = [0u64; 4];
    for (i, limb) in v.iter().enumerate() {
        let lo = i * 8;
        if lo >= bytes {
            break;
        }
        let keep = bytes - lo;
        out[i] = if keep >= 8 {
            *limb
        } else {
            limb & ((1u64 << (keep * 8)) - 1)
        };
    }
    out
}

fn shl(v: Wide, bits: u64) -> Wide {
    let mut out = [0u64; 4];
    if bits >= 256 {
        return out;
    }
    let (limbs, rem) = ((bits / 64) as usize, (bits % 64) as u32);
    for i in (limbs..4).rev() {
        let src = i - limbs;
        let mut x = v[src] << rem;
        if rem != 0 && src > 0 {
            x |= v[src - 1] >> (64 - rem);
        }
        out[i] = x;
    }
    out
}

fn or(a: Wide, b: Wide) -> Wide {
    [a[0] | b[0], a[1] | b[1], a[2] | b[2], a[3] | b[3]]
}

/// The exact value of `vn`, when it is a constant or an implied expression of
/// constants, `ZEXT`, constant left shifts and `|`. A `CONCAT` of two words
/// (a Go or Swift pair) is a pair, not a number, and is left alone.
fn value(fd: &Funcdata, vn: VarnodeId, root: bool, depth: u32) -> Option<Wide> {
    if depth > MAX_DEPTH {
        return None;
    }
    let v = fd.vbank().get(vn)?;
    let size = usize::try_from(v.get_size()).ok()?;
    if size == 0 || size > MAX_BYTES {
        return None;
    }
    if v.is_constant() {
        return Some(mask([v.get_offset(), 0, 0, 0], size));
    }
    if !root && !v.is_implied() {
        return None;
    }
    let op = fd.obank().get(v.get_def()?)?;
    let input = |slot: usize| {
        op.get_in(slot as i32)
            .and_then(|x| value(fd, x, false, depth + 1))
    };
    let out = match op.code() {
        OpCode::CPUI_INT_ZEXT => input(0)?,
        OpCode::CPUI_INT_LEFT => {
            let amount = fd.vbank().get(op.get_in(1)?)?;
            if !amount.is_constant() {
                return None;
            }
            shl(input(0)?, amount.get_offset())
        }
        OpCode::CPUI_INT_OR => or(input(0)?, input(1)?),
        _ => return None,
    };
    Some(mask(out, size))
}

/// The literal for the value `op` computes, when `op` produces more than eight
/// bytes from constants alone; `None` leaves the tree to the printer.
pub fn wide_literal(fd: &Funcdata, op: OpId) -> Option<String> {
    let o = fd.obank().get(op)?;
    if !matches!(o.code(), OpCode::CPUI_INT_LEFT | OpCode::CPUI_INT_OR) {
        return None;
    }
    let out = o.get_out()?;
    if fd.vbank().get(out)?.get_size() <= 8 {
        return None;
    }
    let v = value(fd, out, true, 0)?;
    Some(hex(v))
}

fn hex(v: Wide) -> String {
    let top = v.iter().rposition(|limb| *limb != 0).unwrap_or(0);
    let mut s = format!("0x{:x}", v[top]);
    for limb in v[..top].iter().rev() {
        s.push_str(&format!("{limb:016x}"));
    }
    s
}

crate::kuna_flag!(
    /// (kuna `wideconst`) Print a constant wider than 64 bits that the lifter
    /// assembled from pieces as one hexadecimal literal.
    WideConst,
    "wideconst",
    "wide constant literals",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn shifts_and_prints_across_limbs() {
        let a = shl([0x00ff_ffff_ffff_ffff, 0, 0, 0], 64);
        let b = or(a, [u64::MAX, 0, 0, 0]);
        let c = or(shl(b, 40), [0xff_ffff_ffff, 0, 0, 0]);
        assert_eq!(hex(mask(c, 32)), format!("0x{}", "f".repeat(40)));
        assert_eq!(hex([0x2a, 0, 0, 0]), "0x2a");
        assert_eq!(hex([0, 1, 0, 0]), "0x10000000000000000");
    }
}
