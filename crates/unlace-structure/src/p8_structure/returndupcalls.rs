//! (kuna `returndup calls`) Split a cross-jumped call tail per predecessor.
//!
//! An optimizing compiler shares the tail of two paths that end in the same
//! call (gcc `-fcrossjumping`): each path sets the arguments and jumps to one
//! `call f; ret` block, so the decompiler sees MULTIEQUALs feeding the call's
//! arguments and prints `if (c) { x = a; } else { x = b; } return f(x);`.
//! [`ActionReturnDupCalls`] splits such a block once per predecessor with
//! [`Funcdata::node_split_calls`], giving each path its own call and return:
//! `if (c) return f(a); return f(b);`.
//!
//! A block qualifies when it has no successors, two to four distinct
//! predecessors, at most [`MAX_OPS`] ops, exactly one CALL or CALLIND, an input
//! of that call computed from a MULTIEQUAL in the block that is not one memory
//! location loaded again on each path (`free(s->buf)` after a loop that reloads
//! `s->buf` is one source call), and no INDIRECT that
//! still creates the call's output (prototype recovery has not settled it yet;
//! a later pass of the loop retries).  Each predecessor runs exactly one copy,
//! so the split preserves behaviour.
//!
//! A call block that falls through to one successor instead of returning
//! qualifies on the same terms (Hex-Rays `UNMERGE_CALLS`, hexx64
//! `sub_191D80`) and is split with [`Funcdata::node_split_through`]: when the
//! successor has no other predecessor, each value the block defines that is read
//! beyond it (the call's result) is merged back in a MULTIEQUAL there; otherwise
//! the block's values may be read only by the successor's MULTIEQUALs.
//!
//! The one call may also be a CALLIND (Hex-Rays splits computed calls the same
//! way): when the paths set different targets, the target is one of the
//! MULTIEQUAL-fed inputs, and each clone calls through its own path's pointer,
//! which later passes can resolve to a direct call.  Each clone gets its own
//! call spec, as for a direct call.

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// Largest block (in p-code ops) this pass duplicates.
pub const MAX_OPS: usize = 16;
/// Maximum splits per function.
pub const MAX_SPLITS: int4 = 16;
/// Most defining ops [`reload_pointer`] looks through.
pub const MAX_RELOAD_DEFS: usize = 16;

/// Split a cross-jumped call tail per predecessor (`option returndup calls`).
pub struct ActionReturnDupCalls {
    base: ActionBase,
}

impl ActionReturnDupCalls {
    /// Construct in group `g`.
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionReturnDupCalls {
            base: ActionBase::new(0, "returndupcalls", g),
        })
    }
}

fn block_ops(data: &Funcdata, b: BlockId) -> Vec<OpId> {
    let mut ops = Vec::new();
    let mut cur = data.bb_op_head(b);
    while let Some(op) = cur {
        ops.push(op);
        cur = data.obank().get(op).and_then(|o| o.basic_neighbours().1);
    }
    ops
}

/// Does `op`'s value depend, within `ops`, on a MULTIEQUAL?
fn reads_merge(data: &Funcdata, ops: &[OpId], op: OpId, depth: u32) -> bool {
    let Some(o) = data.obank().get(op) else {
        return false;
    };
    (0..o.num_input()).any(|slot| {
        let Some(def) = o
            .get_in(slot)
            .and_then(|v| data.vbank().get(v))
            .and_then(|v| v.get_def())
        else {
            return false;
        };
        if !ops.contains(&def) {
            return false;
        }
        let code = data.obank().get(def).map(|d| d.code());
        (code == Some(OpCode::CPUI_MULTIEQUAL) && !one_reloaded_value(data, def))
            || (depth < 4 && reads_merge(data, ops, def, depth + 1))
    })
}

/// The pointer every value `vn` can take is loaded through, when each is a
/// LOAD or a MULTIEQUAL of such values (at most [`MAX_RELOAD_DEFS`] defs).
fn reload_pointer(data: &Funcdata, vn: VarnodeId, seen: &mut Vec<OpId>) -> Option<VarnodeId> {
    let def = data.vbank().get(vn)?.get_def()?;
    if seen.contains(&def) {
        return None;
    }
    if seen.len() >= MAX_RELOAD_DEFS {
        return None;
    }
    seen.push(def);
    let o = data.obank().get(def)?;
    match o.code() {
        OpCode::CPUI_LOAD => o.get_in(1),
        OpCode::CPUI_MULTIEQUAL => {
            let mut ptr: Option<VarnodeId> = None;
            for slot in 0..o.num_input() {
                let Some(input) = o.get_in(slot) else {
                    return None;
                };
                let in_def = data.vbank().get(input).and_then(|v| v.get_def());
                if in_def.is_some_and(|d| seen.contains(&d)) {
                    continue;
                }
                let p = reload_pointer(data, input, seen)?;
                match ptr {
                    None => ptr = Some(p),
                    Some(q) => {
                        if q != p
                            && !crate::expression::functional_equality(
                                q,
                                p,
                                data.vbank(),
                                data.obank(),
                            )
                        {
                            return None;
                        }
                    }
                }
            }
            ptr
        }
        _ => None,
    }
}

/// Is MULTIEQUAL `phi` only one memory location read again on each path
/// (`p = s->buf; ... p = s->buf;`)? Its paths then pass one source value, and
/// splitting the call on it only duplicates the call.
fn one_reloaded_value(data: &Funcdata, phi: OpId) -> bool {
    let Some(out) = data.obank().get(phi).and_then(|o| o.get_out()) else {
        return false;
    };
    reload_pointer(data, out, &mut Vec::new()).is_some()
}

fn is_candidate(data: &Funcdata, b: BlockId) -> bool {
    let blk = data.bblocks_ref().block(b);
    let size_in = blk.size_in();
    let size_out = blk.size_out();
    if size_out > 1 || !(2..=4).contains(&size_in) {
        return false;
    }
    if size_out == 1 && blk.get_out(0) == b {
        return false;
    }
    let mut preds: Vec<BlockId> = (0..size_in).map(|i| blk.get_in(i)).collect();
    preds.sort_unstable();
    preds.dedup();
    if preds.len() as int4 != size_in {
        return false;
    }
    let ops = block_ops(data, b);
    if ops.len() > MAX_OPS {
        return false;
    }
    let mut call = None;
    for &op in &ops {
        let Some(o) = data.obank().get(op) else {
            return false;
        };
        let allowed_branch = if size_out == 0 {
            OpCode::CPUI_RETURN
        } else {
            OpCode::CPUI_BRANCH
        };
        if (o.is_branch() && o.code() != allowed_branch) || o.is_indirect_creation() {
            return false;
        }
        if o.is_call() {
            if call.is_some() || !matches!(o.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
                return false;
            }
            call = Some(op);
        }
        let free_input = (0..o.num_input()).any(|s| {
            o.get_in(s)
                .and_then(|v| data.vbank().get(v))
                .is_some_and(|v| v.is_free() && !v.is_constant() && !v.is_annotation())
        });
        if free_input {
            return false;
        }
    }
    let Some(call) = call else { return false };
    let ends_in_return = ops
        .last()
        .and_then(|&op| data.obank().get(op))
        .is_some_and(|o| o.code() == OpCode::CPUI_RETURN);
    (size_out == 1 || ends_in_return)
        && data.get_call_specs_index(call).is_some()
        && reads_merge(data, &ops, call, 0)
}

impl Action for ActionReturnDupCalls {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        if !grouplist.contains(self.get_group()) {
            return None;
        }
        Some(Box::new(ActionReturnDupCalls {
            base: self.base.clone(),
        }))
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data
            .get_arch()
            .kuna_options
            .get::<crate::kuna_returndup::ReturnDup>()
            .calls
        {
            return 0;
        }
        let root = data.bblocks_root_pub();
        let cands: Vec<BlockId> = data
            .bblocks_ref()
            .block(root)
            .get_list()
            .iter()
            .copied()
            .filter(|&b| is_candidate(data, b))
            .collect();
        let mut count = 0;
        for b in cands {
            while count < MAX_SPLITS && data.bblocks_ref().block(b).size_in() > 1 {
                let last = data.bblocks_ref().block(b).size_in() - 1;
                let split = if data.bblocks_ref().block(b).size_out() == 0 {
                    data.node_split_calls(b, last)
                } else {
                    data.node_split_through(b, last, true)
                };
                if split.is_err() {
                    break;
                }
                count += 1;
            }
        }
        self.base_mut().count += count;
        0
    }
}
