//! Forward-goto cleanup and fake-loop elimination for HIR.
//!
//! Diagnostics: enable `unlace::struct::goto_elim=debug` for per-stage HIR
//! counts and unreachable-tail truncations.

use std::collections::{BTreeMap, BTreeSet};

use crate::hir::{HirFunction, HirNode, LabelId};

/// Remove redundant forward gotos and convert fake `while { break; }` regions
/// into `if` statements.
pub fn eliminate_forward_gotos(func: &mut HirFunction) {
    trace_goto_stage("entry", &func.body);
    cleanup_scope(&mut func.body);
    trace_goto_stage("after-cleanup1", &func.body);
    remove_forward_gotos(&mut func.body);
    trace_goto_stage("after-remove-forward", &func.body);
    cleanup_scope(&mut func.body);
    trace_goto_stage("after-cleanup2", &func.body);
    strip_unused_labels(&mut func.body);
    trace_goto_stage("after-strip-labels", &func.body);
}

#[derive(Default, Debug, Clone, Copy)]
struct HirStats {
    nodes: usize,
    calls: usize,
    returns: usize,
    gotos: usize,
    labels: usize,
}

macro_rules! goto_elim_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::goto_elim", "{}", format_args!($($arg)*))
    };
}

fn goto_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::struct::goto_elim", tracing::Level::DEBUG)
}

fn trace_goto_stage(stage: &str, nodes: &[HirNode]) {
    if !goto_trace_enabled() {
        return;
    }
    let stats = hir_stats(nodes);
    goto_elim_debug!(
        "stage={stage} nodes={} calls={} returns={} gotos={} labels={}",
        stats.nodes,
        stats.calls,
        stats.returns,
        stats.gotos,
        stats.labels
    );
}

fn trace_removed_unreachable(index: usize, removed: &[HirNode]) {
    if !goto_trace_enabled() {
        return;
    }
    let stats = hir_stats(removed);
    if stats.calls == 0 && stats.returns == 0 && stats.labels == 0 {
        return;
    }
    goto_elim_debug!(
        "truncate-after-terminal index={index} removed_nodes={} calls={} returns={} gotos={} labels={}",
        stats.nodes,
        stats.calls,
        stats.returns,
        stats.gotos,
        stats.labels
    );
}

fn hir_stats(nodes: &[HirNode]) -> HirStats {
    let mut stats = HirStats::default();
    for node in nodes {
        add_hir_stats(node, &mut stats);
    }
    stats
}

fn add_hir_stats(node: &HirNode, stats: &mut HirStats) {
    stats.nodes += 1;
    match node {
        HirNode::Statement(insn) => {
            if insn.op == unlace_ir::IrOp::Call {
                stats.calls += 1;
            }
        }
        HirNode::Return(_) => stats.returns += 1,
        HirNode::Goto(_) => stats.gotos += 1,
        HirNode::Label(_) => stats.labels += 1,
        HirNode::Block(children)
        | HirNode::While { body: children, .. }
        | HirNode::DoWhile { body: children, .. }
        | HirNode::For { body: children, .. } => {
            for child in children {
                add_hir_stats(child, stats);
            }
        }
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            for child in then_body {
                add_hir_stats(child, stats);
            }
            if let Some(else_body) = else_body {
                for child in else_body {
                    add_hir_stats(child, stats);
                }
            }
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                for child in body {
                    add_hir_stats(child, stats);
                }
            }
            if let Some(default) = default {
                for child in default {
                    add_hir_stats(child, stats);
                }
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            for child in try_body {
                add_hir_stats(child, stats);
            }
            for (_, body) in catch_arms {
                for child in body {
                    add_hir_stats(child, stats);
                }
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            for child in try_body {
                add_hir_stats(child, stats);
            }
            for child in finally_body {
                add_hir_stats(child, stats);
            }
        }
        _ => {}
    }
}

fn cleanup_scope(nodes: &mut Vec<HirNode>) {
    for node in nodes.iter_mut() {
        cleanup_children(node);
    }
    remove_goto_to_next_label(nodes);
    remove_if_tail_goto_to_next_label(nodes);
    while_break_to_if(nodes);
    remove_unreachable_after_terminal(nodes);
}

fn cleanup_children(node: &mut HirNode) {
    match node {
        HirNode::Block(children) => cleanup_scope(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            cleanup_scope(then_body);
            if let Some(else_body) = else_body {
                cleanup_scope(else_body);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            cleanup_scope(body);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                cleanup_scope(body);
            }
            if let Some(default) = default {
                cleanup_scope(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            cleanup_scope(try_body);
            for (_ty, body) in catch_arms {
                cleanup_scope(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            cleanup_scope(try_body);
            cleanup_scope(finally_body);
        }
        _ => {}
    }
}

fn remove_goto_to_next_label(nodes: &mut Vec<HirNode>) {
    let mut i = 0;
    while i + 1 < nodes.len() {
        if let (HirNode::Goto(target), HirNode::Label(label)) = (&nodes[i], &nodes[i + 1])
            && target == label
        {
            nodes.remove(i);
            continue;
        }
        i += 1;
    }
}

#[allow(clippy::needless_range_loop)] // index used for sibling `next_labels` lookup
fn remove_if_tail_goto_to_next_label(nodes: &mut [HirNode]) {
    let next_labels: Vec<Option<LabelId>> = nodes
        .windows(2)
        .map(|window| match window[1] {
            HirNode::Label(label) => Some(label),
            _ => None,
        })
        .collect();
    for i in 0..nodes.len() {
        let Some(Some(label)) = next_labels.get(i).copied() else {
            continue;
        };
        if let HirNode::If {
            then_body,
            else_body,
            ..
        } = &mut nodes[i]
        {
            remove_trailing_goto(then_body, label);
            if let Some(else_body) = else_body {
                remove_trailing_goto(else_body, label);
            }
        }
    }
}

fn remove_trailing_goto(nodes: &mut Vec<HirNode>, target: LabelId) {
    if matches!(nodes.last(), Some(HirNode::Goto(label)) if *label == target) {
        nodes.pop();
    }
}

fn while_break_to_if(nodes: &mut [HirNode]) {
    for node in nodes {
        let replacement = match node {
            HirNode::While { cond, body } if matches!(body.last(), Some(HirNode::Break)) => {
                let mut then_body = body.clone();
                then_body.pop();
                Some(HirNode::If {
                    cond: *cond,
                    then_body,
                    else_body: None,
                })
            }
            _ => None,
        };
        if let Some(replacement) = replacement {
            *node = replacement;
        }
    }
}

fn remove_unreachable_after_terminal(nodes: &mut Vec<HirNode>) {
    let mut index = 0usize;
    while index < nodes.len() {
        if !is_terminal(&nodes[index]) {
            index += 1;
            continue;
        }

        let start = index + 1;
        let mut end = start;
        while end < nodes.len() && !contains_label(&nodes[end]) {
            end += 1;
        }
        if start < end {
            trace_removed_unreachable(index, &nodes[start..end]);
            nodes.drain(start..end);
        }
        if start >= nodes.len() {
            break;
        }
        index = start;
    }
}

fn contains_label(node: &HirNode) -> bool {
    match node {
        HirNode::Label(_) => true,
        HirNode::Block(children) => children.iter().any(contains_label),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            then_body.iter().any(contains_label)
                || else_body
                    .as_ref()
                    .is_some_and(|else_body| else_body.iter().any(contains_label))
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            body.iter().any(contains_label)
        }
        HirNode::Switch { cases, default, .. } => {
            cases
                .iter()
                .any(|(_, body, _)| body.iter().any(contains_label))
                || default
                    .as_ref()
                    .is_some_and(|default| default.iter().any(contains_label))
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            try_body.iter().any(contains_label)
                || catch_arms
                    .iter()
                    .any(|(_, body)| body.iter().any(contains_label))
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => try_body.iter().any(contains_label) || finally_body.iter().any(contains_label),
        _ => false,
    }
}

fn is_terminal(node: &HirNode) -> bool {
    match node {
        HirNode::Return(_) | HirNode::Break | HirNode::Continue | HirNode::Goto(_) => true,
        HirNode::Block(children) => children.last().is_some_and(is_terminal),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            let then_terminal = then_body.last().is_some_and(is_terminal);
            let else_terminal = else_body
                .as_ref()
                .and_then(|e| e.last())
                .is_some_and(is_terminal);
            then_terminal && else_terminal
        }
        _ => false,
    }
}

fn remove_forward_gotos(nodes: &mut [HirNode]) {
    let mut labels = BTreeMap::new();
    let mut pos = 0;
    collect_label_positions(nodes, &mut pos, &mut labels);

    let mut pos = 0;
    retain_nonforward_gotos(nodes, &mut pos, &labels);
}

fn collect_label_positions(
    nodes: &[HirNode],
    pos: &mut usize,
    labels: &mut BTreeMap<LabelId, usize>,
) {
    for node in nodes {
        let current = *pos;
        *pos += 1;
        if let HirNode::Label(label) = node {
            labels.insert(*label, current);
        }
        collect_label_positions_in_node(node, pos, labels);
    }
}

fn collect_label_positions_in_node(
    node: &HirNode,
    pos: &mut usize,
    labels: &mut BTreeMap<LabelId, usize>,
) {
    match node {
        HirNode::Block(children) => collect_label_positions(children, pos, labels),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            collect_label_positions(then_body, pos, labels);
            if let Some(else_body) = else_body {
                collect_label_positions(else_body, pos, labels);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            collect_label_positions(body, pos, labels);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                collect_label_positions(body, pos, labels);
            }
            if let Some(default) = default {
                collect_label_positions(default, pos, labels);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            collect_label_positions(try_body, pos, labels);
            for (_ty, body) in catch_arms {
                collect_label_positions(body, pos, labels);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            collect_label_positions(try_body, pos, labels);
            collect_label_positions(finally_body, pos, labels);
        }
        _ => {}
    }
}

fn retain_nonforward_gotos(
    nodes: &mut [HirNode],
    pos: &mut usize,
    labels: &BTreeMap<LabelId, usize>,
) {
    let mut i = 0;
    while i < nodes.len() {
        *pos += 1;
        retain_nonforward_gotos_in_node(&mut nodes[i], pos, labels);
        i += 1;
    }
}

fn retain_nonforward_gotos_in_node(
    node: &mut HirNode,
    pos: &mut usize,
    labels: &BTreeMap<LabelId, usize>,
) {
    match node {
        HirNode::Block(children) => retain_nonforward_gotos(children, pos, labels),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            retain_nonforward_gotos(then_body, pos, labels);
            if let Some(else_body) = else_body {
                retain_nonforward_gotos(else_body, pos, labels);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            retain_nonforward_gotos(body, pos, labels);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                retain_nonforward_gotos(body, pos, labels);
            }
            if let Some(default) = default {
                retain_nonforward_gotos(default, pos, labels);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            retain_nonforward_gotos(try_body, pos, labels);
            for (_ty, body) in catch_arms {
                retain_nonforward_gotos(body, pos, labels);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            retain_nonforward_gotos(try_body, pos, labels);
            retain_nonforward_gotos(finally_body, pos, labels);
        }
        _ => {}
    }
}

fn strip_unused_labels(nodes: &mut Vec<HirNode>) {
    let mut used = BTreeSet::new();
    collect_gotos(nodes, &mut used);
    retain_labels(nodes, &used);
}

fn collect_gotos(nodes: &[HirNode], used: &mut BTreeSet<LabelId>) {
    for node in nodes {
        match node {
            HirNode::Goto(label) => {
                used.insert(*label);
            }
            HirNode::Block(children) => collect_gotos(children, used),
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_gotos(then_body, used);
                if let Some(else_body) = else_body {
                    collect_gotos(else_body, used);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => {
                collect_gotos(body, used);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_gotos(body, used);
                }
                if let Some(default) = default {
                    collect_gotos(default, used);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_gotos(try_body, used);
                for (_ty, body) in catch_arms {
                    collect_gotos(body, used);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_gotos(try_body, used);
                collect_gotos(finally_body, used);
            }
            _ => {}
        }
    }
}

fn retain_labels(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|node| !matches!(node, HirNode::Label(label) if !used.contains(label)));
    for node in nodes {
        cleanup_children(node);
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use unlace_ir::Varnode;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};

    use super::*;

    fn func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
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
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            byref_locals: std::collections::BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
        }
    }

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0, 1),
            version: 0,
        }
    }

    #[test]
    fn removes_goto_to_immediately_following_label() {
        let mut hir = func(vec![HirNode::Goto(LabelId(1)), HirNode::Label(LabelId(1))]);
        eliminate_forward_gotos(&mut hir);
        assert!(hir.body.is_empty());
    }

    #[test]
    fn converts_while_with_unconditional_break_to_if() {
        let mut hir = func(vec![HirNode::While {
            cond: cond(),
            body: vec![HirNode::Break],
        }]);
        eliminate_forward_gotos(&mut hir);
        assert!(matches!(hir.body[0], HirNode::If { ref then_body, .. } if then_body.is_empty()));
    }

    #[test]
    fn terminal_before_later_label_keeps_labelled_tail() {
        let mut hir = func(vec![
            HirNode::Goto(LabelId(1)),
            HirNode::Statement(unlace_ir::IrInsn::without_output(
                unlace_ir::IrOp::Call,
                smallvec::smallvec![Varnode::constant(0x1000, 8)],
                0x10,
            )),
            HirNode::Label(LabelId(1)),
            HirNode::Return(None),
        ]);
        eliminate_forward_gotos(&mut hir);
        assert!(
            hir.body
                .iter()
                .any(|node| matches!(node, HirNode::Return(_))),
            "later labelled tail must not be truncated: {:#?}",
            hir.body
        );
    }

    #[test]
    fn terminal_before_nested_later_label_keeps_labelled_tail() {
        let mut hir = func(vec![
            HirNode::If {
                cond: cond(),
                then_body: vec![HirNode::Return(None)],
                else_body: Some(vec![HirNode::Goto(LabelId(1))]),
            },
            HirNode::Block(vec![
                HirNode::Statement(unlace_ir::IrInsn::without_output(
                    unlace_ir::IrOp::Call,
                    smallvec::smallvec![Varnode::constant(0x1000, 8)],
                    0x10,
                )),
                HirNode::Label(LabelId(1)),
                HirNode::Return(None),
            ]),
        ]);
        eliminate_forward_gotos(&mut hir);
        assert!(
            hir.body
                .iter()
                .any(|node| matches!(node, HirNode::Block(_))),
            "nested labelled tail must not be truncated: {:#?}",
            hir.body
        );
    }

    #[test]
    fn terminal_before_unlabelled_side_effect_tail_drops_tail() {
        let mut hir = func(vec![
            HirNode::If {
                cond: cond(),
                then_body: vec![HirNode::Return(None)],
                else_body: Some(vec![HirNode::Goto(LabelId(1))]),
            },
            HirNode::Statement(unlace_ir::IrInsn::without_output(
                unlace_ir::IrOp::Call,
                smallvec::smallvec![Varnode::constant(0x1000, 8)],
                0x10,
            )),
            HirNode::Return(None),
        ]);
        eliminate_forward_gotos(&mut hir);
        assert!(
            !hir.body.iter().any(
                |node| matches!(node, HirNode::Statement(insn) if insn.op == unlace_ir::IrOp::Call)
            ),
            "unlabelled side-effect tail after terminal flow is unreachable: {:#?}",
            hir.body
        );
    }
}
