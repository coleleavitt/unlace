use super::*;

fn closed_functions(
    regions: &[CodeRegion],
    entries: &[(u64, u64)],
    observed_calls: &BTreeSet<(u64, u64)>,
) -> Option<BTreeMap<u64, Vec<u64>>> {
    closed(None, regions, entries, observed_calls)
}

const BASE: u64 = 0x100000;
const JR: u32 = 0x03e0_0008;

fn i(op: u32, rt: u32, rs: u32, imm: i16) -> u32 {
    op << 26 | rs << 21 | rt << 16 | u32::from(imm as u16)
}

fn mov(dst: u32, src: u32) -> u32 {
    src << 21 | dst << 11 | 0x25
}

fn jal(target: u64) -> u32 {
    3 << 26 | (target as u32 >> 2 & 0x03ff_ffff)
}

fn image(code: &[u32]) -> CodeRegion {
    CodeRegion {
        address: BASE,
        bytes: code.iter().flat_map(|word| word.to_be_bytes()).collect(),
    }
}

fn leaf() -> Vec<u32> {
    vec![0x00c4_0821, 0x00e5_1821, 0x0067_102b, JR, 0x0022_1021]
}

fn caller() -> Vec<u32> {
    vec![
        i(9, 29, 29, -24),
        i(0x2b, 31, 29, 20),
        i(0x2b, 30, 29, 16),
        mov(30, 29),
        jal(BASE),
        mov(4, 2),
        mov(29, 30),
        i(0x23, 30, 29, 16),
        i(0x23, 31, 29, 20),
        JR,
        i(9, 29, 29, 24),
    ]
}

fn pair(code: &[u32]) -> Option<BTreeMap<u64, Vec<u64>>> {
    let mut all = leaf();
    all.extend(code);
    closed_functions(
        &[image(&all)],
        &[(BASE, 20), (BASE + 20, code.len() as u64 * 4)],
        &BTreeSet::from([(BASE + 36, BASE)]),
    )
}

fn process(extra: &[u32]) -> (u64, CodeRegion, Vec<(u64, u64)>, BTreeSet<(u64, u64)>) {
    let mut code = leaf();
    code.extend(caller());
    let mut entries = vec![(BASE, 20), (BASE + 20, 44)];
    if !extra.is_empty() {
        entries.push((BASE + code.len() as u64 * 4, extra.len() as u64 * 4));
        code.extend(extra);
    }
    let root = BASE + code.len() as u64 * 4;
    code.extend([
        jal(BASE + 20),
        0,
        2 << 26 | ((root + 8) as u32 >> 2 & 0x03ff_ffff),
        0,
    ]);
    entries.push((root, 16));
    (
        root,
        image(&code),
        entries,
        BTreeSet::from([(BASE + 36, BASE), (root, BASE + 20)]),
    )
}

#[test]
fn sealed_entry_calls_an_ordinary_coordinator_then_only_spins() {
    let (root, region, entries, refs) = process(&[]);
    let result = closed_image(root, &[region], &entries, &refs).unwrap();
    assert_eq!(result[&BASE], vec![BASE + 36]);
    assert_eq!(result[&(BASE + 20)], vec![root]);
    assert!(!result.contains_key(&root));
}

#[test]
fn an_unknown_external_return_boundary_is_not_a_closed_process() {
    let (root, region, entries, refs) = process(&[]);
    for entry in [BASE, BASE + 20, root + 4, root + 8] {
        assert!(closed_image(entry, &[region.clone()], &entries, &refs).is_none());
    }
}

#[test]
fn every_root_word_and_observed_edge_is_exact() {
    let (root, region, entries, refs) = process(&[]);
    for (slot, replacement) in [
        (0, jal(root)),
        (0, jal(root + 4)),
        (0, jal(BASE + 4)),
        (1, mov(2, 4)),
        (2, JR),
        (2, 2 << 26 | (BASE as u32 >> 2)),
        (3, i(9, 2, 0, 1)),
    ] {
        let mut altered = region.clone();
        let index = (root - BASE) as usize + slot * 4;
        altered.bytes[index..index + 4].copy_from_slice(&replacement.to_be_bytes());
        assert!(closed_image(root, &[altered], &entries, &refs).is_none());
    }
    let mut missing = refs.clone();
    missing.remove(&(root, BASE + 20));
    assert!(closed_image(root, &[region], &entries, &missing).is_none());
}

#[test]
fn ordinary_functions_cannot_call_back_into_any_root_word() {
    let (root, region, entries, refs) = process(&[]);
    for target in [root, root + 4, root + 8, root + 12] {
        let mut altered = region.clone();
        altered.bytes[36..40].copy_from_slice(&jal(target).to_be_bytes());
        let mut changed = refs.clone();
        changed.remove(&(BASE + 36, BASE));
        changed.insert((BASE + 36, target));
        assert!(closed_image(root, &[altered], &entries, &changed).is_none());
    }
}

#[test]
fn a_root_cannot_jump_across_the_pseudodirect_region_boundary() {
    let entry = 0x0fff_fff4;
    let mut code = leaf();
    code.extend(caller());
    let root = CodeRegion {
        address: entry,
        bytes: [
            jal(BASE + 20),
            0,
            2 << 26 | ((entry + 8) as u32 >> 2 & 0x03ff_ffff),
            0,
        ]
        .iter()
        .flat_map(|word| word.to_be_bytes())
        .collect(),
    };
    assert!(
        closed_image(
            entry,
            &[image(&code), root],
            &[(BASE, 20), (BASE + 20, 44), (entry, 16)],
            &BTreeSet::from([(BASE + 36, BASE), (entry, BASE + 20)])
        )
        .is_none()
    );
}

#[test]
fn all_root_bytes_must_come_from_one_immutable_region() {
    let (root, mut region, entries, refs) = process(&[]);
    let bytes = region.bytes.split_off((root - BASE) as usize);
    let first = CodeRegion {
        address: root,
        bytes: bytes[..8].to_vec(),
    };
    let second = CodeRegion {
        address: root + 8,
        bytes: bytes[8..].to_vec(),
    };
    assert!(closed_image(root, &[region, first, second], &entries, &refs).is_none());
}

#[test]
fn numeric_code_addresses_do_not_create_executed_indirect_edges() {
    for code in [
        vec![0x3c02_0010, 0x3442_0000, JR, 0],
        vec![0x0080_4021, 0x0104_1023, 0x3842_0010, 0x0002_1400, JR, 0],
        vec![0x0004_102b, 0x0002_1500, JR, 0],
        vec![0x2c02_0001, 0x0002_1500, JR, 0],
    ] {
        let (root, region, entries, refs) = process(&code);
        assert!(closed_image(root, &[region.clone()], &entries, &refs).is_some());
        assert!(closed_image(BASE + 20, &[region], &entries, &refs).is_none());
    }
}

#[test]
fn computed_leaf_and_return_delay_word_are_admitted() {
    assert_eq!(
        closed_functions(&[image(&leaf())], &[(BASE, 20)], &BTreeSet::new()),
        Some(BTreeMap::new())
    );
}

#[test]
fn callee_saved_gprs_must_retain_their_entry_values() {
    for reg in SAVED {
        let mut code = leaf();
        code[0] = mov(reg as u32, 4);
        assert!(closed_functions(&[image(&code)], &[(BASE, 20)], &BTreeSet::new()).is_none());
    }
    let mut code = caller();
    code[2] = i(0x2b, 16, 29, 16);
    code[3] = mov(16, 4);
    code[6] = 0;
    code[7] = i(0x23, 16, 29, 16);
    assert!(pair(&code).is_some());
}

#[test]
fn frame_control_tokens_do_not_become_scalar_values() {
    for source in [SP, FP, RA] {
        let code = [mov(2, source as u32), JR, 0];
        assert!(closed_functions(&[image(&code)], &[(BASE, 12)], &BTreeSet::new()).is_none());
    }
}

#[test]
fn caller_restores_entry_ra_fp_and_sp_after_delay() {
    assert_eq!(
        pair(&caller()),
        Some(BTreeMap::from([(BASE, vec![BASE + 36])]))
    );
}

#[test]
fn arbitrary_ra_moves_and_constants_are_not_returns() {
    for word in [
        mov(31, 4),
        mov(31, 31),
        i(9, 31, 0, 4),
        i(0x0f, 31, 0, 0x10),
    ] {
        assert!(
            closed_functions(&[image(&[word, JR, 0])], &[(BASE, 12)], &BTreeSet::new()).is_none()
        );
    }
}

#[test]
fn wrong_restore_cell_and_saved_token_clobbers_refuse() {
    let mut code = caller();
    code[8] = i(0x23, 31, 29, 12);
    assert!(pair(&code).is_none());
    for store in [
        i(0x2b, 2, 29, 20),
        i(0x2b, 2, 29, 18),
        i(0x2b, 2, 4, 0),
        i(0x2b, 2, 29, 24),
        i(0x29, 2, 29, 20),
    ] {
        let mut code = caller();
        code[5] = store;
        assert!(pair(&code).is_none());
    }
}

#[test]
fn every_load_requires_an_initialized_private_frame_cell() {
    for base in [4, 30, 31] {
        let code = [i(0x23, 2, base, 0), JR, 0];
        assert!(closed_functions(&[image(&code)], &[(BASE, 12)], &BTreeSet::new()).is_none());
    }
    for offset in [-4, 0, 20, 24, 1000] {
        let mut code = caller();
        code[5] = i(0x23, 2, 29, offset);
        assert!(pair(&code).is_none());
    }
    let mut code = caller();
    code[2] = i(0x2b, 4, 29, 16);
    code[3] = 0;
    code[5] = i(0x23, 2, 29, 16);
    code[6] = 0;
    code[7] = 0;
    assert!(pair(&code).is_some());
}

#[test]
fn call_link_cannot_replace_saved_entry_token() {
    let mut code = caller();
    code[1] = 0;
    code[5] = i(0x2b, 31, 29, 20);
    assert!(pair(&code).is_none());
}

#[test]
fn call_delay_cannot_replace_the_new_link_with_the_entry_token() {
    let mut code = caller();
    code[5] = i(0x23, 31, 29, 20);
    assert!(pair(&code).is_none());
}

#[test]
fn callee_cannot_enter_above_the_live_private_frame() {
    for raised_by in [8, 24] {
        let mut code = caller();
        code[5] = i(9, 29, 29, raised_by);
        assert!(pair(&code).is_none());
    }
}

#[test]
fn opaque_pause_refuses_in_bodies_and_both_delay_kinds() {
    let mut code = leaf();
    code[0] = 0x0000_0140;
    assert!(closed_functions(&[image(&code)], &[(BASE, 20)], &BTreeSet::new()).is_none());
    let mut code = leaf();
    code[4] = 0x0000_0140;
    assert!(closed_functions(&[image(&code)], &[(BASE, 20)], &BTreeSet::new()).is_none());
    let mut code = caller();
    code[5] = 0x0000_0140;
    assert!(pair(&code).is_none());
}

#[test]
fn sp_and_fp_restoration_are_proved_instead_of_assumed() {
    let mut direct_sp = caller();
    direct_sp[6] = 0;
    assert!(pair(&direct_sp).is_some());
    for slot in [7, 10] {
        let mut code = caller();
        code[slot] = if slot == 10 { i(9, 29, 29, 16) } else { 0 };
        assert!(pair(&code).is_none());
    }
    let mut code = caller();
    code[6] = mov(29, 4);
    assert!(pair(&code).is_none());
    let mut all = leaf();
    all[0] = mov(30, 4);
    all.extend(caller());
    assert!(
        closed_functions(
            &[image(&all)],
            &[(BASE, 20), (BASE + 20, 44)],
            &BTreeSet::from([(BASE + 36, BASE)])
        )
        .is_none()
    );
}

#[test]
fn indirect_opaque_branch_and_bad_reserved_bits_refuse() {
    for word in [
        0x0080_f809,
        0x0000_000c,
        0x1000_0000,
        0x0804_0000,
        0x7fff_ffff,
        0x03e0_0048,
    ] {
        assert!(
            closed_functions(&[image(&[word, JR, 0])], &[(BASE, 12)], &BTreeSet::new()).is_none()
        );
    }
}

#[test]
fn incomplete_and_nested_delay_bundles_refuse() {
    assert!(closed_functions(&[image(&[JR])], &[(BASE, 4)], &BTreeSet::new()).is_none());
    assert!(
        closed_functions(
            &[image(&[JR, jal(BASE)])],
            &[(BASE, 8)],
            &BTreeSet::from([(BASE + 4, BASE)])
        )
        .is_none()
    );
    let code = [JR, 0, jal(BASE)];
    assert!(
        closed_functions(
            &[image(&code)],
            &[(BASE, 8), (BASE + 8, 4)],
            &BTreeSet::from([(BASE + 8, BASE)])
        )
        .is_none()
    );
}

#[test]
fn all_executable_words_and_reference_identities_are_required() {
    let mut code = leaf();
    code.extend([0, 0]);
    assert!(closed_functions(&[image(&code)], &[(BASE, 20)], &BTreeSet::new()).is_some());
    code[6] = mov(2, 4);
    assert!(closed_functions(&[image(&code)], &[(BASE, 20)], &BTreeSet::new()).is_none());
    let mut all = leaf();
    all.extend(caller());
    for refs in [
        BTreeSet::new(),
        BTreeSet::from([(BASE + 40, BASE)]),
        BTreeSet::from([(BASE + 36, BASE + 4)]),
    ] {
        assert!(closed_functions(&[image(&all)], &[(BASE, 20), (BASE + 20, 44)], &refs).is_none());
    }
}

#[test]
fn recursive_calls_and_unknown_direct_targets_refuse() {
    for target in [BASE + 20, BASE + 4, BASE + 0x100] {
        let mut code = caller();
        code[4] = jal(target);
        let mut all = leaf();
        all.extend(&code);
        assert!(
            closed_functions(
                &[image(&all)],
                &[(BASE, 20), (BASE + 20, 44)],
                &BTreeSet::from([(BASE + 36, target)])
            )
            .is_none()
        );
    }
}

#[test]
fn region_entry_and_work_bounds_refuse_the_whole_image() {
    let r = image(&leaf());
    assert!(closed_functions(&[r.clone(), r.clone()], &[(BASE, 20)], &BTreeSet::new()).is_none());
    for entries in [
        vec![(BASE, 20), (BASE + 4, 8)],
        vec![(BASE + 1, 16)],
        vec![(BASE, 24)],
        vec![(BASE, 0)],
    ] {
        assert!(closed_functions(&[r.clone()], &entries, &BTreeSet::new()).is_none());
    }
    let huge = CodeRegion {
        address: BASE,
        bytes: vec![0; MAX_BYTES + 4],
    };
    assert!(closed_functions(&[huge], &[(BASE, 20)], &BTreeSet::new()).is_none());
    let wrapped = CodeRegion {
        address: 0xffff_fffc,
        bytes: vec![0; 8],
    };
    assert!(closed_functions(&[wrapped], &[(0xffff_fffc, 8)], &BTreeSet::new()).is_none());
    let mut partial = r;
    partial.bytes.pop();
    assert!(closed_functions(&[partial], &[(BASE, 20)], &BTreeSet::new()).is_none());
}

#[test]
fn more_than_thirty_two_or_two_hundred_fifty_six_sites_are_not_sampled() {
    let mut code = leaf();
    let mut c = vec![i(9, 29, 29, -24), i(0x2b, 31, 29, 20)];
    let mut refs = BTreeSet::new();
    for _ in 0..200 {
        refs.insert((BASE + (code.len() + c.len()) as u64 * 4, BASE));
        c.extend([jal(BASE), 0]);
    }
    c.extend([i(0x23, 31, 29, 20), JR, i(9, 29, 29, 24)]);
    let first_len = c.len();
    code.extend(c);
    let next = BASE + code.len() as u64 * 4;
    let mut second = vec![i(9, 29, 29, -24), i(0x2b, 31, 29, 20)];
    for _ in 0..100 {
        refs.insert((BASE + (code.len() + second.len()) as u64 * 4, BASE));
        second.extend([jal(BASE), 0]);
    }
    second.extend([i(0x23, 31, 29, 20), JR, i(9, 29, 29, 24)]);
    let second_len = second.len();
    code.extend(second);
    let sites = closed_functions(
        &[image(&code)],
        &[
            (BASE, 20),
            (BASE + 20, first_len as u64 * 4),
            (next, second_len as u64 * 4),
        ],
        &refs,
    )
    .unwrap();
    assert_eq!(sites[&BASE].len(), 300);
}
