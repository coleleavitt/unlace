//! (kuna `ctree`) Build a [`CTree`] at [`CMaturity::Built`] from the final structured block tree
//! (`docs/architecture/ctree.md` §3).
//!
//! One statement per structured block: a `BlockList`/`BlockGraph` is a [`StmtKind::Seq`], a leaf
//! is [`StmtKind::Ops`], a `BlockIf` is an [`StmtKind::If`] whose `pre` and condition both name
//! the condition block (an if-goto's `then` is a [`StmtKind::Goto`]), a `BlockWhileDo` a
//! [`StmtKind::For`] when it carries its initializer and iterator ops and a [`StmtKind::While`]
//! otherwise, a `BlockDoWhile` a [`StmtKind::DoWhile`] whose condition is its body's branch, a
//! `BlockInfLoop` a [`StmtKind::Loop`], a `BlockSwitch` a [`StmtKind::Switch`] over its
//! components, and a `BlockGoto` a sequence of its body and a [`StmtKind::Goto`]. Condition and
//! multi-goto blocks are [`StmtKind::Opaque`] and print from their origin block. The builder decides nothing a
//! printer would print differently: a tree printed node for node gives the block printer's text.

use crate::block::BlockType;
use crate::context::BlockId;
use crate::funcdata::Funcdata;
use crate::kuna_ctree::{CMaturity, CTree, ExprKind, StmtId, StmtKind};

/// Deeper nesting than this is left opaque, so a hostile block tree cannot exhaust the stack.
const MAX_DEPTH: usize = 2048;

/// The tree of `fd`'s structured block tree, or `None` when the function has none.
pub fn build(fd: &Funcdata) -> Option<CTree> {
    let root = fd.sblocks_ref().root?;
    let mut tree = CTree::new();
    let body = build_stmt(fd, &mut tree, root, 0);
    tree.set_root(body);
    debug_assert_eq!(tree.maturity(), CMaturity::Built);
    Some(tree)
}

fn build_stmt(fd: &Funcdata, tree: &mut CTree, blk: BlockId, depth: usize) -> StmtId {
    if depth >= MAX_DEPTH {
        return tree.add_stmt(StmtKind::Opaque, Some(blk));
    }
    let block = fd.sblocks_ref().block(blk);
    let kind = match block.get_type() {
        BlockType::Graph | BlockType::Ls => {
            let list: Vec<BlockId> = block.get_list().to_vec();
            let children = list
                .into_iter()
                .map(|child| build_stmt(fd, tree, child, depth + 1))
                .collect();
            StmtKind::Seq(children)
        }
        BlockType::Copy | BlockType::Basic => StmtKind::Ops { leaf: blk },
        BlockType::If => build_if(fd, tree, blk, depth),
        BlockType::WhileDo => build_while(fd, tree, blk, depth),
        BlockType::DoWhile | BlockType::InfLoop if block.get_size() >= 1 => {
            let body_block = block.get_block(0);
            let body = build_stmt(fd, tree, body_block, depth + 1);
            if block.get_type() == BlockType::DoWhile {
                let cond = tree.add_expr(ExprKind::Branch(body_block));
                StmtKind::DoWhile { body, cond }
            } else {
                StmtKind::Loop { body }
            }
        }
        BlockType::Switch => {
            let list: Vec<BlockId> = block.get_list().to_vec();
            let parts = list
                .into_iter()
                .map(|child| build_stmt(fd, tree, child, depth + 1))
                .collect();
            StmtKind::Switch { parts }
        }
        BlockType::Goto if block.get_size() >= 1 => {
            let body = build_stmt(fd, tree, block.get_block(0), depth + 1);
            match block.get_goto_target() {
                Some(target) => {
                    let jump = tree.add_stmt(
                        StmtKind::Goto {
                            target,
                            gototype: block.get_goto_type(),
                        },
                        None,
                    );
                    StmtKind::Seq(vec![body, jump])
                }
                None => StmtKind::Seq(vec![body]),
            }
        }
        _ => StmtKind::Opaque,
    };
    tree.add_stmt(kind, Some(blk))
}

fn build_while(fd: &Funcdata, tree: &mut CTree, blk: BlockId, depth: usize) -> StmtKind {
    let block = fd.sblocks_ref().block(blk);
    if block.get_size() < 2 {
        return StmtKind::Opaque;
    }
    let cond_block = block.get_block(0);
    let body = build_stmt(fd, tree, block.get_block(1), depth + 1);
    let pre = tree.add_stmt(StmtKind::Opaque, Some(cond_block));
    let cond = tree.add_expr(ExprKind::Branch(cond_block));
    match (block.get_initialize_op(), block.get_iterate_op()) {
        (Some(init), Some(step)) => StmtKind::For {
            init,
            cond,
            step,
            body,
        },
        _ => StmtKind::While {
            pre: Some(pre),
            cond,
            body,
        },
    }
}

fn build_if(fd: &Funcdata, tree: &mut CTree, blk: BlockId, depth: usize) -> StmtKind {
    let block = fd.sblocks_ref().block(blk);
    let size = block.get_size();
    if size < 1 {
        return StmtKind::Opaque;
    }
    let cond_block = block.get_block(0);
    let then = match block.get_if_goto_target() {
        Some(target) => tree.add_stmt(
            StmtKind::Goto {
                target,
                gototype: block.get_if_goto_type(),
            },
            None,
        ),
        None if size >= 2 => build_stmt(fd, tree, block.get_block(1), depth + 1),
        None => return StmtKind::Opaque,
    };
    let els = (block.get_if_goto_target().is_none() && size == 3)
        .then(|| build_stmt(fd, tree, block.get_block(2), depth + 1));
    let pre = tree.add_stmt(StmtKind::Opaque, Some(cond_block));
    let cond = tree.add_expr(ExprKind::Branch(cond_block));
    StmtKind::If {
        pre: Some(pre),
        cond,
        then,
        els,
    }
}
