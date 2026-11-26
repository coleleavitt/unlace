use super::*;
const LAZY: [u32; 8] = [
    0xf8410028, 0x3d620000, 0xe98b0000, 0x7d8903a6, 0xe84b0008, 0x28220000, 0x4ca20420, 0x48000004,
];
#[test]
fn conflicting_toc_resolutions_are_declined() {
    let tocs = BTreeSet::from([0x3000, 0x4000]);
    let mut slots = HashMap::from([(0x3020, b"exit".to_vec()), (0x4020, b"ordinary".to_vec())]);
    assert_eq!(unique_import(0x20, &tocs, &slots), None);
    slots.insert(0x4020, b"exit".to_vec());
    assert_eq!(unique_import(0x20, &tocs, &slots), Some(b"exit".to_vec()));
    slots.remove(&0x4020);
    assert_eq!(unique_import(0x20, &tocs, &slots), None);
    assert_eq!(unique_import(0x28, &tocs, &slots), None);
}
#[test]
fn lazy_descriptor_stubs_validate_the_full_transfer() {
    assert_eq!(stub_displacement(&LAZY), Some((0, Some(32))));
    for hints in 0..4 {
        let mut predicted = LAZY;
        predicted[6] = 0x4c820420 | (hints << 21);
        assert_eq!(stub_displacement(&predicted), Some((0, Some(32))));
    }
    let mut negative = LAZY;
    negative[1] |= 0xffff;
    negative[2] |= 0x8000;
    negative[4] |= 0x8000;
    assert_eq!(stub_displacement(&negative), Some((-0x18000, Some(32))));
    let mut backwards = LAZY;
    backwards[7] = 0x4bffffe0;
    assert_eq!(stub_displacement(&backwards), Some((0, Some(-4))));
    for i in 0..LAZY.len() {
        assert_eq!(stub_displacement(&LAZY[..i]), None);
    }
    for (i, value) in [
        (0, 0xf8410018),
        (3, 0x7d6903a6),
        (4, 0xe84b0010),
        (5, 0x2c220000),
        (6, 0x4c820421),
        (7, 0x48000005),
    ] {
        let mut bad = LAZY;
        bad[i] = value;
        assert_eq!(stub_displacement(&bad), None, "word {i}");
    }
}
#[test]
fn full_environment_and_small_toc_forms_are_recognized() {
    let full = [
        0xf8410028, 0x3d820000, 0xe96c0040, 0xe84c0048, 0x7d6903a6, 0xe96c0050, 0x4e800420,
    ];
    assert_eq!(stub_displacement(&full), Some((0x40, None)));
    let small = [
        0xf8410028, 0xe9820040, 0x7d8903a6, 0xe8420048, 0x28220000, 0x4ca20420, 0x48000004,
    ];
    assert_eq!(stub_displacement(&small), Some((0x40, Some(28))));
}
#[test]
fn small_toc_environment_form_loads_the_environment_before_the_toc() {
    const R11: [u32; 6] = [
        0xf8410028, 0xe9628118, 0x7d6903a6, 0xe9628128, 0xe8428120, 0x4e800420,
    ];
    const R12: [u32; 6] = [
        0xf8410028, 0xe9828118, 0x7d8903a6, 0xe9628128, 0xe8428120, 0x4e800420,
    ];
    for stub in [R11, R12] {
        assert_eq!(stub_displacement(&stub), Some((-32488, None)));
        let mut lazy = stub[..5].to_vec();
        lazy.extend([0x28220000, 0x4ce20420, 0x480000b8]);
        assert_eq!(stub_displacement(&lazy), Some((-32488, Some(28 + 0xb8))));
        for i in 0..lazy.len() {
            assert_eq!(stub_displacement(&lazy[..i]), None, "{i} words");
        }
        for (i, value, why) in [
            (0, 0xf8410018, "TOC save slot"),
            (2, stub[2] ^ 0x00200000, "CTR source"),
            (3, 0xe9628120, "environment at +8"),
            (3, 0xe9628130, "environment at +24"),
            (3, 0xe9828128, "environment in r12"),
            (3, 0xe96b8128, "environment from r11"),
            (3, 0xe9628129, "environment load with update"),
            (4, 0xe8428128, "TOC at +16"),
            (4, 0xe8428118, "TOC at +0"),
            (4, 0xe84b8120, "TOC from r11"),
            (4, 0xe9628120, "TOC in r11"),
            (5, 0x4e800020, "return"),
            (5, 0x4e800421, "linking branch"),
        ] {
            let mut bad = stub;
            bad[i] = value;
            assert_eq!(stub_displacement(&bad), None, "{why}");
        }
        let swapped = [stub[0], stub[1], stub[2], stub[4], stub[3], stub[5]];
        assert_eq!(
            stub_displacement(&swapped),
            None,
            "environment read through the callee TOC"
        );
        let late_ctr = [stub[0], stub[1], stub[3], stub[2], stub[4], stub[5]];
        assert_eq!(
            stub_displacement(&late_ctr),
            None,
            "environment load before the CTR move"
        );
        let last_ctr = [stub[0], stub[1], stub[3], stub[4], stub[2], stub[5]];
        assert_eq!(
            stub_displacement(&last_ctr),
            None,
            "CTR move after both loads"
        );
    }
    let full_base = [
        0xf8410028, 0x3d620000, 0xe98b0040, 0x7d8903a6, 0xe96b0050, 0xe84b0048, 0x4e800420,
    ];
    assert_eq!(
        stub_displacement(&full_base),
        None,
        "environment overwrites the high-adjusted base"
    );
    let mixed_base = [
        0xf8410028, 0x3d820001, 0xe96c0040, 0x7d6903a6, 0xe9620050, 0xe84c0048, 0x4e800420,
    ];
    assert_eq!(
        stub_displacement(&mixed_base),
        None,
        "environment from r2 beside a high-adjusted base"
    );
}
#[test]
fn either_ending_follows_every_base_and_environment_choice() {
    const TAIL: [u32; 3] = [0x28220000, 0x4ce20420, 0x480000b8];
    let near = [0xf8410028u32, 0xe9828118, 0x7d8903a6, 0xe8428120];
    let near_env = [0xf8410028, 0xe9828118, 0x7d8903a6, 0xe9628128, 0xe8428120];
    let far = [0xf8410028, 0x3d620001, 0xe98b8118, 0x7d8903a6, 0xe84b8120];
    let far_env = [
        0xf8410028, 0x3d620001, 0xe98b8118, 0x7d8903a6, 0xe84b8120, 0xe96b8128,
    ];
    let far_r12 = [0xf8410028, 0x3d820001, 0xe96c8118, 0x7d6903a6, 0xe84c8120];
    let late_ctr = [0xf8410028, 0xe9628118, 0xe8428120, 0x7d6903a6];
    for (body, toc, delta) in [
        (&near[..], 3, -32488),
        (&near_env[..], 4, -32488),
        (&far[..], 4, 33048),
        (&far_env[..], 4, 33048),
        (&far_r12[..], 4, 33048),
        (&late_ctr[..], 2, -32488),
    ] {
        let direct = [body, &[0x4e800420][..]].concat();
        let lazy = [body, &TAIL[..]].concat();
        assert_eq!(stub_displacement(&direct), Some((delta, None)), "{body:x?}");
        assert_eq!(
            stub_displacement(&lazy),
            Some((delta, Some(body.len() as i64 * 4 + 8 + 0xb8))),
            "{body:x?}"
        );
        for stub in [&direct, &lazy] {
            for i in 0..stub.len() {
                assert_eq!(stub_displacement(&stub[..i]), None, "{i} of {stub:x?}");
            }
            for (i, value, why) in [
                (0, 0xf8410018, "TOC save slot"),
                (toc, 0x60000000, "no TOC load"),
                (toc, stub[toc] + 8, "TOC at +16"),
                (toc, stub[toc] ^ 0x00010000, "TOC from another base"),
                (body.len(), 0x4e800020, "return"),
                (body.len(), 0x4e800421, "linking branch"),
                (
                    body.len(),
                    0x4c820420,
                    "conditional branch without its compare",
                ),
                (body.len(), 0x2c220000, "signed compare"),
            ] {
                let mut bad = stub.to_vec();
                bad[i] = value;
                assert_eq!(stub_displacement(&bad), None, "{why} in {stub:x?}");
            }
        }
        for (i, value, why) in [
            (1, 0x4ce20421, "linking conditional branch"),
            (2, 0x480000b9, "linking resolver branch"),
            (2, 0x480000ba, "absolute resolver branch"),
        ] {
            let mut bad = lazy.clone();
            bad[body.len() + i] = value;
            assert_eq!(stub_displacement(&bad), None, "{why} in {lazy:x?}");
        }
    }
    for (value, why) in [
        (0xe96b8130, "environment at +24"),
        (0xe96b8120, "environment at +8"),
        (0xe98b8128, "environment in r12"),
        (0xe9628128, "environment through the new TOC"),
        (0xe96c8128, "environment from r12"),
    ] {
        for ending in [&[0x4e800420][..], &TAIL[..]] {
            let mut bad = far_env.to_vec();
            bad[5] = value;
            bad.extend(ending);
            assert_eq!(stub_displacement(&bad), None, "{why}");
        }
    }
    let twice = [&far_env[..], &[0xe96b8128, 0x4e800420][..]].concat();
    assert_eq!(stub_displacement(&twice), None, "second environment load");
    let same_register = [
        0xf8410028, 0x3d820001, 0xe98c8118, 0x7d8903a6, 0xe84c8120, 0x4e800420,
    ];
    assert_eq!(
        stub_displacement(&same_register),
        None,
        "entry loaded over its own base"
    );
    let other_base = [
        0xf8410028, 0x3d220001, 0xe9898118, 0x7d8903a6, 0xe8498120, 0x4e800420,
    ];
    assert_eq!(
        stub_displacement(&other_base),
        None,
        "base outside r11 and r12"
    );
    let late_wrong = [0xf8410028, 0xe9628118, 0xe8428120, 0x7d8903a6, 0x4e800420];
    assert_eq!(
        stub_displacement(&late_wrong),
        None,
        "late CTR move from another register"
    );
    for (entry, ctr, why) in [
        (0xe8628118, 0x7c6903a6, "entry through r3"),
        (0xe8028118, 0x7c0903a6, "entry through r0"),
    ] {
        for ending in [&[0x4e800420][..], &TAIL[..]] {
            let stub = [&[0xf8410028, entry, ctr, 0xe8428120][..], ending].concat();
            assert_eq!(stub_displacement(&stub), None, "{why}");
        }
    }
    for (stub, why) in [
        (
            &[
                0xf8410028u32,
                0x3d620002,
                0xe98b7ff8,
                0x396b7ff8,
                0x7d8903a6,
                0xe84b0008,
                0xe96b0010,
                0x4e800420,
            ][..],
            "addi-adjusted base",
        ),
        (
            &[
                0xf8410028, 0xe9828118, 0x7d8903a6, 0x7d8b6278, 0x7c425a14, 0xe8428120, 0x4e800420,
            ][..],
            "xor/add dependency",
        ),
    ] {
        assert_eq!(stub_displacement(stub), None, "{why}");
    }
}
