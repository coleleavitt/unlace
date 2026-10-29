//! Itanium C++ exception dispatch: make catch handlers reachable and turn
//! the dispatch back into `try { } catch { }`.
//!
//! The unwinder enters a landing pad without any branch, so the lifted CFG
//! leaves every catch handler unreachable and SSA never sees it. Hex-Rays'
//! `eh34` support (see `research/hexrays-exception-structuring.md`) adds a
//! conditional jump on a `__eh34_try` helper at the start of the protected
//! range and later rewrites the resulting `if` into a `cit_try`. This module
//! does the same in two steps:
//!
//! 1. [`install_eh_dispatch`] runs on the lifted [`Function`] before SSA. It
//!    inserts a dispatch block in front of each try start whose `CBRANCH`
//!    on [`EhHelper::Try`] goes to the landing pad (true) or the try body
//!    (false), and defines the registers the personality routine passes to
//!    the pad.
//! 2. [`recover_try_catch`] runs on the structured HIR and rewrites each
//!    `if` on an [`EhHelper::Try`] flag into [`HirNode::TryCatch`].
//!
//! A cleanup-only landing pad ([`LandingPadKind::Cleanup`]) gets the same
//! dispatch on an [`EhHelper::Wind`] flag and becomes
//! [`HirNode::TryFinally`]; an MSVC `__except` scope
//! ([`LandingPadKind::SehExcept`]) dispatches on [`EhHelper::Except`] and
//! becomes [`HirNode::TryExcept`].

use std::collections::{BTreeMap, BTreeSet};

use smallvec::smallvec;
use unlace_ir::cfg::EdgeKind;
use unlace_ir::eh::{EhHelper, SehFilter};
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::HirNode;

/// Unique-space offset of the first dispatch flag. Lifter temporaries are
/// numbered from zero per function, far below this.
const FLAG_UNIQUE_BASE: u64 = 0x4548_0000;

/// A handler the unwinder enters: an Itanium landing pad from the LSDA
/// call-site table, or an MSVC `__except` body from the scope table.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LandingPad {
    /// First instruction of the handler.
    pub addr: u64,
    /// Start of the first protected range that unwinds to `addr`.
    pub try_start: u64,
    pub kind: LandingPadKind,
}

/// What the unwinder enters a [`LandingPad`] for.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum LandingPadKind {
    /// A C++ catch handler.
    Catch {
        /// The type filter the pad always receives, when every call site
        /// that unwinds to it names exactly one catch clause and no cleanup.
        selector: Option<u64>,
    },
    /// Destructors (and `__cxa_end_catch`) that run on unwind, ending in
    /// `_Unwind_Resume`.
    Cleanup,
    /// An MSVC `__except (filter) { }` body.
    SehExcept { filter: SehFilter },
}

impl LandingPadKind {
    /// The dispatch helper whose flag sends control to the pad.
    fn dispatch_helper(&self) -> EhHelper {
        match self {
            Self::Catch { .. } => EhHelper::Try,
            Self::Cleanup => EhHelper::Wind,
            Self::SehExcept { .. } => EhHelper::Except,
        }
    }

    /// The selector an Itanium pad receives: a known type filter, `0` for
    /// a cleanup, or `None` inside the option when only the personality
    /// routine knows. `None` for an MSVC handler, which receives nothing.
    fn itanium_selector(&self) -> Option<Option<u64>> {
        match self {
            Self::Catch { selector } => Some(*selector),
            Self::Cleanup => Some(Some(0)),
            Self::SehExcept { .. } => None,
        }
    }
}

/// Insert one dispatch block per landing pad of `pads` and define the
/// exception and selector registers (`data_regs`, see
/// [`unlace_ir::eh::landing_pad_data_regs`]) at each Itanium pad. An MSVC
/// `__except` body receives no such registers.
///
/// `func` must have block leaders at every `try_start` and `addr`. Pads
/// whose blocks are missing, or whose try start is the function entry, are
/// skipped. Returns the number of dispatch blocks inserted.
pub fn install_eh_dispatch(
    func: &mut Function,
    pads: &[LandingPad],
    data_regs: (Varnode, Varnode),
) -> usize {
    let mut installed = 0;
    for pad in pads {
        let (Some(try_block), Some(pad_block)) =
            (block_at(func, pad.try_start), block_at(func, pad.addr))
        else {
            continue;
        };
        if try_block == func.entry || try_block == pad_block {
            continue;
        }

        let dispatch = BlockId(func.blocks.keys().last().map_or(0, |b| b.0 + 1));
        let preds: Vec<BlockId> = func
            .blocks
            .iter()
            .filter(|(_, b)| b.successors.contains(&try_block))
            .map(|(&id, _)| id)
            .collect();
        for pred in preds {
            let block = func.blocks.get_mut(&pred).expect("predecessor exists");
            for succ in &mut block.successors {
                if *succ == try_block {
                    *succ = dispatch;
                }
            }
            // Blocks without a branch fall through by block order; the
            // dispatch block is out of order, so branch to it explicitly.
            let branches = block
                .insns
                .last()
                .is_some_and(|i| matches!(i.op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind));
            if !branches {
                block.insns.push(IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![Varnode::constant(pad.try_start, 8)],
                    pad.try_start,
                ));
            }
        }

        let flag = Varnode::unique(FLAG_UNIQUE_BASE + installed as u64, 1);
        let dispatch_insn = match &pad.kind {
            LandingPadKind::SehExcept { filter } => {
                EhHelper::except_insn(flag, *filter, pad.try_start)
            }
            kind => kind.dispatch_helper().insn(flag, pad.try_start),
        };
        let mut block = BasicBlock::new(dispatch);
        block.insns = vec![
            dispatch_insn,
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(pad.addr, 8), flag],
                pad.try_start,
            ),
        ];
        block.successors = smallvec![pad_block, try_block];
        func.insert_block(block);

        detach_fallthrough_into_pad(func, pad_block, pad.addr);
        if let Some(selector) = pad.kind.itanium_selector() {
            define_landing_pad_data(func, pad_block, pad.addr, selector, data_regs);
        }
        installed += 1;
    }
    installed
}

/// Take `pad_block` out of the successor lists of the blocks that only
/// fall into it by layout. Only the unwinder enters a handler; the code
/// laid out before it ends in a call the lifter does not know is noreturn
/// (`__cxa_throw`, `_Unwind_Resume`), and a successor edge from there would
/// make the pad's registers and stores look live along a path that does not
/// exist. Explicit branches to the pad (the dispatch block's) stay. The
/// CFG builder still adds a layout fall-through edge for such a block;
/// the structurer discounts it (`StructureCtx::eh_handlers`).
fn detach_fallthrough_into_pad(func: &mut Function, pad_block: BlockId, pad_addr: u64) {
    for block in func.blocks.values_mut() {
        if !block.successors.contains(&pad_block) {
            continue;
        }
        let branches_to_pad = block.insns.last().is_some_and(|insn| {
            matches!(insn.op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind)
                && insn
                    .inputs
                    .iter()
                    .any(|vn| vn.space == SpaceId::Const && vn.offset == pad_addr)
        });
        if !branches_to_pad {
            block.successors.retain(|succ| *succ != pad_block);
        }
    }
}

fn block_at(func: &Function, addr: u64) -> Option<BlockId> {
    func.blocks
        .iter()
        .find(|(_, b)| b.insns.first().is_some_and(|i| i.addr == addr))
        .map(|(&id, _)| id)
}

/// Prepend the personality routine's register outputs to the pad, once.
fn define_landing_pad_data(
    func: &mut Function,
    pad_block: BlockId,
    pad_addr: u64,
    pad_selector: Option<u64>,
    (exception, selector): (Varnode, Varnode),
) {
    let block = func.blocks.get_mut(&pad_block).expect("pad block exists");
    if block
        .insns
        .first()
        .is_some_and(|i| EhHelper::of(i).is_some())
    {
        return;
    }
    let selector_def = match pad_selector {
        Some(filter) => IrInsn::with_output(
            IrOp::Copy,
            selector,
            smallvec![Varnode::constant(filter, selector.size)],
            pad_addr,
        ),
        None => EhHelper::Selector.insn(selector, pad_addr),
    };
    let exception_def = EhHelper::Exception.insn(exception, pad_addr);
    block.insns.splice(0..0, [exception_def, selector_def]);
}

/// Whether `bid` is a dispatch block [`install_eh_dispatch`] inserted: its
/// branch flag comes from a [`EhHelper::Try`], [`EhHelper::Wind`], or
/// [`EhHelper::Except`] helper, and its true arm is a handler.
pub fn is_dispatch_block(func: &SsaFunction, bid: BlockId) -> bool {
    func.function.blocks.get(&bid).is_some_and(|block| {
        block.insns.iter().any(|insn| {
            matches!(
                EhHelper::of(insn),
                Some(EhHelper::Try | EhHelper::Wind | EhHelper::Except)
            )
        })
    })
}

/// The handler blocks of `func`: the true successors of its dispatch
/// blocks.
pub fn handler_blocks(func: &SsaFunction) -> BTreeSet<BlockId> {
    func.function
        .blocks
        .keys()
        .filter(|&&bid| is_dispatch_block(func, bid))
        .flat_map(|&bid| func.cfg.edges_from(bid))
        .filter(|(_, kind)| *kind == EdgeKind::ConditionalTrue)
        .map(|(target, _)| target)
        .collect()
}

/// Rewrite every `if` on a dispatch flag in `body` into the try construct
/// its helper stands for: the false arm is the try body, the true arm the
/// handler. [`EhHelper::Try`] gives [`HirNode::TryCatch`],
/// [`EhHelper::Wind`] [`HirNode::TryFinally`], and [`EhHelper::Except`]
/// [`HirNode::TryExcept`].
pub fn recover_try_catch(body: &mut Vec<HirNode>, func: &SsaFunction) {
    let flags = try_flags(func);
    if !flags.is_empty() {
        rewrite_body(body, func, &flags);
    }
}

/// The handler a dispatch flag sends control to.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Dispatch {
    /// A catch pad at this address.
    Catch {
        pad: u64,
    },
    Cleanup,
    Except {
        filter: SehFilter,
    },
}

/// SSA flags defined by a dispatch helper, with the handler each one
/// branches to.
fn try_flags(func: &SsaFunction) -> TryFlags {
    let mut flags = TryFlags::new();
    for (&bid, block) in &func.function.blocks {
        let Some((def_idx, insn, helper)) = block.insns.iter().enumerate().find_map(|(idx, i)| {
            let helper = EhHelper::of(i)?;
            matches!(helper, EhHelper::Try | EhHelper::Wind | EhHelper::Except)
                .then_some((idx, i, helper))
        }) else {
            continue;
        };
        let Some(&flag) = func.var_map.get(&(bid, def_idx, VarnodeSlot::Output)) else {
            continue;
        };
        let dispatch = match helper {
            EhHelper::Wind => Dispatch::Cleanup,
            EhHelper::Except => {
                let Some(filter) = EhHelper::seh_filter(insn) else {
                    continue;
                };
                Dispatch::Except { filter }
            }
            _ => {
                let pad = block
                    .insns
                    .iter()
                    .rev()
                    .find(|i| i.op == IrOp::Cbranch)
                    .and_then(|i| i.inputs.first())
                    .map_or(0, |vn| vn.offset);
                Dispatch::Catch { pad }
            }
        };
        flags.insert(flag, dispatch);
    }
    flags
}

type TryFlags = BTreeMap<SsaVarnode, Dispatch>;

fn rewrite_body(body: &mut Vec<HirNode>, func: &SsaFunction, flags: &TryFlags) {
    let mut converted = Vec::new();
    for node in body.iter_mut() {
        converted.extend(rewrite_node(node, func, flags));
    }
    // A converted flag has no use left; drop its definition.
    body.retain(|node| {
        !matches!(node, HirNode::Statement(insn)
            if EhHelper::of(insn).is_some()
                && insn.output.is_some_and(|out| converted.contains(&out)))
    });
}

/// Rewrite the dispatch `if`s inside `node` and `node` itself; returns the
/// flags of the `if`s converted at this level.
fn rewrite_node(node: &mut HirNode, func: &SsaFunction, flags: &TryFlags) -> Vec<Varnode> {
    match node {
        HirNode::Block(children) => {
            rewrite_body(children, func, flags);
        }
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            rewrite_body(then_body, func, flags);
            if let Some(b) = else_body {
                rewrite_body(b, func, flags);
            }
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            rewrite_body(body, func, flags);
        }
        HirNode::Switch { cases, default, .. } => {
            for (_, b, _) in cases {
                rewrite_body(b, func, flags);
            }
            if let Some(b) = default {
                rewrite_body(b, func, flags);
            }
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            rewrite_body(try_body, func, flags);
            for (_, b) in catch_arms {
                rewrite_body(b, func, flags);
            }
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            rewrite_body(try_body, func, flags);
            rewrite_body(finally_body, func, flags);
        }
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => {
            rewrite_body(try_body, func, flags);
            rewrite_body(except_body, func, flags);
        }
        HirNode::Commented { inner, .. } => return rewrite_node(inner, func, flags),
        _ => {}
    }

    let HirNode::If {
        cond,
        then_body,
        else_body,
    } = node
    else {
        return Vec::new();
    };
    let Some(&dispatch) = flags.get(cond) else {
        return Vec::new();
    };
    let flag = cond.base;
    let handler = std::mem::take(then_body);
    let try_body = else_body.take().unwrap_or_default();
    *node = match dispatch {
        Dispatch::Catch { pad } => HirNode::TryCatch {
            try_body,
            catch_arms: catch_arms(func, pad, handler),
        },
        Dispatch::Cleanup => HirNode::TryFinally {
            try_body,
            finally_body: handler,
        },
        Dispatch::Except { filter } => HirNode::TryExcept {
            try_body,
            filter,
            except_body: handler,
        },
    };
    vec![flag]
}

/// One arm per caught type; the handler body is shared because one landing
/// pad serves every clause of its `try`.
fn catch_arms(func: &SsaFunction, pad: u64, handler: Vec<HirNode>) -> Vec<(Type, Vec<HirNode>)> {
    let catch_all = Type::Primitive(unlace_ir::ssa::PrimitiveType::Unknown);
    match func.eh_landing_pad_catches.get(&pad) {
        Some(types) if !types.is_empty() => types
            .iter()
            .cloned()
            .map(|ty| (ty, handler.clone()))
            .collect(),
        _ => vec![(catch_all, handler)],
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::ssa::{PrimitiveType, build_ssa};

    use super::*;
    use crate::structurer::structure;

    const DATA_REGS: (Varnode, Varnode) = (Varnode::reg(0, 8), Varnode::reg(16, 8));

    fn branch(target: u64, addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Branch, smallvec![Varnode::constant(target, 8)], addr)
    }

    /// `r0 = r8 + 1; try { call 0x5000 } catch { r0 = -1 } return r0`, with
    /// the handler at 0x1020 unreachable as lifted.
    fn lifted_try_catch() -> Function {
        let r0 = Varnode::reg(0, 8);
        let mut func = Function::new("f", BlockId(0), 0x1000);

        let mut entry = BasicBlock::new(BlockId(0));
        entry.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![Varnode::reg(8, 8), Varnode::constant(1, 8)],
            0x1000,
        ));
        entry.successors = smallvec![BlockId(1)];

        let mut try_block = BasicBlock::new(BlockId(1));
        try_block.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x5000, 8)],
            0x1004,
        ));
        try_block.insns.push(branch(0x1010, 0x1009));
        try_block.successors = smallvec![BlockId(2)];

        let mut join = BasicBlock::new(BlockId(2));
        join.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![r0], 0x1010));

        let mut pad = BasicBlock::new(BlockId(3));
        pad.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![Varnode::constant(u64::MAX, 8)],
            0x1020,
        ));
        pad.insns.push(branch(0x1010, 0x1027));
        pad.successors = smallvec![BlockId(2)];

        for block in [entry, try_block, join, pad] {
            func.insert_block(block);
        }
        func
    }

    fn pad() -> LandingPad {
        LandingPad {
            addr: 0x1020,
            try_start: 0x1004,
            kind: LandingPadKind::Catch { selector: Some(1) },
        }
    }

    fn find_try_catch(nodes: &[HirNode]) -> Option<&HirNode> {
        nodes.iter().find_map(|node| match node {
            HirNode::TryCatch { .. } | HirNode::TryFinally { .. } | HirNode::TryExcept { .. } => {
                Some(node)
            }
            HirNode::Block(inner) => find_try_catch(inner),
            _ => None,
        })
    }

    fn has_call(nodes: &[HirNode]) -> bool {
        nodes
            .iter()
            .any(|n| matches!(n, HirNode::Statement(i) if i.op == IrOp::Call))
    }

    #[test]
    fn dispatch_makes_the_handler_reachable_and_defines_pad_registers() {
        let mut func = lifted_try_catch();
        assert_eq!(install_eh_dispatch(&mut func, &[pad()], DATA_REGS), 1);

        let dispatch = &func.blocks[&BlockId(4)];
        assert_eq!(EhHelper::of(&dispatch.insns[0]), Some(EhHelper::Try));
        assert_eq!(dispatch.successors.as_slice(), &[BlockId(3), BlockId(1)]);
        assert_eq!(
            func.blocks[&BlockId(0)].successors.as_slice(),
            &[BlockId(4)]
        );

        let pad_insns = &func.blocks[&BlockId(3)].insns;
        assert_eq!(EhHelper::of(&pad_insns[0]), Some(EhHelper::Exception));
        assert_eq!(pad_insns[1].output, Some(DATA_REGS.1));
        assert_eq!(pad_insns[1].inputs[0], Varnode::constant(1, 8));
    }

    #[test]
    fn dispatch_if_structures_as_try_catch() {
        let mut func = lifted_try_catch();
        install_eh_dispatch(&mut func, &[pad()], DATA_REGS);
        let mut ssa = build_ssa(func);
        ssa.eh_landing_pad_catches.insert(
            0x1020,
            vec![Type::Struct {
                name: "Error".to_string(),
                fields: Vec::new(),
            }],
        );

        let hir = structure(&ssa).expect("structuring succeeds");
        let Some(HirNode::TryCatch {
            try_body,
            catch_arms,
        }) = find_try_catch(&hir.body)
        else {
            panic!("expected a try/catch: {:#?}", hir.body);
        };
        assert!(has_call(try_body), "try body holds the call: {try_body:#?}");
        assert_eq!(catch_arms.len(), 1);
        assert!(matches!(&catch_arms[0].0, Type::Struct { name, .. } if name == "Error"));
        assert!(!catch_arms[0].1.is_empty());
        assert!(
            !format!("{:?}", hir.body).contains("If {"),
            "the dispatch if is gone: {:#?}",
            hir.body
        );
    }

    #[test]
    fn pad_without_catch_types_is_catch_all() {
        let mut func = lifted_try_catch();
        install_eh_dispatch(&mut func, &[pad()], DATA_REGS);
        let hir = structure(&build_ssa(func)).expect("structuring succeeds");
        let Some(HirNode::TryCatch { catch_arms, .. }) = find_try_catch(&hir.body) else {
            panic!("expected a try/catch: {:#?}", hir.body);
        };
        assert_eq!(catch_arms[0].0, Type::Primitive(PrimitiveType::Unknown));
    }

    #[test]
    fn cleanup_pad_structures_as_try_finally() {
        let mut func = lifted_try_catch();
        let cleanup = LandingPad {
            kind: LandingPadKind::Cleanup,
            ..pad()
        };
        assert_eq!(install_eh_dispatch(&mut func, &[cleanup], DATA_REGS), 1);
        assert_eq!(
            EhHelper::of(&func.blocks[&BlockId(4)].insns[0]),
            Some(EhHelper::Wind)
        );
        let pad_insns = &func.blocks[&BlockId(3)].insns;
        assert_eq!(EhHelper::of(&pad_insns[0]), Some(EhHelper::Exception));
        assert_eq!(pad_insns[1].inputs[0], Varnode::constant(0, 8));

        let hir = structure(&build_ssa(func)).expect("structuring succeeds");
        let Some(HirNode::TryFinally {
            try_body,
            finally_body,
        }) = find_try_catch(&hir.body)
        else {
            panic!("expected a try/finally: {:#?}", hir.body);
        };
        assert!(has_call(try_body), "try body holds the call: {try_body:#?}");
        assert!(!finally_body.is_empty());
        assert!(!format!("{:?}", hir.body).contains("If {"));
    }

    /// The try body throws (no successors), so the pad post-dominates the
    /// dispatch. It must still structure as the handler arm, not as the code
    /// after an `if` with an empty arm.
    #[test]
    fn handler_stays_the_arm_when_the_try_body_never_returns() {
        let mut func = lifted_try_catch();
        {
            let try_block = func.blocks.get_mut(&BlockId(1)).unwrap();
            try_block.insns.pop();
            try_block.successors.clear();
        }
        let cleanup = LandingPad {
            kind: LandingPadKind::Cleanup,
            ..pad()
        };
        install_eh_dispatch(&mut func, &[cleanup], DATA_REGS);
        let hir = structure(&build_ssa(func)).expect("structuring succeeds");
        let Some(HirNode::TryFinally {
            try_body,
            finally_body,
        }) = find_try_catch(&hir.body)
        else {
            panic!("expected a try/finally: {:#?}", hir.body);
        };
        assert!(has_call(try_body), "try body holds the call: {try_body:#?}");
        assert!(
            finally_body
                .iter()
                .any(|n| matches!(n, HirNode::Statement(i) if i.addr == 0x1020)),
            "finally body holds the pad: {finally_body:#?}"
        );
    }

    #[test]
    fn seh_except_scope_structures_as_try_except_without_pad_registers() {
        let mut func = lifted_try_catch();
        let filter = SehFilter::Funclet(0x1058);
        let except = LandingPad {
            kind: LandingPadKind::SehExcept { filter },
            ..pad()
        };
        assert_eq!(install_eh_dispatch(&mut func, &[except], DATA_REGS), 1);
        let dispatch = &func.blocks[&BlockId(4)].insns[0];
        assert_eq!(EhHelper::seh_filter(dispatch), Some(filter));
        assert!(EhHelper::of(&func.blocks[&BlockId(3)].insns[0]).is_none());

        let hir = structure(&build_ssa(func)).expect("structuring succeeds");
        let Some(HirNode::TryExcept {
            try_body,
            filter: recovered,
            except_body,
        }) = find_try_catch(&hir.body)
        else {
            panic!("expected a try/except: {:#?}", hir.body);
        };
        assert_eq!(*recovered, filter);
        assert!(has_call(try_body), "try body holds the call: {try_body:#?}");
        assert!(!except_body.is_empty());
    }

    #[test]
    fn try_start_at_entry_or_without_leader_is_skipped() {
        let mut func = lifted_try_catch();
        let at_entry = LandingPad {
            try_start: 0x1000,
            ..pad()
        };
        let mid_block = LandingPad {
            try_start: 0x1009,
            ..pad()
        };
        assert_eq!(
            install_eh_dispatch(&mut func, &[at_entry, mid_block], DATA_REGS),
            0
        );
        assert_eq!(func, lifted_try_catch());
    }
}
