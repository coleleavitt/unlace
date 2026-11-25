//! S8 goto-chain coalescing (option `gotochain`, default-OFF).
//!
//! A label whose block is a bare `goto` target and that is immediately followed,
//! in the same statement list, by an unconditional `goto L2` is an alias for
//! `L2`: jumping to the label runs no statement and then jumps to `L2`.
//! [`gotochain_apply`] retargets every unstructured `goto` and `if (c) goto`
//! that names such a label straight to `L2` (following the chain transitively,
//! with a cycle guard), marks the new target as a label, and releases the old
//! label once no carrier reaches it.
//!
//! ```text
//!     goto L1;            goto L2;
//!     ...           =>    ...
//!   L1: (no statement)
//!     goto L2;
//!   L2: ...             L2: ...
//! ```
//!
//! Only carriers of kind `f_goto_goto` are retargeted. Switch-case and
//! multigoto edges keep naming the label, and `release_converted_labels` keeps a
//! label that any such edge still names, so the printed output stays valid C.
//! This is the structured-tree form of the original unlace `goto_coalesce.rs`
//! (`coalesce_goto_chains`), which ran on the HIR.

use std::collections::{BTreeMap, BTreeSet};

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::block::{BlockGraph, BlockKind, BlockType, block_flags};
use crate::context::BlockId;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// Is `lbl` a copy leaf whose basic block holds only unconditional branches
/// (or nothing), so that reaching it executes no statement?
fn is_pure_label(data: &Funcdata, graph: &BlockGraph, lbl: BlockId) -> bool {
    if graph.block(lbl).get_type() != BlockType::Copy {
        return false;
    }
    let Some(bb) = graph.block(lbl).get_copy() else {
        return false;
    };
    let mut op = data.bb_op_head(bb);
    while let Some(o) = op {
        op = data.bb_op_next(o);
        match data.obank().get(o) {
            Some(opref) if opref.code() == OpCode::CPUI_BRANCH => {}
            _ => return false,
        }
    }
    true
}

/// Every structured node reachable from `root`, depth first.
fn all_nodes(graph: &BlockGraph, root: BlockId) -> Vec<BlockId> {
    let mut out = Vec::new();
    let mut stack = vec![root];
    while let Some(id) = stack.pop() {
        out.push(id);
        let b = graph.block(id);
        stack.extend((0..b.get_size()).map(|i| b.get_block(i)));
    }
    out
}

/// Label leaf -> the block its adjacent `goto` names, for every adjacent pair
/// `L; goto T;` inside one list where `L` is a pure label.
fn collect_aliases(data: &Funcdata, root: BlockId) -> BTreeMap<BlockId, BlockId> {
    let graph = data.sblocks_ref();
    let mut aliases = BTreeMap::new();
    for id in all_nodes(graph, root) {
        for pair in graph.block(id).get_list().windows(2) {
            let (lbl, nxt) = (pair[0], pair[1]);
            let b = graph.block(nxt);
            if b.get_type() != BlockType::Goto || b.get_goto_type() != block_flags::f_goto_goto {
                continue;
            }
            let Some(dst) = b.get_goto_target() else {
                continue;
            };
            if dst == lbl || graph.get_front_leaf(dst) == Some(lbl) {
                continue;
            }
            if is_pure_label(data, graph, lbl) {
                aliases.entry(lbl).or_insert(dst);
            }
        }
    }
    aliases
}

/// The final target a jump to label leaf `lbl` reaches, following alias edges.
/// `None` on a cycle, which is left untouched.
fn resolve(
    graph: &BlockGraph,
    aliases: &BTreeMap<BlockId, BlockId>,
    lbl: BlockId,
) -> Option<BlockId> {
    let mut target = *aliases.get(&lbl)?;
    let mut seen = BTreeSet::from([lbl]);
    loop {
        let leaf = graph.get_front_leaf(target)?;
        let Some(&next) = aliases.get(&leaf) else {
            return Some(target);
        };
        if !seen.insert(leaf) {
            return None;
        }
        target = next;
    }
}

/// Retarget every goto-carrier that names an alias label to the label's final
/// target, then release the labels nothing names any more. Returns the number of
/// carriers retargeted.
#[doc(hidden)]
pub fn gotochain_apply(data: &mut Funcdata) -> i32 {
    let root = data.sblocks_root();
    let aliases = collect_aliases(data, root);
    if aliases.is_empty() {
        return 0;
    }
    let mut edits: Vec<(BlockId, BlockId)> = Vec::new();
    let mut left: Vec<BlockId> = Vec::new();
    {
        let graph = data.sblocks_ref();
        for id in all_nodes(graph, root) {
            let b = graph.block(id);
            let (target, gototype) = match b.get_type() {
                BlockType::Goto => (b.get_goto_target(), b.get_goto_type()),
                BlockType::If => (b.get_if_goto_target(), b.get_if_goto_type()),
                _ => continue,
            };
            if gototype != block_flags::f_goto_goto {
                continue;
            }
            let Some(leaf) = target.and_then(|t| graph.get_front_leaf(t)) else {
                continue;
            };
            if !aliases.contains_key(&leaf) {
                continue;
            }
            if let Some(new) = resolve(graph, &aliases, leaf) {
                edits.push((id, new));
                left.push(leaf);
            }
        }
    }
    if edits.is_empty() {
        return 0;
    }
    let graph = data.sblocks_mut();
    for &(id, new) in &edits {
        match graph.block_mut(id).kind_mut() {
            BlockKind::Goto { gototarget, .. } | BlockKind::If { gototarget, .. } => {
                *gototarget = Some(new);
            }
            _ => continue,
        }
        if let Some(leaf) = graph.get_front_leaf(new) {
            graph
                .block_mut(leaf)
                .set_flag(block_flags::f_unstructured_targ);
        }
    }
    left.sort();
    left.dedup();
    crate::gotolabel::release_converted_labels(data, &left);
    edits.len() as i32
}

/// Runs [`gotochain_apply`] when option `gotochain` is on.
pub struct ActionGotoChain {
    base: ActionBase,
}

impl ActionGotoChain {
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionGotoChain {
            base: ActionBase::new(0, "gotochain", g),
        })
    }
}

impl Action for ActionGotoChain {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        grouplist.contains(self.get_group()).then(|| {
            Box::new(ActionGotoChain {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data
            .get_arch()
            .unlace_options
            .get::<crate::gotochain::GotoChain>()
            .0
            || data.sblocks_get_size() == 0
        {
            return 0;
        }
        self.base.count += gotochain_apply(data);
        0
    }
}

crate::unlace_flag!(
    /// (unlace) Retarget a goto that names a label whose block is only another goto straight to that goto's target (option `gotochain`).
    GotoChain,
    "gotochain",
    "goto-chain coalescing",
    unset: false,
    shipped: false
);
