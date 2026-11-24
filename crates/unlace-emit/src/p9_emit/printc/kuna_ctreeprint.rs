//! (kuna `ctree`) Printing the function body through its C syntax tree
//! (`docs/architecture/ctree.md` §6), with `option ctree on`.
//!
//! `kuna_ctreebuild` builds the tree at `built`, one statement per structured block. The walk
//! here prints the kinds it models (the root's statements, a `BlockGraph`'s statements, a leaf)
//! and the components the block printers take through `emit_part` (an `if`'s arms, a loop's
//! body, a goto block's body) and hands every other statement to the block printer, whose children come
//! back through `emit_block` and so through the tree. At `built` each modelled kind prints what
//! the block printer prints for its origin block, call for call.

use unlace_base::types::int4;

use super::{Architecture, Funcdata, PrintC};
use crate::block::BlockType;
use crate::context::BlockId;
use crate::kuna_ctree::{StmtId, StmtKind};
use crate::prettyprint::Emit;

impl PrintC {
    /// The function body from the tree's root, when the root is the sequence built from
    /// `sroot` (`emit_block_graph` over the same statements). False when nothing printed.
    pub(super) fn emit_ctree_body(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        sroot: BlockId,
    ) -> bool {
        let Some(children) = self.ctree.as_ref().and_then(|tree| {
            let stmt = tree.stmt(tree.root()?);
            match &stmt.kind {
                StmtKind::Seq(list) if stmt.origin == Some(sroot) => Some(list.clone()),
                _ => None,
            }
        }) else {
            return false;
        };
        for child in children {
            let id = self.emit.begin_block(0);
            self.emit_ctree_arm(fd, arch, child);
            self.emit.end_block(id);
        }
        true
    }

    /// `emit_block`'s tree path: the statement built from `blk`, when the walk models it.
    pub(super) fn emit_ctree_block(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        blk: BlockId,
    ) -> bool {
        let Some(id) = self.ctree.as_ref().and_then(|tree| tree.node_for(blk)) else {
            return false;
        };
        self.emit_ctree_stmt(fd, arch, id)
    }

    /// Component `k` of the structured block `blk` (an `if`'s body or else, a loop's body, a
    /// goto block's body): the statement the tree holds in its place (`CTree::part`), else the
    /// block.
    pub(super) fn emit_part(&mut self, fd: &Funcdata, arch: &Architecture, blk: BlockId, k: int4) {
        let part = self.ctree.as_ref().and_then(|tree| {
            let id = tree.node_for(blk)?;
            tree.part(id, usize::try_from(k).ok()?)
        });
        match part {
            Some(id) => self.emit_ctree_arm(fd, arch, id),
            None => {
                let child = fd.sblocks_ref().block(blk).get_block(k);
                self.emit_block(fd, arch, child);
            }
        }
    }

    /// A statement: the walk when it models it, else the block printer on its origin block.
    fn emit_ctree_arm(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) {
        if self.emit_ctree_stmt(fd, arch, id) {
            return;
        }
        let origin = self.ctree.as_ref().and_then(|tree| tree.stmt(id).origin);
        if let Some(blk) = origin {
            self.emit_block_raw(fd, arch, blk);
        }
    }

    /// The walk over the kinds it models; false leaves the statement to the block printer.
    fn emit_ctree_stmt(&mut self, fd: &Funcdata, arch: &Architecture, id: StmtId) -> bool {
        let Some(stmt) = self.ctree.as_ref().map(|tree| tree.stmt(id).clone()) else {
            return false;
        };
        let Some(blk) = stmt.origin else {
            return false;
        };
        let ty = fd.sblocks_ref().block(blk).get_type();
        match stmt.kind {
            StmtKind::Seq(children) if ty == BlockType::Graph => {
                for child in children {
                    let id = self.emit.begin_block(0);
                    self.emit_ctree_arm(fd, arch, child);
                    self.emit.end_block(id);
                }
                true
            }
            StmtKind::Ops { leaf } => match ty {
                BlockType::Copy => {
                    self.emit_block_copy(fd, arch, leaf);
                    true
                }
                BlockType::Basic => {
                    self.emit_block_basic(fd, arch, leaf);
                    true
                }
                _ => false,
            },
            _ => false,
        }
    }
}
