//! Batch 21 goto classifier.
//!
//! Walks a structured [`HirFunction`] body and classifies each `Goto` /
//! `Label` pair by the structural context it appears in. The purpose is
//! not to optimise — by this point the structurer has already done all
//! the goto-elimination it can — but to surface what kind of irreducible
//! residual is left.
//!
//! The buckets are coarse on purpose. A real reverse engineer cares
//! about "is this label inside a loop body, or jumping forward across a
//! switch" rather than the exact CFG pattern. The counts are emitted to
//! the quality report so a future pass-set change is measurable.

use crate::hir::{HirFunction, HirNode};

/// Histogram of goto targets by surrounding structural context.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct GotoClassification {
    /// Total `Goto` nodes seen.
    pub total: usize,
    /// Gotos appearing inside a `while`/`do-while`/`for` body.
    pub in_loop: usize,
    /// Gotos appearing inside an `if`/`else` body (not inside any loop).
    pub in_branch: usize,
    /// Gotos appearing inside a `switch` arm.
    pub in_switch: usize,
    /// Gotos appearing inside a `try`/`catch`/`finally` body.
    pub in_eh: usize,
    /// Gotos that survived at the top level (truly irreducible CFG).
    pub at_top_level: usize,
}

/// Walk `func.body` and produce a [`GotoClassification`].
pub fn classify(func: &HirFunction) -> GotoClassification {
    classify_body(&func.body)
}

/// Walk a raw HIR body without going through [`HirFunction`]. Used by
/// tests so callers don't have to construct the full function shell.
pub fn classify_body(body: &[HirNode]) -> GotoClassification {
    let mut out = GotoClassification::default();
    walk(body, &mut Ctx::default(), &mut out);
    out
}

#[derive(Default, Clone, Copy)]
struct Ctx {
    in_loop: bool,
    in_branch: bool,
    in_switch: bool,
    in_eh: bool,
}

fn walk(body: &[HirNode], ctx: &mut Ctx, out: &mut GotoClassification) {
    for node in body {
        match node {
            HirNode::Goto(_) => {
                out.total += 1;
                if ctx.in_loop {
                    out.in_loop += 1;
                } else if ctx.in_switch {
                    out.in_switch += 1;
                } else if ctx.in_eh {
                    out.in_eh += 1;
                } else if ctx.in_branch {
                    out.in_branch += 1;
                } else {
                    out.at_top_level += 1;
                }
            }
            HirNode::Block(inner) => walk(inner, ctx, out),
            HirNode::Commented { inner, .. } => walk(std::slice::from_ref(inner), ctx, out),
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                let mut nested = *ctx;
                nested.in_branch = true;
                walk(then_body, &mut nested, out);
                if let Some(e) = else_body {
                    walk(e, &mut nested, out);
                }
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                let mut nested = *ctx;
                nested.in_branch = true;
                walk(then_body, &mut nested, out);
                walk(else_body, &mut nested, out);
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                let mut nested = *ctx;
                nested.in_loop = true;
                walk(body, &mut nested, out);
            }
            HirNode::Switch { cases, default, .. } => {
                let mut nested = *ctx;
                nested.in_switch = true;
                for (_, arm, _) in cases {
                    walk(arm, &mut nested, out);
                }
                if let Some(d) = default {
                    walk(d, &mut nested, out);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                let mut nested = *ctx;
                nested.in_eh = true;
                walk(try_body, &mut nested, out);
                for (_, arm) in catch_arms {
                    walk(arm, &mut nested, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                let mut nested = *ctx;
                nested.in_eh = true;
                walk(try_body, &mut nested, out);
                walk(finally_body, &mut nested, out);
            }
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::hir::{HirNode, LabelId};
    use unlace_ir::Varnode;
    use unlace_ir::ssa::SsaVarnode;

    fn goto(n: u32) -> HirNode {
        HirNode::Goto(LabelId(n))
    }

    fn dummy_cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 1,
        }
    }

    #[test]
    fn classify_counts_top_level_gotos() {
        let body = vec![goto(0), goto(1)];
        let c = classify_body(&body);
        assert_eq!(c.total, 2);
        assert_eq!(c.at_top_level, 2);
        assert_eq!(c.in_loop, 0);
    }

    #[test]
    fn classify_counts_in_loop_and_in_branch() {
        let body = vec![
            HirNode::If {
                cond: dummy_cond(),
                then_body: vec![goto(0)],
                else_body: None,
            },
            HirNode::While {
                cond: dummy_cond(),
                body: vec![goto(1), goto(2)],
            },
        ];
        let c = classify_body(&body);
        assert_eq!(c.total, 3);
        assert_eq!(c.in_branch, 1);
        assert_eq!(c.in_loop, 2);
        assert_eq!(c.at_top_level, 0);
    }

    #[test]
    fn classify_counts_in_switch_and_in_eh() {
        let body = vec![
            HirNode::Switch {
                cond: dummy_cond(),
                cases: vec![(
                    crate::hir::SwitchCase::Value(1),
                    vec![goto(0)],
                    /*fallthrough*/ false,
                )],
                default: Some(vec![goto(1)]),
                jumptable_addr: None,
                jumptable_cases: None,
            },
            HirNode::TryFinally {
                try_body: vec![goto(2)],
                finally_body: vec![goto(3)],
            },
        ];
        let c = classify_body(&body);
        assert_eq!(c.total, 4);
        assert_eq!(c.in_switch, 2);
        assert_eq!(c.in_eh, 2);
    }
}
