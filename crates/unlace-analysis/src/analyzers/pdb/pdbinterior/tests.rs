use super::*;

const LEAF: u64 = 0x1400011c0;
const LEAF_END: u64 = 0x1400011f8;
const PHANTOM: u64 = 0x1400011d0;
const PICK_09: u64 = 0x1400011a0;
const STATIC_LEAF: u64 = 0x140001340;
const STATIC_LEAF_END: u64 = 0x140001378;
const STATIC_PHANTOM: u64 = 0x140001350;
const HANDLER_LEAF: u64 = 0x140001380;
const UNREACHED: u64 = 0x1400013a0;
const CALLER_LEAF: u64 = 0x1400013c0;
const INNER: u64 = 0x1400013d0;
const ABORT: u64 = 0x1400013f0;
const NORETURN_LEAF: u64 = 0x140001400;
const PAST_ABORT: u64 = 0x140001410;
const ABSURD_LENGTH: u64 = 0x140001540;
const PAST_TEXT: u64 = 0x140001548;
const IN_RDATA: u64 = 0x140002008;

fn fixture_dir() -> std::path::PathBuf {
    std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures")
}

fn bodies_for(exe: &std::path::Path) -> Vec<(u64, u64)> {
    let bytes = std::fs::read(exe).unwrap_or_else(|e| panic!("read {exe:?}: {e}"));
    let file = object::File::parse(&*bytes).expect("the fixture parses");
    eligible_pdb_bodies(&file, &bytes, Some(exe))
}

fn scratch_copy(tag: &str, with_pdb: bool) -> (std::path::PathBuf, std::path::PathBuf) {
    let dir = std::env::temp_dir().join(format!("unlace-pdbinterior-{tag}-{}", std::process::id()));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).expect("scratch dir");
    for ext in if with_pdb {
        &["exe", "pdb"][..]
    } else {
        &["exe"][..]
    } {
        let name = format!("pe_pdbinterior_x86_64.{ext}");
        std::fs::copy(fixture_dir().join(&name), dir.join(&name)).expect("copy");
    }
    (dir.join("pe_pdbinterior_x86_64.exe"), dir)
}

/// The fixture's `.text`, decoded for the encodings the generator emits in its
/// leaves (`cmp ecx,imm32`, `jg`/`jz rel8`, `mov eax|edx,imm32`,
/// `cmovnz eax,edx`, `call rel32`, `ret`, `int3`); anything else is
/// undecodable.
fn fixture_decoder() -> impl FnMut(u64) -> Option<InsnFlow> {
    let bytes = std::fs::read(fixture_dir().join("pe_pdbinterior_x86_64.exe")).expect("read");
    let file = object::File::parse(&*bytes).expect("parse");
    let text = file.section_by_name(".text").expect(".text");
    let (base, data) = (text.address(), text.data().expect("data").to_vec());
    move |vma| {
        let at = usize::try_from(vma.checked_sub(base)?).ok()?;
        let next = |len: u64| vma + len;
        match data.get(at..)? {
            [0x81, 0xF9, ..] => Some(InsnFlow {
                len: 6,
                fall_through: Some(next(6)),
                ..Default::default()
            }),
            [0x7F | 0x74, rel, ..] => Some(InsnFlow {
                len: 2,
                fall_through: Some(next(2)),
                jumps: vec![next(2).wrapping_add_signed(i64::from(*rel as i8))],
                ..Default::default()
            }),
            [0xB8 | 0xBA, ..] => Some(InsnFlow {
                len: 5,
                fall_through: Some(next(5)),
                ..Default::default()
            }),
            [0x0F, 0x45, 0xC2, ..] => Some(InsnFlow {
                len: 3,
                fall_through: Some(next(3)),
                ..Default::default()
            }),
            [0xE8, r0, r1, r2, r3, ..] => Some(InsnFlow {
                len: 5,
                fall_through: Some(next(5)),
                calls: vec![
                    next(5)
                        .wrapping_add_signed(i64::from(i32::from_le_bytes([*r0, *r1, *r2, *r3]))),
                ],
                is_call: true,
                ..Default::default()
            }),
            // FF 15 disp32: an indirect call through a memory slot -- a call
            // with no static target (the s1b IAT no-return shape).
            [0xFF, 0x15, ..] => Some(InsnFlow {
                len: 6,
                fall_through: Some(next(6)),
                is_call: true,
                ..Default::default()
            }),
            // CD 29: int 0x29, the fastfail userop-call, also targetless.
            [0xCD, 0x29, ..] => Some(InsnFlow {
                len: 2,
                fall_through: Some(next(2)),
                is_call: true,
                ..Default::default()
            }),
            [0xC3, ..] => Some(InsnFlow {
                len: 1,
                ..Default::default()
            }),
            [0xCC, ..] => Some(InsnFlow {
                len: 1,
                fall_through: Some(next(1)),
                ..Default::default()
            }),
            _ => None,
        }
    }
}

/// The sidecar's `S_GPROC32` length bounds the leaf, and the gap walk's start
/// inside it, a fall-through of the leaf's own flow, is what the suppression
/// removes.
#[test]
fn the_leaf_extent_comes_from_the_pdb() {
    let bodies = bodies_for(&fixture_dir().join("pe_pdbinterior_x86_64.exe"));
    assert_eq!(
        bodies.len(),
        30,
        "one body per usable procedure, got {bodies:#x?}"
    );
    assert!(
        bodies.contains(&(LEAF, LEAF_END)),
        "leaf extent missing: {bodies:#x?}"
    );
    let mut entries = vec![PICK_09, LEAF, PHANTOM, LEAF_END];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &bodies,
        |_| false,
        |_| false,
        fixture_decoder(),
    );
    assert_eq!(dropped, vec![PHANTOM]);
    assert_eq!(entries, vec![PICK_09, LEAF, LEAF_END]);
}

/// A `static` function's `S_LPROC32` is an extent like any other, but it
/// comes with no public: with no entry at its start, the entry inside it is
/// the only function its code has, and it stays.
#[test]
fn a_local_procedure_whose_start_nothing_admits_keeps_its_only_entry() {
    let bodies = bodies_for(&fixture_dir().join("pe_pdbinterior_x86_64.exe"));
    assert!(
        bodies.contains(&(STATIC_LEAF, STATIC_LEAF_END)),
        "static extent: {bodies:#x?}"
    );
    let mut entries = vec![PICK_09, STATIC_PHANTOM];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &bodies,
        |_| false,
        |_| false,
        fixture_decoder(),
    );
    assert!(dropped.is_empty());
    assert_eq!(entries, vec![PICK_09, STATIC_PHANTOM]);

    let mut entries = vec![STATIC_PHANTOM];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &bodies,
        |a| a == STATIC_LEAF,
        |_| false,
        fixture_decoder(),
    );
    assert_eq!((dropped, entries), (vec![STATIC_PHANTOM], vec![]));
}

/// The unreached block after `handler_leaf`'s last `ret`, the routine
/// `caller_leaf` only calls and the block after `noreturn_leaf`'s call to
/// `abort` are inside public procedures, but no procedure's own flow decodes
/// them, so their entries stay. Were `abort` to return, the last one would be
/// a fall-through and go.
#[test]
fn entries_the_owner_does_not_decode_stay_in_the_fixture() {
    let bodies = bodies_for(&fixture_dir().join("pe_pdbinterior_x86_64.exe"));
    let all = vec![
        HANDLER_LEAF,
        UNREACHED,
        CALLER_LEAF,
        INNER,
        NORETURN_LEAF,
        PAST_ABORT,
    ];
    let mut entries = all.clone();
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &bodies,
        |_| false,
        |t| t == ABORT,
        fixture_decoder(),
    );
    assert!(dropped.is_empty(), "dropped {dropped:#x?}");
    assert_eq!(entries, all);

    let mut entries = all.clone();
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &bodies,
        |_| false,
        |_| false,
        fixture_decoder(),
    );
    assert_eq!(dropped, vec![PAST_ABORT]);
}

/// Records whose extent cannot be a body in this image are never used: a
/// length that overflows the 32-bit RVA space, one that runs past the end of
/// `.text`, and one placed in the non-executable `.rdata`.
#[test]
fn extents_outside_one_executable_section_are_rejected() {
    let bodies = bodies_for(&fixture_dir().join("pe_pdbinterior_x86_64.exe"));
    for start in [ABSURD_LENGTH, PAST_TEXT, IN_RDATA] {
        assert!(
            bodies.iter().all(|&(s, _)| s != start),
            "{start:#x} must not yield a body: {bodies:#x?}"
        );
    }
}

/// With no `.pdb` beside the image there is nothing to vouch for a body.
#[test]
fn no_sidecar_abstains() {
    let (exe, dir) = scratch_copy("nosidecar", false);
    let bodies = bodies_for(&exe);
    let _ = std::fs::remove_dir_all(&dir);
    assert!(bodies.is_empty(), "no sidecar, yet {bodies:#x?}");
}

/// A sidecar whose age or GUID disagrees with the image's CodeView record is
/// another build's PDB, and none of its extents may be read.
#[test]
fn a_fingerprint_mismatched_pdb_abstains() {
    for (tag, field) in [("age", 20usize), ("guid", 4)] {
        let (exe, dir) = scratch_copy(tag, true);
        let mut bytes = std::fs::read(&exe).expect("read copy");
        let rsds = bytes
            .windows(4)
            .position(|w| w == b"RSDS")
            .expect("RSDS record");
        bytes[rsds + field] ^= 0x5a;
        std::fs::write(&exe, &bytes).expect("patch copy");
        let bodies = bodies_for(&exe);
        let _ = std::fs::remove_dir_all(&dir);
        assert!(bodies.is_empty(), "{tag} mismatch, yet {bodies:#x?}");
    }
}

/// A 32-bit ARM image abstains before the PDB is opened.
#[test]
fn arm32_abstains() {
    let exe = fixture_dir().join("pe_pdbinterior_x86_64.exe");
    let mut bytes = std::fs::read(&exe).expect("read fixture");
    let lfanew = u32::from_le_bytes(bytes[0x3c..0x40].try_into().unwrap()) as usize;
    bytes[lfanew + 4..lfanew + 6]
        .copy_from_slice(&object::pe::IMAGE_FILE_MACHINE_ARMNT.to_le_bytes());
    let file = object::File::parse(&*bytes).expect("an ARMNT PE still parses");
    assert!(eligible_pdb_bodies(&file, &bytes, Some(&exe)).is_empty());
}

fn proc_at(start: u64, end: Option<u64>) -> PdbProcedure {
    PdbProcedure { start, end }
}

/// The executable-range guard: an extent is usable only inside one section.
#[test]
fn vouched_extents_need_one_executable_section() {
    let exec = [(0x1000, 0x2000), (0x2000, 0x3000)];
    let procs = [
        proc_at(0x1000, Some(0x1010)),
        proc_at(0x1ff0, Some(0x2010)),
        proc_at(0x2f00, Some(0x3001)),
        proc_at(0x4000, Some(0x4010)),
        proc_at(0x0ff0, Some(0x1008)),
        proc_at(0x2800, None),
        proc_at(0x2900, Some(0x2900)),
    ];
    assert_eq!(vouched_extents(&procs, &exec), vec![(0x1000, 0x1010)]);
    assert!(vouched_extents(&procs, &[]).is_empty());
}

/// Two records that disagree about where one procedure ends describe no
/// single body, and neither is used; an exact duplicate is one record.
#[test]
fn conflicting_records_for_one_start_are_not_used() {
    let exec = [(0x1000, 0x9000)];
    let procs = [
        proc_at(0x1000, Some(0x1040)),
        proc_at(0x1000, Some(0x1080)),
        proc_at(0x2000, Some(0x2040)),
        proc_at(0x2000, Some(0x2040)),
        proc_at(0x3000, None),
        proc_at(0x3000, Some(0x3040)),
    ];
    assert_eq!(vouched_extents(&procs, &exec), vec![(0x2000, 0x2040)]);
}

#[test]
fn inside_one_range_rejects_empty_and_straddling_extents() {
    let ranges = [(0x1000, 0x2000)];
    assert!(inside_one_range(&ranges, 0x1000, 0x2000));
    assert!(!inside_one_range(&ranges, 0x1800, 0x1800));
    assert!(!inside_one_range(&ranges, 0x1800, 0x2001));
    assert!(!inside_one_range(&ranges, u64::MAX - 1, u64::MAX));
}

/// A synthetic procedure: each tuple is `(vma, len, falls through, jumps, calls)`.
fn program(
    insns: &[(u64, u32, bool, &[u64], &[u64])],
) -> impl FnMut(u64) -> Option<InsnFlow> + use<> {
    let map: BTreeMap<u64, InsnFlow> = insns
        .iter()
        .map(|&(vma, len, falls, jumps, calls)| {
            let flow = InsnFlow {
                len,
                fall_through: falls.then_some(vma + u64::from(len)),
                jumps: jumps.to_vec(),
                calls: calls.to_vec(),
                is_call: !calls.is_empty(),
            };
            (vma, flow)
        })
        .collect();
    move |vma| map.get(&vma).cloned()
}

/// `[0x1000, 0x1040)`: a compare-and-branch head, a fall-through arm ending in
/// a `ret`, a branch arm that calls an internal routine, a `ret`, then code no
/// flow from the start reaches (a jump-table case or a handler), then the
/// internal routine only the call reaches.
fn shaped() -> impl FnMut(u64) -> Option<InsnFlow> {
    program(&[
        (0x1000, 6, true, &[], &[]),
        (0x1006, 2, true, &[0x1018], &[]),
        (0x1008, 5, true, &[], &[]),
        (0x100d, 1, false, &[], &[]),
        (0x1018, 5, true, &[], &[0x1030]),
        (0x101d, 1, false, &[], &[]),
        (0x1020, 4, true, &[], &[]),
        (0x1024, 1, false, &[], &[]),
        (0x1030, 3, true, &[], &[]),
        (0x1033, 1, false, &[], &[]),
    ])
}

/// Only entries inside code the start's own flow decodes are dropped: a
/// fall-through instruction, a jump target and the middle of an instruction.
/// An entry only an unfollowed path reaches, a call target, and padding the
/// flow never decodes all stay.
#[test]
fn only_entries_the_owner_decodes_are_dropped() {
    let bodies = [(0x1000, 0x1040)];
    let mut entries = vec![0x1000, 0x1008, 0x1018, 0x101a, 0x1020, 0x1030, 0x1034];
    let dropped =
        suppress_owned_interior_entries(&mut entries, &bodies, |_| false, |_| false, shaped());
    assert_eq!(dropped, vec![0x1008, 0x1018, 0x101a]);
    assert_eq!(entries, vec![0x1000, 0x1020, 0x1030, 0x1034]);
}

/// A call target the flow also falls into is still a function the code
/// calls, and it stays.
#[test]
fn a_call_target_on_the_flow_is_kept() {
    let decode = program(&[
        (0x1000, 5, true, &[], &[0x1005]),
        (0x1005, 1, false, &[], &[]),
    ]);
    let mut entries = vec![0x1000, 0x1005];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1010)],
        |_| false,
        |_| false,
        decode,
    );
    assert!(dropped.is_empty());
    assert_eq!(entries, vec![0x1000, 0x1005]);
}

/// A call the decompiler treats as no-return ends the flow there: code after
/// it is not the procedure's to claim, while the same call to a returning
/// target falls through as usual.
#[test]
fn a_no_return_call_does_not_fall_through() {
    let decode = || {
        program(&[
            (0x1000, 5, true, &[], &[0x5000]),
            (0x1005, 4, true, &[], &[]),
            (0x1009, 1, false, &[], &[]),
        ])
    };
    let mut entries = vec![0x1000, 0x1005];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1010)],
        |_| false,
        |t| t == 0x5000,
        decode(),
    );
    assert_eq!((dropped, entries), (vec![], vec![0x1000, 0x1005]));
    let mut entries = vec![0x1000, 0x1005];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1010)],
        |_| false,
        |_| false,
        decode(),
    );
    assert_eq!((dropped, entries), (vec![0x1005], vec![0x1000]));
}

/// A call the walk cannot resolve (an indirect `call [mem]` or an `int`-userop
/// call: `is_call` with no static target) does not fall through, so an entry in
/// the block after it stays — the decompiler stops at the no-return imports and
/// the fastfail these shapes take, and nothing else renders that block.
#[test]
fn a_targetless_call_does_not_fall_through() {
    let targetless_call = |vma: u64| {
        let insn = |len: u32, is_call: bool, fall: bool| InsnFlow {
            len,
            fall_through: fall.then_some(vma + u64::from(len)),
            is_call,
            ..Default::default()
        };
        match vma {
            0x1000 => Some(insn(6, false, true)),  // cmp
            0x1006 => Some(insn(6, true, true)),   // indirect/int call, no target
            0x100c => Some(insn(5, false, true)),  // interior entry
            0x1011 => Some(insn(1, false, false)), // ret
            _ => None,
        }
    };
    let mut entries = vec![0x1000, 0x100c];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1020)],
        |_| false,
        |_| false,
        targetless_call,
    );
    assert_eq!((dropped, entries), (vec![], vec![0x1000, 0x100c]));
    // With the call spelled as a plain fall-through instruction (not a call),
    // the walk reaches the interior and drops it — proving the guard is what
    // keeps it above.
    let plain = |vma: u64| match vma {
        0x1000 => Some(InsnFlow {
            len: 6,
            fall_through: Some(0x1006),
            ..Default::default()
        }),
        0x1006 => Some(InsnFlow {
            len: 6,
            fall_through: Some(0x100c),
            ..Default::default()
        }),
        0x100c => Some(InsnFlow {
            len: 5,
            fall_through: Some(0x1011),
            ..Default::default()
        }),
        0x1011 => Some(InsnFlow {
            len: 1,
            ..Default::default()
        }),
        _ => None,
    };
    let mut entries = vec![0x1000, 0x100c];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1020)],
        |_| false,
        |_| false,
        plain,
    );
    assert_eq!((dropped, entries), (vec![0x100c], vec![0x1000]));
}

/// An entry a caller in ANOTHER procedure calls is a real function and stays,
/// even though its own body's owner decodes over it.
#[test]
fn a_cross_procedure_call_target_is_kept() {
    // `caller` [0x2000,0x2010) calls 0x1008, which is interior to `owner`
    // [0x1000,0x1040) and covered by owner's fall-through decode.
    let decode = program(&[
        (0x1000, 8, true, &[], &[]),
        (0x1008, 4, true, &[], &[]),
        (0x100c, 1, false, &[], &[]),
        (0x2000, 5, true, &[], &[0x1008]),
        (0x2005, 1, false, &[], &[]),
    ]);
    let mut entries = vec![0x1000, 0x1008, 0x2000];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1040), (0x2000, 0x2010)],
        |_| false,
        |_| false,
        decode,
    );
    assert_eq!((dropped, entries), (vec![], vec![0x1000, 0x1008, 0x2000]));
}

/// The ownership rule: with nothing at the start, or a start that does not
/// decode, nothing inside is dropped. A body overlapping one already used is
/// ignored: its admitting entry `0x1020` is dropped by the first body, so the
/// second may not drop `0x1050` on its behalf.
#[test]
fn only_owned_bodies_reject_their_interior() {
    let mut entries = vec![0x1008, 0x1018];
    assert!(
        suppress_owned_interior_entries(
            &mut entries,
            &[(0x1000, 0x1040)],
            |_| false,
            |_| false,
            shaped()
        )
        .is_empty()
    );
    let mut entries = vec![0x1008, 0x1018];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1040)],
        |a| a == 0x1000,
        |_| false,
        shaped(),
    );
    assert_eq!((dropped, entries), (vec![0x1008, 0x1018], vec![]));

    let mut entries = vec![0x2000, 0x2004];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x2000, 0x2010)],
        |_| false,
        |_| false,
        |_| None,
    );
    assert_eq!((dropped, entries), (vec![], vec![0x2000, 0x2004]));

    let linear: Vec<(u64, u32, bool, &[u64], &[u64])> = (0x1000..0x1060)
        .step_by(4)
        .map(|v| (v, 4, true, &[][..], &[][..]))
        .collect();
    let mut entries = vec![0x1000, 0x1020, 0x1030, 0x1050];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1040), (0x1020, 0x1060)],
        |_| false,
        |_| false,
        program(&linear),
    );
    assert_eq!(
        (dropped, entries),
        (vec![0x1020, 0x1030], vec![0x1000, 0x1050])
    );
}

/// The walk never asks for an address outside the procedure, however the
/// code branches or calls.
#[test]
fn the_walk_stays_inside_the_procedure() {
    let mut inner = program(&[
        (0x1000, 2, true, &[0x0f00, 0x2000], &[0x3000]),
        (0x1002, 2, true, &[], &[]),
        (0x1004, 4, true, &[], &[]),
    ]);
    let mut entries = vec![0x1000, 0x1006];
    let dropped = suppress_owned_interior_entries(
        &mut entries,
        &[(0x1000, 0x1008)],
        |_| false,
        |_| false,
        |v| {
            assert!(
                (0x1000..0x1008).contains(&v),
                "decoded {v:#x} outside the procedure"
            );
            inner(v)
        },
    );
    assert_eq!(dropped, vec![0x1006]);
}

/// Over many random procedures: every dropped entry was inside a body whose
/// start is still admitted, inside an instruction that start's walk decoded,
/// and was not a call target; nothing else is ever dropped.
#[test]
fn a_dropped_entry_always_lies_in_its_owners_decoded_code() {
    let mut seed = 0x9e37_79b9_7f4a_7c15u64;
    let mut next = |n: u64| {
        seed ^= seed << 13;
        seed ^= seed >> 7;
        seed ^= seed << 17;
        seed % n
    };
    for _ in 0..2000 {
        let mut bodies = Vec::new();
        let mut insns: BTreeMap<u64, InsnFlow> = BTreeMap::new();
        let mut at = 0x1000;
        for _ in 0..1 + next(4) {
            at += next(0x20);
            let len = 4 + next(0x40);
            let (lo, hi) = (at, at + len);
            let mut vma = lo;
            while vma < hi {
                let l = 1 + next(6) as u32;
                let target = lo + next(len + 8);
                let flow = match next(6) {
                    0 => InsnFlow {
                        len: l,
                        ..Default::default()
                    },
                    1 => InsnFlow {
                        len: l,
                        jumps: vec![target],
                        ..Default::default()
                    },
                    2 => InsnFlow {
                        len: l,
                        fall_through: Some(vma + u64::from(l)),
                        calls: vec![target],
                        ..Default::default()
                    },
                    3 => InsnFlow {
                        len: l,
                        fall_through: Some(vma + u64::from(l)),
                        jumps: vec![target],
                        ..Default::default()
                    },
                    _ => InsnFlow {
                        len: l,
                        fall_through: Some(vma + u64::from(l)),
                        ..Default::default()
                    },
                };
                insns.insert(vma, flow);
                vma += 1 + next(u64::from(l) + 2);
            }
            bodies.push((lo, hi));
            at = hi;
        }
        let symbols: Vec<u64> = bodies
            .iter()
            .filter(|_| next(3) == 0)
            .map(|b| b.0)
            .collect();
        let mut entries: Vec<u64> = (0..next(16)).map(|_| 0x1000 + next(0x180)).collect();
        entries.sort_unstable();
        entries.dedup();
        let before = entries.clone();
        let decoded = insns.clone();
        let dropped = suppress_owned_interior_entries(
            &mut entries,
            &bodies,
            |a| symbols.contains(&a),
            |t| t % 7 == 0,
            |v| decoded.get(&v).cloned(),
        );
        assert_eq!(entries.len() + dropped.len(), before.len());
        for &d in &dropped {
            let &(s, e) = bodies
                .iter()
                .find(|&&(s, e)| s < d && d < e)
                .expect("inside a body");
            assert!(
                entries.contains(&s) || symbols.contains(&s),
                "{d:#x}: owner {s:#x} gone"
            );
            let mut walk_decode = |v: u64| insns.get(&v).cloned();
            let walk = walk_procedure(s, e, &|t| t % 7 == 0, &mut walk_decode);
            assert!(
                walk.covers(d) && !walk.calls.contains(&d),
                "{d:#x} not in {s:#x}'s decoded code"
            );
        }
    }
}
