//! Resolve `goto`s that are equivalent to a structured transfer.
//!
//! Every position in the HIR has a continuation: the point that runs next
//! when control falls off it. A point is the first real node reached after
//! skipping labels and empty blocks. Falling off a loop body reaches that
//! loop's continue point, falling off the function body reaches the function
//! end, and `break`/`continue` reach the point they jump to.
//!
//! With continuations a `goto L` is:
//! - redundant when its own continuation is the continuation of `L`;
//! - a `continue` when `L` continues the innermost enclosing loop;
//! - a `break` when `L` continues where the innermost enclosing loop or
//!   switch exits to;
//! - a copy of the code at `L` when that code is a short straight-line run
//!   of statements ending in `return`.
//!
//! Diagnostics: enable `unlace::struct::goto_resolve=debug`.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::SpaceId;

use crate::hir::{HirFunction, HirNode, LabelId};

/// Upper bound on rewrite rounds; each round only removes gotos or labels.
const MAX_ROUNDS: usize = 8;

/// Longest statement run before a `return` that a goto may copy.
const MAX_COPIED_STATEMENTS: usize = 24;

/// Rewrite gotos that have a structured equivalent and drop labels that lose
/// their last goto.
pub fn resolve_gotos(func: &mut HirFunction) {
    resolve_body(&mut func.body);
}

/// [`resolve_gotos`] over a function body.
pub(crate) fn resolve_body(body: &mut Vec<HirNode>) {
    for round in 0..MAX_ROUNDS {
        let mut analysis = Analysis::default();
        walk_list(
            body,
            Point::FunctionEnd,
            Ctx::default(),
            &mut analysis,
            None,
        );
        let rewrites = analysis.rewrites();
        tracing::debug!(
            target: "unlace::struct::goto_resolve",
            "round={round} gotos={} rewrites={}",
            analysis.gotos.len(),
            rewrites.len()
        );
        if rewrites.is_empty() {
            break;
        }
        walk_list(
            body,
            Point::FunctionEnd,
            Ctx::default(),
            &mut Analysis::default(),
            Some(&rewrites),
        );
        remove_empty_blocks(body);
        let mut used = BTreeSet::new();
        collect_goto_targets(body, &mut used);
        remove_unused_labels(body, &used);
    }
}

/// Number of `goto` statements in `nodes`.
pub(crate) fn count_gotos(nodes: &[HirNode]) -> usize {
    nodes
        .iter()
        .map(|node| {
            let own = usize::from(matches!(node.unwrap_commented(), HirNode::Goto(_)));
            let mut nested = 0;
            for_each_body(node, &mut |body| nested += count_gotos(body));
            own + nested
        })
        .sum()
}

/// A program point, identified by node visit order.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
enum Point {
    /// A node that does something when reached.
    Node(usize),
    /// The continue point of the loop node.
    LoopContinue(usize),
    FunctionEnd,
    /// A point this pass does not model, unique per occurrence so it only
    /// equals itself.
    Opaque(usize),
}

#[derive(Clone, Copy, Debug, Default)]
struct Ctx {
    innermost_loop: Option<usize>,
    /// The innermost loop or switch and the point it exits to.
    breakable_exit: Option<Point>,
    /// Inside a `try` construct, where copied code would change which
    /// handler covers it.
    in_try: bool,
}

#[derive(Debug)]
struct GotoSite {
    label: LabelId,
    fallthrough: Point,
    ctx: Ctx,
}

#[derive(Debug)]
enum Rewrite {
    Remove,
    Continue,
    Break,
    /// Replace the goto with a copy of the code it reaches.
    Copy(Vec<HirNode>),
}

#[derive(Default)]
struct Analysis {
    next_id: usize,
    /// Points that behave like another point: the entry of a `while (1)`
    /// body is that loop's continue point.
    aliases: BTreeMap<Point, Point>,
    labels: BTreeMap<LabelId, Point>,
    gotos: BTreeMap<usize, GotoSite>,
    /// Straight-line runs that end in `return`, keyed by their first node.
    return_tails: BTreeMap<Point, Vec<HirNode>>,
}

impl Analysis {
    fn fresh_id(&mut self) -> usize {
        let id = self.next_id;
        self.next_id += 1;
        id
    }

    fn canonical(&self, point: Point) -> Point {
        self.aliases.get(&point).copied().unwrap_or(point)
    }

    fn rewrites(&self) -> BTreeMap<usize, Rewrite> {
        let mut rewrites = BTreeMap::new();
        for (&id, site) in &self.gotos {
            let Some(&target) = self.labels.get(&site.label) else {
                continue;
            };
            let target = self.canonical(target);
            let rewrite = if target == self.canonical(site.fallthrough) {
                Rewrite::Remove
            } else if site.ctx.innermost_loop.map(Point::LoopContinue) == Some(target) {
                Rewrite::Continue
            } else if site.ctx.breakable_exit.map(|exit| self.canonical(exit)) == Some(target) {
                Rewrite::Break
            } else if let Some(tail) = self.return_tails.get(&target) {
                Rewrite::Copy(tail.clone())
            } else {
                tracing::debug!(
                    target: "unlace::struct::goto_resolve",
                    "goto label={:?} target={target:?} fallthrough={:?} ctx={:?} rewrite=none",
                    site.label,
                    site.fallthrough,
                    site.ctx
                );
                continue;
            };
            tracing::debug!(
                target: "unlace::struct::goto_resolve",
                "goto label={:?} target={target:?} fallthrough={:?} rewrite={rewrite:?}",
                site.label,
                site.fallthrough
            );
            rewrites.insert(id, rewrite);
        }
        rewrites
    }
}

/// Walks `nodes` back to front so each node sees its continuation, and
/// returns the entry point of the list. With `rewrites` it replaces the
/// goto nodes they name; visit order is the same in both modes.
fn walk_list(
    nodes: &mut [HirNode],
    cont: Point,
    ctx: Ctx,
    analysis: &mut Analysis,
    rewrites: Option<&BTreeMap<usize, Rewrite>>,
) -> Point {
    let mut next = cont;
    for node in nodes.iter_mut().rev() {
        next = walk_node(node, next, ctx, analysis, rewrites);
    }
    next
}

fn walk_node(
    node: &mut HirNode,
    next: Point,
    ctx: Ctx,
    analysis: &mut Analysis,
    rewrites: Option<&BTreeMap<usize, Rewrite>>,
) -> Point {
    let id = analysis.fresh_id();
    match node {
        HirNode::Label(label) => {
            analysis.labels.insert(*label, next);
            next
        }
        HirNode::Block(children) => walk_list(children, next, ctx, analysis, rewrites),
        HirNode::Commented { inner, .. } => walk_node(inner, next, ctx, analysis, rewrites),
        HirNode::Goto(label) => {
            if let Some(rewrite) = rewrites.and_then(|r| r.get(&id)) {
                *node = match rewrite {
                    Rewrite::Remove => HirNode::Block(Vec::new()),
                    Rewrite::Continue => HirNode::Continue,
                    Rewrite::Break => HirNode::Break,
                    Rewrite::Copy(tail) => HirNode::Block(tail.clone()),
                };
                return Point::Node(id);
            }
            analysis.gotos.insert(
                id,
                GotoSite {
                    label: *label,
                    fallthrough: next,
                    ctx,
                },
            );
            Point::Node(id)
        }
        HirNode::Continue => ctx
            .innermost_loop
            .map_or(Point::Node(id), Point::LoopContinue),
        HirNode::Break => ctx.breakable_exit.unwrap_or(Point::Node(id)),
        HirNode::Return(_) => {
            if !ctx.in_try {
                analysis
                    .return_tails
                    .insert(Point::Node(id), vec![node.clone()]);
            }
            Point::Node(id)
        }
        HirNode::Statement(_) => {
            if !ctx.in_try
                && let Some(tail) = analysis.return_tails.get(&next)
                && tail.len() <= MAX_COPIED_STATEMENTS
            {
                let tail = std::iter::once(node.clone())
                    .chain(tail.iter().cloned())
                    .collect();
                analysis.return_tails.insert(Point::Node(id), tail);
            }
            Point::Node(id)
        }
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
            walk_list(then_body, next, ctx, analysis, rewrites);
            if let Some(else_body) = else_body {
                walk_list(else_body, next, ctx, analysis, rewrites);
            }
            Point::Node(id)
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            walk_list(then_body, next, ctx, analysis, rewrites);
            walk_list(else_body, next, ctx, analysis, rewrites);
            Point::Node(id)
        }
        HirNode::While { cond, body } => {
            let loop_ctx = Ctx {
                innermost_loop: Some(id),
                breakable_exit: Some(next),
                ..ctx
            };
            let entry = walk_list(body, Point::LoopContinue(id), loop_ctx, analysis, rewrites);
            let entry_in_body = matches!(entry, Point::Node(node) if node > id);
            if entry_in_body && cond.base.space == SpaceId::Const && cond.base.offset != 0 {
                analysis.aliases.insert(entry, Point::LoopContinue(id));
            }
            Point::Node(id)
        }
        HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            let loop_ctx = Ctx {
                innermost_loop: Some(id),
                breakable_exit: Some(next),
                ..ctx
            };
            walk_list(body, Point::LoopContinue(id), loop_ctx, analysis, rewrites);
            Point::Node(id)
        }
        HirNode::Switch { cases, default, .. } => {
            let switch_ctx = Ctx {
                breakable_exit: Some(next),
                ..ctx
            };
            for (_, body, _) in cases.iter_mut() {
                let end = Point::Opaque(analysis.fresh_id());
                walk_list(body, end, switch_ctx, analysis, rewrites);
            }
            if let Some(default) = default {
                let end = Point::Opaque(analysis.fresh_id());
                walk_list(default, end, switch_ctx, analysis, rewrites);
            }
            Point::Node(id)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            let try_ctx = Ctx {
                in_try: true,
                ..Ctx::default()
            };
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(try_body, end, try_ctx, analysis, rewrites);
            for (_, body) in catch_arms.iter_mut() {
                let end = Point::Opaque(analysis.fresh_id());
                walk_list(body, end, try_ctx, analysis, rewrites);
            }
            Point::Node(id)
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            let try_ctx = Ctx {
                in_try: true,
                ..Ctx::default()
            };
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(try_body, end, try_ctx, analysis, rewrites);
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(finally_body, end, try_ctx, analysis, rewrites);
            Point::Node(id)
        }
        HirNode::Ternary { .. }
        | HirNode::TailCall { .. }
        | HirNode::ObjcBlock { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::Asm { .. } => Point::Node(id),
    }
}

pub(crate) fn for_each_body(node: &HirNode, f: &mut impl FnMut(&[HirNode])) {
    match node {
        HirNode::Block(children) => f(children),
        HirNode::Commented { inner, .. } => for_each_body(inner, f),
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
            f(then_body);
            if let Some(else_body) = else_body {
                f(else_body);
            }
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            f(then_body);
            f(else_body);
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            f(body)
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                f(body);
            }
            if let Some(default) = default {
                f(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            f(try_body);
            for (_, body) in catch_arms {
                f(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            f(try_body);
            f(finally_body);
        }
        _ => {}
    }
}

pub(crate) fn for_each_body_mut(node: &mut HirNode, f: &mut impl FnMut(&mut Vec<HirNode>)) {
    match node {
        HirNode::Block(children) => f(children),
        HirNode::Commented { inner, .. } => for_each_body_mut(inner, f),
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
            f(then_body);
            if let Some(else_body) = else_body {
                f(else_body);
            }
        }
        HirNode::GuardedIf {
            then_body,
            else_body,
            ..
        } => {
            f(then_body);
            f(else_body);
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            f(body)
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, body, _) in cases {
                f(body);
            }
            if let Some(default) = default {
                f(default);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            f(try_body);
            for (_, body) in catch_arms {
                f(body);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            f(try_body);
            f(finally_body);
        }
        _ => {}
    }
}

fn collect_goto_targets(nodes: &[HirNode], used: &mut BTreeSet<LabelId>) {
    for node in nodes {
        if let HirNode::Goto(label) = node.unwrap_commented() {
            used.insert(*label);
        }
        for_each_body(node, &mut |body| collect_goto_targets(body, used));
    }
}

fn remove_unused_labels(nodes: &mut Vec<HirNode>, used: &BTreeSet<LabelId>) {
    nodes.retain(|node| !matches!(node, HirNode::Label(label) if !used.contains(label)));
    for node in nodes.iter_mut() {
        for_each_body_mut(node, &mut |body| remove_unused_labels(body, used));
    }
}

fn remove_empty_blocks(nodes: &mut Vec<HirNode>) {
    nodes.retain(|node| !matches!(node, HirNode::Block(children) if children.is_empty()));
    for node in nodes.iter_mut() {
        for_each_body_mut(node, &mut |body| remove_empty_blocks(body));
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::SwitchCase;

    fn stmt(reg: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(reg, 8),
            smallvec![Varnode::constant(0, 8)],
            0,
        ))
    }

    fn cond() -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(0x100, 1),
            version: 0,
        }
    }

    fn while_true(body: Vec<HirNode>) -> HirNode {
        HirNode::While {
            cond: SsaVarnode {
                base: Varnode::constant(1, 1),
                version: 0,
            },
            body,
        }
    }

    fn if_goto(label: LabelId) -> HirNode {
        HirNode::If {
            cond: cond(),
            then_body: vec![HirNode::Goto(label)],
            else_body: None,
        }
    }

    #[test]
    fn goto_to_the_fallthrough_point_is_removed() {
        let label = LabelId(0);
        let mut body = vec![
            HirNode::If {
                cond: cond(),
                then_body: vec![stmt(0), HirNode::Goto(label)],
                else_body: Some(vec![stmt(8)]),
            },
            HirNode::Label(label),
            stmt(16),
        ];
        resolve_body(&mut body);
        assert_eq!(
            body,
            vec![
                HirNode::If {
                    cond: cond(),
                    then_body: vec![stmt(0)],
                    else_body: Some(vec![stmt(8)]),
                },
                stmt(16),
            ]
        );
    }

    #[test]
    fn goto_to_the_top_of_while_true_is_continue() {
        let label = LabelId(0);
        let mut body = vec![while_true(vec![
            HirNode::Label(label),
            stmt(0),
            if_goto(label),
            stmt(8),
        ])];
        resolve_body(&mut body);
        assert_eq!(
            body,
            vec![while_true(vec![
                stmt(0),
                HirNode::If {
                    cond: cond(),
                    then_body: vec![HirNode::Continue],
                    else_body: None,
                },
                stmt(8),
            ])]
        );
    }

    #[test]
    fn goto_to_the_loop_exit_is_break() {
        let label = LabelId(0);
        let mut body = vec![
            while_true(vec![stmt(0), if_goto(label), stmt(8)]),
            HirNode::Label(label),
            stmt(16),
        ];
        resolve_body(&mut body);
        assert!(matches!(
            &body[0],
            HirNode::While { body, .. } if matches!(
                &body[1],
                HirNode::If { then_body, .. } if then_body == &[HirNode::Break]
            )
        ));
        assert_eq!(count_gotos(&body), 0);
    }

    #[test]
    fn goto_out_of_a_nested_loop_stays() {
        let label = LabelId(0);
        let mut body = vec![
            while_true(vec![while_true(vec![stmt(0), if_goto(label)]), stmt(8)]),
            HirNode::Label(label),
            stmt(16),
        ];
        resolve_body(&mut body);
        assert_eq!(count_gotos(&body), 1);
    }

    #[test]
    fn goto_to_a_short_return_tail_copies_it() {
        let label = LabelId(0);
        let mut body = vec![
            if_goto(label),
            stmt(0),
            HirNode::Return(None),
            HirNode::Label(label),
            stmt(8),
            HirNode::Return(None),
        ];
        resolve_body(&mut body);
        assert_eq!(
            body[0],
            HirNode::If {
                cond: cond(),
                then_body: vec![HirNode::Block(vec![stmt(8), HirNode::Return(None)])],
                else_body: None,
            }
        );
        assert_eq!(count_gotos(&body), 0);
    }

    #[test]
    fn goto_into_a_switch_case_end_stays() {
        let label = LabelId(0);
        let mut body = vec![
            if_goto(label),
            HirNode::Switch {
                cond: cond(),
                cases: vec![(
                    SwitchCase::Value(1),
                    vec![stmt(0), HirNode::Label(label)],
                    false,
                )],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            },
            stmt(8),
        ];
        resolve_body(&mut body);
        assert_eq!(count_gotos(&body), 1);
    }
}
