//! Tests moved out of `varmap` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `varmap` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::dtype::{Datatype, TypeFactory, type_metatype};
    pub(super) use unlace_base::address::{Address, sign_extend};
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::space::AddrSpace;
    pub(super) use unlace_base::types::{Wrap, int4, int8, intb, uint4, uint8, uintb};
}
use crate::dtype::{Datatype, TypeFactoryImpl, type_metatype};
use crate::varmap::*;
use module_scope::*;
use unlace_base::address::{Address, RangeList};
use unlace_base::space::{AddrSpace, addrspace_flags, spacetype};

// Unit tests for `varmap`: the order-determining stack-layout-recovery core.
//
// These exercise the parts the porting item flags as output-determining — the
// `RangeHint` ordering and merge logic, `MapState`'s sort + `reconcileDatatypes`,
// and `AliasChecker`'s offset gather / alias sort / boundary derivation — on
// synthetic frames with known-answer assertions transcribed against the C++.

use std::rc::Rc;

// --- Builders -------------------------------------------------------------

/// A processor space with word-size 1 (so byte<->address is the identity) and
/// 8-byte addresses, matching the synthetic "stack" used below.
fn stack_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "stack",
        false, // little-endian
        8,     // address size
        1,     // word size
        4,     // index
        addrspace_flags::hasphysical,
        1,
        1,
    ))
}

/// A base data-type of the given size and meta-type (align-size == size).
fn base(size: int4, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(size, size, meta))
}

/// A usable type factory (default alignment map, base-type cap of 8), matching
/// the dtype-module test helper.
fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f
}

/// A fixed-size hint at the given signed/unsigned start with a given type.
fn hint(start: uintb, size: int4, ct: Rc<Datatype>, rt: RangeType) -> RangeHint {
    // For these synthetic frames word-size is 1, so sstart == start treated as
    // signed; callers pass small positive offsets where sstart == start.
    RangeHint::new(start, size, start as intb, ct, 0, rt, -1)
}

// --- MapState: sort + reconcileDatatypes ----------------------------------

/// Build a one-range analysis window [first,last] over the stack space.
fn window(space: &Rc<AddrSpace>, first: uintb, last: uintb) -> RangeList {
    let mut rl = RangeList::new();
    rl.insert_range(Rc::clone(space), first, last);
    rl
}

// --- AliasChecker: offset gather / sort / boundary ------------------------

/// A mock `AliasGatherAccess` that replays a pre-canned spacebase input,
/// additive-base set, and per-base offset map (so the offset/sort/boundary
/// logic can be tested without the W7 Varnode descend graph).
struct MockGather {
    spacebase: Option<crate::context::VarnodeId>,
    bases: Vec<AddBase>,
    offsets: std::collections::BTreeMap<u64, uintb>,
}

impl AliasGatherAccess for MockGather {
    fn find_spacebase_input(&self, _space: &Rc<AddrSpace>) -> Option<crate::context::VarnodeId> {
        self.spacebase
    }
    fn gather_additive_base(
        &mut self,
        _startvn: crate::context::VarnodeId,
        addbase: &mut Vec<AddBase>,
    ) {
        addbase.extend(self.bases.iter().copied());
    }
    fn gather_offset(&mut self, vn: crate::context::VarnodeId) -> uintb {
        // Key the canned offset by the slotmap key's index bits (stable per id).
        let k = vn_key(vn);
        *self.offsets.get(&k).unwrap_or(&0)
    }
}

/// Stable u64 key for a VarnodeId (its slotmap internal representation).
fn vn_key(id: crate::context::VarnodeId) -> u64 {
    use slotmap::Key;
    id.data().as_ffi()
}

/// Mint a few distinct VarnodeIds via a throwaway slotmap.
fn mint_varnodes(n: usize) -> Vec<crate::context::VarnodeId> {
    let mut sm: slotmap::SlotMap<crate::context::VarnodeId, ()> = slotmap::SlotMap::with_key();
    (0..n).map(|_| sm.insert(())).collect()
}

// --- ScopeLocal -----------------------------------------------------------

/// A `ScopeLocal` over the synthetic stack space, sized for that space's index.
fn scope_local() -> ScopeLocal {
    let spc = stack_space(); // index 4
    ScopeLocal::new(0x1234, spc, "myfunc", 8).expect("build ScopeLocal")
}

type Hint = (uintb, Rc<Datatype>, uint4, RangeType, int4);

/// The start of the local covering `[off, off + size)` after `restructure`
/// over `hints`, with `bases` as the guarded store bases.
fn restructured_start(hints: &[Hint], bases: Vec<intb>, off: uintb, size: int4) -> uintb {
    let f = factory();
    let mut sl = scope_local();
    let spc = Rc::clone(sl.get_space_id());
    let mut localr = RangeList::new();
    localr.insert_range(Rc::clone(&spc), 0, 0x3f);
    let paramr = RangeList::new();
    sl.reset_local_window(&localr, &paramr, false);
    let unknown = base(1, type_metatype::TYPE_UNKNOWN);
    let mut state = MapState::new(Rc::clone(&spc), &localr, &paramr, unknown);
    for (start, ct, flags, rt, hi) in hints {
        state.add_range_pub(*start, Some(Rc::clone(ct)), *flags, *rt, *hi);
    }
    state.set_absorbing_bases(bases);
    sl.restructure(&mut state, &f).expect("restructure");
    let scope = sl.scope_id();
    let at = Address::new(Rc::clone(&spc), off);
    let eref = sl
        .database()
        .find_overlap(scope, &at, size)
        .expect("a local");
    sl.database().entry(scope, eref).get_addr().get_offset()
}

#[test]
fn scope_local_restructure_builds_a_disjoint_cover() {
    // restructure() merges the MapState's hints into mapped Symbols, the engine
    // path ActionRestructureVarnode drives.  Two non-overlapping int4 hints in
    // the local window become two mapped locals.
    let f = factory();
    let mut sl = scope_local();
    let spc = Rc::clone(sl.get_space_id());

    // Local window [0, 0x40) so both hints (at 0x10, 0x20) fit (word-size 1, so
    // the offsets are also the signed sstart).
    let mut localr = RangeList::new();
    localr.insert_range(Rc::clone(&spc), 0, 0x3f);
    let paramr = RangeList::new();
    sl.reset_local_window(&localr, &paramr, false);

    let mut state = MapState::new(
        Rc::clone(&spc),
        &localr,
        &paramr,
        base(1, type_metatype::TYPE_UNKNOWN),
    );
    state.add_fixed_type_pub(0x10, base(4, type_metatype::TYPE_INT), 0, &f);
    state.add_fixed_type_pub(0x20, base(4, type_metatype::TYPE_INT), 0, &f);

    let overlaps = sl.restructure(&mut state, &f).expect("restructure");
    assert!(
        !overlaps,
        "two disjoint hints reconcile without overlap problems"
    );

    // Each hint produced a mapped local symbol at its stack offset.
    let scope = sl.scope_id();
    let a0 = Address::new(Rc::clone(&spc), 0x10);
    let a1 = Address::new(Rc::clone(&spc), 0x20);
    assert!(
        sl.database().find_overlap(scope, &a0, 4).is_some(),
        "local at 0x10 created"
    );
    assert!(
        sl.database().find_overlap(scope, &a1, 4).is_some(),
        "local at 0x20 created"
    );
}

#[test]
fn scope_local_restructure_maps_tail_words_into_the_indexed_storage() {
    let word = base(4, type_metatype::TYPE_INT);
    for prefix in [None, Some(0x08), Some(0x0c)] {
        let mut hints = vec![
            (
                0x08,
                base(8, type_metatype::TYPE_UNKNOWN),
                0,
                RangeType::Open,
                5,
            ),
            (0x30, Rc::clone(&word), 0, RangeType::Fixed, -1),
            (0x34, Rc::clone(&word), 0, RangeType::Fixed, -1),
            (0x38, Rc::clone(&word), 0, RangeType::Fixed, -1),
        ];
        if let Some(offset) = prefix {
            hints.push((offset, Rc::clone(&word), 0, RangeType::Fixed, -1));
        }
        assert_eq!(restructured_start(&hints, Vec::new(), 0x30, 4), 0x08);
        assert_eq!(restructured_start(&hints, Vec::new(), 0x34, 4), 0x08);
        assert_eq!(restructured_start(&hints, Vec::new(), 0x38, 4), 0x38);
    }
}

#[test]
fn scope_local_clear_unlocked_category_resets_layout_each_pass() {
    // C++ `restructureVarnode` head `clearUnlockedCategory(-1)` (varmap.cc:1259):
    // an auto-recovered local from a prior restructure pass is dropped so the next
    // pass re-derives the layout from the current Varnodes (the fix that stops a
    // stale open-array Symbol from overriding the converted scalar stack hint).
    let f = factory();
    let mut sl = scope_local();
    let spc = Rc::clone(sl.get_space_id());

    let mut localr = RangeList::new();
    localr.insert_range(Rc::clone(&spc), 0, 0x3f);
    let paramr = RangeList::new();
    sl.reset_local_window(&localr, &paramr, false);

    // Pass 1: an OPEN hint at 0x10 (what gatherOpen produces before the STORE is
    // folded) creates a (spuriously sized) auto-recovered local symbol.
    let mut state = MapState::new(
        Rc::clone(&spc),
        &localr,
        &paramr,
        base(1, type_metatype::TYPE_UNKNOWN),
    );
    state.add_range_pub(0x10, None, 0, crate::varmap::RangeType::Open, 3);
    // A guard endpoint so `restructure` closes the open range into an entry.
    state.add_fixed_type_pub(0x30, base(4, type_metatype::TYPE_INT), 0, &f);
    sl.restructure(&mut state, &f).expect("restructure pass 1");
    let scope = sl.scope_id();
    let a0 = Address::new(Rc::clone(&spc), 0x10);
    assert!(
        sl.database().find_overlap(scope, &a0, 1).is_some(),
        "pass 1 created an auto-recovered local at 0x10",
    );

    // The per-pass reset drops that unlocked local.
    sl.clear_unlocked_category_negative()
        .expect("clearUnlockedCategory(-1)");
    assert!(
        sl.database().find_overlap(scope, &a0, 1).is_none(),
        "clearUnlockedCategory(-1) removed the unlocked auto-recovered local",
    );
}
