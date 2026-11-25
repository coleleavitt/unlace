use super::*;
use unlace_console::engine::EntryProvenance;

fn spec(addr: u64) -> TargetSpec {
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

fn result(addr: u64, hints: Vec<u64>) -> FuncResult {
    FuncResult {
        name: format!("sub_{addr:x}"),
        address: addr,
        byte_address: addr,
        size: 0x20,
        code: Some(format!("void sub_{addr:x}(void)\n{{\n  return;\n}}\n")),
        error: None,
        proto: Some(format!("void sub_{addr:x}(void);")),
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
        callee_hints: hints,
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

#[test]
fn streamed_string_aliases_preserve_body_name_checks_in_either_order() {
    let string = |name: &str, address, size| unlace_decomp::decompile_drive::GlobalInfo {
        address,
        name: name.into(),
        declaration: format!("char {name}[{size}]"),
        size,
        unknown: false,
        direct: true,
        aggregate: false,
        elem: false,
        integer: false,
    };
    for shadowed in [false, true] {
        for reverse in [false, true] {
            let dir = std::env::temp_dir().join(format!(
                "unlace_stream_string_aliases_{}_{shadowed}_{reverse}",
                std::process::id(),
            ));
            std::fs::create_dir_all(&dir).unwrap();
            let layout = Layout {
                binary_path: dir.join("image"),
                path_label: "image".into(),
                file_name: "image".into(),
                out_dir: dir.clone(),
            };
            let mut caller = result(0x1000, Vec::new());
            caller.globals = vec![string("whole", 0x5000, 16), string("part", 0x5004, 8)];
            caller.code = Some("void sub_1000(void) { consume(whole, part); }".into());
            let mut other = result(0x2000, Vec::new());
            if shadowed {
                other.code = Some(
                    "void sub_2000(void) {\n  char whole[16]; // local\n  consume(whole);\n}"
                        .into(),
                );
            }
            let mut records = [caller, other];
            if reverse {
                records.reverse();
            }
            let expected =
                unlace_console::project::build_header("image", "", "", &records).unwrap();
            let run = StreamRun::new(
                dir.clone(),
                ReadmeLayout::Streamed,
                ReadmeFacts::default(),
                1,
            );
            let mut writer =
                ProjectWriter::create(&layout, String::new(), BTreeSet::new()).unwrap();
            for record in records {
                writer.append(record, &run).unwrap();
            }
            assert!(writer.records.iter().all(|r| r.code.is_none()));
            writer.write_header(Some("")).unwrap();
            let actual = std::fs::read_to_string(dir.join("image.h")).unwrap();
            assert_eq!(actual, expected);
            assert_eq!(actual.contains("#define part"), !shadowed, "{actual}");
            drop(writer);
            std::fs::remove_dir_all(dir).unwrap();
        }
    }
}

#[test]
fn conflicting_wide_contract_refuses_before_publishing_a_streamed_chunk() {
    let dir = std::env::temp_dir().join(format!("unlace_stream_callwide_{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let layout = Layout {
        binary_path: dir.join("image"),
        path_label: "image".into(),
        file_name: "image".into(),
        out_dir: dir.clone(),
    };
    let run = StreamRun::new(
        dir.clone(),
        ReadmeLayout::Streamed,
        ReadmeFacts::default(),
        1,
    );
    let mut writer = ProjectWriter::create(&layout, String::new(), BTreeSet::new()).unwrap();
    let mut first = result(0x1000, Vec::new());
    first.call_declarations = vec!["unsigned long long producer(int);".into()];
    first.callwide_prototypes = vec![unlace_decomp::callwide::ExportPrototype {
        name: "producer".into(),
        entry: 0x2000,
        signed: false,
        inputs: vec![true],
        definition: false,
    }];
    writer.append(first.clone(), &run).unwrap();
    let c = std::fs::read(dir.join("image.c")).unwrap();
    let index = std::fs::read(dir.join(INDEX_FILE)).unwrap();
    let mut conflicting = first;
    conflicting.callwide_prototypes[0].signed = true;
    let error = writer.append(conflicting, &run).unwrap_err();
    assert!(error.contains("incompatible contracts"), "{error}");
    assert_eq!(std::fs::read(dir.join("image.c")).unwrap(), c);
    assert_eq!(std::fs::read(dir.join(INDEX_FILE)).unwrap(), index);
    assert_eq!(writer.records.len(), 1);
    run.fail(&error);
    run.publish_status().unwrap();
    let status = std::fs::read_to_string(dir.join(STATUS_FILE)).unwrap();
    assert!(status.contains("\"phase\":\"failed\""), "{status}");
    drop(writer);
    std::fs::remove_dir_all(dir).unwrap();
}

fn wide_records() -> [FuncResult; 3] {
    let mut caller = result(0x1000, Vec::new());
    caller.code = Some("void sub_1000(void) { producer(1); }".into());
    caller.call_declarations = vec!["unsigned long long producer(int);".into()];
    caller.callwide_prototypes = vec![unlace_decomp::callwide::ExportPrototype {
        name: "producer".into(),
        entry: 0x2000,
        signed: false,
        inputs: vec![true],
        definition: false,
    }];
    let mut other = result(0x1040, Vec::new());
    other.code = Some("void sub_1040(void) { producer((unsigned int)1); }".into());
    other.call_declarations = vec!["unsigned long long producer(unsigned int);".into()];
    other.callwide_prototypes = caller.callwide_prototypes.clone();
    other.callwide_prototypes[0].inputs[0] = false;
    let mut producer = result(0x2000, Vec::new());
    producer.name = "producer".into();
    producer.code = Some("unsigned long long producer(int value) { return value; }".into());
    producer.proto = Some("unsigned long long producer(int value);".into());
    producer.callwide_prototypes = caller.callwide_prototypes.clone();
    producer.callwide_prototypes[0].definition = true;
    [caller, other, producer]
}

#[test]
fn selected_producer_resolves_held_word_conflicts_without_reordering() {
    for order in [[0, 1, 2], [2, 0, 1]] {
        let dir = std::env::temp_dir().join(format!(
            "unlace_stream_callwide_order_{}_{order:?}",
            std::process::id()
        ));
        std::fs::create_dir_all(&dir).unwrap();
        let layout = Layout {
            binary_path: dir.join("image"),
            path_label: "image".into(),
            file_name: "image".into(),
            out_dir: dir.clone(),
        };
        let run = StreamRun::new(
            dir.clone(),
            ReadmeLayout::Streamed,
            ReadmeFacts::default(),
            1,
        );
        let records = wide_records();
        let selected = records.iter().map(|r| r.byte_address).collect();
        let mut writer = ProjectWriter::create(&layout, String::new(), selected).unwrap();
        for index in order {
            let before = std::fs::read(dir.join(INDEX_FILE)).unwrap();
            writer.append(records[index].clone(), &run).unwrap();
            if order == [0, 1, 2] && index == 1 {
                assert_eq!(writer.pending.len(), 1);
                assert_eq!(std::fs::read(dir.join(INDEX_FILE)).unwrap(), before);
            }
        }
        writer.finish_pending().unwrap();
        assert!(writer.pending.is_empty());
        assert_eq!(
            writer
                .records
                .iter()
                .map(|r| r.byte_address)
                .collect::<Vec<_>>(),
            order.map(|index| records[index].byte_address)
        );
        let index = std::fs::read_to_string(dir.join(INDEX_FILE)).unwrap();
        assert_eq!(index.lines().count(), 3);
        for (sequence, line) in index.lines().enumerate() {
            assert!(
                line.contains(&format!(
                    "\"addr\":\"0x{:x}\"",
                    records[order[sequence]].address
                )),
                "{line}"
            );
        }
        writer.write_header(Some("")).unwrap();
        let header = std::fs::read_to_string(dir.join("image.h")).unwrap();
        assert!(header.contains("unsigned long long producer(int value);"));
        assert!(!header.contains("extern unsigned long long producer"));
        drop(writer);
        std::fs::remove_dir_all(dir).unwrap();
    }
}

#[test]
fn missing_or_incompatible_selected_producer_never_publishes_held_records() {
    for change in 0..5 {
        let dir = std::env::temp_dir().join(format!(
            "unlace_stream_callwide_missing_{}_{change}",
            std::process::id()
        ));
        std::fs::create_dir_all(&dir).unwrap();
        let layout = Layout {
            binary_path: dir.join("image"),
            path_label: "image".into(),
            file_name: "image".into(),
            out_dir: dir.clone(),
        };
        let run = StreamRun::new(
            dir.clone(),
            ReadmeLayout::Streamed,
            ReadmeFacts::default(),
            1,
        );
        let [caller, other, mut producer] = wide_records();
        let selected = [
            caller.byte_address,
            other.byte_address,
            producer.byte_address,
        ]
        .into_iter()
        .collect();
        let mut writer = ProjectWriter::create(&layout, String::new(), selected).unwrap();
        writer.append(caller, &run).unwrap();
        let c = std::fs::read(dir.join("image.c")).unwrap();
        let index = std::fs::read(dir.join(INDEX_FILE)).unwrap();
        writer.append(other, &run).unwrap();
        let error = if change == 0 {
            writer.finish_pending().unwrap_err()
        } else {
            match change {
                1 => producer.callwide_prototypes[0].signed = true,
                2 => producer.callwide_prototypes[0].inputs.push(true),
                3 => producer.callwide_prototypes.clear(),
                _ => producer.error = Some("producer failed".into()),
            }
            writer.append(producer, &run).unwrap_err()
        };
        assert_eq!(std::fs::read(dir.join("image.c")).unwrap(), c);
        assert_eq!(std::fs::read(dir.join(INDEX_FILE)).unwrap(), index);
        assert_eq!(writer.records.len(), 1);
        writer_died(&run, error);
        let status = std::fs::read_to_string(dir.join(STATUS_FILE)).unwrap();
        assert!(status.contains("\"phase\":\"failed\""), "{status}");
        drop(writer);
        std::fs::remove_dir_all(dir).unwrap();
    }
}

#[test]
fn actual_callers_wait_for_their_selected_producer_without_changing_c() {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    let image = root.join("tests/fixtures/callwide/mips32_be_declared.elf");
    let mut argv = vec![
        image.to_string_lossy().into_owned(),
        "--sleighpath".into(),
        root.join("../..")
            .join("specs")
            .to_string_lossy()
            .into_owned(),
    ];
    for (name, value) in [
        ("bejoin", "evidence"),
        ("dwarf", "off"),
        ("narrowext", "abi"),
        ("callwide", "on"),
    ] {
        argv.extend(["--option".into(), name.into(), value.into()]);
    }
    for declaration in [
        "prototype consume64 unsigned long long consume64(unsigned long long value)",
        "prototype consume_two32 unsigned int consume_two32(unsigned int high,unsigned int low)",
        "prototype consume_slot unsigned long long consume_slot(unsigned int tag,unsigned long long value)",
        "prototype caller64 unsigned long long caller64(unsigned long long left,unsigned long long right)",
        "prototype caller_high32 unsigned int caller_high32(unsigned long long left,unsigned long long right)",
        "prototype caller_high16 unsigned short caller_high16(unsigned long long left,unsigned long long right)",
        "prototype caller_high8 unsigned char caller_high8(unsigned long long left,unsigned long long right)",
        "prototype caller_bool bool caller_bool(unsigned long long left,unsigned long long right)",
        "prototype caller_ignored unsigned int caller_ignored(unsigned long long left,unsigned long long right)",
    ] {
        argv.extend(["--assert".into(), declaration.into()]);
    }
    argv.push("--assert-strict".into());
    let args = crate::decompile_all::parse_args(&argv, "decompile-project").unwrap();
    let mut prog = load_program(&args, DriverDefaults::Decompile).unwrap();
    let targets: Vec<_> = ["caller64", "caller_ignored", "produce_sum"]
        .into_iter()
        .map(|name| prog.find_entry_by_name(name).unwrap())
        .collect();
    let selected = targets
        .iter()
        .map(|target| target.addr.get_offset())
        .collect();
    let records = unlace_console::project::decompile_export_targets(&mut prog, targets);
    assert_eq!(records.len(), 3);
    assert!(
        records
            .iter()
            .all(|r| r.error.is_none() && r.code.is_some())
    );
    let first = records[0]
        .callwide_prototypes
        .iter()
        .find(|p| p.name == "produce_sum")
        .unwrap();
    let second = records[1]
        .callwide_prototypes
        .iter()
        .find(|p| p.name == "produce_sum")
        .unwrap();
    assert_eq!(first.entry, second.entry);
    assert_eq!(first.signed, second.signed);
    assert_eq!(first.inputs.len(), second.inputs.len());
    assert_ne!(first.inputs, second.inputs);
    let keep = unlace_base::env::var_os("UNLACE_CALLWIDE_REPLAY_DIR");
    let dir = keep.as_ref().map_or_else(
        || {
            std::env::temp_dir().join(format!(
                "unlace_stream_actual_callwide_{}",
                std::process::id()
            ))
        },
        PathBuf::from,
    );
    std::fs::create_dir_all(&dir).unwrap();
    let layout = Layout {
        binary_path: image,
        path_label: "callwide actual records".into(),
        file_name: "mips32_be_declared.elf".into(),
        out_dir: dir.clone(),
    };
    let prelude = print_c_recompile_prelude(prog.arch());
    let run = StreamRun::new(
        dir.clone(),
        ReadmeLayout::Streamed,
        ReadmeFacts::default(),
        1,
    );
    let mut writer = ProjectWriter::create(&layout, prelude, selected).unwrap();
    let expected = render_c(&records);
    for (index, record) in records.into_iter().enumerate() {
        let before = std::fs::read(dir.join(INDEX_FILE)).unwrap();
        writer.append(record, &run).unwrap();
        if index == 1 {
            assert_eq!(writer.pending.len(), 1);
            assert_eq!(std::fs::read(dir.join(INDEX_FILE)).unwrap(), before);
        }
    }
    writer.finish_pending().unwrap();
    writer
        .write_header(Some(&print_c_types(prog.arch_mut())))
        .unwrap();
    assert_eq!(
        std::fs::read_to_string(dir.join("mips32_be_declared.elf.c")).unwrap(),
        format!("#include \"mips32_be_declared.elf.h\"\n\n{expected}")
    );
    assert_eq!(
        writer
            .records
            .iter()
            .map(|r| r.name.as_str())
            .collect::<Vec<_>>(),
        ["caller64", "caller_ignored", "produce_sum"]
    );
    drop(writer);
    if keep.is_none() {
        std::fs::remove_dir_all(dir).unwrap();
    }
}

fn specs(n: u64) -> Vec<TargetSpec> {
    (0..n).map(|i| spec(0x1000 + i * 0x20)).collect()
}

fn scheduler(specs: &[TargetSpec], jobs: usize, chunk: Option<usize>) -> Scheduler {
    Scheduler::new(specs, jobs, chunk, Arc::new(Abort::default()))
}

/// The contract the `.c`'s order rests on: seeds first, then what they
/// reach, and only then the address-ordered remainder.
#[test]
fn the_scheduler_runs_the_frontier_before_the_address_cursor() {
    let specs = specs(8);
    let sched = scheduler(&specs, 1, Some(1));
    sched.seed(&[5]);
    assert_eq!(sched.claim_one(), Some(5), "a seed leads");

    // sub_10a0 (index 5) calls index 7 and index 1, in that order.
    sched.on_results(&[result(specs[5].addr, vec![specs[7].addr, specs[1].addr])]);
    assert_eq!(sched.claim_one(), Some(7));
    assert_eq!(sched.claim_one(), Some(1));
    // Frontier drained: the fallback resumes at the bottom of the address
    // order, skipping what the frontier already took.
    assert_eq!(sched.claim_one(), Some(0));
    assert_eq!(sched.claim_one(), Some(2));
}

/// Every target exactly once, whatever the hints claim.
#[test]
fn every_target_is_claimed_exactly_once() {
    let specs = specs(40);
    let sched = scheduler(&specs, 4, None);
    sched.seed(&[3, 9]);
    let mut seen: Vec<usize> = Vec::new();
    while let Some(chunk) = sched.next_chunk() {
        // Re-announce everything as a callee of everything: a hint that
        // names a claimed target must not produce a second claim.
        let hints: Vec<u64> = specs.iter().map(|s| s.addr).collect();
        for &i in &chunk {
            sched.on_results(&[result(specs[i].addr, hints.clone())]);
        }
        seen.extend(chunk);
    }
    let mut sorted = seen.clone();
    sorted.sort_unstable();
    assert_eq!(sorted, (0..40).collect::<Vec<_>>());
    assert_eq!(seen.len(), 40, "a target was handed out twice");
    assert!(sched.claimed_all());
    assert_eq!(seen[0], 3, "the seeds still lead");
    assert_eq!(seen[1], 9);
}

/// A hint to something this export did not select is scheduling noise, not
/// a reason to decompile it — the `--addr`/`--functions` guarantee.
#[test]
fn a_hint_outside_the_target_set_is_ignored() {
    let specs = specs(3);
    let sched = scheduler(&specs, 1, Some(4));
    sched.on_results(&[result(specs[0].addr, vec![0xdead_beef, specs[2].addr])]);
    assert_eq!(sched.next_chunk(), Some(vec![2]));
    assert_eq!(sched.next_chunk(), Some(vec![0, 1]));
    assert_eq!(sched.next_chunk(), None);
}

/// `--jobs-chunk N` pins the size; otherwise it follows how much frontier
/// there is to follow — and the address-order fallback, which is where most
/// of a large export runs, takes full chunks whatever the frontier says.
#[test]
fn the_chunk_size_is_fixed_by_the_flag_and_adaptive_without_it() {
    let specs = specs(600);
    let fixed = scheduler(&specs, 4, Some(7));
    assert_eq!(fixed.next_chunk().unwrap().len(), 7);
    assert_eq!(fixed.chunk_sizes(), (7, 7), "--jobs-chunk pins both halves");

    let auto = scheduler(&specs, 4, None);
    assert_eq!(
        auto.chunk_sizes(),
        (4, CHUNK_MAX),
        "a thin frontier is followed closely"
    );
    assert_eq!(
        auto.next_chunk().unwrap().len(),
        CHUNK_MAX,
        "an empty frontier IS the fallback: the cursor goes out in full chunks"
    );
    let hints: Vec<u64> = specs[100..300].iter().map(|s| s.addr).collect();
    auto.on_results(&[result(0x1, hints)]);
    assert_eq!(
        auto.chunk_sizes(),
        (CHUNK_MAX, CHUNK_MAX),
        "a deep frontier batches"
    );
}

/// A callee with many callers is queued once: the frontier length decides
/// the chunk size, so duplicates would make a drained frontier read as deep.
#[test]
fn a_repeated_hint_is_queued_once() {
    let specs = specs(8);
    let sched = scheduler(&specs, 1, Some(1));
    let callee = specs[5].addr;
    for caller in &specs[..4] {
        sched.on_results(&[result(caller.addr, vec![callee, callee])]);
    }
    assert_eq!(sched.frontier_len(), 1, "one entry per queued target");
    assert_eq!(sched.claim_one(), Some(5));
    assert_eq!(sched.frontier_len(), 0, "and it leaves when it is claimed");
    assert_eq!(sched.claim_one(), Some(0), "the cursor takes over");
}

/// The writer owns every artifact, so when it dies the pool must stop
/// pulling chunks rather than decompile the rest of the binary into a
/// closed channel.
#[test]
fn an_aborted_run_hands_out_no_more_work() {
    let specs = specs(40);
    let abort = Arc::new(Abort::default());
    let sched = Scheduler::new(&specs, 4, Some(4), Arc::clone(&abort));
    assert_eq!(sched.next_chunk().map(|c| c.len()), Some(4));
    abort.stop(Some(
        "cannot replace x.h: Is a directory (os error 21)".into(),
    ));
    assert_eq!(sched.next_chunk(), None, "a stopped run schedules nothing");
    assert_eq!(sched.claim_one(), None);
    assert!(
        abort.reason().contains("Is a directory"),
        "the writer's error is the reason"
    );
}

/// A producer that only saw its channel close still reports something.
#[test]
fn an_abort_without_a_writer_error_reports_the_sentinel() {
    let abort = Abort::default();
    abort.stop(None);
    assert!(abort.stopped());
    assert_eq!(abort.reason(), WRITER_STOPPED);
    abort.stop(Some("second".into()));
    assert_eq!(
        abort.reason(),
        "second",
        "the first real error wins over the sentinel"
    );
    abort.stop(Some("third".into()));
    assert_eq!(
        abort.reason(),
        "second",
        "and is not overwritten by a later one"
    );
}

/// Two streamed exports into one folder truncate each other's `.c` and
/// invalidate every offset a reader took, so the second one refuses while
/// the first is alive — and takes the folder once it is not.
#[cfg(target_os = "linux")]
#[test]
fn a_second_export_refuses_a_folder_a_live_one_is_writing() {
    let dir = std::env::temp_dir().join(format!("unlace_stream_live_{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    assert!(
        refuse_a_live_export(&dir).is_ok(),
        "an empty folder is free"
    );

    // pid 1 is alive on any Linux this runs on.
    std::fs::write(
        dir.join(STATUS_FILE),
        "{\"schema\":1,\"phase\":\"decompiling\",\"pid\":1}\n",
    )
    .unwrap();
    let refused = refuse_a_live_export(&dir).unwrap_err();
    assert!(refused.contains("pid 1"), "{refused}");
    assert!(
        refused.contains("-o"),
        "the refusal has to say what to do instead: {refused}"
    );
    assert!(
        refused.contains(STATUS_FILE),
        "a recycled pid is the case the folder is not really busy, so the refusal has to \
             name the file to delete: {refused}"
    );

    std::fs::write(
        dir.join(STATUS_FILE),
        format!("{{\"schema\":1,\"pid\":{}}}\n", std::process::id()),
    )
    .unwrap();
    assert!(
        refuse_a_live_export(&dir).is_ok(),
        "our own pid is not a second export"
    );

    // Past `pid_max`, so no process can hold it: the run was killed and the
    // folder is free.
    let dead: u64 = std::fs::read_to_string("/proc/sys/kernel/pid_max")
        .map(|s| s.trim().parse::<u64>().unwrap_or(4_194_304))
        .unwrap_or(4_194_304)
        + 1;
    std::fs::write(dir.join(STATUS_FILE), format!("{{\"pid\":{dead}}}\n")).unwrap();
    assert!(
        refuse_a_live_export(&dir).is_ok(),
        "a dead pid does not hold the folder"
    );
    let _ = std::fs::remove_dir_all(&dir);
}

/// The status file's `pid` is what a second export reads to decide whether
/// the first is still alive.
#[test]
fn the_status_pid_is_readable_back_out_of_the_line() {
    let status = StreamStatus::new(2);
    let line = dumps_compact(&status.to_json());
    assert_eq!(
        json_number(&line, "pid"),
        Some(u64::from(std::process::id()))
    );
    assert_eq!(json_number(&line, "functions_done"), Some(0));
    assert_eq!(
        json_number(&line, "functions_total"),
        None,
        "a null is not a number"
    );
    assert_eq!(json_number(&line, "nope"), None);
}

/// Two exports into one folder must not fight over one temp path, and
/// neither may leave one behind in a folder an agent is reading.
#[test]
fn an_atomic_write_names_its_temp_after_the_process() {
    let dir = std::env::temp_dir().join(format!("unlace_stream_atomic_{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let path = dir.join("x.h");
    let temp = temp_path(&path);
    assert_eq!(
        temp.parent(),
        path.parent(),
        "the temp is staged beside its target"
    );
    let name = temp.file_name().unwrap().to_string_lossy().into_owned();
    assert!(
        name.ends_with(&format!(".unlace-tmp.{}", std::process::id())),
        "the temp name has to carry this process's pid, or two exports collide: {name}"
    );

    write_atomic(&path, b"one").unwrap();
    assert_eq!(std::fs::read(&path).unwrap(), b"one");
    assert!(
        leftover_temps(&dir).is_empty(),
        "the temp file is renamed away"
    );
    assert!(
        write_atomic(&dir.join("nested/x.h"), b"two").is_err(),
        "a path that cannot be written is an error, not a panic"
    );

    // The rename is what fails when the target is a directory, which is the
    // one path that used to leave its staged file in the folder.
    let blocked = dir.join("y.h");
    std::fs::create_dir(&blocked).unwrap();
    assert!(
        write_atomic(&blocked, b"three").is_err(),
        "a directory cannot be replaced"
    );
    assert!(
        leftover_temps(&dir).is_empty(),
        "a failed rename left its temp behind: {:?}",
        leftover_temps(&dir)
    );
    let _ = std::fs::remove_dir_all(&dir);
}

fn leftover_temps(dir: &Path) -> Vec<String> {
    std::fs::read_dir(dir)
        .unwrap()
        .filter_map(|e| Some(e.ok()?.file_name().to_string_lossy().into_owned()))
        .filter(|n| n.contains("unlace-tmp"))
        .collect()
}

/// The status file is the run's only contract with a polling reader.
#[test]
fn the_status_file_carries_the_documented_schema() {
    let mut status = StreamStatus::new(4);
    let json = dumps_compact(&status.to_json());
    for field in [
        "\"schema\":1",
        "\"phase\":\"loading\"",
        "\"functions_total\":null",
        "\"functions_done\":0",
        "\"asm\":\"pending\"",
        "\"error\":null",
    ] {
        assert!(json.contains(field), "{field} missing from {json}");
    }
    status.phase = StreamPhase::Failed;
    status.total = Some(12);
    status.done = 3;
    status.failed = 1;
    status.asm = AsmPhase::Complete;
    status.error = Some("boom \"quoted\"".into());
    let json = dumps_compact(&status.to_json());
    assert!(json.contains("\"phase\":\"failed\""));
    assert!(json.contains("\"functions_total\":12"));
    assert!(json.contains("\"error\":\"boom \\\"quoted\\\"\""));
    assert_eq!(json.lines().count(), 1, "a status file is one line");
}

/// An index line has to slice the `.c` to exactly its own block.
#[test]
fn an_index_line_slices_the_c_to_its_block() {
    let ok = result(0x401000, Vec::new());
    let block = render_c(std::slice::from_ref(&ok));
    let prelude = "#include \"x.h\"\n\n";
    let c = format!("{prelude}{block}");
    let offset = prelude.len();
    let line = index_line(0, &ok, Some((offset as u64, block.len())));
    assert!(line.ends_with('\n'));
    assert!(line.contains("\"seq\":0"));
    assert!(line.contains("\"addr\":\"0x401000\""));
    assert!(line.contains("\"error\":null"));
    assert!(line.contains(&format!("\"c_offset\":{offset}")));
    assert_eq!(&c[offset..offset + block.len()], block);

    let mut bad = ok;
    bad.code = None;
    bad.error = Some("budget exceeded".into());
    assert!(index_line(1, &bad, Some((0, 0))).contains("\"error\":\"budget exceeded\""));

    let feed = index_line(2, &bad, None);
    assert!(feed.contains("\"c_offset\":null,\"c_len\":null"), "{feed}");
}
