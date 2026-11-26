use super::*;
use std::sync::atomic::{AtomicU64, Ordering};

static TEMP_ID: AtomicU64 = AtomicU64::new(0);

fn sparse_binary(size: u64) -> std::path::PathBuf {
    let id = TEMP_ID.fetch_add(1, Ordering::Relaxed);
    let path =
        std::env::temp_dir().join(format!("unlace-auto-mode-{}-{id}.bin", std::process::id()));
    let file = std::fs::File::create(&path).expect("create auto-mode fixture");
    file.set_len(size).expect("size auto-mode fixture");
    path
}

#[test]
fn omitted_and_explicit_auto_select_the_same_concrete_presets() {
    for (size, concrete) in [
        (0, "aggressive"),
        (unlace_decomp::modes::AUTO_RELIABLE_MIN_BYTES, "reliable"),
        (unlace_decomp::modes::AUTO_FAST_MIN_BYTES, "fast"),
    ] {
        let mut expected = vec![("ctypes".to_string(), "on".to_string())];
        expected.extend(mode_override_pairs(concrete).unwrap());
        for requested in [None, Some("auto")] {
            let resolved = resolved_mode(requested, size).unwrap();
            assert_eq!(resolved.name, concrete);
            assert_eq!(resolved.options, expected);
        }
    }
}

#[test]
fn explicit_concrete_mode_ignores_binary_metadata() {
    let missing = std::env::temp_dir().join(format!(
        "unlace-auto-mode-missing-{}.bin",
        std::process::id()
    ));
    let options =
        mode_options_for_binary(Some("fast"), missing.to_str().unwrap(), Vec::new()).unwrap();
    assert_eq!(options, mode_override_pairs("fast").unwrap());
}

#[test]
fn shared_parsers_default_to_auto_and_keep_user_options_last() {
    let path = sparse_binary(unlace_decomp::modes::AUTO_FAST_MIN_BYTES);
    let binary = path.to_string_lossy().into_owned();
    for cmd in ["decompile-all", "decompile-project", "functions"] {
        let argv = vec![
            binary.clone(),
            "--option".into(),
            "listing".into(),
            "on".into(),
        ];
        let args = parse_args(&argv, cmd).unwrap();
        let listing: Vec<&str> = args
            .options
            .iter()
            .filter(|(name, _)| name == "listing")
            .map(|(_, value)| value.as_str())
            .collect();
        assert_eq!(listing, vec!["off", "on"], "{cmd} precedence");
    }
    std::fs::remove_file(path).expect("remove auto-mode fixture");
}

#[test]
fn shared_surfaces_parse_arm_isa_override() {
    let path = sparse_binary(1);
    let binary = path.to_string_lossy().into_owned();
    for cmd in [
        "decompile-all",
        "decompile-project",
        "decompile-graph",
        "functions",
    ] {
        let args = parse_args(&[binary.clone(), "--isa".into(), "thumb".into()], cmd).unwrap();
        assert_eq!(args.isa, Some(ArmIsa::Thumb), "{cmd}");
    }
    let error = parse_args(&[binary, "--isa".into(), "mixed".into()], "functions")
        .err()
        .expect("invalid ISA must fail");
    assert!(error.contains("expected auto, arm, or thumb"));
    std::fs::remove_file(path).expect("remove auto-mode fixture");
}

#[test]
fn unfiltered_fast_batches_default_to_ten_seconds_per_function() {
    let path = sparse_binary(unlace_decomp::modes::AUTO_FAST_MIN_BYTES);
    let binary = path.to_string_lossy().into_owned();
    for cmd in ["decompile-all", "decompile-project"] {
        let args = parse_args(std::slice::from_ref(&binary), cmd).unwrap();
        assert_eq!(
            args.max_fn_seconds,
            unlace_console::project::FAST_WHOLE_BINARY_FN_BUDGET_SECONDS,
            "{cmd}"
        );

        let selected = parse_args(
            &[
                binary.clone(),
                "--addr".into(),
                "0x1234".into(),
                "--mode".into(),
                "fast".into(),
            ],
            cmd,
        )
        .unwrap();
        assert_eq!(
            selected.max_fn_seconds,
            unlace_console::project::DEFAULT_FN_BUDGET_SECONDS,
            "{cmd} selected"
        );
        let named = parse_args(
            &[
                binary.clone(),
                "--functions".into(),
                "sub_1234".into(),
                "--mode".into(),
                "fast".into(),
            ],
            cmd,
        )
        .unwrap();
        assert_eq!(
            named.max_fn_seconds,
            unlace_console::project::DEFAULT_FN_BUDGET_SECONDS,
            "{cmd} named"
        );

        let disabled = parse_args(
            &[
                binary.clone(),
                "--mode".into(),
                "fast".into(),
                "--max-fn-seconds".into(),
                "0".into(),
            ],
            cmd,
        )
        .unwrap();
        assert_eq!(disabled.max_fn_seconds, 0, "{cmd} explicit override");
        let explicit = parse_args(
            &[
                binary.clone(),
                "--mode".into(),
                "fast".into(),
                "--max-fn-seconds".into(),
                "17".into(),
            ],
            cmd,
        )
        .unwrap();
        assert_eq!(explicit.max_fn_seconds, 17, "{cmd} explicit budget");
    }

    for mode in ["reliable", "aggressive"] {
        let args = parse_args(
            &[binary.clone(), "--mode".into(), mode.into()],
            "decompile-all",
        )
        .unwrap();
        assert_eq!(
            args.max_fn_seconds,
            unlace_console::project::DEFAULT_FN_BUDGET_SECONDS,
            "{mode}"
        );
    }
    let functions = parse_args(&[binary], "functions").unwrap();
    assert_eq!(
        functions.max_fn_seconds,
        unlace_console::project::DEFAULT_FN_BUDGET_SECONDS
    );
    std::fs::remove_file(path).expect("remove auto-mode fixture");
}

#[test]
fn address_selection_skips_preset_discovery_but_names_do_not() {
    let path = sparse_binary(unlace_decomp::modes::AUTO_FAST_MIN_BYTES);
    let binary = path.to_string_lossy().into_owned();
    let address_args = parse_args(
        &[
            binary.clone(),
            "--addr".into(),
            "0x1234".into(),
            "--mode".into(),
            "fast".into(),
        ],
        "decompile-project",
    )
    .unwrap();
    assert_eq!(
        last_option_value(&address_args.options, "fast_funcdisc"),
        Some("off")
    );

    let explicit_args = parse_args(
        &[
            binary.clone(),
            "--addr".into(),
            "0x1234".into(),
            "--mode".into(),
            "fast".into(),
            "--option".into(),
            "fast_funcdisc".into(),
            "on".into(),
        ],
        "decompile-project",
    )
    .unwrap();
    assert_eq!(
        last_option_value(&explicit_args.options, "fast_funcdisc"),
        Some("on")
    );

    let named_args = parse_args(
        &[
            binary,
            "--functions".into(),
            "sub_1234".into(),
            "--mode".into(),
            "fast".into(),
        ],
        "decompile-project",
    )
    .unwrap();
    assert_eq!(
        last_option_value(&named_args.options, "fast_funcdisc"),
        Some("on")
    );
    std::fs::remove_file(path).expect("remove auto-mode fixture");
}

#[test]
fn loadtime_gates_use_the_last_named_option() {
    let options = vec![
        ("ppcapu".into(), "on".into()),
        ("ifuncfpret".into(), "on".into()),
        ("macho-arm64e".into(), "on".into()),
        ("ppcapu".into(), "off".into()),
        ("ifuncfpret".into(), "off".into()),
        ("macho-arm64e".into(), "off".into()),
    ];
    assert_eq!(last_option_value(&options, "ppcapu"), Some("off"));
    assert_eq!(last_option_value(&options, "ifuncfpret"), Some("off"));
    assert_eq!(last_option_value(&options, "macho-arm64e"), Some("off"));
}
