use super::*;

#[test]
fn load_pass_gates_follow_options_and_surface() {
    use unlace_analysis::passes::{LOAD_OBJC_ENV, LOAD_STRINGS_ENV};
    for (objc, strings, inventory, expected_objc, expected_strings) in [
        (None, None, false, "on", "on"),
        (Some("off"), None, false, "off", "on"),
        (Some("on"), Some("off"), false, "on", "off"),
        (None, Some("on"), true, "on", "off"),
    ] {
        let options: Vec<(String, String)> = [("objc", objc), ("strings", strings)]
            .into_iter()
            .filter_map(|(name, value)| Some((name.into(), value?.into())))
            .collect();
        let values = settings(&options, None, 1, inventory);
        assert_eq!(values[LOAD_OBJC_ENV].as_deref(), Some(expected_objc));
        assert_eq!(values[LOAD_STRINGS_ENV].as_deref(), Some(expected_strings));
    }
}

#[test]
fn loader_value_vocabularies_are_preserved() {
    for (name, cases) in [
        (
            "ppc32picimports",
            vec![
                ("off", Some("off")),
                ("on", Some("on")),
                (" ABI ", Some("abi")),
                (" TRUE ", Some("on")),
                ("1", Some("on")),
                ("", Some("on")),
                ("0", Some("off")),
                ("yes", Some("off")),
                ("invalid", Some("off")),
            ],
        ),
        (
            "objcivars",
            vec![
                (" OFF ", Some("off")),
                ("false", Some("off")),
                ("no", Some("on")),
                ("invalid", Some("on")),
                ("", Some("on")),
            ],
        ),
        (
            "ppcapu",
            vec![
                (" TRUE ", Some("on")),
                ("", Some("on")),
                ("yes", Some("off")),
                ("invalid", Some("off")),
            ],
        ),
        (
            "macho-arm64e",
            vec![
                (" YES ", Some("on")),
                ("1", Some("on")),
                ("", Some("on")),
                ("off", Some("off")),
                ("0", Some("off")),
            ],
        ),
        (
            "kernelcache",
            vec![
                (" AUTO ", Some("auto")),
                ("OFF", Some("off")),
                ("IOSurface", Some("IOSurface")),
                ("two words", Some("auto")),
            ],
        ),
        (
            "libctypes",
            vec![
                (" GLIBC ", Some("glibc")),
                ("0", Some("off")),
                ("future", Some("future")),
            ],
        ),
        (
            "symbolnamechars",
            vec![("off", Some("off")), ("invalid", Some("safe"))],
        ),
    ] {
        let (_, encoding) = binding(name).unwrap();
        for (input, expected) in cases {
            assert_eq!(
                encoding.encode(input).as_deref(),
                expected,
                "{name} {input:?}"
            );
        }
    }
}

#[test]
fn image_selection_takes_the_last_entry_and_image_options_only() {
    let argv: Vec<String> = [
        "bin",
        "--option",
        "kernelcache",
        "A",
        "--option",
        "dyldimage",
        " libfoo.dylib ",
        "--option",
        "objc",
        "off",
        "--option",
        "kernelcache",
        "PMGR",
        "--option",
        "kernelcache",
    ]
    .map(String::from)
    .to_vec();
    assert_eq!(
        image_selection(&argv),
        BTreeMap::from([
            (kernelcache::KERNELCACHE_ENV, "PMGR".to_string()),
            (dyldcache::DYLDIMAGE_ENV, "libfoo.dylib".to_string()),
        ])
    );
    assert!(image_selection(&["--option".into(), "kernelcache".into()]).is_empty());
}

#[test]
fn command_overrides_keep_last_values_and_explicit_removals() {
    let options = [
        ("objcivars".into(), "on".into()),
        ("objcivars".into(), "off".into()),
        ("macho-arm64e".into(), "off".into()),
        ("dyldcrossrefs".into(), "off".into()),
        ("cil".into(), "off".into()),
        ("sourcelang".into(), "auto".into()),
        ("unrelated".into(), "on".into()),
    ];
    let mut cmd = Command::new("unused");
    apply_to_command(&mut cmd, &options, Some("arm64"));
    let actual: BTreeMap<_, _> = cmd
        .get_envs()
        .map(|(k, v)| (k.to_str().unwrap(), v.map(|v| v.to_str().unwrap())))
        .collect();
    assert_eq!(
        actual,
        BTreeMap::from([
            ("UNLACE_OBJCIVARS", Some("off")),
            ("UNLACE_MACHO_ARM64E", Some("off")),
            ("UNLACE_MACHO_SLICE", Some("arm64")),
            ("UNLACE_DYLDCROSSREFS", Some("off")),
            ("UNLACE_CIL", Some("off")),
            (sourcelang::SOURCELANG_ENV, None),
            (unlace_analysis::passes::LOAD_OBJC_ENV, Some("on")),
            (unlace_analysis::passes::LOAD_STRINGS_ENV, Some("on")),
        ])
    );
    assert_eq!(settings(&[], Some("  "), 1, false).len(), 2);
    assert_eq!(
        settings(&[], None, 4, false)[unlace_analysis::listing::pdecode::DECODE_JOBS_ENV],
        Some("4".into())
    );
}
