use super::*;

fn run(words: &[u32], state: State) -> State {
    let image = Image::default();
    let mut evidence = Evidence::default();
    words
        .iter()
        .fold(state, |s, &w| step(&image, &mut evidence, 0x1000, w, s))
}

#[test]
fn straight_helpers_reject_unmodeled_xl_transfers() {
    for xo in [16, 18, 38, 39, 50, 51, 82, 102, 146, 274, 528, 560, 1023] {
        let image = Image {
            code: vec![(0x1000, vec![(19 << 26) | (xo << 1), 0x3bc02800, 0x4e800020])],
            ..Default::default()
        };
        for tail in [false, true] {
            assert!(!image.straight(0x1000, tail), "xo={xo} tail={tail}");
        }
    }
    for xo in [0, 33, 129, 150, 193, 225, 257, 289, 417, 449] {
        let image = Image {
            code: vec![(0x1000, vec![(19 << 26) | (xo << 1), 0x3bc02800, 0x4e800020])],
            ..Default::default()
        };
        assert!(image.straight(0x1000, false), "fallthrough xo={xo}");
    }
    assert!(calls(0x1000, 0x4e800461));
}

#[test]
fn saved_r30_survives_pointer_stores_and_calls_but_not_its_own_slot() {
    // stwu r1,-16(r1); stw r30,8(r1); stw r3,8(r9); then a call.
    let saved = run(&[0x9421fff0, 0x93c10008, 0x90690008], State::entry()).keep(NONVOLATILE);
    // li r30,0; lwz r30,8(r1) restores the caller's value.
    assert_eq!(
        run(&[0x3bc00000, 0x83c10008], saved).regs[30],
        Value::Entry(30)
    );
    // stw r4,8(r1) overwrites the save word.
    assert_eq!(
        run(&[0x90810008, 0x83c10008], saved).regs[30],
        Value::Unknown
    );
    // A byte store into the save word also clears it.
    assert_eq!(
        run(&[0x9881000b, 0x83c10008], saved).regs[30],
        Value::Unknown
    );
    // lwz r1,0(r1) follows the back chain; addi r1,r1,16 too.
    assert_eq!(run(&[0x80210000], saved).regs[1], Value::Stack(0));
    assert_eq!(run(&[0x38210010], saved).preserved() & 2, 2);
}

#[test]
fn a_compare_bounds_only_the_register_it_tested() {
    let bgt_not_taken = |s: State| s.refine(0x41810010, false).regs[9];
    // cmplwi r9,5
    let compared = run(&[0x28090005], State::top());
    assert_eq!(bgt_not_taken(compared), Value::Bounded(5));
    // The taken edge (r9 > 5) learns nothing.
    assert_eq!(
        compared.refine(0x41810010, true).regs[9],
        Value::Mark(0x1000)
    );
    // ble's taken edge is the bounded one.
    assert_eq!(compared.refine(0x40810010, true).regs[9], Value::Bounded(5));
    // lwz r9,0(r3) between compare and branch: a new value, unbounded.
    assert_ne!(
        bgt_not_taken(run(&[0x28090005, 0x81230000], State::top())),
        Value::Bounded(5)
    );
    // cmpwi r10,0 rewrites cr0 before the branch.
    assert_ne!(
        bgt_not_taken(run(&[0x28090005, 0x2c0a0000], State::top())),
        Value::Bounded(5)
    );
    // add. r3,r3,r4 writes cr0; add r3,r3,r4 does not.
    assert_ne!(
        bgt_not_taken(run(&[0x28090005, 0x7c632215], State::top())),
        Value::Bounded(5)
    );
    assert_eq!(
        bgt_not_taken(run(&[0x28090005, 0x7c632214], State::top())),
        Value::Bounded(5)
    );
    // A different field is a different test.
    assert_ne!(
        compared.refine(0x41850010, false).regs[9],
        Value::Bounded(5)
    );
}

#[test]
fn table_indices_carry_their_bound() {
    let mut s = State::top();
    s.regs[9] = Value::Bounded(3);
    // slwi r10,r9,2
    assert_eq!(run(&[0x552a103a], s).regs[10], Value::Index(3));
    // rlwinm r10,r9,2,27,29 masks to eight entries.
    assert_eq!(run(&[0x552a16fa], State::top()).regs[10], Value::Index(7));
    // A bounded mask keeps the tighter bound.
    s.regs[9] = Value::Bounded(100);
    assert_eq!(run(&[0x552a16fa], s).regs[10], Value::Index(7));
    // slwi of an unknown index is unbounded; any other shift is no index.
    assert_eq!(
        run(&[0x552a103a], State::top()).regs[10],
        Value::Index(UNBOUNDED)
    );
    assert_eq!(run(&[0x552a183a], State::top()).regs[10], Value::Unknown);
}

#[test]
fn floating_and_vector_stores_never_track_a_gpr() {
    // stw r30 then stfs f30 over it: the slot now holds a float.
    let s = run(
        &[0x9421fff0, 0x93c10008, 0xd3c10008, 0x83c10008],
        State::entry(),
    );
    assert_eq!(s.regs[30], Value::Unknown);
    // stfsx f30,r1,r9 with r9 = 8 (li r9,8).
    let s = run(
        &[0x9421fff0, 0x93c10008, 0x39200008, 0x7fc14d2e, 0x83c10008],
        State::entry(),
    );
    assert_eq!(s.regs[30], Value::Unknown);
}

/// Model the written bytes independently of the proof's saved-word ranges.
fn check_indexed_store_ranges(cases: &[(u32, u32, bool)]) {
    let mut saved = run(
        &[0x9421ffe0, 0x93c10008, 0x93a1000c, 0x7c0802a6, 0x90010010],
        State::entry(),
    );
    saved.regs[0] = Value::Unknown;
    for &(xo, width, aligned) in cases {
        for offset in 0..=24u32 {
            let mut before = saved;
            before.regs[9] = Value::Constant(offset);
            let word = (31 << 26) | (1 << 16) | (9 << 11) | (xo << 1) | u32::from(xo == 150);
            let after = run(&[word], before);
            let start = if aligned {
                offset & !(width - 1)
            } else {
                offset
            };
            let touched = |at: u32| (start..start + width).any(|byte| (at..at + 4).contains(&byte));
            for (reg, at) in [(30, 8), (29, 12)] {
                assert_eq!(
                    after.saved[reg] == UNSAVED,
                    touched(at),
                    "xo={xo} offset={offset} r{reg}"
                );
            }
            for (at, value) in [(0u32, Value::Stack(0)), (16, Value::Return)] {
                assert_eq!(
                    after.slots.contains(&Some((at.wrapping_sub(32), value))),
                    !touched(at),
                    "xo={xo} offset={offset} slot={at}"
                );
            }
            if matches!(xo, 695 | 759) {
                assert_eq!(after.regs[1], Value::Stack(offset.wrapping_sub(32)));
            }
        }
    }
}

#[test]
fn indexed_scalar_stores_invalidate_their_actual_byte_range() {
    check_indexed_store_ranges(&[
        (662, 4, false),
        (150, 4, false),
        (663, 4, false),
        (983, 4, false),
        (727, 8, false),
        (695, 4, false),
        (759, 8, false),
    ]);
}

#[test]
fn indexed_vector_stores_retain_architectural_alignment() {
    check_indexed_store_ranges(&[
        (135, 1, true),
        (167, 2, true),
        (199, 4, true),
        (231, 16, true),
        (487, 16, true),
    ]);
}

#[test]
fn tables_read_their_bounded_entries_inside_the_scope() {
    let image = Image {
        code: vec![(
            0x1000,
            vec![0x60000000, 0x4e800420, 8, 0xc, 0x10, 0x7fff0000],
        )],
        scopes: vec![(0x1000, 0x1018)],
        ..Image::default()
    };
    assert_eq!(image.table(0x1004, 0x1008, true, 1).0, vec![0x1010, 0x1014]);
    // A bounded entry outside the scope is not a target; unbounded reads
    // stop at the first one.
    assert_eq!(image.table(0x1004, 0x1008, true, 3).0, vec![0x1010, 0x1014]);
    assert_eq!(
        image.table(0x1004, 0x1008, true, UNBOUNDED).0,
        vec![0x1010, 0x1014]
    );
}

#[test]
fn a_table_entry_outside_its_scope_withholds_the_stub_it_reaches() {
    // Entries: the in-scope label, a nop before the stub, the stub itself.
    let image = Image {
        code: vec![(
            0x1000,
            vec![
                0x4e800420, 0x1010, 0x1014, 0x1018, 0x60000000, 0x60000000, 0x817e8000, 0x7d6903a6,
                0x4e800420, 0x60000000,
            ],
        )],
        stubs: [(0x1018, 0x8000)].into_iter().collect(),
        scopes: vec![(0x1000, 0x1014)],
        ..Image::default()
    };
    let (targets, stubs) = image.table(0x1000, 0x1004, false, 2);
    assert_eq!(targets, vec![0x1010]);
    assert_eq!(stubs, vec![0x1018, 0x1018]);
    assert_eq!(
        image.table(0x1000, 0x1004, false, UNBOUNDED).1,
        vec![0x1018]
    );
}

#[test]
fn classifies_traps_pc_capture_and_calls() {
    assert!(trap(0x7fe00008));
    assert!(trap(0x0fe00000));
    assert!(!trap(0x7c832008));
    assert!(pc_capture(0x429f0005));
    assert!(pc_capture(0x429f0009));
    assert!(!pc_capture(0x48000005));
    assert!(calls(0x1000, 0x48000101));
    assert!(!calls(0x1000, 0x48000005));
    assert!(!calls(0x1000, 0x429f0009));
    assert!(calls(0x1000, 0x4e800421));
    assert!(!calls(0x1000, 0x4e800420));
    assert!(keeps_cr(0x7c632214));
    assert!(!keeps_cr(0x7c632215));
    assert!(!keeps_cr(0x2c030000));
}
