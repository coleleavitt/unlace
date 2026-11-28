//! `--jobs N`: a dead worker costs one function.

use super::*;

/// The serial `decompile-all --json` document of `fauxware`.
fn fauxware_serial_json() -> String {
    let (bin, sp) = (fauxware(), specs());
    let args: Vec<&str> = [
        "decompile-all",
        &bin,
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    want
}

/// A pooled `decompile-all --json` of `fauxware` in ONE chunk (so one worker
/// serves every target and the dispatch order is the planner's longest-first
/// order), under `UNLACE_JOBS_FAULT=fault`.
fn fauxware_pooled_with_fault(fault: &str, max_fn_seconds: &str) -> (String, String, bool) {
    let bin = fauxware();
    let sp = specs();
    let args: Vec<&str> = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        max_fn_seconds,
        "--sleighpath",
        sp.as_str(),
        "--jobs",
        "2",
        "--jobs-chunk",
        "64",
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    run_unlace_env_with_timeout(
        &args,
        &[("UNLACE_JOBS_FAULT", fault)],
        Duration::from_secs(240),
    )
    .unwrap_or_else(|| panic!("UNLACE_JOBS_FAULT={fault} wedged the pool"))
}

/// Every record but those named in `lost` must be the serial run's, byte for
/// byte.
fn assert_only_lost_differ(serial: &str, pooled: &str, lost: &[&str]) {
    let want = json_records(serial);
    let got = json_records(pooled);
    assert_eq!(got.len(), want.len(), "one record per target:\n{pooled}");
    for (w, g) in want.iter().zip(&got) {
        assert_eq!(record_name(w), record_name(g), "target order moved");
        if !lost.contains(&record_name(w).as_str()) {
            assert_eq!(g, w, "{} is not the serial record", record_name(w));
        }
    }
}

/// The issue this exists for: one function panicking its worker used to turn
/// every function of its chunk (26..512 wide on a large binary) into an `error`
/// record.  The functions the dead worker never delivered are re-run on their
/// own, so the document is the serial one except for the function that
/// panicked, whose record is the crash it repeats when run alone -- once, not
/// in a loop.  `main` is the fixture's largest function, so the planner puts it
/// first and the worker dies before delivering anything (the worker had not
/// finished a chunk yet, which is exactly when a death could also have been its
/// load); `authenticate` comes third, after a delivered prefix.
#[test]
fn jobs_a_worker_panic_loses_only_the_function_that_panicked() {
    let serial = fauxware_serial_json();
    let total = json_records(&serial).len();
    for (name, addr) in [("main", "0x40071d"), ("authenticate", "0x400664")] {
        let (got, stderr, ok) = fauxware_pooled_with_fault(&format!("panic:{addr}"), "0");
        assert!(
            ok,
            "one panicking function must not fail the run:\n{stderr}"
        );
        assert_only_lost_differ(&serial, &got, &[name]);
        let lost = json_records(&got)
            .into_iter()
            .find(|r| record_name(r) == name)
            .unwrap();
        assert!(
            lost.contains("\"error\": \"worker chunk failed (worker exited: exit status: 101)\""),
            "{name} must carry its own crash:\n{lost}"
        );
        assert_eq!(
            stderr
                .matches(&format!("UNLACE_JOBS_FAULT: injected panic at {addr}"))
                .count(),
            2,
            "{name} is run once in its chunk and once alone, never again:\n{stderr}"
        );
        let recovered =
            recovered_count(&stderr).unwrap_or_else(|| panic!("no recovery line:\n{stderr}"));
        if name == "main" {
            assert_eq!(
                recovered,
                total - 1,
                "every other function was re-run:\n{stderr}"
            );
        } else {
            assert!(
                recovered >= 1,
                "{name} was not first, so it had bystanders:\n{stderr}"
            );
        }
        assert!(
            stderr.contains(
                "warning: 1 function(s) have no result because their worker process failed"
            ) && stderr.contains("1 of them failed again when re-run on their own."),
            "the warning must count only the function that failed alone:\n{stderr}"
        );
    }
}

/// A death that is not the function's own -- an OOM kill, a signal -- is
/// recovered too: the function that was running is re-run first, and when it
/// succeeds alone the document is the serial one and nothing is reported lost.
#[test]
fn jobs_a_transient_worker_death_loses_nothing() {
    let serial = fauxware_serial_json();
    let (got, stderr, ok) = fauxware_pooled_with_fault("panic-once:0x40071d", "0");
    assert!(ok, "{stderr}");
    assert_eq!(got, serial, "a recovered run must be the serial document");
    assert_eq!(
        stderr.matches("UNLACE_JOBS_FAULT: injected panic").count(),
        1,
        "{stderr}"
    );
    assert_eq!(
        recovered_count(&stderr),
        Some(json_records(&serial).len()),
        "{stderr}"
    );
    assert!(
        !stderr.contains("have no result"),
        "nothing was lost:\n{stderr}"
    );
}

/// A render that panics loses only its own function. The panic used to leave
/// a default printer in the program, so every later function of the batch (in
/// the serial run, or in the same worker) silently lost the run's printer
/// settings, here `indentincrement 4`. The fault fires after the opening
/// brace, so a printer put back without being cleared would indent the rest
/// one level too deep. `_init` renders first serially, `main` first in the one
/// pooled chunk.
#[test]
fn a_render_panic_leaves_later_functions_on_the_configured_printer() {
    let (bin, sp) = (fauxware(), specs());
    let run: Vec<&str> = [
        "decompile-all",
        &bin,
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .chain(["--option", "indentincrement", "4"])
    .collect();
    let pool = ["--jobs", "2", "--jobs-chunk", "64"];
    for (extra, name, at) in [
        (&[][..], "_init", "0x4004e0"),
        (&pool[..], "main", "0x40071d"),
    ] {
        let args: Vec<&str> = run.iter().chain(extra).copied().collect();
        let (want, stderr, ok) = run_unlace(&args);
        assert!(ok, "{stderr}");
        assert!(
            want.contains("{\\n    puts("),
            "indentincrement 4 must show in the bodies:\n{want}"
        );
        let (got, stderr, ok) = run_unlace_env(&args, &[("UNLACE_RENDER_FAULT", at)]);
        assert!(ok, "one render panic must not fail the run:\n{stderr}");
        let fault = format!("UNLACE_RENDER_FAULT: injected render panic at {at}");
        assert_eq!(stderr.matches(&fault).count(), 1, "{stderr}");
        let (want, got) = (json_records(&want), json_records(&got));
        assert_eq!(got.len(), want.len(), "one record per target");
        for (w, g) in want.iter().zip(&got) {
            if record_name(w) == name {
                assert!(
                    g.contains("\"error\": \"panic while rendering C / extracting variables\""),
                    "{name} must carry its render panic:\n{g}"
                );
            } else {
                assert_eq!(
                    g,
                    w,
                    "{} rendered differently after {name}'s render panicked",
                    record_name(w)
                );
            }
        }
    }
}

/// A panic while recovering a jump table is that function's error, serially
/// and under `--jobs`, as a panic in the main pipeline is. The recovery used
/// to swallow it: the panic was printed, and the function still got C with
/// its table dropped (a jump-as-call) and no error. The tables after it are
/// not attempted, so the panic prints once, and every other function is
/// unchanged.
#[test]
fn a_jump_table_recovery_panic_is_the_functions_error() {
    let (bin, sp) = (common::fixture("switchtable_x86_64"), specs());
    let run: Vec<&str> = [
        "decompile-all",
        &bin,
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace(&run);
    assert!(ok, "{stderr}");
    let want = json_records(&want);
    for jobs in ["1", "2"] {
        let args: Vec<&str> = run.iter().copied().chain(["--jobs", jobs]).collect();
        let (got, stderr, ok) = run_unlace_env(&args, &[("UNLACE_JUMPTABLE_FAULT", "0x100000")]);
        assert!(ok, "one function's panic must not fail the run:\n{stderr}");
        let fault = "UNLACE_JUMPTABLE_FAULT: injected jump-table recovery panic at 0x100000";
        assert_eq!(stderr.matches(fault).count(), 1, "--jobs {jobs}:\n{stderr}");
        let got = json_records(&got);
        assert_eq!(got.len(), want.len(), "one record per target");
        for (w, g) in want.iter().zip(&got) {
            if record_name(w) == "dispatch" {
                let error = "\"error\": \"decompile pipeline reached an un-ported seam (LOSS-131) \
                             in jump-table recovery at 0x100007: UNLACE_JUMPTABLE_FAULT";
                assert!(
                    g.contains("\"code\": null") && g.contains(error),
                    "--jobs {jobs}:\n{g}"
                );
            } else {
                assert_eq!(g, w, "--jobs {jobs}: {} changed", record_name(w));
            }
        }
    }
}

/// The stall watchdog's kill is the other way a worker dies.  Its bystanders
/// are re-run like a crash's, but the function it was running is not: it has
/// already run four times past the per-function budget, and a second attempt
/// would cost the same stall window again.  `rejected` comes after a delivered
/// prefix, so the warm (4 s) stall window applies.
///
/// A bystander that stalls when re-run costs itself and the chunk re-runs on:
/// stalls are common on large binaries, and a stall in a planned chunk costs
/// one function too.  A second stalled re-run in the same chunk stops it, which
/// caps the extra stall windows a chunk can wait out.  `read` and `strcmp` are
/// the third and sixth re-runs, each after a recovered one, so both windows are
/// warm too.
#[test]
fn jobs_a_stalled_worker_loses_only_the_function_that_stalled() {
    let serial = fauxware_serial_json();
    let (got, stderr, ok) = fauxware_pooled_with_fault("stall:0x4006fd", "1");
    assert!(ok, "{stderr}");
    assert_only_lost_differ(&serial, &got, &["rejected"]);
    let lost = json_records(&got)
        .into_iter()
        .find(|r| record_name(r) == "rejected")
        .unwrap();
    assert!(
        lost.contains("\"error\": \"worker stalled past the per-function watchdog (1s)"),
        "{lost}"
    );
    assert_eq!(
        stderr
            .matches("UNLACE_JOBS_FAULT: injected stall at 0x4006fd")
            .count(),
        1,
        "a stalled function is not re-run:\n{stderr}"
    );
    assert!(recovered_count(&stderr).is_some_and(|n| n >= 1), "{stderr}");
    assert!(!stderr.contains("failed again"), "{stderr}");

    let (got, stderr, ok) = fauxware_pooled_with_fault("stall:0x4006fd,stall:0x400530", "1");
    assert!(ok, "{stderr}");
    assert_only_lost_differ(&serial, &got, &["rejected", "read"]);
    assert!(
        !got.contains("not re-run"),
        "one stalled re-run stops nothing:\n{got}"
    );
    assert_eq!(recovered_count(&stderr), Some(11), "{stderr}");

    let stalls = "stall:0x4006fd,stall:0x400530,stall:0x400550";
    let (got, stderr, ok) = fauxware_pooled_with_fault(stalls, "1");
    assert!(ok, "{stderr}");
    let not_rerun = [
        "sub_400500",
        "accepted",
        "__libc_start_main",
        "printf",
        "_fini",
        "open",
    ];
    let mut lost = vec!["rejected", "read", "strcmp"];
    lost.extend(not_rerun);
    assert_only_lost_differ(&serial, &got, &lost);
    let stalled =
        "\"error\": \"worker stalled past the per-function watchdog (1s); the worker was killed";
    for r in json_records(&got)
        .into_iter()
        .filter(|r| lost.contains(&record_name(r).as_str()))
    {
        assert!(r.contains(stalled), "{r}");
        let marked = r.contains("; not re-run: two functions re-run from its chunk stalled\"");
        assert_eq!(marked, not_rerun.contains(&record_name(r).as_str()), "{r}");
    }
    for addr in ["0x4006fd", "0x400530", "0x400550"] {
        let fired = stderr
            .matches(&format!("UNLACE_JOBS_FAULT: injected stall at {addr}"))
            .count();
        assert_eq!(fired, 1, "{addr} stalled once:\n{stderr}");
    }
    assert_eq!(recovered_count(&stderr), Some(4), "{stderr}");
    assert!(
        stderr.contains("warning: 9 function(s) have no result")
            && stderr.contains("2 of them failed again when re-run on their own."),
        "{stderr}"
    );
}

/// The failure #578 exists for, at its worst: the planner cuts chunks from a
/// size-sorted order, so functions that crash alike sit side by side.  Five
/// crashers in the first five places of the chunk (the largest functions)
/// must cost those five and nothing else, not the chunk.
#[test]
fn jobs_neighbouring_crashers_do_not_forfeit_their_chunk() {
    let serial = fauxware_serial_json();
    let crashers = [
        ("main", "0x40071d"),
        ("__libc_csu_init", "0x4007e0"),
        ("authenticate", "0x400664"),
        ("__do_global_dtors_aux", "0x4005d0"),
        ("__do_global_ctors_aux", "0x400880"),
    ];
    let fault: Vec<String> = crashers.iter().map(|(_, a)| format!("panic:{a}")).collect();
    let (got, stderr, ok) = fauxware_pooled_with_fault(&fault.join(","), "0");
    assert!(
        ok,
        "sixteen functions came back, so the run succeeded:\n{stderr}"
    );
    let names: Vec<&str> = crashers.iter().map(|(n, _)| *n).collect();
    assert_only_lost_differ(&serial, &got, &names);
    assert!(
        !got.contains("not re-run"),
        "no function was given up:\n{got}"
    );
    assert_eq!(recovered_count(&stderr), Some(16), "{stderr}");
    assert_eq!(
        stderr.matches("UNLACE_JOBS_FAULT: injected panic").count(),
        6,
        "the chunk's death, then one re-run apiece for the five crashers:\n{stderr}"
    );
    assert!(
        stderr.contains("5 of them failed again when re-run on their own."),
        "{stderr}"
    );
}

/// Re-running must never become a loop, nor pay a load for every function of a
/// run whose workers die on everything.  A spawn the OS refuses is not re-run at
/// all; a re-run that cannot spawn ends its chunk's re-runs; a chunk whose
/// re-run bystanders mostly fail stops after eight of them; and a run whose
/// re-runs fail more often than its workers deliver stops re-running.  Each
/// case must end, with exactly one record per target, and every function left
/// behind says it was not re-run.
#[test]
fn jobs_rerunning_a_dead_worker_never_loops() {
    let serial = fauxware_serial_json();
    let total = json_records(&serial).len();
    let every_record_failed = |doc: &str, prefix: &str| {
        let records = json_records(doc);
        assert_eq!(records.len(), total, "{doc}");
        for r in records {
            assert!(
                r.contains(&format!("\"error\": \"{prefix}")),
                "{}:\n{r}",
                record_name(r)
            );
        }
    };
    let crashed = "worker chunk failed (worker exited: exit status: 101)";
    let panics = |stderr: &str| stderr.matches("UNLACE_JOBS_FAULT: injected panic").count();

    let (got, stderr, ok) = fauxware_pooled_with_fault("spawn:0", "0");
    assert!(!ok, "a run that decompiled nothing must fail:\n{stderr}");
    every_record_failed(&got, "cannot spawn worker");
    assert!(
        recovered_count(&stderr).is_none() && !stderr.contains("failed again"),
        "{stderr}"
    );

    let (got, stderr, ok) = fauxware_pooled_with_fault("panic:0x40071d,spawn:1", "0");
    assert!(!ok, "{stderr}");
    every_record_failed(&got, crashed);
    let could_not_start = "; not re-run: its re-run could not start (cannot spawn";
    assert_eq!(got.matches(could_not_start).count(), total, "{got}");
    assert_eq!(
        panics(&stderr),
        1,
        "no re-run could start, so nothing ran twice:\n{stderr}"
    );

    let (got, stderr, ok) = fauxware_pooled_with_fault("panic:*", "0");
    assert!(!ok, "{stderr}");
    every_record_failed(&got, crashed);
    assert_eq!(
        panics(&stderr),
        10,
        "the chunk's death, main, then eight bystanders:\n{stderr}"
    );
    assert!(
        stderr.contains("9 of them failed again when re-run on their own."),
        "{stderr}"
    );
    let given_up = "; not re-run: most functions re-run from its chunk failed again";
    assert_eq!(got.matches(given_up).count(), total - 9, "{got}");
    assert!(!stderr.contains("not re-run while that lasts"), "{stderr}");

    // One function per chunk on two threads: every chunk dies and so does its
    // re-run, nothing is ever delivered, so no re-run starts after 16 have
    // failed (17 when the other thread had one under way).
    let bin = fauxware();
    let sp = specs();
    let args = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
        "--jobs",
        "2",
        "--jobs-chunk",
        "1",
    ];
    let cap = Duration::from_secs(240);
    let (got, stderr, ok) =
        run_unlace_env_with_timeout(&args, &[("UNLACE_JOBS_FAULT", "panic:*")], cap)
            .expect("workers that die on everything wedged the pool");
    assert!(!ok, "{stderr}");
    every_record_failed(&got, crashed);
    let reruns = panics(&stderr) - total;
    assert!(
        (16..=17).contains(&reruns),
        "16 or 17 failed re-runs, not {reruns}:\n{stderr}"
    );
    assert_eq!(
        stderr.matches("are not re-run while that lasts").count(),
        1,
        "{stderr}"
    );
    let run_stopped = "; not re-run: re-runs in this run had failed more often than workers had";
    assert_eq!(got.matches(run_stopped).count(), total - reruns, "{got}");
}

/// A worker that dies in its own load has opened no chunk. An allocation
/// refused while N workers load at once does that: Rust aborts, which Windows
/// reports as `0xc0000409`. That worker's whole chunk used to be recorded as
/// failed and never re-run, although the parent and every other worker load the
/// same binary fine (the shape of issue #1039's 188 lost functions, each of which
/// decompiled cleanly on its own). The chunk is now re-run
/// on a fresh worker and nothing is lost. A load that fails every time costs one
/// extra load per chunk until 16 re-runs have failed with nothing delivered.
#[test]
fn jobs_a_worker_that_dies_in_its_load_loses_nothing() {
    let serial = fauxware_serial_json();
    let total = json_records(&serial).len();
    let loads = |stderr: &str| stderr.matches("UNLACE_JOBS_FAULT").count();

    let (got, stderr, ok) = fauxware_pooled_with_fault("load-abort:1", "0");
    assert!(ok, "{stderr}");
    assert_eq!(got, serial, "a recovered run must be the serial document");
    assert_eq!(loads(&stderr), 1, "{stderr}");
    assert_eq!(recovered_count(&stderr), Some(total), "{stderr}");
    assert!(
        !stderr.contains("have no result"),
        "nothing was lost:\n{stderr}"
    );

    let aborted = "\"error\": \"worker chunk failed (worker exited: signal: 6";
    let (got, stderr, ok) = fauxware_pooled_with_fault("load-abort:*", "0");
    assert!(!ok, "{stderr}");
    let records = json_records(&got);
    assert_eq!(records.len(), total, "{got}");
    for r in &records {
        assert!(
            r.contains(aborted) && r.contains("; not re-run: its re-run could not start"),
            "{r}"
        );
    }
    assert_eq!(
        loads(&stderr),
        2,
        "the chunk's worker, then one re-run that could not start:\n{stderr}"
    );

    let bin = fauxware();
    let sp = specs();
    let args = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
        "--jobs",
        "2",
        "--jobs-chunk",
        "1",
    ];
    let cap = Duration::from_secs(240);
    let (got, stderr, ok) =
        run_unlace_env_with_timeout(&args, &[("UNLACE_JOBS_FAULT", "load-abort:*")], cap)
            .expect("workers that die in every load wedged the pool");
    assert!(!ok, "{stderr}");
    let records = json_records(&got);
    assert_eq!(records.len(), total, "{got}");
    let addresses: std::collections::BTreeSet<u64> = records
        .iter()
        .map(|r| {
            serde_json::from_str::<serde_json::Value>(r).unwrap()["address"]
                .as_u64()
                .unwrap()
        })
        .collect();
    assert_eq!(
        addresses.len(),
        total,
        "every function exactly once:\n{got}"
    );
    let (gate, jobs) = (16, 2);
    let reruns = loads(&stderr) - total;
    assert!(
        (gate..gate + jobs).contains(&reruns),
        "{gate} re-runs that could not start, plus at most one that started alongside the last, not {reruns}:\n{stderr}"
    );
    let could_not_start = "; not re-run: its re-run could not start";
    let run_stopped = "; not re-run: re-runs in this run had failed more often than workers had";
    assert_eq!(got.matches(could_not_start).count(), reruns, "{got}");
    assert_eq!(got.matches(run_stopped).count(), total - reruns, "{got}");
    assert_eq!(
        stderr.matches("are not re-run while that lasts").count(),
        1,
        "{stderr}"
    );
}
