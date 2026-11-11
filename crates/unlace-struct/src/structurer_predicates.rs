//! structurer: predicates.

use super::*;

pub(super) fn structured_predicates_resolve(
    node: &condition_refinement::StructuredNode,
    pred_cond: &BTreeMap<u32, SsaVarnode>,
) -> bool {
    used_predicates(node)
        .into_iter()
        .all(|pred| pred_cond.contains_key(&pred))
}

/// Count the `HirNode::Statement` leaves reachable in `nodes`, recursing
/// through every body-bearing HIR variant. Used by the DREAM seam's
/// statement-preservation oracle to assert the spliced region neither drops nor
/// duplicates a body statement.
pub(super) fn count_hir_statements(nodes: &[HirNode]) -> usize {
    nodes.iter().map(count_hir_statements_node).sum()
}

pub(super) fn count_hir_statements_node(node: &HirNode) -> usize {
    match node {
        HirNode::Statement(_) => 1,
        HirNode::Block(body) => count_hir_statements(body),
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => count_hir_statements(body),
        HirNode::For { body, .. } => count_hir_statements(body),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            count_hir_statements(then_body)
                + else_body.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => count_hir_statements(then_body) + count_hir_statements(else_body),
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            count_hir_statements(then_body)
                + else_body.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::Switch { cases, default, .. } => {
            let case_total: usize = cases
                .iter()
                .map(|(_, body, _)| count_hir_statements(body))
                .sum();
            case_total + default.as_deref().map(count_hir_statements).unwrap_or(0)
        }
        HirNode::Commented { inner, .. } => count_hir_statements_node(inner),
        _ => 0,
    }
}

pub(super) fn used_predicates(node: &condition_refinement::StructuredNode) -> BTreeSet<u32> {
    let mut out = BTreeSet::new();
    collect_structured_predicates(node, &mut out);
    out
}

pub(super) fn collect_structured_label_targets(
    node: &condition_refinement::StructuredNode,
    out: &mut BTreeSet<reaching_conditions::RegionNode>,
) {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Goto(region_node) | StructuredNode::Label(region_node) => {
            out.insert(*region_node);
        }
        StructuredNode::Seq(parts) => {
            for part in parts {
                collect_structured_label_targets(part, out);
            }
        }
        StructuredNode::Loop { body } | StructuredNode::Subtree(body) => {
            collect_structured_label_targets(body, out);
        }
        StructuredNode::If { then, els, .. } => {
            collect_structured_label_targets(then, out);
            if let Some(els) = els {
                collect_structured_label_targets(els, out);
            }
        }
        StructuredNode::Switch { cases, default, .. } => {
            for (_, case) in cases {
                collect_structured_label_targets(case, out);
            }
            if let Some(default) = default {
                collect_structured_label_targets(default, out);
            }
        }
        StructuredNode::Empty
        | StructuredNode::Block(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => {}
    }
}

pub(super) fn collect_structured_predicates(
    node: &condition_refinement::StructuredNode,
    out: &mut BTreeSet<u32>,
) {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Empty
        | StructuredNode::Block(_)
        | StructuredNode::Label(_)
        | StructuredNode::Goto(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => {}
        StructuredNode::Subtree(inner) => collect_structured_predicates(inner, out),
        StructuredNode::Seq(parts) => {
            for part in parts {
                collect_structured_predicates(part, out);
            }
        }
        StructuredNode::Loop { body } => collect_structured_predicates(body, out),
        StructuredNode::If { cond, then, els } => {
            collect_cond_predicates(cond, out);
            collect_structured_predicates(then, out);
            if let Some(els) = els {
                collect_structured_predicates(els, out);
            }
        }
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => {
            out.insert(*selector);
            for (_, case) in cases {
                collect_structured_predicates(case, out);
            }
            if let Some(default) = default {
                collect_structured_predicates(default, out);
            }
        }
    }
}

pub(super) fn collect_cond_predicates(cond: &Cond, out: &mut BTreeSet<u32>) {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            out.insert(*id);
        }
        Cond::NotCaseEq(inner) => collect_cond_predicates(inner, out),
        Cond::And(a, b) | Cond::Or(a, b) => {
            collect_cond_predicates(a, out);
            collect_cond_predicates(b, out);
        }
        Cond::True | Cond::False => {}
    }
}

pub(super) fn structured_predicates_defined_before_use(
    node: &condition_refinement::StructuredNode,
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
) -> bool {
    let region_blocks: BTreeSet<BlockId> = node_to_block.values().copied().collect();
    let mut emitted = BTreeSet::new();
    structured_predicates_defined_before_use_inner(
        node,
        node_to_block,
        &region_blocks,
        &mut emitted,
    )
}

pub(super) fn structured_predicates_defined_before_use_inner(
    node: &condition_refinement::StructuredNode,
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &mut BTreeSet<BlockId>,
) -> bool {
    use condition_refinement::StructuredNode;
    match node {
        StructuredNode::Empty
        | StructuredNode::Label(_)
        | StructuredNode::Goto(_)
        | StructuredNode::Continue
        | StructuredNode::Break
        | StructuredNode::Unsupported => true,
        StructuredNode::Subtree(inner) => structured_predicates_defined_before_use_inner(
            inner,
            node_to_block,
            region_blocks,
            emitted,
        ),
        StructuredNode::Block(region_node) => {
            if let Some(block) = node_to_block.get(region_node) {
                emitted.insert(*block);
            }
            true
        }
        StructuredNode::Seq(parts) => parts.iter().all(|part| {
            structured_predicates_defined_before_use_inner(
                part,
                node_to_block,
                region_blocks,
                emitted,
            )
        }),
        StructuredNode::Loop { body } => {
            let mut loop_emitted = BTreeSet::new();
            structured_predicates_defined_before_use_inner(
                body,
                node_to_block,
                region_blocks,
                &mut loop_emitted,
            )
        }
        StructuredNode::If { cond, then, els } => {
            if !cond_predicates_defined_before_use(cond, region_blocks, emitted) {
                if struct_trace_enabled()
                    && let Some(pred) = first_undefined_predicate(cond, region_blocks, emitted)
                {
                    struct_debug!(
                        "dream predicate-before-source pred=BlockId({}) emitted={emitted:?}",
                        pred.0
                    );
                }
                return false;
            }
            let mut then_emitted = emitted.clone();
            if !structured_predicates_defined_before_use_inner(
                then,
                node_to_block,
                region_blocks,
                &mut then_emitted,
            ) {
                return false;
            }
            if let Some(els) = els {
                let mut else_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    els,
                    node_to_block,
                    region_blocks,
                    &mut else_emitted,
                ) {
                    return false;
                }
            }
            true
        }
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => {
            if !predicate_source_defined_before_use(*selector, region_blocks, emitted) {
                struct_debug!(
                    "dream predicate-before-source pred=BlockId({selector}) emitted={emitted:?}"
                );
                return false;
            }
            for (_, case) in cases {
                let mut case_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    case,
                    node_to_block,
                    region_blocks,
                    &mut case_emitted,
                ) {
                    return false;
                }
            }
            if let Some(default) = default {
                let mut default_emitted = emitted.clone();
                if !structured_predicates_defined_before_use_inner(
                    default,
                    node_to_block,
                    region_blocks,
                    &mut default_emitted,
                ) {
                    return false;
                }
            }
            true
        }
    }
}

pub(super) fn cond_predicates_defined_before_use(
    cond: &Cond,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> bool {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            predicate_source_defined_before_use(*id, region_blocks, emitted)
        }
        Cond::NotCaseEq(inner) => cond_predicates_defined_before_use(inner, region_blocks, emitted),
        Cond::And(a, b) | Cond::Or(a, b) => {
            cond_predicates_defined_before_use(a, region_blocks, emitted)
                && cond_predicates_defined_before_use(b, region_blocks, emitted)
        }
        Cond::True | Cond::False => true,
    }
}

pub(super) fn predicate_source_defined_before_use(
    pred: u32,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> bool {
    let source = BlockId(pred);
    !region_blocks.contains(&source) || emitted.contains(&source)
}

pub(super) fn first_undefined_predicate(
    cond: &Cond,
    region_blocks: &BTreeSet<BlockId>,
    emitted: &BTreeSet<BlockId>,
) -> Option<BlockId> {
    match cond {
        Cond::Pred(id) | Cond::NotPred(id) | Cond::CaseEq(id, _) => {
            let source = BlockId(*id);
            (region_blocks.contains(&source) && !emitted.contains(&source)).then_some(source)
        }
        Cond::NotCaseEq(inner) => first_undefined_predicate(inner, region_blocks, emitted),
        Cond::And(a, b) | Cond::Or(a, b) => first_undefined_predicate(a, region_blocks, emitted)
            .or_else(|| first_undefined_predicate(b, region_blocks, emitted)),
        Cond::True | Cond::False => None,
    }
}

pub(super) fn dream_predicate_source_nodes(
    node_to_block: &BTreeMap<reaching_conditions::RegionNode, BlockId>,
) -> BTreeMap<u32, reaching_conditions::RegionNode> {
    node_to_block
        .iter()
        .map(|(&region_node, &block)| (block.0, region_node))
        .collect()
}
