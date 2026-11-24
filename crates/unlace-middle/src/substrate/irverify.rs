//! (unlace) Whole-function IR consistency check, the structural tier of the IR verifier.
//!
//! [`verify_funcdata`] checks that the op, varnode and basic-block links of a `Funcdata` agree
//! with each other: every output names its op as definition, every input is among its varnode's
//! descendants (and every descendant reads it), and every op on a basic block's list names that
//! block, with the list's length and tail matching the block's record. It makes no claim about
//! dominance or definedness, which later recovery passes are still allowed to refine.
//!
//! Nothing in the scheduler calls it yet: a caller that wants to find the pass that broke a link
//! runs it between passes and reports the first violation.

use std::collections::BTreeSet;
use std::fmt;

use crate::block::BlockKind;
use crate::context::BlockId;
use crate::funcdata::Funcdata;

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
