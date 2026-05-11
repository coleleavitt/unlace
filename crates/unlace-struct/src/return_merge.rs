//! Return path recovery post-pass.
//!
//! Walks the HIR looking for:
//! 1. `Goto(label)` where the label's target is immediately followed by
//!    `Return` → replace the goto with the return directly.
//! 2. Functions named `main` that lack an explicit `return 0` at the end →
//!    append one (C99 §5.1.2.2.3).

use std::collections::BTreeMap;

use unlace_ir::Varnode;
use unlace_ir::ssa::SsaVarnode;

use crate::hir::{HirFunction, HirNode, LabelId};

/// Run return-path recovery on a structured HIR function.
///
/// Replaces `Goto(label)` with `Return(val)` when the label is immediately
/// followed by a return statement, then strips labels that become unused.
/// Also ensures `main` has an explicit `return 0`.
pub fn return_merge(hir: &mut HirFunction) {
    let label_returns = collect_label_returns(&hir.body);

    if !label_returns.is_empty() {
        let mut changed = replace_rax_assign_goto_with_return(&mut hir.body, &label_returns);
        changed |= replace_goto_with_return(&mut hir.body, &label_returns);
        if changed {
            strip_consumed_labels(&mut hir.body, &label_returns);
        }
    }

    ensure_tail_return(hir);
}

/// Scan the HIR body for `Label(id)` immediately followed by `Return(val)`.
/// Returns a map from label id to the return value.
fn collect_label_returns(nodes: &[HirNode]) -> BTreeMap<LabelId, Option<SsaVarnode>> {
    let mut map = BTreeMap::new();
    collect_label_returns_inner(nodes, &mut map);
    map
}

fn collect_label_returns_inner(nodes: &[HirNode], map: &mut BTreeMap<LabelId, Option<SsaVarnode>>) {
    for window in nodes.windows(2) {
        if let (HirNode::Label(label), HirNode::Return(val)) = (&window[0], &window[1]) {
            map.insert(*label, *val);
        }
    }

    for node in nodes {
        match node {
            HirNode::Block(children) => collect_label_returns_inner(children, map),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_label_returns_inner(then_body, map);
                if let Some(eb) = else_body {
                    collect_label_returns_inner(eb, map);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_label_returns_inner(body, map);
            }
            HirNode::For { body, .. } => collect_label_returns_inner(body, map),
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_label_returns_inner(body, map);
                }
                if let Some(d) = default {
                    collect_label_returns_inner(d, map);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_label_returns_inner(try_body, map);
                for (_ty, body) in catch_arms {
                    collect_label_returns_inner(body, map);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_label_returns_inner(try_body, map);
                collect_label_returns_inner(finally_body, map);
            }
            _ => {}
        }
    }
}

fn replace_rax_assign_goto_with_return(
    nodes: &mut Vec<HirNode>,
    label_returns: &BTreeMap<LabelId, Option<SsaVarnode>>,
) -> bool {
    let mut changed = false;
    let mut i = 0;
    while i + 1 < nodes.len() {
        let ret = match (&nodes[i], &nodes[i + 1]) {
            (HirNode::Statement(insn), HirNode::Goto(label))
                if label_returns.contains_key(label) =>
            {
                rax_return_value(insn, label_returns.get(label).copied().flatten())
            }
            _ => None,
        };
        if let Some(ret) = ret {
            nodes[i + 1] = HirNode::Return(Some(ret));
            changed = true;
            i += 2;
        } else {
            i += 1;
        }
    }

    for node in nodes.iter_mut() {
        match node {
            HirNode::Block(children) => {
                changed |= replace_rax_assign_goto_with_return(children, label_returns);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                changed |= replace_rax_assign_goto_with_return(then_body, label_returns);
                if let Some(eb) = else_body {
                    changed |= replace_rax_assign_goto_with_return(eb, label_returns);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                changed |= replace_rax_assign_goto_with_return(body, label_returns);
            }
            HirNode::For { body, .. } => {
                changed |= replace_rax_assign_goto_with_return(body, label_returns);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    changed |= replace_rax_assign_goto_with_return(body, label_returns);
                }
                if let Some(default) = default {
                    changed |= replace_rax_assign_goto_with_return(default, label_returns);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                changed |= replace_rax_assign_goto_with_return(try_body, label_returns);
                for (_ty, body) in catch_arms {
                    changed |= replace_rax_assign_goto_with_return(body, label_returns);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                changed |= replace_rax_assign_goto_with_return(try_body, label_returns);
                changed |= replace_rax_assign_goto_with_return(finally_body, label_returns);
            }
            _ => {}
        }
    }

    changed
}

fn rax_return_value(insn: &unlace_ir::IrInsn, label_ret: Option<SsaVarnode>) -> Option<SsaVarnode> {
    let out = insn.output?;
    if out.space != unlace_ir::SpaceId::Register || out.offset != 0 {
        return None;
    }
    if let Some(ret) = label_ret {
        if ret.base.space == unlace_ir::SpaceId::Register && ret.base.offset == 0 {
            return Some(ret);
        }
        return None;
    }
    Some(SsaVarnode {
        base: out,
        version: 0,
    })
}

/// Replace `Goto(label)` with `Return(val)` when `label` maps to a return.
/// Returns true if any replacement was made.
fn replace_goto_with_return(
    nodes: &mut Vec<HirNode>,
    label_returns: &BTreeMap<LabelId, Option<SsaVarnode>>,
) -> bool {
    let mut changed = false;

    for node in nodes.iter_mut() {
        match node {
            HirNode::Goto(label) => {
                if let Some(ret_val) = label_returns.get(label) {
                    *node = HirNode::Return(*ret_val);
                    changed = true;
                }
            }
            HirNode::Block(children) => {
                changed |= replace_goto_with_return(children, label_returns);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                changed |= replace_goto_with_return(then_body, label_returns);
                if let Some(eb) = else_body {
                    changed |= replace_goto_with_return(eb, label_returns);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                changed |= replace_goto_with_return(body, label_returns);
            }
            HirNode::For { body, .. } => {
                changed |= replace_goto_with_return(body, label_returns);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    changed |= replace_goto_with_return(body, label_returns);
                }
                if let Some(d) = default {
                    changed |= replace_goto_with_return(d, label_returns);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                changed |= replace_goto_with_return(try_body, label_returns);
                for (_ty, body) in catch_arms {
                    changed |= replace_goto_with_return(body, label_returns);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                changed |= replace_goto_with_return(try_body, label_returns);
                changed |= replace_goto_with_return(finally_body, label_returns);
            }
            _ => {}
        }
    }

    changed
}

/// Remove `Label(id)` + `Return(val)` pairs whose label was fully consumed
/// (all gotos replaced). A label is safe to strip when no remaining `Goto`
/// references it.
fn strip_consumed_labels(
    nodes: &mut Vec<HirNode>,
    label_returns: &BTreeMap<LabelId, Option<SsaVarnode>>,
) {
    let mut still_used = std::collections::BTreeSet::new();
    collect_remaining_gotos(nodes, &mut still_used);

    strip_label_return_pairs(nodes, label_returns, &still_used);
}

fn collect_remaining_gotos(nodes: &[HirNode], used: &mut std::collections::BTreeSet<LabelId>) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => {
                used.insert(*label);
            }
            HirNode::Block(children) => collect_remaining_gotos(children, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_remaining_gotos(then_body, used);
                if let Some(eb) = else_body {
                    collect_remaining_gotos(eb, used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_remaining_gotos(body, used);
            }
            HirNode::For { body, .. } => collect_remaining_gotos(body, used),
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_remaining_gotos(body, used);
                }
                if let Some(d) = default {
                    collect_remaining_gotos(d, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_remaining_gotos(try_body, used);
                for (_ty, body) in catch_arms {
                    collect_remaining_gotos(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_remaining_gotos(try_body, used);
                collect_remaining_gotos(finally_body, used);
            }
            _ => {}
        }
    }
}

/// Remove `[Label(id), Return(val)]` pairs where `id` is in `label_returns`
/// and not in `still_used`.
fn strip_label_return_pairs(
    nodes: &mut Vec<HirNode>,
    label_returns: &BTreeMap<LabelId, Option<SsaVarnode>>,
    still_used: &std::collections::BTreeSet<LabelId>,
) {
    let mut i = 0;
    while i + 1 < nodes.len() {
        if let (HirNode::Label(label), HirNode::Return(_)) = (&nodes[i], &nodes[i + 1]) {
            if label_returns.contains_key(label) && !still_used.contains(label) {
                nodes.remove(i + 1);
                nodes.remove(i);
                continue;
            }
        }
        i += 1;
    }

    for node in nodes.iter_mut() {
        match node {
            HirNode::Block(children) => {
                strip_label_return_pairs(children, label_returns, still_used);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                strip_label_return_pairs(then_body, label_returns, still_used);
                if let Some(eb) = else_body {
                    strip_label_return_pairs(eb, label_returns, still_used);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                strip_label_return_pairs(body, label_returns, still_used);
            }
            HirNode::For { body, .. } => {
                strip_label_return_pairs(body, label_returns, still_used);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    strip_label_return_pairs(body, label_returns, still_used);
                }
                if let Some(d) = default {
                    strip_label_return_pairs(d, label_returns, still_used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                strip_label_return_pairs(try_body, label_returns, still_used);
                for (_ty, body) in catch_arms {
                    strip_label_return_pairs(body, label_returns, still_used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                strip_label_return_pairs(try_body, label_returns, still_used);
                strip_label_return_pairs(finally_body, label_returns, still_used);
            }
            _ => {}
        }
    }
}

/// If a function falls off the end without an explicit return, make that tail
/// path visible in the recovered HIR. `main` gets C's implicit `return 0`;
/// other recovered functions get a bare `return` because their precise ABI
/// return value was not recovered on that path.
fn ensure_tail_return(hir: &mut HirFunction) {
    if ends_with_return(&hir.body) {
        return;
    }

    let value = (hir.name == "main").then_some(SsaVarnode {
        base: Varnode::constant(0, 4),
        version: 0,
    });
    hir.body.push(HirNode::Return(value));
}

fn ends_with_return(nodes: &[HirNode]) -> bool {
    match nodes.last() {
        Some(HirNode::Return(_)) => true,
        Some(HirNode::Block(children)) => ends_with_return(children),
        _ => false,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirFunction, HirNode, LabelId};

    fn make_hir(name: &str, body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: name.to_string(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0x1000,
            foldable_exprs: Default::default(),
            panic_sites: Default::default(),
            noreturn: false,
            composite_var_types: Default::default(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
        }
    }

    fn ret_val(v: u64) -> Option<SsaVarnode> {
        Some(SsaVarnode {
            base: Varnode::constant(v, 4),
            version: 0,
        })
    }

    #[test]
    fn test_goto_to_return_replacement() {
        let label = LabelId(0);
        let body = vec![
            HirNode::If {
                cond: SsaVarnode {
                    base: Varnode::reg(0, 1),
                    version: 0,
                },
                then_body: vec![HirNode::Goto(label)],
                else_body: None,
            },
            HirNode::Label(label),
            HirNode::Return(ret_val(42)),
        ];

        let mut hir = make_hir("test_func", body);
        return_merge(&mut hir);

        // The Goto should have been replaced with Return.
        match &hir.body[0] {
            HirNode::If { then_body, .. } => {
                assert_eq!(then_body.len(), 1);
                assert!(
                    matches!(&then_body[0], HirNode::Return(Some(sv)) if sv.base.offset == 42),
                    "goto should be replaced with return 42"
                );
            }
            other => panic!("expected If, got {other:?}"),
        }

        // The Label+Return pair should have been stripped since no gotos remain.
        let has_label = hir.body.iter().any(|n| matches!(n, HirNode::Label(_)));
        assert!(!has_label, "consumed label should be stripped");
    }

    #[test]
    fn test_main_gets_return_zero() {
        let body = vec![HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![],
            0x1000,
        ))];

        let mut hir = make_hir("main", body);
        return_merge(&mut hir);

        assert!(
            matches!(hir.body.last(), Some(HirNode::Return(Some(sv))) if sv.base.offset == 0),
            "main should end with return 0"
        );
    }

    #[test]
    fn test_non_main_gets_bare_tail_return() {
        let body = vec![HirNode::Statement(IrInsn::without_output(
            IrOp::Store,
            smallvec![],
            0x1000,
        ))];

        let mut hir = make_hir("foo", body);
        return_merge(&mut hir);

        assert!(
            matches!(hir.body.last(), Some(HirNode::Return(None))),
            "non-main fallthrough should get a bare tail return"
        );
    }

    #[test]
    fn test_main_already_has_return() {
        let body = vec![HirNode::Return(ret_val(1))];

        let mut hir = make_hir("main", body);
        return_merge(&mut hir);

        assert_eq!(hir.body.len(), 1, "should not add duplicate return");
        assert!(matches!(&hir.body[0], HirNode::Return(Some(sv)) if sv.base.offset == 1));
    }

    #[test]
    fn test_partial_goto_replacement() {
        let label = LabelId(0);
        let body = vec![
            HirNode::If {
                cond: SsaVarnode {
                    base: Varnode::reg(0, 1),
                    version: 0,
                },
                then_body: vec![HirNode::Goto(label)],
                else_body: Some(vec![HirNode::Goto(label)]),
            },
            HirNode::Label(label),
            HirNode::Return(ret_val(0)),
        ];

        let mut hir = make_hir("test_func", body);
        return_merge(&mut hir);

        // Both gotos should be replaced.
        match &hir.body[0] {
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                assert!(matches!(&then_body[0], HirNode::Return(_)));
                assert!(matches!(
                    &else_body.as_ref().unwrap()[0],
                    HirNode::Return(_)
                ));
            }
            other => panic!("expected If, got {other:?}"),
        }

        // Label+Return should be stripped.
        let has_label = hir.body.iter().any(|n| matches!(n, HirNode::Label(_)));
        assert!(!has_label, "all gotos replaced → label should be stripped");
    }

    #[test]
    fn test_rax_assignment_goto_void_return_becomes_value_return() {
        let label = LabelId(7);
        let rax = Varnode::reg(0, 8);
        let val = Varnode::constant(42, 8);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, rax, smallvec![val], 0x1000)),
            HirNode::Goto(label),
            HirNode::Label(label),
            HirNode::Return(None),
        ];

        let mut hir = make_hir("test_func", body);
        return_merge(&mut hir);

        assert!(matches!(&hir.body[1], HirNode::Return(Some(sv)) if sv.base == rax));
        assert!(!hir.body.iter().any(|n| matches!(n, HirNode::Label(_))));
    }

    #[test]
    fn test_nested_rax_assignment_goto_return_block() {
        let label = LabelId(8);
        let rax = Varnode::reg(0, 8);
        let val = Varnode::constant(1, 8);
        let body = vec![
            HirNode::If {
                cond: SsaVarnode {
                    base: Varnode::reg(32, 1),
                    version: 0,
                },
                then_body: vec![
                    HirNode::Statement(IrInsn::with_output(
                        IrOp::Copy,
                        rax,
                        smallvec![val],
                        0x1000,
                    )),
                    HirNode::Goto(label),
                ],
                else_body: None,
            },
            HirNode::Label(label),
            HirNode::Return(Some(SsaVarnode {
                base: rax,
                version: 0,
            })),
        ];

        let mut hir = make_hir("test_func", body);
        return_merge(&mut hir);

        match &hir.body[0] {
            HirNode::If { then_body, .. } => {
                assert!(matches!(&then_body[1], HirNode::Return(Some(sv)) if sv.base == rax));
            }
            other => panic!("expected If, got {other:?}"),
        }
    }
}
