//! Switch emission cleanup (Batch 9 slice 2).
//!
//! Conservative, read-mostly post-pass over the structured HIR that improves
//! `HirNode::Switch` shape so the C printer can emit human-friendly code:
//!
//! 1. **Case dedup**: when *consecutive* cases have structurally equivalent
//!    bodies, collapse all but the last into empty-body fall-through cases.
//!    The printer recognises empty fall-through cases and emits stacked
//!    `case` labels with the body printed once at the end of the chain.
//!
//!    Example: input
//!    ```text
//!    case 0: { handler(); }
//!    case 1: { handler(); }
//!    case 2: { handler(); }
//!    ```
//!    becomes
//!    ```text
//!    case 0: (fall_through, empty body)
//!    case 1: (fall_through, empty body)
//!    case 2: { handler(); }
//!    ```
//!
//! 2. **Default merge**: when the `default` arm body equals the *last* case's
//!    body, drop the default — the last case already covers the default
//!    behaviour for any value reaching its label. Conservative: we only
//!    collapse when bodies match exactly.
//!
//! Both transforms use deep structural equality on `Vec<HirNode>` via the
//! derived `PartialEq` on `HirNode`. We never mutate case values, never
//! reorder cases, and never drop a case that's not provably redundant.
//!
//! Fall-through detection (case body without a terminating `break`/`return`/
//! `goto`/`continue`/tail-call) is performed at *emit time* by the C
//! printer (see `crates/unlace-output/src/c_printer.rs` switch emit path),
//! not here, because it depends on what the printer chooses to render and
//! must be applied uniformly across all switches.

use crate::hir::{HirFunction, HirNode};

/// Run switch cleanup across every switch in `func`.
///
/// Walks all HIR containers recursively. Returns the number of switches
/// that were modified (for metrics / debugging — callers can ignore).
pub fn cleanup_switches(func: &mut HirFunction) -> usize {
    let mut modified = 0;
    cleanup_nodes(&mut func.body, &mut modified);
    modified
}

fn cleanup_nodes(nodes: &mut Vec<HirNode>, modified: &mut usize) {
    for node in nodes.iter_mut() {
        cleanup_node(node, modified);
    }
}

fn cleanup_node(node: &mut HirNode, modified: &mut usize) {
    match node {
        HirNode::Block(body) => cleanup_nodes(body, modified),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            cleanup_nodes(then_body, modified);
            if let Some(eb) = else_body.as_mut() {
                cleanup_nodes(eb, modified);
            }
        }
        HirNode::While { body, .. }
        | HirNode::DoWhile { body, .. }
        | HirNode::For { body, .. } => cleanup_nodes(body, modified),
        HirNode::Switch {
            cases, default, ..
        } => {
            // First recurse into nested HIR.
            for (_, body, _) in cases.iter_mut() {
                cleanup_nodes(body, modified);
            }
            if let Some(def) = default.as_mut() {
                cleanup_nodes(def, modified);
            }

            dedup_consecutive_cases(cases, modified);
            merge_default_with_last_case(cases, default, modified);
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
            ..
        } => {
            cleanup_nodes(try_body, modified);
            for (_ty, arm_body) in catch_arms.iter_mut() {
                cleanup_nodes(arm_body, modified);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
            ..
        } => {
            cleanup_nodes(try_body, modified);
            cleanup_nodes(finally_body, modified);
        }
        HirNode::Commented { inner, .. } => cleanup_node(inner, modified),
        HirNode::ObjcBlock { .. } => {}
        // Leaf nodes — nothing to recurse into.
        HirNode::Statement(_)
        | HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Label(_)
        | HirNode::Ternary { .. }
        | HirNode::TailCall { .. }
        | HirNode::Break
        | HirNode::Continue
        | HirNode::GuardedIf { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::IfCmp { .. }
        | HirNode::Asm { .. } => {}
    }
}

/// Collapse runs of consecutive cases with structurally equal bodies.
///
/// For a run of N cases `[(k1, B), (k2, B), ..., (kN, B)]` with identical
/// non-empty bodies, the first N-1 are rewritten to `(ki, [], true)`
/// (empty body + fall-through marker). The Nth case is left untouched so
/// it carries the shared body. Cases already marked `fall_through=true`
/// with empty bodies are treated as "already part of a chain" and not
/// re-rewritten, which keeps the operation idempotent.
fn dedup_consecutive_cases(
    cases: &mut Vec<(crate::hir::SwitchCase, Vec<HirNode>, bool)>,
    modified: &mut usize,
) {
    if cases.len() < 2 {
        return;
    }
    let mut changed = false;
    let mut i = 0;
    while i + 1 < cases.len() {
        // Anchor on the body at cases[i]. Skip empty bodies — those are
        // already part of a stacked label chain (or trivial pass-through
        // cases) and we don't want to invent a "shared body" for them.
        let anchor_body = cases[i].1.clone();
        if anchor_body.is_empty() {
            i += 1;
            continue;
        }
        // Find the longest contiguous run [i..=j] where every cases[k].1
        // equals cases[i].1 (structurally).
        let mut j = i;
        while j + 1 < cases.len() && cases[j + 1].1 == anchor_body {
            j += 1;
        }
        if j > i {
            // Mark cases[i..j] as empty + fall_through; cases[j] keeps
            // its shared body and its existing fall_through bit (which
            // is typically `false`, so the printer emits `break;`).
            for k in i..j {
                cases[k].1.clear();
                cases[k].2 = true;
            }
            changed = true;
            i = j + 1;
        } else {
            i += 1;
        }
    }
    if changed {
        *modified += 1;
    }
}

/// If the default body equals the body of the last non-fall-through case,
/// drop the default — control already falls through to the right handler.
///
/// This is the common compiler-generated pattern where the optimiser
/// shared an unreachable default with the final case. Removing it makes
/// the printed switch noticeably tighter and matches how IDA / Ghidra
/// render the same construct.
fn merge_default_with_last_case(
    cases: &[(crate::hir::SwitchCase, Vec<HirNode>, bool)],
    default: &mut Option<Vec<HirNode>>,
    modified: &mut usize,
) {
    let Some(def_body) = default.as_ref() else {
        return;
    };
    // Find the last case that owns a body (i.e. not a fall-through
    // stack-member with empty body).
    let last_terminal = cases
        .iter()
        .rev()
        .find(|(_, body, ft)| !*ft || !body.is_empty());
    let Some((_, last_body, _)) = last_terminal else {
        return;
    };
    if !last_body.is_empty() && last_body == def_body {
        *default = None;
        *modified += 1;
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::hir::{HirFunction, HirNode, SwitchCase};
    use std::collections::{BTreeMap, BTreeSet};
    use unlace_ir::Varnode;
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::ssa::PrimitiveType;

    fn sv(offset: u64, _size: u8) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::unique(offset, 8),
            version: 0,
        }
    }

    fn make_func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "f".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            rust_async: None,
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            go_defer_recover_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: BTreeSet::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            byref_locals: BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
        }
    }

    fn ret_a() -> HirNode {
        HirNode::Return(Some(sv(1, 8)))
    }

    fn ret_b() -> HirNode {
        HirNode::Return(Some(sv(2, 8)))
    }

    #[test]
    fn dedup_collapses_three_consecutive_equal_cases() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_a()], false),
                (SwitchCase::Value(2), vec![ret_a()], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        let n = cleanup_switches(&mut f);
        assert_eq!(n, 1);
        let HirNode::Switch { cases, .. } = &f.body[0] else {
            panic!()
        };
        assert!(cases[0].1.is_empty() && cases[0].2);
        assert!(cases[1].1.is_empty() && cases[1].2);
        assert_eq!(cases[2].1.len(), 1);
        assert!(!cases[2].2);
    }

    #[test]
    fn dedup_leaves_distinct_bodies_alone() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_b()], false),
                (SwitchCase::Value(2), vec![ret_a()], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        cleanup_switches(&mut f);
        let HirNode::Switch { cases, .. } = &f.body[0] else {
            panic!()
        };
        assert_eq!(cases[0].1.len(), 1);
        assert_eq!(cases[1].1.len(), 1);
        assert_eq!(cases[2].1.len(), 1);
        assert!(!cases[0].2 && !cases[1].2 && !cases[2].2);
    }

    #[test]
    fn dedup_only_collapses_consecutive_runs() {
        // [a, a, b, b]: two separate runs.
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_a()], false),
                (SwitchCase::Value(2), vec![ret_b()], false),
                (SwitchCase::Value(3), vec![ret_b()], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        cleanup_switches(&mut f);
        let HirNode::Switch { cases, .. } = &f.body[0] else {
            panic!()
        };
        assert!(cases[0].1.is_empty() && cases[0].2);
        assert_eq!(cases[1].1.len(), 1);
        assert!(cases[2].1.is_empty() && cases[2].2);
        assert_eq!(cases[3].1.len(), 1);
    }

    #[test]
    fn dedup_is_idempotent() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_a()], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        cleanup_switches(&mut f);
        let snapshot = f.body.clone();
        let n2 = cleanup_switches(&mut f);
        assert_eq!(n2, 0, "second run should be a no-op");
        assert_eq!(f.body, snapshot);
    }

    #[test]
    fn default_merge_when_equal_to_last_case() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_b()], false),
            ],
            default: Some(vec![ret_b()]),
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        let n = cleanup_switches(&mut f);
        assert_eq!(n, 1);
        let HirNode::Switch { default, .. } = &f.body[0] else {
            panic!()
        };
        assert!(default.is_none(), "redundant default should be dropped");
    }

    #[test]
    fn default_kept_when_distinct() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![(SwitchCase::Value(0), vec![ret_a()], false)],
            default: Some(vec![ret_b()]),
            jumptable_addr: None,
            jumptable_cases: None,
        }];
        let mut f = make_func(body);
        cleanup_switches(&mut f);
        let HirNode::Switch { default, .. } = &f.body[0] else {
            panic!()
        };
        assert!(default.is_some(), "distinct default should be preserved");
    }

    #[test]
    fn recurses_into_nested_switches() {
        let inner = HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![ret_a()], false),
                (SwitchCase::Value(1), vec![ret_a()], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        };
        let body = vec![HirNode::If {
            cond: sv(9, 1),
            then_body: vec![inner],
            else_body: None,
        }];
        let mut f = make_func(body);
        let n = cleanup_switches(&mut f);
        assert_eq!(n, 1);
    }
}
