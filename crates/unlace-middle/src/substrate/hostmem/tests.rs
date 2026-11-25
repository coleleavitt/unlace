use super::*;

#[test]
fn the_headroom_is_each_cap_less_what_reclaim_cannot_free() {
    const GIB: u64 = 1 << 30;
    let membership = "0::/user.slice/app.slice/run-7.scope\n";
    let tree = |dir: &str, file: &str| -> Option<String> {
        let v = match (dir, file) {
            ("/user.slice/app.slice/run-7.scope", "memory.max") => "6442450944",
            ("/user.slice/app.slice/run-7.scope", "memory.current") => "3221225472",
            ("/user.slice/app.slice/run-7.scope", "memory.stat") => {
                "anon 1073741824\nfile 2147483648\nactive_file 536870912\n\
                     inactive_file 1073741824\nshmem 536870912\n"
            }
            ("/user.slice", "memory.max") => "34359738368",
            ("/user.slice", "memory.current") => "33285996544",
            _ => return None,
        };
        Some(v.to_string())
    };
    assert_eq!(
        headroom_from(membership, tree),
        Some(GIB),
        "the parent slice is the tighter one"
    );
    let scope_only = |dir: &str, file: &str| tree(dir, file).filter(|_| dir.ends_with(".scope"));
    assert_eq!(
        headroom_from(membership, scope_only),
        Some(6 * GIB - (3 * GIB - 3 * GIB / 2)),
        "the scope's file LRU is reclaimable, its shmem is not"
    );
    let no_usage =
        |dir: &str, file: &str| (file == "memory.max").then(|| tree(dir, file)).flatten();
    assert_eq!(
        headroom_from(membership, no_usage),
        Some(6 * GIB),
        "no usage files: the cap"
    );
    assert_eq!(
        headroom_from(membership, |_, _| Some("max".into())),
        None,
        "uncapped"
    );
    let over = |_: &str, file: &str| Some(if file == "memory.max" { "100" } else { "200" }.into());
    assert_eq!(
        headroom_from("0::/\n", over),
        Some(0),
        "over its cap: nothing left"
    );
}

#[test]
fn every_capped_cgroup_on_the_path_is_listed_innermost_first() {
    let membership = "0::/user.slice/wave.slice/run-1.scope\n";
    let caps = |dir: &str| match dir {
        "/user.slice" => Some("max\n".to_string()),
        "/user.slice/wave.slice" => Some("6442450944\n".to_string()),
        "/user.slice/wave.slice/run-1.scope" => Some("34359738368\n".to_string()),
        _ => None,
    };
    assert_eq!(
        capped_from(membership, caps),
        vec![
            ("/user.slice/wave.slice/run-1.scope".to_string(), 32 << 30),
            ("/user.slice/wave.slice".to_string(), 6 << 30),
        ]
    );
    assert!(
        capped_from("1:memory:/user.slice\n", caps).is_empty(),
        "cgroup v1"
    );
    assert!(capped_from(membership, |_| Some("max".into())).is_empty());
    let container = |dir: &str| (dir.is_empty()).then(|| "2147483648".to_string());
    assert_eq!(
        capped_from("0::/\n", container),
        vec![(String::new(), 2 << 30)],
        "a namespaced container's own cap"
    );
    let stat = "anon 9\nfile 7\nactive_file 2\ninactive_file 3\nshmem 2\n".to_string();
    assert_eq!(unreclaimable(Some("100\n".into()), Some(stat)), Some(95));
    assert_eq!(unreclaimable(Some("100".into()), None), Some(100));
    assert_eq!(unreclaimable(None, Some("active_file 1".into())), None);
}

#[test]
fn the_tighter_bound_wins_and_says_which_it_is() {
    assert_eq!(
        tighter(Some(200), Some(6)),
        Some(Available {
            bytes: 6,
            cgroup: true
        })
    );
    assert_eq!(
        tighter(Some(5), Some(6)),
        Some(Available {
            bytes: 5,
            cgroup: false
        })
    );
    assert_eq!(
        tighter(Some(5), None),
        Some(Available {
            bytes: 5,
            cgroup: false
        })
    );
    assert_eq!(
        tighter(None, Some(6)),
        Some(Available {
            bytes: 6,
            cgroup: true
        })
    );
    assert_eq!(tighter(None, None), None);
}

#[test]
fn the_windows_and_macos_arithmetic() {
    assert_eq!(footprint(3, 7), 7);
    assert_eq!(footprint(9, 7), 9);
    assert_eq!(
        commit_bound(16 << 30, 2 << 30),
        2 << 30,
        "a full commit limit binds"
    );
    assert_eq!(commit_bound(4 << 30, 40 << 30), 4 << 30);
    assert_eq!(level_share(16 << 30, 25), (16 << 30) / 100 * 25);
    assert_eq!(level_share(16 << 30, 250), (16 << 30) / 100 * 100);
}

#[test]
fn this_platform_reports_what_the_pool_needs() {
    if cfg!(any(target_os = "linux", windows)) {
        assert!(resident_bytes().is_some_and(|b| b > 0));
    }
    if cfg!(any(target_os = "linux", windows, target_os = "macos")) {
        assert!(peak_resident_bytes().is_some_and(|b| b > 0));
        assert!(available().is_some());
    }
}
