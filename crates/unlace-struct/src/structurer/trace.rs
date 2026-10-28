//! Structurer diagnostics under the `unlace::struct` target: `debug` for
//! decisions and region walks, `trace` for per-edge and HIR-count detail.

use super::*;

macro_rules! struct_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct", "{}", format_args!($($arg)*))
    };
}

macro_rules! struct_trace {
    ($($arg:tt)*) => {
        tracing::trace!(target: "unlace::struct", "{}", format_args!($($arg)*))
    };
}

pub(super) fn struct_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::struct", tracing::Level::DEBUG)
}

pub(super) fn struct_trace_verbose_enabled() -> bool {
    tracing::enabled!(target: "unlace::struct", tracing::Level::TRACE)
}

#[derive(Default)]
struct HirTraceCounts {
    nodes: usize,
    stmts: usize,
    ifs: usize,
    gotos: usize,
    labels: usize,
    breaks: usize,
    continues: usize,
    empty_ifs: usize,
}

fn hir_trace_counts(nodes: &[HirNode]) -> HirTraceCounts {
    let mut counts = HirTraceCounts::default();
    for node in nodes {
        counts.nodes += 1;
        match node {
            HirNode::Statement(_) => counts.stmts += 1,
            HirNode::Goto(_) => counts.gotos += 1,
            HirNode::Label(_) => counts.labels += 1,
            HirNode::Break => counts.breaks += 1,
            HirNode::Continue => counts.continues += 1,
            HirNode::Block(children) => {
                merge_hir_trace_counts(&mut counts, hir_trace_counts(children))
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                counts.ifs += 1;
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    counts.empty_ifs += 1;
                }
                merge_hir_trace_counts(&mut counts, hir_trace_counts(then_body));
                if let Some(else_body) = else_body {
                    merge_hir_trace_counts(&mut counts, hir_trace_counts(else_body));
                }
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                counts.ifs += 1;
                if then_body.is_empty() && else_body.as_ref().is_none_or(Vec::is_empty) {
                    counts.empty_ifs += 1;
                }
                merge_hir_trace_counts(&mut counts, hir_trace_counts(then_body));
                if let Some(else_body) = else_body {
                    merge_hir_trace_counts(&mut counts, hir_trace_counts(else_body));
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                merge_hir_trace_counts(&mut counts, hir_trace_counts(body));
            }
            HirNode::For { body, .. } => {
                merge_hir_trace_counts(&mut counts, hir_trace_counts(body))
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    merge_hir_trace_counts(&mut counts, hir_trace_counts(body));
                }
                if let Some(default) = default {
                    merge_hir_trace_counts(&mut counts, hir_trace_counts(default));
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                merge_hir_trace_counts(&mut counts, hir_trace_counts(try_body));
                for (_, body) in catch_arms {
                    merge_hir_trace_counts(&mut counts, hir_trace_counts(body));
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                merge_hir_trace_counts(&mut counts, hir_trace_counts(try_body));
                merge_hir_trace_counts(&mut counts, hir_trace_counts(finally_body));
            }
            HirNode::Commented { inner, .. } => merge_hir_trace_counts(
                &mut counts,
                hir_trace_counts(std::slice::from_ref(inner.as_ref())),
            ),
            HirNode::ObjcBlock { .. } => {}
            HirNode::Ternary { .. }
            | HirNode::GuardedIf { .. }
            | HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. }
            | HirNode::TailCall { .. }
            | HirNode::Return(_)
            | HirNode::Asm { .. } => {}
        }
    }
    counts
}

fn merge_hir_trace_counts(dst: &mut HirTraceCounts, src: HirTraceCounts) {
    dst.nodes += src.nodes;
    dst.stmts += src.stmts;
    dst.ifs += src.ifs;
    dst.gotos += src.gotos;
    dst.labels += src.labels;
    dst.breaks += src.breaks;
    dst.continues += src.continues;
    dst.empty_ifs += src.empty_ifs;
}

pub(super) fn trace_hir_counts(prefix: &str, nodes: &[HirNode]) {
    if !struct_trace_verbose_enabled() {
        return;
    }
    let counts = hir_trace_counts(nodes);
    struct_trace!(
        "{prefix} nodes={} stmts={} ifs={} gotos={} labels={} breaks={} continues={} empty_ifs={}",
        counts.nodes,
        counts.stmts,
        counts.ifs,
        counts.gotos,
        counts.labels,
        counts.breaks,
        counts.continues,
        counts.empty_ifs
    );
}

pub(super) fn trace_branch_shape(prefix: &str, nodes: &[HirNode]) {
    if !struct_trace_enabled() {
        return;
    }
    let counts = hir_trace_counts(nodes);
    struct_debug!(
        "{prefix} nodes={} stmts={} ifs={} gotos={} labels={} breaks={} continues={} empty_ifs={}",
        counts.nodes,
        counts.stmts,
        counts.ifs,
        counts.gotos,
        counts.labels,
        counts.breaks,
        counts.continues,
        counts.empty_ifs
    );
    if struct_trace_verbose_enabled() {
        for (idx, node) in nodes.iter().take(8).enumerate() {
            struct_trace!("{prefix} top[{idx}] kind={}", hir_node_kind(node));
        }
    }
}

pub(super) fn trace_block_edges(func: &SsaFunction, bid: BlockId, prefix: &str) {
    if !struct_trace_verbose_enabled() {
        return;
    }
    let edges = func.cfg.edges_from(bid);
    struct_trace!("{prefix} block={bid:?} edges={edges:?}");
    if let Some((kind, target)) = concrete_terminator_edge(func, bid, &edges)
        && !edges
            .iter()
            .any(|(edge_target, edge_kind)| *edge_kind == kind && *edge_target == target)
    {
        struct_trace!(
            "{prefix} block={bid:?} terminator_target kind={kind:?} ir_target={target:?}"
        );
    }
}

pub(super) fn trace_hir_top(stage: &str, nodes: &[HirNode]) {
    if !struct_trace_enabled() {
        return;
    }
    struct_debug!("hir stage={stage} nodes={}", nodes.len());
    let start = nodes.len().saturating_sub(12);
    for (idx, node) in nodes.iter().enumerate().skip(start) {
        struct_debug!("hir stage={stage} idx={idx} kind={}", hir_node_kind(node));
    }
    for (idx, node) in nodes.iter().enumerate() {
        if matches!(node, HirNode::Return(_)) {
            struct_debug!("hir stage={stage} return_idx={idx}");
        }
    }
}

pub(super) fn hir_node_kind(node: &HirNode) -> &'static str {
    match node {
        HirNode::Statement(_) => "stmt",
        HirNode::Block(_) => "block",
        HirNode::If { .. } => "if",
        HirNode::IfCmp { .. } => "ifcmp",
        HirNode::While { .. } => "while",
        HirNode::DoWhile { .. } => "dowhile",
        HirNode::For { .. } => "for",
        HirNode::Switch { .. } => "switch",
        HirNode::Return(_) => "return",
        HirNode::Goto(_) => "goto",
        HirNode::Label(_) => "label",
        HirNode::Ternary { .. } => "ternary",
        HirNode::GuardedIf { .. } => "guarded-if",
        HirNode::GuardedTernary { .. } => "guarded-ternary",
        HirNode::CselTernary { .. } => "csel-ternary",
        HirNode::TailCall { .. } => "tail-call",
        HirNode::Continue => "continue",
        HirNode::Break => "break",
        HirNode::TryCatch { .. } => "try-catch",
        HirNode::TryFinally { .. } => "try-finally",
        HirNode::Commented { .. } => "commented",
        HirNode::ObjcBlock { .. } => "objc-block",
        HirNode::Asm { .. } => "asm",
    }
}
