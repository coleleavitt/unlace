//! Watchdog and memory-limit stops; the batch continues past them.

use super::*;

/// `big` in `tests/hang-repro/escaped_locals` hands each of 700 stack structs
/// to a call, so heritage places one INDIRECT per stack range per call — about
/// a million of them, 2.6 GB and 15 s even with a 1 s budget while that
/// placement ignored the watchdog. It now stops at the deadline like every
/// other probed loop.
#[test]
fn watchdog_stops_heritage_guard_placement() {
    let bin = repo_root().join("tests/hang-repro/escaped_locals");
    let start = Instant::now();
    let (stdout, stderr, _) = run_unlace_with_timeout(
        &[
            "decompile-all",
            bin.to_str().unwrap(),
            "--functions",
            "big",
            "--json",
            "--max-fn-seconds",
            "1",
            "--sleighpath",
            &specs(),
        ],
        Duration::from_secs(300),
    )
    .expect("decompile-all did not terminate within the 300s outer bound");
    let elapsed = start.elapsed();
    assert!(
        stdout.contains("per-function decompile budget exceeded (1 s)"),
        "expected the watchdog error record:\n{stdout}\n{stderr}"
    );
    assert!(
        elapsed < Duration::from_secs(10),
        "the 1 s watchdog took {elapsed:?} to stop big"
    );
}

/// A chain of conditional updates spends its budget inside the region structurer.
#[test]
fn watchdog_stops_region_structuring_and_the_batch_continues() {
    let mut bytes = vec![0x89, 0xf8];
    for i in 0..1000u32 {
        bytes.push(0xa9);
        bytes.extend_from_slice(&(1u32 << (i % 16)).to_le_bytes());
        bytes.extend_from_slice(&[0x74, 0x0b, 0x69, 0xc0]);
        bytes.extend_from_slice(&(3 + 2 * (i % 61)).to_le_bytes());
        bytes.push(0x05);
        bytes.extend_from_slice(&(i + 1).to_le_bytes());
        bytes.push(0x35);
        bytes.extend_from_slice(&(i + 1).to_le_bytes());
    }
    bytes.push(0xc3);
    let after = format!("0x{:x}", 0x1000 + bytes.len());
    bytes.extend_from_slice(&[0x8d, 0x47, 0x01, 0xc3]);
    let path = common::scratch_file("region-watchdog", "bin");
    std::fs::write(&path, bytes).unwrap();
    let start = Instant::now();
    let result = run_unlace_with_timeout(
        &[
            "decompile-all",
            path.to_str().unwrap(),
            "--raw-image",
            "--target",
            "x86:LE:64:default",
            "--base",
            "0x1000",
            "--entry",
            "0x1000",
            "--entry",
            &after,
            "--define-function",
            &format!("0x1000-{after}=stress"),
            "--define-function",
            &format!("{after}=after"),
            "--json",
            "--jobs",
            "1",
            "--max-fn-seconds",
            "1",
            "--max-fn-memory",
            "512",
            "--option",
            "regionstructure",
            "on",
            "--sleighpath",
            &specs(),
        ],
        Duration::from_secs(15),
    );
    let elapsed = start.elapsed();
    std::fs::remove_file(path).unwrap();
    let (stdout, stderr, _) = result.expect("region structuring exceeded the 15s outer bound");
    let doc: serde_json::Value = serde_json::from_str(&stdout).expect(&stderr);
    let functions = doc["functions"].as_array().unwrap();
    let stress = functions.iter().find(|f| f["name"] == "stress").unwrap();
    let error = stress["error"].as_str().unwrap_or_default();
    assert!(
        error.starts_with("per-function decompile budget exceeded (1 s) in "),
        "{stdout}"
    );
    assert!(stress["code"].is_null(), "{stdout}");
    let after = functions.iter().find(|f| f["name"] == "after").unwrap();
    assert!(after["error"].is_null(), "{stdout}");
    assert!(
        after["code"].as_str().unwrap().contains("return"),
        "{stdout}"
    );
    assert!(
        elapsed < Duration::from_secs(10),
        "the 1 s watchdog took {elapsed:?} to stop stress"
    );
}

/// `--max-fn-memory` stops `big` in `tests/hang-repro/escaped_locals` once its
/// process passes the limit, records that as `big`'s error, and the batch goes
/// on to decompile `after`: in process, through a worker pool, and on the
/// `unlace decompile` text surface, whose engine runs in `decomp_dbg`.
#[test]
fn memory_limit_stops_one_function_and_the_batch_continues() {
    let bin = repo_root().join("tests/hang-repro/escaped_locals");
    let bin = bin.to_str().unwrap();
    let sp = specs();
    let error = "per-function memory limit exceeded (300 MiB)";
    for jobs in ["1", "2"] {
        let (stdout, stderr, ok) = run_unlace_with_timeout(
            &[
                "decompile-all",
                bin,
                "--json",
                "--max-fn-seconds",
                "0",
                "--max-fn-memory",
                "300",
                "--jobs",
                jobs,
                "--sleighpath",
                &sp,
            ],
            Duration::from_secs(300),
        )
        .expect("decompile-all did not terminate within the 300s outer bound");
        assert!(ok, "--jobs {jobs}: {stderr}");
        let doc: serde_json::Value = serde_json::from_str(&stdout).unwrap();
        let row = |name: &str| {
            doc["functions"]
                .as_array()
                .unwrap()
                .iter()
                .find(|r| r["name"] == name)
                .unwrap_or_else(|| panic!("--jobs {jobs}: no {name} record:\n{stdout}"))
                .clone()
        };
        assert_eq!(row("big")["error"], error, "--jobs {jobs}");
        assert_eq!(
            row("after")["error"],
            serde_json::Value::Null,
            "--jobs {jobs}"
        );
        assert!(
            row("after")["code"]
                .as_str()
                .unwrap()
                .contains("return a0 * 3 + 1;"),
            "--jobs {jobs}: {stdout}"
        );
    }
    let (_, stderr, ok) = run_unlace_with_timeout(
        &[
            "decompile",
            bin,
            "big",
            "--max-fn-memory",
            "300",
            "--sleighpath",
            &sp,
        ],
        Duration::from_secs(300),
    )
    .expect("decompile did not terminate within the 300s outer bound");
    assert!(!ok && stderr.contains(error), "{stderr}");
}

/// A limit below what the process already holds after its load does not stop
/// ordinary functions: none of them adds 64 MiB, so a long batch's creep cannot
/// fail them. A limit nothing reaches changes nothing either, and the value is
/// MiB, not a size with a unit.
#[test]
fn ordinary_functions_never_trip_the_memory_limit() {
    let bin = fauxware();
    let sp = specs();
    let base = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ];
    let (plain, stderr, ok) = run_unlace(&base);
    assert!(ok, "{stderr}");
    for limit in ["1", "65536"] {
        let limited: Vec<&str> = base
            .iter()
            .copied()
            .chain(["--max-fn-memory", limit])
            .collect();
        let (with_limit, stderr, ok) = run_unlace(&limited);
        assert!(ok, "{stderr}");
        assert_eq!(plain, with_limit, "--max-fn-memory {limit}");
    }
    let unit: Vec<&str> = base
        .iter()
        .copied()
        .chain(["--max-fn-memory", "6G"])
        .collect();
    let (_, stderr, ok) = run_unlace(&unit);
    assert!(
        !ok && stderr.contains("invalid --max-fn-memory value \"6G\""),
        "{stderr}"
    );
}

/// Without `--max-fn-memory`, a run under a capped cgroup takes the cgroup
/// default, the serial run, every `--jobs` worker and `unlace decompile` alike:
/// with a margin of max(512 MiB, 10%) of the cap, a function that has grown by
/// the margin is stopped once the cgroup holds more than its cap less it, which
/// is 512 MiB of a faked 1 GiB cap that is already full. The same cap with room left stops nothing (`big` then runs
/// into its 1 s watchdog instead), and an explicit value, `0` included, wins.
#[test]
fn the_memory_limit_defaults_to_the_cgroup_cap() {
    let Some(own) = std::fs::read_to_string("/proc/self/cgroup")
        .ok()
        .and_then(|m| {
            m.lines()
                .find_map(|l| l.strip_prefix("0::").map(str::to_string))
        })
    else {
        return;
    };
    let bin = repo_root().join("tests/hang-repro/escaped_locals");
    let bin = bin.to_str().unwrap();
    let sp = specs();
    let watchdog = "per-function decompile budget exceeded (1 s)";
    for (current, extra, error) in [
        (
            "1073741824",
            &[][..],
            "per-function memory limit exceeded (512 MiB)",
        ),
        (
            "1073741824",
            &["--jobs", "2"][..],
            "per-function memory limit exceeded (512 MiB)",
        ),
        (
            "1073741824",
            &["--max-fn-memory", "300"][..],
            "per-function memory limit exceeded (300 MiB)",
        ),
        (
            "1073741824",
            &["--max-fn-memory", "0", "--max-fn-seconds", "1"][..],
            watchdog,
        ),
        ("104857600", &["--max-fn-seconds", "1"][..], watchdog),
        (
            "104857600",
            &["--jobs", "2", "--max-fn-seconds", "1"][..],
            watchdog,
        ),
    ] {
        let root = tempfile::tempdir().unwrap();
        let leaf = root.path().join(own.trim_start_matches('/'));
        std::fs::create_dir_all(&leaf).unwrap();
        std::fs::write(leaf.join("memory.max"), "1073741824\n").unwrap();
        std::fs::write(leaf.join("memory.current"), format!("{current}\n")).unwrap();
        let env = [("UNLACE_CGROUP_ROOT", root.path().to_str().unwrap())];
        let mut args = vec!["decompile-all", bin, "--json", "--sleighpath", &sp];
        if !extra.contains(&"--max-fn-seconds") {
            args.extend_from_slice(&["--max-fn-seconds", "0"]);
        }
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) =
            run_unlace_env_with_timeout(&args, &env, Duration::from_secs(300))
                .expect("decompile-all did not terminate within the 300s outer bound");
        assert!(ok, "{current} {extra:?}: {stderr}");
        assert!(
            stdout.contains(error),
            "{current} {extra:?}: expected {error}:\n{stdout}"
        );
        assert!(
            stdout.contains("return a0 * 3 + 1;"),
            "{current} {extra:?}: after must decompile:\n{stdout}"
        );
        if error == watchdog {
            assert!(
                !stdout.contains("memory limit exceeded"),
                "{current} {extra:?}:\n{stdout}"
            );
        }
        if current == "1073741824" && extra.is_empty() {
            let (_, stderr, ok) = run_unlace_env_with_timeout(
                &["decompile", bin, "big", "--sleighpath", &sp],
                &env,
                Duration::from_secs(300),
            )
            .expect("decompile did not terminate within the 300s outer bound");
            assert!(!ok && stderr.contains(error), "{stderr}");
        }
    }
}

/// The past-pathological function of the stripped-ELF hang repro now
/// CONVERGES: `sub_1bd04` @ 0x1bd04 used to spin forever (100% CPU, no output)
/// in a condconst↔lowered-switch-repair fixpoint tug-of-war
/// (`unlace_repair_lowered_switch_inputs` mis-classified the constant that
/// `ActionConditionalConst` legitimately installed on the synthetic BRANCHIND
/// as a broken input, re-pointing it at the register def every heritage pass).
/// With the repair's healthy-input test accepting heritage-known Varnodes the
/// pipeline converges, so the DEFAULT watchdog budget must never fire here:
/// the function decompiles with non-null `code` and null `error`.
///
/// This is the convergence-regression gate: if the fixpoint bug returns, the
/// default 120s budget turns it into a per-function error (failing the
/// `"error": null` assertion) inside the generous 300s outer cap — visible,
/// never a hung CI.  The watchdog *mechanism* stays covered deterministically
/// by `unlace-decomp`'s `repeatapply_deadline_bounds_nonconverging_action` unit
/// test (an already-expired deadline bounding a never-converging repeatapply
/// loop).
#[test]
fn decompile_all_converges_on_past_pathological_function() {
    let bin = hang_repro();
    let res = run_unlace_with_timeout(
        &[
            "decompile-all",
            &bin,
            "--addr",
            "0x1bd04",
            "--json",
            "--sleighpath",
            &specs(),
            "--mode",
            "reliable",
        ],
        Duration::from_secs(300),
    );
    let (stdout, stderr, ok) = match res {
        Some(t) => t,
        None => panic!(
            "unlace decompile-all did not terminate within the 300s outer bound — \
             the 0x1bd04 convergence fix has regressed AND the default \
             --max-fn-seconds watchdog is not firing"
        ),
    };
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    // Shape assertions (no JSON dep): a well-formed single-function document
    // whose one record decompiled cleanly (non-null code, null error).
    let trimmed = stdout.trim();
    assert!(
        trimmed.starts_with('{') && trimmed.ends_with('}'),
        "output is not a JSON object:\n{stdout}"
    );
    assert!(
        stdout.contains("\"count\": 1"),
        "expected count 1:\n{stdout}"
    );
    assert!(
        stdout.contains("\"address_hex\": \"0x1bd04\""),
        "missing the 0x1bd04 record:\n{stdout}"
    );
    assert!(
        stdout.contains("\"error\": null"),
        "sub_1bd04 must decompile cleanly now (the convergence fix regressed?):\n{stdout}"
    );
    assert!(
        stdout.contains("\"code\": \""),
        "sub_1bd04 must emit code (the convergence fix regressed?):\n{stdout}"
    );
    assert!(
        !stdout.contains("budget exceeded"),
        "the watchdog must not fire on the fixed function:\n{stdout}"
    );
}

/// Watchdog control: a healthy function in the SAME hang-repro binary
/// decompiles normally under the default budget — `code` non-null, `error`
/// null — so the watchdog demonstrably fires only on pathological input.
#[test]
fn decompile_all_watchdog_quiet_on_healthy_function() {
    let bin = hang_repro();
    // 0x5020 is a tiny PLT-style thunk (`sub_5020`) that decompiles in
    // milliseconds on a release build; the default 120s budget applies.
    let res = run_unlace_with_timeout(
        &[
            "decompile-all",
            &bin,
            "--addr",
            "0x5020",
            "--json",
            "--sleighpath",
            &specs(),
            "--mode",
            "reliable",
        ],
        Duration::from_secs(300),
    );
    let (stdout, stderr, ok) = match res {
        Some(t) => t,
        None => panic!("unlace decompile-all on a healthy function did not terminate in 300s"),
    };
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        stdout.contains("\"count\": 1"),
        "expected count 1:\n{stdout}"
    );
    assert!(
        stdout.contains("\"error\": null"),
        "healthy function must have null error:\n{stdout}"
    );
    assert!(
        stdout.contains("\"code\": \""),
        "healthy function must emit code:\n{stdout}"
    );
    assert!(
        !stdout.contains("budget exceeded"),
        "watchdog must not fire on a healthy function:\n{stdout}"
    );
}
