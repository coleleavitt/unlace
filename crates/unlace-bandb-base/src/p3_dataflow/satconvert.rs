//! A RISC-V `fcvt.w*`/`fcvt.l*` with `rtz` lifts as the ISA defines it: truncation, then three
//! clamps (NaN and values at or above the range give the maximum, values below it the minimum,
//! 0 for the unsigned forms), printed as `v = (int)x; if (x < -2147483648.0) v = -0x80000000;
//! ...`. That is the C conversion `(int)x` / `(unsigned)x`, whose out-of-range behaviour C leaves
//! undefined. Under `satconvert` (default on) [`RuleSatConvert`] replaces the outermost join of
//! such a ladder by the truncation it starts from, and the clamps die.

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::selectdiv::{constant, def_of, input, same, select_condition, size, source};

crate::kuna_flag!(
    /// (kuna `satconvert`) Print an exactly saturating float-to-integer conversion as the C cast.
    SatConvert,
    "satconvert",
    "saturating float-to-integer conversion as a cast",
    unset: false,
    shipped: true
);

/// One clamp of the ladder: the value the join takes when `cond` (a test of `x`) has `value`.
struct Clamp {
    cond: VarnodeId,
    value: bool,
    result: uintb,
}

/// The truncation `(x, signed-unknown)` a ladder starts from: `FLOAT_TRUNC(x)` at the result
/// width, or the low part of a wider one (the unsigned 32-bit forms convert through 64 bits).
fn truncation(data: &Funcdata, vn: VarnodeId) -> Option<VarnodeId> {
    let vn = source(data, vn);
    if let Some(op) = def_of(data, vn, OpCode::CPUI_FLOAT_TRUNC) {
        return input(data, op, 0);
    }
    let sub = def_of(data, vn, OpCode::CPUI_SUBPIECE)?;
    if constant(data, input(data, sub, 1)?) != Some(0) {
        return None;
    }
    let wide = source(data, input(data, sub, 0)?);
    let op = def_of(data, wide, OpCode::CPUI_FLOAT_TRUNC)?;
    input(data, op, 0)
}

fn half_to_f64(h: u16) -> f64 {
    let sign = if h >> 15 == 1 { -1.0 } else { 1.0 };
    let exp = i32::from((h >> 10) & 0x1f);
    let man = f64::from(h & 0x3ff);
    match exp {
        0 => sign * man * 2f64.powi(-24),
        31 if man == 0.0 => sign * f64::INFINITY,
        31 => f64::NAN,
        _ => sign * (1.0 + man / 1024.0) * 2f64.powi(exp - 15),
    }
}

/// The value of a `size`-byte IEEE float (half, single or double) with these bits.
fn float_of_bits(bits: u64, size: int4) -> Option<f64> {
    match size {
        2 => Some(half_to_f64(bits as u16)),
        4 => Some(f64::from(f32::from_bits(bits as u32))),
        8 => Some(f64::from_bits(bits)),
        _ => None,
    }
}

fn float_value(data: &Funcdata, vn: VarnodeId) -> Option<f64> {
    float_of_bits(constant(data, vn)?, size(data, vn))
}

/// The next `size`-byte float after the one with these bits, up or down; an infinity or NaN
/// is its own neighbour.
fn neighbour(bits: u64, size: int4, up: bool) -> Option<f64> {
    let width = 8 * u32::try_from(size).ok()?;
    let sign = 1u64 << (width - 1);
    let inf = match size {
        2 => 0x7c00,
        4 => 0x7f80_0000,
        8 => 0x7ff0_0000_0000_0000,
        _ => return None,
    };
    let (neg, mag) = (bits & sign != 0, bits & (sign - 1));
    if mag >= inf {
        return float_of_bits(bits, size);
    }
    let next = if neg != up {
        // away from zero
        bits + 1
    } else if mag == 0 {
        if up { 1 } else { sign | 1 }
    } else {
        bits - 1
    };
    float_of_bits(next, size)
}

/// `cond` evaluated at `p`, when it is a float test of `x` against a constant (through
/// BOOL_NEGATE), or None when it is not one.
fn evaluate(data: &Funcdata, cond: VarnodeId, x: VarnodeId, p: f64) -> Option<bool> {
    let mut cond = cond;
    let mut flip = false;
    while let Some(neg) = def_of(data, cond, OpCode::CPUI_BOOL_NEGATE) {
        flip = !flip;
        cond = input(data, neg, 0)?;
    }
    let op = data.vbank().get(cond)?.get_def()?;
    let o = data.obank().get(op)?;
    let r = match o.code() {
        OpCode::CPUI_FLOAT_NAN => {
            if !same(data, o.get_in(0)?, x) {
                return None;
            }
            p.is_nan()
        }
        OpCode::CPUI_FLOAT_LESS | OpCode::CPUI_FLOAT_LESSEQUAL => {
            let (a, b) = (o.get_in(0)?, o.get_in(1)?);
            let less = |l: f64, r: f64| {
                if o.code() == OpCode::CPUI_FLOAT_LESS {
                    l < r
                } else {
                    l <= r
                }
            };
            if same(data, a, x) {
                less(p, float_value(data, b)?)
            } else if same(data, b, x) {
                less(float_value(data, a)?, p)
            } else {
                return None;
            }
        }
        _ => return None,
    };
    Some(r != flip)
}

/// The float constants the clamps compare against, as (bits, size).
fn thresholds(data: &Funcdata, cond: VarnodeId) -> Vec<(u64, int4)> {
    let mut cond = cond;
    while let Some(neg) = def_of(data, cond, OpCode::CPUI_BOOL_NEGATE) {
        match input(data, neg, 0) {
            Some(c) => cond = c,
            None => return vec![],
        }
    }
    let Some(op) = data.vbank().get(cond).and_then(|v| v.get_def()) else {
        return vec![];
    };
    let Some(o) = data.obank().get(op) else {
        return vec![];
    };
    (0..o.num_input())
        .filter_map(|i| o.get_in(i))
        .filter(|&v| float_value(data, v).is_some())
        .filter_map(|v| Some((constant(data, v)?, size(data, v))))
        .collect()
}

/// The ladder ending at `phi`: its clamps, outermost first, the truncated `x` and the
/// truncation's value.
fn ladder(data: &Funcdata, phi: OpId) -> Option<(Vec<Clamp>, VarnodeId, VarnodeId)> {
    let mut clamps = Vec::new();
    let mut op = phi;
    for _ in 0..3 {
        let (cond, values) = select_condition(data, op)?;
        let o = data.obank().get(op)?;
        // a MULTIEQUAL never reads a constant directly: each clamp is a COPY of one
        let (a, b) = (source(data, o.get_in(0)?), source(data, o.get_in(1)?));
        let (slot, rest) = match (constant(data, a), constant(data, b)) {
            (Some(_), None) => (0usize, b),
            (None, Some(_)) => (1usize, a),
            _ => return None,
        };
        let result = constant(data, if slot == 0 { a } else { b })?;
        clamps.push(Clamp {
            cond,
            value: values[slot],
            result,
        });
        let rest = source(data, rest);
        match def_of(data, rest, OpCode::CPUI_MULTIEQUAL) {
            Some(inner) if clamps.len() < 3 => op = inner,
            _ => {
                let x = truncation(data, rest)?;
                return (clamps.len() == 3).then_some((clamps, x, rest));
            }
        }
    }
    None
}

/// Whether the ladder computes C's saturating conversion to a `bytes`-wide integer, signed or
/// unsigned, at every point where its tests can change: each threshold, its neighbours, the
/// infinities, zero and NaN. Neighbours are taken in the constant's own format, the format
/// `x` has, so a half bound such as -65504 is not tested at doubles no half input can be.
fn saturates(data: &Funcdata, clamps: &[Clamp], x: VarnodeId, bytes: int4) -> bool {
    let bits = 8 * bytes as u32;
    let mask = unlace_base::address::calc_mask(bytes);
    let mut points = vec![f64::NAN, f64::INFINITY, f64::NEG_INFINITY, 0.0, -0.5, -1.0];
    for c in clamps {
        for (b, sz) in thresholds(data, c.cond) {
            points.extend(
                [
                    float_of_bits(b, sz),
                    neighbour(b, sz, true),
                    neighbour(b, sz, false),
                ]
                .into_iter()
                .flatten(),
            );
        }
    }
    let pass = |signed: bool| {
        let (lo, hi, min, max) = if signed {
            (
                -(2f64.powi(bits as i32 - 1)),
                2f64.powi(bits as i32 - 1),
                1u64 << (bits - 1),
                mask >> 1,
            )
        } else {
            (0.0, 2f64.powi(bits as i32), 0, mask)
        };
        points.iter().all(|&p| {
            let want = if p.is_nan() || p >= hi {
                max
            } else if p.trunc() < lo {
                min
            } else {
                (p.trunc() as i128 as u64) & mask
            };
            let mut got: Option<u64> = (!p.is_nan() && p.trunc() >= lo && p < hi)
                .then(|| (p.trunc() as i128 as u64) & mask);
            for c in clamps.iter().rev() {
                match evaluate(data, c.cond, x, p) {
                    Some(v) if v == c.value => got = Some(c.result & mask),
                    Some(_) => {}
                    None => return false,
                }
            }
            got == Some(want)
        })
    };
    pass(true) || pass(false)
}

/// Collapse an exactly saturating conversion ladder to its truncation (see the module docs).
pub struct RuleSatConvert {
    group: String,
}

impl RuleSatConvert {
    pub fn new(group: &str) -> RuleSatConvert {
        RuleSatConvert {
            group: group.to_string(),
        }
    }
}

impl Rule for RuleSatConvert {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_MULTIEQUAL]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(RuleSatConvert::new(&self.group)) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().kuna_options.get::<SatConvert>().0 {
            return 0;
        }
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            return 0;
        };
        let Some((clamps, x, trunc)) = ladder(data, op) else {
            return 0;
        };
        let bytes = size(data, out);
        if !(4..=8).contains(&bytes)
            || size(data, trunc) != bytes
            || !saturates(data, &clamps, x, bytes)
        {
            return 0;
        }
        if data.total_replace(out, trunc).is_err() {
            return 0;
        }
        1
    }
}
