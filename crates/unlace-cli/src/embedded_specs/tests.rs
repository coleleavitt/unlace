use super::*;

const FILES: &[(&str, &[u8])] = &[
    (
        "Ghidra/Processors/x86/data/languages/x86.ldefs",
        b"<language_definitions/>",
    ),
    (
        "Ghidra/Processors/x86/data/languages/x86-64.sla",
        b"\x00sla",
    ),
];

fn sandbox(tag: &str) -> PathBuf {
    let dir = std::env::temp_dir().join(format!(
        "unlace_embedded_specs_{}_{tag}",
        std::process::id()
    ));
    let _ = fs::remove_dir_all(&dir);
    dir
}

#[test]
fn an_unpack_lays_out_the_tree_and_leaves_no_staging() {
    let base = sandbox("layout");
    let dir = unpack(&base, "0123", FILES).expect("unpack");
    assert_eq!(dir, base.join("specs-0123"));
    assert!(dir.join("Ghidra").join("Processors").is_dir());
    for (rel, bytes) in FILES {
        assert_eq!(fs::read(dir.join(rel)).unwrap(), *bytes, "{rel}");
    }
    let mut names: Vec<_> = fs::read_dir(&base)
        .unwrap()
        .map(|e| e.unwrap().file_name())
        .collect();
    names.sort();
    assert_eq!(
        names,
        vec![
            std::ffi::OsString::from(".specs-0123.lock"),
            std::ffi::OsString::from("specs-0123"),
        ]
    );
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn a_finished_tree_is_reused_untouched() {
    let base = sandbox("reuse");
    let dir = unpack(&base, "0123", FILES).expect("first unpack");
    fs::write(dir.join("sentinel"), b"kept").unwrap();
    assert_eq!(unpack(&base, "0123", FILES).expect("second unpack"), dir);
    assert!(
        dir.join("sentinel").is_file(),
        "a finished tree was rewritten"
    );
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn a_tree_without_its_marker_is_replaced() {
    let base = sandbox("partial");
    let dir = base.join("specs-0123");
    fs::create_dir_all(dir.join("Ghidra")).unwrap();
    assert_eq!(unpack(&base, "0123", FILES).expect("unpack"), dir);
    assert!(dir.join(COMPLETE).is_file());
    assert!(dir.join(FILES[1].0).is_file());
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn concurrent_first_runs_settle_on_one_tree() {
    let base = sandbox("race");
    let dirs: Vec<PathBuf> = std::thread::scope(|s| {
        let runs: Vec<_> = (0..8)
            .map(|_| s.spawn(|| unpack(&base, "0123", FILES)))
            .collect();
        runs.into_iter()
            .map(|r| r.join().unwrap().expect("unpack"))
            .collect()
    });
    assert!(dirs.iter().all(|d| *d == base.join("specs-0123")));
    assert_eq!(
        fs::read_dir(&base).unwrap().count(),
        2,
        "staging left behind"
    );
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn concurrent_repairs_preserve_the_published_tree() {
    let base = sandbox("repair_race");
    for trial in 0..32 {
        let root = base.join(trial.to_string());
        let partial = root.join("specs-0123");
        fs::create_dir_all(&partial).unwrap();
        for n in 0..20 {
            fs::write(partial.join(n.to_string()), b"incomplete").unwrap();
        }
        let barrier = std::sync::Barrier::new(8);
        std::thread::scope(|scope| {
            let runs: Vec<_> = (0..8)
                .map(|_| {
                    scope.spawn(|| {
                        barrier.wait();
                        let dir = unpack(&root, "0123", FILES).expect("repair");
                        for (rel, bytes) in FILES {
                            assert_eq!(fs::read(dir.join(rel)).unwrap(), *bytes, "{rel}");
                        }
                        assert!(dir.join(COMPLETE).is_file());
                    })
                })
                .collect();
            for run in runs {
                run.join().unwrap();
            }
        });
        assert_eq!(fs::read_dir(&root).unwrap().count(), 2);
    }
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn a_held_lock_times_out_instead_of_hanging() {
    let base = sandbox("held");
    fs::create_dir_all(&base).unwrap();
    let holder = fs::File::create(base.join(".specs-0123.lock")).unwrap();
    holder.lock().unwrap();
    let err = unpack_within(&base, "0123", FILES, Duration::from_millis(50)).unwrap_err();
    assert!(err.contains("unpack lock"), "{err}");
    assert!(!base.join("specs-0123").exists());
    drop(holder);
    assert!(unpack_within(&base, "0123", FILES, Duration::from_millis(50)).is_ok());
    let _ = fs::remove_dir_all(&base);
}

#[test]
fn distinct_contents_get_distinct_trees() {
    let base = sandbox("ids");
    let a = unpack(&base, "aaaa", FILES).expect("unpack a");
    let b = unpack(&base, "bbbb", &FILES[..1]).expect("unpack b");
    assert_ne!(a, b);
    assert!(!b.join(FILES[1].0).exists());
    let _ = fs::remove_dir_all(&base);
}
