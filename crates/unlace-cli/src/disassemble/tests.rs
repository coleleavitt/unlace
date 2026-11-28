use super::*;

fn row(addr: u64, bytes: &[u8], mnemonic: &str, operands: &str) -> Row {
    Row {
        addr,
        size: bytes.len() as u64,
        bytes: bytes.to_vec(),
        mnemonic: mnemonic.into(),
        operands: operands.into(),
    }
}

/// The note names the addresses, counts what it cannot name, and says which
/// move fixes it — under `--follow`, a different move for each reason a
/// target is still without a row, and never "re-run with --follow".
#[test]
fn the_skipped_note_names_the_addresses_and_the_move_that_fixes_them() {
    let region = Region {
        start: 0x43d060,
        end: Some(0x43d0a0),
        name: None,
        derived: false,
        from_entry: false,
        mapped_end: None,
    };
    let note = |addrs: &[u64], why| skipped_note(addrs, why, &region, None);
    let one = note(&[0x43d092], Skip::Straight);
    assert!(one.contains("an address"), "{one}");
    assert!(one.contains("0x43d092"), "{one}");
    assert!(one.contains("--follow"), "{one}");

    let three = note(&[0x43d092, 0x43d0ae, 0x43d0c1], Skip::Straight);
    assert!(three.contains("3 addresses"), "{three}");
    assert!(three.contains("0x43d092, 0x43d0ae, 0x43d0c1"), "{three}");

    let many: Vec<u64> = (0..SKIPPED_NOTE_ADDRS as u64 + 3)
        .map(|i| 0x1000 + i)
        .collect();
    let crop = note(&many, Skip::Straight);
    assert!(crop.contains("and 3 more"), "{crop}");
    assert!(
        !crop.contains("0x1006"),
        "the seventh must not be spelled out: {crop}"
    );

    let unreached = note(&[0x43d092], Skip::Unreached);
    assert!(unreached.contains("on its own"), "{unreached}");
    let undecodable = note(&[0x43d092], Skip::Undecodable);
    assert!(undecodable.contains("do not decode"), "{undecodable}");
    let past_window = note(&[0x43d0a2], Skip::PastWindow);
    assert!(past_window.contains("ends at 0x43d0a0"), "{past_window}");
    assert!(past_window.contains("--bytes"), "{past_window}");
    let past_count = skipped_note(&[0x43d092], Skip::PastBudget, &region, Some(4));
    assert!(past_count.contains("--count 4"), "{past_count}");
    assert!(past_count.contains("raise --count"), "{past_count}");
    let past_cap = note(&[0x43d092], Skip::PastBudget);
    let cap = format!("{DERIVED_INSTRUCTION_CAP}-instruction cap");
    assert!(past_cap.contains(&cap), "{past_cap}");
    for followed in [unreached, undecodable, past_window, past_count, past_cap] {
        assert!(followed.contains("0x43d0"), "{followed}");
        assert!(
            !followed.contains("re-run with --follow"),
            "already on: {followed}"
        );
        assert!(!followed.contains("ran across"), "{followed}");
    }
}

/// Under `--follow` rows can overlap, so the listing's end is the furthest
/// any row reaches, not the last row's own end.
#[test]
fn the_listing_ends_where_its_furthest_row_does() {
    let region = Region {
        start: 0x240,
        end: Some(0x24c),
        name: None,
        derived: false,
        from_entry: false,
        mapped_end: None,
    };
    let rows = vec![
        row(0x244, &[0xb8, 0xb8, 0x2a, 0x00, 0x00], "MOV", "EAX,0x2ab8"),
        row(0x245, &[0xb8, 0x2a], "MOV", "AX,0x2a"),
    ];
    assert_eq!(listed_end(&region, &rows), 0x249);
    let header = "# 2 instructions at 0x240 (0x240..0x249, 9 bytes)";
    assert!(render_text(&region, &rows, false).starts_with(header));
    assert_eq!(listed_end(&region, &[]), 0x240);
    assert_eq!(disasm::overlapping_rows(&rows), vec![0x245]);
}

#[test]
fn a_data_row_spells_its_bytes_three_ways() {
    let r = DataRow {
        addr: 0x1000,
        bytes: (0u8..16).collect(),
    };
    assert_eq!(r.hex(), "000102030405060708090a0b0c0d0e0f");
    assert_eq!(
        r.grouped(),
        "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f"
    );
    assert_eq!(r.ascii(), "................");
    let text = DataRow {
        addr: 0,
        bytes: b"unlace \x7f\"\\".to_vec(),
    };
    assert_eq!(
        text.ascii(),
        "unlace .\"\\",
        "0x7f is not printable; 0x20 and quotes are"
    );
}

#[test]
fn the_view_flag_takes_three_spellings_and_nothing_else() {
    assert_eq!(parse_view("auto"), Ok(ViewRequest::Auto));
    assert_eq!(parse_view("code"), Ok(ViewRequest::Code));
    assert_eq!(parse_view("data"), Ok(ViewRequest::Data));
    assert!(parse_view("hex").is_err());
    let argv: Vec<String> = ["a.out", "0x1000", "--addr", "--as", "data"]
        .iter()
        .map(|s| s.to_string())
        .collect();
    assert_eq!(parse_args(&argv).unwrap().view, Some(ViewRequest::Data));
    // Unspecified stays unspecified, so each entry point can default it.
    assert_eq!(
        parse_args(&["a.out".into(), "main".into()]).unwrap().view,
        None
    );
    assert!(
        parse_args(&["a.out".into(), "main".into(), "--as".into(), "asm".into()]).is_err(),
        "an unknown view is a usage error"
    );
}

#[test]
fn a_range_operand_needs_both_ends() {
    assert_eq!(split_range("0x1000-0x1040"), Some(("0x1000", "0x1040")));
    assert_eq!(split_range("0x1000..0x1040"), Some(("0x1000", "0x1040")));
    // A dash inside a name is a name, not a range: only a 0x-prefixed left
    // half opens one.
    assert_eq!(split_range("foo-bar"), None);
    assert_eq!(split_range("main"), None);
    assert_eq!(split_range("0x1000-"), None);
    // Both halves must read as addresses, so a dotted symbol stays a symbol.
    assert_eq!(split_range("std::vector..end"), None);
}

#[test]
fn addresses_parse_with_or_without_the_prefix() {
    assert_eq!(parse_addr("0x401000"), Ok(0x401000));
    assert_eq!(parse_addr("401000"), Ok(0x401000));
    assert!(parse_addr("main").is_err());
}

#[test]
fn the_target_and_the_binary_are_the_only_positionals() {
    let argv: Vec<String> = ["a.out", "main", "--json", "--count", "4"]
        .iter()
        .map(|s| s.to_string())
        .collect();
    let args = parse_args(&argv).expect("a well-formed command line");
    assert_eq!(args.binary, "a.out");
    assert_eq!(args.spec, "main");
    assert_eq!(args.count, Some(4));
    assert!(args.json && !args.by_address);

    assert!(
        parse_args(&["a.out".into()]).is_err(),
        "a missing target is a usage error"
    );
    assert!(
        parse_args(&["a.out".into(), "main".into(), "extra".into()]).is_err(),
        "a third positional is a usage error"
    );
    assert!(
        parse_args(&["a.out".into(), "main".into(), "--count".into(), "0".into()]).is_err(),
        "--count 0 lists nothing and is a usage error"
    );
}

#[test]
fn the_header_names_the_target_and_the_extent() {
    let region = Region {
        start: 0x1000,
        end: Some(0x1004),
        name: Some("main".into()),
        derived: true,
        from_entry: true,
        mapped_end: None,
    };
    let rows = vec![
        row(0x1000, &[0x55], "PUSH", "RBP"),
        row(0x1001, &[0x48, 0x89, 0xe5], "MOV", "RBP,RSP"),
    ];
    let text = render_text(&region, &rows, false);
    let mut lines = text.lines();
    assert_eq!(
        lines.next().unwrap(),
        "# 2 instructions at main @ 0x1000 (0x1000..0x1004, 4 bytes)"
    );
    assert_eq!(
        lines.next().unwrap(),
        "0x1000        55                    PUSH RBP"
    );
    assert!(render_text(&region, &rows, true).contains("[truncated:"));
}

#[test]
fn the_byte_header_counts_bytes_and_the_rows_are_xxd_shaped() {
    let region = Region {
        start: 0x400915,
        end: Some(0x400925),
        name: Some("s_400915".into()),
        derived: false,
        from_entry: false,
        mapped_end: None,
    };
    let rows = vec![DataRow {
        addr: 0x400915,
        bytes: b"Username: \0\x01\x02\x03\x04\x05".to_vec(),
    }];
    let text = render_data_text(&region, &rows, false);
    let mut lines = text.lines();
    assert_eq!(
        lines.next().unwrap(),
        "# 16 bytes at s_400915 @ 0x400915 (0x400915..0x400925)"
    );
    assert_eq!(
        lines.next().unwrap(),
        "0x400915      55 73 65 72 6e 61 6d 65 3a 20 00 01 02 03 04 05  |Username: ......|"
    );
    assert!(render_data_text(&region, &rows, true).contains("[truncated:"));
}

/// An explicit `--as` is the caller's, and `auto` only ever flips on the
/// loader's own classification — never on an entry, never on silence.
#[test]
fn the_view_choice_believes_the_caller_then_the_section_flags() {
    let data = section_flags::DATA | section_flags::READONLY;
    let code = section_flags::CODE | section_flags::READONLY;
    use ViewRequest::{Auto, Code as WantCode, Data as WantData};
    for (want, from_entry, flags, expect) in [
        (Auto, false, Some(data), View::Data),
        (Auto, false, Some(code), View::Code),
        // A section marked BOTH (a Mach-O `__text` carrying data attributes)
        // is code: the executable bit is the stronger claim.
        (Auto, false, Some(data | code), View::Code),
        // A discovered function is code wherever it was linked.
        (Auto, true, Some(data), View::Code),
        // No section covering the address: silence, not evidence.
        (Auto, false, None, View::Code),
        // The caller outranks all of it, in either direction.
        (WantCode, false, Some(data), View::Code),
        (WantData, true, Some(code), View::Data),
        (WantData, false, None, View::Data),
    ] {
        assert_eq!(
            decide_view(want, from_entry, flags),
            expect,
            "{want:?} / from_entry {from_entry} / flags {flags:?}"
        );
    }
}

fn dis_args(spec: &str, count: Option<usize>, bytes: Option<u64>) -> DisArgs {
    DisArgs {
        binary: "bin".into(),
        spec: spec.into(),
        by_address: false,
        view: None,
        count,
        bytes,
        follow: false,
        json: false,
        options: Vec::new(),
        func_decls: Vec::new(),
        mode: None,
        slice: None,
        target: None,
        sleighpath: None,
        isa: None,
    }
}

#[test]
fn a_window_is_the_callers_when_count_bytes_or_a_range_bounds_it() {
    for (spec, count, bytes, expect) in [
        ("main", Some(8), None, true),
        ("main", None, Some(64), true),
        ("0x401000", Some(1), None, true),
        ("0x401000-0x401040", None, None, true),
        ("0x401000..0x401040", None, None, true),
        // Nothing bounds these but the inventory's own function extent.
        ("main", None, None, false),
        ("0x401000", None, None, false),
    ] {
        assert_eq!(
            window_is_caller_bounded(&dis_args(spec, count, bytes)),
            expect,
            "{spec:?} / count {count:?} / bytes {bytes:?}"
        );
    }
}

/// The walk stops at the tighter of the two bounds, and says the image was
/// the reason only when the image really was.
#[test]
fn the_image_bound_clips_the_walk_and_explains_itself_once() {
    let region = |end, mapped_end| Region {
        start: 0x1000,
        end,
        name: None,
        derived: false,
        from_entry: false,
        mapped_end,
    };
    assert_eq!(region(Some(0x1100), Some(0x1040)).stop(), Some(0x1040));
    assert_eq!(region(Some(0x1020), Some(0x1040)).stop(), Some(0x1020));
    assert_eq!(region(None, Some(0x1040)).stop(), Some(0x1040));
    assert_eq!(region(Some(0x1100), None).stop(), Some(0x1100));
    assert_eq!(region(None, None).stop(), None);

    // A `--count` walk has no byte stop, so it always reaches past.
    assert!(region(None, Some(0x1040)).reaches_past_image());
    assert!(region(Some(0x1100), Some(0x1040)).reaches_past_image());
    assert!(!region(Some(0x1040), Some(0x1040)).reaches_past_image());
    assert!(!region(Some(0x1100), None).reaches_past_image());

    // The note is for a walk the image cut short: it stopped on the bound
    // with the caller's count unmet.
    assert!(cut_short_by_image(
        &region(None, Some(0x1040)),
        Some(30),
        9,
        0x1040
    ));
    // Stopped short of the bound -- something else ended it.
    assert!(!cut_short_by_image(
        &region(None, Some(0x1040)),
        Some(30),
        9,
        0x1030
    ));
    // The count was met exactly on the bound: the ask ended it, not the image.
    assert!(!cut_short_by_image(
        &region(None, Some(0x1040)),
        Some(9),
        9,
        0x1040
    ));
    // The caller asked for exactly the mapped bytes and got them.
    assert!(!cut_short_by_image(
        &region(Some(0x1040), Some(0x1040)),
        None,
        4,
        0x1040
    ));
}

#[test]
fn the_windowed_load_turns_the_discovery_walk_off_unless_the_caller_named_it() {
    let preset: Vec<(String, String)> = vec![
        ("listing".into(), "off".into()),
        ("fast_funcdisc".into(), "on".into()),
    ];

    let suppressed = windowed_options(&preset, &[]);
    for name in WINDOW_SUPPRESSED {
        assert_eq!(
            suppressed
                .iter().rfind(|(o, _)| o == name)
                .map(|(_, v)| v.as_str()),
            Some("off"),
            "{name} must end the list off"
        );
    }

    // The caller's own `--option` is the last word: naming one skips it.
    let named: Vec<(String, String)> = vec![("fast_funcdisc".into(), "on".into())];
    let mut merged = preset.clone();
    merged.extend(named.clone());
    let kept = windowed_options(&merged, &named);
    assert_eq!(
        kept.iter().rfind(|(o, _)| o == "fast_funcdisc")
            .map(|(_, v)| v.as_str()),
        Some("on")
    );
    assert_eq!(
        kept.iter().rfind(|(o, _)| o == "listing")
            .map(|(_, v)| v.as_str()),
        Some("off")
    );
}

#[test]
fn the_windowed_answer_stands_only_when_the_walk_could_not_have_changed_it() {
    let data = section_flags::DATA | section_flags::READONLY;
    let code = section_flags::CODE;
    let region = |name: Option<&str>, from_entry: bool| Region {
        start: 0x401000,
        end: Some(0x401040),
        name: name.map(str::to_string),
        derived: false,
        from_entry,
        mapped_end: None,
    };
    use ViewRequest::{Auto, Data as WantData};
    for (name, from_entry, section, want, expect) in [
        // Named from a fact the windowed load already held, in a section
        // whose view does not depend on there being an entry.
        (Some("main"), true, Some(code), Auto, true),
        (Some("sub_401000"), true, Some(data), Auto, true),
        (Some("g_table"), false, Some(code), Auto, true),
        (Some("g_table"), false, None, Auto, true),
        // Only the walk could name this one.
        (None, false, Some(code), Auto, false),
        // A data section renders as bytes here and as instructions if the
        // walk finds an entry, so the answer is not settled yet.
        (Some("g_table"), false, Some(data), Auto, false),
        // ...unless the caller pinned the view, which outranks the entry.
        (Some("g_table"), false, Some(data), WantData, true),
    ] {
        assert_eq!(
            windowed_answer_is_final(&region(name, from_entry), section, want),
            expect,
            "{name:?} / from_entry {from_entry} / section {section:?} / {want:?}"
        );
    }
}
