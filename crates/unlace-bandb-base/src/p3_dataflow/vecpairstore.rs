//! (unlace `vecpairstore`) A 16-byte store of two 8-byte scalars is two 8-byte stores.
//!
//! gcc's SLP vectorizer merges two adjacent pointer stores (`f[0] = f[1] = p`,
//! `f[0] = a; f[1] = b`) into one 16-byte store, built with `vpunpcklqdq` for
//! equal halves and `vpinsrq` for two different ones. The SLEIGH user ops print
//! that as `*(unsigned __int128 *)f = vpunpcklqdq_avx(ZEXT816(p), ZEXT816(p))`,
//! which hides the two element assignments the source wrote.
//!
//! The rewrite recognizes a STORE whose value is the single-reader result of
//! `vpunpcklqdq_avx(x, y)` (low half of `x`, then low half of `y`) or of
//! `vpinsrq_avx(x, b, 1)` (low half of `x`, then `b`), where each low half is
//! an `INT_ZEXT` of an 8-byte value. It keeps the store of the low half and adds
//! a second 8-byte store of the high half at the pointer plus 8, then destroys
//! the user op. A store that heritage hung an INDIRECT on is left alone.
//! Option `vecpairstore`.

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode::{self, *};

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// (unlace) `ActionVecPairStore` -- split a 16-byte store of two 8-byte
/// scalars into two 8-byte stores (option `vecpairstore`).
pub struct ActionVecPairStore {
    base: ActionBase,
}

impl ActionVecPairStore {
    pub fn new(g: impl Into<String>) -> Self {
        Self {
            base: ActionBase::new(0, "vecpairstore", g),
        }
    }
}

impl Action for ActionVecPairStore {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        grouplist.contains(self.get_group()).then(|| {
            Box::new(Self {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data
            .get_arch()
            .unlace_options
            .get::<crate::vecpairstore::VecPairStore>()
            .0
        {
            return 0;
        }
        let blocks: Vec<BlockId> = (0..data.bblocks_get_size())
            .map(|i| data.bblocks_get_block(i))
            .collect();
        let mut stores = Vec::new();
        for block in blocks {
            for op in data.bb_ops(block) {
                if split_of(data, op).is_some() {
                    stores.push(op);
                }
            }
        }
        let mut changed = 0;
        for store in stores {
            let Some(split) = split_of(data, store) else {
                continue;
            };
            if rewrite(data, store, &split).is_err() {
                return (changed != 0) as ApplyResult;
            }
            changed += 1;
        }
        self.base.count += changed;
        (changed != 0) as ApplyResult
    }
}

/// Kinds of the vector-pair user ops in `ArchContext::vecpair_userops`.
const VEC_PUNPCKLQDQ: u8 = 0;
const VEC_PINSRQ: u8 = 1;

/// The two halves of a split store: the store's pointer, the low and high
/// 8-byte values, and the user op whose result the store wrote.
struct Split {
    ptr: VarnodeId,
    lo: VarnodeId,
    hi: VarnodeId,
    call: OpId,
}

/// The 8-byte low part of `v` when `v` is an `INT_ZEXT` of an 8-byte value.
fn low_half(data: &Funcdata, v: VarnodeId) -> Option<VarnodeId> {
    let def = data.vbank().get(v)?.get_def()?;
    let o = data.obank().get(def)?;
    if o.code() != CPUI_INT_ZEXT || data.vbank().get(v)?.get_size() != 16 {
        return None;
    }
    let x = o.get_in(0)?;
    (data.vbank().get(x)?.get_size() == 8).then_some(x)
}

/// The split of `store` when it writes a 16-byte vector-pair user op result
/// read by nothing else, and no INDIRECT of heritage hangs on the store.
fn split_of(data: &Funcdata, store: OpId) -> Option<Split> {
    let st = data.obank().get(store)?;
    if st.code() != CPUI_STORE || st.num_input() != 3 {
        return None;
    }
    let ptr = st.get_in(1)?;
    let val = st.get_in(2)?;
    let vv = data.vbank().get(val)?;
    if vv.get_size() != 16 || vv.descend_iter().count() != 1 {
        return None;
    }
    let call_id = vv.get_def()?;
    let call = data.obank().get(call_id)?;
    if call.code() != CPUI_CALLOTHER || call.get_out() != Some(val) {
        return None;
    }
    let uid = data.vbank().get(call.get_in(0)?)?;
    if !uid.is_constant() {
        return None;
    }
    let kind = data
        .get_arch()
        .vecpair_userops
        .iter()
        .find(|(id, _)| u64::from(*id) == uid.get_offset())
        .map(|(_, k)| *k)?;
    let (lo, hi) = match (kind, call.num_input()) {
        (VEC_PUNPCKLQDQ, 3) => (low_half(data, call.get_in(1)?)?, low_half(data, call.get_in(2)?)?),
        (VEC_PINSRQ, 4) => {
            let imm = data.vbank().get(call.get_in(3)?)?;
            if !imm.is_constant() || imm.get_offset() != 1 {
                return None;
            }
            let b = call.get_in(2)?;
            if data.vbank().get(b)?.get_size() != 8 {
                return None;
            }
            (low_half(data, call.get_in(1)?)?, b)
        }
        _ => return None,
    };
    if has_indirect(data, store) {
        return None;
    }
    Some(Split { ptr, lo, hi, call: call_id })
}

/// Does an INDIRECT that heritage hung on `store` sit in its block?
fn has_indirect(data: &Funcdata, store: OpId) -> bool {
    let Some(block) = data.obank().get(store).and_then(|o| o.get_parent()) else {
        return true;
    };
    data.bb_ops(block).into_iter().any(|o| {
        data.obank().get(o).is_some_and(|p| {
            p.code() == CPUI_INDIRECT
                && p.get_in(1)
                    .and_then(|v| data.vbank().get(v))
                    .is_some_and(|v| {
                        v.get_space().get_type() == unlace_base::space::spacetype::IPTR_IOP
                            && crate::funcdata_varnode::op_iop_decode(v.get_offset()) == store
                    })
        })
    })
}

/// `base + 8` as a constant when `base` is one, else as a new INT_ADD before
/// `before`.
fn plus_eight(data: &mut Funcdata, base: VarnodeId, before: OpId) -> UnlaceResult<VarnodeId> {
    let size = data.vbank().get(base).map_or(8, |v| v.get_size());
    if let Some(v) = data.vbank().get(base).filter(|v| v.is_constant()) {
        let off = v.get_offset().wrapping_add(8);
        return Ok(data.new_constant(size, off));
    }
    let at = data
        .obank()
        .get(before)
        .map(|p| p.get_addr().clone())
        .ok_or_else(|| UnlaceError::lowlevel("vecpairstore: stale store"))?;
    let add = data.new_op(2, at);
    data.op_set_opcode_code(add, CPUI_INT_ADD);
    data.op_set_input(add, base, 0)?;
    let k = data.new_constant(size, 8 as uintb);
    data.op_set_input(add, k, 1)?;
    let out = data.new_unique_out(size, add)?;
    data.op_insert_before(add, before);
    Ok(out)
}

fn rewrite(data: &mut Funcdata, store: OpId, s: &Split) -> UnlaceResult<()> {
    let (at, space) = {
        let o = data
            .obank()
            .get(store)
            .ok_or_else(|| UnlaceError::lowlevel("vecpairstore: stale store"))?;
        (o.get_addr().clone(), o.get_in(0))
    };
    let space = space.ok_or_else(|| UnlaceError::lowlevel("vecpairstore: store without space"))?;
    let hi_ptr = plus_eight(data, s.ptr, store)?;
    let second = data.new_op(3, at);
    data.op_set_opcode_code(second, CPUI_STORE);
    data.op_set_input(second, space, 0)?;
    data.op_set_input(second, hi_ptr, 1)?;
    data.op_set_input(second, s.hi, 2)?;
    data.op_insert_after(second, store);
    data.op_set_input(store, s.lo, 2)?;
    data.op_destroy(s.call);
    Ok(())
}

crate::unlace_flag!(
    /// (unlace) Split a 16-byte store of two 8-byte scalars into two stores
    /// (option `vecpairstore`).  See [`crate::vecpairstore`].
    VecPairStore,
    "vecpairstore",
    "two-word vector pair stores as two element stores",
    unset: false,
    shipped: true
);
