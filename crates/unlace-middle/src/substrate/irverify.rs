//! (unlace) Whole-function IR consistency check, the structural tier of the IR verifier.
//!
//! [`verify_funcdata`] checks that the op, varnode and basic-block links of a `Funcdata` agree
//! with each other: every output names its op as definition, every input is among its varnode's
//! descendants (and every descendant reads it), and every op on a basic block's list names that
//! block, with the list's length and tail matching the block's record. It makes no claim about
//! dominance or definedness, which later recovery passes are still allowed to refine.
//!
//! The dataflow tier, [`verify_dataflow`], checks what heritage establishes: every input of an op is
//! a constant, an input, or defined by an op that dominates the reader (or comes earlier in the same
//! block), and a MULTIEQUAL input's definition dominates the predecessor on its edge. Only blocks
//! reachable from the entry are checked, and the dominators are recomputed from the current edges.
//!
//! The scheduler calls [`verify_pass_output`] after each pass only under the `irverify` option
//! ([`report_first_break`]), which reports the first pass that leaves the IR broken.

use std::collections::{BTreeMap, BTreeSet};
use std::fmt;

use crate::block::BlockKind;
use crate::context::{BlockId, OpId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// One broken link, described in the words of the check that found it.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VerifyError(pub String);

impl fmt::Display for VerifyError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(&self.0)
    }
}

impl std::error::Error for VerifyError {}

/// Check the op, varnode and basic-block links of \b fd, returning the first broken one.
pub fn verify_funcdata(fd: &Funcdata) -> Result<(), VerifyError> {
    verify_ops(fd)?;
    verify_varnodes(fd)?;
    verify_blocks(fd)
}

/// Every alive op: its output and inputs point back at it, and its parent block lists it.
fn verify_ops(fd: &Funcdata) -> Result<(), VerifyError> {
    let obank = fd.obank();
    let vbank = fd.vbank();
    for op_id in obank.iter_alive() {
        let Some(op) = obank.get(op_id) else {
            return Err(VerifyError(format!(
                "alive list holds missing op {op_id:?}"
            )));
        };
        if let Some(out) = op.get_out() {
            let Some(vn) = vbank.get(out) else {
                return Err(VerifyError(format!(
                    "op {op_id:?} outputs missing varnode {out:?}"
                )));
            };
            if vn.get_def() != Some(op_id) {
                return Err(VerifyError(format!(
                    "output {out:?} of op {op_id:?} has definition {:?}",
                    vn.get_def()
                )));
            }
        }
        for slot in 0..op.num_input() {
            let Some(input) = op.get_in(slot) else {
                continue;
            };
            let Some(vn) = vbank.get(input) else {
                return Err(VerifyError(format!(
                    "op {op_id:?} input {slot} is missing varnode {input:?}"
                )));
            };
            if !vn.descend_iter().any(|reader| reader == op_id) {
                return Err(VerifyError(format!(
                    "op {op_id:?} reads {input:?} in slot {slot}, which lists no such descendant"
                )));
            }
        }
        if let Some(bl) = op.get_parent() {
            let basic = fd
                .bblocks_ref()
                .arena
                .get(bl)
                .is_some_and(|block| matches!(block.kind(), BlockKind::Basic(_)));
            if !basic {
                return Err(VerifyError(format!(
                    "op {op_id:?} is parented to missing or non-basic block {bl:?}"
                )));
            }
        }
    }
    Ok(())
}

/// Every varnode: its definition writes it, and each reader of it takes it as an input.
fn verify_varnodes(fd: &Funcdata) -> Result<(), VerifyError> {
    let obank = fd.obank();
    let vbank = fd.vbank();
    for vn_id in vbank.iter_loc() {
        let Some(vn) = vbank.get(vn_id) else {
            return Err(VerifyError(format!(
                "location tree holds missing varnode {vn_id:?}"
            )));
        };
        if let Some(def) = vn.get_def() {
            let Some(op) = obank.get(def) else {
                return Err(VerifyError(format!(
                    "varnode {vn_id:?} is defined by missing op {def:?}"
                )));
            };
            if op.get_out() != Some(vn_id) {
                return Err(VerifyError(format!(
                    "varnode {vn_id:?} is defined by op {def:?}, which does not output it"
                )));
            }
        }
        for reader in vn.descend_iter() {
            let Some(op) = obank.get(reader) else {
                return Err(VerifyError(format!(
                    "varnode {vn_id:?} lists missing reader {reader:?}"
                )));
            };
            if !(0..op.num_input()).any(|slot| op.get_in(slot) == Some(vn_id)) {
                return Err(VerifyError(format!(
                    "varnode {vn_id:?} lists reader {reader:?}, which does not read it"
                )));
            }
        }
    }
    Ok(())
}

/// Every basic block that holds an alive op: its op list is a chain of that block's ops whose
/// length and tail match the block's record.
fn verify_blocks(fd: &Funcdata) -> Result<(), VerifyError> {
    let obank = fd.obank();
    let mut seen: BTreeSet<BlockId> = BTreeSet::new();
    for op_id in obank.iter_alive() {
        let Some(bl) = obank.get(op_id).and_then(|op| op.get_parent()) else {
            continue;
        };
        if !seen.insert(bl) {
            continue;
        }
        let Some(block) = fd.bblocks_ref().arena.get(bl) else {
            return Err(VerifyError(format!(
                "op {op_id:?} is parented to missing block {bl:?}"
            )));
        };
        let BlockKind::Basic(bd) = block.kind() else {
            return Err(VerifyError(format!(
                "op {op_id:?} is parented to non-basic block {bl:?}"
            )));
        };
        let mut walked = 0usize;
        let mut last = None;
        let mut cur = bd.op_head;
        while let Some(op) = cur {
            let Some(listed) = obank.get(op) else {
                return Err(VerifyError(format!("block {bl:?} lists missing op {op:?}")));
            };
            if listed.get_parent() != Some(bl) {
                return Err(VerifyError(format!(
                    "block {bl:?} lists op {op:?}, whose parent is {:?}",
                    listed.get_parent()
                )));
            }
            walked += 1;
            if walked > bd.op_len {
                return Err(VerifyError(format!(
                    "block {bl:?} lists more than its recorded {} ops",
                    bd.op_len
                )));
            }
            last = Some(op);
            cur = fd.bb_op_next(op);
        }
        if walked != bd.op_len {
            return Err(VerifyError(format!(
                "block {bl:?} lists {walked} ops, but records {}",
                bd.op_len
            )));
        }
        if last != bd.op_tail {
            return Err(VerifyError(format!(
                "block {bl:?} ends at {last:?}, but records tail {:?}",
                bd.op_tail
            )));
        }
    }
    Ok(())
}

/// (unlace `irverify`) The check the option runs after each pass: the structural links, then, once
/// heritage has put the IR in SSA form, the dataflow tier.
pub fn verify_pass_output(fd: &Funcdata) -> Result<(), VerifyError> {
    verify_funcdata(fd)?;
    if fd.get_heritage_pass() > 0 {
        verify_dataflow(fd)?;
    }
    Ok(())
}

/// (unlace `irverify`) Run [`verify_pass_output`] after pass `pass`; the first failure becomes a
/// header warning naming the pass. Returns `true` when the IR is broken.
pub fn report_first_break(fd: &mut Funcdata, pass: &str) -> bool {
    match verify_pass_output(fd) {
        Ok(()) => false,
        Err(error) => {
            fd.warning_header(&format!(
                "irverify: pass {pass} left the IR broken: {error}"
            ));
            true
        }
    }
}

/// The dataflow tier: definedness and dominance of every read, over the blocks reachable from the
/// entry. A constant, input, annotation or unaffected varnode needs no defining op.
pub fn verify_dataflow(fd: &Funcdata) -> Result<(), VerifyError> {
    let bblocks = fd.bblocks_ref();
    let Some(root) = bblocks.root else {
        return Ok(());
    };
    let Ok(entry) = bblocks.get_start_block(root) else {
        return Ok(());
    };
    let (reachable, idom) = dominators(fd, entry);
    // Every op of a reachable block, with its block and its index in that block's op list.
    let mut position: BTreeMap<OpId, (BlockId, usize)> = BTreeMap::new();
    for &bl in reachable.keys() {
        let Some(block) = bblocks.arena.get(bl) else {
            continue;
        };
        let BlockKind::Basic(bd) = block.kind() else {
            continue;
        };
        let mut cur = bd.op_head;
        let mut index = 0usize;
        while let Some(op) = cur {
            if index > bd.op_len {
                break;
            }
            position.insert(op, (bl, index));
            index += 1;
            cur = fd.bb_op_next(op);
        }
    }
    let obank = fd.obank();
    let vbank = fd.vbank();
    for op_id in obank.iter_alive() {
        let Some(&(bo, io)) = position.get(&op_id) else {
            continue;
        };
        let Some(op) = obank.get(op_id) else {
            continue;
        };
        let multi = matches!(op.code(), OpCode::CPUI_MULTIEQUAL);
        let block = bblocks.block(bo);
        for slot in 0..op.num_input() {
            let Some(input) = op.get_in(slot) else {
                continue;
            };
            let Some(vn) = vbank.get(input) else {
                continue;
            };
            // A MULTIEQUAL input is read on the edge from predecessor `slot`, so only a reachable
            // predecessor is checked.
            let pred = if multi {
                if slot >= block.size_in() {
                    continue;
                }
                let pred = block.get_in(slot);
                if !reachable.contains_key(&pred) {
                    continue;
                }
                Some(pred)
            } else {
                None
            };
            let Some(def_op) = vn.get_def() else {
                // Free storage (memory, or a location the function neither writes nor takes as an input)
                // has no defining op on purpose: heritage leaves a read of it free.
                if vn.is_constant()
                    || vn.get_addr().is_constant()
                    || vn.is_free()
                    || vn.is_input()
                    || vn.is_annotation()
                    || vn.is_unaffected()
                {
                    continue;
                }
                return Err(VerifyError(format!(
                    "op {op_id:?} ({:?}) reads {input:?} at {:?} in slot {slot}, which no op defines and which is not an input or constant",
                    op.code(),
                    vn.get_addr()
                )));
            };
            let Some(&(bd_def, id_def)) = position.get(&def_op) else {
                continue;
            };
            match pred {
                Some(pred) => {
                    if !dominates(&idom, bd_def, pred) {
                        return Err(VerifyError(format!(
                            "phi {op_id:?} takes {input:?} from predecessor {pred:?} of block {bo:?}, but its definition {def_op:?} in block {bd_def:?} does not dominate that predecessor"
                        )));
                    }
                }
                None => {
                    let defined_first = if bd_def == bo {
                        id_def < io
                    } else {
                        dominates(&idom, bd_def, bo)
                    };
                    if !defined_first {
                        let def_code = obank.get(def_op).map(|d| d.code());
                        return Err(VerifyError(format!(
                            "op {op_id:?} ({:?}) in block {bo:?} reads {input:?} in slot {slot}, but its definition {def_op:?} ({def_code:?}) in block {bd_def:?} does not reach it",
                            op.code()
                        )));
                    }
                }
            }
        }
    }
    Ok(())
}

/// Reverse postorder index of each block reachable from `entry`, and the immediate dominator of
/// each (the entry is its own), by the Cooper, Harvey and Kennedy iteration over the current edges.
fn dominators(
    fd: &Funcdata,
    entry: BlockId,
) -> (BTreeMap<BlockId, usize>, BTreeMap<BlockId, BlockId>) {
    let bblocks = fd.bblocks_ref();
    let mut post: Vec<BlockId> = Vec::new();
    let mut seen: BTreeSet<BlockId> = BTreeSet::new();
    let mut stack: Vec<(BlockId, i32)> = vec![(entry, 0)];
    seen.insert(entry);
    while let Some(&(bl, next)) = stack.last() {
        let block = bblocks.block(bl);
        if next < block.size_out() {
            if let Some(top) = stack.last_mut() {
                top.1 += 1;
            }
            let succ = block.get_out(next);
            if seen.insert(succ) {
                stack.push((succ, 0));
            }
        } else {
            stack.pop();
            post.push(bl);
        }
    }
    post.reverse();
    let rpo: BTreeMap<BlockId, usize> = post.iter().enumerate().map(|(i, &bl)| (bl, i)).collect();
    let mut idom: BTreeMap<BlockId, BlockId> = BTreeMap::new();
    idom.insert(entry, entry);
    let mut changed = true;
    while changed {
        changed = false;
        for &bl in post.iter().skip(1) {
            let block = bblocks.block(bl);
            let mut new_idom: Option<BlockId> = None;
            for i in 0..block.size_in() {
                let pred = block.get_in(i);
                if !idom.contains_key(&pred) {
                    continue;
                }
                new_idom = Some(match new_idom {
                    None => pred,
                    Some(cur) => intersect(pred, cur, &rpo, &idom),
                });
            }
            if let Some(ni) = new_idom
                && idom.get(&bl) != Some(&ni) {
                    idom.insert(bl, ni);
                    changed = true;
                }
        }
    }
    (rpo, idom)
}

/// The nearest common dominator of `a` and `b` in the tree built so far.
fn intersect(
    mut a: BlockId,
    mut b: BlockId,
    rpo: &BTreeMap<BlockId, usize>,
    idom: &BTreeMap<BlockId, BlockId>,
) -> BlockId {
    while a != b {
        while rpo[&a] > rpo[&b] {
            a = idom[&a];
        }
        while rpo[&b] > rpo[&a] {
            b = idom[&b];
        }
    }
    a
}

/// Whether `dom` dominates `bl` (every block dominates itself).
fn dominates(idom: &BTreeMap<BlockId, BlockId>, dom: BlockId, mut bl: BlockId) -> bool {
    loop {
        if bl == dom {
            return true;
        }
        match idom.get(&bl) {
            Some(&parent) if parent != bl => bl = parent,
            _ => return false,
        }
    }
}
