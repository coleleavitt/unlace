//! `--jobs N`: the worker pool.

use super::*;

fn protoorder_fixture() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_x86_64")
        .to_str()
        .unwrap()
        .to_string()
}

/// The pool's whole contract: the document must not depend on how many processes
/// produced it, or on how the work was cut up between them.  Every job count and
/// chunk size here has to agree with the serial run byte for byte — dispatch
/// order is longest-first, which is deliberately not output order, so a
/// positional merge is the only thing that can make this hold.
///
/// Both runs pass `--option protoorder off`: the serial default decompiles
/// callees first and a worker cannot see another worker's callees
/// ([`jobs_notes_that_the_default_callee_first_order_is_serial_only`]).  The
/// protoorder fixture is one where the default does move the output, so the
/// pin is not vacuous.
#[test]
fn jobs_output_is_byte_identical_to_serial() {
    let sp = specs();
    for bin in [fauxware(), protoorder_fixture()] {
        let base = [
            "decompile-all",
            &bin,
            "--json",
            "--max-fn-seconds",
            "0",
            "--sleighpath",
            &sp,
            "--option",
            "protoorder",
            "off",
        ];
        let (want, stderr, ok) = run_unlace(&base);
        if !ok {
            panic!("unlace decompile-all failed: {stderr}");
        }
        assert!(
            want.contains("\"code\""),
            "the serial run decompiled nothing:\n{want}"
        );

        for (jobs, chunk) in [
            ("2", None),
            ("3", Some("1")),
            ("4", Some("7")),
            ("8", Some("1000")),
        ] {
            let mut args = base.to_vec();
            args.extend_from_slice(&["--jobs", jobs]);
            if let Some(chunk) = chunk {
                args.extend_from_slice(&["--jobs-chunk", chunk]);
            }
            let (got, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all --jobs {jobs} failed: {stderr}");
            assert_eq!(
                got, want,
                "--jobs {jobs} (chunk {chunk:?}) moved the document of {bin}"
            );
            // A run that can take an hour has to say where it is, and it has to say
            // it on stderr — stdout is the document, byte-compared just above.
            assert!(
                stderr.contains("[unlace --jobs]") && stderr.contains("worker process(es)"),
                "--jobs {jobs} reported no plan on stderr:\n{stderr}"
            );
            assert!(
                stderr.contains("[unlace --jobs] done:"),
                "--jobs {jobs} never reported completion:\n{stderr}"
            );
            assert!(
                !stderr.contains("callee-first"),
                "protoorder off still noted:\n{stderr}"
            );
        }
    }
}

/// With the default `protoorder cycles` (on this acyclic fixture the same as
/// `types`), a serial run types `caller`'s argument
/// from `callee`'s own recovery and a pool run cannot: the pool says so on
/// stderr instead of silently producing a different document.
#[test]
fn jobs_notes_that_the_default_callee_first_order_is_serial_only() {
    let bin = protoorder_fixture();
    let sp = specs();
    let base = [
        "decompile-all",
        &bin,
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        &sp,
    ];
    let (serial, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        !stderr.contains("callee-first"),
        "a serial run printed the pool note:\n{stderr}"
    );
    assert!(
        serial.contains("caller(unsigned char *a0,int a1)"),
        "{serial}"
    );
    let mut pooled = base.to_vec();
    pooled.extend_from_slice(&["--jobs", "2"]);
    let (got, stderr, ok) = run_unlace(&pooled);
    assert!(ok, "unlace decompile-all --jobs 2 failed: {stderr}");
    assert!(
        stderr.contains("--jobs decompiles without the callee-first order"),
        "the pool did not say its output can differ:\n{stderr}"
    );
    assert!(got.contains("caller(unsigned long a0,int a1)"), "{got}");
}

/// A narrowed run skips the callee-first order (and its call-graph build) by
/// default, silently; naming the option orders the selection and says that a
/// callee outside it states nothing.
#[test]
fn a_narrowed_run_orders_callees_first_only_when_asked() {
    let bin = protoorder_fixture();
    let sp = specs();
    let base = [
        "decompile-all",
        &bin,
        "--functions",
        "caller,callee",
        "--sleighpath",
        &sp,
    ];
    let (plain, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        !stderr.contains("protoorder"),
        "a default narrowed run printed a note:\n{stderr}"
    );
    assert!(plain.contains("caller(unsigned long a0,int a1)"), "{plain}");
    let mut asked = base.to_vec();
    asked.extend_from_slice(&["--option", "protoorder", "types"]);
    let (got, stderr, ok) = run_unlace(&asked);
    assert!(ok, "{stderr}");
    assert!(
        stderr.contains("note: --option protoorder: 2 of this binary's entries selected"),
        "{stderr}"
    );
    assert!(got.contains("caller(unsigned char *a0,int a1)"), "{got}");
}

/// (unlace `protoorder cycles`) A function that calls itself, or sits in a
/// two-member cycle, states its recovered types under `cycles` and nothing under
/// `types`.  The one call whose arity moves is `argclobber`'s drop of a clobbered
/// trailing argument at a recursive callee whose stated list and body both say
/// the register is free; a callee that forwards the register into its own
/// recursion keeps the argument under both values. `calleevote` is off: by
/// default it gives `wrap` and `wrap2` the `char *` their one caller passes,
/// the other direction.
#[test]
fn recursive_callees_state_their_types_under_cycles() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_cycles_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    for (value, param, rcall) in [
        ("types", "(unsigned long a0)", "rtarget(a0,5,v3);"),
        ("cycles", "(char *a0)", "rtarget(a0,5);"),
    ] {
        let (got, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "protoorder",
            value,
            "--option",
            "calleevote",
            "off",
        ]);
        if !ok {
            panic!("unlace decompile-all --option protoorder {value} failed: {stderr}");
        }
        for f in ["wrap", "wrap2"] {
            assert!(
                got.contains(&format!(" {f}{param}")),
                "{value}: {f}{param} missing:\n{got}"
            );
        }
        assert!(got.contains(rcall), "{value}: {rcall} missing:\n{got}");
        assert!(
            got.contains("rkeep(a0,5,v3);"),
            "{value}: rkeep lost its forwarded argument:\n{got}"
        );
    }
}

/// (unlace `calleevote`) A caller's frame record whose first member is a
/// `char *` is passed as a `char **`. `add` writes a node through it whose word
/// stores a `char *` would print one character at a time, and `drop` reads past
/// the first member, so neither takes it; `advance(&cursor)` does. `mkpipe`
/// keeps the `int *` that `pipe` declares instead of a one-field record.
#[test]
fn a_frame_records_char_pointer_pointer_is_not_its_type() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/calleevote_frame_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    for value in ["types", "fields"] {
        let (got, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "calleevote",
            value,
        ]);
        if !ok {
            panic!("unlace decompile-all --option calleevote {value} failed: {stderr}");
        }
        assert!(
            got.contains("p[1] = 0x506070801020304;"),
            "{value}: the node's word store split:\n{got}"
        );
        assert!(
            !got.contains("] = '\\x"),
            "{value}: a character store:\n{got}"
        );
        assert!(
            !got.contains("drop(char **a0)"),
            "{value}: drop took the frame char **:\n{got}"
        );
        assert!(
            got.contains("int advance(char **a0)"),
            "{value}: advance lost its char **:\n{got}"
        );
        assert!(
            got.contains("int mkpipe(int *a0)"),
            "{value}: mkpipe lost pipe's int *:\n{got}"
        );
    }
}

/// (unlace `callerptr`) A parameter whose own body says nothing about it takes a
/// pointer when every caller passes one: `push`'s callers pass a record, a
/// `strdup` result and a null (`void *`), `remember`'s a literal, a `getenv`
/// result and a null (`char *`). `slot_of` shifts the pointer it is handed,
/// `align8` masks an address it derives from it, and `is_table`, `is_tab2`
/// (behind the forwarder `via`, whose `char *` reaches it as an ordinary
/// `calleevote` statement), `hits` (through `p + i`) and `far_cmp` (through a
/// dozen adds and merges) compare it with the address of a table holding a
/// zero byte, which a `char *` would print as a cut-off string literal, and
/// `off_in` subtracts that address: all of them keep their integers, at -O2
/// and -O0, and `off` keeps every integer.
#[test]
fn a_parameter_every_caller_passes_a_pointer_is_one() {
    let sp = specs();
    for stem in ["callerptr_x86_64", "callerptr_O0_x86_64"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(stem)
            .to_str()
            .unwrap()
            .to_string();
        for (value, push, remember) in [
            ("on", "void push(void *a0)", "void remember(char *a0)"),
            (
                "off",
                "void push(unsigned long a0)",
                "void remember(unsigned long a0)",
            ),
        ] {
            let (got, stderr, ok) = run_unlace(&[
                "decompile-all",
                &bin,
                "--sleighpath",
                &sp,
                "--option",
                "callerptr",
                value,
            ]);
            if !ok {
                panic!("unlace decompile-all {stem} --option callerptr {value} failed: {stderr}");
            }
            assert!(
                got.contains(push),
                "{stem} {value}: `{push}` missing:\n{got}"
            );
            assert!(
                got.contains(remember),
                "{stem} {value}: `{remember}` missing:\n{got}"
            );
            for keeps in [
                "unsigned long slot_of(unsigned long a0)",
                "unsigned long align8(long a0)",
                "bool is_table(long a0)",
                "bool is_tab2(long a0)",
                "int hits(long a0,int a1)",
                "bool far_cmp(long a0)",
                "long off_in(long a0)",
            ] {
                assert!(
                    got.contains(keeps),
                    "{stem} {value}: `{keeps}` missing:\n{got}"
                );
            }
            assert!(
                !got.contains("== \""),
                "{stem} {value}: a table address printed as a literal:\n{got}"
            );
            assert!(
                !got.contains("[-0x"),
                "{stem} {value}: a table address subtracted as a char index:\n{got}"
            );
        }
    }
}

/// (unlace `protoorder cycles` + `structsynth`) The convergence sweep decompiles a
/// self-recursive function again once a later layout supersedes the structure
/// its first decompile minted.  The redo must not read the statement that first
/// decompile made: at its own recursive call it typed the child pointer as the
/// superseded `struct_0` while its parameter took the survivor.  `walk` names
/// one structure, the one `look` names too, under both values.
#[test]
fn a_redone_recursive_function_reads_no_statement_of_its_own() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_cyclestruct_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    for value in ["types", "cycles"] {
        let (got, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "protoorder",
            value,
        ]);
        if !ok {
            panic!("unlace decompile-all --option protoorder {value} failed: {stderr}");
        }
        let chunk = |name: &str| -> String {
            got.split("// Function: ")
                .find(|c| c.starts_with(&format!("{name} @")))
                .unwrap_or_else(|| panic!("{value}: no `{name}` in:\n{got}"))
                .to_string()
        };
        let structs = |text: &str| -> std::collections::BTreeSet<String> {
            let mut out = std::collections::BTreeSet::new();
            let mut rest = text;
            while let Some(at) = rest.find("struct_") {
                let digits: String = rest[at + 7..]
                    .chars()
                    .take_while(|c| c.is_ascii_digit())
                    .collect();
                if !digits.is_empty() {
                    out.insert(format!("struct_{digits}"));
                }
                rest = &rest[at + 7..];
            }
            out
        };
        let walk = structs(&chunk("walk"));
        let look = structs(&chunk("look"));
        assert_eq!(
            walk.len(),
            1,
            "{value}: walk names more than one structure:\n{}",
            chunk("walk")
        );
        assert_eq!(
            walk, look,
            "{value}: walk and look name different structures:\n{got}"
        );
        assert!(
            !chunk("walk").contains(" *)"),
            "{value}: walk casts a pointer:\n{}",
            chunk("walk")
        );
    }
}

/// `--jobs-full-load` gives every worker the parent's own load instead of the
/// inventory hand-off.  It exists as the paranoid option, so it has to agree with
/// the hand-off, not merely with itself.
#[test]
fn jobs_full_load_agrees_with_the_inventory_handoff() {
    let bin = fauxware();
    let sp = specs();
    let base: Vec<&str> = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    let mut args = base.clone();
    args.extend_from_slice(&["--jobs", "3", "--jobs-full-load"]);
    let (got, stderr, ok) = run_unlace(&args);
    assert!(ok, "unlace decompile-all --jobs-full-load failed: {stderr}");
    assert_eq!(got, want, "--jobs-full-load moved the document");
}

/// The sharp case for the inventory hand-off, and the one the byte-identity
/// tests above cannot reach: a **namespaced C++ callee**.  Seeding the parent's
/// inventory into a worker has to be strictly additive, because a name is
/// installed into the scope its `::` path names — re-register an address the
/// worker's own load already named and that address ends up with two function
/// symbols in different scopes, at which point the across-scopes display lookup
/// answers with the other one and `main` prints `sub_401136(...)` where the
/// serial run printed `foo::Bar::baz(...)`.  Preserving callee names is what the
/// hand-off exists for, so it gets a fixture where it can actually fail.
#[test]
fn jobs_preserves_namespaced_cpp_callee_names() {
    let bin = cpp_mangled();
    let sp = specs();
    let base = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
    ];
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        want.contains("foo::Bar::baz("),
        "the fixture no longer calls a namespaced member, so this pins nothing:\n{want}"
    );

    for chunk in ["1", "2", "3"] {
        let mut args = base.to_vec();
        args.extend_from_slice(&["--jobs", "6", "--jobs-chunk", chunk]);
        let (got, stderr, ok) = run_unlace(&args);
        assert!(
            ok,
            "unlace decompile-all --jobs 6 --jobs-chunk {chunk} failed: {stderr}"
        );
        assert_eq!(
            got, want,
            "--jobs-chunk {chunk} moved a namespaced callee name"
        );
    }
}

/// The other half of the surface: `--jobs auto` resolves the worker count from
/// the machine (cores, capped, then trimmed to what free memory holds) instead
/// of the command line, and the plain concatenated-C output has no record
/// framing to hide a mis-ordered merge.  Both have to land on the serial
/// document exactly.
#[test]
fn jobs_auto_and_the_plain_c_surface_match_serial() {
    let bin = fauxware();
    let sp = specs();
    let base: Vec<&str> = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        want.matches("// Function:").count() > 1,
        "the fixture must hold several functions"
    );

    for extra in [
        vec!["--jobs", "auto"],
        vec!["--jobs", "3", "--jobs-chunk", "1"],
    ] {
        let mut args = base.to_vec();
        args.extend_from_slice(&extra);
        let (got, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all {extra:?} failed: {stderr}");
        // Agreeing with the serial document is also what a silent fall back to
        // the serial path would do, so the pool has to be seen coming up.
        assert!(
            stderr.contains("worker process(es)"),
            "{extra:?} ran no pool:\n{stderr}"
        );
        assert_eq!(got, want, "{extra:?} moved the concatenated-C document");
    }
}

/// `--jobs auto` sizes the pool from what a cgroup v2 `memory.max` still
/// leaves, not from the machine's free memory: a faked 1 GiB cap whose cgroup
/// already holds 900 MiB that reclaim cannot free has room for one worker, and
/// the run says which bound it hit. An explicit `--jobs 3` is warned about in
/// the same words and kept.
#[test]
fn jobs_auto_fits_the_cgroup_memory_cap() {
    let Some(own) = std::fs::read_to_string("/proc/self/cgroup")
        .ok()
        .and_then(|m| {
            m.lines()
                .find_map(|l| l.strip_prefix("0::").map(str::to_string))
        })
    else {
        return;
    };
    let root = tempfile::tempdir().unwrap();
    let leaf = root.path().join(own.trim_start_matches('/'));
    std::fs::create_dir_all(&leaf).unwrap();
    std::fs::write(leaf.join("memory.max"), "1073741824\n").unwrap();
    std::fs::write(leaf.join("memory.current"), "943718400\n").unwrap();
    std::fs::write(
        leaf.join("memory.stat"),
        "anon 734003200\nfile 209715200\nactive_file 0\ninactive_file 0\nshmem 209715200\n",
    )
    .unwrap();
    let env = [("UNLACE_CGROUP_ROOT", root.path().to_str().unwrap())];
    let bin = fauxware();
    let sp = specs();
    let base: Vec<&str> = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
    ]
    .into_iter()
    .chain(SERIAL_ORDER_OFF)
    .collect();
    let (want, stderr, ok) = run_unlace_env(&base, &env);
    assert!(ok, "{stderr}");
    let cores = std::thread::available_parallelism().map_or(1, |n| n.get());
    for jobs in ["auto", "3"] {
        if jobs == "auto" && cores < 2 {
            continue;
        }
        let args: Vec<&str> = base.iter().copied().chain(["--jobs", jobs]).collect();
        let (got, stderr, ok) = run_unlace_env(&args, &env);
        assert!(ok, "--jobs {jobs}: {stderr}");
        assert_eq!(got, want, "--jobs {jobs} moved the document");
        let (said, workers) = if jobs == "auto" {
            (
                "GB is free under a cgroup's memory.max. Pass --jobs N",
                "1 worker process(es)",
            )
        } else {
            (
                "GB free under a cgroup's memory.max; expect",
                "3 worker process(es)",
            )
        };
        assert!(
            stderr.contains(said),
            "--jobs {jobs}: expected {said:?}:\n{stderr}"
        );
        assert!(
            stderr.contains(workers),
            "--jobs {jobs}: expected {workers:?}:\n{stderr}"
        );
    }
}

/// A sharded run names every synthesized structure as the serial run does, on
/// both surfaces and at every job count. `structsynthchain_x86_64` takes the
/// convergence sweep (`fb` is decided again onto `fc`'s structure while `fa`
/// keeps the superseded one), `itaniumrtti_x86_64.so` mints five structures,
/// the i386 PE is a second architecture and loader, and in
/// `structsynth_teb_pe_x86_64.exe` the `TEB` type comes from a function that
/// synthesizes nothing. Every path lands on the same document: the renamed
/// first decompiles, the second decompile with the replayed names that
/// `synth:force` makes every function take, and the one-worker serial path.
///
/// Both sides run `--option protoorder off`: the serial default decompiles
/// callees first and runs the batch convergence sweep, an order a pool cannot
/// take ([`jobs_notes_that_the_default_callee_first_order_is_serial_only`]).
#[test]
fn jobs_names_synthesized_structs_as_the_serial_run_does() {
    let sp = specs();
    for (fixture, pinned) in [
        ("structsynthchain_x86_64", "long fb(struct_1 *a0)"),
        ("itaniumrtti_x86_64.so", "struct_4 *"),
        ("explicit_branch_assertion_pe_i386.exe", "struct_0 *"),
        ("structsynth_teb_pe_x86_64.exe", "TEB *teb;"),
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        for json in [false, true] {
            let mut base = vec![
                "decompile-all",
                bin.as_str(),
                "--max-fn-seconds",
                "0",
                "--sleighpath",
                &sp,
                "--option",
                "protoorder",
                "off",
            ];
            if json {
                base.push("--json");
            }
            let (want, stderr, ok) = run_unlace(&base);
            if !ok {
                panic!("unlace decompile-all {fixture} failed: {stderr}");
            }
            assert!(
                want.contains(pinned),
                "{fixture} stopped synthesizing {pinned:?}"
            );
            assert!(want.contains("struct_0"), "{fixture} stopped synthesizing");
            for pool in [
                &["--jobs", "2", "--jobs-chunk", "1"][..],
                &["--jobs", "4"][..],
            ] {
                let (got, stderr, ok) = run_unlace(&[&base[..], pool].concat());
                assert!(ok, "{fixture} {pool:?} failed: {stderr}");
                assert!(
                    stderr.contains("named as --jobs 1 names them"),
                    "{fixture} {pool:?} never named the structures:\n{stderr}"
                );
                assert!(
                    !stderr.contains("[unlace --jobs] note:"),
                    "{fixture} {pool:?} fell back:\n{stderr}"
                );
                assert_eq!(
                    got, want,
                    "{fixture} {pool:?} (json {json}) moved the document"
                );
            }
            for (fault, says) in [
                ("synth:force", "0 renamed"),
                (
                    "synth:serial",
                    "decompiled again in order by one worker process",
                ),
            ] {
                let (got, stderr, ok) = run_unlace_env(
                    &[&base[..], &["--jobs", "3", "--jobs-chunk", "1"]].concat(),
                    &[("UNLACE_JOBS_FAULT", fault)],
                );
                assert!(ok, "{fixture} {fault} failed: {stderr}");
                assert!(stderr.contains(says), "{fixture} {fault}: {stderr}");
                assert_eq!(got, want, "{fixture} {fault} moved the document");
            }
        }
    }
}

/// The one-worker structsynth path decompiles every function that synthesized
/// in one ordered chunk and holds its records back until the sweep has run, so
/// the frame it writes as each function starts is all the parent sees of it. A
/// function that stalls there is the one blamed, not the chunk's first
/// function, and the window is the warm one: the run does not wait out a
/// program load on top of it. `shapes::Circle::Circle` (`0x14ea`) stalls the second time it starts,
/// which is in the ordered chunk.
#[test]
fn jobs_a_stall_in_the_ordered_structsynth_worker_blames_the_function_that_stalled() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/itaniumrtti_x86_64.so")
        .to_str()
        .unwrap()
        .to_string();
    let args = [
        "decompile-all",
        bin.as_str(),
        "--json",
        "--max-fn-seconds",
        "1",
        "--sleighpath",
        sp.as_str(),
        "--option",
        "protoorder",
        "off",
        "--jobs",
        "2",
    ];
    let started = Instant::now();
    let (got, stderr, ok) = run_unlace_env_with_timeout(
        &args,
        &[("UNLACE_JOBS_FAULT", "synth:serial,stall-again:0x14ea")],
        Duration::from_secs(240),
    )
    .expect("the stalled ordered chunk wedged the pool");
    assert!(ok, "{stderr}");
    assert!(
        stderr.contains("in one ordered chunk, 1 worker process"),
        "{stderr}"
    );
    assert_eq!(
        stderr
            .matches("UNLACE_JOBS_FAULT: injected stall at 0x14ea")
            .count(),
        1,
        "{stderr}"
    );
    assert!(
        started.elapsed() < Duration::from_secs(45),
        "the stall waited out a cold window:\n{stderr}"
    );
    let records = json_records(&got);
    let failed: Vec<String> = records
        .iter()
        .filter(|r| r.contains("\"error\": \""))
        .map(|r| record_name(r))
        .collect();
    assert_eq!(
        failed,
        ["shapes::Circle::Circle"],
        "only the function that stalled is lost:\n{stderr}"
    );
    let lost = records
        .iter()
        .find(|r| record_name(r) == "shapes::Circle::Circle")
        .unwrap();
    assert!(
        lost.contains("\"error\": \"worker stalled past the per-function watchdog (1s)"),
        "{lost}"
    );
    assert!(recovered_count(&stderr).is_some_and(|n| n >= 1), "{stderr}");
}

/// A worker that cannot install the replayed structures takes its chunk down
/// with it. The functions it was given are the record pool's, not lost work:
/// the run decompiles them again by the one-worker serial path instead of
/// keeping the dead worker's `error` records.
#[test]
fn jobs_falls_back_when_a_worker_cannot_install_the_replayed_structures() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/itaniumrtti_x86_64.so")
        .to_str()
        .unwrap()
        .to_string();
    // The serial side runs `--option protoorder off`: the callee-first order is
    // the serial run a pool cannot take, here as everywhere else.
    let base = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
        "--option",
        "protoorder",
        "off",
    ];
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        want.contains("struct_4 *"),
        "the fixture stopped synthesizing"
    );
    let (got, stderr, ok) = run_unlace_env(
        &[&base[..], &["--jobs", "2", "--jobs-chunk", "1"]].concat(),
        &[("UNLACE_JOBS_FAULT", "synth:force,synth:noinstall")],
    );
    assert!(ok, "the run failed: {stderr}");
    assert!(
        stderr.contains("a function failed when decompiled again with the serial names"),
        "no fallback: {stderr}"
    );
    assert_eq!(
        got, want,
        "a worker that could not install the structures moved the document"
    );
}

/// `pebnames` creates the `PEB` type the first time a function reads the PEB,
/// so only the worker that decompiled one holds it, and a synthesized
/// structure with a `PEB *` field cannot be installed in another. The run
/// names its structures by the one-worker serial path instead, and loses no
/// function.
#[test]
fn jobs_falls_back_when_a_structure_holds_a_type_other_workers_lack() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/structsynth_peb_pe_x86_64.exe")
        .to_str()
        .unwrap()
        .to_string();
    let base = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
        "--option",
        "protoorder",
        "off",
    ];
    let (want, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        want.contains("void store_a(struct_0 *a0"),
        "the fixture stopped synthesizing:\n{want}"
    );
    assert!(!want.contains("error"), "{want}");
    for pool in [
        &["--jobs", "2"][..],
        &["--jobs", "4", "--jobs-chunk", "1"][..],
    ] {
        let (got, stderr, ok) = run_unlace(&[&base[..], pool].concat());
        assert!(ok, "{pool:?} failed: {stderr}");
        assert!(
            stderr.contains("a field type another process cannot rebuild"),
            "{pool:?}: {stderr}"
        );
        assert_eq!(got, want, "{pool:?} moved the document");
    }
}

/// `--option structsynth off` still reaches every worker, and a run that asked
/// for it hears nothing about structures.
#[test]
fn jobs_structsynth_off_is_the_serial_structsynth_off_document() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/itaniumrtti_x86_64.so")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let off = [
        "decompile-all",
        bin.as_str(),
        "--max-fn-seconds",
        "0",
        "--sleighpath",
        sp.as_str(),
        "--option",
        "protoorder",
        "off",
        "--option",
        "structsynth",
        "off",
    ];
    let (want, stderr, ok) = run_unlace(&off);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        !want.contains("struct_0"),
        "structsynth off still synthesized"
    );
    let (got, stderr, ok) = run_unlace(&[&off[..], &["--jobs", "2", "--jobs-chunk", "1"]].concat());
    assert!(
        ok,
        "--jobs 2 structsynth-off decompile-all failed: {stderr}"
    );
    assert!(
        !stderr.contains("structsynth"),
        "a structure line for a run that asked for off: {stderr}"
    );
    assert_eq!(
        got, want,
        "--jobs 2 --option structsynth off moved the document"
    );
}

/// A pool cannot honour a policy it cannot express, so the ones it cannot are
/// refused up front rather than silently dropped in the shards — as is a worker
/// or chunk count that is not a count at all.
#[test]
fn jobs_refuses_what_a_pool_cannot_carry() {
    let bin = fauxware();
    let (_, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--json",
        "--jobs",
        "4",
        "--assert",
        "name v1 flag",
        "--sleighpath",
        &specs(),
    ]);
    assert!(!ok, "--assert with --jobs must be refused");
    assert!(
        stderr.contains("--assert and --jobs"),
        "the refusal must say why:\n{stderr}"
    );

    let (_, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--json",
        "--jobs",
        "0",
        "--sleighpath",
        &specs(),
    ]);
    assert!(!ok, "--jobs 0 must be refused");
    assert!(
        stderr.contains("--jobs"),
        "the refusal must name the flag:\n{stderr}"
    );

    let (_, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--json",
        "--jobs",
        "2",
        "--jobs-chunk",
        "0",
        "--sleighpath",
        &specs(),
    ]);
    assert!(
        !ok,
        "--jobs-chunk 0 must be refused, not rounded up to a real chunk"
    );
    assert!(
        stderr.contains("--jobs-chunk"),
        "the refusal must name the flag:\n{stderr}"
    );
}

/// The pool's scratch directory carries the whole program's symbol inventory and
/// every function's decompiled C, so it must not outlive the run.  Its name
/// carries the parent's pid, which is what makes this checkable while sibling
/// tests are running pools of their own.
#[test]
fn jobs_leaves_no_scratch_directory_behind() {
    let bin = fauxware();
    let mut child = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_SLACOMP")
        .env_remove("UNLACE_SLACOMP")
        .args([
            "decompile-all",
            &bin,
            "--json",
            "--max-fn-seconds",
            "0",
            "--jobs",
            "4",
            "--sleighpath",
            &specs(),
        ])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .spawn()
        .expect("failed to spawn the unlace binary");
    let pid = child.id();
    let status = child.wait().expect("wait on the unlace binary");
    assert!(status.success(), "pooled decompilation failed: {status}");
    let mine = format!("unlace-jobs-v2-{pid}-");
    let left: Vec<String> = std::fs::read_dir(std::env::temp_dir())
        .into_iter()
        .flatten()
        .flatten()
        .map(|e| e.file_name().to_string_lossy().into_owned())
        .filter(|n| n.starts_with(&mine))
        .collect();
    assert!(
        left.is_empty(),
        "a finished --jobs run left {left:?} behind"
    );
}

#[test]
fn jobs_preserves_live_scratch_owners_and_reaps_released_locks() {
    let base = tempfile::tempdir().unwrap();
    let legacy = base.path().join("unlace-jobs-4294967295-live");
    let held = base.path().join("unlace-jobs-v2-4294967295-live");
    for dir in [&legacy, &held] {
        std::fs::create_dir(dir).unwrap();
        std::fs::write(dir.join("inventory.spec"), b"live inventory").unwrap();
    }
    let owner = std::fs::File::create(held.join("owner.lock")).unwrap();
    owner.try_lock().unwrap();
    let run = || {
        process::required_output(
            Command::new(env!("CARGO_BIN_EXE_unlace"))
                .env("TMPDIR", base.path())
                .env("TMP", base.path())
                .env("TEMP", base.path())
                .args([
                    "decompile-all",
                    &fauxware(),
                    "--json",
                    "--jobs",
                    "2",
                    "--sleighpath",
                    &specs(),
                ])
                .args(SERIAL_ORDER_OFF),
        )
    };
    let first = run();
    let doc: serde_json::Value = serde_json::from_slice(&first.stdout).unwrap();
    assert_eq!(doc["count"], 21);
    assert!(
        doc["functions"]
            .as_array()
            .unwrap()
            .iter()
            .all(|f| f["error"].is_null())
    );
    for dir in [&legacy, &held] {
        assert_eq!(
            std::fs::read(dir.join("inventory.spec")).unwrap(),
            b"live inventory"
        );
    }
    drop(owner);
    let second = run();
    assert!(!held.exists(), "the released owner must be swept");
    assert!(
        legacy.is_dir(),
        "unprovable legacy ownership must stay untouched"
    );
    assert_eq!(first.stdout, second.stdout);
}

/// Killing the parent must take the pool with it.  `--jobs` is for hour-long
/// runs, so the parent being cancelled or timed out is a normal event, and it
/// used to leave every worker reparented to init with a scratch directory
/// holding the program's symbol inventory and every function's C.  SIGKILL is
/// the case that decides the design: no handler in the parent can cover it, so
/// each worker watches the pipe whose only write end its parent holds.
#[cfg(target_os = "linux")]
#[test]
fn killing_the_parent_takes_the_workers_and_the_scratch_dir_with_it() {
    // Every thread's list: the workers are spawned by the pool threads, so the
    // main thread's own `children` file is empty for the whole run.
    fn children_of(pid: u32) -> Vec<u32> {
        std::fs::read_dir(format!("/proc/{pid}/task"))
            .into_iter()
            .flatten()
            .flatten()
            .filter_map(|task| std::fs::read_to_string(task.path().join("children")).ok())
            .flat_map(|list| {
                list.split_whitespace()
                    .filter_map(|s| s.parse().ok())
                    .collect::<Vec<u32>>()
            })
            .collect()
    }
    fn scratch_of(pid: u32) -> Vec<PathBuf> {
        let mine = format!("unlace-jobs-v2-{pid}-");
        std::fs::read_dir(std::env::temp_dir())
            .into_iter()
            .flatten()
            .flatten()
            .map(|e| e.path())
            .filter(|p| {
                p.file_name()
                    .is_some_and(|n| n.to_string_lossy().starts_with(&mine))
            })
            .collect()
    }

    let bin = hang_repro();
    let mut child = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_SLACOMP")
        .env_remove("UNLACE_SLACOMP")
        .args([
            "decompile-all",
            &bin,
            "--json",
            "--max-fn-seconds",
            "0",
            "--jobs",
            "4",
            "--sleighpath",
            &specs(),
        ])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .spawn()
        .expect("failed to spawn the unlace binary");
    let pid = child.id();

    // Wait for the pool to be genuinely up: a worker running and the scratch
    // directory on disk. Nothing to prove until both exist.
    let deadline = Instant::now() + Duration::from_secs(120);
    let workers = loop {
        let workers = children_of(pid);
        if !workers.is_empty() && !scratch_of(pid).is_empty() {
            break workers;
        }
        if Instant::now() >= deadline || child.try_wait().expect("try_wait").is_some() {
            let _ = child.kill();
            let _ = child.wait();
            panic!("the worker pool did not start before the deadline");
        }
        std::thread::sleep(Duration::from_millis(100));
    };

    child.kill().expect("SIGKILL the pool parent");
    let _ = child.wait();

    let deadline = Instant::now() + Duration::from_secs(60);
    loop {
        let alive: Vec<u32> = workers
            .iter()
            .copied()
            .filter(|w| PathBuf::from(format!("/proc/{w}")).exists())
            .collect();
        let left = scratch_of(pid);
        if alive.is_empty() && left.is_empty() {
            return;
        }
        assert!(
            Instant::now() < deadline,
            "a SIGKILLed parent left workers {alive:?} and scratch {left:?} behind"
        );
        std::thread::sleep(Duration::from_millis(200));
    }
}
