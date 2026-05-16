//! Semantic C-expression node helpers (Batch 11 slice 1).
//!
//! This is the *foundation* of a future small-step ctree rewrite of the
//! C printer.  Today the printer assembles output by `format!`-ing
//! strings directly, which makes it impossible to do precedence-aware
//! transformations (e.g. "lift `*(_QWORD *)(p + 8)` into `p->field_8`")
//! without risking double-parenthesization or operator-precedence bugs.
//!
//! [`CExpr`] is the minimum vocabulary needed to express the operand
//! shapes the printer actually produces — leaves (already-formatted
//! strings), casts, member access (`->` / `.`), array subscripts,
//! unary deref/addr-of, binary operators, calls, IDA-style coercions
//! (`(_DWORD)x`), and IDA pseudo-macros (`HIDWORD(x)`, `LOBYTE(x)`,
//! etc.).
//!
//! The [`Display`] impl follows the standard C operator precedence
//! table.  A child sub-expression is parenthesized when its precedence
//! is **numerically greater** than the parent's — the convention here
//! is "lower number = tighter binding", matching the canonical C
//! precedence numbering (1 = postfix, 14 = comma).
//!
//! ## Scope
//!
//! This slice deliberately does *not* attempt to model the full set of
//! C expressions: no ternary, no compound literals, no sizeof, no
//! pre/post-increment.  Those will be added when individual rewrite
//! passes need them.  The goal of this slice is to land the helpers +
//! wire **one** emit path (the struct-field arrow form) so future
//! batches can incrementally migrate more sites onto the AST without a
//! single all-or-nothing rewrite.

use std::fmt;

/// A C-expression sub-tree.
///
/// Most variants box their children so `CExpr` itself stays small and
/// recursive trees can be built fluently.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CExpr {
    /// Already-formatted leaf — variable name, integer literal, raw
    /// rendering produced by some other code path.  The printer treats
    /// the contents as opaque; precedence is assumed atomic.
    Lit(String),

    /// C-style cast: `(T)(inner)`.  The inner expression is always
    /// parenthesized to avoid precedence surprises with chained casts.
    Cast { ty: String, inner: Box<CExpr> },

    /// Member access — `obj->field` when `arrow`, otherwise `obj.field`.
    /// Postfix; binds tightest.
    Member {
        obj: Box<CExpr>,
        field: String,
        arrow: bool,
    },

    /// Array subscript — `arr[idx]`.  Postfix.
    Index { arr: Box<CExpr>, idx: Box<CExpr> },

    /// Pointer dereference — `*p`.  Unary prefix.
    Deref(Box<CExpr>),

    /// Address-of — `&x`.  Unary prefix.
    AddrOf(Box<CExpr>),

    /// Binary operator.  `op` is the printed token (e.g. `"+"`, `"<<"`,
    /// `"&&"`) — precedence is recovered from the token via
    /// [`binary_precedence`].
    Binary {
        op: &'static str,
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
    },

    /// Function or pseudo-function call — `callee(a, b, c)`.  Postfix.
    Call {
        callee: Box<CExpr>,
        args: Vec<CExpr>,
    },

    /// IDA-style narrowing coercion — `(_DWORD)x`, `(_QWORD)x`, etc.
    /// Semantically a cast, but kept distinct so the printer can apply
    /// IDA-specific style rules without scanning cast strings.
    Coerce {
        kind: CoerceKind,
        inner: Box<CExpr>,
    },

    /// IDA pseudo-macro — `LOBYTE(x)`, `HIDWORD(x)`, etc.  Printed as a
    /// function call but identified separately so future passes can
    /// fold them back into typed accesses.
    Macro {
        name: &'static str,
        args: Vec<CExpr>,
    },
}

/// Narrowing coercion kinds for IDA-style casts.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoerceKind {
    Double,
    Int,
    Long,
    Float,
    Byte,
    Word,
    Dword,
    Qword,
}

impl CoerceKind {
    /// The printed token (the bit between the parens) for this kind.
    pub fn as_str(self) -> &'static str {
        match self {
            CoerceKind::Double => "double",
            CoerceKind::Int => "int",
            CoerceKind::Long => "long",
            CoerceKind::Float => "float",
            CoerceKind::Byte => "_BYTE",
            CoerceKind::Word => "_WORD",
            CoerceKind::Dword => "_DWORD",
            CoerceKind::Qword => "_QWORD",
        }
    }
}

// ---------------------------------------------------------------------------
// Precedence table
// ---------------------------------------------------------------------------
//
// Numbering matches the canonical C table (cppreference): 1 binds
// tightest, 15 is comma.  Atomic / postfix forms get 1.  When emitting
// a child node we parenthesize iff `child_prec > parent_prec` — equal
// precedence is left-associative for every operator we currently
// model, so no parens needed there for the left child.  (Right
// children of left-associative operators *do* need parens at equal
// precedence; the impl handles that explicitly.)

/// Precedence level for a `CExpr` node.  Lower = tighter binding.
fn precedence(e: &CExpr) -> u8 {
    match e {
        CExpr::Lit(_) => 1,
        CExpr::Member { .. } | CExpr::Index { .. } | CExpr::Call { .. } => 1,
        // A cast (incl. Coerce) is precedence 2 in C.
        CExpr::Cast { .. } | CExpr::Coerce { .. } => 2,
        CExpr::Deref(_) | CExpr::AddrOf(_) => 2,
        // Macros print like a call, so they're postfix.
        CExpr::Macro { .. } => 1,
        CExpr::Binary { op, .. } => binary_precedence(op),
    }
}

/// Precedence of a binary operator token.  Mirrors the C table.
fn binary_precedence(op: &str) -> u8 {
    match op {
        "*" | "/" | "%" => 3,
        "+" | "-" => 4,
        "<<" | ">>" => 5,
        "<" | "<=" | ">" | ">=" => 6,
        "==" | "!=" => 7,
        "&" => 8,
        "^" => 9,
        "|" => 10,
        "&&" => 11,
        "||" => 12,
        // Assignment is right-associative at prec 14, but we don't emit
        // assignments through `Binary` today.  Fall back to a sensible
        // default that always parenthesizes inside a containing op.
        _ => 14,
    }
}

/// Format `child` as a sub-expression of `parent_prec`, adding parens
/// when the child binds looser than the parent.
fn fmt_child(f: &mut fmt::Formatter<'_>, child: &CExpr, parent_prec: u8) -> fmt::Result {
    if precedence(child) > parent_prec {
        write!(f, "({})", child)
    } else {
        write!(f, "{}", child)
    }
}

/// Same as [`fmt_child`] but treats equal precedence as needing parens
/// — used for the right-hand operand of left-associative binary ops.
fn fmt_child_strict(f: &mut fmt::Formatter<'_>, child: &CExpr, parent_prec: u8) -> fmt::Result {
    if precedence(child) >= parent_prec {
        write!(f, "({})", child)
    } else {
        write!(f, "{}", child)
    }
}

impl fmt::Display for CExpr {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            CExpr::Lit(s) => f.write_str(s),

            CExpr::Cast { ty, inner } => {
                // Always wrap the inner in parens — this matches the
                // IDA / printer convention `(T)(x)` and removes any
                // ambiguity with following postfix operators.
                write!(f, "({})({})", ty, inner)
            }

            CExpr::Coerce { kind, inner } => {
                write!(f, "({})", kind.as_str())?;
                // Coerce binds at cast precedence (2).  The inner is
                // parenthesized when it would otherwise bind looser.
                fmt_child(f, inner, 2)
            }

            CExpr::Member { obj, field, arrow } => {
                fmt_child(f, obj, 1)?;
                if *arrow {
                    write!(f, "->{}", field)
                } else {
                    write!(f, ".{}", field)
                }
            }

            CExpr::Index { arr, idx } => {
                fmt_child(f, arr, 1)?;
                // The subscript expression itself is a fresh context
                // (the `[…]` brackets act as grouping), so no parens
                // needed inside.
                write!(f, "[{}]", idx)
            }

            CExpr::Deref(inner) => {
                write!(f, "*")?;
                fmt_child(f, inner, 2)
            }

            CExpr::AddrOf(inner) => {
                write!(f, "&")?;
                fmt_child(f, inner, 2)
            }

            CExpr::Binary { op, lhs, rhs } => {
                let p = binary_precedence(op);
                fmt_child(f, lhs, p)?;
                write!(f, " {} ", op)?;
                // Right-hand side of a left-associative op needs parens
                // at equal precedence: `a - (b - c)` ≠ `a - b - c`.
                fmt_child_strict(f, rhs, p)
            }

            CExpr::Call { callee, args } => {
                fmt_child(f, callee, 1)?;
                write!(f, "(")?;
                for (i, a) in args.iter().enumerate() {
                    if i > 0 {
                        write!(f, ", ")?;
                    }
                    // Inside a call argument list, commas separate
                    // arguments, so the implicit precedence is below
                    // assignment but above the comma operator.  We
                    // never emit assignment or comma through `CExpr`
                    // today, so a flat `{}` is correct.
                    write!(f, "{}", a)?;
                }
                write!(f, ")")
            }

            CExpr::Macro { name, args } => {
                write!(f, "{}(", name)?;
                for (i, a) in args.iter().enumerate() {
                    if i > 0 {
                        write!(f, ", ")?;
                    }
                    write!(f, "{}", a)?;
                }
                write!(f, ")")
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Convenience constructors — keep call sites readable without forcing
// every caller to spell out `Box::new(...)`.
// ---------------------------------------------------------------------------

impl CExpr {
    /// `CExpr::Lit(s.into())`.
    pub fn lit(s: impl Into<String>) -> Self {
        CExpr::Lit(s.into())
    }

    /// Build `obj->field` (arrow form).
    pub fn arrow(obj: CExpr, field: impl Into<String>) -> Self {
        CExpr::Member {
            obj: Box::new(obj),
            field: field.into(),
            arrow: true,
        }
    }

    /// Build `obj.field` (dot form).
    pub fn dot(obj: CExpr, field: impl Into<String>) -> Self {
        CExpr::Member {
            obj: Box::new(obj),
            field: field.into(),
            arrow: false,
        }
    }

    /// Build `arr[idx]`.
    pub fn index(arr: CExpr, idx: CExpr) -> Self {
        CExpr::Index {
            arr: Box::new(arr),
            idx: Box::new(idx),
        }
    }

    /// Build `*p`.
    pub fn deref(inner: CExpr) -> Self {
        CExpr::Deref(Box::new(inner))
    }

    /// Build `&x`.
    pub fn addr_of(inner: CExpr) -> Self {
        CExpr::AddrOf(Box::new(inner))
    }

    /// Build `(T)(inner)`.
    pub fn cast(ty: impl Into<String>, inner: CExpr) -> Self {
        CExpr::Cast {
            ty: ty.into(),
            inner: Box::new(inner),
        }
    }

    /// Build `lhs op rhs`.
    pub fn binary(op: &'static str, lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::Binary {
            op,
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lit(s: &str) -> CExpr {
        CExpr::lit(s)
    }

    // -- Display of each variant ------------------------------------------

    #[test]
    fn lit_renders_verbatim() {
        assert_eq!(lit("x").to_string(), "x");
        assert_eq!(lit("0x10").to_string(), "0x10");
    }

    #[test]
    fn cast_always_wraps_inner() {
        let e = CExpr::cast("int", lit("x"));
        assert_eq!(e.to_string(), "(int)(x)");
    }

    #[test]
    fn member_arrow_and_dot() {
        let arrow = CExpr::arrow(lit("p"), "field_8");
        assert_eq!(arrow.to_string(), "p->field_8");
        let dot = CExpr::dot(lit("s"), "x");
        assert_eq!(dot.to_string(), "s.x");
    }

    #[test]
    fn index_renders() {
        let e = CExpr::index(lit("arr"), lit("i"));
        assert_eq!(e.to_string(), "arr[i]");
    }

    #[test]
    fn deref_and_addr_of() {
        assert_eq!(CExpr::deref(lit("p")).to_string(), "*p");
        assert_eq!(CExpr::addr_of(lit("x")).to_string(), "&x");
    }

    #[test]
    fn binary_simple() {
        let e = CExpr::binary("+", lit("a"), lit("b"));
        assert_eq!(e.to_string(), "a + b");
    }

    #[test]
    fn call_renders() {
        let e = CExpr::Call {
            callee: Box::new(lit("foo")),
            args: vec![lit("1"), lit("2")],
        };
        assert_eq!(e.to_string(), "foo(1, 2)");
    }

    #[test]
    fn coerce_renders() {
        let e = CExpr::Coerce {
            kind: CoerceKind::Dword,
            inner: Box::new(lit("x")),
        };
        assert_eq!(e.to_string(), "(_DWORD)x");
    }

    #[test]
    fn macro_renders() {
        let e = CExpr::Macro {
            name: "HIDWORD",
            args: vec![lit("x")],
        };
        assert_eq!(e.to_string(), "HIDWORD(x)");
    }

    // -- Precedence rules --------------------------------------------------

    #[test]
    fn add_inside_mul_parenthesizes() {
        // (a + b) * c
        let inner = CExpr::binary("+", lit("a"), lit("b"));
        let outer = CExpr::binary("*", inner, lit("c"));
        assert_eq!(outer.to_string(), "(a + b) * c");
    }

    #[test]
    fn mul_inside_add_no_parens() {
        // a + b * c   (mul binds tighter — no parens needed)
        let inner = CExpr::binary("*", lit("b"), lit("c"));
        let outer = CExpr::binary("+", lit("a"), inner);
        assert_eq!(outer.to_string(), "a + b * c");
    }

    #[test]
    fn right_assoc_of_left_assoc_parenthesizes() {
        // a - (b - c)  must keep its parens even though both are
        // precedence 4, because subtraction is left-associative and
        // `a - b - c` would mean `(a - b) - c`.
        let inner = CExpr::binary("-", lit("b"), lit("c"));
        let outer = CExpr::binary("-", lit("a"), inner);
        assert_eq!(outer.to_string(), "a - (b - c)");
    }

    #[test]
    fn left_assoc_of_left_assoc_no_parens() {
        // (a - b) - c  on the lhs at equal precedence does NOT need
        // parens — left-associative grouping is the default reading.
        let inner = CExpr::binary("-", lit("a"), lit("b"));
        let outer = CExpr::binary("-", inner, lit("c"));
        assert_eq!(outer.to_string(), "a - b - c");
    }

    #[test]
    fn member_of_deref_parenthesizes() {
        // Deref is precedence 2, Member is 1 — so member-of-deref
        // requires parens: `(*p).field`.
        let inner = CExpr::deref(lit("p"));
        let outer = CExpr::dot(inner, "field");
        assert_eq!(outer.to_string(), "(*p).field");
    }

    #[test]
    fn deref_of_member_no_parens() {
        // *(p->q)  →  *p->q   (member binds tighter)
        let inner = CExpr::arrow(lit("p"), "q");
        let outer = CExpr::deref(inner);
        assert_eq!(outer.to_string(), "*p->q");
    }

    #[test]
    fn cast_inside_member_uses_parens_on_object() {
        // ((T)(x))->f
        let cast = CExpr::cast("T *", lit("x"));
        let mem = CExpr::arrow(cast, "f");
        assert_eq!(mem.to_string(), "((T *)(x))->f");
    }

    #[test]
    fn comparison_inside_logical() {
        // a < b && c < d
        let lhs = CExpr::binary("<", lit("a"), lit("b"));
        let rhs = CExpr::binary("<", lit("c"), lit("d"));
        let e = CExpr::binary("&&", lhs, rhs);
        assert_eq!(e.to_string(), "a < b && c < d");
    }

    #[test]
    fn shift_inside_bitwise_and() {
        // (a >> 1) & 0xff   — shift is prec 5, & is prec 8, so the
        // shift binds tighter and no parens are required.
        let shift = CExpr::binary(">>", lit("a"), lit("1"));
        let and = CExpr::binary("&", shift, lit("0xff"));
        assert_eq!(and.to_string(), "a >> 1 & 0xff");
    }

    #[test]
    fn bitwise_and_inside_shift_parenthesizes() {
        // (a & 1) << 4   — & is prec 8, << is prec 5, so the & must
        // be parenthesized inside the shift.
        let and = CExpr::binary("&", lit("a"), lit("1"));
        let shift = CExpr::binary("<<", and, lit("4"));
        assert_eq!(shift.to_string(), "(a & 1) << 4");
    }

    // -- The one wired path: member arrow form -----------------------------

    #[test]
    fn wired_member_matches_legacy_format() {
        // The struct-field-access path was historically emitted as
        // `format!("{}->{}", base, field)`.  The new `CExpr::arrow`
        // wiring must produce a byte-identical string for the common
        // case where the base is a simple identifier.
        let legacy = format!("{}->{}", "p", "field_8");
        let new = CExpr::arrow(CExpr::lit("p"), "field_8").to_string();
        assert_eq!(legacy, new);
    }
}
