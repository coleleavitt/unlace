//! Merge a `goto` exit of a `while (1)` loop into the loop's `break` exits.
//!
//! When a loop has two kinds of exit, the structurer keeps the loop's
//! `break`s and turns the other exit into `goto L`. That is the shape SAILR
//! traces to compiler jump threading and inlining: an inlined
//! `if (is_prime(n)) count++;` becomes a loop that leaves either to "next
//! candidate" or, two loops up, to "count it".
//!
//! The two exits are already told apart inside the loop. If every `break`
//! sits in one arm of `if (c)` and the `goto` in the other, then after the
//! loop `c` still holds the value it had at the exit. So the goto becomes a
//! `break`, and right after the loop the path is chosen again on `c`:
//!
//! ```text
//! while (1) {                          while (1) {
//!     if (c) break;                        if (c) break;
//!     ...                                  ...
//!     if (d) goto L;              =>       if (d) break;
//! }                                    }
//! rest;                                if (c) { rest; }
//! // falls through to L:               // the !c path falls through to L
//! ```
//!
//! After the loop, `goto L` must be expressible without a goto: falling out
//! of the enclosing scopes reaches `L`, or `L` is the start or the follow of
//! the innermost enclosing loop (`continue` / `break`). The rewrite never
//! creates new variables: `c` is reused, so it is only applied when nothing
//! in either arm of the `if` writes storage that `c` is computed from.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode, LabelId};

macro_rules! exit_merge_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::loop_exit_merge", $($arg)*)
    };
}

/// Which child list of a node a path step enters.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Slot {
    Body,
    Then,
    Else,
}

/// `(index in scope, child list entered)` steps from the function body.
type ScopePath = Vec<(usize, Slot)>;

/// How control reaches a label from some position without a goto.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Jump {
    FallThrough,
    Break,
    Continue,
}

pub fn merge_loop_exits(func: &mut HirFunction, ssa: &SsaFunction) {
    let index = SsaIndex::new(ssa);
    // Each rewrite removes one goto, so this terminates.
    while let Some(rewrite) = find_rewrite(&func.body, &func.foldable_exprs, ssa, &index) {
        exit_merge_debug!(
            "func={} goto={:?} loop={:?} cond={:?} jump={:?}",
            func.name,
            rewrite.goto,
            rewrite.loop_pos,
            rewrite.cond,
            rewrite.after_loop
        );
        apply(&mut func.body, rewrite);
    }
}

struct Rewrite {
    /// Scope and index of the `goto`.
    goto: (ScopePath, usize),
    /// Scope and index of the loop it leaves.
    loop_pos: (ScopePath, usize),
    cond: SsaVarnode,
    /// `true` when the goto is in the then-arm of `if (cond)`.
    goto_on_true: bool,
    after_loop: AfterLoop,
}

#[derive(Debug)]
enum AfterLoop {
    /// Both exits continue at the same place: the goto is a plain `break`.
    Nothing,
    /// `if (goto side) jump;` right after the loop.
    Jump(Jump),
    /// `if (break side) { rest }`: the goto side falls out of the scope.
    GuardRest,
}

fn children(node: &HirNode, slot: Slot) -> Option<&Vec<HirNode>> {
    match (node, slot) {
        (HirNode::Block(nodes), Slot::Body)
        | (
            HirNode::While { body: nodes, .. }
            | HirNode::DoWhile { body: nodes, .. }
            | HirNode::For { body: nodes, .. },
            Slot::Body,
        )
        | (
            HirNode::If {
                then_body: nodes, ..
            },
            Slot::Then,
        )
        | (
            HirNode::If {
                else_body: Some(nodes),
                ..
            },
            Slot::Else,
        ) => Some(nodes),
        _ => None,
    }
}

fn children_mut(node: &mut HirNode, slot: Slot) -> Option<&mut Vec<HirNode>> {
    match (node, slot) {
        (HirNode::Block(nodes), Slot::Body)
        | (
            HirNode::While { body: nodes, .. }
            | HirNode::DoWhile { body: nodes, .. }
            | HirNode::For { body: nodes, .. },
            Slot::Body,
        )
        | (
            HirNode::If {
                then_body: nodes, ..
            },
            Slot::Then,
        )
        | (
            HirNode::If {
                else_body: Some(nodes),
                ..
            },
            Slot::Else,
        ) => Some(nodes),
        _ => None,
    }
}

fn scope<'a>(root: &'a [HirNode], path: &[(usize, Slot)]) -> &'a [HirNode] {
    path.iter().fold(root, |nodes, &(idx, slot)| {
        children(&nodes[idx], slot).expect("scope path names a child list")
    })
}

fn scope_mut<'a>(root: &'a mut Vec<HirNode>, path: &[(usize, Slot)]) -> &'a mut Vec<HirNode> {
    path.iter().fold(root, |nodes, &(idx, slot)| {
        children_mut(&mut nodes[idx], slot).expect("scope path names a child list")
    })
}

fn node_at<'a>(root: &'a [HirNode], path: &[(usize, Slot)]) -> &'a HirNode {
    let (&(idx, _), parent) = path.split_last().expect("non-empty path");
    &scope(root, parent)[idx]
}

fn is_infinite_loop(node: &HirNode) -> bool {
    match node {
        HirNode::While { cond, .. } | HirNode::DoWhile { cond, .. } => {
            cond.base.space == SpaceId::Const && cond.base.offset != 0
        }
        _ => false,
    }
}

fn is_loop(node: &HirNode) -> bool {
    matches!(
        node,
        HirNode::While { .. } | HirNode::DoWhile { .. } | HirNode::For { .. }
    )
}

fn child_slots(node: &HirNode) -> &'static [Slot] {
    match node {
        HirNode::Block(_)
        | HirNode::While { .. }
        | HirNode::DoWhile { .. }
        | HirNode::For { .. } => &[Slot::Body],
        HirNode::If {
            else_body: Some(_), ..
        } => &[Slot::Then, Slot::Else],
        HirNode::If { .. } => &[Slot::Then],
        _ => &[],
    }
}

fn collect_gotos(
    nodes: &[HirNode],
    path: &mut ScopePath,
    out: &mut Vec<(ScopePath, usize, LabelId)>,
) {
    for (idx, node) in nodes.iter().enumerate() {
        if let HirNode::Goto(label) = node {
            out.push((path.clone(), idx, *label));
        }
        for &slot in child_slots(node) {
            path.push((idx, slot));
            collect_gotos(children(node, slot).expect("slot exists"), path, out);
            path.pop();
        }
    }
}

fn find_rewrite(
    root: &[HirNode],
    foldable: &BTreeSet<SsaVarnode>,
    ssa: &SsaFunction,
    index: &SsaIndex,
) -> Option<Rewrite> {
    let mut gotos = Vec::new();
    collect_gotos(root, &mut Vec::new(), &mut gotos);
    gotos
        .into_iter()
        .find_map(|(path, idx, label)| plan(root, foldable, ssa, index, path, idx, label))
}

fn plan(
    root: &[HirNode],
    foldable: &BTreeSet<SsaVarnode>,
    ssa: &SsaFunction,
    index: &SsaIndex,
    path: ScopePath,
    idx: usize,
    label: LabelId,
) -> Option<Rewrite> {
    let loop_depth = (0..path.len())
        .rev()
        .find(|&d| is_loop(node_at(root, &path[..=d])))?;
    let loop_node = node_at(root, &path[..=loop_depth]);
    if !is_infinite_loop(loop_node) {
        return None;
    }
    let loop_breaks = count_breaks(children(loop_node, Slot::Body)?)?;

    // The innermost `if` between the loop and the goto whose other arm
    // holds every `break` of the loop.
    let (if_depth, goto_on_true) = (loop_depth + 1..path.len()).rev().find_map(|d| {
        let HirNode::If {
            then_body,
            else_body,
            ..
        } = node_at(root, &path[..=d])
        else {
            return None;
        };
        let other: &[HirNode] = match path[d].1 {
            Slot::Then => else_body.as_deref().unwrap_or(&[]),
            Slot::Else => then_body,
            Slot::Body => return None,
        };
        (count_breaks(other)? == loop_breaks).then_some((d, path[d].1 == Slot::Then))
    })?;
    let HirNode::If {
        cond,
        then_body,
        else_body,
    } = node_at(root, &path[..=if_depth])
    else {
        return None;
    };
    let reads = condition_reads(*cond, foldable, ssa, index)?;
    if writes_any(then_body, &reads)? || writes_any(else_body.as_deref().unwrap_or(&[]), &reads)? {
        exit_merge_debug!("skip goto={label:?}: an arm writes condition input {reads:?}");
        return None;
    }

    let loop_scope = path[..loop_depth].to_vec();
    let loop_idx = path[loop_depth].0;
    let after_loop = match resolve(root, &loop_scope, loop_idx + 1, label, true) {
        Some(Jump::FallThrough) => AfterLoop::Nothing,
        Some(jump) => AfterLoop::Jump(jump),
        None => {
            let end = scope(root, &loop_scope).len();
            (resolve(root, &loop_scope, end, label, false) == Some(Jump::FallThrough))
                .then_some(AfterLoop::GuardRest)?
        }
    };
    Some(Rewrite {
        goto: (path, idx),
        loop_pos: (loop_scope, loop_idx),
        cond: *cond,
        goto_on_true,
        after_loop,
    })
}

/// Number of `break`s that leave the loop owning `nodes`; `None` when a
/// node kind this pass does not model could hide one.
fn count_breaks(nodes: &[HirNode]) -> Option<usize> {
    nodes.iter().try_fold(0, |acc, node| {
        let here = match node {
            HirNode::Break => 1,
            HirNode::Block(children) => count_breaks(children)?,
            HirNode::If {
                then_body,
                else_body,
                ..
            } => count_breaks(then_body)? + count_breaks(else_body.as_deref().unwrap_or(&[]))?,
            HirNode::While { .. }
            | HirNode::DoWhile { .. }
            | HirNode::For { .. }
            | HirNode::Switch { .. }
            | HirNode::Statement(_)
            | HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::Continue
            | HirNode::Ternary { .. }
            | HirNode::TailCall { .. } => 0,
            _ => return None,
        };
        Some(acc + here)
    })
}

/// Whether any node writes storage in `reads`; `None` when a node's
/// writes are not known (calls, unmodelled node kinds).
fn writes_any(nodes: &[HirNode], reads: &[Varnode]) -> Option<bool> {
    let overlaps = |out: &Varnode| {
        reads.iter().any(|r| {
            r.space == out.space
                && r.offset < out.offset + u64::from(out.size)
                && out.offset < r.offset + u64::from(r.size)
        })
    };
    for node in nodes {
        let writes = match node {
            HirNode::Statement(insn) => {
                if matches!(insn.op, IrOp::Call | IrOp::Callind | IrOp::Callother) {
                    return None;
                }
                insn.output.as_ref().is_some_and(overlaps)
            }
            HirNode::Ternary { output, .. } => overlaps(output),
            HirNode::Block(children)
            | HirNode::While { body: children, .. }
            | HirNode::DoWhile { body: children, .. } => writes_any(children, reads)?,
            HirNode::For {
                init, update, body, ..
            } => {
                init.iter()
                    .chain(std::iter::once(update))
                    .any(|insn| insn.output.as_ref().is_some_and(overlaps))
                    || writes_any(body, reads)?
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                writes_any(then_body, reads)?
                    || writes_any(else_body.as_deref().unwrap_or(&[]), reads)?
            }
            HirNode::Break
            | HirNode::Continue
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::Return(_) => false,
            _ => return None,
        };
        if writes {
            return Some(true);
        }
    }
    Some(false)
}

/// Where each SSA value is defined and how many instruction operands read
/// it. A value defined twice (version-0 aliasing) has no definition.
struct SsaIndex {
    defs: BTreeMap<SsaVarnode, Option<(BlockId, usize)>>,
    uses: BTreeMap<SsaVarnode, usize>,
}

impl SsaIndex {
    fn new(ssa: &SsaFunction) -> Self {
        let mut defs: BTreeMap<SsaVarnode, Option<(BlockId, usize)>> = BTreeMap::new();
        let mut uses: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
        for (&(bid, idx, ref slot), &sv) in &ssa.var_map {
            match slot {
                VarnodeSlot::Output => {
                    defs.entry(sv)
                        .and_modify(|site| *site = None)
                        .or_insert(Some((bid, idx)));
                }
                VarnodeSlot::Input(_) => *uses.entry(sv).or_default() += 1,
            }
        }
        Self { defs, uses }
    }
}

/// Storage the printed condition reads. The printer renders a boolean
/// definition at every control use and inlines single-use values, but
/// refers to other values by name; the walk descends through the former
/// and stops at the latter.
fn condition_reads(
    cond: SsaVarnode,
    foldable: &BTreeSet<SsaVarnode>,
    ssa: &SsaFunction,
    index: &SsaIndex,
) -> Option<Vec<Varnode>> {
    const MAX_DEPTH: u32 = 8;
    let mut reads = Vec::new();
    let mut stack = vec![(cond, 0)];
    while let Some((sv, depth)) = stack.pop() {
        if sv.base.space == SpaceId::Const {
            continue;
        }
        reads.push(sv.base);
        let Some(&site) = index.defs.get(&sv) else {
            continue;
        };
        let (bid, idx) = site?;
        let insn = ssa.function.blocks.get(&bid)?.insns.get(idx)?;
        let inlined = sv == cond
            || insn.op.type_family() == Some('b')
            || foldable.contains(&sv)
            || index.uses.get(&sv).copied().unwrap_or(0) <= 1;
        if !inlined {
            continue;
        }
        if depth >= MAX_DEPTH || !is_pure(insn.op) {
            return None;
        }
        for (slot, input) in insn.inputs.iter().enumerate() {
            if input.space == SpaceId::Const {
                continue;
            }
            let input_sv = *ssa.var_map.get(&(bid, idx, VarnodeSlot::Input(slot)))?;
            stack.push((input_sv, depth + 1));
        }
    }
    Some(reads)
}

fn is_pure(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Copy
            | IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntDiv
            | IrOp::IntSdiv
            | IrOp::IntRem
            | IrOp::IntSrem
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::IntZext
            | IrOp::IntSext
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::IntCarry
            | IrOp::IntScarry
            | IrOp::IntSborrow
            | IrOp::BoolNegate
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::Subpiece
            | IrOp::Popcount
    )
}

enum LabelScan {
    Found,
    Blocked,
    Exhausted,
}

/// From `nodes[start..]`: is `label` reached before any executable node?
fn scan_for_label(nodes: &[HirNode], start: usize, label: LabelId) -> LabelScan {
    for node in nodes.iter().skip(start) {
        match node {
            HirNode::Label(l) if *l == label => return LabelScan::Found,
            HirNode::Label(_) => {}
            _ => return LabelScan::Blocked,
        }
    }
    LabelScan::Exhausted
}

/// How `goto label` placed at `scope(path)[start]` can be written without
/// a goto. Only `FallThrough` is accepted when `allow_jump` is false.
fn resolve(
    root: &[HirNode],
    path: &[(usize, Slot)],
    start: usize,
    label: LabelId,
    allow_jump: bool,
) -> Option<Jump> {
    let jump = || {
        if allow_jump {
            loop_jump(root, path, label)
        } else {
            None
        }
    };
    match scan_for_label(scope(root, path), start, label) {
        LabelScan::Found => return Some(Jump::FallThrough),
        LabelScan::Blocked => return jump(),
        LabelScan::Exhausted => {}
    }
    // Falling off the end of this scope.
    let (&(idx, _), parent) = path.split_last()?;
    let owner = &scope(root, parent)[idx];
    match owner {
        HirNode::Block(_) | HirNode::If { .. } => resolve(root, parent, idx + 1, label, allow_jump),
        _ if is_infinite_loop(owner) => {
            match scan_for_label(children(owner, Slot::Body)?, 0, label) {
                LabelScan::Found => Some(Jump::FallThrough),
                _ => jump(),
            }
        }
        _ => jump(),
    }
}

/// `continue`/`break` of the innermost loop enclosing `path` that lands on
/// `label`.
fn loop_jump(root: &[HirNode], path: &[(usize, Slot)], label: LabelId) -> Option<Jump> {
    let depth = (0..path.len())
        .rev()
        .find(|&d| is_loop(node_at(root, &path[..=d])))?;
    let owner = node_at(root, &path[..=depth]);
    if is_infinite_loop(owner)
        && matches!(
            scan_for_label(children(owner, Slot::Body)?, 0, label),
            LabelScan::Found
        )
    {
        return Some(Jump::Continue);
    }
    (resolve(root, &path[..depth], path[depth].0 + 1, label, false) == Some(Jump::FallThrough))
        .then_some(Jump::Break)
}

fn if_on(cond: SsaVarnode, when_true: bool, body: Vec<HirNode>) -> HirNode {
    if when_true {
        HirNode::If {
            cond,
            then_body: body,
            else_body: None,
        }
    } else {
        HirNode::If {
            cond,
            then_body: Vec::new(),
            else_body: Some(body),
        }
    }
}

fn apply(root: &mut Vec<HirNode>, rewrite: Rewrite) {
    let (goto_scope, goto_idx) = rewrite.goto;
    scope_mut(root, &goto_scope)[goto_idx] = HirNode::Break;
    let (loop_scope, loop_idx) = rewrite.loop_pos;
    let nodes = scope_mut(root, &loop_scope);
    match rewrite.after_loop {
        AfterLoop::Nothing => {}
        AfterLoop::Jump(jump) => {
            let jump = match jump {
                Jump::Break => HirNode::Break,
                Jump::Continue => HirNode::Continue,
                Jump::FallThrough => unreachable!("fall-through needs no jump"),
            };
            nodes.insert(
                loop_idx + 1,
                if_on(rewrite.cond, rewrite.goto_on_true, vec![jump]),
            );
        }
        AfterLoop::GuardRest => {
            let rest = nodes.split_off(loop_idx + 1);
            nodes.push(if_on(rewrite.cond, !rewrite.goto_on_true, rest));
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use super::*;

    const X: Varnode = Varnode::reg(0, 4);
    const Y: Varnode = Varnode::reg(8, 4);

    /// SSA holding `c = (x == 0)` and `d = (y == 0)`; returns it with `c`, `d`.
    fn ssa() -> (SsaFunction, SsaVarnode, SsaVarnode) {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        let (c, d) = (Varnode::unique(0x10, 1), Varnode::unique(0x20, 1));
        let zero = Varnode::constant(0, 4);
        b0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            c,
            smallvec![X, zero],
            0x1000,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            d,
            smallvec![Y, zero],
            0x1004,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let sv = |base| SsaVarnode { base, version: 0 };
        (ssa, sv(c), sv(d))
    }

    fn hir(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "t".into(),
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

    fn forever(body: Vec<HirNode>) -> HirNode {
        HirNode::While {
            cond: SsaVarnode {
                base: Varnode::constant(1, 1),
                version: 0,
            },
            body,
        }
    }

    fn write(out: Varnode) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(1, 4)],
            0x2000,
        ))
    }

    fn when(cond: SsaVarnode, then_body: Vec<HirNode>, else_body: Option<Vec<HirNode>>) -> HirNode {
        HirNode::If {
            cond,
            then_body,
            else_body,
        }
    }

    /// `if (e) { while (1) { if (c) break; y = 1; if (d) goto L; } rest; } L:`
    /// becomes `... if (d) break; } if (c) { rest; } } L:`.
    fn peeled_exit(arm_write: Varnode) -> (HirFunction, SsaFunction, SsaVarnode, SsaVarnode) {
        let (ssa, c, d) = ssa();
        let l = LabelId(7);
        let inner = forever(vec![when(
            c,
            vec![HirNode::Break],
            Some(vec![
                write(arm_write),
                when(d, vec![HirNode::Goto(l)], None),
            ]),
        )]);
        let func = hir(vec![
            when(d, vec![inner, write(Y), HirNode::Return(None)], None),
            HirNode::Label(l),
        ]);
        (func, ssa, c, d)
    }

    #[test]
    fn guards_the_code_after_the_loop_with_the_break_condition() {
        let (mut func, ssa, c, d) = peeled_exit(Y);
        merge_loop_exits(&mut func, &ssa);

        let inner = forever(vec![when(
            c,
            vec![HirNode::Break],
            Some(vec![write(Y), when(d, vec![HirNode::Break], None)]),
        )]);
        let expected = vec![
            when(
                d,
                vec![inner, when(c, vec![write(Y), HirNode::Return(None)], None)],
                None,
            ),
            HirNode::Label(LabelId(7)),
        ];
        assert_eq!(func.body, expected);
    }

    #[test]
    fn keeps_the_goto_when_an_arm_changes_the_condition() {
        let (mut func, ssa, ..) = peeled_exit(X);
        let before = func.body.clone();
        merge_loop_exits(&mut func, &ssa);
        assert_eq!(func.body, before);
    }

    /// `while (1) { L: y = 1; while (1) { y = 1; if (d) { <inner> } else break; } }`
    /// where `<inner>` is `while (1) { if (c) { if (d) goto L; } else break; }`.
    /// The goto leaves two loops: it becomes `break`, and `if (c) break;`
    /// after `<inner>` leaves the middle loop, from which falling off the
    /// outer body reaches `L`.
    #[test]
    fn two_level_continue_becomes_break_and_guarded_break() {
        let (ssa, c, d) = ssa();
        let l = LabelId(3);
        let inner = |exit| {
            forever(vec![when(
                c,
                vec![when(d, vec![exit], None)],
                Some(vec![HirNode::Break]),
            )])
        };
        let middle = |inner_loop, after: Vec<HirNode>| {
            let mut body = vec![
                write(Y),
                when(d, vec![inner_loop], Some(vec![HirNode::Break])),
            ];
            body.extend(after);
            forever(body)
        };
        let mut func = hir(vec![forever(vec![
            HirNode::Label(l),
            write(Y),
            middle(inner(HirNode::Goto(l)), vec![]),
        ])]);
        merge_loop_exits(&mut func, &ssa);

        let merged_middle = forever(vec![
            write(Y),
            when(
                d,
                vec![inner(HirNode::Break), when(c, vec![HirNode::Break], None)],
                Some(vec![HirNode::Break]),
            ),
        ]);
        let expected = vec![forever(vec![HirNode::Label(l), write(Y), merged_middle])];
        assert_eq!(func.body, expected);
    }
}
