//! Idiom recognition pass: detect common instruction patterns in IR
//! and replace them with semantic equivalents.
//!
//! Recognized idioms:
//! - `INT_XOR(v, v)` / `INT_SUB(v, v)` → `COPY 0` (self-zeroing)
//! - `INT_AND(v, all_ones)` → `COPY v` (identity mask)
//! - `INT_OR(v, 0)` / `INT_ADD(v, 0)` / `INT_XOR(v, 0)` → `COPY v` (identity additive)
//! - `INT_SUB(v, 0)` → `COPY v` (subtractive identity)
//! - `INT_MUL(v, 1)` → `COPY v` (identity multiplicative)
//! - `INT_DIV(v, 1)` / `INT_SDIV(v, 1)` → `COPY v` (division identity)
//! - `INT_REM(v, 1)` / `INT_SREM(v, 1)` → `COPY 0` (modulo one)
//! - `INT_LEFT(v, 0)` / `INT_RIGHT(v, 0)` / `INT_SRIGHT(v, 0)` → `COPY v` (shift by zero)
//! - `INT_AND(v, 0)` → `COPY 0` (annihilator)
//! - `INT_OR(v, all_ones)` → `COPY all_ones` (annihilator)
//! - `INT_AND(v, v)` / `INT_OR(v, v)` → `COPY v` (integer idempotent)
//! - `BOOL_AND(v, v)` / `BOOL_OR(v, v)` → `COPY v` (idempotent)
//! - `INT_RIGHT(v, bits-1)` → `INT_SLESS(v, 0)` (sign-bit extraction)
//! - `INT_CARRY(v, INT_2COMP(v))` → `INT_NOTEQUAL(v, 0)` (carry elimination)
//! - `INT_CARRY(v, 0)` → `COPY 0` (carry of zero)
//! - `INT_AND(INT_RIGHT(x, N*8), (1<<(K*8))-1)` → `SUBPIECE(x, N)` (byte extraction)
//! - `INT_AND(x, (1<<(K*8))-1)` → `SUBPIECE(x, 0)` (low-byte extraction)
//! - `INT_2COMP(INT_2COMP(x))` → `x` (double negation)
//! - `INT_NEGATE(INT_NEGATE(x))` → `x` (double bitwise NOT)
//! - `(x + a) - a → x`, `(x - a) + a → x` (additive cancellation)
//! - `(x op a) op b → x op (a*b)` for `+`, `*` constant fold
//! - `x + (-y) → x - y`, `x - (-y) → x + y` (negation absorption)
//! - `x * 2^n → x << n`, `x / 2^n → x >> n`, `x % 2^n → x & (2^n-1)` (strength reduction; unsigned div/rem only)
//! - `(x ^ y) ^ y → x` (XOR cancellation)
//! - `x | (x & y) → x`, `x & (x | y) → x` (absorption)
//! - `x & ~x → 0`, `x | ~x → all_ones`
//! - `~(x - 1) → -x`
//! - `(x << n) >> n → x & ((1 << (bits-n)) - 1)` (shift round-trip)
//! - `INT_SEXT(INT_SEXT(x))` → `INT_SEXT(x)` (chained sign extension)
//! - `INT_ZEXT(INT_ZEXT(x))` → `INT_ZEXT(x)` (chained zero extension)
//! - `SUBPIECE(ZEXT/SEXT(x), 0)` with output size ≤ source size → `COPY x` or `SUBPIECE(x, 0)`
//! - N consecutive `LOAD(ram, src+i*w)` + `STORE(ram, dst+i*w, loaded)` pairs → `Callother(__memcpy__, dst, src, N*w)`
//! - N consecutive `STORE(ram, dst+i*w, const)` with same const → `Callother(__memset__, dst, const, N*w)`
//!
//! Iterates internally to a fixed point.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Callother tag for rotate-left: `__ROL__(x, n)`.
///
/// Sits above the x87 FPU range (`0x310..0x318`) and below `0x400`.
const CALLOTHER_ROL: u64 = 0x320;

/// Callother tag for rotate-right: `__ROR__(x, n)`.
const CALLOTHER_ROR: u64 = 0x321;

/// Callother tag for absolute value: `__abs__(x)`.
const CALLOTHER_ABS: u64 = 0x322;

/// Callother tag for signed minimum: `__min__(a, b)`.
const CALLOTHER_MIN: u64 = 0x323;

/// Callother tag for signed maximum: `__max__(a, b)`.
const CALLOTHER_MAX: u64 = 0x324;

/// Callother tag for unrolled memcpy: `__memcpy__(dst, src, size)`.
const CALLOTHER_MEMCPY: u64 = 0x325;

/// Callother tag for unrolled memset: `__memset__(dst, val, size)`.
const CALLOTHER_MEMSET: u64 = 0x326;

/// Maximum number of consecutive Load+Store pairs (memcpy) or Store
/// instructions (memset) we will collapse. Prevents pathological matching.
const MAX_UNROLLED_OPS: usize = 64;

/// Recognizes common instruction idioms and replaces them with simpler
/// semantic equivalents (typically `COPY`).
pub struct IdiomRecognitionPass;

impl Pass for IdiomRecognitionPass {
    fn name(&self) -> &str {
        "idiom-recognition"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        const MAX_INNER: usize = 100;
        let func_name = func.function.name.clone();
        let mut changed_any = false;
        let mut iter = 0;
        loop {
            iter += 1;
            if iter > MAX_INNER {
                tracing::error!(
                    func = %func_name,
                    iters = MAX_INNER,
                    "idiom_recognition did not converge"
                );
                return Err(PassError::InvariantViolation {
                    message: format!(
                        "idiom_recognition did not converge on '{func_name}' after {MAX_INNER} iters",
                    ),
                });
            }
            let def_map = build_def_map(func);
            let mut changed = false;

            for block in func.function.blocks.values_mut() {
                for insn in &mut block.insns {
                    if let Some(replacement) = try_recognize(insn, &def_map) {
                        *insn = replacement;
                        changed = true;
                    }
                }
                changed |= try_recognize_sequences(&mut block.insns);
            }

            if changed {
                tracing::trace!(func = %func_name, iter, "idiom_recognition iter");
            }
            changed_any |= changed;
            if !changed {
                break;
            }
        }
        Ok(changed_any)
    }
}

/// Compute the all-ones mask for a given byte size.
///
/// `mask_for_size(4)` → `0xFFFF_FFFF`, `mask_for_size(8)` → `u64::MAX`.
fn mask_for_size(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (size as u32 * 8)) - 1
    }
}

/// Check whether a Varnode is a constant with the given value.
fn is_const_val(v: &Varnode, val: u64) -> bool {
    v.space == SpaceId::Const && v.offset == val
}

/// Check whether a Varnode is the all-ones constant for its byte size.
fn is_all_ones(v: &Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == mask_for_size(v.size)
}

/// Check whether `shift_amt` is `(size_of(value) * 8 - 1)`, i.e. the sign-bit position.
fn is_sign_bit_shift(value: &Varnode, shift_amt: &Varnode) -> bool {
    if shift_amt.space != SpaceId::Const || value.space == SpaceId::Const {
        return false;
    }
    let bits_minus_one = (value.size as u64) * 8 - 1;
    shift_amt.offset == bits_minus_one
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, IrInsn> {
    let mut map = BTreeMap::new();
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output {
                if output.space != SpaceId::Const {
                    map.insert(output, insn.clone());
                }
            }
        }
    }
    map
}

/// Check if `candidate` is `INT_2COMP(target)` by looking up its definition.
fn is_twos_complement_of(
    candidate: &Varnode,
    target: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> bool {
    if candidate.space == SpaceId::Const {
        return false;
    }
    if let Some(def_insn) = def_map.get(candidate) {
        def_insn.op == IrOp::Int2comp && def_insn.inputs.len() == 1 && def_insn.inputs[0] == *target
    } else {
        false
    }
}

/// Build a `COPY` instruction that replaces `insn`'s output with `source`.
fn make_copy(insn: &IrInsn, source: Varnode) -> IrInsn {
    IrInsn::with_output(
        IrOp::Copy,
        insn.output
            .expect("idiom-recognizable insn always has output"),
        smallvec::smallvec![source],
        insn.addr,
    )
}

fn low_byte_mask_count(v: &Varnode) -> Option<u8> {
    if v.space != SpaceId::Const {
        return None;
    }
    match v.offset {
        0xFF => Some(1),
        0xFFFF => Some(2),
        0xFF_FFFF => Some(3),
        0xFFFF_FFFF => Some(4),
        0xFF_FFFF_FFFF => Some(5),
        0xFFFF_FFFF_FFFF => Some(6),
        0xFF_FFFF_FFFF_FFFF => Some(7),
        _ => None,
    }
}

fn try_subpiece_from_and(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let output = insn.output?;
    let (value, mask) = if low_byte_mask_count(b).is_some() {
        (a, b)
    } else if low_byte_mask_count(a).is_some() {
        (b, a)
    } else {
        return None;
    };
    let mask_bytes = low_byte_mask_count(mask)?;
    if mask_bytes != output.size {
        return None;
    }
    if value.space == SpaceId::Const {
        return None;
    }

    if let Some(def_insn) = def_map.get(value) {
        if def_insn.op == IrOp::IntRight && def_insn.inputs.len() == 2 {
            let shift_src = def_insn.inputs[0];
            let shift_amt = def_insn.inputs[1];
            if shift_amt.space == SpaceId::Const && shift_amt.offset % 8 == 0 {
                let byte_offset = shift_amt.offset / 8;
                if byte_offset + (output.size as u64) <= shift_src.size as u64 {
                    return Some(IrInsn::with_output(
                        IrOp::Subpiece,
                        output,
                        smallvec::smallvec![shift_src, Varnode::constant(byte_offset, 4),],
                        insn.addr,
                    ));
                }
            }
        }
    }

    if (value.size as u64) > (output.size as u64) {
        return Some(IrInsn::with_output(
            IrOp::Subpiece,
            output,
            smallvec::smallvec![*value, Varnode::constant(0, 4)],
            insn.addr,
        ));
    }

    None
}

fn def_of<'a>(v: &Varnode, def_map: &'a BTreeMap<Varnode, IrInsn>) -> Option<&'a IrInsn> {
    if v.space == SpaceId::Const {
        return None;
    }
    def_map.get(v)
}

fn def_unary(v: &Varnode, op: IrOp, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<Varnode> {
    let def = def_of(v, def_map)?;
    if def.op == op && def.inputs.len() == 1 {
        Some(def.inputs[0])
    } else {
        None
    }
}

fn def_binary(
    v: &Varnode,
    op: IrOp,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<(Varnode, Varnode)> {
    let def = def_of(v, def_map)?;
    if def.op == op && def.inputs.len() == 2 {
        Some((def.inputs[0], def.inputs[1]))
    } else {
        None
    }
}

fn power_of_two_log(value: u64) -> Option<u8> {
    if value == 0 {
        return None;
    }
    if (value & (value - 1)) != 0 {
        return None;
    }
    Some(value.trailing_zeros() as u8)
}

fn make_replacement(insn: &IrInsn, op: IrOp, inputs: smallvec::SmallVec<[Varnode; 3]>) -> IrInsn {
    IrInsn::with_output(
        op,
        insn.output
            .expect("idiom-recognizable insn always has output"),
        inputs,
        insn.addr,
    )
}

fn try_add_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if let Some((x, c1)) = def_binary(a, IrOp::IntSub, def_map) {
        if c1 == *b {
            return Some(make_copy(insn, x));
        }
    }
    if let Some((x, c1)) = def_binary(b, IrOp::IntSub, def_map) {
        if c1 == *a {
            return Some(make_copy(insn, x));
        }
    }

    if b.space == SpaceId::Const {
        if let Some((x, c1)) = def_binary(a, IrOp::IntAdd, def_map) {
            if c1.space == SpaceId::Const {
                let folded = c1.offset.wrapping_add(b.offset) & mask_for_size(b.size);
                return Some(make_replacement(
                    insn,
                    IrOp::IntAdd,
                    smallvec::smallvec![x, Varnode::constant(folded, b.size)],
                ));
            }
        }
    }
    if a.space == SpaceId::Const {
        if let Some((x, c1)) = def_binary(b, IrOp::IntAdd, def_map) {
            if c1.space == SpaceId::Const {
                let folded = c1.offset.wrapping_add(a.offset) & mask_for_size(a.size);
                return Some(make_replacement(
                    insn,
                    IrOp::IntAdd,
                    smallvec::smallvec![x, Varnode::constant(folded, a.size)],
                ));
            }
        }
    }

    if let Some(y) = def_unary(b, IrOp::Int2comp, def_map) {
        return Some(make_replacement(
            insn,
            IrOp::IntSub,
            smallvec::smallvec![*a, y],
        ));
    }
    if let Some(y) = def_unary(a, IrOp::Int2comp, def_map) {
        return Some(make_replacement(
            insn,
            IrOp::IntSub,
            smallvec::smallvec![*b, y],
        ));
    }

    None
}

fn try_sub_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if let Some((x, c1)) = def_binary(a, IrOp::IntAdd, def_map) {
        if c1 == *b {
            return Some(make_copy(insn, x));
        }
        if x == *b {
            return Some(make_copy(insn, c1));
        }
    }

    if let Some(y) = def_unary(b, IrOp::Int2comp, def_map) {
        return Some(make_replacement(
            insn,
            IrOp::IntAdd,
            smallvec::smallvec![*a, y],
        ));
    }

    None
}

fn try_mult_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if b.space == SpaceId::Const {
        if let Some(shift) = power_of_two_log(b.offset) {
            if shift >= 1 && a.space != SpaceId::Const {
                return Some(make_replacement(
                    insn,
                    IrOp::IntLeft,
                    smallvec::smallvec![*a, Varnode::constant(shift as u64, b.size)],
                ));
            }
        }
        if let Some((x, c1)) = def_binary(a, IrOp::IntMult, def_map) {
            if c1.space == SpaceId::Const {
                let folded = c1.offset.wrapping_mul(b.offset) & mask_for_size(b.size);
                return Some(make_replacement(
                    insn,
                    IrOp::IntMult,
                    smallvec::smallvec![x, Varnode::constant(folded, b.size)],
                ));
            }
        }
    }
    if a.space == SpaceId::Const {
        if let Some(shift) = power_of_two_log(a.offset) {
            if shift >= 1 && b.space != SpaceId::Const {
                return Some(make_replacement(
                    insn,
                    IrOp::IntLeft,
                    smallvec::smallvec![*b, Varnode::constant(shift as u64, a.size)],
                ));
            }
        }
    }
    None
}

fn try_div_strength_reduction(insn: &IrInsn, a: &Varnode, b: &Varnode) -> Option<IrInsn> {
    if b.space != SpaceId::Const || a.space == SpaceId::Const {
        return None;
    }
    let shift = power_of_two_log(b.offset)?;
    if shift == 0 {
        return None;
    }
    Some(make_replacement(
        insn,
        IrOp::IntRight,
        smallvec::smallvec![*a, Varnode::constant(shift as u64, b.size)],
    ))
}

fn try_rem_strength_reduction(insn: &IrInsn, a: &Varnode, b: &Varnode) -> Option<IrInsn> {
    if b.space != SpaceId::Const || a.space == SpaceId::Const {
        return None;
    }
    let shift = power_of_two_log(b.offset)?;
    if shift == 0 {
        return None;
    }
    let mask_val = b.offset - 1;
    Some(make_replacement(
        insn,
        IrOp::IntAnd,
        smallvec::smallvec![*a, Varnode::constant(mask_val, b.size)],
    ))
}

fn try_xor_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if let Some((x, y)) = def_binary(a, IrOp::IntXor, def_map) {
        if y == *b && y.space != SpaceId::Const {
            return Some(make_copy(insn, x));
        }
        if x == *b && x.space != SpaceId::Const {
            return Some(make_copy(insn, y));
        }
    }
    if let Some((x, y)) = def_binary(b, IrOp::IntXor, def_map) {
        if y == *a && y.space != SpaceId::Const {
            return Some(make_copy(insn, x));
        }
        if x == *a && x.space != SpaceId::Const {
            return Some(make_copy(insn, y));
        }
    }
    None
}

fn try_and_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let output = insn.output?;
    if let Some(inner) = def_unary(b, IrOp::IntNegate, def_map) {
        if inner == *a {
            return Some(make_copy(insn, Varnode::constant(0, output.size)));
        }
    }
    if let Some(inner) = def_unary(a, IrOp::IntNegate, def_map) {
        if inner == *b {
            return Some(make_copy(insn, Varnode::constant(0, output.size)));
        }
    }

    if let Some((x, y)) = def_binary(b, IrOp::IntOr, def_map) {
        if x == *a || y == *a {
            return Some(make_copy(insn, *a));
        }
    }
    if let Some((x, y)) = def_binary(a, IrOp::IntOr, def_map) {
        if x == *b || y == *b {
            return Some(make_copy(insn, *b));
        }
    }
    None
}

fn try_or_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let output = insn.output?;
    if let Some(inner) = def_unary(b, IrOp::IntNegate, def_map) {
        if inner == *a {
            return Some(make_copy(
                insn,
                Varnode::constant(mask_for_size(output.size), output.size),
            ));
        }
    }
    if let Some(inner) = def_unary(a, IrOp::IntNegate, def_map) {
        if inner == *b {
            return Some(make_copy(
                insn,
                Varnode::constant(mask_for_size(output.size), output.size),
            ));
        }
    }

    if let Some((x, y)) = def_binary(b, IrOp::IntAnd, def_map) {
        if x == *a || y == *a {
            return Some(make_copy(insn, *a));
        }
    }
    if let Some((x, y)) = def_binary(a, IrOp::IntAnd, def_map) {
        if x == *b || y == *b {
            return Some(make_copy(insn, *b));
        }
    }
    None
}

fn try_shift_round_trip(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if b.space != SpaceId::Const {
        return None;
    }
    let shift = b.offset;
    if shift == 0 {
        return None;
    }
    let (x, inner_shift) = def_binary(a, IrOp::IntLeft, def_map)?;
    if inner_shift.space != SpaceId::Const || inner_shift.offset != shift {
        return None;
    }
    let bits = (insn.output?.size as u64) * 8;
    if shift >= bits {
        return None;
    }
    let mask_val = (1u64 << (bits - shift)) - 1;
    Some(make_replacement(
        insn,
        IrOp::IntAnd,
        smallvec::smallvec![x, Varnode::constant(mask_val, x.size)],
    ))
}

fn try_subpiece_simplify(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let output = insn.output?;
    if b.space != SpaceId::Const || b.offset != 0 {
        return None;
    }
    let def = def_of(a, def_map)?;
    if def.inputs.len() != 1 {
        return None;
    }
    if !matches!(def.op, IrOp::IntZext | IrOp::IntSext) {
        return None;
    }
    let source = def.inputs[0];

    if (output.size as u64) > (source.size as u64) {
        return None;
    }

    if output.size == source.size {
        return Some(make_copy(insn, source));
    }

    Some(make_replacement(
        insn,
        IrOp::Subpiece,
        smallvec::smallvec![source, Varnode::constant(0, 4)],
    ))
}

fn make_callother(insn: &IrInsn, tag: u64, args: smallvec::SmallVec<[Varnode; 3]>) -> IrInsn {
    let mut inputs = smallvec::SmallVec::<[Varnode; 3]>::new();
    inputs.push(Varnode::constant(tag, 8));
    inputs.extend(args);
    IrInsn::with_output(
        IrOp::Callother,
        insn.output.expect("idiom-recognizable insn always has output"),
        inputs,
        insn.addr,
    )
}

/// Branchless abs: `INT_SUB(INT_XOR(x, s), s)` where `s = INT_SRIGHT(x, bits-1)`.
fn try_abs_idiom(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    // insn is INT_SUB(xor_result, s)
    // a = INT_XOR(x, s), b = s, s = INT_SRIGHT(x, bits-1)
    let (xor_l, xor_r) = def_binary(a, IrOp::IntXor, def_map)?;
    let (sright_src, sright_amt) = def_binary(b, IrOp::IntSright, def_map)?;

    // s must be the same as one of the XOR operands
    // and the other XOR operand must be the SRIGHT source
    let x = if xor_r == *b && xor_l == sright_src && is_sign_bit_shift(&sright_src, &sright_amt) {
        xor_l
    } else if xor_l == *b && xor_r == sright_src && is_sign_bit_shift(&sright_src, &sright_amt) {
        xor_r
    } else {
        return None;
    };

    Some(make_callother(insn, CALLOTHER_ABS, smallvec::smallvec![x]))
}

/// Branchless min: `INT_ADD(b, INT_AND(d, s))` where `d = INT_SUB(a, b)`,
/// `s = INT_SRIGHT(d, bits-1)`.
fn try_min_idiom(
    insn: &IrInsn,
    lhs: &Varnode,
    rhs: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    // insn is INT_ADD(b_val, and_result)
    // Try both orderings: ADD(b, AND(d,s)) or ADD(AND(d,s), b)
    try_min_idiom_ordered(insn, lhs, rhs, def_map)
        .or_else(|| try_min_idiom_ordered(insn, rhs, lhs, def_map))
}

fn try_min_idiom_ordered(
    insn: &IrInsn,
    b_val: &Varnode,
    and_vn: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let (and_l, and_r) = def_binary(and_vn, IrOp::IntAnd, def_map)?;

    // One of and_l/and_r is d = INT_SUB(a, b), the other is s = INT_SRIGHT(d, bits-1)
    let (d_vn, s_vn) = if def_binary(&and_r, IrOp::IntSright, def_map).is_some() {
        (and_l, and_r)
    } else if def_binary(&and_l, IrOp::IntSright, def_map).is_some() {
        (and_r, and_l)
    } else {
        return None;
    };

    let (sub_a, sub_b) = def_binary(&d_vn, IrOp::IntSub, def_map)?;
    if sub_b != *b_val {
        return None;
    }

    let (sr_src, sr_amt) = def_binary(&s_vn, IrOp::IntSright, def_map)?;
    if sr_src != d_vn || !is_sign_bit_shift(&d_vn, &sr_amt) {
        return None;
    }

    Some(make_callother(insn, CALLOTHER_MIN, smallvec::smallvec![sub_a, sub_b]))
}

/// Branchless max: `INT_SUB(a, INT_AND(d, s))` where `d = INT_SUB(a, b)`,
/// `s = INT_SRIGHT(d, bits-1)`.
fn try_max_idiom(
    insn: &IrInsn,
    a_val: &Varnode,
    and_vn: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let (and_l, and_r) = def_binary(and_vn, IrOp::IntAnd, def_map)?;

    let (d_vn, s_vn) = if def_binary(&and_r, IrOp::IntSright, def_map).is_some() {
        (and_l, and_r)
    } else if def_binary(&and_l, IrOp::IntSright, def_map).is_some() {
        (and_r, and_l)
    } else {
        return None;
    };

    let (sub_a, sub_b) = def_binary(&d_vn, IrOp::IntSub, def_map)?;
    if sub_a != *a_val {
        return None;
    }

    let (sr_src, sr_amt) = def_binary(&s_vn, IrOp::IntSright, def_map)?;
    if sr_src != d_vn || !is_sign_bit_shift(&d_vn, &sr_amt) {
        return None;
    }

    Some(make_callother(insn, CALLOTHER_MAX, smallvec::smallvec![sub_a, sub_b]))
}

fn try_recognize_unary(
    insn: &IrInsn,
    _output: Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    if insn.inputs.len() != 1 {
        return None;
    }
    let inner = insn.inputs[0];

    match insn.op {
        IrOp::Int2comp => {
            if let Some(x) = def_unary(&inner, IrOp::Int2comp, def_map) {
                return Some(make_copy(insn, x));
            }
        }
        IrOp::IntNegate => {
            if let Some(x) = def_unary(&inner, IrOp::IntNegate, def_map) {
                return Some(make_copy(insn, x));
            }
            if let Some((x, c1)) = def_binary(&inner, IrOp::IntSub, def_map) {
                if is_const_val(&c1, 1) && x.space != SpaceId::Const {
                    return Some(make_replacement(
                        insn,
                        IrOp::Int2comp,
                        smallvec::smallvec![x],
                    ));
                }
            }
        }
        IrOp::IntSext => {
            if let Some(x) = def_unary(&inner, IrOp::IntSext, def_map) {
                return Some(make_replacement(
                    insn,
                    IrOp::IntSext,
                    smallvec::smallvec![x],
                ));
            }
        }
        IrOp::IntZext => {
            if let Some(x) = def_unary(&inner, IrOp::IntZext, def_map) {
                return Some(make_replacement(
                    insn,
                    IrOp::IntZext,
                    smallvec::smallvec![x],
                ));
            }
        }
        _ => {}
    }
    None
}

fn is_side_effecting(op: IrOp) -> bool {
    matches!(op, IrOp::Call | IrOp::Callind | IrOp::Callother | IrOp::Branchind)
}

fn is_ram_load(insn: &IrInsn) -> bool {
    insn.op == IrOp::Load
        && insn.inputs.len() >= 2
        && insn.inputs[0].space == SpaceId::Const
        && insn.inputs[0].offset == SpaceId::Ram as u64
        && insn.output.is_some()
}

fn is_ram_store(insn: &IrInsn) -> bool {
    insn.op == IrOp::Store
        && insn.inputs.len() >= 3
        && insn.inputs[0].space == SpaceId::Const
        && insn.inputs[0].offset == SpaceId::Ram as u64
}

fn const_addr(vn: &Varnode) -> Option<u64> {
    if vn.space == SpaceId::Const { Some(vn.offset) } else { None }
}

fn try_recognize_sequences(insns: &mut Vec<IrInsn>) -> bool {
    let mut changed = false;
    let mut i = 0;
    while i < insns.len() {
        if let Some((count, replacement)) = try_memcpy_sequence(insns, i) {
            let remove_count = count * 2;
            let addr = insns[i].addr;
            insns.splice(i..i + remove_count, std::iter::once(replacement));
            tracing::trace!(addr = %format!("0x{:x}", addr), pairs = count, "memcpy sequence collapsed");
            changed = true;
            continue;
        }
        if let Some((count, replacement)) = try_memset_sequence(insns, i) {
            let addr = insns[i].addr;
            insns.splice(i..i + count, std::iter::once(replacement));
            tracing::trace!(addr = %format!("0x{:x}", addr), stores = count, "memset sequence collapsed");
            changed = true;
            continue;
        }
        i += 1;
    }
    changed
}

fn try_memcpy_sequence(insns: &[IrInsn], start: usize) -> Option<(usize, IrInsn)> {
    if start + 1 >= insns.len() {
        return None;
    }
    let load0 = &insns[start];
    let store0 = &insns[start + 1];
    if !is_ram_load(load0) || !is_ram_store(store0) {
        return None;
    }

    let width = load0.output.unwrap().size;
    let src_base = const_addr(&load0.inputs[1])?;
    let dst_base = const_addr(&store0.inputs[1])?;
    let loaded_vn = load0.output.unwrap();

    if store0.inputs[2] != loaded_vn {
        return None;
    }

    let mut count = 1usize;
    let mut idx = start + 2;
    while count < MAX_UNROLLED_OPS && idx + 1 < insns.len() {
        let load_n = &insns[idx];
        let store_n = &insns[idx + 1];

        if is_side_effecting(load_n.op) || is_side_effecting(store_n.op) {
            break;
        }
        if !is_ram_load(load_n) || !is_ram_store(store_n) {
            break;
        }

        let expected_src = src_base.checked_add((count as u64) * (width as u64))?;
        let expected_dst = dst_base.checked_add((count as u64) * (width as u64))?;

        if load_n.output.unwrap().size != width {
            break;
        }
        if const_addr(&load_n.inputs[1])? != expected_src {
            break;
        }
        if const_addr(&store_n.inputs[1])? != expected_dst {
            break;
        }
        if store_n.inputs[2] != load_n.output.unwrap() {
            break;
        }

        count += 1;
        idx += 2;
    }

    if count < 2 {
        return None;
    }

    let total_bytes = (count as u64) * (width as u64);
    let addr = insns[start].addr;
    let callother = IrInsn::without_output(
        IrOp::Callother,
        smallvec::smallvec![
            Varnode::constant(CALLOTHER_MEMCPY, 8),
            Varnode::constant(dst_base, 8),
            Varnode::constant(src_base, 8),
            Varnode::constant(total_bytes, 8),
        ],
        addr,
    );
    Some((count, callother))
}

fn try_memset_sequence(insns: &[IrInsn], start: usize) -> Option<(usize, IrInsn)> {
    let store0 = &insns[start];
    if !is_ram_store(store0) {
        return None;
    }

    let val = store0.inputs[2];
    if val.space != SpaceId::Const {
        return None;
    }

    let width = val.size;
    let dst_base = const_addr(&store0.inputs[1])?;

    let mut count = 1usize;
    let mut idx = start + 1;
    while count < MAX_UNROLLED_OPS && idx < insns.len() {
        let store_n = &insns[idx];

        if is_side_effecting(store_n.op) {
            break;
        }
        if !is_ram_store(store_n) {
            break;
        }

        let expected_dst = dst_base.checked_add((count as u64) * (width as u64))?;
        if const_addr(&store_n.inputs[1])? != expected_dst {
            break;
        }
        if store_n.inputs[2] != val {
            break;
        }

        count += 1;
        idx += 1;
    }

    if count < 2 {
        return None;
    }

    let total_bytes = (count as u64) * (width as u64);
    let addr = insns[start].addr;
    let callother = IrInsn::without_output(
        IrOp::Callother,
        smallvec::smallvec![
            Varnode::constant(CALLOTHER_MEMSET, 8),
            Varnode::constant(dst_base, 8),
            val,
            Varnode::constant(total_bytes, 8),
        ],
        addr,
    );
    Some((count, callother))
}

fn try_rotate(
    insn: &IrInsn,
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let output = insn.output?;

    let (ls, ln, rs, rn) = def_binary(a, IrOp::IntLeft, def_map)
        .and_then(|(ls, ln)| {
            let (rs, rn) = def_binary(b, IrOp::IntRight, def_map)?;
            Some((ls, ln, rs, rn))
        })
        .or_else(|| {
            let (ls, ln) = def_binary(b, IrOp::IntLeft, def_map)?;
            let (rs, rn) = def_binary(a, IrOp::IntRight, def_map)?;
            Some((ls, ln, rs, rn))
        })?;

    if ls != rs || ls.space == SpaceId::Const {
        return None;
    }
    if ln.space != SpaceId::Const || rn.space != SpaceId::Const {
        return None;
    }
    let bits = (ls.size as u64) * 8;
    if ln.offset + rn.offset != bits {
        return None;
    }

    // (x << n) | (x >> (bits-n)) → ROL(x, n)
    // (x >> n) | (x << (bits-n)) → ROR(x, n)  ≡  ROL(x, bits-n)
    // Disambiguate: smaller shift = rotate amount; equal → ROL.
    let (tag, n) = if ln.offset <= rn.offset {
        (CALLOTHER_ROL, ln.offset)
    } else {
        (CALLOTHER_ROR, rn.offset)
    };

    Some(IrInsn::with_output(
        IrOp::Callother,
        output,
        smallvec::smallvec![
            Varnode::constant(tag, 8),
            ls,
            Varnode::constant(n, ls.size),
        ],
        insn.addr,
    ))
}

fn try_recognize(insn: &IrInsn, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<IrInsn> {
    let output = insn.output?;

    if insn.op == IrOp::Copy {
        return None;
    }

    if let Some(unary) = try_recognize_unary(insn, output, def_map) {
        return Some(unary);
    }

    let inputs = insn.inputs.as_slice();
    if inputs.len() != 2 {
        return None;
    }

    let (a, b) = (inputs[0], inputs[1]);

    match insn.op {
        // ── Self-zeroing: v ^ v → 0, v - v → 0 ────────────────────
        IrOp::IntXor | IrOp::IntSub if a == b && a.space != SpaceId::Const => {
            Some(make_copy(insn, Varnode::constant(0, output.size)))
        }

        // ── v & all_ones → v, v & 0 → 0, v & v → v ───────────────
        IrOp::IntAnd => {
            if let Some(sub) = try_subpiece_from_and(insn, &a, &b, def_map) {
                Some(sub)
            } else if is_all_ones(&b) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_all_ones(&a) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else if is_const_val(&b, 0) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if is_const_val(&a, 0) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if a == b && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if let Some(r) = try_and_simplify(insn, &a, &b, def_map) {
                Some(r)
            } else {
                None
            }
        }

        // ── v | 0 → v, v | all_ones → all_ones, v | v → v ────────
        IrOp::IntOr => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else if is_all_ones(&b) {
                Some(make_copy(
                    insn,
                    Varnode::constant(mask_for_size(output.size), output.size),
                ))
            } else if is_all_ones(&a) {
                Some(make_copy(
                    insn,
                    Varnode::constant(mask_for_size(output.size), output.size),
                ))
            } else if a == b && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if let Some(r) = try_or_simplify(insn, &a, &b, def_map) {
                Some(r)
            } else {
                try_rotate(insn, &a, &b, def_map)
            }
        }

        // ── Additive identity: v + 0 → v ──────────────────────────
        IrOp::IntAdd => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else if let Some(min) = try_min_idiom(insn, &a, &b, def_map) {
                Some(min)
            } else {
                try_add_simplify(insn, &a, &b, def_map)
            }
        }

        // ── v ^ 0 → v ─────────────────────────────────────────────
        IrOp::IntXor => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 0) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else {
                try_xor_simplify(insn, &a, &b, def_map)
            }
        }

        // ── Subtractive identity: v - 0 → v ───────────────────────
        IrOp::IntSub => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if let Some(abs) = try_abs_idiom(insn, &a, &b, def_map) {
                Some(abs)
            } else if let Some(max) = try_max_idiom(insn, &a, &b, def_map) {
                Some(max)
            } else {
                try_sub_simplify(insn, &a, &b, def_map)
            }
        }

        // ── Multiplicative identity: v * 1 → v ────────────────────
        IrOp::IntMult => {
            if is_const_val(&b, 1) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if is_const_val(&a, 1) && b.space != SpaceId::Const {
                Some(make_copy(insn, b))
            } else {
                try_mult_simplify(insn, &a, &b, def_map)
            }
        }

        // ── Division identity: v / 1 → v ──────────────────────────
        IrOp::IntDiv | IrOp::IntSdiv => {
            if is_const_val(&b, 1) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if insn.op == IrOp::IntDiv {
                try_div_strength_reduction(insn, &a, &b)
            } else {
                None
            }
        }

        // ── Modulo one: v % 1 → 0 ─────────────────────────────────
        IrOp::IntRem | IrOp::IntSrem => {
            if is_const_val(&b, 1) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if insn.op == IrOp::IntRem {
                try_rem_strength_reduction(insn, &a, &b)
            } else {
                None
            }
        }

        // ── Shift by zero: v << 0 → v ─────────────────────────────
        IrOp::IntLeft => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else {
                None
            }
        }

        // ── Shift by zero or sign-bit extraction ───────────────────
        IrOp::IntRight | IrOp::IntSright => {
            if is_const_val(&b, 0) && a.space != SpaceId::Const {
                Some(make_copy(insn, a))
            } else if insn.op == IrOp::IntRight && is_sign_bit_shift(&a, &b) {
                Some(IrInsn::with_output(
                    IrOp::IntSless,
                    output,
                    smallvec::smallvec![a, Varnode::constant(0, a.size)],
                    insn.addr,
                ))
            } else if insn.op == IrOp::IntRight {
                try_shift_round_trip(insn, &a, &b, def_map)
            } else {
                None
            }
        }

        // ── Boolean idempotent: v & v → v, v | v → v ──────────────
        IrOp::BoolAnd | IrOp::BoolOr if a == b && a.space != SpaceId::Const => {
            Some(make_copy(insn, a))
        }

        // ── CARRY(x, 0) → 0, CARRY(x, -x) → x != 0 ──────────────
        IrOp::IntCarry => {
            if is_const_val(&b, 0) {
                Some(make_copy(insn, Varnode::constant(0, output.size)))
            } else if is_twos_complement_of(&b, &a, def_map) {
                Some(IrInsn::with_output(
                    IrOp::IntNotequal,
                    output,
                    smallvec::smallvec![a, Varnode::constant(0, a.size)],
                    insn.addr,
                ))
            } else {
                None
            }
        }

        IrOp::Subpiece => try_subpiece_simplify(insn, &a, &b, def_map),

        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> unlace_ir::ssa::SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    // ── Pattern 1: INT_XOR(v, v) → COPY 0 ─────────────────────────

    #[test]
    fn test_idiom_xor_self_zero() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 4);
    }

    // ── Pattern 2: INT_SUB(v, v) → COPY 0 ─────────────────────────

    #[test]
    fn test_idiom_sub_self_zero() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 4);
    }

    // ── Pattern 3: INT_AND(v, 0xFFFFFFFF) → COPY v ────────────────

    #[test]
    fn test_idiom_and_max_identity() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 4: INT_OR(v, 0) → COPY v ──────────────────────────

    #[test]
    fn test_idiom_or_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 5: INT_ADD(v, 0) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_add_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 6: INT_MUL(v, 1) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_mul_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntMult, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 7: BOOL_AND(v, v) → COPY v ────────────────────────

    #[test]
    fn test_idiom_bool_and_self() {
        let v0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let insn = IrInsn::with_output(IrOp::BoolAnd, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Pattern 8: BOOL_OR(v, v) → COPY v ─────────────────────────

    #[test]
    fn test_idiom_bool_or_self() {
        let v0 = Varnode::reg(0, 1);
        let out = Varnode::unique(0, 1);
        let insn = IrInsn::with_output(IrOp::BoolOr, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Commutative: INT_AND(all_ones, v) → COPY v ─────────────────

    #[test]
    fn test_idiom_and_max_commutative() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![all_ones, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── Commutative: INT_ADD(0, v) → COPY v ────────────────────────

    #[test]
    fn test_idiom_add_zero_commutative() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![zero, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── No change on non-matching ops ───────────────────────────────

    #[test]
    fn test_idiom_no_change_different_operands() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    // ── No change on const-const (let const_fold handle those) ──────

    #[test]
    fn test_idiom_skips_const_const() {
        let c5 = Varnode::constant(5, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![c5, c5], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        // Const-const should be handled by constant folding, not idiom recognition
        assert!(!changed);
    }

    // ── 8-byte XOR self ────────────────────────────────────────────

    #[test]
    fn test_idiom_xor_self_zero_8byte() {
        let v0 = Varnode::reg(0, 8);
        let out = Varnode::unique(0, 8);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
        assert_eq!(block.insns[0].inputs[0].size, 8);
    }

    // ── INT_AND with 8-byte all-ones ───────────────────────────────

    #[test]
    fn test_idiom_and_max_identity_8byte() {
        let v0 = Varnode::reg(0, 8);
        let all_ones = Varnode::constant(u64::MAX, 8);
        let out = Varnode::unique(0, 8);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SUB(v, 0) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_sub_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_DIV(v, 1) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_div_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntDiv, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SDIV(v, 1) → COPY v ───────────────────────────────────

    #[test]
    fn test_idiom_sdiv_one_identity() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSdiv, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_REM(v, 1) → COPY 0 ────────────────────────────────────

    #[test]
    fn test_idiom_rem_one_zero() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntRem, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_SREM(v, 1) → COPY 0 ───────────────────────────────────

    #[test]
    fn test_idiom_srem_one_zero() {
        let v0 = Varnode::reg(0, 4);
        let one = Varnode::constant(1, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSrem, out, smallvec![v0, one], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_XOR(v, 0) → COPY v ────────────────────────────────────

    #[test]
    fn test_idiom_xor_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_LEFT(v, 0) → COPY v ───────────────────────────────────

    #[test]
    fn test_idiom_left_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntLeft, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_RIGHT(v, 0) → COPY v ──────────────────────────────────

    #[test]
    fn test_idiom_right_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntRight, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_SRIGHT(v, 0) → COPY v ─────────────────────────────────

    #[test]
    fn test_idiom_sright_shift_zero_identity() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSright, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_AND(v, 0) → COPY 0 ────────────────────────────────────

    #[test]
    fn test_idiom_and_zero_annihilator() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    // ── INT_OR(v, all_ones) → COPY all_ones ────────────────────────

    #[test]
    fn test_idiom_or_all_ones_annihilator() {
        let v0 = Varnode::reg(0, 4);
        let all_ones = Varnode::constant(0xFFFF_FFFF, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, all_ones], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0xFFFF_FFFF);
    }

    // ── INT_AND(v, v) → COPY v ─────────────────────────────────────

    #[test]
    fn test_idiom_and_self_idempotent() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntAnd, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_OR(v, v) → COPY v ──────────────────────────────────────

    #[test]
    fn test_idiom_or_self_idempotent() {
        let v0 = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntOr, out, smallvec![v0, v0], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0], v0);
    }

    // ── INT_RIGHT(v:4, 31) → INT_SLESS(v, 0) ──────────────────────

    #[test]
    fn test_idiom_sign_bit_extraction_32bit() {
        let v0 = Varnode::reg(0, 4);
        let shift = Varnode::constant(31, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntRight, out, smallvec![v0, shift], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSless);
        assert_eq!(block.insns[0].inputs[0], v0);
        assert_eq!(block.insns[0].inputs[1].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[1].offset, 0);
    }

    // ── INT_RIGHT(v:8, 63) → INT_SLESS(v, 0) ──────────────────────

    #[test]
    fn test_idiom_sign_bit_extraction_64bit() {
        let v0 = Varnode::reg(0, 8);
        let shift = Varnode::constant(63, 4);
        let out = Varnode::unique(0, 8);
        let insn = IrInsn::with_output(IrOp::IntRight, out, smallvec![v0, shift], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSless);
        assert_eq!(block.insns[0].inputs[0], v0);
        assert_eq!(block.insns[0].inputs[1].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[1].offset, 0);
    }

    // ── INT_SRIGHT does NOT trigger sign-bit extraction ─────────────

    #[test]
    fn test_idiom_sright_no_sign_bit_extraction() {
        let v0 = Varnode::reg(0, 4);
        let shift = Varnode::constant(31, 4);
        let out = Varnode::unique(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSright, out, smallvec![v0, shift], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    // ── INT_CARRY(x, 0) → COPY 0 ──────────────────────────────────

    #[test]
    fn test_idiom_carry_zero() {
        let v0 = Varnode::reg(0, 4);
        let zero = Varnode::constant(0, 4);
        let out = Varnode::unique(0, 1);
        let insn = IrInsn::with_output(IrOp::IntCarry, out, smallvec![v0, zero], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Copy);
        assert_eq!(block.insns[0].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[0].inputs[0].offset, 0);
    }

    #[test]
    fn test_idiom_subpiece_from_shift_and_byte_mask() {
        let r0 = Varnode::reg(0, 4);
        let shifted = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 1);
        let shift_amt = Varnode::constant(8, 4);
        let mask = Varnode::constant(0xFF, 1);

        let shift = IrInsn::with_output(IrOp::IntRight, shifted, smallvec![r0, shift_amt], 0x1000);
        let and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![shifted, mask], 0x1004);

        let mut ssa = make_single_block_ssa(vec![shift, and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Subpiece);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 1);
    }

    #[test]
    fn test_idiom_subpiece_from_shift_and_word_mask() {
        let r0 = Varnode::reg(0, 4);
        let shifted = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 2);
        let shift_amt = Varnode::constant(16, 4);
        let mask = Varnode::constant(0xFFFF, 2);

        let shift = IrInsn::with_output(IrOp::IntRight, shifted, smallvec![r0, shift_amt], 0x1000);
        let and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![shifted, mask], 0x1004);

        let mut ssa = make_single_block_ssa(vec![shift, and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Subpiece);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 2);
    }

    #[test]
    fn test_idiom_subpiece_from_truncating_and() {
        let r0 = Varnode::reg(0, 4);
        let out = Varnode::unique(8, 1);
        let mask = Varnode::constant(0xFF, 1);

        let and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![r0, mask], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Subpiece);
        assert_eq!(block.insns[0].inputs[0], r0);
        assert_eq!(block.insns[0].inputs[1].offset, 0);
    }

    #[test]
    fn test_idiom_subpiece_no_match_when_mask_size_mismatch() {
        let r0 = Varnode::reg(0, 4);
        let shifted = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);
        let shift_amt = Varnode::constant(8, 4);
        let mask = Varnode::constant(0xFF, 4);

        let shift = IrInsn::with_output(IrOp::IntRight, shifted, smallvec![r0, shift_amt], 0x1000);
        let and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![shifted, mask], 0x1004);

        let mut ssa = make_single_block_ssa(vec![shift, and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    #[test]
    fn test_idiom_double_negation() {
        let r0 = Varnode::reg(0, 4);
        let neg1 = Varnode::unique(0, 4);
        let neg2 = Varnode::unique(8, 4);

        let n1 = IrInsn::with_output(IrOp::Int2comp, neg1, smallvec![r0], 0x1000);
        let n2 = IrInsn::with_output(IrOp::Int2comp, neg2, smallvec![neg1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n1, n2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_double_bitwise_not() {
        let r0 = Varnode::reg(0, 4);
        let n1v = Varnode::unique(0, 4);
        let n2v = Varnode::unique(8, 4);

        let n1 = IrInsn::with_output(IrOp::IntNegate, n1v, smallvec![r0], 0x1000);
        let n2 = IrInsn::with_output(IrOp::IntNegate, n2v, smallvec![n1v], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n1, n2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_offset_cancellation() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let add = IrInsn::with_output(IrOp::IntAdd, v1, smallvec![r0, c5], 0x1000);
        let sub = IrInsn::with_output(IrOp::IntSub, v2, smallvec![v1, c5], 0x1004);

        let mut ssa = make_single_block_ssa(vec![add, sub]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_inverse_offset() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, c5], 0x1000);
        let add = IrInsn::with_output(IrOp::IntAdd, v2, smallvec![v1, c5], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, add]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_add_constant_associativity() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let c5 = Varnode::constant(5, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let add1 = IrInsn::with_output(IrOp::IntAdd, v1, smallvec![r0, c3], 0x1000);
        let add2 = IrInsn::with_output(IrOp::IntAdd, v2, smallvec![v1, c5], 0x1004);

        let mut ssa = make_single_block_ssa(vec![add1, add2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntAdd);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[1].offset, 8);
    }

    #[test]
    fn test_idiom_mult_constant_associativity() {
        let r0 = Varnode::reg(0, 4);
        let c3 = Varnode::constant(3, 4);
        let c5 = Varnode::constant(5, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let m1 = IrInsn::with_output(IrOp::IntMult, v1, smallvec![r0, c3], 0x1000);
        let m2 = IrInsn::with_output(IrOp::IntMult, v2, smallvec![v1, c5], 0x1004);

        let mut ssa = make_single_block_ssa(vec![m1, m2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntMult);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[1].offset, 15);
    }

    #[test]
    fn test_idiom_add_negation_to_sub() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let n = IrInsn::with_output(IrOp::Int2comp, neg, smallvec![r8], 0x1000);
        let add = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, neg], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n, add]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntSub);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    #[test]
    fn test_idiom_sub_negation_to_add() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let n = IrInsn::with_output(IrOp::Int2comp, neg, smallvec![r8], 0x1000);
        let sub = IrInsn::with_output(IrOp::IntSub, out, smallvec![r0, neg], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n, sub]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntAdd);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1], r8);
    }

    #[test]
    fn test_idiom_mul_two_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let out = Varnode::unique(0, 4);

        let m = IrInsn::with_output(IrOp::IntMult, out, smallvec![r0, c2], 0x1000);

        let mut ssa = make_single_block_ssa(vec![m]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntLeft);
        assert_eq!(block.insns[0].inputs[0], r0);
        assert_eq!(block.insns[0].inputs[1].offset, 1);
    }

    #[test]
    fn test_idiom_mul_four_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c4 = Varnode::constant(4, 4);
        let out = Varnode::unique(0, 4);

        let m = IrInsn::with_output(IrOp::IntMult, out, smallvec![r0, c4], 0x1000);

        let mut ssa = make_single_block_ssa(vec![m]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntLeft);
        assert_eq!(block.insns[0].inputs[1].offset, 2);
    }

    #[test]
    fn test_idiom_mul_eight_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c8 = Varnode::constant(8, 4);
        let out = Varnode::unique(0, 4);

        let m = IrInsn::with_output(IrOp::IntMult, out, smallvec![r0, c8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![m]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntLeft);
        assert_eq!(block.insns[0].inputs[1].offset, 3);
    }

    #[test]
    fn test_idiom_mul_sixteen_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c16 = Varnode::constant(16, 4);
        let out = Varnode::unique(0, 4);

        let m = IrInsn::with_output(IrOp::IntMult, out, smallvec![r0, c16], 0x1000);

        let mut ssa = make_single_block_ssa(vec![m]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntLeft);
        assert_eq!(block.insns[0].inputs[1].offset, 4);
    }

    #[test]
    fn test_idiom_unsigned_div_two_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let out = Varnode::unique(0, 4);

        let d = IrInsn::with_output(IrOp::IntDiv, out, smallvec![r0, c2], 0x1000);

        let mut ssa = make_single_block_ssa(vec![d]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntRight);
        assert_eq!(block.insns[0].inputs[1].offset, 1);
    }

    #[test]
    fn test_idiom_unsigned_div_four_to_shift() {
        let r0 = Varnode::reg(0, 4);
        let c4 = Varnode::constant(4, 4);
        let out = Varnode::unique(0, 4);

        let d = IrInsn::with_output(IrOp::IntDiv, out, smallvec![r0, c4], 0x1000);

        let mut ssa = make_single_block_ssa(vec![d]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntRight);
        assert_eq!(block.insns[0].inputs[1].offset, 2);
    }

    #[test]
    fn test_idiom_signed_div_not_strength_reduced() {
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let out = Varnode::unique(0, 4);

        let d = IrInsn::with_output(IrOp::IntSdiv, out, smallvec![r0, c2], 0x1000);

        let mut ssa = make_single_block_ssa(vec![d]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    #[test]
    fn test_idiom_unsigned_rem_two_to_and() {
        let r0 = Varnode::reg(0, 4);
        let c2 = Varnode::constant(2, 4);
        let out = Varnode::unique(0, 4);

        let r = IrInsn::with_output(IrOp::IntRem, out, smallvec![r0, c2], 0x1000);

        let mut ssa = make_single_block_ssa(vec![r]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntAnd);
        assert_eq!(block.insns[0].inputs[1].offset, 1);
    }

    #[test]
    fn test_idiom_unsigned_rem_four_to_and() {
        let r0 = Varnode::reg(0, 4);
        let c4 = Varnode::constant(4, 4);
        let out = Varnode::unique(0, 4);

        let r = IrInsn::with_output(IrOp::IntRem, out, smallvec![r0, c4], 0x1000);

        let mut ssa = make_single_block_ssa(vec![r]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntAnd);
        assert_eq!(block.insns[0].inputs[1].offset, 3);
    }

    #[test]
    fn test_idiom_unsigned_rem_eight_to_and() {
        let r0 = Varnode::reg(0, 4);
        let c8 = Varnode::constant(8, 4);
        let out = Varnode::unique(0, 4);

        let r = IrInsn::with_output(IrOp::IntRem, out, smallvec![r0, c8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![r]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntAnd);
        assert_eq!(block.insns[0].inputs[1].offset, 7);
    }

    #[test]
    fn test_idiom_xor_cancellation() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let xor1 = IrInsn::with_output(IrOp::IntXor, v1, smallvec![r0, r8], 0x1000);
        let xor2 = IrInsn::with_output(IrOp::IntXor, v2, smallvec![v1, r8], 0x1004);

        let mut ssa = make_single_block_ssa(vec![xor1, xor2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_or_absorbs_and() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let and = IrInsn::with_output(IrOp::IntAnd, v1, smallvec![r0, r8], 0x1000);
        let or = IrInsn::with_output(IrOp::IntOr, v2, smallvec![r0, v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![and, or]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_and_absorbs_or() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 4);

        let or = IrInsn::with_output(IrOp::IntOr, v1, smallvec![r0, r8], 0x1000);
        let and = IrInsn::with_output(IrOp::IntAnd, v2, smallvec![r0, v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![or, and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_and_with_self_negate_zero() {
        let r0 = Varnode::reg(0, 4);
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let n = IrInsn::with_output(IrOp::IntNegate, neg, smallvec![r0], 0x1000);
        let and = IrInsn::with_output(IrOp::IntAnd, out, smallvec![r0, neg], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n, and]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[0].offset, 0);
    }

    #[test]
    fn test_idiom_or_with_self_negate_all_ones() {
        let r0 = Varnode::reg(0, 4);
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let n = IrInsn::with_output(IrOp::IntNegate, neg, smallvec![r0], 0x1000);
        let or = IrInsn::with_output(IrOp::IntOr, out, smallvec![r0, neg], 0x1004);

        let mut ssa = make_single_block_ssa(vec![n, or]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[0].offset, 0xFFFF_FFFF);
    }

    #[test]
    fn test_idiom_negate_minus_one_to_twos_complement() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let v1 = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let sub = IrInsn::with_output(IrOp::IntSub, v1, smallvec![r0, c1], 0x1000);
        let neg = IrInsn::with_output(IrOp::IntNegate, out, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![sub, neg]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Int2comp);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_shift_round_trip_to_mask() {
        let r0 = Varnode::reg(0, 4);
        let c8 = Varnode::constant(8, 4);
        let v1 = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 4);

        let l = IrInsn::with_output(IrOp::IntLeft, v1, smallvec![r0, c8], 0x1000);
        let r = IrInsn::with_output(IrOp::IntRight, out, smallvec![v1, c8], 0x1004);

        let mut ssa = make_single_block_ssa(vec![l, r]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntAnd);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 0x00FF_FFFF);
    }

    // ── INT_CARRY(x, INT_2COMP(x)) → INT_NOTEQUAL(x, 0) ──────────

    #[test]
    fn test_idiom_carry_twos_complement() {
        let v0 = Varnode::reg(0, 4);
        let neg_v0 = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 1);

        let negate = IrInsn::with_output(IrOp::Int2comp, neg_v0, smallvec![v0], 0x1000);
        let carry = IrInsn::with_output(IrOp::IntCarry, out, smallvec![v0, neg_v0], 0x1004);

        let mut ssa = make_single_block_ssa(vec![negate, carry]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntNotequal);
        assert_eq!(block.insns[1].inputs[0], v0);
        assert_eq!(block.insns[1].inputs[1].space, SpaceId::Const);
        assert_eq!(block.insns[1].inputs[1].offset, 0);
    }

    #[test]
    fn test_idiom_chained_sign_extension() {
        let r0 = Varnode::reg(0, 1);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 8);

        let s1 = IrInsn::with_output(IrOp::IntSext, v1, smallvec![r0], 0x1000);
        let s2 = IrInsn::with_output(IrOp::IntSext, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![s1, s2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntSext);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].output.expect("has output").size, 8);
    }

    #[test]
    fn test_idiom_chained_zero_extension() {
        let r0 = Varnode::reg(0, 1);
        let v1 = Varnode::unique(0, 4);
        let v2 = Varnode::unique(8, 8);

        let z1 = IrInsn::with_output(IrOp::IntZext, v1, smallvec![r0], 0x1000);
        let z2 = IrInsn::with_output(IrOp::IntZext, v2, smallvec![v1], 0x1004);

        let mut ssa = make_single_block_ssa(vec![z1, z2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntZext);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].output.expect("has output").size, 8);
    }

    #[test]
    fn test_idiom_subpiece_of_zext_to_copy() {
        let r0 = Varnode::reg(0, 4);
        let zext = Varnode::unique(0, 8);
        let out = Varnode::unique(8, 4);

        let z = IrInsn::with_output(IrOp::IntZext, zext, smallvec![r0], 0x1000);
        let s = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![zext, Varnode::constant(0, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![z, s]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_subpiece_of_sext_to_copy() {
        let r0 = Varnode::reg(0, 4);
        let sext = Varnode::unique(0, 8);
        let out = Varnode::unique(8, 4);

        let s1 = IrInsn::with_output(IrOp::IntSext, sext, smallvec![r0], 0x1000);
        let s2 = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![sext, Varnode::constant(0, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![s1, s2]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], r0);
    }

    #[test]
    fn test_idiom_subpiece_of_zext_smaller_to_subpiece() {
        let r0 = Varnode::reg(0, 4);
        let zext = Varnode::unique(0, 8);
        let out = Varnode::unique(8, 2);

        let z = IrInsn::with_output(IrOp::IntZext, zext, smallvec![r0], 0x1000);
        let s = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![zext, Varnode::constant(0, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![z, s]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Subpiece);
        assert_eq!(block.insns[1].inputs[0], r0);
        assert_eq!(block.insns[1].inputs[1].offset, 0);
    }

    #[test]
    fn test_idiom_subpiece_of_zext_with_nonzero_offset_no_match() {
        let r0 = Varnode::reg(0, 4);
        let zext = Varnode::unique(0, 8);
        let out = Varnode::unique(8, 4);

        let z = IrInsn::with_output(IrOp::IntZext, zext, smallvec![r0], 0x1000);
        let s = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![zext, Varnode::constant(4, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![z, s]);
        let changed = IdiomRecognitionPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    // ── (x << 5) | (x >> 27) → Callother(__ROL__, x, 5) for 32-bit ──

    #[test]
    fn test_idiom_rotate_left() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let c27 = Varnode::constant(27, 4);
        let shl = Varnode::unique(0, 4);
        let shr = Varnode::unique(8, 4);
        let out = Varnode::unique(16, 4);

        let i_shl = IrInsn::with_output(IrOp::IntLeft, shl, smallvec![r0, c5], 0x1000);
        let i_shr = IrInsn::with_output(IrOp::IntRight, shr, smallvec![r0, c27], 0x1004);
        let i_or = IrInsn::with_output(IrOp::IntOr, out, smallvec![shl, shr], 0x1008);

        let mut ssa = make_single_block_ssa(vec![i_shl, i_shr, i_or]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let result = &block.insns[2];
        assert_eq!(result.op, IrOp::Callother);
        assert_eq!(result.inputs[0].offset, super::CALLOTHER_ROL);
        assert_eq!(result.inputs[1], r0);
        assert_eq!(result.inputs[2].offset, 5);
    }

    // ── (x >> 5) | (x << 27) → Callother(__ROR__, x, 5) for 32-bit ──

    #[test]
    fn test_idiom_rotate_right() {
        let r0 = Varnode::reg(0, 4);
        let c5 = Varnode::constant(5, 4);
        let c27 = Varnode::constant(27, 4);
        let shr = Varnode::unique(0, 4);
        let shl = Varnode::unique(8, 4);
        let out = Varnode::unique(16, 4);

        let i_shr = IrInsn::with_output(IrOp::IntRight, shr, smallvec![r0, c5], 0x1000);
        let i_shl = IrInsn::with_output(IrOp::IntLeft, shl, smallvec![r0, c27], 0x1004);
        let i_or = IrInsn::with_output(IrOp::IntOr, out, smallvec![shr, shl], 0x1008);

        let mut ssa = make_single_block_ssa(vec![i_shr, i_shl, i_or]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let result = &block.insns[2];
        assert_eq!(result.op, IrOp::Callother);
        assert_eq!(result.inputs[0].offset, super::CALLOTHER_ROR);
        assert_eq!(result.inputs[1], r0);
        assert_eq!(result.inputs[2].offset, 5);
    }

    // ── Branchless abs: SUB(XOR(x, s), s) where s = SRIGHT(x, 31) ──

    #[test]
    fn test_idiom_branchless_abs() {
        let x = Varnode::reg(0, 4);
        let s = Varnode::unique(0, 4);
        let xored = Varnode::unique(8, 4);
        let out = Varnode::unique(16, 4);

        let sright = IrInsn::with_output(
            IrOp::IntSright, s, smallvec![x, Varnode::constant(31, 4)], 0x1000,
        );
        let xor = IrInsn::with_output(IrOp::IntXor, xored, smallvec![x, s], 0x1004);
        let sub = IrInsn::with_output(IrOp::IntSub, out, smallvec![xored, s], 0x1008);

        let mut ssa = make_single_block_ssa(vec![sright, xor, sub]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let result = &block.insns[2];
        assert_eq!(result.op, IrOp::Callother);
        assert_eq!(result.inputs[0].offset, super::CALLOTHER_ABS);
        assert_eq!(result.inputs[1], x);
    }

    // ── Branchless min: ADD(b, AND(d, s)) where d=SUB(a,b), s=SRIGHT(d,31) ──

    #[test]
    fn test_idiom_branchless_min() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let d = Varnode::unique(0, 4);
        let s = Varnode::unique(8, 4);
        let masked = Varnode::unique(16, 4);
        let out = Varnode::unique(24, 4);

        let sub = IrInsn::with_output(IrOp::IntSub, d, smallvec![a, b], 0x1000);
        let sright = IrInsn::with_output(
            IrOp::IntSright, s, smallvec![d, Varnode::constant(31, 4)], 0x1004,
        );
        let and = IrInsn::with_output(IrOp::IntAnd, masked, smallvec![d, s], 0x1008);
        let add = IrInsn::with_output(IrOp::IntAdd, out, smallvec![b, masked], 0x100C);

        let mut ssa = make_single_block_ssa(vec![sub, sright, and, add]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let result = &block.insns[3];
        assert_eq!(result.op, IrOp::Callother);
        assert_eq!(result.inputs[0].offset, super::CALLOTHER_MIN);
        assert_eq!(result.inputs[1], a);
        assert_eq!(result.inputs[2], b);
    }

    // ── Branchless max: SUB(a, AND(d, s)) where d=SUB(a,b), s=SRIGHT(d,31) ──

    #[test]
    fn test_idiom_branchless_max() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let d = Varnode::unique(0, 4);
        let s = Varnode::unique(8, 4);
        let masked = Varnode::unique(16, 4);
        let out = Varnode::unique(24, 4);

        let sub_d = IrInsn::with_output(IrOp::IntSub, d, smallvec![a, b], 0x1000);
        let sright = IrInsn::with_output(
            IrOp::IntSright, s, smallvec![d, Varnode::constant(31, 4)], 0x1004,
        );
        let and = IrInsn::with_output(IrOp::IntAnd, masked, smallvec![d, s], 0x1008);
        let sub_out = IrInsn::with_output(IrOp::IntSub, out, smallvec![a, masked], 0x100C);

        let mut ssa = make_single_block_ssa(vec![sub_d, sright, and, sub_out]);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let result = &block.insns[3];
        assert_eq!(result.op, IrOp::Callother);
        assert_eq!(result.inputs[0].offset, super::CALLOTHER_MAX);
        assert_eq!(result.inputs[1], a);
        assert_eq!(result.inputs[2], b);
    }

    // ── Unrolled memcpy: 4 consecutive Load+Store pairs at stride 8 ──

    #[test]
    fn test_idiom_unrolled_memcpy() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let src_base: u64 = 0x2000;
        let dst_base: u64 = 0x3000;
        let width: u8 = 8;

        let mut insns = Vec::new();
        for i in 0u64..4 {
            let loaded = Varnode::unique(i * 16, width);
            let src_addr = Varnode::constant(src_base + i * (width as u64), 8);
            let dst_addr = Varnode::constant(dst_base + i * (width as u64), 8);

            insns.push(IrInsn::with_output(
                IrOp::Load, loaded, smallvec![ram_space, src_addr], 0x1000 + i * 8,
            ));
            insns.push(IrInsn::without_output(
                IrOp::Store, smallvec![ram_space, dst_addr, loaded], 0x1004 + i * 8,
            ));
        }

        let mut ssa = make_single_block_ssa(insns);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let co = block.insns.iter().find(|i| i.op == IrOp::Callother)
            .expect("should have Callother");
        assert_eq!(co.inputs[0].offset, super::CALLOTHER_MEMCPY);
        assert_eq!(co.inputs[1].offset, dst_base);
        assert_eq!(co.inputs[2].offset, src_base);
        assert_eq!(co.inputs[3].offset, 4 * (width as u64));
        assert!(co.output.is_none());
    }

    // ── Unrolled memset: 4 consecutive Stores of same constant at stride 4 ──

    #[test]
    fn test_idiom_unrolled_memset() {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let dst_base: u64 = 0x4000;
        let fill_val = Varnode::constant(0, 4);
        let width: u8 = 4;

        let mut insns = Vec::new();
        for i in 0u64..4 {
            let dst_addr = Varnode::constant(dst_base + i * (width as u64), 8);
            insns.push(IrInsn::without_output(
                IrOp::Store, smallvec![ram_space, dst_addr, fill_val], 0x1000 + i * 4,
            ));
        }

        let mut ssa = make_single_block_ssa(insns);
        let changed = IdiomRecognitionPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        let co = block.insns.iter().find(|i| i.op == IrOp::Callother)
            .expect("should have Callother");
        assert_eq!(co.inputs[0].offset, super::CALLOTHER_MEMSET);
        assert_eq!(co.inputs[1].offset, dst_base);
        assert_eq!(co.inputs[2], fill_val);
        assert_eq!(co.inputs[3].offset, 4 * (width as u64));
        assert!(co.output.is_none());
    }
}
