use super::*;
use slotmap::KeyData;
use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, spacetype};

fn vid(n: u64) -> VarnodeId {
    VarnodeId::from(KeyData::from_ffi(n))
}

/// A simple in-memory HighContext over a fixed set of varnode views.
struct MapCtx {
    views: BTreeMap<u64, VarnodeView>,
    covers: BTreeMap<u64, Cover>,
}
impl MapCtx {
    fn key(vn: VarnodeId) -> u64 {
        use slotmap::Key;
        vn.data().as_ffi()
    }
}
impl HighContext for MapCtx {
    fn vn_view(&self, vn: VarnodeId) -> VarnodeView {
        self.views.get(&MapCtx::key(vn)).expect("view").clone()
    }
    fn vn_cover(&self, vn: VarnodeId) -> Option<&Cover> {
        self.covers.get(&MapCtx::key(vn))
    }
    fn vn_has_cover(&self, vn: VarnodeId) -> bool {
        // has cover if insert & !constant & !annotation
        let fl = self
            .views
            .get(&MapCtx::key(vn))
            .map(|v| v.flags)
            .unwrap_or(0);
        (fl & (varnode_flags::constant | varnode_flags::annotation | varnode_flags::insert))
            == varnode_flags::insert
    }
    fn vn_name_view(&self, vn: VarnodeId) -> CompareNameView {
        let v = self.vn_view(vn);
        CompareNameView {
            name_lock: v.flags & varnode_flags::namelock != 0,
            unaffected: v.flags & varnode_flags::unaffected != 0,
            persist: v.flags & varnode_flags::persist != 0,
            input: v.flags & varnode_flags::input != 0,
            addr_tied: v.flags & varnode_flags::addrtied != 0,
            proto_partial: v.flags & varnode_flags::proto_partial != 0,
            space_internal: v.space_internal,
            written: v.written,
            def_time: v.def_time,
        }
    }
    fn vn_loc_view(&self, _vn: VarnodeId) -> VarnodeViewLoc {
        // The membership tests in this module's unit tests don't exercise the
        // address-ordered insert/remove; a placeholder invalid address keeps
        // the trait satisfied (the dedicated compare_just_loc test builds real
        // addresses directly).
        VarnodeViewLoc {
            addr: unlace_base::address::Address::new_invalid(),
        }
    }
}

fn dt(size: int4, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, meta))
}

fn view(flags: uint4, ty: Rc<Datatype>, type_lock: bool) -> VarnodeView {
    VarnodeView {
        flags,
        size: ty.get_size(),
        type_: ty,
        type_lock,
        site_locked: false,
        merge_group: 0,
        written: (flags & varnode_flags::written) != 0,
        def_time: 0,
        space_internal: false,
        create_index: 0,
    }
}

#[test]
fn highvariable_construction_dirty() {
    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    let h = bank.get(id).unwrap();
    assert_eq!(h.num_instances(), 1);
    assert_eq!(h.get_instance(0), vid(1));
    assert_eq!(h.get_num_merge_classes(), 1);
    // all four dirty bits set at construction
    assert!(h.is_cover_dirty());
    assert_ne!(h.highflags & high_flags::flagsdirty, 0);
    assert_ne!(h.highflags & high_flags::namerepdirty, 0);
    assert_ne!(h.highflags & high_flags::typedirty, 0);
}

#[test]
fn overlap_group_identifies_only_an_unambiguous_whole_owner() {
    let mut bank = HighVariableBank::new();
    let ax = bank.new_high(vid(1));
    let al = bank.new_high(vid(2));
    let ah = bank.new_high(vid(3));
    bank.group_with(al, 0, ax, 1, 2).unwrap();
    bank.group_with(ah, 1, ax, 1, 2).unwrap();
    assert_eq!(bank.unique_group_covering_high(ax), Some(ax));
    assert_eq!(bank.unique_group_covering_high(al), Some(ax));
    assert_eq!(bank.unique_group_covering_high(ah), Some(ax));

    let left = bank.new_high(vid(4));
    let right = bank.new_high(vid(5));
    bank.group_with(left, 0, right, 2, 2).unwrap();
    assert_eq!(bank.unique_group_covering_high(left), None);
    assert_eq!(bank.unique_group_covering_high(right), None);

    let lone = bank.new_high(vid(6));
    assert_eq!(bank.unique_group_covering_high(lone), None);
}

#[test]
fn update_flags_inherits_member_props() {
    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    let mut views = BTreeMap::new();
    // member is input + addrtied + mapped + directwrite (directwrite must be
    // masked OUT by updateFlags)
    views.insert(
        MapCtx::key(vid(1)),
        view(
            varnode_flags::input
                | varnode_flags::addrtied
                | varnode_flags::mapped
                | varnode_flags::directwrite
                | varnode_flags::insert,
            dt(4, type_metatype::TYPE_UNKNOWN),
            false,
        ),
    );
    let ctx = MapCtx {
        views,
        covers: BTreeMap::new(),
    };
    let h = bank.get_mut(id).unwrap();
    assert!(h.is_input(&ctx));
    assert!(h.is_addr_tied(&ctx));
    assert!(h.is_mapped(&ctx));
    // directwrite is masked out of the high flags
    assert_eq!(h.flags & varnode_flags::directwrite, 0);
    // flagsdirty cleared after updateFlags
    assert_eq!(h.highflags & high_flags::flagsdirty, 0);
}

#[test]
fn update_type_picks_most_specialized() {
    // Two members: an UNKNOWN(4) and an INT(4). INT is more specialized
    // (lower typeOrderFormal), so it should win.
    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    // add second instance directly for the test
    bank.get_mut(id).unwrap().inst.push(vid(2));
    bank.get_mut(id).unwrap().highflags |= high_flags::typedirty;

    let mut views = BTreeMap::new();
    views.insert(
        MapCtx::key(vid(1)),
        view(
            varnode_flags::insert,
            dt(4, type_metatype::TYPE_UNKNOWN),
            false,
        ),
    );
    views.insert(
        MapCtx::key(vid(2)),
        view(varnode_flags::insert, dt(4, type_metatype::TYPE_INT), false),
    );
    let ctx = MapCtx {
        views,
        covers: BTreeMap::new(),
    };
    let h = bank.get_mut(id).unwrap();
    let ty = h.get_type(&ctx, None);
    assert_eq!(ty.get_metatype(), type_metatype::TYPE_INT);
    // typedirty cleared
    assert_eq!(h.highflags & high_flags::typedirty, 0);
}

#[test]
fn update_type_typelock_wins() {
    // A type-locked UNKNOWN beats an unlocked INT (typelock preferred).
    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    bank.get_mut(id).unwrap().inst.push(vid(2));
    bank.get_mut(id).unwrap().highflags |= high_flags::typedirty;
    let mut views = BTreeMap::new();
    views.insert(
        MapCtx::key(vid(1)),
        view(varnode_flags::insert, dt(4, type_metatype::TYPE_INT), false),
    );
    views.insert(
        MapCtx::key(vid(2)),
        view(
            varnode_flags::insert,
            dt(4, type_metatype::TYPE_UNKNOWN),
            true,
        ),
    );
    let ctx = MapCtx {
        views,
        covers: BTreeMap::new(),
    };
    let h = bank.get_mut(id).unwrap();
    // representative is the typelocked one (vid 2, UNKNOWN)
    let rep = h.get_type_representative(&ctx);
    assert_eq!(rep, vid(2));
    assert!(h.is_type_lock(&ctx, None));
}

#[test]
fn compare_name_prefers_input_over_temp() {
    let v1 = CompareNameView {
        name_lock: false,
        unaffected: false,
        persist: false,
        input: false,
        addr_tied: false,
        proto_partial: false,
        space_internal: true,
        written: true,
        def_time: 5,
    };
    let v2 = CompareNameView {
        input: true,
        space_internal: false,
        ..v1
    };
    // vn2 is an input -> overrides
    assert!(HighVariable::compare_name(&v1, &v2));
    // namelock short-circuits
    let v1l = CompareNameView {
        name_lock: true,
        ..v1
    };
    assert!(!HighVariable::compare_name(&v1l, &v2));
}

#[test]
fn compare_name_earliest_def_wins() {
    let base = CompareNameView {
        name_lock: false,
        unaffected: false,
        persist: false,
        input: false,
        addr_tied: false,
        proto_partial: false,
        space_internal: false,
        written: true,
        def_time: 0,
    };
    let v1 = CompareNameView {
        def_time: 10,
        ..base
    };
    let v2 = CompareNameView {
        def_time: 3,
        ..base
    };
    // vn2 has earlier def (3 < 10) -> overrides
    assert!(HighVariable::compare_name(&v1, &v2));
    let v3 = CompareNameView {
        def_time: 20,
        ..base
    };
    // vn3 is later -> does not override
    assert!(!HighVariable::compare_name(&v1, &v3));
}

#[test]
fn cover_dirty_propagation_no_piece() {
    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    // clear cover dirty first
    bank.get_mut(id).unwrap().highflags &= !high_flags::coverdirty;
    assert!(!bank.get(id).unwrap().is_cover_dirty());
    bank.cover_dirty(id);
    assert!(bank.get(id).unwrap().is_cover_dirty());
}

#[test]
fn internal_cover_unions_members() {
    // Build a HighVariable with two members: member 1 has a def-point in
    // block 0, member 2 has a def-point in block 1.  The internal cover is
    // the union -> both blocks present.
    use crate::cover::{Cover, CoverPoint};

    let mut bank = HighVariableBank::new();
    let id = bank.new_high(vid(1));
    bank.get_mut(id).unwrap().inst.push(vid(2));
    bank.get_mut(id).unwrap().highflags |= high_flags::coverdirty;

    let op_pt = |u: u64| CoverPoint::Op {
        uindex: u as unlace_base::types::uintm,
        multiequal: false,
    };
    let mut c1 = Cover::new();
    c1.add_def_point(Some((0, op_pt(5))), false);
    let mut c2 = Cover::new();
    c2.add_def_point(Some((1, op_pt(9))), false);

    let mut covers = BTreeMap::new();
    covers.insert(MapCtx::key(vid(1)), c1);
    covers.insert(MapCtx::key(vid(2)), c2);
    let mut views = BTreeMap::new();
    views.insert(
        MapCtx::key(vid(1)),
        view(
            varnode_flags::insert,
            dt(4, type_metatype::TYPE_UNKNOWN),
            false,
        ),
    );
    views.insert(
        MapCtx::key(vid(2)),
        view(
            varnode_flags::insert,
            dt(4, type_metatype::TYPE_UNKNOWN),
            false,
        ),
    );
    let ctx = MapCtx { views, covers };
    bank.get_mut(id).unwrap().update_internal_cover(&ctx);
    // both def-points carried into the internal cover
    let h = bank.get(id).unwrap();
    assert!(!h.internal_cover().get_cover_block(0).empty());
    assert!(!h.internal_cover().get_cover_block(1).empty());
    // coverdirty cleared
    assert_eq!(h.highflags & high_flags::coverdirty, 0);
}

#[test]
fn high_edge_order_and_cache() {
    let populate = || Vec::new();
    let affects = |_: crate::context::OpId, _: &unlace_base::address::Address| false;
    let opset = PcodeOpSet::new(Box::new(populate), Box::new(affects));
    let mut test = HighIntersectTest::new(opset);
    let a = HighVariableId(1);
    let b = HighVariableId(2);
    assert_eq!(test.cached(a, b), None);
    test.cache_result(a, b, true);
    assert_eq!(test.cached(a, b), Some(true));
    assert_eq!(test.cached(b, a), Some(true)); // symmetric
    // purge removes both directions
    test.purge_high(a);
    assert_eq!(test.cached(a, b), None);
    assert_eq!(test.cached(b, a), None);
}

#[test]
fn move_intersect_tests_transfers_yes() {
    let populate = || Vec::new();
    let affects = |_: crate::context::OpId, _: &unlace_base::address::Address| false;
    let opset = PcodeOpSet::new(Box::new(populate), Box::new(affects));
    let mut test = HighIntersectTest::new(opset);
    let high1 = HighVariableId(10);
    let high2 = HighVariableId(20);
    let other = HighVariableId(30);
    // high2 intersects other (true)
    test.cache_result(high2, other, true);
    // marks: simple set
    let mut marks: BTreeSet<HighVariableId> = BTreeSet::new();
    let marked = std::cell::RefCell::new(BTreeSet::<HighVariableId>::new());
    {
        let mut set_mark = |h: HighVariableId| {
            marked.borrow_mut().insert(h);
        };
        let mut clear_mark = |h: HighVariableId| {
            marked.borrow_mut().remove(&h);
        };
        let is_mark = |h: HighVariableId| marked.borrow().contains(&h);
        test.move_intersect_tests(high1, high2, &mut set_mark, &mut clear_mark, &is_mark);
    }
    let _ = &mut marks;
    // high2's true test with `other` is reassigned to high1
    assert_eq!(test.cached(high1, other), Some(true));
    assert_eq!(test.cached(other, high1), Some(true));
    // high2's tests purged
    assert_eq!(test.cached(high2, other), None);
}

#[test]
fn make_varnode_view_loc_orders() {
    // compareJustLoc orders purely by address
    let spc = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        0,
        0,
        0,
    ));
    let a = VarnodeViewLoc {
        addr: Address::new(Rc::clone(&spc), 0x10),
    };
    let b = VarnodeViewLoc {
        addr: Address::new(Rc::clone(&spc), 0x20),
    };
    assert!(HighVariable::compare_just_loc(&a, &b));
    assert!(!HighVariable::compare_just_loc(&b, &a));
}

/// Varnodes keyed by id with an address each, for the instance-list merge.
struct LocCtx {
    spc: Rc<AddrSpace>,
    offsets: BTreeMap<u64, u64>,
}
impl HighContext for LocCtx {
    fn vn_view(&self, _vn: VarnodeId) -> VarnodeView {
        unreachable!("the instance-list merge reads only addresses")
    }
    fn vn_cover(&self, _vn: VarnodeId) -> Option<&Cover> {
        None
    }
    fn vn_has_cover(&self, _vn: VarnodeId) -> bool {
        false
    }
    fn vn_name_view(&self, _vn: VarnodeId) -> CompareNameView {
        unreachable!("the instance-list merge reads only addresses")
    }
    fn vn_loc_view(&self, vn: VarnodeId) -> VarnodeViewLoc {
        VarnodeViewLoc {
            addr: Address::new(Rc::clone(&self.spc), self.offsets[&MapCtx::key(vn)]),
        }
    }
}

#[test]
fn merge_inst_lists_is_std_merge_with_the_first_list_winning_ties() {
    let spc = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        0,
        0,
        0,
    ));
    let offsets = [
        (1, 0x10),
        (2, 0x10),
        (3, 0x20),
        (4, 0x10),
        (5, 0x20),
        (6, 0x08),
        (7, 0x18),
    ];
    let ctx = LocCtx {
        spc,
        offsets: offsets
            .into_iter()
            .map(|(n, off)| (MapCtx::key(vid(n)), off))
            .collect(),
    };
    let ids = |v: &[u64]| v.iter().map(|&n| vid(n)).collect::<Vec<_>>();
    let merge = |a: &[u64], b: &[u64]| HighVariableBank::merge_inst_lists(ids(a), &ids(b), &ctx);
    assert_eq!(
        merge(&[1, 2], &[4]),
        ids(&[1, 2, 4]),
        "a tie keeps the first list first"
    );
    assert_eq!(merge(&[1, 3], &[5]), ids(&[1, 3, 5]));
    assert_eq!(merge(&[1, 3], &[6]), ids(&[6, 1, 3]));
    assert_eq!(
        merge(&[1, 3], &[4, 7]),
        ids(&[1, 4, 7, 3]),
        "interleaved lists still merge in order"
    );
    assert_eq!(merge(&[], &[4]), ids(&[4]));
    assert_eq!(merge(&[1], &[]), ids(&[1]));
}

#[test]
fn the_bank_finds_its_highs_by_id_in_id_order_across_erases_and_clears() {
    let mut bank = HighVariableBank::new();
    let ids: Vec<HighVariableId> = (1..=5).map(|n| bank.new_high(vid(n))).collect();
    assert_eq!(bank.num_highs(), 5);
    bank.erase(ids[1]);
    bank.erase(ids[4]);
    assert_eq!(bank.num_highs(), 3);
    assert!(bank.get(ids[1]).is_none() && bank.get(ids[4]).is_none());
    assert_eq!(bank.get(ids[2]).map(|h| h.inst.clone()), Some(vec![vid(3)]));
    let later = bank.new_high(vid(6));
    let order: Vec<HighVariableId> = bank.iter().map(|(id, _)| id).collect();
    assert_eq!(
        order,
        vec![ids[0], ids[2], ids[3], later],
        "iteration follows id order"
    );
    bank.clear();
    assert_eq!(bank.num_highs(), 0);
    assert!(bank.get(ids[0]).is_none() && bank.get(later).is_none());
    let fresh = bank.new_high(vid(7));
    assert!(fresh.0 > later.0, "ids are never handed out twice");
    assert_eq!(
        bank.iter().map(|(id, _)| id).collect::<Vec<_>>(),
        vec![fresh]
    );
    assert!(bank.get_mut(fresh).is_some());
}
