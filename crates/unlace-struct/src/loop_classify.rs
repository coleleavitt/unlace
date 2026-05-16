//! Loop-form classification (read-only post-pass over the structured HIR).
//!
//! The structurer emits loops as distinct [`HirNode::While`] / [`HirNode::DoWhile`]
//! / [`HirNode::For`] variants. This pass walks the finished HIR and tags each
//! loop with a [`LoopForm`], plus produces aggregate bucket counts for quality
//! / parity reporting.
//!
//! The classifier is intentionally **conservative**: it does not mutate the HIR
//! and it does not reorder, merge, or split loops. When a `While` loop's shape
//! is ambiguous it stays `While`. The only refinement it computes over what the
//! HIR variant already says is recognising `while`-loops whose body has no
//! exit path (no reachable `Break` / `Return` / `TailCall`) — these get
//! promoted to [`LoopForm::Infinite`] so downstream printers / metrics can
//! render them as `for (;;)` if they choose.
//!
//! This module exists so other crates can ask "is this loop a for / while /
//! do-while / infinite?" without re-implementing the pattern match against the
//! HIR enum. It also produces the four-bucket counter consumed by the parity
//! metrics summary.

use crate::hir::{HirFunction, HirNode, LoopForm};

/// Per-form loop counts for an entire HIR function (or any HIR subtree).
///
/// Buckets are disjoint: every counted loop falls into exactly one slot.
/// Use [`LoopFormCounts::total`] when you want the aggregate.
#[derive(Copy, Clone, Debug, Default, PartialEq, Eq)]
pub struct LoopFormCounts {
    pub while_count: u32,
    pub do_while_count: u32,
    pub for_count: u32,
    pub infinite_count: u32,
}

impl LoopFormCounts {
    /// Total loops classified, across all four buckets.
    pub fn total(&self) -> u32 {
        self.while_count + self.do_while_count + self.for_count + self.infinite_count
    }

    /// Record one loop of `form`, mutating the appropriate bucket.
    pub fn bump(&mut self, form: LoopForm) {
        match form {
            LoopForm::While => self.while_count += 1,
            LoopForm::DoWhile => self.do_while_count += 1,
            LoopForm::For => self.for_count += 1,
            LoopForm::Infinite => self.infinite_count += 1,
        }
    }
}

/// Classify a single HIR loop node into a [`LoopForm`].
///
/// Returns `None` if `node` is not a loop variant. The classification is:
/// - `For { .. }` → [`LoopForm::For`].
/// - `DoWhile { .. }` → [`LoopForm::DoWhile`].
/// - `While { body, .. }` → [`LoopForm::Infinite`] when the body has no
///   reachable `Break` / `Return` / `TailCall`, otherwise [`LoopForm::While`].
///
/// Conservative: the `Infinite` refinement requires the body to be genuinely
/// uninterruptible at this level — any reachable exit-producing node demotes
/// to `While`. This matches the task contract: when in doubt, emit `while`.
pub fn classify_loop_form(node: &HirNode) -> Option<LoopForm> {
    match node {
        HirNode::For { .. } => Some(LoopForm::For),
        HirNode::DoWhile { .. } => Some(LoopForm::DoWhile),
        HirNode::While { body, .. } => {
            if is_unconditional_infinite_body(body) {
                Some(LoopForm::Infinite)
            } else {
                Some(LoopForm::While)
            }
        }
        _ => None,
    }
}

/// True when a `While` body has no `Break` / `Return` / `TailCall` reachable
/// at *this* loop's level — i.e. the loop's only exit is via the header
/// condition. Nested loops shield their own `Break`s from this check
/// (a nested loop's `Break` targets the inner loop, not the outer).
fn is_unconditional_infinite_body(body: &[HirNode]) -> bool {
    if body.is_empty() {
        // Empty body means the loop spins on its header condition; that
        // condition can still evaluate to false, so it's not provably
        // infinite. Stay conservative — call it `While`.
        return false;
    }
    !body_has_exit(body)
}

fn body_has_exit(nodes: &[HirNode]) -> bool {
    nodes.iter().any(node_has_exit)
}

fn node_has_exit(node: &HirNode) -> bool {
    match node {
        HirNode::Break | HirNode::Return(_) | HirNode::TailCall { .. } => true,
        HirNode::Block(children) => body_has_exit(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => body_has_exit(then_body) || else_body.as_deref().is_some_and(body_has_exit),
        HirNode::Switch {
            cases, default, ..
        } => {
            for (_case, arm, _ft) in cases {
                if body_has_exit(arm) {
                    return true;
                }
            }
            default.as_deref().is_some_and(body_has_exit)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            body_has_exit(try_body) || catch_arms.iter().any(|(_t, arm)| body_has_exit(arm))
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => body_has_exit(try_body) || body_has_exit(finally_body),
        HirNode::Commented { inner, .. } => node_has_exit(inner),
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => body_has_exit(then_body) || body_has_exit(else_body),
        // Nested loops trap their own break/continue; their exits do not
        // belong to the *outer* loop being classified. We deliberately
        // don't recurse into nested loop bodies here.
        HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. } => false,
        _ => false,
    }
}

/// Walk every loop in `func.body` and produce per-form counts.
///
/// Nested loops are counted at every level: a `for` containing a `while` adds
/// one to `for_count` and one to `while_count`.
pub fn classify_function(func: &HirFunction) -> LoopFormCounts {
    classify_nodes(&func.body)
}

/// Walk an arbitrary HIR slice and produce per-form counts. Same semantics as
/// [`classify_function`] but takes a raw `&[HirNode]` so callers can classify
/// sub-trees / test fixtures without constructing a [`HirFunction`].
pub fn classify_nodes(nodes: &[HirNode]) -> LoopFormCounts {
    let mut counts = LoopFormCounts::default();
    walk(nodes, &mut counts);
    counts
}

fn walk(nodes: &[HirNode], counts: &mut LoopFormCounts) {
    for node in nodes {
        if let Some(form) = classify_loop_form(node) {
            counts.bump(form);
        }
        match node {
            HirNode::Block(children) => walk(children, counts),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                walk(then_body, counts);
                if let Some(eb) = else_body {
                    walk(eb, counts);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => walk(body, counts),
            HirNode::Switch {
                cases, default, ..
            } => {
                for (_c, arm, _ft) in cases {
                    walk(arm, counts);
                }
                if let Some(d) = default {
                    walk(d, counts);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                walk(try_body, counts);
                for (_t, arm) in catch_arms {
                    walk(arm, counts);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                walk(try_body, counts);
                walk(finally_body, counts);
            }
            HirNode::Commented { inner, .. } => walk(std::slice::from_ref(inner.as_ref()), counts),
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                walk(then_body, counts);
                walk(else_body, counts);
            }
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

    fn sv(id: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: id as u64,
                size: 4,
            },
            version: 0,
        }
    }

    fn dummy_insn() -> IrInsn {
        IrInsn {
            op: IrOp::Copy,
            output: None,
            inputs: smallvec![],
            addr: 0,
            guard: None,
            category: None,
        }
    }

    #[test]
    fn classifies_while_loop() {
        let node = HirNode::While {
            cond: sv(1),
            body: vec![HirNode::If {
                cond: sv(2),
                then_body: vec![HirNode::Break],
                else_body: None,
            }],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::While));
    }

    #[test]
    fn classifies_do_while_loop() {
        let node = HirNode::DoWhile {
            cond: sv(1),
            body: vec![HirNode::Statement(dummy_insn())],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::DoWhile));
    }

    #[test]
    fn classifies_for_loop() {
        let node = HirNode::For {
            init: Some(dummy_insn()),
            cond: sv(1),
            update: dummy_insn(),
            body: vec![HirNode::Statement(dummy_insn())],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::For));
    }

    #[test]
    fn classifies_infinite_when_body_has_no_exit() {
        // while (cond) { stmt; stmt; } — body never breaks/returns → Infinite.
        let node = HirNode::While {
            cond: sv(1),
            body: vec![
                HirNode::Statement(dummy_insn()),
                HirNode::Statement(dummy_insn()),
            ],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::Infinite));
    }

    #[test]
    fn while_with_return_stays_while() {
        let node = HirNode::While {
            cond: sv(1),
            body: vec![HirNode::Return(None)],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::While));
    }

    #[test]
    fn while_with_switch_case_break_stays_while() {
        // The Break lives in a switch case arm (not under a nested loop),
        // so it does count as an outer-loop exit.
        let node = HirNode::While {
            cond: sv(1),
            body: vec![HirNode::Switch {
                cond: sv(2),
                cases: vec![(
                    crate::hir::SwitchCase::Value(0),
                    vec![HirNode::Break],
                    false,
                )],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            }],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::While));
    }

    #[test]
    fn nested_loop_break_does_not_propagate() {
        // Outer `while` whose body contains an inner `while` with a `Break`.
        // The inner break targets the inner loop; the outer loop is still
        // infinite from the perspective of outer body-exit analysis.
        let inner = HirNode::While {
            cond: sv(2),
            body: vec![HirNode::Break],
        };
        let outer = HirNode::While {
            cond: sv(1),
            body: vec![inner],
        };
        assert_eq!(classify_loop_form(&outer), Some(LoopForm::Infinite));
    }

    #[test]
    fn empty_body_is_not_infinite() {
        let node = HirNode::While {
            cond: sv(1),
            body: vec![],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::While));
    }

    #[test]
    fn non_loop_returns_none() {
        assert_eq!(classify_loop_form(&HirNode::Break), None);
        assert_eq!(classify_loop_form(&HirNode::Return(None)), None);
        assert_eq!(classify_loop_form(&HirNode::Statement(dummy_insn())), None);
    }

    #[test]
    fn counts_accumulate_across_nested_loops() {
        // for { while-infinite { } do { } while; }
        // → 1 for + 1 infinite (inner while has no exit) + 1 do_while.
        let nodes = vec![HirNode::For {
            init: Some(dummy_insn()),
            cond: sv(1),
            update: dummy_insn(),
            body: vec![
                HirNode::While {
                    cond: sv(2),
                    body: vec![HirNode::Statement(dummy_insn())],
                },
                HirNode::DoWhile {
                    cond: sv(3),
                    body: vec![HirNode::Statement(dummy_insn())],
                },
            ],
        }];
        let counts = classify_nodes(&nodes);
        assert_eq!(counts.for_count, 1);
        assert_eq!(counts.infinite_count, 1);
        assert_eq!(counts.while_count, 0);
        assert_eq!(counts.do_while_count, 1);
        assert_eq!(counts.total(), 3);
    }

    #[test]
    fn counts_zero_when_no_loops() {
        let counts = classify_nodes(&[HirNode::Statement(dummy_insn()), HirNode::Return(None)]);
        assert_eq!(counts, LoopFormCounts::default());
        assert_eq!(counts.total(), 0);
    }

    #[test]
    fn display_renders_loop_form() {
        assert_eq!(LoopForm::While.to_string(), "while");
        assert_eq!(LoopForm::DoWhile.to_string(), "do_while");
        assert_eq!(LoopForm::For.to_string(), "for");
        assert_eq!(LoopForm::Infinite.to_string(), "infinite");
    }

    #[test]
    fn commented_break_is_still_an_exit() {
        // A Commented wrapping a Break should still count as an exit, demoting
        // an otherwise-infinite while back to While.
        let node = HirNode::While {
            cond: sv(1),
            body: vec![HirNode::Commented {
                pre: vec!["// note".into()],
                post: vec![],
                inner: Box::new(HirNode::Break),
            }],
        };
        assert_eq!(classify_loop_form(&node), Some(LoopForm::While));
    }
}
