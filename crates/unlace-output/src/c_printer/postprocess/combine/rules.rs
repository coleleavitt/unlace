//! Combiner rules over [`Expr`], after the Hex-Rays ctree combiner
//! (`sub_B36D0`, a switch on the `cot_*` opcode).
//!
//! Every rule preserves C semantics: it only rewrites forms the C standard
//! defines as equivalent (`E1 op= E2` is `E1 = E1 op E2` with `E1` evaluated
//! once, `++E` is `E += 1`, `if (E != 0)` is `if (E)`), and folds that need
//! a value read literals only.

use super::parse::{BinOp, Expr, IncDec, PrefixOp};

/// Where an expression sits. Decides which rewrites are legal and whether a
/// rewritten node needs parentheses.
#[derive(Clone, Copy, PartialEq, Eq)]
enum Place {
    Rvalue,
    /// Assignment target or operand of `&`, `++`, `--`.
    Lvalue,
    /// Base of a subscript or member access.
    PostfixBase,
    /// Called expression. `(f)(x)` suppresses a function-like macro, so its
    /// parentheses stay.
    Callee,
}

/// Rewrite an expression statement. `None` when the statement is a no-op
/// (`x = x;`) and should be dropped.
pub(super) fn combine_statement(e: Expr) -> Option<Expr> {
    statement(combine(e, Place::Rvalue))
}

/// Rewrite the controlling expression of an `if`/`while`/`for`.
pub(super) fn combine_condition(e: Expr) -> Expr {
    condition(combine(e, Place::Rvalue))
}

/// Rewrite a value whose type the context fixes: a `return` operand or a
/// declaration initializer.
pub(super) fn combine_value(e: Expr) -> Expr {
    plain_literal(combine(e, Place::Rvalue))
}

fn combine(e: Expr, place: Place) -> Expr {
    match e {
        Expr::Atom(_) => e,
        Expr::Paren(inner) => {
            let inner = combine(*inner, Place::Rvalue);
            // `*(T *)(0LL)` keeps its parentheses: the quality counters
            // look for that spelling of a raw absolute address.
            let literal = matches!(&inner, Expr::Atom(s) if is_literal(s));
            let redundant = !literal
                && match place {
                    Place::Callee => false,
                    Place::PostfixBase => inner.is_primary(),
                    Place::Rvalue | Place::Lvalue => inner.is_unary_tight(),
                };
            if redundant {
                inner
            } else {
                Expr::Paren(Box::new(inner))
            }
        }
        Expr::Cast { ty, expr } => match combine(*expr, Place::Rvalue) {
            // `(T)(T)x` is `(T)x`.
            Expr::Cast { ty: inner, expr } if inner == ty => Expr::Cast { ty, expr },
            expr => match cast_as_part(&ty, &expr) {
                Some((part, arg)) if place != Place::Lvalue => part_read(part, arg, place),
                _ => Expr::Cast {
                    ty,
                    expr: Box::new(expr),
                },
            },
        },
        Expr::Prefix { op, expr } => {
            let child = if matches!(op, PrefixOp::AddrOf | PrefixOp::Inc | PrefixOp::Dec) {
                Place::Lvalue
            } else {
                Place::Rvalue
            };
            let mut expr = combine(*expr, child);
            // `-(-x)` must not print as `--x`, nor `&(&x)` as `&&x`.
            let tok = op.token();
            let fuses = matches!(
                op,
                PrefixOp::Neg | PrefixOp::Plus | PrefixOp::Inc | PrefixOp::Dec | PrefixOp::AddrOf
            );
            if fuses && expr.to_string().starts_with(&tok[tok.len() - 1..]) {
                expr = Expr::Paren(Box::new(expr));
            }
            Expr::Prefix {
                op,
                expr: Box::new(expr),
            }
        }
        Expr::Postfix { op, expr } => Expr::Postfix {
            op,
            expr: Box::new(combine(*expr, Place::Lvalue)),
        },
        Expr::Call { callee, args } => {
            let callee = combine(*callee, Place::Callee);
            let args = args
                .into_iter()
                .map(|a| combine(a, Place::Rvalue))
                .collect();
            part_macro(callee, args, place)
        }
        Expr::Index { base, index } => Expr::Index {
            base: Box::new(combine(*base, Place::PostfixBase)),
            index: Box::new(combine(*index, Place::Rvalue)),
        },
        Expr::Member { base, arrow, field } => Expr::Member {
            base: Box::new(combine(*base, Place::PostfixBase)),
            arrow,
            field,
        },
        Expr::Binary { op, lhs, rhs } => binary(
            op,
            combine(*lhs, Place::Rvalue),
            combine(*rhs, Place::Rvalue),
        ),
        Expr::Ternary { cond, then, els } => Expr::Ternary {
            cond: Box::new(combine(*cond, Place::Rvalue)),
            then: Box::new(combine(*then, Place::Rvalue)),
            els: Box::new(combine(*els, Place::Rvalue)),
        },
        Expr::Assign { op, lhs, rhs } => Expr::Assign {
            op,
            lhs: Box::new(combine(*lhs, Place::Lvalue)),
            rhs: Box::new(combine(*rhs, Place::Rvalue)),
        },
        Expr::Comma { lhs, rhs } => Expr::Comma {
            lhs: Box::new(combine(*lhs, Place::Rvalue)),
            rhs: Box::new(combine(*rhs, Place::Rvalue)),
        },
    }
}

// ---------------------------------------------------------------------------
// cot_band / cot_bor / comparisons
// ---------------------------------------------------------------------------

fn binary(op: BinOp, lhs: Expr, rhs: Expr) -> Expr {
    // `x & x` and `x | x` are `x` (the `test reg, reg` idiom).
    if matches!(op, BinOp::BitAnd | BinOp::BitOr) && lhs == rhs && is_pure(&lhs) {
        return lhs;
    }
    if op.is_comparison() {
        let (lhs, rhs) = comparison_literals(lhs, rhs);
        return mk_binary(op, lhs, rhs);
    }
    mk_binary(op, lhs, rhs)
}

/// Drop literal decorations a comparison does not need: an `LL` suffix on a
/// small non-negative literal, and a cast of a literal compared against the
/// same cast. Neither changes the result: the other operand's value is
/// preserved by either conversion.
fn comparison_literals(lhs: Expr, rhs: Expr) -> (Expr, Expr) {
    let (lhs, rhs) = match (&lhs, &rhs) {
        (Expr::Cast { ty: a, .. }, Expr::Cast { ty: b, expr }) if a == b => {
            match cast_literal(a, expr) {
                Some(lit) => (lhs, lit),
                None => (lhs, rhs),
            }
        }
        (Expr::Cast { ty: a, expr }, Expr::Cast { ty: b, .. }) if a == b => {
            match cast_literal(b, expr) {
                Some(lit) => (lit, rhs),
                None => (lhs, rhs),
            }
        }
        _ => (lhs, rhs),
    };
    (small_signed_literal(lhs), small_signed_literal(rhs))
}

/// `(T)lit` as a bare literal, when `T` is an unsigned IDA width type and
/// the literal fits `int`.
fn cast_literal(ty: &str, expr: &Expr) -> Option<Expr> {
    if !matches!(ty, "_BYTE" | "_WORD" | "_DWORD" | "_QWORD" | "unsigned int") {
        return None;
    }
    let lit = int_literal(expr.as_atom()?)?;
    (lit.value <= i32::MAX as u128).then(|| Expr::atom(lit.digits))
}

/// `5LL` -> `5` when the literal is non-negative, fits `int` and has no
/// unsigned suffix.
fn small_signed_literal(e: Expr) -> Expr {
    let Some(lit) = e.as_atom().and_then(int_literal) else {
        return e;
    };
    if lit.suffix.is_empty() || lit.suffix.contains(['u', 'U']) || lit.value > i32::MAX as u128 {
        return e;
    }
    Expr::atom(lit.digits)
}

// ---------------------------------------------------------------------------
// IDA part macros: LOBYTE / BYTEn / LOWORD / HIWORD / LODWORD / HIDWORD
// ---------------------------------------------------------------------------

/// A bit range named by an IDA part macro. The prelude defines `NAME(x)` as
/// `((T)((x) >> shift))`, with `T` the unsigned type `bits` wide.
#[derive(Clone, Copy)]
struct Part {
    name: &'static str,
    shift: u32,
    bits: u32,
}

const PARTS: [Part; 8] = [
    Part::new("LOBYTE", 0, 8),
    Part::new("BYTE1", 8, 8),
    Part::new("BYTE2", 16, 8),
    Part::new("BYTE3", 24, 8),
    Part::new("LOWORD", 0, 16),
    Part::new("HIWORD", 16, 16),
    Part::new("LODWORD", 0, 32),
    Part::new("HIDWORD", 32, 32),
];

impl Part {
    const fn new(name: &'static str, shift: u32, bits: u32) -> Part {
        Part { name, shift, bits }
    }

    fn named(name: &str) -> Option<Part> {
        PARTS.into_iter().find(|p| p.name == name)
    }

    fn at(shift: u32, bits: u32) -> Option<Part> {
        PARTS
            .into_iter()
            .find(|p| p.shift == shift && p.bits == bits)
    }

    fn mask(self) -> u128 {
        (1 << self.bits) - 1
    }

    /// The cast the macro truncates with.
    fn ty(self) -> &'static str {
        match self.bits {
            8 => "_BYTE",
            16 => "_WORD",
            _ => "_DWORD",
        }
    }
}

fn part_macro(callee: Expr, args: Vec<Expr>, place: Place) -> Expr {
    let part = callee.as_ident().and_then(Part::named);
    let Some(part) = part.filter(|_| args.len() == 1 && place != Place::Lvalue) else {
        return Expr::Call {
            callee: Box::new(callee),
            args,
        };
    };
    let arg = args.into_iter().next().expect("one argument");
    part_read(part, arg, place)
}

/// Print a read of `part(arg)`.
fn part_read(part: Part, arg: Expr, place: Place) -> Expr {
    let (part, arg) = direct_part(part, arg);
    if let Some(folded) = fold_part_macro(part, &arg) {
        return folded;
    }
    if part.shift != 0 {
        return Expr::Call {
            callee: Box::new(Expr::atom(part.name)),
            args: vec![arg],
        };
    }
    // IDA writes a low-part read as a cast; the macros are reserved for
    // partial writes (`LODWORD(v3) = ...`). The prelude defines each as
    // exactly this cast, so the rewrite is textual identity after expansion.
    let cast = Expr::Cast {
        ty: part.ty().to_string(),
        expr: Box::new(unary_operand(arg)),
    };
    if matches!(place, Place::PostfixBase | Place::Callee) {
        Expr::Paren(Box::new(cast))
    } else {
        cast
    }
}

/// `(_BYTE)(x >> 8)` is the prelude's definition of `BYTE1(x)`, so a cast of
/// a shift reads the part at that shift.
fn cast_as_part(ty: &str, expr: &Expr) -> Option<(Part, Expr)> {
    let Expr::Binary {
        op: BinOp::Shr,
        lhs,
        rhs,
    } = peel_parens(expr)
    else {
        return None;
    };
    let shift = small_literal(rhs)?;
    let part = PARTS
        .into_iter()
        .find(|p| p.shift == shift && p.shift != 0 && p.ty() == ty)?;
    Some((part, (**lhs).clone()))
}

/// Rewrite `part(arg)` to the most direct equal part read. Each step is an
/// identity of the prelude definitions:
///
/// - `P(a >> k)` is the part `k` bits above `P` (`LOBYTE(x >> 8)` is
///   `BYTE1(x)`, `LODWORD(x >> 32)` is `HIDWORD(x)`);
/// - `P(Q(a))` reads only bits `Q` kept, so it is the part of `a` at the
///   sum of both shifts (`LOBYTE(HIWORD(x))` is `BYTE2(x)`);
/// - `P(a & c)` is `P(a)` when `c` keeps every bit `P` reads.
///
/// A new shift past bit 24 only arises where the input already shifted by
/// that much, so no step introduces a shift the original did not perform.
fn direct_part(part: Part, arg: Expr) -> (Part, Expr) {
    let step = match peel_parens(&arg) {
        Expr::Binary {
            op: BinOp::Shr,
            lhs,
            rhs,
        } => small_literal(rhs)
            .and_then(|k| Part::at(part.shift + k, part.bits))
            .map(|p| (p, (**lhs).clone())),
        Expr::Binary {
            op: BinOp::BitAnd,
            lhs,
            rhs,
        } if part.shift + part.bits <= 32 => {
            let keeps = |c: &Expr| {
                c.as_atom()
                    .and_then(int_literal)
                    .is_some_and(|lit| (lit.value >> part.shift) & part.mask() == part.mask())
            };
            if keeps(rhs) {
                Some((part, (**lhs).clone()))
            } else if keeps(lhs) {
                Some((part, (**rhs).clone()))
            } else {
                None
            }
        }
        Expr::Call { callee, args } if args.len() == 1 => callee
            .as_ident()
            .and_then(Part::named)
            .filter(|inner| part.shift + part.bits <= inner.bits)
            .and_then(|inner| Part::at(inner.shift + part.shift, part.bits))
            .map(|p| (p, args[0].clone())),
        _ => None,
    };
    match step {
        Some((part, arg)) => direct_part(part, arg),
        None => (part, arg),
    }
}

fn peel_parens(e: &Expr) -> &Expr {
    match e {
        Expr::Paren(inner) => peel_parens(inner),
        _ => e,
    }
}

/// An integer literal below 64, the range of a meaningful shift count.
fn small_literal(e: &Expr) -> Option<u32> {
    let lit = int_literal(peel_parens(e).as_atom()?)?;
    (lit.value < 64).then_some(lit.value as u32)
}

/// Evaluate a part macro applied to an integer literal.
fn fold_part_macro(part: Part, arg: &Expr) -> Option<Expr> {
    let (lit, negative) = match arg {
        Expr::Atom(s) => (int_literal(s)?, false),
        Expr::Prefix {
            op: PrefixOp::Neg,
            expr,
        } => (int_literal(expr.as_atom()?)?, true),
        _ => return None,
    };
    let value = if negative {
        -(lit.value as i128)
    } else {
        lit.value as i128
    };
    // `x >> 32` on an `int` literal is undefined; only fold HIDWORD of a
    // literal that is 64-bit by suffix or magnitude.
    let wide = lit.suffix.contains(['l', 'L']) || lit.value > u32::MAX as u128;
    if part.shift >= 32 && !wide {
        return None;
    }
    let folded = ((value >> part.shift) as u128) & part.mask();
    let digits = if lit.hex && folded > 9 {
        format!("{folded:#x}")
    } else {
        folded.to_string()
    };
    // A `_DWORD` result stays `unsigned int`; `_BYTE` and `_WORD` results
    // promote to `int`, which a plain literal already is.
    let suffix = if part.bits == 32 { "u" } else { "" };
    Some(Expr::atom(format!("{digits}{suffix}")))
}

// ---------------------------------------------------------------------------
// Statements: cot_asg -> cot_asgXXX -> cot_preinc/cot_predec
// ---------------------------------------------------------------------------

fn statement(e: Expr) -> Option<Expr> {
    match e {
        Expr::Assign { op: None, lhs, rhs } => {
            if lhs == rhs && lhs.as_ident().is_some() {
                return None;
            }
            Some(assignment(*lhs, *rhs))
        }
        Expr::Assign {
            op: Some(op),
            lhs,
            rhs,
        } => Some(compound(op, *lhs, *rhs)),
        Expr::Postfix { op, expr } => Some(Expr::Prefix {
            op: match op {
                IncDec::Inc => PrefixOp::Inc,
                IncDec::Dec => PrefixOp::Dec,
            },
            expr,
        }),
        other => Some(other),
    }
}

/// `x = x op y` -> `x op= y` (and `x = y op x` for commutative `op`), only
/// when `x` occurs exactly once on the right: `x = x + f(x)` stays as is.
fn assignment(lhs: Expr, rhs: Expr) -> Expr {
    if let Expr::Binary { op, lhs: a, rhs: b } = &rhs
        && op.has_compound()
        && is_pure(&lhs)
    {
        if **a == lhs && !mentions(b, &lhs) {
            return compound(*op, lhs, compound_operand((**b).clone()));
        }
        if op.is_commutative() && **b == lhs && !mentions(a, &lhs) {
            return compound(*op, lhs, compound_operand((**a).clone()));
        }
    }
    Expr::Assign {
        op: None,
        lhs: Box::new(lhs),
        rhs: Box::new(plain_literal(rhs)),
    }
}

/// `x += 1` -> `++x`, `x -= 1` -> `--x`.
fn compound(op: BinOp, lhs: Expr, rhs: Expr) -> Expr {
    let is_one = rhs
        .as_atom()
        .and_then(int_literal)
        .is_some_and(|lit| lit.value == 1);
    match op {
        BinOp::Add if is_one => Expr::Prefix {
            op: PrefixOp::Inc,
            expr: Box::new(lhs),
        },
        BinOp::Sub if is_one => Expr::Prefix {
            op: PrefixOp::Dec,
            expr: Box::new(lhs),
        },
        _ => Expr::Assign {
            op: Some(op),
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        },
    }
}

/// The right operand of `op=` binds looser than any binary operator, so its
/// parentheses are redundant unless it is itself a comma or assignment.
fn compound_operand(e: Expr) -> Expr {
    match e {
        Expr::Paren(inner) if !matches!(*inner, Expr::Comma { .. } | Expr::Assign { .. }) => *inner,
        other => other,
    }
}

/// A literal assigned, returned or used as an initializer converts to the
/// target type, so a width suffix only adds noise: `x = 0LL` -> `x = 0`.
fn plain_literal(e: Expr) -> Expr {
    match e {
        Expr::Atom(ref s) => match int_literal(s) {
            Some(lit) if !lit.suffix.is_empty() && (lit.hex || lit.value <= i64::MAX as u128) => {
                Expr::atom(lit.digits)
            }
            _ => e,
        },
        Expr::Prefix {
            op: PrefixOp::Neg,
            expr,
        } => Expr::Prefix {
            op: PrefixOp::Neg,
            expr: Box::new(plain_literal(*expr)),
        },
        other => other,
    }
}

// ---------------------------------------------------------------------------
// Conditions: cot_ne / cot_eq against zero
// ---------------------------------------------------------------------------

fn condition(e: Expr) -> Expr {
    match e {
        Expr::Binary {
            op: op @ (BinOp::LogAnd | BinOp::LogOr),
            lhs,
            rhs,
        } => mk_binary(op, condition(*lhs), condition(*rhs)),
        Expr::Paren(inner)
            if matches!(
                *inner,
                Expr::Binary {
                    op: BinOp::LogAnd | BinOp::LogOr,
                    ..
                }
            ) =>
        {
            Expr::Paren(Box::new(condition(*inner)))
        }
        Expr::Binary {
            op: op @ (BinOp::Ne | BinOp::Eq),
            lhs,
            rhs,
        } => zero_test(op, *lhs, *rhs),
        other => other,
    }
}

/// `x != 0` -> `x` and `x == 0` -> `!x` for a simple `x`. Bit tests keep
/// their explicit form (`(x & 2) != 0`), as Hex-Rays prints them.
fn zero_test(op: BinOp, lhs: Expr, rhs: Expr) -> Expr {
    let (value, zero_side) = if is_zero(&rhs) {
        (&lhs, true)
    } else if is_zero(&lhs) {
        (&rhs, false)
    } else {
        return mk_binary(op, lhs, rhs);
    };
    let simple = match value {
        Expr::Atom(s) => !is_literal(s),
        Expr::Call { .. } | Expr::Index { .. } | Expr::Member { .. } | Expr::Cast { .. } => true,
        Expr::Prefix {
            op: PrefixOp::Deref,
            ..
        } => true,
        _ => false,
    };
    if !simple {
        return mk_binary(op, lhs, rhs);
    }
    let value = if zero_side { lhs } else { rhs };
    match op {
        BinOp::Ne => value,
        _ => Expr::Prefix {
            op: PrefixOp::Not,
            expr: Box::new(value),
        },
    }
}

fn is_zero(e: &Expr) -> bool {
    match e.as_atom() {
        Some("'\\0'") => true,
        Some(s) => int_literal(s).is_some_and(|lit| lit.value == 0),
        None => false,
    }
}

// ---------------------------------------------------------------------------
// Shared helpers
// ---------------------------------------------------------------------------

fn mk_binary(op: BinOp, lhs: Expr, rhs: Expr) -> Expr {
    Expr::Binary {
        op,
        lhs: Box::new(lhs),
        rhs: Box::new(rhs),
    }
}

/// Parenthesise `e` unless it binds tightly enough to be a cast operand.
fn unary_operand(e: Expr) -> Expr {
    if e.is_unary_tight() {
        e
    } else {
        Expr::Paren(Box::new(e))
    }
}

/// `needle` occurs somewhere in `e`.
fn mentions(e: &Expr, needle: &Expr) -> bool {
    if e == needle {
        return true;
    }
    match e {
        Expr::Atom(_) => false,
        Expr::Paren(x)
        | Expr::Cast { expr: x, .. }
        | Expr::Prefix { expr: x, .. }
        | Expr::Postfix { expr: x, .. }
        | Expr::Member { base: x, .. } => mentions(x, needle),
        Expr::Call { callee, args } => {
            mentions(callee, needle) || args.iter().any(|a| mentions(a, needle))
        }
        Expr::Index { base, index } => mentions(base, needle) || mentions(index, needle),
        Expr::Binary { lhs, rhs, .. }
        | Expr::Assign { lhs, rhs, .. }
        | Expr::Comma { lhs, rhs } => mentions(lhs, needle) || mentions(rhs, needle),
        Expr::Ternary { cond, then, els } => {
            mentions(cond, needle) || mentions(then, needle) || mentions(els, needle)
        }
    }
}

/// No side effects and no volatile access, so evaluating it once or twice
/// is the same.
fn is_pure(e: &Expr) -> bool {
    match e {
        Expr::Atom(s) => s != "MEMORY",
        Expr::Paren(x) | Expr::Cast { expr: x, .. } | Expr::Member { base: x, .. } => is_pure(x),
        Expr::Prefix { op, expr } => !matches!(op, PrefixOp::Inc | PrefixOp::Dec) && is_pure(expr),
        Expr::Postfix { .. } | Expr::Assign { .. } | Expr::Comma { .. } => false,
        Expr::Call { callee, args } => {
            callee.as_ident().and_then(Part::named).is_some() && args.iter().all(is_pure)
        }
        Expr::Index { base, index } => is_pure(base) && is_pure(index),
        Expr::Binary { lhs, rhs, .. } => is_pure(lhs) && is_pure(rhs),
        Expr::Ternary { cond, then, els } => is_pure(cond) && is_pure(then) && is_pure(els),
    }
}

fn is_literal(s: &str) -> bool {
    s.starts_with(|c: char| c.is_ascii_digit() || matches!(c, '.' | '\'' | '"'))
}

/// An integer literal split into its value and spelling.
pub(super) struct IntLit<'a> {
    pub(super) value: u128,
    pub(super) hex: bool,
    /// The literal without its suffix.
    pub(super) digits: &'a str,
    pub(super) suffix: &'a str,
}

pub(super) fn int_literal(s: &str) -> Option<IntLit<'_>> {
    let digits = s.trim_end_matches(['u', 'U', 'l', 'L']);
    let suffix = &s[digits.len()..];
    let (body, radix, hex) = if let Some(h) = digits
        .strip_prefix("0x")
        .or_else(|| digits.strip_prefix("0X"))
    {
        (h, 16, true)
    } else if digits.len() > 1 && digits.starts_with('0') {
        (&digits[1..], 8, false)
    } else {
        (digits, 10, false)
    };
    if body.is_empty() || !body.chars().all(|c| c.is_digit(radix)) {
        return None;
    }
    let value = u128::from_str_radix(body, radix).ok()?;
    Some(IntLit {
        value,
        hex,
        digits,
        suffix,
    })
}

impl Expr {
    fn as_atom(&self) -> Option<&str> {
        match self {
            Expr::Atom(s) => Some(s),
            _ => None,
        }
    }
}
