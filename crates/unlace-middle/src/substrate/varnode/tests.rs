use super::*;
use std::cmp::Ordering;
use unlace_base::space::{AddrSpace, ConstantSpace, UniqueSpace, addrspace_flags};

fn dt(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

/// Build a manager with const(0), unique(1), ram(2), register(3).
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        3,
        0,
        0,
        0,
    )))
    .unwrap();
    m.set_default_code_space(2).unwrap();
    m
}

fn space(m: &AddrSpaceManager, idx: i32) -> Rc<AddrSpace> {
    Rc::clone(m.get_space(idx).unwrap())
}

/// A def-op stand-in carrying its SeqNum (op arena is W3-op's).  Fabricates
/// a distinct OpId through a throwaway slotmap so each call is unique.
fn def_info(id_counter: &mut u32, pc: Address, uniq: u32) -> DefOpInfo {
    let mut sm: slotmap::SlotMap<OpId, ()> = slotmap::SlotMap::with_key();
    for _ in 0..*id_counter {
        sm.insert(());
    }
    let id = sm.insert(());
    *id_counter += 1;
    DefOpInfo {
        id,
        seqnum: SeqNum::new(pc, uniq),
    }
}

/// A no-op `replace_reads` callback (no equivalent varnode is expected).
fn no_replace() -> impl FnMut(&mut VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_: &mut VarnodeBank, _: VarnodeId, _: VarnodeId| -> UnlaceResult<()> { Ok(()) }
}

#[test]
fn accessors_keep_id_validity() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x800);
    let stale = bank.create(4, addr.clone(), dt(4));
    bank.get_mut(stale).unwrap().set_consume(7);
    assert_eq!(bank.get(stale).unwrap().get_consume(), 7);
    bank.destroy(stale).unwrap();
    assert!(bank.get(stale).is_none());
    assert!(bank.get_mut(stale).is_none());

    let live = bank.create(4, addr, dt(4));
    assert_ne!(stale, live);
    let null = <VarnodeId as slotmap::Key>::null();
    for id in [stale, null] {
        assert!(bank.get(id).is_none());
        assert!(bank.get_mut(id).is_none());
    }
    assert!(bank.get(live).is_some());
    assert!(bank.get_mut(live).is_some());
    bank.clear();
    assert!(bank.get(live).is_none());
    assert!(bank.get_mut(live).is_none());
}

// -- Reference comparators: a literal re-transcription of varnode.cc:34-79
//    used to cross-check LocKey/DefKey::cmp exhaustively. `seq_a != seq_b`
//    and `seq_a < seq_b` use SeqNum's own (uniq-only Eq, (pc,uniq) Ord),
//    matching the C++ exactly. ---------------------------------------

#[allow(clippy::too_many_arguments)]
fn ref_locdef(
    addr_a: &Address,
    size_a: int4,
    f_a: uint4,
    seq_a: &SeqNum,
    ci_a: uint4,
    addr_b: &Address,
    size_b: int4,
    f_b: uint4,
    seq_b: &SeqNum,
    ci_b: uint4,
) -> bool {
    if addr_a != addr_b {
        return addr_a < addr_b;
    }
    if size_a != size_b {
        return size_a < size_b;
    }
    let f1 = f_a & (varnode_flags::input | varnode_flags::written);
    let f2 = f_b & (varnode_flags::input | varnode_flags::written);
    if f1 != f2 {
        return f1.wrapping_sub(1) < f2.wrapping_sub(1);
    }
    if f1 == varnode_flags::written {
        if seq_a != seq_b {
            return seq_a < seq_b;
        }
    } else if f1 == 0 {
        return ci_a < ci_b;
    }
    false
}

#[allow(clippy::too_many_arguments)]
fn ref_defloc(
    addr_a: &Address,
    size_a: int4,
    f_a: uint4,
    seq_a: &SeqNum,
    ci_a: uint4,
    addr_b: &Address,
    size_b: int4,
    f_b: uint4,
    seq_b: &SeqNum,
    ci_b: uint4,
) -> bool {
    let f1 = f_a & (varnode_flags::input | varnode_flags::written);
    let f2 = f_b & (varnode_flags::input | varnode_flags::written);
    if f1 != f2 {
        return f1.wrapping_sub(1) < f2.wrapping_sub(1);
    }
    if f1 == varnode_flags::written && seq_a != seq_b {
        return seq_a < seq_b;
    }
    if addr_a != addr_b {
        return addr_a < addr_b;
    }
    if size_a != size_b {
        return size_a < size_b;
    }
    if f1 == 0 {
        return ci_a < ci_b;
    }
    false
}

fn make_loc_key(addr: Address, size: int4, fl: uint4, seq: SeqNum, ci: uint4) -> LocKey {
    LocKey::new(
        AddrKey::of(&addr),
        size,
        flag_class_of(fl),
        if fl & (varnode_flags::input | varnode_flags::written) == 0 {
            SeqKey {
                uniq: ci,
                ..SeqKey::of(&seq)
            }
        } else {
            SeqKey::of(&seq)
        },
    )
}
fn make_def_key(addr: Address, size: int4, fl: uint4, seq: SeqNum, ci: uint4) -> DefKey {
    DefKey {
        addr: AddrKey::of(&addr),
        size,
        flagclass: flag_class_of(fl),
        seqnum: if fl & (varnode_flags::input | varnode_flags::written) == 0 {
            SeqKey {
                uniq: ci,
                ..SeqKey::of(&seq)
            }
        } else {
            SeqKey::of(&seq)
        },
    }
}

#[test]
fn packed_address_order_matches_sentinels_and_signed_space_indexes() {
    let mut addrs = vec![
        Address::default(),
        Address::new_extreme(mach_extreme::m_minimal),
        Address::new_extreme(mach_extreme::m_maximal),
    ];
    for index in [i32::MIN, -1, 0, 1, i32::MAX] {
        let sp = Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "test",
            false,
            8,
            1,
            index,
            0,
            0,
            0,
        ));
        for offset in [0, 1, u64::MAX] {
            addrs.push(Address::new(Rc::clone(&sp), offset));
        }
    }
    for a in &addrs {
        for b in &addrs {
            assert_eq!(AddrKey::of(a).cmp(&AddrKey::of(b)), a.cmp(b));
        }
    }
    assert_eq!(SeqKey::default(), SeqKey::of(&SeqNum::default()));
}

#[test]
fn packed_size_class_preserves_signed_order_and_roundtrips() {
    let addr = AddrKey::of(&Address::default());
    let mut keys = Vec::new();
    for size in [int4::MIN, -1, 0, 1, 1000000, int4::MAX] {
        for flags in [
            0,
            varnode_flags::input,
            varnode_flags::written,
            varnode_flags::input | varnode_flags::written,
        ] {
            let key = LocKey::new(addr, size, flag_class_of(flags), SeqKey::default());
            let def = DefKey::from(key);
            assert_eq!(def.size, size);
            assert_eq!(def.flagclass.raw(), flags);
            assert_eq!(LocKey::from(def), key);
            for next in [
                0,
                varnode_flags::input,
                varnode_flags::written,
                varnode_flags::input | varnode_flags::written,
            ] {
                let seq = SeqKey {
                    uniq: uint4::MAX,
                    ..SeqKey::default()
                };
                let changed = DefKey::from(key.with_class(flag_class_of(next), seq));
                assert_eq!(changed.addr, addr);
                assert_eq!(changed.size, size);
                assert_eq!(changed.flagclass.raw(), next);
                assert_eq!(changed.seqnum, seq);
            }
            keys.push((size, flags, key));
        }
    }
    for &(sa, fa, a) in &keys {
        for &(sb, fb, b) in &keys {
            let expected = sa.cmp(&sb).then_with(|| fa.wsub(1).cmp(&fb.wsub(1)));
            assert_eq!(a.cmp(&b), expected);
        }
    }
}

/// GOLDEN (varnodesort): the `tests/golden/vectors/` corpus has no varnode
/// section (only addrsort/opbehavior/float/lift — verified against the
/// goldengen emitter), so per the W3 item brief we pin the comparators with
/// an exhaustive synthetic cross-product over every flag class, size,
/// address, seqnum, and create_index, cross-checked against a literal
/// re-transcription of `varnode.cc:34-79` (incl. the `(f1-1)<(f2-1)` wrap
/// and the create_index tie-break).
#[test]
fn golden_varnodesort_comparators_exhaustive() {
    let m = build_manager();
    let addrs: Vec<Address> = vec![
        Address::new(space(&m, 0), 0), // const:0
        Address::new(space(&m, 2), 0), // ram:0
        Address::new(space(&m, 2), 0x1000),
        Address::new(space(&m, 3), 0x10), // register:0x10
    ];
    let sizes: [int4; 3] = [1, 4, 8];
    let classes: [uint4; 4] = [
        0,
        varnode_flags::input,
        varnode_flags::written,
        varnode_flags::input | varnode_flags::written,
    ];
    let seqs: Vec<SeqNum> = vec![
        SeqNum::new(Address::new(space(&m, 2), 0x100), 0),
        SeqNum::new(Address::new(space(&m, 2), 0x100), 5),
        SeqNum::new(Address::new(space(&m, 2), 0x200), 0),
    ];
    let cis: [uint4; 3] = [0, 1, 7];

    struct Tup {
        addr: Address,
        size: int4,
        fl: uint4,
        seq: SeqNum,
        ci: uint4,
    }
    let mut tuples: Vec<Tup> = Vec::new();
    for a in &addrs {
        for &sz in &sizes {
            for &fl in &classes {
                for sq in &seqs {
                    for &ci in &cis {
                        tuples.push(Tup {
                            addr: a.clone(),
                            size: sz,
                            fl,
                            seq: sq.clone(),
                            ci,
                        });
                    }
                }
            }
        }
    }

    let mut pairs = 0usize;
    for ta in &tuples {
        for tb in &tuples {
            let ka = make_loc_key(ta.addr.clone(), ta.size, ta.fl, ta.seq.clone(), ta.ci);
            let kb = make_loc_key(tb.addr.clone(), tb.size, tb.fl, tb.seq.clone(), tb.ci);
            let got_less = ka.cmp(&kb) == Ordering::Less;
            let want_less = ref_locdef(
                &ta.addr, ta.size, ta.fl, &ta.seq, ta.ci, &tb.addr, tb.size, tb.fl, &tb.seq, tb.ci,
            );
            assert_eq!(got_less, want_less, "LocKey<: a={ka:?} b={kb:?}");

            let da = make_def_key(ta.addr.clone(), ta.size, ta.fl, ta.seq.clone(), ta.ci);
            let db = make_def_key(tb.addr.clone(), tb.size, tb.fl, tb.seq.clone(), tb.ci);
            let got_dless = da.cmp(&db) == Ordering::Less;
            let want_dless = ref_defloc(
                &ta.addr, ta.size, ta.fl, &ta.seq, ta.ci, &tb.addr, tb.size, tb.fl, &tb.seq, tb.ci,
            );
            assert_eq!(got_dless, want_dless, "DefKey<: a={da:?} b={db:?}");
            pairs += 1;
        }
    }
    assert!(
        pairs > 100_000,
        "expected a large exhaustive product, got {pairs}"
    );
}

/// The `(f1-1)<(f2-1)` free-class wrap: input < written < free.
#[test]
fn flag_class_order_input_written_free() {
    let m = build_manager();
    let addr = Address::new(space(&m, 2), 0x40);
    let seq = SeqNum::new(Address::new(space(&m, 2), 0x10), 1);
    let input = make_loc_key(addr.clone(), 4, varnode_flags::input, seq.clone(), 0);
    let written = make_loc_key(addr.clone(), 4, varnode_flags::written, seq.clone(), 0);
    let free = make_loc_key(addr.clone(), 4, 0, seq.clone(), 0);
    assert_eq!(input.cmp(&written), Ordering::Less);
    assert_eq!(written.cmp(&free), Ordering::Less);
    assert_eq!(input.cmp(&free), Ordering::Less);
    assert_eq!(
        flag_class_of(0).cmp(&flag_class_of(varnode_flags::written)),
        Ordering::Greater
    );
}

/// Construction seeds flags/nzm from space type (varnode.cc:597-626).
#[test]
fn construction_flags_by_space_type() {
    let m = build_manager();
    let c = Varnode::new(8, m.get_constant(0x1234), dt(8));
    assert!(c.is_constant());
    assert_eq!(c.get_nz_mask(), 0x1234);
    assert_eq!(c.get_flags(), varnode_flags::constant);
    let r = Varnode::new(4, Address::new(space(&m, 2), 0x80), dt(4));
    assert!(r.is_free());
    assert_eq!(r.get_flags(), varnode_flags::coverdirty);
    assert_eq!(r.get_nz_mask(), u64::MAX);
    assert_eq!(r.get_consume(), u64::MAX);
}

/// create_index is a strict one-up counter shared by all create paths.
#[test]
fn create_index_monotonic() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0x1000).unwrap();
    let a = bank.create(4, Address::new(space(&m, 2), 0x10), dt(4));
    let b = bank.create(4, Address::new(space(&m, 2), 0x20), dt(4));
    let c = bank.create_unique(8, dt(8));
    assert_eq!(bank.get(a).unwrap().get_create_index(), 0);
    assert_eq!(bank.get(b).unwrap().get_create_index(), 1);
    assert_eq!(bank.get(c).unwrap().get_create_index(), 2);
    assert_eq!(bank.get_create_index(), 3);
    assert_eq!(bank.get(c).unwrap().get_offset(), 0x1000);
    let d = bank.create_unique(4, dt(4));
    assert_eq!(bank.get(d).unwrap().get_offset(), 0x1000 + 8);
}

/// Two free varnodes at identical (addr,size) are distinct (multiset via
/// create_index tie-break); iteration is create_index ascending.
#[test]
fn loc_tree_free_multiset_and_iteration() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x100);
    let f1 = bank.create(4, addr.clone(), dt(4));
    let f2 = bank.create(4, addr.clone(), dt(4));
    assert_eq!(bank.num_varnodes(), 2);
    let order: Vec<VarnodeId> = bank.iter_loc().collect();
    assert_eq!(order, vec![f1, f2]);
}

/// Iteration order across input/written/free at the same address.
#[test]
fn iteration_across_classes() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x200);

    let free = bank.create(4, addr.clone(), dt(4));
    let wfree = bank.create(4, addr.clone(), dt(4));
    let mut idc = 0u32;
    let dinfo = def_info(&mut idc, Address::new(space(&m, 2), 0x10), 3);
    let written = bank.set_def(wfree, dinfo, &mut no_replace()).unwrap();
    let ifree = bank.create(4, addr.clone(), dt(4));
    let input = bank.set_input(ifree, &mut no_replace()).unwrap();

    let order: Vec<VarnodeId> = bank.iter_loc().collect();
    assert_eq!(order, vec![input, written, free], "input < written < free");

    let inputs: Vec<VarnodeId> = bank.iter_loc_flag(4, &addr, varnode_flags::input).collect();
    assert_eq!(inputs, vec![input]);
    let writtens: Vec<VarnodeId> = bank
        .iter_loc_flag(4, &addr, varnode_flags::written)
        .collect();
    assert_eq!(writtens, vec![written]);
    let frees: Vec<VarnodeId> = bank.iter_loc_flag(4, &addr, 0).collect();
    assert_eq!(frees, vec![free]);

    // size+address overload spans all three classes
    let all: Vec<VarnodeId> = bank.iter_loc_size_addr(4, &addr).collect();
    assert_eq!(all, vec![input, written, free]);
}

/// `iter_loc_addr_range` brackets exactly the half-open `[start, end)` window
/// within one space (the C++ `[beginLoc(addr), endLoc(endaddr))` membership the
/// `ActionInferTypes::propagateRef` alias-propagation walks).
#[test]
fn iter_loc_addr_range_brackets_half_open_window() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let sp = space(&m, 2);
    let v100 = bank.create(4, Address::new(Rc::clone(&sp), 0x100), dt(4));
    let v104 = bank.create(4, Address::new(Rc::clone(&sp), 0x104), dt(4));
    let v110 = bank.create(4, Address::new(Rc::clone(&sp), 0x110), dt(4));
    // A varnode below the window and one in another space — both excluded.
    let _v0f0 = bank.create(4, Address::new(Rc::clone(&sp), 0xf0), dt(4));
    let _other = bank.create(4, Address::new(space(&m, 1), 0x100), dt(4));
    let _later = bank.create(4, Address::new(space(&m, 3), 0), dt(4));

    let start = Address::new(Rc::clone(&sp), 0x100);
    let end = Address::new(Rc::clone(&sp), 0x110); // exclusive
    let got: Vec<VarnodeId> = bank.iter_loc_addr_range(&start, &end).collect();
    assert_eq!(
        got,
        vec![v100, v104],
        "[0x100,0x110) excludes the 0x110 element"
    );

    // A window that wraps below `start` runs to the end of the space.
    let wrap_end = Address::new(Rc::clone(&sp), 0x10);
    let wrapped: Vec<VarnodeId> = bank.iter_loc_addr_range(&start, &wrap_end).collect();
    assert_eq!(
        wrapped,
        vec![v100, v104, v110],
        "wrapped window covers the ram tail but not the following space"
    );
}

#[test]
fn iter_loc_addr_range_matches_loc_order_filter_at_boundaries() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let sp = space(&m, 2);
    let _below = bank.create(4, Address::new(Rc::clone(&sp), 0xff), dt(4));
    let _start_wide = bank.create(8, Address::new(Rc::clone(&sp), 0x100), dt(8));
    let _start_narrow = bank.create(1, Address::new(Rc::clone(&sp), 0x100), dt(1));
    let _middle = bank.create(4, Address::new(Rc::clone(&sp), 0x108), dt(4));
    let _end = bank.create(4, Address::new(Rc::clone(&sp), 0x110), dt(4));
    let _other_space = bank.create(4, Address::new(space(&m, 1), 0x108), dt(4));

    let start = Address::new(Rc::clone(&sp), 0x100);
    let end = Address::new(Rc::clone(&sp), 0x110);
    let expected: Vec<VarnodeId> = bank
        .iter_loc()
        .filter(|&id| {
            let addr = bank.get(id).unwrap().get_addr();
            Rc::ptr_eq(addr.get_space().unwrap(), &sp)
                && addr.get_offset() >= 0x100
                && addr.get_offset() < 0x110
        })
        .collect();
    let actual: Vec<VarnodeId> = bank.iter_loc_addr_range(&start, &end).collect();

    assert_eq!(actual, expected);
    assert_eq!(
        actual.len(),
        3,
        "both start-address varnodes and the middle are included"
    );
    assert!(
        bank.iter_loc_addr_range(&start, &start).next().is_none(),
        "an empty half-open window contains no varnodes"
    );
}

/// Definition-order iteration: inputs first, then written (by seqnum).
#[test]
fn def_order_inputs_then_written() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    // input at a high address
    let in_free = bank.create(4, Address::new(space(&m, 2), 0x5000), dt(4));
    let input = bank.set_input(in_free, &mut no_replace()).unwrap();
    // written at a low address
    let w_free = bank.create(4, Address::new(space(&m, 2), 0x10), dt(4));
    let mut idc = 0u32;
    let dinfo = def_info(&mut idc, Address::new(space(&m, 2), 0x8), 1);
    let written = bank.set_def(w_free, dinfo, &mut no_replace()).unwrap();

    let inputs: Vec<VarnodeId> = bank.iter_def_flag(varnode_flags::input).collect();
    assert_eq!(inputs, vec![input]);
    let writtens: Vec<VarnodeId> = bank.iter_def_flag(varnode_flags::written).collect();
    assert_eq!(writtens, vec![written]);
    let all: Vec<VarnodeId> = bank.iter_def().collect();
    assert_eq!(all, vec![input, written]);
}

#[test]
fn free_definition_ranges_match_full_tree() {
    eprintln!(
        "index layout: LocKey={} DefKey={} Varnode={} snapshot={}",
        std::mem::size_of::<LocKey>(),
        std::mem::size_of::<DefKey>(),
        std::mem::size_of::<Varnode>(),
        std::mem::size_of::<Option<LocKey>>()
    );
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let mut idc = 0;
    let mut defs: BTreeMap<VarnodeId, SeqNum> = BTreeMap::new();
    for i in 0..48 {
        let addr = Address::new(space(&m, 2), (i % 6) * 16);
        let id = bank.create(1 << (i % 4), addr, dt(1 << (i % 4)));
        if i % 3 == 0 {
            bank.set_input(id, &mut no_replace()).unwrap();
        } else if i % 3 == 1 {
            let def = def_info(&mut idc, Address::new(space(&m, 2), i * 4), i as uint4 + 1);
            let seqnum = def.seqnum.clone();
            let id = bank.set_def(id, def, &mut no_replace()).unwrap();
            defs.insert(id, seqnum);
        }
    }
    for pass in 0..3 {
        let full: BTreeMap<DefKey, VarnodeId> = bank
            .arena
            .iter()
            .map(|(id, v)| {
                let key = make_def_key(
                    v.loc.clone(),
                    v.size,
                    v.flags,
                    defs.get(&id).cloned().unwrap_or_default(),
                    v.create_index,
                );
                (key, id)
            })
            .collect();
        assert_eq!(
            bank.iter_def().collect::<Vec<_>>(),
            full.values().copied().collect::<Vec<_>>()
        );
        let mut probes = vec![DefProbe::Begin];
        for class in [varnode_flags::input, varnode_flags::written, 0] {
            for off in [0, 16, 48, 96] {
                let key = make_def_key(
                    Address::new(space(&m, 2), off),
                    4,
                    class,
                    SeqNum::new(Address::new(space(&m, 2), 40), 11),
                    17,
                );
                probes.push(DefProbe::Lower(key));
                probes.push(DefProbe::Upper(key));
            }
        }
        probes.push(DefProbe::End);
        for start in &probes {
            for end in &probes {
                let bounds = (start.clone().into_start(), end.clone().into_end());
                match bounds {
                    (
                        Bound::Included(a) | Bound::Excluded(a),
                        Bound::Included(b) | Bound::Excluded(b),
                    ) if a > b => continue,
                    (Bound::Excluded(a), Bound::Excluded(b)) if a == b => continue,
                    _ => {}
                }
                let expected: Vec<_> = full.range(bounds).map(|(_, &id)| id).collect();
                let actual: Vec<_> = bank.iter_def_probe(start.clone(), end.clone()).collect();
                assert_eq!(actual, expected, "pass={pass} bounds={bounds:?}");
                let reverse: Vec<_> = bank
                    .iter_def_probe(start.clone(), end.clone())
                    .rev()
                    .collect();
                assert_eq!(reverse, expected.into_iter().rev().collect::<Vec<_>>());
            }
        }
        let written: Vec<_> = bank.iter_def_flag(varnode_flags::written).take(3).collect();
        for id in written {
            bank.make_free(id);
            defs.remove(&id);
        }
        let free = bank.iter_def_flag(0).next().unwrap();
        bank.destroy(free).unwrap();
        bank.create(4, Address::new(space(&m, 2), 16), dt(4));
    }
}

#[test]
fn definition_view_preserves_uniq_only_seqnum_equality() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let mut idc = 0;
    let high = bank.create(4, Address::new(space(&m, 2), 0x400), dt(4));
    let low = bank.create(4, Address::new(space(&m, 2), 0x100), dt(4));
    let early = def_info(&mut idc, Address::new(space(&m, 2), 0x10), 7);
    let late = def_info(&mut idc, Address::new(space(&m, 2), 0x20), 7);
    bank.set_def(high, early, &mut no_replace()).unwrap();
    bank.set_def(low, late, &mut no_replace()).unwrap();
    assert_eq!(
        bank.iter_def_flag(varnode_flags::written)
            .collect::<Vec<_>>(),
        vec![low, high]
    );
    let duplicate = bank.create(4, Address::new(space(&m, 2), 0x400), dt(4));
    let other_pc = def_info(&mut idc, Address::new(space(&m, 2), 0x30), 7);
    let retained = bank
        .set_def(duplicate, other_pc, &mut no_replace())
        .unwrap();
    assert_eq!(retained, high);
    assert!(bank.get(duplicate).is_none());
    bank.make_free(low);
    assert_eq!(bank.iter_def().collect::<Vec<_>>(), vec![high, low]);
}

#[test]
fn definition_views_use_index_snapshots() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let mut idc = 0;
    let older = bank.create(4, Address::new(space(&m, 2), 16), dt(4));
    let def = def_info(&mut idc, Address::new(space(&m, 2), 8), 7);
    bank.set_def(older, def, &mut no_replace()).unwrap();
    let newer = bank.create(4, Address::new(space(&m, 2), 16), dt(4));
    bank.get_mut(newer)
        .unwrap()
        .set_flags_pub(varnode_flags::written);
    assert_eq!(bank.iter_def_flag(0).collect::<Vec<_>>(), vec![newer]);
    bank.get_mut(newer)
        .unwrap()
        .clear_flags_pub(varnode_flags::written);
    bank.make_free(older);
    assert_eq!(
        bank.iter_def_flag(0).collect::<Vec<_>>(),
        vec![older, newer]
    );
    bank.destroy(older).unwrap();
    assert_eq!(bank.iter_def_flag(0).collect::<Vec<_>>(), vec![newer]);
    bank.clear();
    assert!(bank.iter_def().next().is_none());
}

#[test]
fn failed_unification_stays_out_of_definition_views() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 16);
    let kept = bank.create(4, addr.clone(), dt(4));
    bank.set_input(kept, &mut no_replace()).unwrap();
    let orphan = bank.create(4, addr, dt(4));
    assert!(
        bank.set_input(orphan, &mut |_, _, _| Err(UnlaceError::lowlevel(
            "replacement failed"
        )))
        .is_err()
    );
    assert!(bank.get(orphan).is_some());
    assert_eq!(bank.num_varnodes(), 1);
    assert_eq!(bank.iter_loc().collect::<Vec<_>>(), vec![kept]);
    assert_eq!(bank.iter_def().collect::<Vec<_>>(), vec![kept]);
    bank.clear();
    assert_eq!(bank.num_varnodes(), 0);
}

/// find_input / find_covering_input / find_covered_input on inputs.
///
/// The def-tree finders match the C++'s `lower_bound`-then-step-back idiom,
/// which relies on there being a def-tree element *after* the queried range
/// (in real functions the written/free varnodes that follow the inputs);
/// the test mirrors that by registering a higher-address input so the
/// covering/intersection probes land on a real element and step back.
#[test]
fn input_finders() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let big_addr = Address::new(space(&m, 2), 0x300);
    let big_free = bank.create(8, big_addr.clone(), dt(8)); // covers [0x300,0x307]
    let big = bank.set_input(big_free, &mut no_replace()).unwrap();
    // a higher-address input so the covering/intersection lower_bounds land
    // on a real element (and step back), as they would in a real function
    let hi_addr = Address::new(space(&m, 2), 0x400);
    let hi_free = bank.create(2, hi_addr.clone(), dt(2)); // covers [0x400,0x401]
    let hi = bank.set_input(hi_free, &mut no_replace()).unwrap();

    assert_eq!(bank.find_input(8, &big_addr), Some(big));
    assert_eq!(bank.find_input(4, &big_addr), None);
    assert_eq!(bank.find_input(2, &hi_addr), Some(hi));

    // covering: [0x302,0x303] is inside big [0x300,0x307]
    let inner = Address::new(space(&m, 2), 0x302);
    assert_eq!(bank.find_covering_input(2, &inner).unwrap(), Some(big));
    // an exact-start covering query (vn->getAddr() == loc, no step back)
    assert_eq!(bank.find_covering_input(2, &hi_addr).unwrap(), Some(hi));

    // covered: a small input fully inside a larger query range
    let small_addr = Address::new(space(&m, 2), 0x401);
    let small_free = bank.create(2, small_addr.clone(), dt(2));
    let small = bank.set_input(small_free, &mut no_replace()).unwrap();
    let q = Address::new(space(&m, 2), 0x401);
    assert_eq!(bank.find_covered_input(2, &q).unwrap(), Some(small));

    // intersection
    assert!(bank.has_input_intersection(2, &inner).unwrap());
    let far = Address::new(space(&m, 2), 0x9000);
    assert!(!bank.has_input_intersection(2, &far).unwrap());
}

/// find() locates a written varnode by (size, loc, pc, uniq).
#[test]
fn find_written_by_def() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x500);
    let pc = Address::new(space(&m, 2), 0x20);
    let free = bank.create(4, addr.clone(), dt(4));
    let mut idc = 0u32;
    let dinfo = def_info(&mut idc, pc.clone(), 9);
    let op_id = dinfo.id;
    let written = bank.set_def(free, dinfo, &mut no_replace()).unwrap();

    let pc_for = pc.clone();
    let accessor = move |op: OpId| -> (Address, uintm) {
        assert_eq!(op, op_id);
        (pc_for.clone(), 9)
    };
    assert_eq!(bank.find(4, &addr, &pc, Some(9), &accessor), Some(written));
    assert_eq!(bank.find(4, &addr, &pc, Some(10), &accessor), None);
    assert_eq!(bank.find(4, &addr, &pc, None, &accessor), Some(written));
}

/// xref unification: re-inserting an equivalent input returns the existing
/// varnode and runs the replace callback once with (old, new).
#[test]
fn xref_unifies_equivalent_input() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x600);
    let f1 = bank.create(4, addr.clone(), dt(4));
    let in1 = bank.set_input(f1, &mut no_replace()).unwrap();
    assert_eq!(in1, f1);

    let f2 = bank.create(4, addr.clone(), dt(4));
    let mut replaced: Vec<(VarnodeId, VarnodeId)> = Vec::new();
    let mut record = |_: &mut VarnodeBank, old: VarnodeId, new: VarnodeId| -> UnlaceResult<()> {
        replaced.push((old, new));
        Ok(())
    };
    let in2 = bank.set_input(f2, &mut record).unwrap();
    assert_eq!(in2, in1, "input unifies onto the existing input varnode");
    assert_eq!(replaced, vec![(f2, in1)]);
    assert!(bank.get(f2).is_none());
    assert_eq!(bank.num_varnodes(), 1);
}

/// makeFree round-trips a written varnode back to free and re-inserts it.
#[test]
fn make_free_roundtrip() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x700);
    let free = bank.create(4, addr.clone(), dt(4));
    let mut idc = 0u32;
    let dinfo = def_info(&mut idc, Address::new(space(&m, 2), 0x30), 1);
    let w = bank.set_def(free, dinfo, &mut no_replace()).unwrap();
    assert!(bank.get(w).unwrap().is_written());
    bank.make_free(w);
    let vn = bank.get(w).unwrap();
    assert!(vn.is_free());
    assert!(vn.get_def().is_none());
    let frees: Vec<VarnodeId> = bank.iter_loc_flag(4, &addr, 0).collect();
    assert_eq!(frees, vec![w]);
}

#[test]
fn immediate_destroy_removes_the_written_snapshot() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x700);
    let written = bank.create(4, addr.clone(), dt(4));
    let free = bank.create(4, addr, dt(4));
    let mut idc = 0;
    let def = def_info(&mut idc, Address::new(space(&m, 2), 0x30), 1);
    bank.set_def(written, def, &mut no_replace()).unwrap();
    assert!(bank.destroy(written).is_err());
    let key = bank.arena[written].lociter.unwrap();
    bank.make_free_for_destroy(written);
    assert!(bank.arena[written].is_free());
    assert!(bank.arena[written].get_def().is_none());
    assert_eq!(bank.arena[written].lociter, Some(key));
    assert_eq!(bank.loc_tree.get(&key), Some(&written));
    bank.destroy(written).unwrap();
    assert_eq!(bank.iter_loc().collect::<Vec<_>>(), vec![free]);
    assert_eq!(bank.iter_def().collect::<Vec<_>>(), vec![free]);
    assert_eq!(bank.num_varnodes(), 1);
}

/// destroy removes a free varnode; rejects an integrated one.
#[test]
fn destroy_semantics() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let addr = Address::new(space(&m, 2), 0x800);
    let free = bank.create(4, addr.clone(), dt(4));
    assert!(bank.destroy(free).is_ok());
    assert_eq!(bank.num_varnodes(), 0);

    let free2 = bank.create(4, addr.clone(), dt(4));
    let mut idc = 0u32;
    let dinfo = def_info(&mut idc, Address::new(space(&m, 2), 0x40), 2);
    let w = bank.set_def(free2, dinfo, &mut no_replace()).unwrap();
    assert!(bank.destroy(w).is_err());
}

/// descend list preserves push_back order and erase-by-value (C++ list).
#[test]
fn descend_order_and_erase() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let v = bank.create(4, Address::new(space(&m, 2), 0x900), dt(4));
    let mut sm: slotmap::SlotMap<OpId, ()> = slotmap::SlotMap::with_key();
    let o0 = sm.insert(());
    let o1 = sm.insert(());
    let o2 = sm.insert(());
    // spacebase so add_descend allows multiple on a free varnode
    bank.get_mut(v).unwrap().flags |= varnode_flags::spacebase;
    bank.add_descend(v, o0).unwrap();
    bank.add_descend(v, o1).unwrap();
    bank.add_descend(v, o2).unwrap();
    let got: Vec<OpId> = bank.get(v).unwrap().descend_iter().collect();
    assert_eq!(got, vec![o0, o1, o2]);
    bank.erase_descend(v, o1);
    let got: Vec<OpId> = bank.get(v).unwrap().descend_iter().collect();
    assert_eq!(got, vec![o0, o2]);
}

/// A free (non-spacebase) varnode rejects a second descendant.
#[test]
fn free_varnode_single_descendant() {
    let m = build_manager();
    let mut bank = VarnodeBank::new(&m, 0).unwrap();
    let v = bank.create(4, Address::new(space(&m, 2), 0xA00), dt(4));
    let mut sm: slotmap::SlotMap<OpId, ()> = slotmap::SlotMap::with_key();
    let o0 = sm.insert(());
    let o1 = sm.insert(());
    assert!(bank.add_descend(v, o0).is_ok());
    assert!(bank.add_descend(v, o1).is_err());
}

/// Geometry: contains / intersects / characterizeOverlap.
#[test]
fn geometry_methods() {
    let m = build_manager();
    let a = Varnode::new(4, Address::new(space(&m, 2), 0x10), dt(4)); // [0x10,0x13]
    let inside = Varnode::new(2, Address::new(space(&m, 2), 0x11), dt(2)); // [0x11,0x12]
    let before = Varnode::new(2, Address::new(space(&m, 2), 0x08), dt(2));
    let after = Varnode::new(2, Address::new(space(&m, 2), 0x20), dt(2));
    assert_eq!(a.contains(&inside), 0);
    assert_eq!(a.contains(&before), -1);
    assert_eq!(a.contains(&after), 2);
    assert!(a.intersects(&inside));
    assert!(!a.intersects(&after));
    assert_eq!(a.characterize_overlap(&inside), 1);
    let same = Varnode::new(4, Address::new(space(&m, 2), 0x10), dt(4));
    assert_eq!(a.characterize_overlap(&same), 2);
    assert_eq!(a.characterize_overlap(&after), 0);
    let other = Varnode::new(4, Address::new(space(&m, 3), 0x10), dt(4));
    assert_eq!(a.contains(&other), 3);
    assert!(!a.intersects(&other));
    assert_eq!(a.characterize_overlap(&other), 0);
}
