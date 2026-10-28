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
//! - a copy of the `return` that `L` reaches.
//!
//! Diagnostics: enable `unlace::struct::goto_resolve=debug`.

use std::collections::{BTreeMap, BTreeSet};

use crate::hir::{HirFunction, HirNode, LabelId};

/// Upper bound on rewrite rounds; each round only removes gotos or labels.
const MAX_ROUNDS: usize = 8;

/// Rewrite gotos that have a structured equivalent and drop labels that lose
/// their last goto.
pub fn resolve_gotos(func: &mut HirFunction) {
    for round in 0..MAX_ROUNDS {
        let mut analysis = Analysis::default();
        walk_list(
            &mut func.body,
            Point::FunctionEnd,
            Ctx::default(),
            &mut analysis,
            None,
        );
        let rewrites = analysis.rewrites();
        tracing::debug!(
            target: "unlace::struct::goto_resolve",
            "func={} round={round} gotos={} rewrites={}",
            func.name,
            analysis.gotos.len(),
            rewrites.len()
        );
        if rewrites.is_empty() {
            break;
        }
        walk_list(
            &mut func.body,
            Point::FunctionEnd,
            Ctx::default(),
            &mut Analysis::default(),
            Some(&rewrites),
        );
        remove_empty_blocks(&mut func.body);
        let mut used = BTreeSet::new();
        collect_goto_targets(&func.body, &mut used);
        remove_unused_labels(&mut func.body, &used);
    }
}

/// A program point, identified by node visit order.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
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
    Return(Box<HirNode>),
}

#[derive(Default)]
struct Analysis {
    next_id: usize,
    labels: BTreeMap<LabelId, Point>,
    gotos: BTreeMap<usize, GotoSite>,
    returns: BTreeMap<usize, HirNode>,
}

impl Analysis {
    fn fresh_id(&mut self) -> usize {
        let id = self.next_id;
        self.next_id += 1;
        id
    }

    fn rewrites(&self) -> BTreeMap<usize, Rewrite> {
        let mut rewrites = BTreeMap::new();
        for (&id, site) in &self.gotos {
            let Some(&target) = self.labels.get(&site.label) else {
                continue;
            };
            let rewrite = if target == site.fallthrough {
                Rewrite::Remove
            } else if site.ctx.innermost_loop.map(Point::LoopContinue) == Some(target) {
                Rewrite::Continue
            } else if site.ctx.breakable_exit == Some(target) {
                Rewrite::Break
            } else if let Point::Node(node) = target
                && let Some(ret) = self.returns.get(&node)
            {
                Rewrite::Return(Box::new(ret.clone()))
            } else {
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
                    Rewrite::Return(ret) => (**ret).clone(),
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
            analysis.returns.insert(id, node.clone());
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
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            let loop_ctx = Ctx {
                innermost_loop: Some(id),
                breakable_exit: Some(next),
            };
            walk_list(body, Point::LoopContinue(id), loop_ctx, analysis, rewrites);
            Point::Node(id)
        }
        HirNode::Switch { cases, default, .. } => {
            let switch_ctx = Ctx {
                innermost_loop: ctx.innermost_loop,
                breakable_exit: Some(next),
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
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(try_body, end, Ctx::default(), analysis, rewrites);
            for (_, body) in catch_arms.iter_mut() {
                let end = Point::Opaque(analysis.fresh_id());
                walk_list(body, end, Ctx::default(), analysis, rewrites);
            }
            Point::Node(id)
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(try_body, end, Ctx::default(), analysis, rewrites);
            let end = Point::Opaque(analysis.fresh_id());
            walk_list(finally_body, end, Ctx::default(), analysis, rewrites);
            Point::Node(id)
        }
        HirNode::Statement(_)
        | HirNode::Ternary { .. }
        | HirNode::TailCall { .. }
        | HirNode::ObjcBlock { .. }
        | HirNode::GuardedTernary { .. }
        | HirNode::CselTernary { .. }
        | HirNode::Asm { .. } => Point::Node(id),
    }
}

fn for_each_body(node: &HirNode, f: &mut impl FnMut(&[HirNode])) {
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

fn for_each_body_mut(node: &mut HirNode, f: &mut impl FnMut(&mut Vec<HirNode>)) {
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
