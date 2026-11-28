//! `--jobs N`: the decode lanes.

use super::*;

/// Everything the walk says about itself -- the plan line, the stats line, the
/// self-check -- removed, so the rest of stderr can be compared byte for byte
/// against a serial run's.
fn without_the_plan_line(stderr: &str) -> String {
    stderr
        .lines()
        .filter(|l| !l.starts_with("[unlace --jobs]"))
        .map(|l| format!("{l}\n"))
        .collect()
}

/// The plan line is printed BEFORE the walk and is not withdrawn when the lanes
/// fall back, so on its own it proves only that the flag was parsed. What proves
/// the document came off the lanes is the absence of a fallback line plus the
/// stats line, which only a completed parallel walk reaches.
fn assert_lanes_produced_it(stderr: &str, what: &str) {
    assert!(
        !stderr.contains("[unlace --jobs] decode: serial ("),
        "{what} fell back to the serial walk, so the comparison above is vacuous:\n{stderr}"
    );
    let stats = stderr
        .lines()
        .find(|l| l.starts_with("[unlace --jobs] decode stats:"))
        .unwrap_or_else(|| panic!("{what} printed no stats line:\n{stderr}"));
    assert!(
        stats.contains(" rounds="),
        "{what}: no round count in `{stats}`"
    );
    let decodes: usize = stats
        .split_whitespace()
        .find_map(|f| f.strip_prefix("decodes="))
        .and_then(|n| n.parse().ok())
        .unwrap_or_else(|| panic!("{what}: no decode count in `{stats}`"));
    assert!(
        decodes > 0,
        "{what}: the lanes decoded nothing -- `{stats}`"
    );
}

/// The decode lanes' whole contract: the inventory must not depend on how many
/// threads decoded it.  The size floor is lowered so the lanes really run on an
/// in-repo fixture -- without it every assertion here would be a serial run
/// agreeing with a serial run -- and the plan line is asserted, so a silent
/// refusal cannot read as a pass.
#[test]
fn jobs_decode_lanes_are_byte_identical_to_serial() {
    let bin = fauxware();
    let sp = specs();
    let lanes_on = [
        ("UNLACE_DECODE_MIN_BYTES", "0"),
        ("UNLACE_DECODE_STATS", "1"),
    ];
    let (want, want_err, ok) = run_unlace(&["functions", &bin, "--json", "--sleighpath", &sp]);
    if !ok {
        panic!("unlace functions failed: {want_err}");
    }
    assert!(
        want.contains("\"name\""),
        "the serial run enumerated nothing:\n{want}"
    );
    assert!(
        !want_err.contains("[unlace --jobs]"),
        "`--jobs` absent must print no plan line at all:\n{want_err}"
    );

    for jobs in ["1", "2", "3", "4", "8", "auto"] {
        let args = [
            "functions",
            &bin,
            "--json",
            "--sleighpath",
            &sp,
            "--jobs",
            jobs,
        ];
        let (got, stderr, ok) = run_unlace_env(&args, &lanes_on);
        assert!(ok, "unlace functions --jobs {jobs} failed: {stderr}");
        assert_eq!(got, want, "--jobs {jobs} moved the inventory");
        assert_eq!(
            without_the_plan_line(&stderr),
            without_the_plan_line(&want_err),
            "--jobs {jobs} moved stderr beyond its own plan line"
        );
        if jobs == "1" {
            assert!(
                !stderr.contains("[unlace --jobs]"),
                "`--jobs 1` is the serial path and says nothing:\n{stderr}"
            );
        } else {
            assert!(
                stderr.contains("[unlace --jobs] decode:") && stderr.contains(" lanes, "),
                "--jobs {jobs} never reached the lanes:\n{stderr}"
            );
            assert_lanes_produced_it(&stderr, &format!("--jobs {jobs}"));
        }
    }

    // The floor itself: without the override the same flag declines, and still
    // produces the same document.
    let (got, stderr, ok) = run_unlace(&[
        "functions",
        &bin,
        "--json",
        "--sleighpath",
        &sp,
        "--jobs",
        "8",
    ]);
    assert!(ok, "unlace functions --jobs 8 failed: {stderr}");
    assert_eq!(got, want, "the refused path moved the inventory");
    assert!(
        stderr.contains("[unlace --jobs] decode: serial (executable image too small)"),
        "a fixture under the size floor must say why it declined:\n{stderr}"
    );
}

/// A language whose constructors carry `globalset` must decline: a decode there
/// writes the shared context database at another address.  Byte-identity on ARM
/// rests entirely on this, so the decline is asserted, not assumed.
#[test]
fn jobs_decode_lanes_decline_on_a_context_committing_language() {
    let bin = arm_thumb();
    let sp = specs();
    let args = ["functions", &bin, "--json", "--sleighpath", &sp];
    let (want, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let mut with_jobs = args.to_vec();
    with_jobs.extend_from_slice(&["--jobs", "8"]);
    let (got, stderr, ok) = run_unlace_env(&with_jobs, &[("UNLACE_DECODE_MIN_BYTES", "0")]);
    assert!(ok, "unlace functions --jobs 8 failed on ARM: {stderr}");
    assert_eq!(got, want, "the ARM decline moved the inventory");
    assert!(
        stderr.contains("[unlace --jobs] decode: serial (language commits context)"),
        "ARM must decline with the language reason:\n{stderr}"
    );
}

/// How long a fault-injected run may take before it is a deadlock rather than a
/// slow fixture. fauxware walks in well under a second either way.
const FAULT_CAP: Duration = Duration::from_secs(180);

/// A lane that dies must cost speed, not correctness: the fallback re-walks
/// serially and says so.
#[test]
fn a_dead_lane_falls_back_to_the_serial_walk() {
    let bin = fauxware();
    let sp = specs();
    let args = ["functions", &bin, "--json", "--sleighpath", &sp];
    let (want, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let mut with_jobs = args.to_vec();
    with_jobs.extend_from_slice(&["--jobs", "4"]);
    for lane in ["0", "2"] {
        let (got, stderr, ok) = run_unlace_env_with_timeout(
            &with_jobs,
            &[
                ("UNLACE_DECODE_MIN_BYTES", "0"),
                ("UNLACE_DECODE_FAULT", lane),
            ],
            FAULT_CAP,
        )
        .unwrap_or_else(|| panic!("lane {lane}'s fault deadlocked the run"));
        assert!(
            ok,
            "a lane panic must not fail the run (lane {lane}): {stderr}"
        );
        assert_eq!(
            got, want,
            "the serial fallback moved the inventory (lane {lane})"
        );
        assert!(
            stderr.contains("[unlace --jobs] decode: serial (lane fault)"),
            "lane {lane}'s panic must be reported as a fallback:\n{stderr}"
        );
        assert!(
            !stderr.contains("panicked at"),
            "the fallback is the report; the runtime's panic block must not reach the user:\n\
             {stderr}"
        );
    }
}

/// `decompile-all --jobs N` sizes both the decode lanes (in the parent's load)
/// and the worker pool (afterwards).  The document must survive both.
#[test]
fn jobs_decode_lanes_agree_with_serial_on_decompile_all() {
    let bin = fauxware();
    let sp = specs();
    let base: Vec<&str> = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    let mut args = base.clone();
    args.extend_from_slice(&["--jobs", "4"]);
    let (got, stderr, ok) = run_unlace_env(
        &args,
        &[
            ("UNLACE_DECODE_MIN_BYTES", "0"),
            ("UNLACE_DECODE_STATS", "1"),
        ],
    );
    assert!(ok, "unlace decompile-all --jobs 4 failed: {stderr}");
    assert_eq!(got, want, "--jobs 4 moved the document");
    assert!(
        stderr.contains("[unlace --jobs] decode:") && stderr.contains(" lanes, "),
        "the parent's load must have run on lanes:\n{stderr}"
    );
    assert_lanes_produced_it(&stderr, "decompile-all --jobs 4");
}

/// A spawn the OS refuses is the one lane failure that cannot report itself: the
/// lanes already parked at the first barrier are joined by `thread::scope`
/// BEFORE the panic resumes, so an unguarded spawn hangs the process forever.
/// It must instead be a refusal like any other.
#[test]
fn a_refused_lane_spawn_falls_back_to_the_serial_walk() {
    let bin = fauxware();
    let sp = specs();
    let args = ["functions", &bin, "--json", "--sleighpath", &sp];
    let (want, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let mut with_jobs = args.to_vec();
    with_jobs.extend_from_slice(&["--jobs", "4"]);
    // Lane 1 is the first spawn (lane 0 is the calling thread), lane 3 the last:
    // the refusal has to release however many lanes are already at the barrier.
    for lane in ["1", "3"] {
        let (got, stderr, ok) = run_unlace_env_with_timeout(
            &with_jobs,
            &[
                ("UNLACE_DECODE_MIN_BYTES", "0"),
                ("UNLACE_DECODE_FAULT", &format!("spawn:{lane}")),
            ],
            FAULT_CAP,
        )
        .unwrap_or_else(|| panic!("a refused spawn at lane {lane} deadlocked the run"));
        assert!(
            ok,
            "a refused spawn must not fail the run (lane {lane}): {stderr}"
        );
        assert_eq!(
            got, want,
            "the serial fallback moved the inventory (lane {lane})"
        );
        assert!(
            stderr.contains("[unlace --jobs] decode: 4 lanes, "),
            "the plan was announced before the spawn failed:\n{stderr}"
        );
        assert!(
            stderr.contains("[unlace --jobs] decode: serial (thread spawn failed)"),
            "a refused spawn at lane {lane} must be reported as a fallback:\n{stderr}"
        );
    }
}

/// `--raw-image` and `--assert` are worker-POOL policy: `unlace functions` never
/// spawns one, so `--jobs` there is only the decode lanes and neither
/// combination may be refused. A raw image's discovery (`rawdiscover`) is a
/// serial sweep and descent with no lanes to hand work to, so `--jobs` is
/// simply inert.
#[test]
fn functions_takes_jobs_with_a_raw_image() {
    let bin = fauxware();
    let sp = specs();
    let args = [
        "functions",
        &bin,
        "--json",
        "--sleighpath",
        &sp,
        "--raw-image",
        "--target",
        "x86:LE:64:default",
        "--base",
        "0x400000",
        "--entry",
        "0x400580",
        "--jobs",
        "4",
    ];
    let (got, stderr, ok) = run_unlace_env(&args, &[("UNLACE_DECODE_MIN_BYTES", "0")]);
    assert!(
        ok,
        "functions --raw-image --jobs 4 must not be refused: {stderr}"
    );
    assert!(
        got.contains("\"functions\""),
        "the raw image enumerated nothing:\n{got}"
    );
    assert!(
        !stderr.contains("does not apply to --raw-image"),
        "the pool's raw-image refusal must not fire on a surface with no pool:\n{stderr}"
    );
    assert!(
        stderr
            .contains("[unlace --jobs] decode: serial (a raw image's discovery walk has no lanes)"),
        "a raw image's discovery walk takes no decode lanes, and must say so rather than \
         accept the flag and do nothing:\n{stderr}"
    );

    // The pool surface keeps the refusal: there a raw image really is a policy
    // the workers cannot carry.
    let (_, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--json",
        "--sleighpath",
        &sp,
        "--raw-image",
        "--target",
        "x86:LE:64:default",
        "--base",
        "0x400000",
        "--entry",
        "0x400580",
        "--jobs",
        "4",
    ]);
    assert!(
        !ok && stderr.contains("does not apply to --raw-image"),
        "{stderr}"
    );
}

/// `--assert bytes` patches the loader's own segment bytes before the plan takes
/// its share of them, so the lanes read the overlay through the very `Arc` the
/// parent patched -- which is what the shared-bytes gate exists to guarantee.
/// The answer must match a serial run of the same overlaid load, and differ from
/// the unpatched one.
#[test]
fn functions_takes_jobs_with_an_assert_overlay() {
    let bin = fauxware();
    let sp = specs();
    // `main`'s `CALL authenticate` at 0x4007ae, re-pointed into the middle of
    // `authenticate` -- so `authenticate` loses its only caller and the
    // orientation document's `no callers` count moves.
    let overlay = "bytes 0x4007af bdfeffff";
    let args = [
        "functions",
        &bin,
        "--summary",
        "--sleighpath",
        &sp,
        "--assert",
        overlay,
        "--jobs",
        "4",
    ];
    let (got, stderr, ok) = run_unlace_env(
        &args,
        &[
            ("UNLACE_DECODE_MIN_BYTES", "0"),
            ("UNLACE_DECODE_STATS", "1"),
        ],
    );
    assert!(
        ok,
        "functions --assert --jobs 4 must not be refused: {stderr}"
    );
    assert!(
        stderr.contains("[unlace --jobs] decode: 4 lanes, "),
        "the overlaid load must still reach the lanes:\n{stderr}"
    );
    assert_lanes_produced_it(&stderr, "functions --assert --jobs 4");

    let serial = [
        "functions",
        &bin,
        "--summary",
        "--sleighpath",
        &sp,
        "--assert",
        overlay,
    ];
    let (want, want_err, ok) = run_unlace(&serial);
    assert!(ok, "the serial overlaid run failed: {want_err}");
    assert_eq!(got, want, "--jobs 4 moved the overlaid answer");

    // ...and the overlay really did something, or the equality above is empty.
    let (plain, _, ok) = run_unlace(&["functions", &bin, "--summary", "--sleighpath", &sp]);
    assert!(ok, "the unpatched serial run failed");
    assert_ne!(
        got, plain,
        "the `{overlay}` overlay changed nothing, so it pins nothing"
    );
}
