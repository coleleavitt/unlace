//! Nested SCEV recurrences, no-wrap flags, and operator combiners.
//!
//! Extends the basic ScevExpr enum with:
//! - No-wrap flags (NUW, NSW, NW) attached to add/mul/AddRec
//! - Combiners that fold AddRec + AddRec and AddRec * Const back into
//!   normal-form AddRecs (LLVM SCEVNAryExpr behavior)
//! - Nested AddRec construction for loop-of-loop patterns
//!
//! This is the analysis-layer companion to [`scalar_evolution`]: it operates
//! purely on `ScevExpr` values, no IR traversal.

use crate::scalar_evolution::ScevExpr;
use unlace_ir::BlockId;

/// No-wrap flags for arithmetic operations.
#[derive(Copy, Clone, Debug, Default, PartialEq, Eq)]
pub struct NoWrapFlags {
    /// No unsigned wrap.
    pub nuw: bool,
    /// No signed wrap.
    pub nsw: bool,
    /// No self-wrap (used for AddRec — loop never wraps around).
    pub nw: bool,
}

impl NoWrapFlags {
    pub fn none() -> Self {
        Self::default()
    }

    pub fn all() -> Self {
        Self {
            nuw: true,
            nsw: true,
            nw: true,
        }
    }

    /// Combine flags: result has flag X iff both inputs have flag X.
    pub fn intersect(&self, other: &Self) -> Self {
        Self {
            nuw: self.nuw && other.nuw,
            nsw: self.nsw && other.nsw,
            nw: self.nw && other.nw,
        }
    }
}

/// Combine two SCEV expressions with addition.
///
/// If both are AddRecs in the same loop, returns an AddRec whose start and
/// step are the sums of the originals. Otherwise builds a regular Add.
pub fn scev_add(a: &ScevExpr, b: &ScevExpr) -> ScevExpr {
    match (a, b) {
        // Combine two AddRecs in the same loop.
        (
            ScevExpr::AddRec {
                loop_header: h1,
                start: s1,
                step: t1,
            },
            ScevExpr::AddRec {
                loop_header: h2,
                start: s2,
                step: t2,
            },
        ) if h1 == h2 => ScevExpr::AddRec {
            loop_header: *h1,
            start: Box::new(scev_add(s1, s2)),
            step: t1.wrapping_add(*t2),
        },
        // const + const → const
        (
            ScevExpr::Const {
                value: v1,
                size: sz,
            },
            ScevExpr::Const { value: v2, .. },
        ) => ScevExpr::Const {
            value: v1.wrapping_add(*v2),
            size: *sz,
        },
        // AddConst absorption.
        (ScevExpr::Const { value, .. }, expr) | (expr, ScevExpr::Const { value, .. }) => {
            ScevExpr::AddConst(Box::new(expr.clone()), *value as i64)
        }
        // Fallback.
        (a, b) => ScevExpr::Add(Box::new(a.clone()), Box::new(b.clone())),
    }
}

/// Multiply a SCEV expression by a constant.
///
/// For AddRec(start, step), returns AddRec(start*c, step*c).
pub fn scev_mul_const(expr: &ScevExpr, c: i64) -> ScevExpr {
    if c == 0 {
        return ScevExpr::Const { value: 0, size: 8 };
    }
    if c == 1 {
        return expr.clone();
    }
    match expr {
        ScevExpr::Const { value, size } => ScevExpr::Const {
            value: (*value as i64).wrapping_mul(c) as u64,
            size: *size,
        },
        ScevExpr::AddRec {
            loop_header,
            start,
            step,
        } => ScevExpr::AddRec {
            loop_header: *loop_header,
            start: Box::new(scev_mul_const(start, c)),
            step: step.wrapping_mul(c),
        },
        _ => ScevExpr::MulConst(Box::new(expr.clone()), c),
    }
}

/// Construct a nested AddRec for a loop-of-loop pattern.
///
/// `outer_header` is the outer loop's header BlockId, `outer_step` is the
/// outer IV's step. `inner` is the SCEV of the inner-loop IV expression.
///
/// Returns: `AddRec(start = inner, step = outer_step)` outer-loop recurrence.
pub fn nested_add_rec(
    outer_header: BlockId,
    outer_step: i64,
    inner: ScevExpr,
) -> ScevExpr {
    ScevExpr::AddRec {
        loop_header: outer_header,
        start: Box::new(inner),
        step: outer_step,
    }
}

/// Check whether a SCEV expression contains a recurrence (any AddRec inside).
pub fn contains_addrec(expr: &ScevExpr) -> bool {
    match expr {
        ScevExpr::AddRec { .. } => true,
        ScevExpr::Add(a, b) => contains_addrec(a) || contains_addrec(b),
        ScevExpr::AddConst(inner, _) | ScevExpr::MulConst(inner, _) => contains_addrec(inner),
        ScevExpr::ZextCast { inner, .. }
        | ScevExpr::SextCast { inner, .. }
        | ScevExpr::TruncCast { inner, .. } => contains_addrec(inner),
        ScevExpr::UMin(a, b)
        | ScevExpr::UMax(a, b)
        | ScevExpr::SMin(a, b)
        | ScevExpr::SMax(a, b)
        | ScevExpr::UDiv(a, b) => contains_addrec(a) || contains_addrec(b),
        _ => false,
    }
}

/// Compute the loop nest level (number of distinct AddRec loops) of an expr.
pub fn loop_nest_depth(expr: &ScevExpr) -> usize {
    let mut headers = std::collections::BTreeSet::new();
    collect_loop_headers(expr, &mut headers);
    headers.len()
}

fn collect_loop_headers(
    expr: &ScevExpr,
    out: &mut std::collections::BTreeSet<BlockId>,
) {
    match expr {
        ScevExpr::AddRec {
            loop_header,
            start,
            ..
        } => {
            out.insert(*loop_header);
            collect_loop_headers(start, out);
        }
        ScevExpr::Add(a, b) => {
            collect_loop_headers(a, out);
            collect_loop_headers(b, out);
        }
        ScevExpr::AddConst(inner, _) | ScevExpr::MulConst(inner, _) => {
            collect_loop_headers(inner, out);
        }
        ScevExpr::ZextCast { inner, .. }
        | ScevExpr::SextCast { inner, .. }
        | ScevExpr::TruncCast { inner, .. } => collect_loop_headers(inner, out),
        ScevExpr::UMin(a, b)
        | ScevExpr::UMax(a, b)
        | ScevExpr::SMin(a, b)
        | ScevExpr::SMax(a, b)
        | ScevExpr::UDiv(a, b) => {
            collect_loop_headers(a, out);
            collect_loop_headers(b, out);
        }
        _ => {}
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn const_(v: u64) -> ScevExpr {
        ScevExpr::Const { value: v, size: 4 }
    }

    fn addrec(header: u32, start: ScevExpr, step: i64) -> ScevExpr {
        ScevExpr::AddRec {
            loop_header: BlockId(header),
            start: Box::new(start),
            step,
        }
    }

    #[test]
    fn test_scev_nested_addrec_plus_addrec_same_loop() {
        // {a, +, 1} + {b, +, 2} = {a+b, +, 3}
        let a = addrec(0, const_(10), 1);
        let b = addrec(0, const_(20), 2);
        let sum = scev_add(&a, &b);
        match sum {
            ScevExpr::AddRec {
                loop_header,
                start,
                step,
            } => {
                assert_eq!(loop_header, BlockId(0));
                assert_eq!(step, 3);
                match *start {
                    ScevExpr::Const { value, .. } => assert_eq!(value, 30),
                    _ => panic!("expected const start"),
                }
            }
            other => panic!("expected AddRec, got {:?}", other),
        }
    }

    #[test]
    fn test_scev_nested_addrec_times_const() {
        // {5, +, 3} * 2 = {10, +, 6}
        let r = addrec(0, const_(5), 3);
        let scaled = scev_mul_const(&r, 2);
        match scaled {
            ScevExpr::AddRec {
                start, step, ..
            } => {
                assert_eq!(step, 6);
                match *start {
                    ScevExpr::Const { value, .. } => assert_eq!(value, 10),
                    _ => panic!("expected const start"),
                }
            }
            other => panic!("expected AddRec, got {:?}", other),
        }
    }

    #[test]
    fn test_scev_nested_addrec_times_zero() {
        let r = addrec(0, const_(5), 3);
        let zero = scev_mul_const(&r, 0);
        assert_eq!(zero, ScevExpr::Const { value: 0, size: 8 });
    }

    #[test]
    fn test_scev_nested_loop_nest() {
        // Construct {(inner), +, 1} where inner is its own AddRec → 2 loops.
        let inner = addrec(1, const_(0), 1);
        let outer = nested_add_rec(BlockId(0), 1, inner);
        assert_eq!(loop_nest_depth(&outer), 2);
        assert!(contains_addrec(&outer));
    }

    #[test]
    fn test_scev_no_wrap_flags() {
        let f = NoWrapFlags::all();
        let g = NoWrapFlags {
            nuw: true,
            nsw: false,
            nw: true,
        };
        let r = f.intersect(&g);
        assert!(r.nuw);
        assert!(!r.nsw);
        assert!(r.nw);
    }

    #[test]
    fn test_scev_const_plus_const_folds() {
        let r = scev_add(&const_(10), &const_(20));
        assert_eq!(r, ScevExpr::Const { value: 30, size: 4 });
    }

    #[test]
    fn test_scev_addrec_evaluate_after_combine() {
        // {0, +, 1} + {0, +, 1} = {0, +, 2} → at iter 5 = 10.
        let a = addrec(0, const_(0), 1);
        let combined = scev_add(&a, &a);
        let at_5 = combined.evaluate_at_iteration(5);
        match at_5 {
            ScevExpr::Const { value, .. } => assert_eq!(value, 10),
            _ => panic!("expected const after evaluation"),
        }
    }
}
