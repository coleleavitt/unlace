use super::wire::{RESULT_MAGIC, decode_spec};
use super::*;
use unlace_decomp::decompile_drive::{GlobalInfo, LineMapping, TypeInfo, VarInfo};

pub(super) fn sample_result() -> FuncResult {
    FuncResult {
        name: "main".into(),
        address: 0x401000,
        byte_address: 0x401000,
        size: 42,
        // Deliberately hostile to a text protocol: quotes, backslashes,
        // newlines, a control char and non-ASCII.
        code: Some("void main(void)\n{\n  \"q\\\\\" /* \u{1}é */\n}".into()),
        error: None,
        proto: Some("void main(void);".into()),
        emitted_c_name: Some("main_linkage".into()),
        call_declarations: vec!["int external_value(int value);".into()],
        callwide_prototypes: vec![unlace_decomp::callwide::ExportPrototype {
            name: "proved".into(),
            entry: 0x401020,
            signed: true,
            inputs: vec![true, false],
            definition: false,
        }],
        variables: vec![
            VarInfo {
                name: "param_1".into(),
                type_name: "char *".into(),
                stack_offset: None,
                size: 8,
                is_param: true,
                arg_index: Some(0),
                line_numbers: vec![3, 4],
                addresses: vec![0x401004, 0x401008],
                split_piece: false,
            },
            VarInfo {
                name: "local_18".into(),
                type_name: "undefined8".into(),
                stack_offset: Some(-0x18),
                size: 8,
                is_param: false,
                arg_index: None,
                line_numbers: Vec::new(),
                addresses: Vec::new(),
                split_piece: false,
            },
            // (unlace `reglocals`) A local outside the frame: its `kind` is
            // carried by `is_param` and `stack_offset` alone.
            VarInfo {
                name: "v3".into(),
                type_name: "int".into(),
                stack_offset: None,
                size: 4,
                is_param: false,
                arg_index: None,
                line_numbers: vec![5],
                addresses: vec![0x40100c],
                split_piece: false,
            },
        ],
        // (unlace `structdefs`) One recovered type definition, so the frame
        // codec's `types` block is exercised by the round-trip below.
        types: vec![TypeInfo {
            name: "mystruct".into(),
            definition: "struct mystruct {\n    int a;\n};\n".into(),
            size: 4,
        }],
        stack_objects: vec![unlace_decomp::stackobjectinfo::StackObjectInfo {
            id: "object_401004_1".into(),
            name: "frame_é".into(),
            stack_offset: -0x18,
            size: 8,
            defined: false,
            uses: vec![unlace_decomp::stackobjectinfo::StackObjectUseInfo {
                address: 0x401004,
                slot: 1,
                type_name: "struct Pair".into(),
            }],
        }],
        // (unlace `globalref`) One global, so the codec's flag byte is exercised.
        globals: vec![GlobalInfo {
            address: 0x404010,
            name: "dat_404010".into(),
            declaration: "struct_0 dat_404010".into(),
            size: 16,
            unknown: false,
            direct: true,
            aggregate: true,
            elem: true,
            integer: true,
        }],
        field_calls: vec![
            unlace_decomp::calltargettype::FieldDecl {
                record: "struct_3".into(),
                field: "field_0x8".into(),
                declaration: Some("int (*field_0x8)(unsigned int,long)".into()),
            },
            unlace_decomp::calltargettype::FieldDecl {
                record: "struct_3".into(),
                field: "field_0x10".into(),
                declaration: None,
            },
        ],
        line_mappings: vec![LineMapping {
            line_number: 3,
            addresses: vec![0x401004],
        }],
        aliases: vec!["_main".into()],
        object_location: Some(ObjectLocation {
            section_index: 2,
            section: ".text".into(),
            offset: 0x40,
        }),
        callee_hints: vec![0x401200, 0x401340, 0xffff_ffff_ffff_fff0],
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

fn same(a: &FuncResult, b: &FuncResult) -> bool {
    a.name == b.name
        && a.address == b.address
        && a.byte_address == b.byte_address
        && a.size == b.size
        && a.code == b.code
        && a.error == b.error
        && a.proto == b.proto
        && a.emitted_c_name == b.emitted_c_name
        && a.call_declarations == b.call_declarations
        && a.callwide_prototypes == b.callwide_prototypes
        && a.aliases == b.aliases
        && a.object_location == b.object_location
        && a.callee_hints == b.callee_hints
        && a.field_calls == b.field_calls
        && a.pointerargs == b.pointerargs
        && a.warnings == b.warnings
        && a.synth == b.synth
        && a.line_mappings == b.line_mappings
        && a.globals == b.globals
        && a.stack_objects == b.stack_objects
        && a.types.len() == b.types.len()
        && a.types
            .iter()
            .zip(&b.types)
            .all(|(x, y)| x.name == y.name && x.definition == y.definition && x.size == y.size)
        && a.variables.len() == b.variables.len()
        && a.variables.iter().zip(&b.variables).all(|(x, y)| {
            x.name == y.name
                && x.type_name == y.type_name
                && x.stack_offset == y.stack_offset
                && x.size == y.size
                && x.is_param == y.is_param
                && x.kind() == y.kind()
                && x.arg_index == y.arg_index
                && x.line_numbers == y.line_numbers
                && x.addresses == y.addresses
                && x.split_piece == y.split_piece
        })
}

#[test]
fn progress_waits_for_every_worker_then_resets_its_rate_baseline() {
    let start = Instant::now();
    let mut state = ProgressState::new(3, start);

    assert_eq!(
        state.observe(0, 10, start + Duration::from_secs(10)).1,
        None
    );
    assert_eq!(
        state.observe(0, 20, start + Duration::from_secs(12)).1,
        None
    );
    assert_eq!(
        state.observe(1, 30, start + Duration::from_secs(20)).1,
        None
    );
    assert_eq!(
        state.observe(0, 40, start + Duration::from_secs(22)).1,
        None
    );

    let (done, sample) = state.observe(2, 50, start + Duration::from_secs(40));
    assert_eq!((done, sample), (50, None));
    let (done, sample) = state.observe(0, 60, start + Duration::from_secs(42));
    assert_eq!((done, sample), (60, Some((10, 2.0))));
    assert_eq!(progress_eta(1000, done, 10, 2.0), Some(188.0));
}

#[test]
fn result_frames_round_trip_byte_exactly() {
    let dir = ScratchDir::create().unwrap();
    let path = dir.path().join("r.bin").to_string_lossy().into_owned();
    let mut a = sample_result();
    a.synth = Some(Default::default());
    a.pointerargs = Some(unlace_decomp::pointerargs::Record {
        entry: ("ram".into(), a.byte_address),
        parameters: vec![
            None,
            Some(unlace_decomp::pointerargs::Parameter {
                storage: (("register".into(), 0x38), 8),
                spelling: "unsigned char *".into(),
            }),
        ],
        calls: vec![unlace_decomp::pointerargs::Call {
            callee: ("ram".into(), 0x1000),
            index: 1,
            storage: (("register".into(), 0x38), 8),
            actual: "unsigned long *".into(),
            position: unlace_decomp::pointerargs::Position { line: 3, column: 7 },
            expression: "&v1".into(),
        }],
    });
    let warning = |address, text: &str, line| unlace_decomp::functionwarnings::Warning {
        address,
        text: text.into(),
        line,
    };
    a.warnings = vec![
        warning(Some(0x401000), "WARNING: Subroutine does not return", 2),
        warning(Some(0x401234), "WARNING: Bad instruction", 7),
        warning(None, "WARNING: structured blocks unavailable", 5),
    ];
    let b = FuncResult {
        name: "sub_1234".into(),
        address: 0x1234,
        byte_address: 0x1234,
        size: 0,
        code: None,
        error: Some("budget exceeded".into()),
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: Vec::new(),
        types: Vec::new(),
        stack_objects: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: Vec::new(),
        aliases: Vec::new(),
        object_location: None,
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    };
    {
        let mut w = ResultWriter::create(&path).unwrap();
        w.push(&a).unwrap();
        w.push(&b).unwrap();
    }
    let full = std::fs::read(&path).unwrap();
    let first_end = RESULT_MAGIC.len()
        + 5
        + u32::from_le_bytes(
            full[RESULT_MAGIC.len() + 1..RESULT_MAGIC.len() + 5]
                .try_into()
                .unwrap(),
        ) as usize;
    for cut in RESULT_MAGIC.len()..first_end {
        assert!(decode_results(&full[..cut]).unwrap().results.is_empty());
    }
    let mut malformed = full.clone();
    let marker = malformed.windows(3).position(|w| w == b"&v1").unwrap();
    malformed[marker] = 0xff;
    assert!(decode_results(&malformed).unwrap().results.is_empty());
    let decoded = decode_results(&full).unwrap().results;
    assert_eq!(decoded.len(), 2);
    assert!(same(&decoded[0], &a));
    assert!(same(&decoded[1], &b));
    assert_eq!(
        decoded[0].callee_hints,
        vec![0x401200, 0x401340, 0xffff_ffff_ffff_fff0],
        "the --stream scheduler's frontier has to survive the wire"
    );
    assert!(decoded[1].callee_hints.is_empty());
}

#[test]
fn result_encoding_matches_the_version_twelve_wire_layout() {
    let dir = ScratchDir::create().unwrap();
    let path = dir.path().join("wire.bin").to_string_lossy().into_owned();
    let result = FuncResult {
        name: "f".into(),
        address: 0x10,
        byte_address: 0x20,
        size: -1,
        code: None,
        error: Some("e".into()),
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: Vec::new(),
        types: Vec::new(),
        stack_objects: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: Vec::new(),
        aliases: Vec::new(),
        object_location: None,
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    };
    let expected = [
        b"UNLACEJOBR12\x01\x55\0\0\0".as_slice(),
        b"\x10\0\0\0\0\0\0\0\x20\0\0\0\0\0\0\0",
        b"\xff\xff\xff\xff\xff\xff\xff\xff",
        b"\x01\0\0\0f\0\x01\x01\0\0\0e\0\0",
        b"\0",       // emitted C name
        b"\0\0\0\0", // aliases
        b"\0\0\0\0", // line mappings
        b"\0\0\0\0", // variables
        b"\0\0\0\0", // types
        b"\0\0\0\0", // stack objects
        b"\0\0\0\0", // globals
        b"\0\0\0\0", // field calls
        b"\0\0\0\0", // callee hints
        b"\0\0",     // synth and pointer arguments
        b"\0\0\0\0", // warnings
        b"\0\0\0\0", // call declarations
        b"\0\0\0\0", // callwide prototypes
    ]
    .concat();
    ResultWriter::create(&path).unwrap().push(&result).unwrap();
    assert_eq!(std::fs::read(path).unwrap(), expected);
    let decoded = decode_results(&expected).unwrap().results;
    assert_eq!(decoded.len(), 1);
    assert!(same(&decoded[0], &result));
}

#[test]
fn malformed_or_oversized_wide_contracts_do_not_cross_the_worker_boundary() {
    let dir = ScratchDir::create().unwrap();
    let path = dir.path().join("wide.bin").to_string_lossy().into_owned();
    let mut record = sample_result();
    record.callwide_prototypes[0].definition = true;
    ResultWriter::create(&path).unwrap().push(&record).unwrap();
    let full = std::fs::read(&path).unwrap();
    let decoded = decode_results(&full).unwrap().results;
    assert_eq!(decoded.len(), 1);
    assert!(same(&decoded[0], &record));
    let mut malformed = full;
    let at = malformed
        .windows(6)
        .position(|bytes| bytes == b"proved")
        .unwrap();
    malformed[at + 6 + 8] = 2;
    assert!(decode_results(&malformed).unwrap().results.is_empty());
    record.callwide_prototypes[0].inputs = vec![false; 33];
    ResultWriter::create(&path).unwrap().push(&record).unwrap();
    assert!(
        decode_results(&std::fs::read(&path).unwrap())
            .unwrap()
            .results
            .is_empty()
    );
}

#[test]
fn a_malformed_warnings_block_does_not_cross_the_worker_boundary() {
    use unlace_decomp::functionwarnings::Warning;
    let at = Warning {
        address: Some(0x8877_6655_4433_2211),
        text: "WARNING: Bad instruction".into(),
        line: 0x0a09_0807_0605_0403,
    };
    let shell = Warning {
        address: None,
        text: "WARNING: blocks \u{e9}".into(),
        line: 0x1c1b_1a19_1817_1615,
    };
    let at_bytes = [
        b"\x01\x11\x22\x33\x44\x55\x66\x77\x88".as_slice(),
        b"\x18\0\0\0WARNING: Bad instruction",
        b"\x03\x04\x05\x06\x07\x08\x09\x0a",
    ]
    .concat();
    let shell_bytes = [
        b"\0\x12\0\0\0WARNING: blocks \xc3\xa9".as_slice(),
        b"\x15\x16\x17\x18\x19\x1a\x1b\x1c",
    ]
    .concat();
    let pointerargs = unlace_decomp::pointerargs::Record {
        entry: ("ram".into(), 0x401000),
        parameters: vec![Some(unlace_decomp::pointerargs::Parameter {
            storage: (("register".into(), 0x38), 8),
            spelling: "unsigned char *".into(),
        })],
        calls: Vec::new(),
    };
    for (before, warnings, records) in [
        (
            None,
            vec![at.clone(), shell.clone()],
            [at_bytes.as_slice(), &shell_bytes],
        ),
        (
            Some(pointerargs),
            vec![shell.clone(), at.clone()],
            [shell_bytes.as_slice(), &at_bytes],
        ),
    ] {
        let mut record = sample_result();
        record.pointerargs = before;
        record.warnings = warnings;
        let body = encode_result(&record);
        let after = record.call_declarations[0].as_bytes();
        let end = body.windows(after.len()).position(|w| w == after).unwrap() - 8;
        let block = [b"\x02\0\0\0".as_slice(), records[0], records[1]].concat();
        let start = end - block.len();
        assert_eq!(body[start..end], block[..]);
        assert_eq!(body[end..end + 8], *b"\x01\0\0\0\x1e\0\0\0");
        let decoded = decode_result(&body).unwrap();
        assert!(same(&decoded, &record));
        assert_eq!(decoded.pointerargs, record.pointerargs);
        assert_eq!(decoded.call_declarations, record.call_declarations);

        let patched = |offset: usize, bytes: &[u8]| {
            let mut bad = body.clone();
            bad[offset..offset + bytes.len()].copy_from_slice(bytes);
            decode_result(&bad)
        };
        for count in [0u32, 1, 3, u32::MAX] {
            assert!(
                patched(start, &count.to_le_bytes()).is_none(),
                "count {count}"
            );
        }
        let mut tag = start + 4;
        for bytes in records {
            for invalid in [2u8, 0xff] {
                assert!(patched(tag, &[invalid]).is_none(), "address tag {invalid}");
            }
            let length = tag + if bytes[0] == 1 { 9 } else { 1 };
            for oversized in [(body.len() - length - 3) as u32, u32::MAX] {
                assert!(
                    patched(length, &oversized.to_le_bytes()).is_none(),
                    "text length {oversized}"
                );
            }
            assert!(
                patched(bytes.len() + tag - 9, &[0xff]).is_none(),
                "text that is not UTF-8"
            );
            tag += bytes.len();
        }
        for cut in start..end {
            assert!(decode_result(&body[..cut]).is_none(), "cut at {cut}");
        }
    }
}

/// The dynamic source is the only thing `--stream` changes about the pool:
/// every chunk it hands out is served once, and a drained source ends the
/// thread's loop.
#[test]
fn a_chunk_source_is_drained_exactly_once() {
    let source = PlannedChunks {
        plan: vec![vec![0, 1], vec![2], vec![3, 4, 5]],
        cursor: AtomicUsize::new(0),
    };
    let mut seen: Vec<usize> = Vec::new();
    while let Some(chunk) = source.next_chunk() {
        seen.extend(chunk);
    }
    assert_eq!(seen, (0..6).collect::<Vec<_>>());
    assert!(
        source.next_chunk().is_none(),
        "a drained source stays drained"
    );
}

#[test]
fn a_truncated_result_file_keeps_every_complete_frame() {
    let dir = ScratchDir::create().unwrap();
    let path = dir.path().join("t.bin").to_string_lossy().into_owned();
    let a = sample_result();
    {
        let mut w = ResultWriter::create(&path).unwrap();
        w.push(&a).unwrap();
        w.push(&a).unwrap();
    }
    let full = std::fs::read(&path).unwrap();
    for cut in [full.len() - 1, full.len() / 2, RESULT_MAGIC.len() + 3] {
        let decoded = decode_results(&full[..cut]).unwrap().results;
        assert!(
            decoded.len() < 2,
            "a truncated tail must be dropped, not guessed"
        );
        for r in &decoded {
            assert!(same(r, &a));
        }
    }
    assert!(decode_results(b"not a unlace stream").is_none());
}

fn target(addr: u64) -> TargetSpec {
    TargetSpec {
        addr,
        space: "ram".into(),
        name: format!("sub_{addr:x}"),
        aliases: Vec::new(),
        size: 0x20,
        object_location: None,
        provenance: EntryProvenance::Mapped,
        binding: None,
        synth: None,
    }
}

#[test]
fn spec_round_trips_and_rejects_garbage() {
    let targets = vec![
        TargetSpec {
            addr: 0x1b8c4f0,
            space: "ram".into(),
            name: "sub_1b8c4f0".into(),
            aliases: vec![],
            size: 0,
            object_location: None,
            provenance: EntryProvenance::UndefinedExternal,
            binding: Some("weak".into()),
            synth: Some(vec![Some("struct_3".into()), None]),
        },
        TargetSpec {
            addr: 0x401000,
            space: "ram".into(),
            name: "main".into(),
            aliases: vec!["_main".into(), "__libc_main".into()],
            size: 0x120,
            object_location: Some(ObjectLocation {
                section_index: 1,
                section: ".text".into(),
                offset: 0,
            }),
            provenance: EntryProvenance::DefinedObject,
            binding: Some("global".into()),
            synth: None,
        },
    ];
    assert_eq!(decode_spec(&encode_spec(&targets)).unwrap(), targets);
    assert!(decode_spec(b"UNLACEJOBSP3\xff\xff\xff\xff").is_none());
}

#[test]
fn spec_encoding_matches_the_version_three_wire_layout() {
    let expected = b"UNLACEJOBSP3\x01\0\0\0\
            \0\x10\0\0\0\0\0\0\
            \x03\0\0\0ram\x08\0\0\0sub_1000\
            \0\0\0\0\x20\0\0\0\0\0\0\0\
            \0\0\0\0";
    assert_eq!(encode_spec(&[target(0x1000)]), expected);
    assert_eq!(decode_spec(expected).unwrap(), vec![target(0x1000)]);
}

/// A worker killed mid-chunk keeps its flushed prefix; the rest of ITS chunk
/// becomes `error` records, still one per target and still in target order,
/// so the surrounding run is unaffected.
#[test]
fn a_dead_worker_degrades_only_its_own_missing_functions() {
    let chunk: Vec<TargetSpec> = [0x1000u64, 0x2000, 0x3000]
        .iter()
        .map(|&a| target(a))
        .collect();
    let mut survived = sample_result();
    survived.address = 0x2000;
    survived.byte_address = 0x2000;
    survived.name = "sub_2000".into();

    let (merged, delivered) =
        merge_chunk(&chunk, vec![survived], "worker chunk failed (signal: 11)");
    assert_eq!(merged.len(), 3);
    assert_eq!(
        delivered,
        vec![false, true, false],
        "only the flushed record is the worker's"
    );
    assert_eq!(
        merged.iter().map(|r| r.address).collect::<Vec<_>>(),
        vec![0x1000, 0x2000, 0x3000],
        "target order must survive a crashed worker"
    );
    assert!(
        merged[1].code.is_some() && merged[1].error.is_none(),
        "flushed record kept"
    );
    for lost in [&merged[0], &merged[2]] {
        assert!(lost.code.is_none());
        assert_eq!(
            lost.error.as_deref(),
            Some("worker chunk failed (signal: 11)")
        );
        // The parent's own inventory facts still describe the function.
        assert_eq!(lost.size, 0x20);
    }
    let (none, delivered) = merge_chunk(&chunk, Vec::new(), "boom");
    assert_eq!(none.len(), 3);
    assert_eq!(delivered, vec![false; 3]);
    assert!(none.iter().all(|r| r.error.as_deref() == Some("boom")));
}

#[test]
fn worker_records_follow_target_order_and_last_duplicate_wins() {
    fn record(addr: u64, name: &str) -> FuncResult {
        let mut result = sample_result();
        result.address = addr;
        result.byte_address = addr;
        result.name = name.into();
        result
    }
    let chunk: Vec<_> = [0x3000, 0x1000, 0x3000, 0x2000]
        .into_iter()
        .map(target)
        .collect();
    for reverse in [false, true] {
        let mut produced = vec![
            record(0x3000, "first"),
            record(0x9000, "unrequested"),
            record(0x1000, "one"),
            record(0x3000, "last"),
        ];
        if reverse {
            produced.reverse();
        }
        let (merged, delivered) = merge_chunk(&chunk, produced, "missing");
        assert_eq!(delivered, [true, true, false, false]);
        assert_eq!(
            merged.iter().map(|r| r.byte_address).collect::<Vec<_>>(),
            [0x3000, 0x1000, 0x3000, 0x2000]
        );
        assert_eq!(merged[0].name, if reverse { "first" } else { "last" });
        assert_eq!(merged[1].name, "one");
        for missing in &merged[2..] {
            assert_eq!(missing.error.as_deref(), Some("missing"));
            assert!(missing.code.is_none());
        }
    }
}

fn died(stalled: bool, started: bool) -> Ending {
    Ending::Died {
        stalled,
        started,
        running: None,
    }
}

fn reruns(suspect: Option<usize>, bystanders: &[usize]) -> Reruns {
    Reruns {
        suspect,
        bystanders: bystanders.to_vec(),
    }
}

/// The re-run policy, case by case.  A crash re-runs the function it
/// happened in first and then everything that never started; a stall
/// re-runs only what never started; a worker that ran none of the chunk
/// re-runs all of it, its own load included.
#[test]
fn a_dead_worker_reruns_its_suspect_first_and_its_bystanders_after() {
    let prefix = [true, true, false, false, false];
    assert_eq!(
        retry_order(died(false, true), &prefix),
        reruns(Some(2), &[3, 4])
    );
    assert_eq!(
        retry_order(died(true, true), &prefix),
        reruns(None, &[3, 4]),
        "a stalled suspect already ran four budgets; only its bystanders are re-run"
    );
    assert!(retry_order(died(true, true), &[false]).is_empty());
    assert_eq!(
        retry_order(died(false, true), &[false]),
        reruns(Some(0), &[]),
        "a planned singleton that crashed is run once more on a fresh worker"
    );

    let untouched = [false; 5];
    let everything = reruns(None, &[0, 4, 2, 1, 3]);
    assert_eq!(
        retry_order(died(false, false), &untouched),
        everything,
        "a worker that died before its first target, in its load or between chunks, ran none of this one"
    );
    assert_eq!(retry_order(died(true, false), &untouched), everything);

    for ending in [Ending::Finished, Ending::NotRun] {
        assert!(
            retry_order(ending, &untouched).is_empty(),
            "{ending:?} re-runs nothing"
        );
    }
    assert!(retry_order(died(false, true), &[true; 4]).is_empty());

    // A re-run counts as run only once its worker reached the target; one
    // that did not ends its chunk's re-runs instead of spawning for the rest.
    assert!(Ending::Finished.started());
    assert!(died(false, true).started() && died(true, true).started());
    assert!(!Ending::NotRun.started());
    assert!(!died(false, false).started() && !died(true, false).started());
}

/// A worker that holds its records back until its sweep has run delivers
/// none of them, so the function it was on is the one its last begin frame
/// named, wherever that is in the chunk; the first target is only a
/// bystander. A streaming worker's begin frame, which names a function it
/// already delivered, changes nothing.
#[test]
fn a_held_chunk_blames_the_function_its_worker_said_it_was_on() {
    let on = |stalled, running| Ending::Died {
        stalled,
        started: true,
        running: Some(running),
    };
    let held = [false; 5];
    assert_eq!(retry_order(on(true, 3), &held), reruns(None, &[0, 2, 1, 4]));
    assert_eq!(
        retry_order(on(false, 3), &held),
        reruns(Some(3), &[0, 2, 1, 4])
    );
    assert_eq!(retry_order(on(true, 0), &held), reruns(None, &[1, 3, 2, 4]));
    let prefix = [true, true, false, false, false];
    assert_eq!(
        retry_order(on(true, 1), &prefix),
        retry_order(died(true, true), &prefix)
    );
    assert_eq!(
        retry_order(on(false, 9), &prefix),
        retry_order(died(false, true), &prefix)
    );
    assert_eq!(
        retry_order(
            Ending::Died {
                stalled: true,
                started: false,
                running: Some(3)
            },
            &held
        ),
        retry_order(died(true, false), &held),
    );
}

/// A begin frame names the function a worker is starting, and the last one
/// in the file is what a dead worker was on; it never becomes a record.
#[test]
fn begin_frames_name_the_running_function_and_are_not_records() {
    let dir = ScratchDir::create().unwrap();
    let path = dir.path().join("begin.bin").to_string_lossy().into_owned();
    let a = sample_result();
    {
        let mut w = ResultWriter::create(&path).unwrap();
        w.begin(0).unwrap();
        w.begin(7).unwrap();
        w.push(&a).unwrap();
        w.begin(300_000).unwrap();
    }
    let full = std::fs::read(&path).unwrap();
    let frames = decode_results(&full).unwrap();
    assert_eq!(frames.results.len(), 1);
    assert!(same(&frames.results[0], &a));
    assert_eq!(frames.running, Some(300_000));
    let frames = decode_results(&full[..full.len() - 1]).unwrap();
    assert_eq!(
        (frames.results.len(), frames.running),
        (1, Some(7)),
        "a torn frame is dropped"
    );
    assert_eq!(decode_results(RESULT_MAGIC).unwrap().running, None);
}

/// Bystanders are visited in bit-reversed order, so any prefix of the visit
/// samples the whole chunk: a run of adjacent crashers is spread out among
/// the recoveries instead of arriving first.
#[test]
fn bystanders_are_visited_spread_across_the_chunk() {
    for count in [0usize, 1, 2, 3, 7, 20, 64, 219, 512] {
        let order = spread(count);
        let mut sorted = order.clone();
        sorted.sort_unstable();
        assert_eq!(
            sorted,
            (0..count).collect::<Vec<_>>(),
            "a permutation of {count}"
        );
    }
    assert_eq!(spread(8), vec![0, 4, 2, 6, 1, 5, 3, 7]);
    let first: Vec<usize> = spread(219).into_iter().take(16).collect();
    assert!(
        first.iter().filter(|&&k| k < 16).count() <= 2,
        "the first 16 re-runs: {first:?}"
    );
}

/// A chunk stops once enough of its bystanders failed and they outnumber
/// the recovered ones, or once two of its re-runs stalled; neighbouring
/// crashers, the expected failure of the function that was running, and a
/// single stall never stop it.
#[test]
fn a_chunk_stops_rerunning_only_when_failures_dominate() {
    let mut adjacent = ChunkReruns::default();
    assert_eq!(
        adjacent.record(true, false, false),
        None,
        "the suspect does not count"
    );
    for _ in 0..CHUNK_RERUN_FAILURES - 1 {
        assert_eq!(adjacent.record(false, false, false), None);
    }
    assert_eq!(
        adjacent.record(false, false, false),
        Some(NOT_RERUN_CRASHING)
    );

    let mut alternating = ChunkReruns::default();
    for _ in 0..100 {
        assert_eq!(alternating.record(false, true, false), None);
        assert_eq!(
            alternating.record(false, false, false),
            None,
            "a tie never stops"
        );
    }

    let mut mostly_failing = ChunkReruns::default();
    let stops: Vec<_> = (0..30)
        .map(|i| mostly_failing.record(false, i % 3 == 0, false))
        .collect();
    assert!(
        stops.contains(&Some(NOT_RERUN_CRASHING)),
        "two failures per recovery stop it"
    );

    let mut stalls = ChunkReruns::default();
    assert_eq!(
        stalls.record(true, false, true),
        None,
        "one stall is a function"
    );
    for _ in 0..20 {
        assert_eq!(stalls.record(false, true, false), None);
    }
    assert_eq!(
        stalls.record(false, false, true),
        Some(NOT_RERUN_STALLED),
        "the second stall"
    );
}

/// The run-wide check needs both a floor of failed re-runs and more failures
/// than delivered records, and it is asked afresh: deliveries that catch up
/// let re-runs start again, and the warning is claimed once.
#[test]
fn the_retry_gate_holds_back_reruns_only_while_failures_outnumber_deliveries() {
    let gate = RetryGate::default();
    gate.delivered(3);
    for _ in 0..RUN_RERUN_FAILURES - 1 {
        gate.failed();
    }
    assert!(gate.allows(), "below the floor");
    gate.failed();
    assert!(
        !gate.allows(),
        "{RUN_RERUN_FAILURES} failures against 3 records"
    );
    assert!(gate.first_refusal() && !gate.first_refusal(), "warned once");
    gate.delivered(RUN_RERUN_FAILURES - 3);
    assert!(
        gate.allows(),
        "as many records as failures: re-running resumes"
    );
    gate.failed();
    assert!(!gate.allows());

    let working = RetryGate::default();
    working.delivered(40);
    for _ in 0..40 {
        working.failed();
    }
    assert!(
        working.allows(),
        "workers that deliver as much as fails keep re-running"
    );
    working.failed();
    assert!(!working.allows());
}

#[test]
fn the_fault_hook_parses_what_the_tests_inject_and_reports_the_rest() {
    assert_eq!(Faults::parse(""), (Faults::default(), Vec::new()));
    let (none, rejected) = Faults::parse("nonsense,panic:,stall:0xzz,spawn:x,boom:0x1");
    assert_eq!(none, Faults::default());
    assert_eq!(
        rejected,
        vec!["nonsense", "panic:", "stall:0xzz", "spawn:x", "boom:0x1"]
    );
    let (f, rejected) = Faults::parse(
        " panic:0x40071d , panic-once:4196064,stall:*,spawn:2,panic:0X10,stall-again:0x14ea",
    );
    assert!(rejected.is_empty(), "{rejected:?}");
    assert_eq!(
        f.at,
        vec![
            (Fault::Panic, Some(0x40071d)),
            (Fault::PanicOnce, Some(4196064)),
            (Fault::Stall, None),
            (Fault::Panic, Some(0x10)),
            (Fault::StallAgain, Some(0x14ea))
        ]
    );
    assert!(!f.refuses_spawn(1) && f.refuses_spawn(2) && f.refuses_spawn(9));
    assert!(!Faults::default().refuses_spawn(0));
    let (f, rejected) = Faults::parse("synth:serial,synth:force,synth:noinstall,synth:other");
    assert!(f.synth_serial && f.synth_force && f.refuses_synth_install());
    assert_eq!(rejected, vec!["synth:other"]);

    let dir = ScratchDir::create().unwrap();
    Faults::default().before_target(dir.path(), 0x1000);
    Faults::parse("panic:0x2000")
        .0
        .before_target(dir.path(), 0x1000);
    let once = Faults::parse("panic-once:0x1000").0;
    assert!(std::panic::catch_unwind(|| once.before_target(dir.path(), 0x1000)).is_err());
    once.before_target(dir.path(), 0x1000);

    let lost = lost_result(
        &target(0x1000),
        "worker stalled past the per-function watchdog",
    );
    let marked = not_rerun(lost, NOT_RERUN_STALLED);
    let error = marked.error.as_deref().unwrap();
    assert!(
        error.ends_with(&format!("; not re-run: {NOT_RERUN_STALLED}")),
        "{error}"
    );
    assert_eq!(
        count_error_anomalies(std::iter::once(error)),
        (0, 1),
        "still classified"
    );
}

/// The closing lines say how many functions the re-runs recovered and how
/// many are still lost, and a run whose re-runs recovered everything still
/// says a worker died.
#[test]
fn the_anomaly_lines_separate_recovered_from_lost() {
    let none = Retries::default();
    assert!(anomaly_lines((0, 0), 10, JOBS_TAG, none).is_empty());

    let all_back = anomaly_lines(
        (0, 0),
        10,
        JOBS_TAG,
        Retries {
            recovered: 20,
            failed_alone: 0,
        },
    );
    assert_eq!(all_back.len(), 1);
    assert!(all_back[0].starts_with("[unlace --jobs] 20 function(s) left unfinished"));
    assert!(
        !all_back[0].contains("warning"),
        "nothing is missing: {all_back:?}"
    );

    let mixed = anomaly_lines(
        (1, 3),
        10,
        STREAM_TAG,
        Retries {
            recovered: 18,
            failed_alone: 2,
        },
    );
    assert_eq!(mixed.len(), 3, "{mixed:?}");
    assert!(mixed[0].contains("1 function(s) hit the 10s per-function watchdog"));
    assert!(mixed[1].starts_with("[unlace --stream] 18 function(s)"));
    assert!(mixed[2].starts_with("[unlace --stream] warning: 3 function(s) have no result"));
    assert!(mixed[2].contains(" 2 of them failed again when re-run on their own."));

    let unretried = anomaly_lines((0, 5), 0, JOBS_TAG, none);
    assert_eq!(unretried.len(), 1);
    assert!(
        !unretried[0].contains("re-run on their own"),
        "{unretried:?}"
    );
}

/// Both silent-difference classes are counted, and an ordinary decompile
/// failure is neither of them.
#[test]
fn worker_failures_are_counted_not_just_budget_trips() {
    let err = |e: &str| FuncResult {
        name: "f".into(),
        address: 0,
        byte_address: 0,
        size: 0,
        code: None,
        error: Some(e.to_string()),
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: Vec::new(),
        types: Vec::new(),
        stack_objects: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: Vec::new(),
        aliases: Vec::new(),
        object_location: None,
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    };
    let results = vec![
        err("budget exceeded (30s)"),
        err(&format!("{CHUNK_FAILED} (signal: 9 (SIGKILL))")),
        err(&format!("{NO_RECORD} for this function")),
        err(&format!("{SPAWN_FAILED}: No such file or directory")),
        err(&format!("{SPEC_WRITE_FAILED}: No space left on device")),
        err(&format!("{STALLED} (10s); the worker was killed")),
        err("unable to load 8 bytes at 0x1000"),
        sample_result(),
    ];
    assert_eq!(count_anomalies(&results), (1, 5));
    assert_eq!(count_anomalies(&[sample_result()]), (0, 0));
}

pub(super) fn cfg(max_fn_seconds: u64, load_seconds: f64) -> PoolConfig<'static> {
    PoolConfig {
        jobs: 4,
        jobs_auto: false,
        chunk: None,
        binary: "/bin/true",
        mode: "fast",
        options: &[],
        language_file: None,
        rules: &[],
        func_decls: Vec::new(),
        no_vars: false,
        want_proto: false,
        want_provenance: false,
        want_types: false,
        want_callee_hints: false,
        want_pointer_arguments: false,
        max_fn_seconds,
        max_fn_memory: Some(0),
        full_load: false,
        load_seconds,
        isa: None,
        slice: None,
        target: None,
        sleighpath: None,
        synth_base: None,
        serial_callee_first: false,
        elem_objects: false,
        arm_frames: None,
        watch: None,
    }
}

/// A pool that runs its workers with `structsynth off` (the `--stream` one)
/// says why it has no `struct_N`, and stays quiet where the run had turned
/// synthesis off itself.
#[test]
fn structsynth_shard_note_for_every_run_that_would_synthesize() {
    let note = structsynth_shard_note(&cfg(0, 0.0), JOBS_TAG).expect("default param");
    assert!(
        note.starts_with("[unlace --jobs] note: structsynth is off"),
        "{note}"
    );
    let project = PoolConfig {
        want_types: true,
        ..cfg(0, 0.0)
    };
    assert!(structsynth_shard_note(&project, STREAM_TAG).is_some());
    let off = [("structsynth".to_string(), "off".to_string())];
    let turned_off = PoolConfig {
        options: &off,
        ..cfg(0, 0.0)
    };
    assert!(structsynth_shard_note(&turned_off, JOBS_TAG).is_none());
    let param = [("structsynth".to_string(), "param".to_string())];
    let asked = PoolConfig {
        options: &param,
        ..cfg(0, 0.0)
    };
    assert!(structsynth_shard_note(&asked, JOBS_TAG).is_some());
}

/// The pool is the only thing that can enforce the per-function budget on a
/// function wedged where nothing probes the cooperative deadline, so the
/// window has to be loose enough never to fire on a merely slow one — and
/// absent entirely when the budget itself is off.
#[test]
fn the_stall_window_allows_a_load_then_tightens() {
    assert_eq!(
        stall_deadline(&cfg(0, 70.0), false),
        None,
        "no budget, no stall kill"
    );
    assert_eq!(stall_deadline(&cfg(0, 70.0), true), None);

    let cold = stall_deadline(&cfg(10, 70.0), false).unwrap();
    let warm = stall_deadline(&cfg(10, 70.0), true).unwrap();
    assert_eq!(
        warm,
        Duration::from_secs(40),
        "4x the budget once the worker is loaded"
    );
    assert!(
        cold > warm + Duration::from_secs(200),
        "a cold worker still has to load: {cold:?}"
    );
    assert!(
        stall_deadline(&cfg(10, 0.0), false).unwrap() < cold,
        "the grace tracks the parent's own load time"
    );
    assert!(
        stall_deadline(&cfg(120, 70.0), true).unwrap() > warm,
        "a bigger budget is a bigger window"
    );
}

#[test]
fn jobs_values_parse() {
    assert_eq!(parse_jobs("1").unwrap(), (1, false));
    assert_eq!(parse_jobs(" 32 ").unwrap(), (32, false));
    let (auto, is_auto) = parse_jobs("auto").unwrap();
    assert!(
        is_auto,
        "`auto` must be reported as auto, so the memory trim may lower it"
    );
    assert!(
        (1..=MAX_AUTO_JOBS).contains(&auto),
        "auto must stay inside the cap: {auto}"
    );
    assert_eq!(parse_jobs("AUTO").unwrap(), (auto, true));
    for bad in ["0", "-4", "", "many"] {
        assert!(parse_jobs(bad).is_err(), "{bad:?} must be rejected");
    }
}

/// The memory trim runs on every pool start, so it decides the worker count
/// as much as `--jobs` does.  `auto` is a promise not to wreck the machine
/// and yields to what free memory holds; an explicit count is an instruction
/// and is obeyed with a warning.  A request the machine can hold is never
/// touched either way.
#[cfg(any(target_os = "linux", windows, target_os = "macos"))]
#[test]
fn auto_yields_to_free_memory_and_an_explicit_count_does_not() {
    let mut c = cfg(0, 0.0);
    c.jobs = 1;
    assert_eq!(
        affordable_jobs(&c, JOBS_TAG),
        1,
        "one worker fits on any machine that can run this"
    );

    // Far past what any machine holds, so the trim is reached wherever this
    // runs rather than only on a loaded box.
    c.jobs = 1_000_000;
    c.jobs_auto = true;
    let trimmed = affordable_jobs(&c, JOBS_TAG);
    assert!(trimmed >= 1, "the trim must still leave a pool: {trimmed}");
    assert!(
        trimmed < c.jobs,
        "`auto` must come down to what fits: {trimmed}"
    );

    c.jobs_auto = false;
    assert_eq!(
        affordable_jobs(&c, JOBS_TAG),
        1_000_000,
        "an explicit --jobs N is obeyed, not lowered"
    );
}

/// Whatever the planning policy, the plan must cover every slot exactly once
/// — that is what makes the positional merge total.
#[test]
fn the_plan_covers_every_target_exactly_once() {
    for explicit in [None, Some(1), Some(7), Some(0), Some(100_000)] {
        for jobs in [1, 8, 64] {
            for count in [1usize, 3, 17, 2000] {
                let targets: Vec<TargetSpec> = (0..count as u64)
                    .map(|i| {
                        let mut t = target(0x1000 + i * 0x20);
                        t.size = if i % 7 == 0 { 0x4000 } else { 0x20 };
                        t
                    })
                    .collect();
                let plan = plan_chunks(&targets, explicit, jobs);
                let mut seen: Vec<usize> = plan.iter().flatten().copied().collect();
                seen.sort_unstable();
                assert_eq!(
                    seen,
                    (0..count).collect::<Vec<_>>(),
                    "{explicit:?} jobs={jobs} count={count}"
                );
                let cap = MAX_AUTO_CHUNK.max(explicit.unwrap_or(0));
                assert!(plan.iter().all(|c| !c.is_empty() && c.len() <= cap));
            }
        }
    }
    assert!(plan_chunks(&[], None, 8).is_empty());
}

/// The scheduling contract: the long poles are dispatched first and are not
/// buried in a fat chunk, while the cheap majority is batched so the worker
/// load is amortized.
#[test]
fn expensive_functions_go_first_and_alone_cheap_ones_batch() {
    let mut targets: Vec<TargetSpec> = Vec::new();
    for i in 0..1000u64 {
        let mut t = target(0x1000 + i * 0x20);
        t.size = if i % 400 == 399 { 0x8000 } else { 0x20 };
        targets.push(t);
    }
    let plan = plan_chunks(&targets, None, 16);
    let whales: Vec<usize> = (0..targets.len())
        .filter(|&i| targets[i].size >= 0x8000)
        .collect();
    assert!(whales.len() >= 2, "fixture must contain whales");

    let first_chunk_of = |i: usize| plan.iter().position(|c| c.contains(&i)).unwrap();
    for &w in &whales {
        assert!(
            first_chunk_of(w) < whales.len(),
            "whale {w} dispatched late"
        );
        assert_eq!(plan[first_chunk_of(w)].len(), 1, "whale {w} shares a chunk");
    }
    let tail: Vec<usize> = plan[whales.len()..].iter().map(Vec::len).collect();
    assert!(
        tail.iter().all(|&n| n > 1),
        "cheap functions must batch: {tail:?}"
    );
    assert_eq!(
        plan,
        plan_chunks(&targets, None, 16),
        "planning is deterministic"
    );

    let fixed = plan_chunks(&targets, Some(7), 16);
    assert!(fixed[..fixed.len() - 1].iter().all(|c| c.len() == 7));
    assert!(whales.contains(&fixed[0][0]));
}

/// The `.h` merge only claims identity when one shard holds every
/// definition; when none does it still declares everything once, and says
/// so.
#[test]
fn the_type_block_is_the_shard_that_holds_them_all_or_their_union() {
    let a = "typedef struct s s;\n\nstruct s {\n    int x;\n};\n".to_string();
    assert_eq!(merge_type_definitions(&[a.clone(), a.clone()], JOBS_TAG), a);
    assert_eq!(merge_type_definitions(&[], JOBS_TAG), "");
    assert_eq!(
        merge_type_definitions(std::slice::from_ref(&a), JOBS_TAG),
        a
    );

    // A worker's block without its structures holds nothing the full one
    // lacks, wherever it comes.
    let full =
        "typedef struct s s;\ntypedef struct struct_0 struct_0;\n\nstruct s {\n    int x;\n};\n\n\
                    struct struct_0 {\n    int x;\n};\n"
            .to_string();
    assert_eq!(
        merge_type_definitions(&[a.clone(), full.clone()], JOBS_TAG),
        full
    );
    assert_eq!(
        merge_type_definitions(&[full.clone(), a.clone(), String::new()], JOBS_TAG),
        full
    );

    // Two blocks that each hold a type the other does not.
    let t = "typedef struct t t;\n\nstruct t {\n    int x;\n};\n".to_string();
    let merged = merge_type_definitions(&[full.clone(), t], JOBS_TAG);
    assert_eq!(
        merged,
        format!("{full}typedef struct t t;\n\nstruct t {{\n    int x;\n}};\n"),
        "one blank line before a spaced definition, none repeated"
    );
    for item in [
        "struct s {\n    int x;\n};",
        "struct t {\n    int x;\n};",
        "struct struct_0 {\n    int x;\n};",
    ] {
        assert_eq!(
            merged.matches(item).count(),
            1,
            "{item} must appear exactly once"
        );
    }
}

/// The parent's own decode lanes must not price its workers. Measured on a
/// 147 MB binary: 6.02 GB of peak serial against 9.09 GB at `--jobs 16`, of
/// which 3.07 GB is lanes -- a worker, forced back to one lane, pays none of
/// it and must be estimated at the serial number.
#[test]
fn the_worker_estimate_ignores_what_the_decode_lanes_added() {
    let gb = |n: u64| n * 1024 * 1024 * 1024;
    let serial = worker_estimate_from(6_167_417_856, 0, false);
    let laned = worker_estimate_from(9_305_874_432, 3_138_456_576, false);
    assert_eq!(
        laned, serial,
        "a laned load must estimate a worker as a serial one does"
    );
    assert_eq!(
        worker_estimate_from(gb(8), gb(2), true),
        gb(6),
        "--jobs-full-load too"
    );
    // The floor still holds, and nothing underflows when the excess is stale
    // and larger than this load's peak.
    assert_eq!(worker_estimate_from(gb(1), gb(4), false), 256 * 1024 * 1024);
    assert_eq!(worker_estimate_from(gb(4), 0, false), gb(1));
}

/// ...and it must not price them LOW either, which is the direction that
/// ends in an OOM kill rather than a narrow pool. Measured on the same
/// binary under `--option listing on` (what `--mode aggressive|reliable`
/// injects), where the walk's map costs ~713 B an instruction instead of the
/// 298 the excess subtraction is calibrated on: VmHWM 14.08 GB serial
/// against 17.73 GB at 16 lanes, so the lanes added 3.65 GB -- but an
/// unbounded subtraction reported 11.19 GB and priced a worker at 1.6 GB
/// where the honest number is 3.4 GB.
#[test]
fn the_worker_estimate_is_not_priced_low_by_an_over_reported_lane_excess() {
    let kb = |n: u64| n * 1024;
    let serial = worker_estimate_from(kb(14_079_200), 0, false);
    let over_reported = worker_estimate_from(kb(17_727_772), kb(11_730_186), false);
    assert!(
        over_reported * 2 < serial,
        "this is the defect: {over_reported} against {serial}"
    );
    // Bounded by the lanes' own footprint (`pdecode::lane_footprint`),
    // the same load reports what the lanes hold and the estimate lands
    // within a tenth of the serial one.
    let bounded = worker_estimate_from(kb(17_727_772), kb(4_257_000), false);
    let ratio = bounded as f64 / serial as f64;
    assert!(
        ratio > 0.85 && ratio < 1.15,
        "bounded estimate is {ratio:.2}x the serial one"
    );
}
