//! Post-structuring pass: collapse if-else-if chains into switch statements.
//!
//! Walks the HIR looking for chains of `If { cond, then_body, else_body: Some([If ...]) }`
//! where every condition is `IntEqual(expr, Const)` against the same expression varnode.
//! Chains of 3+ cases are rewritten as `HirNode::Switch`.
//!
//! Modeled after RetDec's `if_to_switch_optimizer.cpp`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode, SwitchCase};

/// Minimum number of `IntEqual(expr, const)` cases required to justify
/// converting an if-chain to a switch. Two cases is just if/else — not
/// worth converting.
const MIN_CASES: usize = 3;

/// Convert eligible if-else-if chains to switch statements.
///
/// Must run after `ternary_recovery` and before C emission.
pub fn if_chain_to_switch(func: &mut HirFunction, ssa: &SsaFunction) {
    let def_map = build_def_map(ssa);
    func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);
}

// ---------------------------------------------------------------------------
// Defining-instruction map
// ---------------------------------------------------------------------------

/// Maps each `SsaVarnode` (defined as an output) back to its defining `IrInsn`.
fn build_def_map(ssa: &SsaFunction) -> BTreeMap<SsaVarnode, IrInsn> {
    let mut map = BTreeMap::new();
    for (&(bid, idx, ref slot), sv) in &ssa.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        if let Some(block) = ssa.function.blocks.get(&bid) {
            if let Some(insn) = block.insns.get(idx) {
                map.insert(*sv, insn.clone());
            }
        }
    }
    map
}

// ---------------------------------------------------------------------------
// Condition analysis
// ---------------------------------------------------------------------------

/// Extracted info from a single `IntEqual(expr, const)` condition.
struct EqualityCondition {
    /// The non-constant operand being compared.
    expr: SsaVarnode,
    /// The constant value being compared against.
    value: u64,
}

/// Check whether the given `SsaVarnode` is defined by `IntEqual(expr, const)`
/// and that `expr` is safe for switch conversion (no side effects).
fn extract_equality(
    cond: &SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<EqualityCondition> {
    let insn = def_map.get(cond)?;

    if insn.op != IrOp::IntEqual {
        return None;
    }

    if insn.inputs.len() != 2 {
        return None;
    }

    let (lhs, rhs) = (insn.inputs[0], insn.inputs[1]);

    // Determine which operand is the constant and which is the expression.
    let (expr_vn, const_vn) = if rhs.space == SpaceId::Const {
        (lhs, rhs)
    } else if lhs.space == SpaceId::Const {
        (rhs, lhs)
    } else {
        // Neither operand is a constant — can't form a switch case.
        return None;
    };

    // Reject RAM-space operands (implies load/deref — side-effecting).
    if expr_vn.space == SpaceId::Ram {
        return None;
    }

    // Resolve expr_vn to an SsaVarnode via base-Varnode match in the def_map.
    // We compare `base` fields across branches (same physical register
    // regardless of SSA version).
    let expr_sv = find_input_sv_for_varnode(&expr_vn, def_map)?;

    // Reject expressions defined by side-effecting ops.
    if let Some(expr_insn) = def_map.get(&expr_sv) {
        match expr_insn.op {
            IrOp::Call | IrOp::Callind | IrOp::Callother | IrOp::Load => return None,
            _ => {}
        }
    }

    Some(EqualityCondition {
        expr: expr_sv,
        value: const_vn.offset,
    })
}

fn find_input_sv_for_varnode(
    expr_vn: &Varnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<SsaVarnode> {
    def_map
        .keys()
        .filter(|sv| sv.base == *expr_vn)
        .max_by_key(|sv| sv.version)
        .copied()
}

// ---------------------------------------------------------------------------
// Range-test extraction (t246)
// ---------------------------------------------------------------------------

/// Extracted info from a range-test condition: `(x - low) <= (high - low)`.
///
/// GCC's case ranges (`case 1 ... 10:`) compile to:
/// ```text
/// if ((unsigned)(x - low) <= (high - low)) { body; }
/// ```
/// The unsigned comparison catches both bounds in one test.
struct RangeCondition {
    /// The variable being range-tested.
    expr: SsaVarnode,
    /// Inclusive lower bound.
    low: u64,
    /// Inclusive upper bound.
    high: u64,
}

/// A single arm of a range-test chain: range + body.
struct RangeArm {
    low: u64,
    high: u64,
    body: Vec<HirNode>,
}

/// Result of analyzing a range-test chain.
struct RangeChain {
    /// The common expression being range-tested.
    switch_expr: SsaVarnode,
    /// The range case arms.
    arms: Vec<RangeArm>,
    /// Optional default (final else) body.
    default: Option<Vec<HirNode>>,
}

/// Minimum number of range arms to justify a switch.
const MIN_RANGE_ARMS: usize = 1;

/// Try to extract a range condition from a condition varnode.
///
/// Pattern: `IntLessequal(IntSub(x, low), high - low)` (unsigned range check).
/// Also handles `IntLess` as `(x - low) < (high - low + 1)`.
fn extract_range_condition(
    cond: &SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<RangeCondition> {
    let insn = def_map.get(cond)?;

    // Must be IntLessequal (unsigned) or IntLess (unsigned).
    let is_lessequal = insn.op == IrOp::IntLessequal;
    let is_less = insn.op == IrOp::IntLess;
    if !is_lessequal && !is_less {
        return None;
    }

    if insn.inputs.len() != 2 {
        return None;
    }

    let (lhs, rhs) = (insn.inputs[0], insn.inputs[1]);

    // rhs must be a constant (the range width: high - low for <=, high - low + 1 for <).
    if rhs.space != SpaceId::Const {
        return None;
    }
    let range_width = rhs.offset;

    // lhs must be defined by IntSub(x, low).
    let lhs_sv = find_input_sv_for_varnode(&lhs, def_map)?;
    let sub_insn = def_map.get(&lhs_sv)?;
    if sub_insn.op != IrOp::IntSub {
        return None;
    }
    if sub_insn.inputs.len() != 2 {
        return None;
    }

    let (sub_lhs, sub_rhs) = (sub_insn.inputs[0], sub_insn.inputs[1]);

    // sub_rhs must be a constant (the low bound).
    if sub_rhs.space != SpaceId::Const {
        return None;
    }
    let low = sub_rhs.offset;

    // sub_lhs is the expression being tested.
    if sub_lhs.space == SpaceId::Ram {
        return None; // reject memory loads
    }
    let expr_sv = find_input_sv_for_varnode(&sub_lhs, def_map)?;

    // Reject side-effecting definitions.
    if let Some(expr_insn) = def_map.get(&expr_sv) {
        match expr_insn.op {
            IrOp::Call | IrOp::Callind | IrOp::Callother | IrOp::Load => return None,
            _ => {}
        }
    }

    let high = if is_lessequal {
        low.wrapping_add(range_width)
    } else {
        // IntLess: (x - low) < width means x in [low, low + width - 1]
        low.wrapping_add(range_width.wrapping_sub(1))
    };

    Some(RangeCondition {
        expr: expr_sv,
        low,
        high,
    })
}

/// Try to extract an if-else-if chain of range tests on the same variable.
///
/// Returns `None` if the node isn't an eligible range-test chain.
fn try_extract_range_chain(
    node: &HirNode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<RangeChain> {
    let mut arms = Vec::new();
    let mut current = node;
    let mut switch_base: Option<Varnode> = None;
    let mut switch_expr: Option<SsaVarnode> = None;

    loop {
        match current {
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                let range = extract_range_condition(cond, def_map)?;

                // Check that the expression base varnode is the same across
                // all branches.
                match switch_base {
                    None => {
                        switch_base = Some(range.expr.base);
                        switch_expr = Some(range.expr);
                    }
                    Some(base) if base == range.expr.base => {}
                    Some(_) => return None, // Different variable
                }

                arms.push(RangeArm {
                    low: range.low,
                    high: range.high,
                    body: then_body.clone(),
                });

                match else_body {
                    Some(else_nodes) if else_nodes.len() == 1 => {
                        if matches!(&else_nodes[0], HirNode::If { .. }) {
                            current = &else_nodes[0];
                            continue;
                        }
                        // Single non-If node: this is the default case.
                        if arms.len() < MIN_RANGE_ARMS {
                            return None;
                        }
                        return Some(RangeChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    Some(else_nodes) => {
                        if arms.len() < MIN_RANGE_ARMS {
                            return None;
                        }
                        return Some(RangeChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    None => {
                        if arms.len() < MIN_RANGE_ARMS {
                            return None;
                        }
                        return Some(RangeChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: None,
                        });
                    }
                }
            }
            _ => return None,
        }
    }
}

/// Convert a range-test if-chain to a switch with Range cases.
pub fn range_chain_to_switch(func: &mut HirFunction, ssa: &SsaFunction) {
    let def_map = build_def_map(ssa);
    func.body = rewrite_range_nodes(std::mem::take(&mut func.body), &def_map);
}

fn rewrite_range_nodes(
    nodes: Vec<HirNode>,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Vec<HirNode> {
    nodes
        .into_iter()
        .map(|n| rewrite_range_node(n, def_map))
        .collect()
}

fn rewrite_range_node(node: HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> HirNode {
    // Try range-chain extraction.
    if let Some(chain) = try_extract_range_chain(&node, def_map) {
        let cases = chain
            .arms
            .into_iter()
            .map(|arm| {
                (
                    SwitchCase::Range(arm.low, arm.high),
                    rewrite_range_nodes(arm.body, def_map),
                    false,
                )
            })
            .collect();

        let default = chain.default.map(|d| rewrite_range_nodes(d, def_map));

        return HirNode::Switch {
            cond: chain.switch_expr,
            cases,
            default,
            jumptable_addr: None,
            jumptable_cases: None,
        };
    }

    // Otherwise, recurse into children.
    match node {
        HirNode::Block(children) => HirNode::Block(rewrite_range_nodes(children, def_map)),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: rewrite_range_nodes(then_body, def_map),
            else_body: else_body.map(|e| rewrite_range_nodes(e, def_map)),
        },

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: rewrite_range_nodes(body, def_map),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: rewrite_range_nodes(body, def_map),
            cond,
        },

        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, rewrite_range_nodes(body, def_map), ft))
                .collect(),
            default: default.map(|d| rewrite_range_nodes(d, def_map)),
            jumptable_addr,
            jumptable_cases,
        },

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: rewrite_range_nodes(body, def_map),
        },

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: rewrite_range_nodes(try_body, def_map),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, rewrite_range_nodes(body, def_map)))
                .collect(),
        },

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: rewrite_range_nodes(try_body, def_map),
            finally_body: rewrite_range_nodes(finally_body, def_map),
        },

        other => other,
    }
}

// ---------------------------------------------------------------------------
// If-chain extraction
// ---------------------------------------------------------------------------

/// A single arm of an if-chain: condition value + body.
struct ChainArm {
    value: u64,
    body: Vec<HirNode>,
}

/// Result of analyzing an if-chain.
struct IfChain {
    /// The common expression being compared in all conditions.
    switch_expr: SsaVarnode,
    /// The case arms (value + body).
    arms: Vec<ChainArm>,
    /// Optional default (final else) body.
    default: Option<Vec<HirNode>>,
}

/// Try to extract an if-else-if chain from a node.
///
/// Returns `None` if the node isn't an eligible if-chain.
fn try_extract_chain(node: &HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Option<IfChain> {
    let mut arms = Vec::new();
    let mut current = node;
    let mut switch_base: Option<Varnode> = None;
    let mut switch_expr: Option<SsaVarnode> = None;

    loop {
        match current {
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                let eq = extract_equality(cond, def_map)?;

                // Check that the expression base varnode is the same across
                // all branches.
                match switch_base {
                    None => {
                        switch_base = Some(eq.expr.base);
                        switch_expr = Some(eq.expr);
                    }
                    Some(base) if base == eq.expr.base => {}
                    Some(_) => return None, // Different variable
                }

                arms.push(ChainArm {
                    value: eq.value,
                    body: then_body.clone(),
                });

                match else_body {
                    Some(else_nodes) if else_nodes.len() == 1 => {
                        // Else body is a single node — check if it's another If.
                        if matches!(&else_nodes[0], HirNode::If { .. }) {
                            current = &else_nodes[0];
                            continue;
                        }
                        // Single non-If node: this is the default case.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        // `?` over `unwrap()`: malformed AST → `None` not panic.
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    Some(else_nodes) => {
                        // Multi-node else body: this is the default case.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    None => {
                        // No else body — end of chain.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: None,
                        });
                    }
                }
            }
            _ => return None,
        }
    }
}

// ---------------------------------------------------------------------------
// Binary-search tree collapse
// ---------------------------------------------------------------------------

/// Information about a comparison used as a bisection predicate.
enum BisectCmp {
    /// `x < pivot` — values below pivot go left.
    LessThan { expr_base: Varnode, _pivot: u64 },
}

/// Attempt to extract a bisection comparison from a condition varnode.
///
/// Recognises `IntLess(expr, const)` and `IntSless(expr, const)` as "less-than
/// pivot" patterns.  The complementary `>=` branch is the else side.
fn extract_bisect_cmp(
    cond: &SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<BisectCmp> {
    let insn = def_map.get(cond)?;

    match insn.op {
        IrOp::IntLess | IrOp::IntSless => {}
        _ => return None,
    }

    if insn.inputs.len() != 2 {
        return None;
    }

    let (lhs, rhs) = (insn.inputs[0], insn.inputs[1]);

    // Pattern: `lhs < rhs` where rhs is the constant pivot.
    if rhs.space == SpaceId::Const {
        Some(BisectCmp::LessThan {
            expr_base: lhs,
            _pivot: rhs.offset,
        })
    } else {
        None
    }
}

/// A leaf case discovered in a binary-search tree.
struct BstLeaf {
    value: u64,
    body: Vec<HirNode>,
}

/// Recursively walk a binary-search tree and collect all leaf `==` comparisons.
///
/// A "bisection node" is an `If` whose condition is `IntLess`/`IntSless` on
/// `target_base`, with then/else branches each being either:
///   - another bisection node (recurse), or
///   - a leaf equality test (`IntEqual(target_base, const)` → case body), or
///   - a nested if-else chain of equality tests (flat chain of leaves).
fn collect_bst_leaves(
    node: &HirNode,
    target_base: &Varnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
    leaves: &mut Vec<BstLeaf>,
) -> bool {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            // Case 1: This node is a bisection node (IntLess/IntSless).
            if let Some(BisectCmp::LessThan { expr_base, .. }) = extract_bisect_cmp(cond, def_map) {
                if expr_base != *target_base {
                    return false;
                }
                // Recurse into then-branch.
                let then_ok = collect_bst_leaves_from_body(then_body, target_base, def_map, leaves);
                if !then_ok {
                    return false;
                }
                // Recurse into else-branch.
                match else_body {
                    Some(else_nodes) => {
                        collect_bst_leaves_from_body(else_nodes, target_base, def_map, leaves)
                    }
                    None => true,
                }
            }
            // Case 2: This node is a leaf equality test.
            else if let Some(eq) = extract_equality(cond, def_map) {
                if eq.expr.base != *target_base {
                    return false;
                }
                leaves.push(BstLeaf {
                    value: eq.value,
                    body: then_body.clone(),
                });
                // The else-branch might contain more equality tests (flat chain
                // within a bisection subtree).
                if let Some(else_nodes) = else_body {
                    collect_bst_leaves_from_body(else_nodes, target_base, def_map, leaves)
                } else {
                    true
                }
            } else {
                false
            }
        }
        _ => false,
    }
}

/// Helper: process a list of nodes as a BST subtree. Expects exactly one
/// `If` node (typical compiler output). If the body has multiple nodes we
/// can't interpret it as a BST level.
fn collect_bst_leaves_from_body(
    body: &[HirNode],
    target_base: &Varnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
    leaves: &mut Vec<BstLeaf>,
) -> bool {
    if body.len() == 1 {
        collect_bst_leaves(&body[0], target_base, def_map, leaves)
    } else {
        // Multiple nodes in a branch — might be the actual case body rather
        // than another level of the BST.  We can't parse this as a tree.
        false
    }
}

/// Attempt to collapse a binary-search if-tree into a single `Switch`.
///
/// The top-level node must be a bisection (`IntLess`/`IntSless`) node.
/// If the tree yields ≥ 3 leaf equality cases, we emit a `Switch`.
pub fn try_collapse_binary_search_tree(
    node: &HirNode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<HirNode> {
    // The root must be an If with a bisection condition.
    let HirNode::If { cond, .. } = node else {
        return None;
    };
    let bisect = extract_bisect_cmp(cond, def_map)?;
    let BisectCmp::LessThan { expr_base, .. } = bisect;

    let mut leaves = Vec::new();
    if !collect_bst_leaves(node, &expr_base, def_map, &mut leaves) {
        return None;
    }

    if leaves.len() < MIN_CASES {
        return None;
    }

    // Build the switch expression SsaVarnode — find the SSA version for the
    // base varnode.
    let switch_expr = find_input_sv_for_varnode(&expr_base, def_map)?;

    // Sort cases by value for clean output.
    leaves.sort_by_key(|l| l.value);

    let cases = leaves
        .into_iter()
        .map(|leaf| (SwitchCase::Value(leaf.value), leaf.body, false))
        .collect();

    Some(HirNode::Switch {
        cond: switch_expr,
        cases,
        default: None,
        jumptable_addr: None,
        jumptable_cases: None,
    })
}

// ---------------------------------------------------------------------------
// HIR rewriting
// ---------------------------------------------------------------------------

fn rewrite_nodes(nodes: Vec<HirNode>, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Vec<HirNode> {
    nodes
        .into_iter()
        .map(|n| rewrite_node(n, def_map))
        .collect()
}

fn rewrite_node(node: HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> HirNode {
    // Try binary-search tree collapse first (higher priority — it's a
    // superset pattern that would otherwise be missed by the flat chain check).
    if let Some(switch) = try_collapse_binary_search_tree(&node, def_map) {
        return match switch {
            HirNode::Switch {
                cond,
                cases,
                default,
                jumptable_addr,
                jumptable_cases,
            } => HirNode::Switch {
                cond,
                cases: cases
                    .into_iter()
                    .map(|(c, body, ft)| (c, rewrite_nodes(body, def_map), ft))
                    .collect(),
                default: default.map(|d| rewrite_nodes(d, def_map)),
                jumptable_addr,
                jumptable_cases,
            },
            other => other,
        };
    }

    // Then, try to convert this node if it's a flat if-chain.
    if let Some(chain) = try_extract_chain(&node, def_map) {
        let cases = chain
            .arms
            .into_iter()
            .map(|arm| {
                (
                    SwitchCase::Value(arm.value),
                    rewrite_nodes(arm.body, def_map),
                    false,
                )
            })
            .collect();

        let default = chain.default.map(|d| rewrite_nodes(d, def_map));

        return HirNode::Switch {
            cond: chain.switch_expr,
            cases,
            default,
            jumptable_addr: None,
            jumptable_cases: None,
        };
    }

    // Otherwise, recurse into children.
    match node {
        HirNode::Block(children) => HirNode::Block(rewrite_nodes(children, def_map)),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: rewrite_nodes(then_body, def_map),
            else_body: else_body.map(|e| rewrite_nodes(e, def_map)),
        },

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: rewrite_nodes(body, def_map),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: rewrite_nodes(body, def_map),
            cond,
        },

        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, rewrite_nodes(body, def_map), ft))
                .collect(),
            default: default.map(|d| rewrite_nodes(d, def_map)),
            jumptable_addr,
            jumptable_cases,
        },

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: rewrite_nodes(body, def_map),
        },

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: rewrite_nodes(try_body, def_map),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, rewrite_nodes(body, def_map)))
                .collect(),
        },

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: rewrite_nodes(try_body, def_map),
            finally_body: rewrite_nodes(finally_body, def_map),
        },

        other => other,
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirFunction, HirNode, SwitchCase};

    // -- Helpers --

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version,
        }
    }

    fn make_hir(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
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
        }
    }

    /// Build a minimal def_map that maps condition SsaVarnodes to IntEqual
    /// instructions comparing a given expression varnode against a constant.
    fn make_def_map(entries: Vec<(SsaVarnode, Varnode, u64)>) -> BTreeMap<SsaVarnode, IrInsn> {
        let mut map = BTreeMap::new();
        for (cond_sv, expr_vn, const_val) in entries {
            // The IntEqual instruction: output is the cond_sv's base, inputs
            // are [expr_vn, const_val].
            let insn = IrInsn::with_output(
                IrOp::IntEqual,
                cond_sv.base,
                smallvec![expr_vn, Varnode::constant(const_val, expr_vn.size)],
                0x1000,
            );
            map.insert(cond_sv, insn);

            // Also ensure the expression varnode has a def_map entry (e.g.,
            // defined by a Copy, so it's not a call/load).
            let expr_sv = SsaVarnode {
                base: expr_vn,
                version: 0,
            };
            map.entry(expr_sv).or_insert_with(|| {
                IrInsn::with_output(
                    IrOp::Copy,
                    expr_vn,
                    smallvec![Varnode::reg(100, expr_vn.size)],
                    0x1000,
                )
            });
        }
        map
    }

    fn stmt(op: IrOp, output: Varnode, addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            op,
            output,
            smallvec![Varnode::constant(0, 4)],
            addr,
        ))
    }

    // -- Tests --

    #[test]
    fn test_if_chain_3_cases_to_switch() {
        // if (x == 1) { A } else if (x == 2) { B } else if (x == 3) { C }
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1); // IntEqual(x, 1)
        let cond2 = sv(256, 1, 2); // IntEqual(x, 2)
        let cond3 = sv(256, 1, 3); // IntEqual(x, 3)

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b.clone(),
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c.clone(),
                    else_body: None,
                }]),
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2), (cond3, x, 3)]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                // The cond should have the same base as x.
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 3);
                assert_eq!(cases[0].0, SwitchCase::Value(1));
                assert_eq!(cases[1].0, SwitchCase::Value(2));
                assert_eq!(cases[2].0, SwitchCase::Value(3));
                assert!(default.is_none());
            }
            other => panic!("expected Switch, got {other:?}"),
        }
    }

    #[test]
    fn test_if_chain_different_vars_no_convert() {
        // if (x == 1) { A } else if (y == 2) { B } else if (x == 3) { C }
        // Different variables in conditions → no conversion.
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4); // Different register
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);
        let cond3 = sv(256, 1, 3);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2020)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c,
                    else_body: None,
                }]),
            }]),
        };

        let def_map = make_def_map(vec![
            (cond1, x, 1),
            (cond2, y, 2), // y, not x
            (cond3, x, 3),
        ]);

        let mut func = make_hir(vec![if_chain.clone()]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "different variables should not convert, got {:?}",
            func.body[0],
        );
    }

    #[test]
    fn test_if_chain_2_cases_no_convert() {
        // if (x == 1) { A } else if (x == 2) { B }
        // Only 2 cases — below the threshold of 3.
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: None,
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2)]);

        let mut func = make_hir(vec![if_chain.clone()]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "2 cases should not convert, got {:?}",
            func.body[0],
        );
    }

    #[test]
    fn test_if_chain_with_else_becomes_default() {
        // if (x == 1) { A } else if (x == 2) { B } else if (x == 3) { C } else { D }
        // The trailing else becomes the default case.
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);
        let cond3 = sv(256, 1, 3);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)];
        let body_d = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2030)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b.clone(),
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c.clone(),
                    else_body: Some(body_d.clone()),
                }]),
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2), (cond3, x, 3)]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 3);
                assert_eq!(cases[0].0, SwitchCase::Value(1));
                assert_eq!(cases[1].0, SwitchCase::Value(2));
                assert_eq!(cases[2].0, SwitchCase::Value(3));
                assert!(default.is_some(), "trailing else should become default");
                let default_body = default.as_ref().unwrap();
                assert_eq!(default_body.len(), 1);
            }
            other => panic!("expected Switch, got {other:?}"),
        }
    }

    #[test]
    fn malformed_if_chain_with_empty_def_map_does_not_panic() {
        // Simulates a C++ exception edge: HIR has If nodes whose conditions
        // reference SsaVarnodes that aren't in the SSA def_map. The pass must
        // gracefully decline the rewrite instead of panicking on
        // `switch_expr.unwrap()`.
        let cond = sv(256, 1, 1);
        let body = vec![HirNode::If {
            cond,
            then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)],
            else_body: Some(vec![HirNode::If {
                cond,
                then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)],
                else_body: Some(vec![HirNode::If {
                    cond,
                    then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)],
                    else_body: None,
                }]),
            }]),
        }];

        let mut func = make_hir(body);
        let empty_map: BTreeMap<SsaVarnode, IrInsn> = BTreeMap::new();
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &empty_map);

        match &func.body[0] {
            HirNode::Switch { .. } => {
                panic!("should not produce Switch when def_map can't resolve the expression")
            }
            HirNode::If { .. } => {}
            other => panic!("expected If preserved, got {other:?}"),
        }
    }

    /// 4-case if-else chain on the same variable -> emits switch with 4 cases.
    #[test]
    fn test_if_chain_4_cases_to_switch() {
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);
        let cond3 = sv(256, 1, 3);
        let cond4 = sv(256, 1, 4);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)];
        let body_d = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2030)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b.clone(),
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c.clone(),
                    else_body: Some(vec![HirNode::If {
                        cond: cond4,
                        then_body: body_d.clone(),
                        else_body: None,
                    }]),
                }]),
            }]),
        };

        let def_map = make_def_map(vec![
            (cond1, x, 1),
            (cond2, x, 2),
            (cond3, x, 3),
            (cond4, x, 4),
        ]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 4);
                assert_eq!(cases[0].0, SwitchCase::Value(1));
                assert_eq!(cases[1].0, SwitchCase::Value(2));
                assert_eq!(cases[2].0, SwitchCase::Value(3));
                assert_eq!(cases[3].0, SwitchCase::Value(4));
                assert!(default.is_none());
            }
            other => panic!("expected Switch with 4 cases, got {other:?}"),
        }
    }

    /// 2-case if-else chain (below threshold) -> stays as if-else, not switch.
    #[test]
    fn test_if_chain_2_cases_stays_as_if_else() {
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: None,
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2)]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "2-case chain should stay as if-else, got {:?}",
            func.body[0],
        );
    }

    // -- Binary-search tree tests --

    /// Build a def_map entry for a bisection comparison (IntLess).
    fn make_bisect_def_map_entry(
        cond_sv: SsaVarnode,
        expr_vn: Varnode,
        pivot: u64,
    ) -> (SsaVarnode, IrInsn) {
        let insn = IrInsn::with_output(
            IrOp::IntLess,
            cond_sv.base,
            smallvec![expr_vn, Varnode::constant(pivot, expr_vn.size)],
            0x1000,
        );
        (cond_sv, insn)
    }

    /// 4-case binary-search tree collapses to a Switch.
    ///
    /// Tree shape:
    /// ```text
    ///        if (x < 25)
    ///       /           \
    ///  if (x < 15)    if (x < 35)
    ///   /     \        /       \
    /// x==10  x==20   x==30    x==40
    /// ```
    #[test]
    fn test_bst_4_cases_to_switch() {
        let x = Varnode::reg(0, 4);

        // Bisection conditions
        let bsect_top = sv(200, 1, 10); // x < 25
        let bsect_left = sv(200, 1, 11); // x < 15
        let bsect_right = sv(200, 1, 12); // x < 35

        // Leaf equality conditions
        let eq10 = sv(256, 1, 20); // x == 10
        let eq20 = sv(256, 1, 21); // x == 20
        let eq30 = sv(256, 1, 22); // x == 30
        let eq40 = sv(256, 1, 23); // x == 40

        // Bodies for each case
        let body_10 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3000)];
        let body_20 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3010)];
        let body_30 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3020)];
        let body_40 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3030)];

        // Left subtree: if (x < 15) { if (x == 10) body_10 } else { if (x == 20) body_20 }
        let left_subtree = HirNode::If {
            cond: bsect_left,
            then_body: vec![HirNode::If {
                cond: eq10,
                then_body: body_10.clone(),
                else_body: None,
            }],
            else_body: Some(vec![HirNode::If {
                cond: eq20,
                then_body: body_20.clone(),
                else_body: None,
            }]),
        };

        // Right subtree: if (x < 35) { if (x == 30) body_30 } else { if (x == 40) body_40 }
        let right_subtree = HirNode::If {
            cond: bsect_right,
            then_body: vec![HirNode::If {
                cond: eq30,
                then_body: body_30.clone(),
                else_body: None,
            }],
            else_body: Some(vec![HirNode::If {
                cond: eq40,
                then_body: body_40.clone(),
                else_body: None,
            }]),
        };

        // Top: if (x < 25) { left_subtree } else { right_subtree }
        let tree = HirNode::If {
            cond: bsect_top,
            then_body: vec![left_subtree],
            else_body: Some(vec![right_subtree]),
        };

        // Build the def_map
        let mut def_map = make_def_map(vec![
            (eq10, x, 10),
            (eq20, x, 20),
            (eq30, x, 30),
            (eq40, x, 40),
        ]);
        // Add bisection entries
        let (sv_top, insn_top) = make_bisect_def_map_entry(bsect_top, x, 25);
        def_map.insert(sv_top, insn_top);
        let (sv_left, insn_left) = make_bisect_def_map_entry(bsect_left, x, 15);
        def_map.insert(sv_left, insn_left);
        let (sv_right, insn_right) = make_bisect_def_map_entry(bsect_right, x, 35);
        def_map.insert(sv_right, insn_right);

        let mut func = make_hir(vec![tree]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 4);
                // Cases should be sorted by value.
                assert_eq!(cases[0].0, SwitchCase::Value(10));
                assert_eq!(cases[1].0, SwitchCase::Value(20));
                assert_eq!(cases[2].0, SwitchCase::Value(30));
                assert_eq!(cases[3].0, SwitchCase::Value(40));
                assert!(default.is_none());
            }
            other => panic!("expected Switch from BST collapse, got {other:?}"),
        }
    }

    /// 2-level tree with only 2 leaf cases stays as if-else (below MIN_CASES).
    ///
    /// Tree shape:
    /// ```text
    ///     if (x < 50)
    ///      /       \
    ///   x==10    x==90
    /// ```
    #[test]
    fn test_bst_2_cases_stays_if_else() {
        let x = Varnode::reg(0, 4);

        // Bisection at top
        let bsect_top = sv(200, 1, 10); // x < 50

        // Only 2 leaf equality conditions
        let eq10 = sv(256, 1, 20); // x == 10
        let eq90 = sv(256, 1, 21); // x == 90

        let body_10 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3000)];
        let body_90 = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x3010)];

        let tree = HirNode::If {
            cond: bsect_top,
            then_body: vec![HirNode::If {
                cond: eq10,
                then_body: body_10,
                else_body: None,
            }],
            else_body: Some(vec![HirNode::If {
                cond: eq90,
                then_body: body_90,
                else_body: None,
            }]),
        };

        // Build def_map
        let mut def_map = make_def_map(vec![(eq10, x, 10), (eq90, x, 90)]);
        let (sv_top, insn_top) = make_bisect_def_map_entry(bsect_top, x, 50);
        def_map.insert(sv_top, insn_top);

        let mut func = make_hir(vec![tree]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "BST with only 2 leaves should stay as if-else, got {:?}",
            func.body[0],
        );
    }

    // -- Range-test (t246) tests --

    /// Helper: build a def_map for range-test conditions.
    ///
    /// Each entry is (cond_sv, expr_varnode, low, high) which produces:
    /// - An IntSub instruction: sub_output = IntSub(expr_varnode, low)
    /// - An IntLessequal instruction: cond_sv = IntLessequal(sub_output, high - low)
    fn make_range_def_map(
        entries: Vec<(SsaVarnode, Varnode, u64, u64)>,
    ) -> BTreeMap<SsaVarnode, IrInsn> {
        let mut map = BTreeMap::new();
        for (i, (cond_sv, expr_vn, low, high)) in entries.iter().enumerate() {
            // The IntSub output varnode (unique space, distinct per entry).
            let sub_output = Varnode::unique(0x200 + (i as u64) * 8, expr_vn.size);
            let sub_sv = SsaVarnode {
                base: sub_output,
                version: 0,
            };

            // IntSub(expr_vn, low) → sub_output
            let sub_insn = IrInsn::with_output(
                IrOp::IntSub,
                sub_output,
                smallvec![*expr_vn, Varnode::constant(*low, expr_vn.size)],
                0x1000 + (i as u64) * 0x10,
            );
            map.insert(sub_sv, sub_insn);

            // IntLessequal(sub_output, high - low) → cond_sv
            let cmp_insn = IrInsn::with_output(
                IrOp::IntLessequal,
                cond_sv.base,
                smallvec![sub_output, Varnode::constant(high - low, expr_vn.size)],
                0x1004 + (i as u64) * 0x10,
            );
            map.insert(*cond_sv, cmp_insn);

            // Also define the expression varnode itself (non-side-effecting).
            let expr_sv = SsaVarnode {
                base: *expr_vn,
                version: 0,
            };
            map.entry(expr_sv).or_insert_with(|| {
                IrInsn::with_output(
                    IrOp::Copy,
                    *expr_vn,
                    smallvec![Varnode::reg(100, expr_vn.size)],
                    0x1000,
                )
            });
        }
        map
    }

    /// Single range-test: `if ((unsigned)(x - 1) <= 9)` → `case 1 ... 10:`
    #[test]
    fn test_single_range_test_to_case_range() {
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1); // IntLessequal(IntSub(x, 1), 9)

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];

        let if_node = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: None,
        };

        let def_map = make_range_def_map(vec![(cond1, x, 1, 10)]);

        let result = rewrite_range_node(if_node, &def_map);
        match &result {
            HirNode::Switch { cases, default, .. } => {
                assert_eq!(cases.len(), 1);
                assert_eq!(
                    cases[0].0,
                    SwitchCase::Range(1, 10),
                    "single range test should produce case 1 ... 10"
                );
                assert!(default.is_none());
            }
            other => panic!("expected Switch, got {other:?}"),
        }
    }

    /// Two range-tests on the same variable:
    /// `if ((unsigned)(x - 1) <= 9) { body1 } else if ((unsigned)(x - 20) <= 10) { body2 }`
    /// → switch with two range arms: `case 1 ... 10:` and `case 20 ... 30:`.
    #[test]
    fn test_two_range_tests_merged_switch() {
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1); // range [1, 10]
        let cond2 = sv(256, 1, 2); // range [20, 30]

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: None,
            }]),
        };

        let def_map = make_range_def_map(vec![(cond1, x, 1, 10), (cond2, x, 20, 30)]);

        let result = rewrite_range_node(if_chain, &def_map);
        match &result {
            HirNode::Switch { cases, default, .. } => {
                assert_eq!(cases.len(), 2);
                assert_eq!(
                    cases[0].0,
                    SwitchCase::Range(1, 10),
                    "first arm should be case 1 ... 10"
                );
                assert_eq!(
                    cases[1].0,
                    SwitchCase::Range(20, 30),
                    "second arm should be case 20 ... 30"
                );
                assert!(default.is_none());
            }
            other => panic!("expected Switch with 2 range arms, got {other:?}"),
        }
    }
}
