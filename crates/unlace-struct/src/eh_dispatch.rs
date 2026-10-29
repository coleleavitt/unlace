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

use std::collections::BTreeMap;

use smallvec::smallvec;
use unlace_ir::eh::EhHelper;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

use crate::hir::HirNode;

/// Unique-space offset of the first dispatch flag. Lifter temporaries are
/// numbered from zero per function, far below this.
const FLAG_UNIQUE_BASE: u64 = 0x4548_0000;

/// A catch landing pad from the LSDA call-site table.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CatchLandingPad {
    /// First instruction of the landing pad.
    pub addr: u64,
    /// Start of the first call-site range that unwinds to `addr`.
    pub try_start: u64,
    /// The type filter the pad always receives, when every call site that
    /// unwinds to it names exactly one catch clause and no cleanup.
    pub selector: Option<u64>,
}

/// Insert one dispatch block per landing pad of `pads` and define the
/// exception and selector registers (`data_regs`, see
/// [`unlace_ir::eh::landing_pad_data_regs`]) at each pad.
///
/// `func` must have block leaders at every `try_start` and `addr`. Pads
/// whose blocks are missing, or whose try start is the function entry, are
/// skipped. Returns the number of dispatch blocks inserted.
pub fn install_eh_dispatch(
    func: &mut Function,
    pads: &[CatchLandingPad],
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
        let mut block = BasicBlock::new(dispatch);
        block.insns = vec![
            EhHelper::Try.insn(flag, pad.try_start),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(pad.addr, 8), flag],
                pad.try_start,
            ),
        ];
        block.successors = smallvec![pad_block, try_block];
        func.insert_block(block);

        define_landing_pad_data(func, pad_block, pad, data_regs);
        installed += 1;
    }
    installed
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
    pad: &CatchLandingPad,
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
    let selector_def = match pad.selector {
        Some(filter) => IrInsn::with_output(
            IrOp::Copy,
            selector,
            smallvec![Varnode::constant(filter, selector.size)],
            pad.addr,
        ),
        None => EhHelper::Selector.insn(selector, pad.addr),
    };
    let exception_def = EhHelper::Exception.insn(exception, pad.addr);
    block.insns.splice(0..0, [exception_def, selector_def]);
}

/// Rewrite every `if` on an [`EhHelper::Try`] flag in `body` into a
/// [`HirNode::TryCatch`]: the false arm is the try body, the true arm the
/// handler.
pub fn recover_try_catch(body: &mut Vec<HirNode>, func: &SsaFunction) {
    let flags = try_flags(func);
    if !flags.is_empty() {
        rewrite_body(body, func, &flags);
    }
}

/// SSA flags defined by an [`EhHelper::Try`], with the pad address their
/// dispatch branches to.
fn try_flags(func: &SsaFunction) -> TryFlags {
    let mut flags = TryFlags::new();
    for (&bid, block) in &func.function.blocks {
        let Some(def_idx) = block
            .insns
            .iter()
            .position(|i| EhHelper::of(i) == Some(EhHelper::Try))
        else {
            continue;
        };
        let Some(&flag) = func.var_map.get(&(bid, def_idx, VarnodeSlot::Output)) else {
            continue;
        };
        let pad = block
            .insns
            .iter()
            .rev()
            .find(|i| i.op == IrOp::Cbranch)
            .and_then(|i| i.inputs.first())
            .map_or(0, |vn| vn.offset);
        flags.insert(flag, pad);
    }
    flags
}

type TryFlags = BTreeMap<SsaVarnode, u64>;

fn rewrite_body(body: &mut Vec<HirNode>, func: &SsaFunction, flags: &TryFlags) {
    let mut converted = Vec::new();
    for node in body.iter_mut() {
        converted.extend(rewrite_node(node, func, flags));
    }
    // A converted flag has no use left; drop its definition.
    body.retain(|node| {
        !matches!(node, HirNode::Statement(insn)
            if EhHelper::of(insn) == Some(EhHelper::Try)
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
    let Some(&pad) = flags.get(cond) else {
        return Vec::new();
    };
    let flag = cond.base;
    let handler = std::mem::take(then_body);
    let try_body = else_body.take().unwrap_or_default();
    *node = HirNode::TryCatch {
        try_body,
        catch_arms: catch_arms(func, pad, handler),
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

    fn pad() -> CatchLandingPad {
        CatchLandingPad {
            addr: 0x1020,
            try_start: 0x1004,
            selector: Some(1),
        }
    }

    fn find_try_catch(nodes: &[HirNode]) -> Option<&HirNode> {
        nodes.iter().find_map(|node| match node {
            HirNode::TryCatch { .. } => Some(node),
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
    fn try_start_at_entry_or_without_leader_is_skipped() {
        let mut func = lifted_try_catch();
        let at_entry = CatchLandingPad {
            try_start: 0x1000,
            ..pad()
        };
        let mid_block = CatchLandingPad {
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
