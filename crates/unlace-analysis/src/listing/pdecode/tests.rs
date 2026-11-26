use super::super::walk::{FuncSink, RefSink};
use super::*;

fn ivs(seeds: &[u64], k: usize) -> Intervals {
    Intervals::new(seeds, k)
}

#[test]
fn owner_is_total_and_agrees_with_the_bounds() {
    let seeds = [
        0x1000u64, 0x2000, 0x3000, 0x4000, 0x5000, 0x6000, 0x7000, 0x8000,
    ];
    for k in [1usize, 2, 3, 4, 8, 16, 64] {
        let iv = ivs(&seeds, k);
        assert_eq!(iv.bounds[0], 0, "k={k}: the first bound covers address 0");
        assert_eq!(
            *iv.bounds.last().unwrap(),
            u64::MAX,
            "k={k}: the map is total"
        );
        assert!(
            iv.bounds.windows(2).all(|w| w[0] < w[1]),
            "k={k}: bounds ascend strictly"
        );
        // Every bound, one below it, one above it, plus the extremes.
        let mut probes: Vec<u64> = vec![0, 1, u64::MAX - 1, u64::MAX];
        for &b in &iv.bounds {
            probes.extend([b.saturating_sub(1), b, b.saturating_add(1)]);
        }
        probes.extend(seeds.iter().copied());
        for a in probes {
            let owner = iv.owner(a);
            assert!(
                owner < iv.len(),
                "k={k}: owner({a:#x}) = {owner} is out of range"
            );
            assert!(
                a >= iv.bounds[owner],
                "k={k}: owner({a:#x}) = {owner} starts above the address"
            );
            assert!(
                a < iv.bounds[owner + 1] || owner + 1 == iv.len(),
                "k={k}: owner({a:#x}) = {owner} ends below the address"
            );
        }
    }
}

#[test]
fn more_intervals_than_seeds_collapses_instead_of_splitting_nothing() {
    // Two seeds cannot fill more than two intervals, so the cut caps there
    // whatever is asked for; every address still has exactly one owner.
    let iv = ivs(&[0x400u64, 0x800], 64);
    assert_eq!(iv.bounds, vec![0, 0x800, u64::MAX]);
    assert_eq!(iv.owner(0), 0);
    assert_eq!(iv.owner(0x3ff), 0);
    assert_eq!(iv.owner(0x400), 0);
    assert_eq!(iv.owner(0x7ff), 0);
    assert_eq!(iv.owner(0x800), 1);
    assert_eq!(iv.owner(u64::MAX), 1);
}

#[test]
fn a_single_interval_owns_everything() {
    let iv = ivs(&[7u64], 1);
    assert_eq!(iv.len(), 1);
    for a in [0u64, 7, 0x1000, u64::MAX] {
        assert_eq!(iv.owner(a), 0);
    }
}

#[test]
fn the_router_keeps_what_it_owns_and_hands_over_the_rest() {
    let iv = ivs(&[0x1000u64, 0x2000, 0x3000, 0x4000], 4);
    let mid = 1usize;
    let mut out = Vec::new();
    let mut router = Router {
        lo: iv.bounds[mid],
        hi: iv.bounds[mid + 1],
        last: mid + 1 == iv.len(),
        ivs: &iv,
        out: &mut out,
        local_insn: Vec::new(),
        local_func: Vec::new(),
    };
    let inside = iv.bounds[mid];
    router.insn(inside);
    router.func(inside);
    router.insn(0);
    router.func(u64::MAX);
    assert_eq!(router.local_insn, vec![inside]);
    assert_eq!(router.local_func, vec![inside]);
    assert_eq!(out.len(), 2, "both out-of-interval successors crossed");
    assert!(matches!(out[0], Crossing::Insn(0, 0)));
    assert!(matches!(out[1], Crossing::Func(o, u64::MAX) if o as usize == iv.len() - 1));
}

fn seed_record(entry: u64, name: &str) -> DiscoveredFunction {
    DiscoveredFunction {
        entry,
        name: Some(name.to_string()),
        from_symbol: true,
        has_no_return: false,
        call_fixup: None,
    }
}

fn lite(addr: u64, len: u32) -> InsnLite {
    InsnLite {
        addr,
        len,
        fall_through: Some(addr + u64::from(len)),
        flow: Default::default(),
        flows: Vec::new(),
        mnemonic: String::new().into(),
        operands: String::new(),
    }
}

#[test]
fn a_seed_record_beats_a_discovered_one_and_duplicates_collapse() {
    let mut a = IntervalState::new(true);
    a.funcs.claim(0x1000);
    a.funcs.claim(0x2000);
    let mut b = IntervalState::new(true);
    b.funcs.claim(0x1000); // the same entry, discovered from another lane
    b.funcs.claim(0x3000);

    let seeds = [0x1000u64];
    let mut seed_funcs = BTreeMap::new();
    seed_funcs.insert(0x1000, seed_record(0x1000, "main"));

    let (st, _) = reconcile(vec![a, b], &seeds, &seed_funcs).expect("no collision");
    assert_eq!(st.funcs.len(), 3);
    assert_eq!(
        st.funcs[&0x1000].name.as_deref(),
        Some("main"),
        "the seed record wins over a discovered one, whichever lane found it"
    );
    assert!(!st.funcs[&0x2000].from_symbol);
    assert!(!st.funcs[&0x3000].from_symbol);
}

#[test]
fn the_merge_refuses_two_shards_that_claim_one_address() {
    let mut a = IntervalState::new(true);
    a.insns.record(lite(0x1000, 4));
    let mut b = IntervalState::new(true);
    b.insns.record(lite(0x1000, 4));
    let merged = reconcile(vec![a, b], &[], &BTreeMap::new());
    assert!(
        matches!(merged, Err(Refusal::Collision)),
        "two shards claiming one address must discard the parallel result"
    );
}

#[test]
fn merged_references_equal_a_pre_merged_walk() {
    use super::super::model::RefKind;
    let edges = [
        (0x1000u64, 0x2000u64, RefKind::Call),
        (0x1004, 0x2000, RefKind::Code),
        (0x2000, 0x2004, RefKind::Code),
        (0x1000, 0x2000, RefKind::Call), // a duplicate the finalize must drop
        (0x3000, 0x2000, RefKind::Call),
    ];
    // One walk that filed everything...
    let mut single = RefCollector::new(true);
    for &(from, to, kind) in &edges {
        single.file(from, to, kind);
    }
    let want = super::super::compactrefs::ReferenceIndex::new(single.into_edges());

    // ...against three shards that each filed a slice of it.
    let mut shards: Vec<IntervalState> = (0..3).map(|_| IntervalState::new(true)).collect();
    for (i, &(from, to, kind)) in edges.iter().enumerate() {
        shards[i % 3].refs.file(from, to, kind);
    }
    let (st, _) = reconcile(shards, &[], &BTreeMap::new()).expect("no collision");
    let got = super::super::compactrefs::ReferenceIndex::new(st.refs);
    assert_eq!(got, want);
}

#[test]
fn callback_evidence_survives_the_split_and_the_cap() {
    let cap = super::super::callbackentry::MAX_CALLBACK_EVIDENCE;
    let count = cap + 64;
    // One walk that saw every site.
    let mut want = CallbackEvidence::default();
    for i in 0..count as u64 {
        want.file(0x9000 + i, 0x1000 + i);
        want.file(0x8000 + i, 0x1000 + i); // a lower source for the same target
    }
    // Four shards, each with a slice, merged then capped once.
    let mut shards: Vec<IntervalState> = (0..4).map(|_| IntervalState::new(true)).collect();
    for i in 0..count as u64 {
        shards[(i % 4) as usize]
            .callbacks
            .file(0x9000 + i, 0x1000 + i);
        shards[((i + 1) % 4) as usize]
            .callbacks
            .file(0x8000 + i, 0x1000 + i);
    }
    let (st, _) = reconcile(shards, &[], &BTreeMap::new()).expect("no collision");
    assert_eq!(
        st.stack_callback_refs.len(),
        cap,
        "the union is capped once"
    );
    assert_eq!(st.stack_callback_refs, want.into_refs());
}

#[test]
fn a_poisoned_gate_wakes_every_waiter() {
    let gate = Arc::new(Gate::new(3));
    let woke = Arc::new(AtomicUsize::new(0));
    let mut handles = Vec::new();
    for _ in 0..2 {
        let gate = Arc::clone(&gate);
        let woke = Arc::clone(&woke);
        handles.push(std::thread::spawn(move || {
            let ok = gate.wait();
            woke.fetch_add(1, Ordering::SeqCst);
            ok
        }));
    }
    // The third party never arrives; it panicked and poisoned instead.
    while lock(&gate.state).count < 2 {
        std::thread::yield_now();
    }
    gate.poison();
    for handle in handles {
        assert!(
            !handle.join().expect("the waiter returned"),
            "a poisoned wait must fail"
        );
    }
    assert_eq!(woke.load(Ordering::SeqCst), 2);
    assert!(!gate.wait(), "a poisoned gate refuses every later arrival");
}

#[test]
fn every_refusal_has_a_distinct_spelling() {
    let spellings: BTreeSet<&str> = Refusal::ALL.iter().map(|r| r.reason()).collect();
    assert_eq!(
        spellings.len(),
        Refusal::ALL.len(),
        "a reason must name exactly one refusal"
    );
}

/// `UNLACE_DECODE_INTERVALS` is a knob this ships, and the gate's contract is
/// that anything it cannot do falls back to the serial walk -- so a cut it
/// cannot allocate has to collapse, not panic on the calling thread.
#[test]
fn an_absurd_interval_count_collapses_instead_of_overflowing() {
    let seeds = [0x1000u64, 0x2000, 0x3000];
    for k in [usize::MAX, usize::MAX / 2, 1 << 40, 4096] {
        let iv = ivs(&seeds, k);
        assert!(
            iv.len() <= seeds.len(),
            "k={k}: the cut cannot exceed the seed count"
        );
        assert_eq!(iv.bounds[0], 0);
        assert_eq!(*iv.bounds.last().unwrap(), u64::MAX);
        assert_eq!(iv.owner(u64::MAX), iv.len() - 1);
    }
    // The product the gate feeds it saturates rather than wrapping to zero.
    assert_eq!(MAX_DECODE_LANES.saturating_mul(usize::MAX), usize::MAX);
    assert_eq!(
        usize::MAX.clamp(1, MAX_INTERVALS_PER_LANE),
        MAX_INTERVALS_PER_LANE,
        "the per-lane cut is clamped before it is multiplied"
    );
}

#[test]
fn overlapping_executable_ranges_are_counted_once() {
    // The section-less fallback's PT_LOAD segments: one nested, one
    // overlapping, one disjoint, one empty, and the list out of order.
    let ranges = [
        (0x1000u64, 0x5000u64),
        (0x2000, 0x3000),
        (0x4000, 0x6000),
        (0x9000, 0x9000),
    ];
    assert_eq!(
        exec_bytes(&ranges),
        0x5000,
        "a doubly-counted image must not clear the floor"
    );
    assert_eq!(exec_bytes(&[(0x8000, 0x9000), (0x1000, 0x2000)]), 0x2000);
    assert_eq!(exec_bytes(&[]), 0);
}

#[test]
fn the_lane_excess_prices_out_the_map_the_serial_walk_would_hold() {
    let mb = |n: u64| n * 1024 * 1024;
    // A walk that grew the peak by 3 GB while decoding 4 M instructions:
    // ~1.19 GB of that is the reconciled map, and only the rest is the lanes'.
    let insns = 4_000_000usize;
    let map = insns as u64 * SERIAL_MAP_BYTES_PER_INSN;
    let roomy = mb(100_000);
    assert_eq!(
        lane_excess(mb(6000), mb(6000) + mb(3000) + map, insns, roomy),
        mb(3000)
    );
    // A serial-shaped growth is no excess at all, and nothing underflows.
    assert_eq!(lane_excess(mb(6000), mb(6000) + map, insns, roomy), 0);
    assert_eq!(lane_excess(mb(6000), mb(5000), insns, roomy), 0);
    assert_eq!(lane_excess(0, u64::MAX, usize::MAX, roomy), 0);
}

/// The density above is the assembly-off walk's. On a `listing on` walk the
/// map costs ~713 B an instruction, so subtracting 298 books GB of serial
/// map as lane cost -- which prices a pool worker LOW, i.e. an OOM kill
/// rather than a narrow pool. The cap is what stops it: the lanes cannot
/// have added more than the lanes hold.
#[test]
fn the_lane_excess_is_never_larger_than_the_lanes_themselves() {
    let kb = |n: u64| n * 1024;
    // Measured, 147 MB x86-64 target, `--option listing on`, 16 lanes:
    // VmHWM 14,079,200 KB serial -> 17,727,772 KB, so the lanes really added
    // 3.48 GiB while the naive subtraction claims 10.48 GiB.
    let insns = 20_218_436usize;
    let before = kb(1_000_000);
    let after = before + kb(17_727_772 - 14_079_200) + insns as u64 * 713;
    let naive = lane_excess(before, after, insns, u64::MAX);
    assert!(
        naive > 10 * 1024 * 1024 * 1024,
        "the uncapped subtraction over-reports: {naive}"
    );
    // The shards for that walk: one record and one `seen` key per
    // instruction, plus a reference in each map.
    let shards = bytes_of(insns, size_of::<(u64, InsnLite)>())
        + bytes_of(insns, size_of::<u64>())
        + 2 * bytes_of(insns, size_of::<Reference>());
    let capped = lane_excess(before, after, insns, lane_footprint(16, shards));
    assert_eq!(capped, lane_footprint(16, shards), "the cap must bind here");
    assert!(
        capped < kb(17_727_772 - 14_079_200) + kb(1_000_000),
        "and must stay under what the walk actually grew by: {capped}"
    );
    let fast_shards = bytes_of(insns, size_of::<(u64, InsnLite)>());
    let fast_footprint = lane_footprint(16, fast_shards);
    // An excess below the current record footprint survives unchanged.
    let fast_excess = fast_footprint / 2;
    let fast_after = before + fast_excess + insns as u64 * SERIAL_MAP_BYTES_PER_INSN;
    assert_eq!(
        lane_excess(before, fast_after, insns, fast_footprint),
        fast_excess,
        "the cap must not reduce an excess below the lanes' footprint"
    );
    // This old measurement predates compact records, so its excess may now
    // exceed the physical cap instead of remaining below it.
    let measured_excess = kb(9_077_700 - 6_024_820);
    let measured_after = before + measured_excess + insns as u64 * SERIAL_MAP_BYTES_PER_INSN;
    assert_eq!(
        lane_excess(before, measured_after, insns, fast_footprint),
        measured_excess.min(fast_footprint),
        "the historical measurement must respect the current record footprint"
    );
}
