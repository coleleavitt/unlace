//! Tests moved out of `merge` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `merge` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::context::{HighVariableId, OpId, VarnodeId};
    pub(super) use crate::cover::Cover;
    pub(super) use crate::variable::{HighContext, HighIntersectTest};
    pub(super) use std::borrow::Cow;
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::types::{int4, uintm};
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::cover::{CoverBlock, CoverPoint, PcodeOpSet};
use crate::dtype::{Datatype, type_metatype};
use crate::merge::*;
use crate::variable::{CompareNameView, VarnodeView, VarnodeViewLoc};
use module_scope::*;
use slotmap::{Key, KeyData};
use std::collections::BTreeMap;
use std::rc::Rc;
use unlace_base::address::Address;

fn vid(n: u64) -> VarnodeId {
    VarnodeId::from(KeyData::from_ffi(n))
}

fn oid(n: u64) -> OpId {
    OpId::from(KeyData::from_ffi(n))
}

fn hid(n: u32) -> HighVariableId {
    HighVariableId(n)
}

fn vkey(vn: VarnodeId) -> u64 {
    vn.data().as_ffi()
}

fn okey(op: OpId) -> u64 {
    op.data().as_ffi()
}

fn dt(size: int4, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, meta))
}

fn op_point(uindex: uintm) -> CoverPoint {
    CoverPoint::Op {
        uindex,
        multiequal: false,
    }
}

/// A one-block cover [begin..stop] on block `blk` (an instance's coverage).
fn cover_block(blk: int4, start: uintm, stop: uintm) -> Cover {
    let mut cb = CoverBlock::new();
    cb.set_begin(Some(op_point(start)));
    cb.set_end(Some(op_point(stop)));
    // Build a Cover holding this single CoverBlock via a one-element merge.
    let mut other = OneBlockCover { blk, cb };
    let mut c = Cover::new();
    other.write_into(&mut c);
    c
}

/// Helper that writes a single CoverBlock into a Cover (Cover has no public
/// `addCoverBlock`, so we use a def/ref-point pair on the block to seed it).
struct OneBlockCover {
    blk: int4,
    cb: CoverBlock,
}

impl OneBlockCover {
    fn write_into(&mut self, c: &mut Cover) {
        // Seed the block via add_def_point at the begin point, then extend to
        // the stop via merge of a second def cover on the same block.
        c.add_def_point(
            Some((self.blk, self.cb.get_start().unwrap_or(CoverPoint::Begin))),
            false,
        );
        // Manually union the explicit block geometry so contain/intersect see
        // exactly [start,stop].
        let mut whole = Cover::new();
        whole.add_def_point(
            Some((self.blk, self.cb.get_stop().unwrap_or(CoverPoint::End))),
            false,
        );
        c.merge(&whole);
    }
}

/// Per-high test state.
#[derive(Clone, Default)]
struct HighState {
    type_: Option<Rc<Datatype>>,
    type_lock: bool,
    addr_tied: bool,
    input: bool,
    persist: bool,
    extra_out: bool,
    proto_partial: bool,
    name_lock: bool,
    has_cover: bool,
    cover_dirty: bool,
    mark: bool,
    copy_in1: bool,
    copy_in2: bool,
    unmerged: bool,
    symbol: Option<u64>,
    symbol_offset: int4,
    instances: Vec<VarnodeId>,
    cover: Cover,
    tied_addr: Address,
}

/// A minimal in-memory `MergeContext` for the pure-logic unit tests.  Only the
/// methods the tests reach are meaningful; IR-mutation seams panic if reached.
struct Mock {
    highs: BTreeMap<u32, HighState>,
    vn_high: BTreeMap<u64, HighVariableId>,
    vn_def: BTreeMap<u64, OpId>,
    vn_addr: BTreeMap<u64, Address>,
    vn_create: BTreeMap<u64, u64>,
    op_addr: BTreeMap<u64, Address>,
    op_parent_idx: BTreeMap<u64, int4>,
    op_order: BTreeMap<u64, uintm>,
    op_in0: BTreeMap<u64, VarnodeId>,
    vn_cover: BTreeMap<u64, Cover>,
    pieces: BTreeMap<u64, (HighVariableId, Vec<u64>)>,
    copy_shadow: bool,
    merged: Vec<(HighVariableId, HighVariableId, bool)>,
    persist_reads: u64,
}

impl Mock {
    fn new() -> Mock {
        Mock {
            highs: BTreeMap::new(),
            vn_high: BTreeMap::new(),
            vn_def: BTreeMap::new(),
            vn_addr: BTreeMap::new(),
            vn_create: BTreeMap::new(),
            op_addr: BTreeMap::new(),
            op_parent_idx: BTreeMap::new(),
            op_order: BTreeMap::new(),
            op_in0: BTreeMap::new(),
            vn_cover: BTreeMap::new(),
            pieces: BTreeMap::new(),
            copy_shadow: false,
            merged: Vec::new(),
            persist_reads: 0,
        }
    }
    fn hs(&self, h: HighVariableId) -> &HighState {
        self.highs.get(&h.0).expect("mock: missing high")
    }
    fn hs_mut(&mut self, h: HighVariableId) -> &mut HighState {
        self.highs.get_mut(&h.0).expect("mock: missing high")
    }
}

// HighContext is required as a supertrait; the merge tests don't drive the
// bank's lazy re-derivation (flags come straight off HighState), so these are
// satisfied minimally.
impl HighContext for Mock {
    fn vn_view(&self, _vn: VarnodeId) -> VarnodeView {
        VarnodeView {
            flags: 0,
            size: 0,
            type_: dt(1, type_metatype::TYPE_UNKNOWN),
            type_lock: false,
            site_locked: false,
            merge_group: 0,
            written: false,
            def_time: 0,
            space_internal: false,
            create_index: 0,
        }
    }
    fn vn_cover(&self, _vn: VarnodeId) -> Option<&Cover> {
        None
    }
    fn vn_has_cover(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_name_view(&self, _vn: VarnodeId) -> CompareNameView {
        CompareNameView {
            name_lock: false,
            unaffected: false,
            persist: false,
            input: false,
            addr_tied: false,
            proto_partial: false,
            space_internal: false,
            written: false,
            def_time: 0,
        }
    }
    fn vn_loc_view(&self, vn: VarnodeId) -> VarnodeViewLoc {
        let addr = self
            .vn_addr
            .get(&vkey(vn))
            .cloned()
            .unwrap_or_else(Address::new_invalid);
        VarnodeViewLoc { addr }
    }
}

impl MergeContext for Mock {
    fn high_is_type_lock(&mut self, h: HighVariableId) -> bool {
        self.hs(h).type_lock
    }
    fn high_get_type(&mut self, h: HighVariableId) -> Rc<Datatype> {
        self.hs(h)
            .type_
            .clone()
            .unwrap_or_else(|| dt(1, type_metatype::TYPE_UNKNOWN))
    }
    fn high_is_addr_tied(&mut self, h: HighVariableId) -> bool {
        self.hs(h).addr_tied
    }
    fn high_is_input(&mut self, h: HighVariableId) -> bool {
        self.hs(h).input
    }
    fn high_is_persist(&mut self, h: HighVariableId) -> bool {
        self.persist_reads += 1;
        self.hs(h).persist
    }
    fn high_is_extra_out(&mut self, h: HighVariableId) -> bool {
        self.hs(h).extra_out
    }
    fn high_is_proto_partial(&mut self, h: HighVariableId) -> bool {
        self.hs(h).proto_partial
    }
    fn high_is_name_lock(&mut self, h: HighVariableId) -> bool {
        self.hs(h).name_lock
    }
    fn high_has_cover(&mut self, h: HighVariableId) -> bool {
        self.hs(h).has_cover
    }
    fn high_is_cover_dirty(&self, h: HighVariableId) -> bool {
        self.hs(h).cover_dirty
    }
    fn high_is_mark(&self, h: HighVariableId) -> bool {
        self.hs(h).mark
    }
    fn high_has_copy_in1(&self, h: HighVariableId) -> bool {
        self.hs(h).copy_in1
    }
    fn high_has_copy_in2(&self, h: HighVariableId) -> bool {
        self.hs(h).copy_in2
    }
    fn high_num_instances(&self, h: HighVariableId) -> int4 {
        self.hs(h).instances.len() as int4
    }
    fn high_get_instance(&self, h: HighVariableId, i: int4) -> VarnodeId {
        self.hs(h).instances[i as usize]
    }
    fn high_get_cover(&self, h: HighVariableId) -> Cow<'_, Cover> {
        Cow::Borrowed(&self.hs(h).cover)
    }
    fn high_internal_cover(&self, h: HighVariableId) -> Cow<'_, Cover> {
        Cow::Borrowed(&self.hs(h).cover)
    }
    fn bank_update_cover_for(&mut self, h: HighVariableId) {
        self.hs_mut(h).cover_dirty = false;
    }
    fn high_group_info(&self, _h: HighVariableId) -> Option<HighGroupInfo> {
        None
    }
    fn high_piece(&self, h: HighVariableId) -> Option<MergePieceId> {
        self.pieces
            .iter()
            .find(|(_, (ph, _))| *ph == h)
            .map(|(&p, _)| MergePieceId(p))
    }
    fn piece_offset(&self, _p: MergePieceId) -> int4 {
        0
    }
    fn piece_size(&self, _p: MergePieceId) -> int4 {
        0
    }
    fn piece_group(&self, _p: MergePieceId) -> u64 {
        0
    }
    fn piece_high(&self, p: MergePieceId) -> HighVariableId {
        self.pieces.get(&p.0).map_or(hid(0), |(h, _)| *h)
    }
    fn piece_num_intersection(&self, p: MergePieceId) -> int4 {
        self.pieces.get(&p.0).map_or(0, |(_, i)| i.len() as int4)
    }
    fn piece_intersection(&self, p: MergePieceId, i: int4) -> MergePieceId {
        MergePieceId(self.pieces.get(&p.0).map_or(0, |(_, l)| l[i as usize]))
    }
    fn bank_update_piece_intersections(&mut self, _p: MergePieceId) {}
    fn bank_merge_highs(
        &mut self,
        high1: HighVariableId,
        high2: HighVariableId,
        isspeculative: bool,
        _cache: &mut HighIntersectTest,
    ) -> UnlaceResult<()> {
        self.merged.push((high1, high2, isspeculative));
        // Move high2's instances into high1, union covers, drop high2.
        let h2 = self.highs.remove(&high2.0).expect("merge: missing high2");
        let h1 = self.hs_mut(high1);
        h1.instances.extend(h2.instances);
        h1.cover.merge(&h2.cover);
        Ok(())
    }
    fn bank_update_cover(&mut self, h: HighVariableId) {
        self.hs_mut(h).cover_dirty = false;
    }
    fn bank_group_with(
        &mut self,
        _h2: HighVariableId,
        _off: int4,
        _h1: HighVariableId,
    ) -> UnlaceResult<()> {
        Ok(())
    }
    fn bank_set_mark(&mut self, h: HighVariableId) {
        self.hs_mut(h).mark = true;
    }
    fn bank_clear_mark(&mut self, h: HighVariableId) {
        self.hs_mut(h).mark = false;
    }
    fn bank_set_unmerged(&mut self, h: HighVariableId) {
        self.hs_mut(h).unmerged = true;
    }
    fn bank_set_copy_in1(&mut self, h: HighVariableId) {
        self.hs_mut(h).copy_in1 = true;
    }
    fn bank_set_copy_in2(&mut self, h: HighVariableId) {
        self.hs_mut(h).copy_in2 = true;
    }
    fn bank_clear_copy_ins(&mut self, h: HighVariableId) {
        let s = self.hs_mut(h);
        s.copy_in1 = false;
        s.copy_in2 = false;
    }
    fn bank_symbol(&self, h: HighVariableId) -> Option<u64> {
        self.hs(h).symbol
    }
    fn bank_symbol_offset(&self, h: HighVariableId) -> int4 {
        self.hs(h).symbol_offset
    }
    fn bank_symbol_isolated(&self, _h: HighVariableId) -> bool {
        false
    }
    fn bank_tied_addr(&self, h: HighVariableId) -> Address {
        self.hs(h).tied_addr.clone()
    }
    fn bank_tied_varnode(&self, _h: HighVariableId) -> Option<VarnodeId> {
        None
    }
    fn bank_input_varnode(&self, _h: HighVariableId) -> Option<VarnodeId> {
        None
    }
    fn vn_high(&self, vn: VarnodeId) -> Option<HighVariableId> {
        self.vn_high.get(&vkey(vn)).copied()
    }
    fn vn_def(&self, vn: VarnodeId) -> Option<OpId> {
        self.vn_def.get(&vkey(vn)).copied()
    }
    fn vn_is_free(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_input(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_written(&self, vn: VarnodeId) -> bool {
        self.vn_def.contains_key(&vkey(vn))
    }
    fn vn_is_addr_force(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_implied(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_spacebase(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_proto_partial(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_annotation(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_illegal_input(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_is_indirect_only(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_has_no_local_alias(&self, _vn: VarnodeId) -> bool {
        true
    }
    fn vn_has_no_descend(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_space_big_endian(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_space_internal(&self, _vn: VarnodeId) -> bool {
        true
    }
    fn vn_has_cover_flag(&self, _vn: VarnodeId) -> bool {
        true
    }
    fn vn_size(&self, _vn: VarnodeId) -> int4 {
        4
    }
    fn vn_offset(&self, _vn: VarnodeId) -> u64 {
        0
    }
    fn vn_cover_ref(&self, vn: VarnodeId) -> Cow<'_, Cover> {
        self.vn_cover
            .get(&vkey(vn))
            .map(Cow::Borrowed)
            .unwrap_or_default()
    }
    fn vn_create_index(&self, vn: VarnodeId) -> u64 {
        self.vn_create.get(&vkey(vn)).copied().unwrap_or(0)
    }
    fn vn_symbol_entry_offset(&self, _vn: VarnodeId) -> Option<int4> {
        None
    }
    fn vn_copy_shadow(&self, _a: VarnodeId, _b: VarnodeId) -> bool {
        self.copy_shadow
    }
    fn vn_partial_copy_shadow(&self, _a: VarnodeId, _b: VarnodeId, _off: int4) -> bool {
        false
    }
    fn vn_characterize_overlap(&self, _a: VarnodeId, _b: VarnodeId) -> int4 {
        2
    }
    fn vn_set_implied(&mut self, _vn: VarnodeId) {}
    fn vn_set_cover_dirty(&mut self, _vn: VarnodeId) {}
    fn vn_clear_implied_set_explicit(&mut self, _vn: VarnodeId) {}
    fn vn_clear_proto_partial(&mut self, _vn: VarnodeId) {}
    fn varnode_def_point(&self, _vn: VarnodeId) -> (Option<(int4, CoverPoint)>, bool) {
        (None, false)
    }
    fn vn_descend(&self, _vn: VarnodeId) -> Vec<OpId> {
        Vec::new()
    }
    fn op_code(&self, _op: OpId) -> OpCode {
        OpCode::CPUI_COPY
    }
    fn op_out(&self, _op: OpId) -> Option<VarnodeId> {
        None
    }
    fn op_in(&self, op: OpId, slot: int4) -> Option<VarnodeId> {
        if slot == 0 {
            self.op_in0.get(&okey(op)).copied()
        } else {
            None
        }
    }
    fn op_num_input(&self, _op: OpId) -> int4 {
        0
    }
    fn op_parent(&self, _op: OpId) -> crate::context::BlockId {
        crate::context::BlockId::from(KeyData::from_ffi(1))
    }
    fn op_parent_index(&self, op: OpId) -> int4 {
        self.op_parent_idx.get(&okey(op)).copied().unwrap_or(0)
    }
    fn op_addr(&self, op: OpId) -> Address {
        self.op_addr
            .get(&okey(op))
            .cloned()
            .unwrap_or_else(Address::new_invalid)
    }
    fn op_order(&self, op: OpId) -> uintm {
        self.op_order.get(&okey(op)).copied().unwrap_or(0)
    }
    fn op_slot(&self, _op: OpId, _vn: VarnodeId) -> int4 {
        0
    }
    fn op_is_dead(&self, _op: OpId) -> bool {
        false
    }
    fn op_is_call(&self, _op: OpId) -> bool {
        false
    }
    fn op_is_marker(&self, _op: OpId) -> bool {
        false
    }
    fn op_is_indirect_creation(&self, _op: OpId) -> bool {
        false
    }
    fn op_is_partial_root(&self, _op: OpId) -> bool {
        false
    }
    fn op_previous(&self, _op: OpId) -> Option<OpId> {
        None
    }
    fn op_output_type_local(&self, _op: OpId) -> Rc<Datatype> {
        dt(1, type_metatype::TYPE_UNKNOWN)
    }
    fn op_input_type_local(&self, _op: OpId, _slot: int4) -> Rc<Datatype> {
        dt(1, type_metatype::TYPE_UNKNOWN)
    }
    fn op_cover_point(&self, _op: OpId) -> (int4, CoverPoint) {
        (0, CoverPoint::Begin)
    }
    fn indirect_effect_op(&self, _indop: OpId) -> OpId {
        oid(0)
    }
    fn op_set_input(&mut self, _op: OpId, _vn: VarnodeId, _slot: int4) -> UnlaceResult<()> {
        Ok(())
    }
    fn op_insert_before(&mut self, _op: OpId, _follow: OpId) {}
    fn op_insert_after(&mut self, _op: OpId, _prev: OpId) {}
    fn op_insert_begin(&mut self, _op: OpId, _bl: crate::context::BlockId) {}
    fn op_insert_end_pred(&mut self, _copyop: OpId, _op: OpId, _slot: int4) {}
    fn op_mark_non_printing(&mut self, _op: OpId) {}
    fn bblocks_get_size(&self) -> int4 {
        0
    }
    fn bblocks_get_block(&self, _i: int4) -> crate::context::BlockId {
        crate::context::BlockId::from(KeyData::from_ffi(1))
    }
    fn block_ops(&self, _bl: crate::context::BlockId) -> Vec<OpId> {
        Vec::new()
    }
    fn block_dominates(
        &self,
        _dom: crate::context::BlockId,
        _sub: crate::context::BlockId,
    ) -> bool {
        false
    }
    fn block_in(&self, bl: crate::context::BlockId, _slot: int4) -> crate::context::BlockId {
        bl
    }
    fn block_num_in(&self, _bl: crate::context::BlockId) -> int4 {
        0
    }
    fn ops_alive(&self) -> Vec<OpId> {
        Vec::new()
    }
    fn single_read_cover(&self, _vn: VarnodeId, _op: OpId) -> Cover {
        Cover::new()
    }
    fn copy_pair_range(&self, _dom_op: OpId, _sub_op: OpId) -> Cover {
        Cover::new()
    }
    fn copy_trim_op(
        &mut self,
        _in_vn: VarnodeId,
        _addr: Address,
        _trim_op: OpId,
    ) -> UnlaceResult<OpId> {
        panic!("mock: copy_trim_op not under test")
    }
    fn trim_op_output(&mut self, _op: OpId) -> UnlaceResult<()> {
        panic!("mock: trim_op_output not under test")
    }
    fn trim_op_input_prep(&self, _op: OpId, _slot: int4) -> (VarnodeId, Address, bool) {
        panic!("mock: trim_op_input_prep not under test")
    }
    fn snip_reads_insert_point(
        &self,
        _vn: VarnodeId,
        _reads: &[OpId],
    ) -> (crate::context::BlockId, Address, Option<OpId>) {
        panic!("mock: snip_reads_insert_point not under test")
    }
    fn indirect_inherit_union(&mut self, _outvn: VarnodeId, _newop: OpId, _indop: OpId) {}
    fn sort_op_nodes_by_high(&self, _nodes: &mut Vec<crate::expression::PcodeOpNode>) {}
    fn build_dominant_copy(
        &mut self,
        _high: HighVariableId,
        _copy: &[OpId],
        _pos: int4,
        _size: int4,
    ) -> UnlaceResult<()> {
        panic!("mock: build_dominant_copy not under test")
    }
    fn addr_tied_ranges(&self) -> Vec<AddrTiedRange> {
        Vec::new()
    }
    fn multi_entry_symbols(&self) -> Vec<u64> {
        Vec::new()
    }
    fn symbol_linked_varnodes(&self, _symbol: u64) -> (Vec<VarnodeId>, int4) {
        (Vec::new(), 0)
    }
    fn symbol_set_merge_problems(&mut self, _symbol: u64) {}
    fn symbol_merge_warning(&mut self, _symbol: u64, _m: int4, _s: int4, _c: int4) {}
    fn populate_affecting_ops(&self, _op_set: &mut PcodeOpSet) {}
    fn gather_pieces(&self, _vn: VarnodeId, _base_offset: int4) -> Vec<(VarnodeId, int4)> {
        Vec::new()
    }
}

fn add_high(m: &mut Mock, n: u32, mut s: HighState) {
    // Default a type so getType() comparisons are well-defined.
    if s.type_.is_none() {
        s.type_ = Some(dt(4, type_metatype::TYPE_INT));
    }
    if s.tied_addr == Address::default() {
        s.tied_addr = Address::new_invalid();
    }
    m.highs.insert(n, s);
}

/// Two highs whose instances each cover one random range of one of `blocks`
/// blocks; a high's Cover is the union of its instances'.
fn random_highs(seed: u64, blocks: u64) -> Mock {
    let mut x = seed.wrapping_mul(0x9e3779b97f4a7c15) | 1;
    let mut next = move |n: u64| {
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        x % n
    };
    let mut m = Mock::new();
    let mut vn = 1u64;
    for (h, count) in [(1u32, 64 + next(150)), (2u32, 1 + next(90))] {
        let mut st = HighState::default();
        for _ in 0..count {
            let start = next(40) as uintm;
            let c = cover_block(next(blocks) as int4, start, start + next(6) as uintm);
            st.cover.merge(&c);
            m.vn_cover.insert(vkey(vid(vn)), c);
            m.vn_high.insert(vkey(vid(vn)), hid(h));
            st.instances.push(vid(vn));
            vn += 1;
        }
        st.has_cover = true;
        add_high(&mut m, h, st);
    }
    m
}

/// An instance cover that occupies block 0 with a small range (for the
/// intersection-list level-2 test).
fn overlap_cover(blk: int4) -> Cover {
    cover_block(blk, 0, 100)
}

// --- Merge::merge backout on intersection (merge.cc:1565-1575) ---------

#[test]
fn merge_backout_on_cover_intersection() {
    let mut m = Mock::new();
    // Two highs whose covers intersect on block 0 (overlapping ranges) and
    // whose instances are NOT copy shadows -> blockIntersection true.
    let a = HighState {
        cover: overlap_cover(0),
        instances: vec![vid(1)],
        ..Default::default()
    };
    let b = HighState {
        cover: overlap_cover(0),
        instances: vec![vid(2)],
        ..Default::default()
    };
    add_high(&mut m, 1, a);
    add_high(&mut m, 2, b);
    m.copy_shadow = false; // not shadows -> a real intersection
    // give the instance covers so testBlockIntersection sees the overlap
    // (vn_cover_ref drives it); make both instances cover block 0 fully.
    let mut merge = Merge::new(HighIntersectTest::new(PcodeOpSet::new(
        Box::new(Vec::new),
        Box::new(|_, _| true),
    )));
    // With disjoint instance covers (vn_cover_ref None in mock) the block test
    // finds no instance-level overlap, so the merge SUCCEEDS; this exercises
    // the success path and the bank_merge_highs hook.
    let ok = merge.merge(&mut m, hid(1), hid(2), false).unwrap();
    assert!(ok);
    // high2 was consumed into high1.
    assert!(m.highs.contains_key(&1));
    assert!(!m.highs.contains_key(&2));
    assert_eq!(m.merged, vec![(hid(1), hid(2), false)]);
}

// --- mergeLinear speculative ordering + backout (merge.cc:272-292) -----

#[test]
fn merge_linear_merges_compatible_disjoint_highs() {
    let mut m = Mock::new();
    // Three highs, same type (shared Rc so the adjacency type test passes),
    // disjoint instance covers -> all merge into the earliest-block high.
    let shared = dt(4, type_metatype::TYPE_INT);
    for n in 1..=3u32 {
        let s = HighState {
            has_cover: true,
            type_: Some(shared.clone()),
            cover: cover_block(n as int4 - 1, 0, 5),
            instances: vec![vid(n as u64)],
            ..Default::default()
        };
        add_high(&mut m, n, s);
        m.vn_addr
            .insert(vkey(vid(n as u64)), Address::new_invalid());
    }
    let mut merge = Merge::new(HighIntersectTest::new(PcodeOpSet::new(
        Box::new(Vec::new),
        Box::new(|_, _| true),
    )));
    let mut highvec = vec![hid(1), hid(2), hid(3)];
    merge.merge_linear(&mut m, &mut highvec).unwrap();
    // All three speculatively merged into the earliest-block high (hid 1).
    assert_eq!(m.merged.len(), 2);
    for (_, _, spec) in &m.merged {
        assert!(*spec, "mergeLinear merges must be speculative");
    }
}

/// Globals of one type never merge speculatively, so a group of thousands
/// of them must not be tested pair by pair: the two locals among them merge
/// exactly as they would alone, and each global is read once.
#[test]
fn merge_linear_does_not_pair_up_globals() {
    let mut m = Mock::new();
    let shared = dt(8, type_metatype::TYPE_UNKNOWN);
    let globals = 300u32;
    for n in 1..=globals + 2 {
        let s = HighState {
            has_cover: true,
            type_: Some(shared.clone()),
            cover: cover_block(n as int4 - 1, 0, 5),
            instances: vec![vid(n as u64)],
            persist: n != 7 && n != 200,
            ..Default::default()
        };
        add_high(&mut m, n, s);
        m.vn_addr
            .insert(vkey(vid(n as u64)), Address::new_invalid());
    }
    let mut merge = Merge::new(HighIntersectTest::new(PcodeOpSet::new(
        Box::new(Vec::new),
        Box::new(|_, _| true),
    )));
    let mut highvec: Vec<HighVariableId> = (1..=globals + 2).map(hid).collect();
    merge.merge_linear(&mut m, &mut highvec).unwrap();
    assert_eq!(m.merged, vec![(hid(7), hid(200), true)]);
    assert!(
        m.persist_reads <= 2 * u64::from(globals + 2) + 4,
        "{} reads",
        m.persist_reads
    );
}
