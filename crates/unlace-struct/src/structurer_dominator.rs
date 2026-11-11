//! Dominator-tree structuring for reducible control flow.
//!
//! Follows Ramsey, "Beyond Relooper: Recursive Translation of Unstructured
//! Control Flow to Structured Control Flow" (ICFP 2022). Each block is
//! emitted inside the code of its immediate dominator. A block with two or
//! more forward predecessors is a merge node and follows the code of its
//! dominator; a loop header wraps its natural loop in `while (1)`. A block
//! that a loop dominates but that lies outside the loop follows that loop.
//! Every transfer to a merge node, a loop header or a loop exit is a `goto`,
//! and [`crate::goto_resolve`] turns the ones that reach their target by
//! fallthrough, `continue`, `break` or a copied `return` into those forms.
//!
//! The region walk in [`StructureCtx::structure_region`] matches shapes one
//! at a time and falls back to `goto` when a shape does not fit. This
//! structurer does not depend on shapes, so it is tried when the walk leaves
//! gotos and its result is kept when it needs fewer.
//!
//! Diagnostics: enable `unlace::struct::dominator=debug`.

use super::*;
use crate::goto_resolve::{for_each_body, for_each_body_mut};

macro_rules! dom_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::dominator", "{}", format_args!($($arg)*))
    };
}

/// How control leaves a block, after empty forwarding blocks are bypassed.
#[derive(Clone, Copy, Debug)]
enum Exit {
    None,
    Jump(BlockId),
    Branch { on_true: BlockId, on_false: BlockId },
}

impl Exit {
    fn targets(self) -> impl Iterator<Item = BlockId> {
        let (first, second) = match self {
            Exit::None => (None, None),
            Exit::Jump(target) => (Some(target), None),
            Exit::Branch { on_true, on_false } => (Some(on_true), Some(on_false)),
        };
        first.into_iter().chain(second)
    }
}

/// The forward control-flow facts the emitter needs.
struct DomTree {
    exits: BTreeMap<BlockId, Exit>,
    rpo_index: BTreeMap<BlockId, usize>,
    idom: BTreeMap<BlockId, BlockId>,
    back_edges: BTreeSet<(BlockId, BlockId)>,
    /// Natural loop bodies keyed by header.
    loops: BTreeMap<BlockId, BTreeSet<BlockId>>,
    merges: BTreeSet<BlockId>,
    /// Blocks emitted after a loop instead of inside their dominator.
    hoisted: BTreeSet<BlockId>,
    /// The block whose code contains each block: its immediate dominator, or
    /// the outermost loop that contains the dominator but not the block.
    parent: BTreeMap<BlockId, BlockId>,
    children: BTreeMap<BlockId, Vec<BlockId>>,
}

impl DomTree {
    fn build(ctx: &StructureCtx<'_>) -> Option<Self> {
        let func = ctx.func;
        let entry = func.function.entry;
        let mut raw = BTreeMap::new();
        for &bid in func.function.blocks.keys() {
            raw.insert(bid, raw_exit(ctx, bid)?);
        }
        let forwards: BTreeMap<BlockId, BlockId> = raw
            .iter()
            .filter(|&(&bid, exit)| bid != entry && is_forwarding_block(ctx, bid, *exit))
            .filter_map(|(&bid, exit)| match exit {
                Exit::Jump(target) => Some((bid, *target)),
                _ => None,
            })
            .collect();
        let resolve = |mut target: BlockId| -> Option<BlockId> {
            for _ in 0..=forwards.len() {
                match forwards.get(&target) {
                    Some(&next) => target = next,
                    None => return Some(target),
                }
            }
            None
        };
        let mut exits = BTreeMap::new();
        for (&bid, &exit) in &raw {
            if forwards.contains_key(&bid) {
                continue;
            }
            let exit = match exit {
                Exit::None => Exit::None,
                Exit::Jump(target) => Exit::Jump(resolve(target)?),
                Exit::Branch { on_true, on_false } => {
                    let (on_true, on_false) = (resolve(on_true)?, resolve(on_false)?);
                    if on_true == on_false {
                        Exit::Jump(on_true)
                    } else {
                        Exit::Branch { on_true, on_false }
                    }
                }
            };
            exits.insert(bid, exit);
        }

        let rpo = reverse_postorder(entry, &exits)?;
        let rpo_index: BTreeMap<BlockId, usize> =
            rpo.iter().enumerate().map(|(i, &bid)| (bid, i)).collect();
        let mut preds: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        for &bid in &rpo {
            for target in exits[&bid].targets() {
                preds.entry(target).or_default().push(bid);
            }
        }
        let idom = immediate_dominators(&rpo, &rpo_index, &preds);
        let dominates = |a: BlockId, mut b: BlockId| loop {
            if a == b {
                return true;
            }
            match idom.get(&b) {
                Some(&up) if up != b => b = up,
                _ => return false,
            }
        };

        let mut back_edges = BTreeSet::new();
        for &bid in &rpo {
            for target in exits[&bid].targets() {
                if dominates(target, bid) {
                    back_edges.insert((bid, target));
                }
            }
        }
        let mut loops: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
        for &(latch, header) in &back_edges {
            let body = loops
                .entry(header)
                .or_insert_with(|| BTreeSet::from([header]));
            let mut work = vec![latch];
            while let Some(bid) = work.pop() {
                if body.insert(bid) {
                    work.extend(preds.get(&bid).into_iter().flatten().copied());
                }
            }
        }

        let mut forward_preds: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
        for (&target, sources) in &preds {
            for &source in sources {
                if !back_edges.contains(&(source, target)) {
                    forward_preds.entry(target).or_default().insert(source);
                }
            }
        }
        let merges: BTreeSet<BlockId> = forward_preds
            .iter()
            .filter(|(_, sources)| sources.len() >= 2)
            .map(|(&bid, _)| bid)
            .collect();

        // A block outside a loop that the loop dominates is hoisted after
        // the outermost such loop.
        let mut hosts: BTreeMap<BlockId, BlockId> = BTreeMap::new();
        for &bid in rpo.iter().skip(1) {
            let dominator = idom[&bid];
            if let Some((&header, _)) = loops
                .iter()
                .filter(|(_, body)| body.contains(&dominator) && !body.contains(&bid))
                .max_by_key(|(_, body)| body.len())
            {
                hosts.insert(bid, header);
            }
        }
        // A non-merge exit that only leads to other exits of its loop stays
        // in place: its jumps become `break`s and it does not add an exit.
        let innermost_loop = |bid: BlockId| {
            loops
                .iter()
                .filter(|(_, body)| body.contains(&bid))
                .min_by_key(|(_, body)| body.len())
                .map(|(&header, _)| header)
        };
        let stays: BTreeSet<BlockId> = hosts
            .iter()
            .filter(|&(&bid, &host)| {
                !merges.contains(&bid)
                    && innermost_loop(idom[&bid]) == Some(host)
                    && exits[&bid]
                        .targets()
                        .all(|target| hosts.get(&target) == Some(&host))
            })
            .map(|(&bid, _)| bid)
            .collect();
        for &bid in &stays {
            if exits[&bid].targets().all(|target| !stays.contains(&target)) {
                hosts.remove(&bid);
            }
        }

        let mut parent = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        for &bid in rpo.iter().skip(1) {
            let host = hosts.get(&bid).copied().unwrap_or(idom[&bid]);
            parent.insert(bid, host);
            children.entry(host).or_default().push(bid);
        }

        Some(Self {
            exits,
            rpo_index,
            idom,
            back_edges,
            loops,
            merges,
            hoisted: hosts.into_keys().collect(),
            parent,
            children,
        })
    }

    fn children_by_rpo(&self, bid: BlockId, keep: impl Fn(BlockId) -> bool) -> Vec<BlockId> {
        let mut children: Vec<BlockId> = self
            .children
            .get(&bid)
            .into_iter()
            .flatten()
            .copied()
            .filter(|&child| keep(child))
            .collect();
        children.sort_by_key(|child| self.rpo_index[child]);
        children
    }

    /// Blocks hoisted after the loop at `header`, in emission order. The
    /// exit that the loop body branches to most goes first so those branches
    /// become `break`s, unless another exit flows into it.
    fn loop_exits(&self, header: BlockId) -> Vec<BlockId> {
        let mut exits = self.children_by_rpo(header, |child| self.hoisted.contains(&child));
        let body = &self.loops[&header];
        let branches_from = |exit: BlockId, sources: &BTreeSet<BlockId>| {
            sources
                .iter()
                .filter(|&&source| self.exits[&source].targets().any(|target| target == exit))
                .count()
        };
        let exit_set: BTreeSet<BlockId> = exits.iter().copied().collect();
        let first = exits
            .iter()
            .enumerate()
            .filter(|&(_, &exit)| branches_from(exit, &exit_set) == 0)
            .max_by_key(|&(index, &exit)| (branches_from(exit, body), std::cmp::Reverse(index)))
            .map(|(index, _)| index);
        if let Some(index) = first {
            let exit = exits.remove(index);
            exits.insert(0, exit);
        }
        exits
    }

    /// Whether a branch `from -> to` emits `to` in place: `to` is a
    /// non-merge child of `from` in the same loop.
    fn nests(&self, from: BlockId, to: BlockId) -> bool {
        self.parent.get(&to) == Some(&from)
            && self.idom.get(&to) == Some(&from)
            && !self.merges.contains(&to)
            && !self.back_edges.contains(&(from, to))
            && !self.hoisted.contains(&to)
    }
}

/// Real successors of `bid`, or `None` when the block leaves the shapes this
/// structurer handles (indirect jumps, call edges, one-sided branches).
fn raw_exit(ctx: &StructureCtx<'_>, bid: BlockId) -> Option<Exit> {
    let mut on_true = None;
    let mut on_false = None;
    let mut others = Vec::new();
    for (target, kind) in ctx.func.cfg.edges_from(bid) {
        match kind {
            EdgeKind::IndirectJump | EdgeKind::Call => return None,
            _ if ctx.synthetic.contains(&target) => {}
            EdgeKind::ConditionalTrue => on_true = Some(target),
            EdgeKind::ConditionalFalse => on_false = Some(target),
            EdgeKind::Unconditional | EdgeKind::Fallthrough | EdgeKind::Return => {
                others.push(target)
            }
        }
    }
    match (on_true, on_false, others.as_slice()) {
        (None, None, []) => Some(Exit::None),
        (None, None, [target]) => Some(Exit::Jump(*target)),
        (Some(on_true), Some(on_false), []) => Some(Exit::Branch { on_true, on_false }),
        _ => None,
    }
}

/// A block that only jumps on: no statements, no tail call.
fn is_forwarding_block(ctx: &StructureCtx<'_>, bid: BlockId, exit: Exit) -> bool {
    if !matches!(exit, Exit::Jump(_)) || ctx.func.tail_call_map.contains_key(&bid) {
        return false;
    }
    ctx.func.function.blocks.get(&bid).is_some_and(|block| {
        block
            .insns
            .iter()
            .enumerate()
            .all(|(i, insn)| insn.op == IrOp::Branch || ctx.is_frame_setup(bid, i))
    })
}

fn reverse_postorder(entry: BlockId, exits: &BTreeMap<BlockId, Exit>) -> Option<Vec<BlockId>> {
    let targets = |bid: BlockId| {
        exits
            .get(&bid)
            .map(|exit| exit.targets().collect::<Vec<_>>())
    };
    let mut order = Vec::new();
    let mut visited = BTreeSet::from([entry]);
    let mut stack = vec![(entry, targets(entry)?, 0usize)];
    while let Some((bid, succs, next)) = stack.last_mut() {
        if let Some(&target) = succs.get(*next) {
            *next += 1;
            if visited.insert(target) {
                stack.push((target, targets(target)?, 0));
            }
        } else {
            order.push(*bid);
            stack.pop();
        }
    }
    order.reverse();
    Some(order)
}

/// Cooper, Harvey and Kennedy, "A Simple, Fast Dominance Algorithm".
fn immediate_dominators(
    rpo: &[BlockId],
    rpo_index: &BTreeMap<BlockId, usize>,
    preds: &BTreeMap<BlockId, Vec<BlockId>>,
) -> BTreeMap<BlockId, BlockId> {
    let entry = rpo[0];
    let mut idom = BTreeMap::from([(entry, entry)]);
    let intersect = |idom: &BTreeMap<BlockId, BlockId>, mut a: BlockId, mut b: BlockId| {
        while a != b {
            while rpo_index[&a] > rpo_index[&b] {
                a = idom[&a];
            }
            while rpo_index[&b] > rpo_index[&a] {
                b = idom[&b];
            }
        }
        a
    };
    let mut changed = true;
    while changed {
        changed = false;
        for &bid in &rpo[1..] {
            let mut done = preds
                .get(&bid)
                .into_iter()
                .flatten()
                .copied()
                .filter(|pred| idom.contains_key(pred));
            let Some(first) = done.next() else { continue };
            let new = done.fold(first, |acc, pred| intersect(&idom, pred, acc));
            if idom.insert(bid, new) != Some(new) {
                changed = true;
            }
        }
    }
    idom.remove(&entry);
    idom
}

/// Rewrite `while (1)` loops from the emitter into `while (c)` when the
/// body is one test with a `break` arm, and into `do … while (c)` when the
/// body ends in such a test and has no `continue`.
fn shape_loops(nodes: &mut [HirNode]) {
    for node in nodes.iter_mut() {
        for_each_body_mut(node, &mut |body| shape_loops(body));
        let HirNode::While { cond, body } = node else {
            continue;
        };
        if !(cond.base.space == SpaceId::Const && cond.base.offset != 0) {
            continue;
        }
        if let [
            HirNode::If {
                cond: test,
                then_body,
                else_body: Some(else_body),
            },
        ] = body.as_mut_slice()
            && matches!(else_body.as_slice(), [HirNode::Break])
        {
            *node = HirNode::While {
                cond: *test,
                body: std::mem::take(then_body),
            };
            continue;
        }
        if let Some(HirNode::If {
            cond: test,
            then_body,
            else_body: Some(else_body),
        }) = body.last()
            && then_body.is_empty()
            && matches!(else_body.as_slice(), [HirNode::Break])
            && !continues_loop(&body[..body.len() - 1])
        {
            let test = *test;
            body.pop();
            *node = HirNode::DoWhile {
                body: std::mem::take(body),
                cond: test,
            };
        }
    }
}

/// Whether `nodes` hold a `continue` of the loop they are directly in.
fn continues_loop(nodes: &[HirNode]) -> bool {
    nodes.iter().any(|node| match node {
        HirNode::Continue => true,
        HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. } => false,
        _ => {
            let mut found = false;
            for_each_body(node, &mut |body| found |= continues_loop(body));
            found
        }
    })
}

impl StructureCtx<'_> {
    /// Structure the whole function by dominator tree, or `None` when the
    /// CFG has shapes this structurer does not handle.
    pub(super) fn structure_by_dominators(&mut self) -> Option<Vec<HirNode>> {
        let tree = DomTree::build(self)?;
        let entry = self.func.function.entry;
        for (&bid, &exit) in &tree.exits {
            let in_loop = tree.loops.values().any(|body| body.contains(&bid));
            if in_loop && matches!(exit, Exit::None) && !self.ends_function(bid) {
                dom_debug!("bail block={bid:?} reason=loop-block-without-exit");
                return None;
            }
        }
        for &bid in tree.rpo_index.keys() {
            self.alloc_label(bid);
        }
        let mut body = Vec::new();
        self.emit_dom_subtree(&tree, entry, &mut body);
        if self.deadline_exceeded() {
            return None;
        }
        if let Some(missing) = tree
            .rpo_index
            .keys()
            .find(|bid| !self.emitted.contains(bid))
        {
            dom_debug!("bail block={missing:?} reason=not-emitted");
            return None;
        }
        strip_unused_labels(&mut body);
        goto_resolve::resolve_body(&mut body);
        shape_loops(&mut body);
        Some(body)
    }

    fn ends_function(&self, bid: BlockId) -> bool {
        self.func.tail_call_map.contains_key(&bid)
            || self
                .func
                .function
                .blocks
                .get(&bid)
                .and_then(|block| block.insns.last())
                .is_some_and(|insn| insn.op == IrOp::Return)
    }

    fn emit_dom_subtree(&mut self, tree: &DomTree, bid: BlockId, out: &mut Vec<HirNode>) {
        if !self.check_deadline() {
            return;
        }
        if !tree.loops.contains_key(&bid) {
            let merges = tree.children_by_rpo(bid, |child| tree.merges.contains(&child));
            self.emit_dom_block(tree, bid, &merges, out);
            return;
        };
        let inner_merges = tree.children_by_rpo(bid, |child| {
            !tree.hoisted.contains(&child) && tree.merges.contains(&child)
        });
        let mut loop_body = Vec::new();
        self.emit_dom_block(tree, bid, &inner_merges, &mut loop_body);
        out.push(HirNode::While {
            cond: SsaVarnode {
                base: unlace_ir::Varnode::constant(1, 1),
                version: 0,
            },
            body: loop_body,
        });
        for exit in tree.loop_exits(bid) {
            self.emit_dom_subtree(tree, exit, out);
        }
    }

    fn emit_dom_block(
        &mut self,
        tree: &DomTree,
        bid: BlockId,
        merges: &[BlockId],
        out: &mut Vec<HirNode>,
    ) {
        self.emit_block_statements(bid, out);
        match tree.exits[&bid] {
            Exit::None => {}
            Exit::Jump(target) => self.emit_dom_branch(tree, bid, target, out),
            Exit::Branch { on_true, on_false } => {
                let cond = self.find_cbranch_cond(bid);
                let mut then_body = Vec::new();
                self.emit_dom_branch(tree, bid, on_true, &mut then_body);
                let mut else_body = Vec::new();
                self.emit_dom_branch(tree, bid, on_false, &mut else_body);
                out.push(HirNode::If {
                    cond,
                    then_body,
                    else_body: Some(else_body),
                });
            }
        }
        for &merge in merges {
            self.emit_dom_subtree(tree, merge, out);
        }
    }

    fn emit_dom_branch(
        &mut self,
        tree: &DomTree,
        from: BlockId,
        to: BlockId,
        out: &mut Vec<HirNode>,
    ) {
        if tree.nests(from, to) {
            self.emit_dom_subtree(tree, to, out);
        } else {
            out.push(HirNode::Goto(self.alloc_label(to)));
        }
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    use super::*;

    const MARK_BASE: u64 = 0x1000;
    const COND_BASE: u64 = 0x8000;

    /// Block shapes for test CFGs.
    #[derive(Clone, Copy, Debug)]
    enum Shape {
        Return,
        Jump(u32),
        /// A block with no statement that only jumps on.
        Forward(u32),
        Branch(u32, u32),
    }

    fn build(shapes: &[Shape]) -> SsaFunction {
        let mut func = Function::new("dom_test", BlockId(0), 0x1000);
        for (i, shape) in shapes.iter().enumerate() {
            let id = u32::try_from(i).expect("small test cfg");
            let addr = 0x1000 + u64::from(id) * 0x10;
            let mut block = BasicBlock::new(BlockId(id));
            if !matches!(shape, Shape::Forward(_)) {
                block.insns.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    Varnode::reg(MARK_BASE + u64::from(id) * 8, 8),
                    smallvec![Varnode::reg(8, 8), Varnode::constant(1, 8)],
                    addr,
                ));
            }
            match *shape {
                Shape::Return => {
                    block
                        .insns
                        .push(IrInsn::without_output(IrOp::Return, smallvec![], addr + 4));
                }
                Shape::Jump(target) | Shape::Forward(target) => {
                    block
                        .insns
                        .push(IrInsn::without_output(IrOp::Branch, smallvec![], addr + 4));
                    block.successors = smallvec![BlockId(target)];
                }
                Shape::Branch(on_true, on_false) => {
                    block.insns.push(IrInsn::without_output(
                        IrOp::Cbranch,
                        smallvec![
                            Varnode::constant(0, 8),
                            Varnode::reg(COND_BASE + u64::from(id), 1)
                        ],
                        addr + 4,
                    ));
                    block.successors = smallvec![BlockId(on_true), BlockId(on_false)];
                }
            }
            func.insert_block(block);
        }
        build_ssa(func)
    }

    /// Blocks visited by the CFG under `decisions`, one decision per branch.
    fn cfg_trace(shapes: &[Shape], decisions: &[bool], limit: usize) -> Vec<u32> {
        let mut trace = Vec::new();
        let mut next_decision = decisions.iter().copied();
        let mut bid = 0u32;
        let mut steps = 0;
        while trace.len() < limit && steps < limit * 4 {
            steps += 1;
            match shapes[bid as usize] {
                Shape::Return => {
                    trace.push(bid);
                    break;
                }
                Shape::Jump(target) => {
                    trace.push(bid);
                    bid = target;
                }
                Shape::Forward(target) => bid = target,
                Shape::Branch(on_true, on_false)
                    if skip_forwards(shapes, on_true) == skip_forwards(shapes, on_false) =>
                {
                    trace.push(bid);
                    bid = on_true;
                }
                Shape::Branch(on_true, on_false) => {
                    trace.push(bid);
                    let Some(taken) = next_decision.next() else {
                        break;
                    };
                    bid = if taken { on_true } else { on_false };
                }
            }
        }
        trace
    }

    fn skip_forwards(shapes: &[Shape], mut bid: u32) -> u32 {
        for _ in 0..shapes.len() {
            match shapes[bid as usize] {
                Shape::Forward(target) => bid = target,
                _ => break,
            }
        }
        bid
    }

    /// Compact rendering of test HIR for assertion messages.
    fn render(nodes: &[HirNode]) -> String {
        let mut out = String::new();
        for node in nodes {
            match node {
                HirNode::Statement(insn) => {
                    let out_vn = insn.output.expect("marker has output");
                    out += &format!("B{}; ", (out_vn.offset - MARK_BASE) / 8);
                }
                HirNode::Block(children) => out += &render(children),
                HirNode::If {
                    cond,
                    then_body,
                    else_body,
                } => {
                    out += &format!(
                        "if c{} {{ {}}} ",
                        cond.base.offset - COND_BASE,
                        render(then_body)
                    );
                    if let Some(else_body) = else_body {
                        out += &format!("else {{ {}}} ", render(else_body));
                    }
                }
                HirNode::While { body, .. } => out += &format!("while {{ {}}} ", render(body)),
                HirNode::Break => out += "break; ",
                HirNode::Continue => out += "continue; ",
                HirNode::Goto(label) => out += &format!("goto L{}; ", label.0),
                HirNode::Label(label) => out += &format!("L{}: ", label.0),
                HirNode::Return(_) => out += "return; ",
                other => out += &format!("{other:?} "),
            }
        }
        out
    }

    /// Continue target inside `do … while`, which test HIR never uses.
    const NO_CONTINUE: usize = usize::MAX;

    #[derive(Debug)]
    enum Op {
        Mark(u32),
        /// The branch of a block: jump to the target when not taken.
        BranchFalse {
            block: u32,
            target: usize,
        },
        Jump(usize),
        Return,
    }

    fn cond_block(cond: &SsaVarnode) -> u32 {
        u32::try_from(cond.base.offset - COND_BASE).expect("test condition")
    }

    #[derive(Default)]
    struct Program {
        ops: Vec<Op>,
        labels: BTreeMap<LabelId, usize>,
        goto_patches: Vec<(usize, LabelId)>,
    }

    impl Program {
        fn compile(nodes: &[HirNode]) -> Self {
            let mut program = Self::default();
            program.emit(nodes, None);
            for (at, label) in std::mem::take(&mut program.goto_patches) {
                program.ops[at] = Op::Jump(program.labels[&label]);
            }
            program
        }

        /// `loop_ctx` is the continue target and the pending break jumps.
        fn emit(&mut self, nodes: &[HirNode], mut loop_ctx: Option<(usize, &mut Vec<usize>)>) {
            for node in nodes {
                match node {
                    HirNode::Statement(insn) => {
                        let out = insn.output.expect("marker has output");
                        self.ops
                            .push(Op::Mark(((out.offset - MARK_BASE) / 8) as u32));
                    }
                    HirNode::Block(children) => {
                        self.emit(children, loop_ctx.as_mut().map(|(c, b)| (*c, &mut **b)))
                    }
                    HirNode::If {
                        cond,
                        then_body,
                        else_body,
                    } => {
                        let branch_at = self.ops.len();
                        self.ops.push(Op::Jump(usize::MAX));
                        self.emit(then_body, loop_ctx.as_mut().map(|(c, b)| (*c, &mut **b)));
                        let skip_at = self.ops.len();
                        self.ops.push(Op::Jump(usize::MAX));
                        self.ops[branch_at] = Op::BranchFalse {
                            block: cond_block(cond),
                            target: self.ops.len(),
                        };
                        if let Some(else_body) = else_body {
                            self.emit(else_body, loop_ctx.as_mut().map(|(c, b)| (*c, &mut **b)));
                        }
                        self.ops[skip_at] = Op::Jump(self.ops.len());
                    }
                    HirNode::While { cond, body } => {
                        let start = self.ops.len();
                        let test_at = (cond.base.space != SpaceId::Const).then(|| {
                            self.ops.push(Op::Jump(usize::MAX));
                            start
                        });
                        let mut breaks = Vec::new();
                        self.emit(body, Some((start, &mut breaks)));
                        self.ops.push(Op::Jump(start));
                        let end = self.ops.len();
                        if let Some(at) = test_at {
                            self.ops[at] = Op::BranchFalse {
                                block: cond_block(cond),
                                target: end,
                            };
                        }
                        for at in breaks {
                            self.ops[at] = Op::Jump(end);
                        }
                    }
                    HirNode::DoWhile { body, cond } => {
                        let start = self.ops.len();
                        let mut breaks = Vec::new();
                        self.emit(body, Some((NO_CONTINUE, &mut breaks)));
                        let test = self.ops.len();
                        self.ops.push(Op::BranchFalse {
                            block: cond_block(cond),
                            target: test + 2,
                        });
                        self.ops.push(Op::Jump(start));
                        let end = self.ops.len();
                        for at in breaks {
                            self.ops[at] = Op::Jump(end);
                        }
                    }
                    HirNode::Break => {
                        let (_, breaks) = loop_ctx.as_mut().expect("break inside loop");
                        breaks.push(self.ops.len());
                        self.ops.push(Op::Jump(usize::MAX));
                    }
                    HirNode::Continue => {
                        let (start, _) = loop_ctx.as_ref().expect("continue inside loop");
                        assert_ne!(
                            *start, NO_CONTINUE,
                            "the structurer emits no continue in do-while"
                        );
                        self.ops.push(Op::Jump(*start));
                    }
                    HirNode::Goto(label) => {
                        self.goto_patches.push((self.ops.len(), *label));
                        self.ops.push(Op::Jump(usize::MAX));
                    }
                    HirNode::Label(label) => {
                        assert!(
                            self.labels.insert(*label, self.ops.len()).is_none(),
                            "duplicate label"
                        );
                    }
                    HirNode::Return(_) => self.ops.push(Op::Return),
                    other => panic!("unexpected node in test HIR: {other:?}"),
                }
            }
        }

        fn trace(&self, decisions: &[bool], limit: usize) -> Vec<u32> {
            let mut trace = Vec::new();
            let mut next_decision = decisions.iter().copied();
            let mut pc = 0;
            let mut steps = 0;
            while pc < self.ops.len() && trace.len() < limit && steps < limit * 16 {
                steps += 1;
                match self.ops[pc] {
                    Op::Mark(block) => {
                        trace.push(block);
                        pc += 1;
                    }
                    Op::BranchFalse { block, target } => {
                        assert_eq!(
                            trace.last(),
                            Some(&block),
                            "branch on another block's condition"
                        );
                        let Some(taken) = next_decision.next() else {
                            break;
                        };
                        pc = if taken { pc + 1 } else { target };
                    }
                    Op::Jump(target) => pc = target,
                    Op::Return => break,
                }
            }
            trace
        }
    }

    /// Deterministic decision streams: all-true, all-false, alternating and
    /// pseudo-random.
    fn decision_streams() -> Vec<Vec<bool>> {
        let mut streams = vec![
            vec![true; 64],
            vec![false; 64],
            (0..64).map(|i| i % 2 == 0).collect(),
        ];
        let mut state = 0x9e37_79b9_7f4a_7c15u64;
        for _ in 0..24 {
            streams.push(
                (0..64)
                    .map(|_| {
                        state ^= state << 13;
                        state ^= state >> 7;
                        state ^= state << 17;
                        state & 1 == 1
                    })
                    .collect(),
            );
        }
        streams
    }

    /// Asserts the HIR runs the same block sequence as the CFG.
    fn assert_equivalent(shapes: &[Shape], body: &[HirNode]) {
        let program = Program::compile(body);
        for decisions in decision_streams() {
            let expected = cfg_trace(shapes, &decisions, 48);
            let actual = program.trace(&decisions, 48);
            assert_eq!(
                actual,
                expected,
                "shapes={shapes:?} decisions={decisions:?} body={}",
                render(body)
            );
        }
    }

    fn dominator_body(shapes: &[Shape]) -> Option<Vec<HirNode>> {
        let ssa = build(shapes);
        StructureCtx::new(&ssa).structure_by_dominators()
    }

    fn check(shapes: &[Shape]) -> Vec<HirNode> {
        let mut body = dominator_body(shapes).expect("dominator structuring applies");
        assert_equivalent(shapes, &body);
        crate::goto_resolve::resolve_body(&mut body);
        assert_equivalent(shapes, &body);
        body
    }

    use Shape::{Branch, Forward, Jump, Return};

    #[test]
    fn diamond_has_no_gotos() {
        let body = check(&[Branch(1, 2), Jump(3), Jump(3), Return]);
        assert_eq!(crate::goto_resolve::count_gotos(&body), 0);
    }

    #[test]
    fn early_return_cascade_has_no_gotos() {
        // 0: if (a) return; 1: if (b) {2} 3: if (c) return; 4: return.
        let body = check(&[
            Branch(5, 1),
            Branch(2, 3),
            Jump(3),
            Branch(5, 4),
            Return,
            Return,
        ]);
        assert_eq!(crate::goto_resolve::count_gotos(&body), 0);
    }

    #[test]
    fn nested_loops_with_exits_into_a_shared_chain_have_no_gotos() {
        // Outer loop 1..=6, inner loop 2..=3. The inner loop exits to 4 or
        // to 5, and 4 falls into 5 before the outer latch.
        let body = check(&[
            Jump(1),
            Branch(2, 7),
            Branch(4, 3),
            Branch(2, 5),
            Jump(5),
            Branch(1, 6),
            Jump(1),
            Return,
        ]);
        assert_eq!(
            crate::goto_resolve::count_gotos(&body),
            0,
            "{}",
            render(&body)
        );
    }

    #[test]
    fn forwarding_blocks_are_bypassed() {
        let body = check(&[Branch(1, 2), Forward(3), Jump(3), Return]);
        assert_eq!(crate::goto_resolve::count_gotos(&body), 0);
    }

    #[test]
    fn two_entry_loop_keeps_control_flow() {
        // 1 and 2 form a loop entered at either block, so a goto remains.
        let body = check(&[Branch(1, 2), Branch(2, 3), Branch(1, 3), Return]);
        assert!(
            crate::goto_resolve::count_gotos(&body) > 0,
            "{}",
            render(&body)
        );
    }

    #[test]
    fn indirect_jumps_are_not_handled() {
        let mut func = Function::new("indirect", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![Varnode::reg(0, 8)],
            0x1000,
        ));
        block.successors = smallvec![BlockId(1)];
        func.insert_block(block);
        let mut ret = BasicBlock::new(BlockId(1));
        ret.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));
        func.insert_block(ret);
        let ssa = build_ssa(func);
        assert!(StructureCtx::new(&ssa).structure_by_dominators().is_none());
    }

    #[test]
    fn medium_main_cfg_keeps_control_flow() {
        // The CFG of `main` in fixtures/medium after the pass pipeline.
        let shapes = [
            Jump(1),
            Branch(1, 2),
            Jump(3),
            Branch(3, 4),
            Jump(7),
            Forward(6),
            Jump(7),
            Branch(6, 8),
            Branch(7, 9),
            Jump(10),
            Branch(10, 11),
            Jump(12),
            Branch(12, 13),
            Branch(16, 14),
            Branch(17, 15),
            Jump(16),
            Branch(16, 17),
            Branch(20, 18),
            Branch(21, 19),
            Jump(20),
            Branch(20, 21),
            Jump(22),
            Branch(22, 23),
            Jump(24),
            Branch(27, 25),
            Branch(24, 26),
            Jump(27),
            Branch(63, 28),
            Forward(34),
            Forward(30),
            Branch(34, 31),
            Branch(30, 32),
            Branch(63, 33),
            Jump(34),
            Branch(32, 35),
            Jump(36),
            Branch(36, 37),
            Jump(43),
            Forward(39),
            Branch(59, 40),
            Jump(41),
            Branch(46, 42),
            Jump(43),
            Branch(58, 44),
            Branch(39, 45),
            Branch(42, 46),
            Jump(47),
            Branch(50, 48),
            Branch(61, 49),
            Branch(48, 50),
            Branch(47, 51),
            Jump(54),
            Forward(53),
            Jump(54),
            Branch(53, 55),
            Branch(62, 56),
            Return,
            Forward(58),
            Jump(41),
            Jump(41),
            Forward(61),
            Jump(47),
            Jump(63),
            Jump(31),
        ];
        check(&shapes);
    }

    #[test]
    fn random_cfgs_keep_control_flow() {
        let mut state = 0x2545_f491_4f6c_dd1du64;
        let mut next = |bound: u32| {
            state ^= state << 13;
            state ^= state >> 7;
            state ^= state << 17;
            u32::try_from(state % u64::from(bound)).expect("bounded")
        };
        let mut structured = 0;
        for _ in 0..400 {
            let len = 2 + next(10);
            let shapes: Vec<Shape> = (0..len)
                .map(|_| match next(8) {
                    0 => Return,
                    1 | 2 => Jump(next(len)),
                    3 => Forward(next(len)),
                    _ => Branch(next(len), next(len)),
                })
                .collect();
            if let Some(mut body) = dominator_body(&shapes) {
                structured += 1;
                assert_equivalent(&shapes, &body);
                crate::goto_resolve::resolve_body(&mut body);
                assert_equivalent(&shapes, &body);
            }
        }
        assert!(structured > 200, "only {structured} random CFGs structured");
    }
}
