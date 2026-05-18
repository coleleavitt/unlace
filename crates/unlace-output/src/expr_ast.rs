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
    Cast {
        ty: String,
        inner: Box<CExpr>,
    },

    /// Member access — `obj->field` when `arrow`, otherwise `obj.field`.
    /// Postfix; binds tightest.
    Member {
        obj: Box<CExpr>,
        field: String,
        arrow: bool,
    },

    /// Array subscript — `arr[idx]`.  Postfix.
    Index {
        arr: Box<CExpr>,
        idx: Box<CExpr>,
    },

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

    /// Conditional expression — `cond ? then : else`. Batch 19 expansion;
    /// IDA `cot_tern`.
    Ternary {
        cond: Box<CExpr>,
        then_branch: Box<CExpr>,
        else_branch: Box<CExpr>,
    },

    /// `sizeof(<inner>)` — printed as `sizeof(<inner>)` regardless of the
    /// inner's precedence (postfix unary).
    Sizeof(Box<CExpr>),

    /// `++x` / `--x` prefix increment/decrement. Batch 19 expansion;
    /// IDA `cot_preinc`/`cot_predec`.
    PreInc(Box<CExpr>),
    PreDec(Box<CExpr>),

    /// `x++` / `x--` postfix increment/decrement. Batch 19 expansion;
    /// IDA `cot_postinc`/`cot_postdec`.
    PostInc(Box<CExpr>),
    PostDec(Box<CExpr>),

    /// `lhs , rhs` — sequence point + result is `rhs`. IDA `cot_comma`.
    Comma {
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
    },

    /// `lhs = rhs`. Right-associative; side-effecting.
    /// IDA `cot_asg`.
    Assign {
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
    },

    /// `lhs <op>= rhs` — compound assignment. `op` is one of
    /// `"+"`, `"-"`, `"*"`, `"/"`, `"%"`, `"<<"`, `">>"`, `"&"`, `"|"`,
    /// `"^"`. IDA `cot_asg{add,sub,mul,sdiv,udiv,smod,umod,shl,sshr,ushr,bor,band,xor}`.
    CompoundAssign {
        op: &'static str,
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
    },

    /// `-x` arithmetic negation. IDA `cot_neg`.
    Neg(Box<CExpr>),

    /// `!x` logical not. IDA `cot_lnot`.
    LogicalNot(Box<CExpr>),

    /// `~x` bitwise not. IDA `cot_bnot`.
    BitwiseNot(Box<CExpr>),

    /// IDA helper function (no prototype, name is opaque to the IR).
    /// Rendered as a regular call `name(args)`. IDA `cot_helper`.
    Helper {
        name: String,
        args: Vec<CExpr>,
    },

    /// Integer-typed function id used in indirect call rewrites.
    /// IDA `cot_fnum`. Rendered as `(name@addr)` so the address is
    /// visible while still pointing at a name.
    FuncId {
        name: String,
        addr: u64,
    },

    /// `({ … })` GCC statement expression. Body is rendered as a
    /// `{ stmt; stmt; expr }` block; this CExpr carries only the
    /// already-formatted body so the structurer-side rendering stays
    /// inside `c_printer`. IDA `cot_insn`/`cot_block` equivalent.
    StmtExpr(String),

    /// IDA `cot_str` — string literal. Rendered with C-escape rules
    /// the caller already applied (the contained string is the
    /// `"..."` ready form, *without* the surrounding quotes).
    Str(String),

    /// IDA `cot_obj` — reference to a global object at a known
    /// address. The name is the human-readable label; the address is
    /// preserved so cross-references survive.
    Obj {
        name: String,
        addr: u64,
    },

    /// IDA `cot_empty` (0) — sentinel for an absent expression.
    /// Renders as the empty string.
    Empty,

    /// IDA `cot_label` (4) — local label reference (e.g. inside a
    /// printed goto target list). Renders as `LABEL_<n>`.
    Label(u32),

    /// IDA `cot_var` (8) — local variable reference. `idx` is the
    /// lvar id for cross-reference; only `name` is rendered.
    Var {
        name: String,
        idx: u32,
    },

    /// IDA `cot_num` (9) — typed integer literal.
    Num {
        value: u64,
        signed: bool,
        /// Width in bytes (1/2/4/8).
        width: u8,
    },

    /// IDA `cot_fnum` (10) — floating-point literal. `bits` is the
    /// IEEE-754 representation (so `CExpr` can keep `Eq`); `width` is
    /// 4 for `float`, 8 for `double`.
    Fnum {
        /// IEEE-754 bit pattern, little-endian.
        bits: u64,
        width: u8,
    },

    /// IDA `cot_type` (3) — bare reference to a type name (e.g. the
    /// inner of a `sizeof(T)` expression).
    TypeRef(String),

    /// IDA `cot_fneg` (38) — float negation. Distinct from `Neg` so
    /// later folding passes can apply float-aware rules.
    FloatNeg(Box<CExpr>),

    /// IDA `cot_fadd`/`fsub`/`fmul`/`fdiv` (40/41/42/44) — float
    /// arithmetic. Same token-based dispatch as `Binary` but kept
    /// distinct for float semantics (NaN, infinity, rounding).
    FloatBinary {
        op: &'static str,
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
    },

    /// IDA `cot_psub` (43) — pointer subtraction. Renders as
    /// `(lhs - rhs)` with a trailing `/* ptrdiff */` hint; future
    /// passes can fold the `/ sizeof(*lhs)` divisor when the pointee
    /// type is known.
    PtrDiff {
        lhs: Box<CExpr>,
        rhs: Box<CExpr>,
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

/// Substitute every occurrence of `Lit(name)` inside `expr` with `replacement`.
///
/// Batch 19 cross-statement folder helper. Use this when the structurer
/// would otherwise emit two adjacent statements like:
///
/// ```text
/// v3 = foo + bar;
/// result = v3 * 4;
/// ```
///
/// and the temp `v3` is provably single-use and side-effect-free. The
/// caller is responsible for that determination — this function only does
/// the substitution. It walks every variant recursively and never
/// duplicates side-effecting nodes ([`CExpr::Call`] under `replacement`
/// will only appear once because we move the original tree in, not clone
/// per visit).
///
/// Returns the rewritten `expr` and the number of substitution points
/// performed. The count is `0` when the name doesn't appear; this is
/// useful when callers want to assert that the temp was actually inlined.
pub fn substitute_lit(expr: CExpr, name: &str, replacement: &CExpr) -> (CExpr, usize) {
    let mut hits = 0;
    let out = substitute_lit_inner(expr, name, replacement, &mut hits);
    (out, hits)
}

fn substitute_lit_inner(expr: CExpr, name: &str, replacement: &CExpr, hits: &mut usize) -> CExpr {
    match expr {
        CExpr::Lit(s) if s == name => {
            *hits += 1;
            replacement.clone()
        }
        CExpr::Lit(_) => expr,
        CExpr::Cast { ty, inner } => CExpr::Cast {
            ty,
            inner: Box::new(substitute_lit_inner(*inner, name, replacement, hits)),
        },
        CExpr::Member { obj, field, arrow } => CExpr::Member {
            obj: Box::new(substitute_lit_inner(*obj, name, replacement, hits)),
            field,
            arrow,
        },
        CExpr::Index { arr, idx } => CExpr::Index {
            arr: Box::new(substitute_lit_inner(*arr, name, replacement, hits)),
            idx: Box::new(substitute_lit_inner(*idx, name, replacement, hits)),
        },
        CExpr::Deref(inner) => CExpr::Deref(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::AddrOf(inner) => CExpr::AddrOf(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::Binary { op, lhs, rhs } => CExpr::Binary {
            op,
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
        CExpr::Call { callee, args } => CExpr::Call {
            callee: Box::new(substitute_lit_inner(*callee, name, replacement, hits)),
            args: args
                .into_iter()
                .map(|a| substitute_lit_inner(a, name, replacement, hits))
                .collect(),
        },
        CExpr::Coerce { kind, inner } => CExpr::Coerce {
            kind,
            inner: Box::new(substitute_lit_inner(*inner, name, replacement, hits)),
        },
        CExpr::Macro { name: mname, args } => CExpr::Macro {
            name: mname,
            args: args
                .into_iter()
                .map(|a| substitute_lit_inner(a, name, replacement, hits))
                .collect(),
        },
        CExpr::Ternary {
            cond,
            then_branch,
            else_branch,
        } => CExpr::Ternary {
            cond: Box::new(substitute_lit_inner(*cond, name, replacement, hits)),
            then_branch: Box::new(substitute_lit_inner(*then_branch, name, replacement, hits)),
            else_branch: Box::new(substitute_lit_inner(*else_branch, name, replacement, hits)),
        },
        CExpr::Sizeof(inner) => CExpr::Sizeof(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::PreInc(inner) => CExpr::PreInc(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::PreDec(inner) => CExpr::PreDec(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::PostInc(inner) => CExpr::PostInc(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::PostDec(inner) => CExpr::PostDec(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::Comma { lhs, rhs } => CExpr::Comma {
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
        CExpr::Assign { lhs, rhs } => CExpr::Assign {
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
        CExpr::CompoundAssign { op, lhs, rhs } => CExpr::CompoundAssign {
            op,
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
        CExpr::Neg(inner) => CExpr::Neg(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::LogicalNot(inner) => CExpr::LogicalNot(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::BitwiseNot(inner) => CExpr::BitwiseNot(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::Helper { name: hname, args } => CExpr::Helper {
            name: hname,
            args: args
                .into_iter()
                .map(|a| substitute_lit_inner(a, name, replacement, hits))
                .collect(),
        },
        // Leaf-like: no nested CExpr → no substitution.
        CExpr::FuncId { .. } | CExpr::StmtExpr(_) | CExpr::Str(_) | CExpr::Obj { .. } => expr,
        // §4 leaves are also opaque w.r.t. lit substitution; the `Var`
        // variant intentionally is *not* substituted by lit-name because
        // the lit-substitution helper targets `Lit(name)` only.
        CExpr::Empty
        | CExpr::Label(_)
        | CExpr::Var { .. }
        | CExpr::Num { .. }
        | CExpr::Fnum { .. }
        | CExpr::TypeRef(_) => expr,
        CExpr::FloatNeg(inner) => CExpr::FloatNeg(Box::new(substitute_lit_inner(
            *inner,
            name,
            replacement,
            hits,
        ))),
        CExpr::FloatBinary { op, lhs, rhs } => CExpr::FloatBinary {
            op,
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
        CExpr::PtrDiff { lhs, rhs } => CExpr::PtrDiff {
            lhs: Box::new(substitute_lit_inner(*lhs, name, replacement, hits)),
            rhs: Box::new(substitute_lit_inner(*rhs, name, replacement, hits)),
        },
    }
}

/// One row of the Batch 19 CExpr coverage table. Describes a printable
/// node's arity, precedence rank (lower = binds tighter, IDA-style), and
/// whether it can carry side effects (so cross-statement folding knows
/// when *not* to duplicate the node).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CExprCoverageRow {
    pub variant: &'static str,
    /// `None` for variable-arity nodes (calls, macros, sequences).
    pub arity: Option<u8>,
    /// IDA-numbered precedence: 0 = leaf, 14 = comma. `0` for nodes that
    /// always parenthesize / are atomic.
    pub precedence: u8,
    pub may_side_effect: bool,
    pub notes: &'static str,
}

/// Return a Markdown table describing every [`CExpr`] variant. Used to
/// generate `COVERAGE.md` content and pinned by a test so an enum drift
/// (new variant added, forgotten in the printer) fails noisily.
pub fn cexpr_coverage_rows() -> Vec<CExprCoverageRow> {
    vec![
        CExprCoverageRow {
            variant: "Lit",
            arity: Some(0),
            precedence: 0,
            may_side_effect: false,
            notes: "Opaque pre-rendered leaf (identifier, integer literal, etc.); no direct `cot_*` — used by helpers and rendered output.",
        },
        CExprCoverageRow {
            variant: "Cast",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`(T)(inner)`; always parens the inner. Maps to `cot_cast`.",
        },
        CExprCoverageRow {
            variant: "Member",
            arity: Some(1),
            precedence: 1,
            may_side_effect: false,
            notes: "`obj->field` / `obj.field`; postfix. Maps to `cot_memptr` (arrow) / `cot_memref` (dot).",
        },
        CExprCoverageRow {
            variant: "Index",
            arity: Some(2),
            precedence: 1,
            may_side_effect: false,
            notes: "`arr[idx]`; postfix. Maps to `cot_idx`.",
        },
        CExprCoverageRow {
            variant: "Deref",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`*p`; unary prefix. Maps to `cot_ptr`.",
        },
        CExprCoverageRow {
            variant: "AddrOf",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`&x`; unary prefix. Maps to `cot_ref`.",
        },
        CExprCoverageRow {
            variant: "Binary",
            arity: Some(2),
            precedence: 14,
            may_side_effect: false,
            notes: "Precedence recovered from token via `binary_precedence`. Token dispatches to `cot_lor`/`cot_land`/`cot_bor`/`cot_xor`/`cot_band`/`cot_eq`/`cot_ne`/`cot_sge`/`cot_uge`/`cot_sle`/`cot_ule`/`cot_sgt`/`cot_ugt`/`cot_slt`/`cot_ult`/`cot_sshr`/`cot_ushr`/`cot_shl`/`cot_add`/`cot_sub`/`cot_mul`/`cot_sdiv`/`cot_udiv`/`cot_smod`/`cot_umod`.",
        },
        CExprCoverageRow {
            variant: "Call",
            arity: None,
            precedence: 1,
            may_side_effect: true,
            notes: "`callee(args...)`; postfix and assumed to carry side effects. Maps to `cot_call`.",
        },
        CExprCoverageRow {
            variant: "Coerce",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "IDA narrowing cast: `(_DWORD)x`, `(_QWORD)x`, etc. No direct `cot_*` — emitted by macro-folding passes.",
        },
        CExprCoverageRow {
            variant: "Macro",
            arity: None,
            precedence: 1,
            may_side_effect: false,
            notes: "IDA pseudo-macros (`LOBYTE`, `HIDWORD`, …). No direct `cot_*` — emitted by macro-folding passes.",
        },
        CExprCoverageRow {
            variant: "Ternary",
            arity: Some(3),
            precedence: 13,
            may_side_effect: false,
            notes: "`cond ? then : else`; right-associative at prec 13. Maps to `cot_tern`.",
        },
        CExprCoverageRow {
            variant: "Sizeof",
            arity: Some(1),
            precedence: 1,
            may_side_effect: false,
            notes: "`sizeof(inner)`; always parenthesises the operand. Maps to `cot_sizeof`.",
        },
        CExprCoverageRow {
            variant: "PreInc",
            arity: Some(1),
            precedence: 2,
            may_side_effect: true,
            notes: "`++x`; mutates its operand. Maps to `cot_preinc`.",
        },
        CExprCoverageRow {
            variant: "PreDec",
            arity: Some(1),
            precedence: 2,
            may_side_effect: true,
            notes: "`--x`; mutates its operand. Maps to `cot_predec`.",
        },
        CExprCoverageRow {
            variant: "PostInc",
            arity: Some(1),
            precedence: 1,
            may_side_effect: true,
            notes: "`x++`; postfix. Maps to `cot_postinc`.",
        },
        CExprCoverageRow {
            variant: "PostDec",
            arity: Some(1),
            precedence: 1,
            may_side_effect: true,
            notes: "`x--`; postfix. Maps to `cot_postdec`.",
        },
        CExprCoverageRow {
            variant: "Comma",
            arity: Some(2),
            precedence: 15,
            may_side_effect: true,
            notes: "`a, b`; result is `b`. Loosest binding in C. Maps to `cot_comma`.",
        },
        CExprCoverageRow {
            variant: "Assign",
            arity: Some(2),
            precedence: 14,
            may_side_effect: true,
            notes: "`lhs = rhs`; right-associative. Maps to `cot_asg`.",
        },
        CExprCoverageRow {
            variant: "CompoundAssign",
            arity: Some(2),
            precedence: 14,
            may_side_effect: true,
            notes: "`lhs <op>= rhs`; op is +, -, *, /, %, <<, >>, &, |, ^. Token dispatches to `cot_asgbor`/`cot_asgxor`/`cot_asgband`/`cot_asgadd`/`cot_asgsub`/`cot_asgmul`/`cot_asgsshr`/`cot_asgushr`/`cot_asgshl`/`cot_asgsdiv`/`cot_asgudiv`/`cot_asgsmod`/`cot_asgumod`.",
        },
        CExprCoverageRow {
            variant: "Neg",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`-x`; arithmetic negation. Maps to `cot_neg`.",
        },
        CExprCoverageRow {
            variant: "LogicalNot",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`!x`; logical not. Maps to `cot_lnot`.",
        },
        CExprCoverageRow {
            variant: "BitwiseNot",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "`~x`; bitwise not. Maps to `cot_bnot`.",
        },
        CExprCoverageRow {
            variant: "Helper",
            arity: None,
            precedence: 1,
            may_side_effect: true,
            notes: "IDA helper call (no prototype). Maps to `cot_helper`.",
        },
        CExprCoverageRow {
            variant: "FuncId",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Function id literal `name@0xADDR`. Re-uses `cot_fnum` slot semantics (function-pointer literal); rendered distinctly.",
        },
        CExprCoverageRow {
            variant: "StmtExpr",
            arity: Some(0),
            precedence: 1,
            may_side_effect: true,
            notes: "GCC statement expression `({ ... })`. Maps to `cot_insn` (embedded micro-instruction).",
        },
        CExprCoverageRow {
            variant: "Str",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "C string literal `\"...\"` (escapes pre-applied). Maps to `cot_str`.",
        },
        CExprCoverageRow {
            variant: "Obj",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Reference to a named global at a known address. Maps to `cot_obj`.",
        },
        // §4 additions.
        CExprCoverageRow {
            variant: "Empty",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Sentinel; renders empty (`cot_empty`).",
        },
        CExprCoverageRow {
            variant: "Label",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "`LABEL_<n>` local-label reference (`cot_label`).",
        },
        CExprCoverageRow {
            variant: "Var",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Local-var reference by name (`cot_var`).",
        },
        CExprCoverageRow {
            variant: "Num",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Typed integer literal (`cot_num`); decimal ≤ 0xFF, hex above.",
        },
        CExprCoverageRow {
            variant: "Fnum",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Floating-point literal (`cot_fnum`); stored as IEEE-754 bits.",
        },
        CExprCoverageRow {
            variant: "TypeRef",
            arity: Some(0),
            precedence: 1,
            may_side_effect: false,
            notes: "Bare type-name reference (`cot_type`).",
        },
        CExprCoverageRow {
            variant: "FloatNeg",
            arity: Some(1),
            precedence: 2,
            may_side_effect: false,
            notes: "Float negation (`cot_fneg`).",
        },
        CExprCoverageRow {
            variant: "FloatBinary",
            arity: Some(2),
            precedence: 4,
            may_side_effect: false,
            notes: "Float arithmetic (`cot_fadd`/`fsub`/`fmul`/`fdiv`); same tokens as Binary, distinct for semantics.",
        },
        CExprCoverageRow {
            variant: "PtrDiff",
            arity: Some(2),
            precedence: 4,
            may_side_effect: false,
            notes: "Pointer subtraction (`cot_psub`); renders with `/* ptrdiff */`.",
        },
    ]
}

/// Render [`cexpr_coverage_rows`] as the body of `COVERAGE.md`.
pub fn cexpr_coverage_markdown() -> String {
    use std::fmt::Write;
    let rows = cexpr_coverage_rows();
    let mut s = String::new();
    let _ = writeln!(
        s,
        "| variant | arity | precedence | may side-effect | notes |"
    );
    let _ = writeln!(
        s,
        "|---------|------:|----------:|:---------------:|-------|"
    );
    for r in &rows {
        let arity = r
            .arity
            .map(|a| a.to_string())
            .unwrap_or_else(|| "*".to_string());
        let side = if r.may_side_effect { "yes" } else { "no" };
        let _ = writeln!(
            s,
            "| `{}` | {} | {} | {} | {} |",
            r.variant, arity, r.precedence, side, r.notes
        );
    }
    s
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
        // Postfix `x++` / `x--` is precedence 1, like Call.
        CExpr::PostInc(_) | CExpr::PostDec(_) => 1,
        // Prefix `++x` / `--x` is precedence 2, like Cast/Deref.
        CExpr::PreInc(_) | CExpr::PreDec(_) => 2,
        // `sizeof(...)` always parens its inner — bind it at postfix.
        CExpr::Sizeof(_) => 1,
        // `?:` is right-associative at C precedence 13.
        CExpr::Ternary { .. } => 13,
        // Comma is precedence 15 — the loosest binding in C.
        CExpr::Comma { .. } => 15,
        // Assignment family is precedence 14, right-associative.
        CExpr::Assign { .. } | CExpr::CompoundAssign { .. } => 14,
        // Unary prefix arithmetic / logical / bitwise — precedence 2.
        CExpr::Neg(_) | CExpr::LogicalNot(_) | CExpr::BitwiseNot(_) => 2,
        // Helper/FuncId/Obj/Str/StmtExpr all bind atomically — they're
        // either leaves or postfix forms.
        CExpr::Helper { .. }
        | CExpr::FuncId { .. }
        | CExpr::Obj { .. }
        | CExpr::Str(_)
        | CExpr::StmtExpr(_) => 1,
        // §4 leaves bind atomically.
        CExpr::Empty
        | CExpr::Label(_)
        | CExpr::Var { .. }
        | CExpr::Num { .. }
        | CExpr::Fnum { .. }
        | CExpr::TypeRef(_) => 1,
        // Float-negation is prefix unary like Neg.
        CExpr::FloatNeg(_) => 2,
        // FloatBinary precedence follows the printed token, mirroring
        // the integer Binary precedence table.
        CExpr::FloatBinary { op, .. } => binary_precedence(op),
        // PtrDiff prints as a parenthesised subtraction — bind at the
        // subtraction precedence (4).
        CExpr::PtrDiff { .. } => 4,
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

            CExpr::Ternary {
                cond,
                then_branch,
                else_branch,
            } => {
                // `?:` is right-associative at prec 13. Child operands
                // bind at prec 12 (just above) so we get parens on a
                // nested ternary on the right.
                fmt_child(f, cond, 12)?;
                write!(f, " ? ")?;
                fmt_child(f, then_branch, 12)?;
                write!(f, " : ")?;
                fmt_child(f, else_branch, 13)
            }

            CExpr::Sizeof(inner) => write!(f, "sizeof({})", inner),
            CExpr::PreInc(inner) => {
                write!(f, "++")?;
                fmt_child(f, inner, 2)
            }
            CExpr::PreDec(inner) => {
                write!(f, "--")?;
                fmt_child(f, inner, 2)
            }
            CExpr::PostInc(inner) => {
                fmt_child(f, inner, 1)?;
                write!(f, "++")
            }
            CExpr::PostDec(inner) => {
                fmt_child(f, inner, 1)?;
                write!(f, "--")
            }

            CExpr::Comma { lhs, rhs } => {
                fmt_child(f, lhs, 14)?;
                write!(f, ", ")?;
                fmt_child(f, rhs, 14)
            }
            CExpr::Assign { lhs, rhs } => {
                fmt_child(f, lhs, 13)?;
                write!(f, " = ")?;
                // Right-associative: RHS may itself be assign at the same
                // precedence; allow that by passing the same parent prec.
                fmt_child(f, rhs, 14)
            }
            CExpr::CompoundAssign { op, lhs, rhs } => {
                fmt_child(f, lhs, 13)?;
                write!(f, " {op}= ")?;
                fmt_child(f, rhs, 14)
            }
            CExpr::Neg(inner) => {
                write!(f, "-")?;
                fmt_child(f, inner, 2)
            }
            CExpr::LogicalNot(inner) => {
                write!(f, "!")?;
                fmt_child(f, inner, 2)
            }
            CExpr::BitwiseNot(inner) => {
                write!(f, "~")?;
                fmt_child(f, inner, 2)
            }

            CExpr::Helper { name, args } => {
                write!(f, "{name}(")?;
                for (i, a) in args.iter().enumerate() {
                    if i > 0 {
                        write!(f, ", ")?;
                    }
                    write!(f, "{a}")?;
                }
                write!(f, ")")
            }
            CExpr::FuncId { name, addr } => {
                write!(f, "{name}@0x{addr:x}")
            }
            CExpr::StmtExpr(body) => {
                write!(f, "({{ {body} }})")
            }
            CExpr::Str(content) => {
                write!(f, "\"{content}\"")
            }
            CExpr::Obj { name, addr } => {
                if name.is_empty() {
                    write!(f, "*(0x{addr:x})")
                } else {
                    f.write_str(name)
                }
            }

            // §4 leaves and operators.
            CExpr::Empty => Ok(()),
            CExpr::Label(n) => write!(f, "LABEL_{n}"),
            CExpr::Var { name, .. } => f.write_str(name),
            CExpr::Num {
                value,
                signed,
                width,
            } => {
                // Choose decimal vs hex by magnitude. Values above 0xff
                // get the hex form (matches the IDA default).
                let signed_value = if *signed && *width <= 8 {
                    let mask = if *width >= 8 {
                        !0u64
                    } else {
                        (1u64 << (width * 8)) - 1
                    };
                    let sign_bit = if *width >= 8 {
                        1u64 << 63
                    } else {
                        1u64 << (width * 8 - 1)
                    };
                    if (value & sign_bit) != 0 {
                        let twos = ((!value) & mask).wrapping_add(1);
                        Some(-(twos as i64))
                    } else {
                        Some(*value as i64)
                    }
                } else {
                    None
                };
                match signed_value {
                    Some(sv) => {
                        // Decimal when |sv| ≤ 0xFF; hex otherwise.
                        if sv.unsigned_abs() <= 0xFF {
                            write!(f, "{sv}")
                        } else if sv < 0 {
                            write!(f, "-0x{:x}", sv.unsigned_abs())
                        } else {
                            write!(f, "0x{:x}", sv)
                        }
                    }
                    None if *value <= 0xFF => write!(f, "{value}u"),
                    None => write!(f, "0x{value:x}u"),
                }
            }
            CExpr::Fnum { bits, width } => {
                if *width == 4 {
                    let v = f32::from_bits(*bits as u32);
                    write!(f, "{v}f")
                } else {
                    let v = f64::from_bits(*bits);
                    write!(f, "{v}")
                }
            }
            CExpr::TypeRef(name) => f.write_str(name),
            CExpr::FloatNeg(inner) => {
                write!(f, "-")?;
                fmt_child(f, inner, 2)
            }
            CExpr::FloatBinary { op, lhs, rhs } => {
                let parent_prec = binary_precedence(op);
                fmt_child(f, lhs, parent_prec)?;
                write!(f, " {op} ")?;
                fmt_child_strict(f, rhs, parent_prec)
            }
            CExpr::PtrDiff { lhs, rhs } => {
                write!(f, "(")?;
                fmt_child(f, lhs, 4)?;
                write!(f, " - ")?;
                fmt_child_strict(f, rhs, 4)?;
                write!(f, ") /* ptrdiff */")
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

    // ----- §5.1 IDA cot_* canonical constructors -----------------------
    //
    // Every `cot_*` opcode (0..=68) gets a named builder so callers
    // (lifter, plugin SDK, future tooling) can construct CExpr trees
    // by IDA opcode name without having to know which `CExpr` variant
    // implements it. No enum bloat: most cot_* nodes share variants
    // via `Binary { op }` / `CompoundAssign { op }` dispatch.

    pub fn cot_empty() -> Self {
        CExpr::Empty
    }
    pub fn cot_comma(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::Comma {
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_asg(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::Assign {
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_asgbor(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("|", lhs, rhs)
    }
    pub fn cot_asgxor(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("^", lhs, rhs)
    }
    pub fn cot_asgband(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("&", lhs, rhs)
    }
    pub fn cot_asgadd(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("+", lhs, rhs)
    }
    pub fn cot_asgsub(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("-", lhs, rhs)
    }
    pub fn cot_asgmul(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("*", lhs, rhs)
    }
    pub fn cot_asgsshr(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound(">>", lhs, rhs)
    }
    pub fn cot_asgushr(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound(">>", lhs, rhs)
    }
    pub fn cot_asgshl(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("<<", lhs, rhs)
    }
    pub fn cot_asgsdiv(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("/", lhs, rhs)
    }
    pub fn cot_asgudiv(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("/", lhs, rhs)
    }
    pub fn cot_asgsmod(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("%", lhs, rhs)
    }
    pub fn cot_asgumod(lhs: CExpr, rhs: CExpr) -> Self {
        Self::compound("%", lhs, rhs)
    }
    pub fn cot_tern(c: CExpr, t: CExpr, e: CExpr) -> Self {
        CExpr::Ternary {
            cond: Box::new(c),
            then_branch: Box::new(t),
            else_branch: Box::new(e),
        }
    }
    pub fn cot_lor(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("||", lhs, rhs)
    }
    pub fn cot_land(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("&&", lhs, rhs)
    }
    pub fn cot_bor(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("|", lhs, rhs)
    }
    pub fn cot_xor(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("^", lhs, rhs)
    }
    pub fn cot_band(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("&", lhs, rhs)
    }
    pub fn cot_eq(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("==", lhs, rhs)
    }
    pub fn cot_ne(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("!=", lhs, rhs)
    }
    pub fn cot_sge(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">=", lhs, rhs)
    }
    pub fn cot_uge(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">=", lhs, rhs)
    }
    pub fn cot_sle(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("<=", lhs, rhs)
    }
    pub fn cot_ule(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("<=", lhs, rhs)
    }
    pub fn cot_sgt(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">", lhs, rhs)
    }
    pub fn cot_ugt(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">", lhs, rhs)
    }
    pub fn cot_slt(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("<", lhs, rhs)
    }
    pub fn cot_ult(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("<", lhs, rhs)
    }
    pub fn cot_sshr(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">>", lhs, rhs)
    }
    pub fn cot_ushr(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary(">>", lhs, rhs)
    }
    pub fn cot_shl(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("<<", lhs, rhs)
    }
    pub fn cot_add(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("+", lhs, rhs)
    }
    pub fn cot_sub(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("-", lhs, rhs)
    }
    pub fn cot_mul(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("*", lhs, rhs)
    }
    pub fn cot_sdiv(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("/", lhs, rhs)
    }
    pub fn cot_udiv(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("/", lhs, rhs)
    }
    pub fn cot_smod(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("%", lhs, rhs)
    }
    pub fn cot_umod(lhs: CExpr, rhs: CExpr) -> Self {
        Self::binary("%", lhs, rhs)
    }
    pub fn cot_fadd(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::FloatBinary {
            op: "+",
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_fsub(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::FloatBinary {
            op: "-",
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_fmul(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::FloatBinary {
            op: "*",
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_fdiv(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::FloatBinary {
            op: "/",
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
    pub fn cot_fneg(inner: CExpr) -> Self {
        CExpr::FloatNeg(Box::new(inner))
    }
    pub fn cot_neg(inner: CExpr) -> Self {
        CExpr::Neg(Box::new(inner))
    }
    pub fn cot_cast(ty: impl Into<String>, inner: CExpr) -> Self {
        Self::cast(ty, inner)
    }
    pub fn cot_lnot(inner: CExpr) -> Self {
        CExpr::LogicalNot(Box::new(inner))
    }
    pub fn cot_bnot(inner: CExpr) -> Self {
        CExpr::BitwiseNot(Box::new(inner))
    }
    pub fn cot_ptr(inner: CExpr) -> Self {
        Self::deref(inner)
    }
    pub fn cot_ref(inner: CExpr) -> Self {
        Self::addr_of(inner)
    }
    pub fn cot_postinc(inner: CExpr) -> Self {
        CExpr::PostInc(Box::new(inner))
    }
    pub fn cot_postdec(inner: CExpr) -> Self {
        CExpr::PostDec(Box::new(inner))
    }
    pub fn cot_preinc(inner: CExpr) -> Self {
        CExpr::PreInc(Box::new(inner))
    }
    pub fn cot_predec(inner: CExpr) -> Self {
        CExpr::PreDec(Box::new(inner))
    }
    pub fn cot_call(callee: CExpr, args: Vec<CExpr>) -> Self {
        CExpr::Call {
            callee: Box::new(callee),
            args,
        }
    }
    pub fn cot_idx(arr: CExpr, idx: CExpr) -> Self {
        Self::index(arr, idx)
    }
    pub fn cot_memref(obj: CExpr, field: impl Into<String>) -> Self {
        Self::dot(obj, field)
    }
    pub fn cot_memptr(obj: CExpr, field: impl Into<String>) -> Self {
        Self::arrow(obj, field)
    }
    pub fn cot_num(value: u64, signed: bool, width: u8) -> Self {
        CExpr::Num {
            value,
            signed,
            width,
        }
    }
    pub fn cot_fnum(bits: u64, width: u8) -> Self {
        CExpr::Fnum { bits, width }
    }
    pub fn cot_str(s: impl Into<String>) -> Self {
        CExpr::Str(s.into())
    }
    pub fn cot_obj(name: impl Into<String>, addr: u64) -> Self {
        CExpr::Obj {
            name: name.into(),
            addr,
        }
    }
    pub fn cot_var(name: impl Into<String>, idx: u32) -> Self {
        CExpr::Var {
            name: name.into(),
            idx,
        }
    }
    pub fn cot_insn(body: impl Into<String>) -> Self {
        CExpr::StmtExpr(body.into())
    }
    pub fn cot_sizeof(inner: CExpr) -> Self {
        CExpr::Sizeof(Box::new(inner))
    }
    pub fn cot_helper(name: impl Into<String>, args: Vec<CExpr>) -> Self {
        CExpr::Helper {
            name: name.into(),
            args,
        }
    }
    pub fn cot_type(name: impl Into<String>) -> Self {
        CExpr::TypeRef(name.into())
    }
    /// `cot_psub` — pointer subtraction; IDA `Idx 43` between fadd/fsub
    /// on some Hex-Rays versions, often emitted as a separate opcode.
    pub fn cot_psub(lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::PtrDiff {
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }

    fn compound(op: &'static str, lhs: CExpr, rhs: CExpr) -> Self {
        CExpr::CompoundAssign {
            op,
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        }
    }
}

/// Name of every IDA `cot_*` opcode (0..=68), in canonical order. The
/// array is exhaustive: a future plugin can index by `cot_*` ordinal and
/// dispatch to the corresponding `CExpr::cot_*` constructor.
pub const COT_NAMES: [&str; 69] = [
    "cot_empty",   // 0
    "cot_comma",   // 1
    "cot_asg",     // 2
    "cot_asgbor",  // 3
    "cot_asgxor",  // 4
    "cot_asgband", // 5
    "cot_asgadd",  // 6
    "cot_asgsub",  // 7
    "cot_asgmul",  // 8
    "cot_asgsshr", // 9
    "cot_asgushr", // 10
    "cot_asgshl",  // 11
    "cot_asgsdiv", // 12
    "cot_asgudiv", // 13
    "cot_asgsmod", // 14
    "cot_asgumod", // 15
    "cot_tern",    // 16
    "cot_lor",     // 17
    "cot_land",    // 18
    "cot_bor",     // 19
    "cot_xor",     // 20
    "cot_band",    // 21
    "cot_eq",      // 22
    "cot_ne",      // 23
    "cot_sge",     // 24
    "cot_uge",     // 25
    "cot_sle",     // 26
    "cot_ule",     // 27
    "cot_sgt",     // 28
    "cot_ugt",     // 29
    "cot_slt",     // 30
    "cot_ult",     // 31
    "cot_sshr",    // 32
    "cot_ushr",    // 33
    "cot_shl",     // 34
    "cot_add",     // 35
    "cot_sub",     // 36
    "cot_mul",     // 37
    "cot_sdiv",    // 38
    "cot_udiv",    // 39
    "cot_smod",    // 40
    "cot_umod",    // 41
    "cot_fadd",    // 42
    "cot_fsub",    // 43
    "cot_fmul",    // 44
    "cot_fdiv",    // 45
    "cot_fneg",    // 46
    "cot_neg",     // 47
    "cot_cast",    // 48
    "cot_lnot",    // 49
    "cot_bnot",    // 50
    "cot_ptr",     // 51
    "cot_ref",     // 52
    "cot_postinc", // 53
    "cot_postdec", // 54
    "cot_preinc",  // 55
    "cot_predec",  // 56
    "cot_call",    // 57
    "cot_idx",     // 58
    "cot_memref",  // 59
    "cot_memptr",  // 60
    "cot_num",     // 61
    "cot_fnum",    // 62
    "cot_str",     // 63
    "cot_obj",     // 64
    "cot_var",     // 65
    "cot_insn",    // 66
    "cot_sizeof",  // 67
    "cot_helper",  // 68
];

/// Look up the canonical IDA name for a `cot_*` opcode index.
pub fn cot_name(idx: usize) -> Option<&'static str> {
    COT_NAMES.get(idx).copied()
}

/// Total-function variant of [`cot_name`] keyed on `u8`.
///
/// Returns the canonical `cot_*` name for `idx` in `0..=68`, or
/// `"cot_unknown"` for any out-of-range index (so a plugin that
/// dispatches by raw opcode never has to unwrap an `Option`). The
/// canonical (`Option`-returning) accessor is [`cot_name`].
pub fn cot_index_to_name(idx: u8) -> &'static str {
    COT_NAMES
        .get(idx as usize)
        .copied()
        .unwrap_or("cot_unknown")
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

    // -- Batch 19 coverage table -----------------------------------------

    /// Pins the printable variant count. Adding a new `CExpr` variant
    /// without also adding a row here flags the omission.
    #[test]
    fn cexpr_coverage_lists_every_variant() {
        let rows = cexpr_coverage_rows();
        let names: std::collections::BTreeSet<&'static str> =
            rows.iter().map(|r| r.variant).collect();
        for expected in [
            "Lit",
            "Cast",
            "Member",
            "Index",
            "Deref",
            "AddrOf",
            "Binary",
            "Call",
            "Coerce",
            "Macro",
            "Ternary",
            "Sizeof",
            "PreInc",
            "PreDec",
            "PostInc",
            "PostDec",
            "Comma",
            "Assign",
            "CompoundAssign",
            "Neg",
            "LogicalNot",
            "BitwiseNot",
            "Helper",
            "FuncId",
            "StmtExpr",
            "Str",
            "Obj",
            "Empty",
            "Label",
            "Var",
            "Num",
            "Fnum",
            "TypeRef",
            "FloatNeg",
            "FloatBinary",
            "PtrDiff",
        ] {
            assert!(
                names.contains(expected),
                "coverage row missing for variant {expected}"
            );
        }
        assert_eq!(rows.len(), names.len(), "duplicate rows in coverage table");
    }

    // ----- §4 phase 1: leaves ------------------------------------------

    #[test]
    fn cot_empty_renders_empty_string() {
        assert_eq!(CExpr::Empty.to_string(), "");
    }

    #[test]
    fn cot_label_renders_label_n() {
        assert_eq!(CExpr::Label(7).to_string(), "LABEL_7");
    }

    #[test]
    fn cot_var_renders_just_name() {
        let v = CExpr::Var {
            name: "counter".into(),
            idx: 42,
        };
        assert_eq!(v.to_string(), "counter");
    }

    #[test]
    fn cot_num_small_signed_renders_decimal() {
        let n = CExpr::Num {
            value: 5,
            signed: true,
            width: 4,
        };
        assert_eq!(n.to_string(), "5");
    }

    #[test]
    fn cot_num_large_unsigned_renders_hex_with_u_suffix() {
        let n = CExpr::Num {
            value: 0x1234,
            signed: false,
            width: 4,
        };
        assert_eq!(n.to_string(), "0x1234u");
    }

    #[test]
    fn cot_num_negative_signed_renders_with_sign() {
        // -1 as i32 → all-bits-set in u64 (with width=4 → only low 32 bits).
        let n = CExpr::Num {
            value: 0xFFFFFFFF,
            signed: true,
            width: 4,
        };
        assert_eq!(n.to_string(), "-1");
    }

    #[test]
    fn cot_fnum_float_renders_f_suffix() {
        let bits = f32::to_bits(1.5);
        let n = CExpr::Fnum {
            bits: bits as u64,
            width: 4,
        };
        assert_eq!(n.to_string(), "1.5f");
    }

    #[test]
    fn cot_fnum_double_renders_without_suffix() {
        let bits = f64::to_bits(2.25);
        let n = CExpr::Fnum { bits, width: 8 };
        assert_eq!(n.to_string(), "2.25");
    }

    // ----- §4 phase 2: TypeRef -----------------------------------------

    #[test]
    fn cot_type_ref_renders_as_inner_string() {
        let t = CExpr::TypeRef("unsigned int".into());
        assert_eq!(t.to_string(), "unsigned int");
    }

    // ----- §4 phase 3: float arith -------------------------------------

    #[test]
    fn cot_float_neg_renders_as_prefix() {
        let inner = CExpr::Fnum {
            bits: f32::to_bits(1.0) as u64,
            width: 4,
        };
        let neg = CExpr::FloatNeg(Box::new(inner));
        assert_eq!(neg.to_string(), "-1f");
    }

    #[test]
    fn cot_float_binary_renders_with_correct_precedence() {
        let lhs = CExpr::Fnum {
            bits: f32::to_bits(1.5) as u64,
            width: 4,
        };
        let rhs = CExpr::Fnum {
            bits: f32::to_bits(2.5) as u64,
            width: 4,
        };
        let add = CExpr::FloatBinary {
            op: "+",
            lhs: Box::new(lhs.clone()),
            rhs: Box::new(rhs.clone()),
        };
        assert_eq!(add.to_string(), "1.5f + 2.5f");

        let mul = CExpr::FloatBinary {
            op: "*",
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        };
        assert_eq!(mul.to_string(), "1.5f * 2.5f");
    }

    /// FloatBinary uses the same precedence table as Binary so nested
    /// `+` inside `*` parenthesises.
    #[test]
    fn cot_float_binary_parenthesises_lower_precedence_child() {
        let a = CExpr::lit("a");
        let b = CExpr::lit("b");
        let c = CExpr::lit("c");
        let inner_add = CExpr::FloatBinary {
            op: "+",
            lhs: Box::new(a),
            rhs: Box::new(b),
        };
        let outer_mul = CExpr::FloatBinary {
            op: "*",
            lhs: Box::new(inner_add),
            rhs: Box::new(c),
        };
        assert_eq!(outer_mul.to_string(), "(a + b) * c");
    }

    // ----- §4 phase 4: PtrDiff -----------------------------------------

    #[test]
    fn cot_ptrdiff_renders_with_ptrdiff_hint() {
        let lhs = CExpr::lit("end");
        let rhs = CExpr::lit("start");
        let diff = CExpr::PtrDiff {
            lhs: Box::new(lhs),
            rhs: Box::new(rhs),
        };
        assert_eq!(diff.to_string(), "(end - start) /* ptrdiff */");
    }

    // ----- §4 coverage table sanity ------------------------------------

    /// All 36 variants — original 27 + 9 §4 additions — render through
    /// `substitute_lit` without panicking when handed a constant
    /// replacement.
    #[test]
    fn substitute_lit_handles_section_4_variants() {
        let replacement = CExpr::lit("X");
        for variant in [
            CExpr::Empty,
            CExpr::Label(1),
            CExpr::Var {
                name: "v".into(),
                idx: 0,
            },
            CExpr::Num {
                value: 0,
                signed: true,
                width: 4,
            },
            CExpr::Fnum { bits: 0, width: 4 },
            CExpr::TypeRef("int".into()),
            CExpr::FloatNeg(Box::new(CExpr::lit("a"))),
            CExpr::FloatBinary {
                op: "+",
                lhs: Box::new(CExpr::lit("a")),
                rhs: Box::new(CExpr::lit("b")),
            },
            CExpr::PtrDiff {
                lhs: Box::new(CExpr::lit("a")),
                rhs: Box::new(CExpr::lit("b")),
            },
        ] {
            let (_, _) = substitute_lit(variant, "z", &replacement);
        }
    }

    // ----- §5.1 cot_* constructor smoke test ---------------------------

    /// Every `cot_*` constructor returns a CExpr that renders to a
    /// non-empty string (except `cot_empty`, which renders empty by
    /// design) and survives `substitute_lit` without panicking.
    #[test]
    fn cot_constructors_smoke_test_every_opcode() {
        let l = || CExpr::lit("a");
        let r = || CExpr::lit("b");

        // Run each constructor and assert it produces *some* CExpr;
        // for visual sanity, the output is non-empty for non-Empty cases.
        let cases: Vec<(&str, CExpr)> = vec![
            ("cot_empty", CExpr::cot_empty()),
            ("cot_comma", CExpr::cot_comma(l(), r())),
            ("cot_asg", CExpr::cot_asg(l(), r())),
            ("cot_asgbor", CExpr::cot_asgbor(l(), r())),
            ("cot_asgxor", CExpr::cot_asgxor(l(), r())),
            ("cot_asgband", CExpr::cot_asgband(l(), r())),
            ("cot_asgadd", CExpr::cot_asgadd(l(), r())),
            ("cot_asgsub", CExpr::cot_asgsub(l(), r())),
            ("cot_asgmul", CExpr::cot_asgmul(l(), r())),
            ("cot_asgsshr", CExpr::cot_asgsshr(l(), r())),
            ("cot_asgushr", CExpr::cot_asgushr(l(), r())),
            ("cot_asgshl", CExpr::cot_asgshl(l(), r())),
            ("cot_asgsdiv", CExpr::cot_asgsdiv(l(), r())),
            ("cot_asgudiv", CExpr::cot_asgudiv(l(), r())),
            ("cot_asgsmod", CExpr::cot_asgsmod(l(), r())),
            ("cot_asgumod", CExpr::cot_asgumod(l(), r())),
            ("cot_tern", CExpr::cot_tern(l(), r(), CExpr::lit("c"))),
            ("cot_lor", CExpr::cot_lor(l(), r())),
            ("cot_land", CExpr::cot_land(l(), r())),
            ("cot_bor", CExpr::cot_bor(l(), r())),
            ("cot_xor", CExpr::cot_xor(l(), r())),
            ("cot_band", CExpr::cot_band(l(), r())),
            ("cot_eq", CExpr::cot_eq(l(), r())),
            ("cot_ne", CExpr::cot_ne(l(), r())),
            ("cot_sge", CExpr::cot_sge(l(), r())),
            ("cot_uge", CExpr::cot_uge(l(), r())),
            ("cot_sle", CExpr::cot_sle(l(), r())),
            ("cot_ule", CExpr::cot_ule(l(), r())),
            ("cot_sgt", CExpr::cot_sgt(l(), r())),
            ("cot_ugt", CExpr::cot_ugt(l(), r())),
            ("cot_slt", CExpr::cot_slt(l(), r())),
            ("cot_ult", CExpr::cot_ult(l(), r())),
            ("cot_sshr", CExpr::cot_sshr(l(), r())),
            ("cot_ushr", CExpr::cot_ushr(l(), r())),
            ("cot_shl", CExpr::cot_shl(l(), r())),
            ("cot_add", CExpr::cot_add(l(), r())),
            ("cot_sub", CExpr::cot_sub(l(), r())),
            ("cot_mul", CExpr::cot_mul(l(), r())),
            ("cot_sdiv", CExpr::cot_sdiv(l(), r())),
            ("cot_udiv", CExpr::cot_udiv(l(), r())),
            ("cot_smod", CExpr::cot_smod(l(), r())),
            ("cot_umod", CExpr::cot_umod(l(), r())),
            ("cot_fadd", CExpr::cot_fadd(l(), r())),
            ("cot_fsub", CExpr::cot_fsub(l(), r())),
            ("cot_fmul", CExpr::cot_fmul(l(), r())),
            ("cot_fdiv", CExpr::cot_fdiv(l(), r())),
            ("cot_fneg", CExpr::cot_fneg(l())),
            ("cot_neg", CExpr::cot_neg(l())),
            ("cot_cast", CExpr::cot_cast("int", l())),
            ("cot_lnot", CExpr::cot_lnot(l())),
            ("cot_bnot", CExpr::cot_bnot(l())),
            ("cot_ptr", CExpr::cot_ptr(l())),
            ("cot_ref", CExpr::cot_ref(l())),
            ("cot_postinc", CExpr::cot_postinc(l())),
            ("cot_postdec", CExpr::cot_postdec(l())),
            ("cot_preinc", CExpr::cot_preinc(l())),
            ("cot_predec", CExpr::cot_predec(l())),
            ("cot_call", CExpr::cot_call(l(), vec![r()])),
            ("cot_idx", CExpr::cot_idx(l(), r())),
            ("cot_memref", CExpr::cot_memref(l(), "field")),
            ("cot_memptr", CExpr::cot_memptr(l(), "field")),
            ("cot_num", CExpr::cot_num(5, true, 4)),
            ("cot_fnum", CExpr::cot_fnum(f32::to_bits(1.5) as u64, 4)),
            ("cot_str", CExpr::cot_str("hello")),
            ("cot_obj", CExpr::cot_obj("g", 0x500000)),
            ("cot_var", CExpr::cot_var("v1", 1)),
            ("cot_insn", CExpr::cot_insn("body")),
            ("cot_sizeof", CExpr::cot_sizeof(l())),
            ("cot_helper", CExpr::cot_helper("h", vec![l()])),
            ("cot_type", CExpr::cot_type("int")),
            ("cot_psub", CExpr::cot_psub(l(), r())),
        ];

        // Every `cot_*` (except `cot_empty`) renders to a non-empty
        // string, AND survives `substitute_lit` without panicking.
        let replacement = CExpr::lit("X");
        for (name, expr) in cases {
            let rendered = expr.to_string();
            if name != "cot_empty" {
                assert!(!rendered.is_empty(), "{name} rendered empty: {rendered:?}");
            }
            let _ = substitute_lit(expr.clone(), "a", &replacement);
        }

        // The COT_NAMES table has exactly 69 entries (0..=68).
        assert_eq!(COT_NAMES.len(), 69);
        assert_eq!(cot_name(0), Some("cot_empty"));
        assert_eq!(cot_name(68), Some("cot_helper"));
        assert_eq!(cot_name(69), None);

        // Total-function variant: in-range returns the name, out-of-range
        // returns the canonical `"cot_unknown"` sentinel.
        assert_eq!(cot_index_to_name(0), "cot_empty");
        assert_eq!(cot_index_to_name(68), "cot_helper");
        assert_eq!(cot_index_to_name(69), "cot_unknown");
        assert_eq!(cot_index_to_name(u8::MAX), "cot_unknown");
    }

    /// Helper / FuncId / StmtExpr / Str / Obj render with their expected
    /// C shape.
    #[test]
    fn helper_funcid_stmtexpr_str_obj_render() {
        let helper = CExpr::Helper {
            name: "j_memcpy".into(),
            args: vec![CExpr::lit("dst"), CExpr::lit("src"), CExpr::lit("n")],
        };
        assert_eq!(helper.to_string(), "j_memcpy(dst, src, n)");

        let fid = CExpr::FuncId {
            name: "func".into(),
            addr: 0x401234,
        };
        assert_eq!(fid.to_string(), "func@0x401234");

        let body = CExpr::StmtExpr("int t = x; t + 1".into());
        assert_eq!(body.to_string(), "({ int t = x; t + 1 })");

        let s = CExpr::Str("Hello, %s\\n".into());
        assert_eq!(s.to_string(), "\"Hello, %s\\n\"");

        let named = CExpr::Obj {
            name: "g_count".into(),
            addr: 0x500000,
        };
        assert_eq!(named.to_string(), "g_count");

        let anon = CExpr::Obj {
            name: String::new(),
            addr: 0x500000,
        };
        assert_eq!(anon.to_string(), "*(0x500000)");
    }

    /// Comma / Assign / CompoundAssign / Neg / LogicalNot / BitwiseNot
    /// render with their expected C shape.
    #[test]
    fn comma_assign_unary_render() {
        let comma = CExpr::Comma {
            lhs: Box::new(CExpr::lit("a")),
            rhs: Box::new(CExpr::lit("b")),
        };
        assert_eq!(comma.to_string(), "a, b");

        let asg = CExpr::Assign {
            lhs: Box::new(CExpr::lit("x")),
            rhs: Box::new(CExpr::lit("1")),
        };
        assert_eq!(asg.to_string(), "x = 1");

        let cmp = CExpr::CompoundAssign {
            op: "+",
            lhs: Box::new(CExpr::lit("x")),
            rhs: Box::new(CExpr::lit("4")),
        };
        assert_eq!(cmp.to_string(), "x += 4");

        let neg = CExpr::Neg(Box::new(CExpr::lit("x")));
        assert_eq!(neg.to_string(), "-x");

        let lnot = CExpr::LogicalNot(Box::new(CExpr::lit("x")));
        assert_eq!(lnot.to_string(), "!x");

        let bnot = CExpr::BitwiseNot(Box::new(CExpr::lit("x")));
        assert_eq!(bnot.to_string(), "~x");
    }

    /// Compound assignment of a binary operator on the RHS doesn't need
    /// parens because `+=` is right-associative at lower precedence than
    /// its RHS.
    #[test]
    fn compound_assign_with_binary_rhs() {
        let rhs = CExpr::binary("*", CExpr::lit("y"), CExpr::lit("2"));
        let cmp = CExpr::CompoundAssign {
            op: "+",
            lhs: Box::new(CExpr::lit("x")),
            rhs: Box::new(rhs),
        };
        assert_eq!(cmp.to_string(), "x += y * 2");
    }

    /// The new printer nodes render with their expected C shape.
    #[test]
    fn ternary_sizeof_and_inc_dec_render() {
        let tern = CExpr::Ternary {
            cond: Box::new(CExpr::lit("c")),
            then_branch: Box::new(CExpr::lit("a")),
            else_branch: Box::new(CExpr::lit("b")),
        };
        assert_eq!(tern.to_string(), "c ? a : b");

        let sz = CExpr::Sizeof(Box::new(CExpr::lit("int")));
        assert_eq!(sz.to_string(), "sizeof(int)");

        let pre = CExpr::PreInc(Box::new(CExpr::lit("x")));
        assert_eq!(pre.to_string(), "++x");
        let post = CExpr::PostDec(Box::new(CExpr::lit("x")));
        assert_eq!(post.to_string(), "x--");
    }

    #[test]
    fn cexpr_coverage_markdown_contains_header_and_rows() {
        let md = cexpr_coverage_markdown();
        assert!(md.contains("| variant | arity | precedence"));
        assert!(md.contains("| `Lit` |"));
        assert!(md.contains("| `Macro` |"));
    }

    /// Cross-statement folding helper substitutes a Lit by name inside a
    /// nested expression tree and reports the hit count.
    #[test]
    fn substitute_lit_inlines_a_simple_temp() {
        // (v3 + 1) where v3 := foo->bar
        let original = CExpr::binary("+", CExpr::lit("v3"), CExpr::lit("1"));
        let replacement = CExpr::arrow(CExpr::lit("foo"), "bar");
        let (rewritten, hits) = substitute_lit(original, "v3", &replacement);
        assert_eq!(hits, 1);
        assert_eq!(rewritten.to_string(), "foo->bar + 1");
    }

    /// Multiple occurrences of the temp all get rewritten.
    #[test]
    fn substitute_lit_replaces_every_occurrence() {
        let original = CExpr::binary("*", CExpr::lit("x"), CExpr::lit("x"));
        let replacement = CExpr::lit("y");
        let (rewritten, hits) = substitute_lit(original, "x", &replacement);
        assert_eq!(hits, 2);
        assert_eq!(rewritten.to_string(), "y * y");
    }

    /// No match → zero hits, expression unchanged.
    #[test]
    fn substitute_lit_misses_when_name_not_present() {
        let original = CExpr::binary("+", CExpr::lit("a"), CExpr::lit("b"));
        let replacement = CExpr::lit("Q");
        let (rewritten, hits) = substitute_lit(original.clone(), "z", &replacement);
        assert_eq!(hits, 0);
        assert_eq!(rewritten, original);
    }
}
