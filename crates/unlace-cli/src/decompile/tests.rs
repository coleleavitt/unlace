#[test]
fn engine_panic_is_read_off_stderr() {
    let stderr = "note\n\nthread 'main' (7) panicked at crates/x/src/y.rs:885:9:\nattempt to shift left with overflow\nstack backtrace:\n";
    assert_eq!(
        super::engine_panic(stderr).as_deref(),
        Some("crates/x/src/y.rs:885:9 attempt to shift left with overflow")
    );
    assert_eq!(super::engine_panic("Decompilation complete\n"), None);
}

#[test]
fn temporary_output_paths_have_independent_owned_lifetimes() {
    let first = super::temp_path("unlace_c_test_", ".c").unwrap();
    let second = super::temp_path("unlace_c_test_", ".c").unwrap();
    let first_path = first.to_path_buf();
    let second_path = second.to_path_buf();
    assert_ne!(first_path, second_path);
    assert_eq!(first.extension().unwrap(), "c");
    assert_eq!(std::fs::read(&first).unwrap(), b"");
    #[cfg(unix)]
    {
        use std::os::unix::fs::PermissionsExt;
        assert_eq!(
            std::fs::metadata(&first).unwrap().permissions().mode() & 0o777,
            0o600
        );
    }
    std::fs::write(&first, b"rendered C").unwrap();
    assert_eq!(std::fs::read(&first).unwrap(), b"rendered C");
    drop(first);
    assert!(!first_path.exists());
    assert!(second_path.exists());
    drop(second);
    assert!(!second_path.exists());
}

#[test]
fn temporary_output_path_is_removed_on_unwind() {
    let output = super::temp_path("unlace_regions_test_", ".txt").unwrap();
    let path = output.to_path_buf();
    let result = std::panic::catch_unwind(move || {
        let _output = output;
        panic!("test output cleanup");
    });
    assert!(result.is_err());
    assert!(!path.exists());
}

use super::{
    arch_failure_reason, check_errors, command_failure, decompile_all, decompile_command_failure,
    decompiling_name, find_pipeline_failure, is_unknown_function, option_failure, pipeline_refusal,
    read_symbols_failure, reject_unquotable,
};
use std::borrow::Cow;

/// What `decompile_all::driver_default_options` yields for the FIRST attempt
/// on every architecture: the DIV-120 instruction-budget policy and the
/// DIV-15 Listing, neither of which touches the entry set.
const LISTING: &[(&str, &str)] = &[("errortoomanyinstructions", "off"), ("listing", "on")];

/// The DIV-20/DIV-68 non-x86-64 bundle, held back for the retry.
const WIDENED: &[(&str, &str)] = &[
    ("errortoomanyinstructions", "off"),
    ("listing", "on"),
    ("funcstart_patterns", "on"),
    ("aif", "on"),
];
use super::script::console_path;
use std::path::Path;

fn script_args(binary: &str, target: &str) -> super::DecompileArgs {
    super::DecompileArgs {
        binary: binary.into(),
        target: target.into(),
        by_address: false,
        bfd_target: None,
        raw: false,
        regions: false,
        trace: false,
        cfg_dot: false,
        options: Vec::new(),
        defer_fast_funcdisc: false,
        kasserts: Vec::new(),
        func_decls: Vec::new(),
        assertions: Vec::new(),
        assert_strict: false,
        decomp_dbg: None,
        sleighpath: None,
        engine: None,
        slice: None,
        isa: None,
        raw_image: false,
        base: None,
        max_fn_memory: Some(0),
        max_fn_seconds: 0,
    }
}

fn build_script(
    args: &super::DecompileArgs,
    out_path: &Path,
    injected: &[(&'static str, &'static str)],
    regions_path: Option<&Path>,
) -> String {
    super::build_script_for_input(
        args,
        &args.binary,
        args.by_address,
        out_path,
        injected,
        false,
        regions_path,
        None,
        None,
    )
}

/// A real name defers a preset's discovery walk; a placeholder spelling or an
/// explicit `--option fast_funcdisc` keeps it.
#[test]
fn only_a_real_name_defers_fast_funcdisc() {
    let on = [("fast_funcdisc".to_string(), "on".to_string())];
    let defers = |target, explicit| super::defers_fast_funcdisc(target, explicit, &on);
    assert!(defers("main", false));
    assert!(defers("sub_main", false));
    assert!(defers("ns::Foo::bar", false));
    assert!(!defers("main", true));
    for placeholder in [
        "sub_401280",
        "FUN_00401280",
        "func_0x00401280",
        "sub_ABCDEF",
    ] {
        assert!(!defers(placeholder, false), "{placeholder}");
    }
}

/// With no preset walk to skip (`reliable`), nothing is deferred, so a name
/// miss runs the engine once rather than twice.
#[test]
fn nothing_defers_without_a_preset_walk() {
    let off = [
        ("fast_funcdisc".to_string(), "on".to_string()),
        ("fast_funcdisc".to_string(), "off".to_string()),
    ];
    assert!(!super::defers_fast_funcdisc("main", false, &[]));
    assert!(!super::defers_fast_funcdisc("main", false, &off));
}

/// The deferred `off` follows the preset's `on`, so it wins for that attempt.
#[test]
fn deferred_fast_funcdisc_outranks_the_preset() {
    let mut args = script_args("/x/a.out", "main");
    args.options = vec![("fast_funcdisc".into(), "on".into())];
    let out = Path::new("/tmp/unlace_c_x.c");
    let script = |defer| {
        super::build_script_for_input(
            &args,
            &args.binary,
            false,
            out,
            LISTING,
            defer,
            None,
            None,
            None,
        )
    };
    let last = |text: String| {
        text.lines()
            .filter(|l| l.starts_with("option fast_funcdisc"))
            .last()
            .map(str::to_owned)
    };
    assert_eq!(
        last(script(true)).as_deref(),
        Some("option fast_funcdisc off")
    );
    assert_eq!(
        last(script(false)).as_deref(),
        Some("option fast_funcdisc on")
    );
}

/// Recorded `decomp_dbg` transcript: the empty-scope load failure (DIV-88),
/// as the console reported it before the degenerate component was skipped.
const EMPTY_SCOPE: &str = "\
[decomp]> load file /x/hostile_scope_x86_64
Non-global scope has empty name
Could not create architecture
[decomp]> option listing on
Execution error: No load image present
[decomp]> read symbols
Execution error: No load image present
[decomp]> quit
";

/// Recorded transcript: `-s /nonexistent`, i.e. a SPECS problem the generic
/// wording misdiagnoses as a problem with the binary.
const MISSING_SLA: &str = "\
[decomp]> load file /x/a.out
No sleigh specification for x86:LE:64:default
Could not create architecture
[decomp]> quit
";

/// Recorded transcript: 200 bytes of junk, i.e. neither an object format nor
/// a `<binaryimage>` document.
const JUNK_MAGIC: &str = "\
[decomp]> load file /x/junk.bin
syntax error
Could not create architecture
[decomp]> quit
";

/// Recorded transcript: an ELF whose `st_size` overflows the type factory's
/// domain.  The commit fails, the console keeps going, and `print C` renders
/// C with every debug fact stripped (GH-339's silent half).
const COMMIT_FAILED: &str = "\
[decomp]> load file /x/sz.elf
/x/sz.elf successfully loaded: x86:LE:64:default:gcc
[decomp]> option listing on
Listing/xref disassembly tier turned on
[decomp]> read symbols
Execution error: g_a symbol created with zero size type
[decomp]> load function main
[decomp]> decompile
Clearing old decompilation
Decompiling main
Decompilation complete
[decomp]> quit
";

/// Recorded transcript: `--option realtypes zzz` on a healthy load. The
/// console refuses the VALUE, says so, and carries on to print C.
const BAD_OPTION_VALUE: &str = "\
[decomp]> load file /x/fmt
/x/fmt successfully loaded: x86:LE:64:default:gcc
[decomp]> option realtypes zzz
Execution error: Must specify toggle value, on/off
[decomp]> read symbols
[decomp]> load addr 0x26a0
[decomp]> decompile
Clearing old decompilation
Decompiling sub_26a0
Decompilation complete
[decomp]> quit
";

#[test]
fn recovers_the_real_load_failure_reason() {
    assert_eq!(
        arch_failure_reason(EMPTY_SCOPE).as_deref(),
        Some("Non-global scope has empty name")
    );
    assert_eq!(
        arch_failure_reason(MISSING_SLA).as_deref(),
        Some("No sleigh specification for x86:LE:64:default")
    );
    assert_eq!(
        arch_failure_reason(JUNK_MAGIC).as_deref(),
        Some("syntax error")
    );
}

/// The recovered reason is reported in the in-process surfaces' wording
/// (`decompile_all.rs (load_program)`), so all four commands agree.
#[test]
fn load_failure_matches_the_in_process_wording() {
    assert_eq!(
        check_errors(EMPTY_SCOPE, "main", "/x/hostile_scope_x86_64", false, true).as_deref(),
        Some(
            "could not build an architecture for /x/hostile_scope_x86_64: \
                 Non-global scope has empty name"
        )
    );
}

/// No reason printed: the generic wording is the fallback, not the default.
#[test]
fn a_bare_trigger_keeps_the_generic_wording() {
    let out = "Could not create architecture\n";
    assert_eq!(arch_failure_reason(out), None);
    assert_eq!(
        check_errors(out, "main", "/x/a.out", false, true).as_deref(),
        Some("could not build an architecture for /x/a.out (unsupported/!recognized binary)")
    );
}

/// The command echo is not a reason: a prompt-prefixed previous line means
/// the console printed nothing between `load file` and the trigger.
#[test]
fn the_command_echo_is_not_mistaken_for_a_reason() {
    let out = "[decomp]> load file /x/a.out\nCould not create architecture\n[decomp]> quit\n";
    assert_eq!(arch_failure_reason(out), None);
    assert!(
        check_errors(out, "main", "/x/a.out", false, true)
            .expect("still an error")
            .ends_with("(unsupported/!recognized binary)")
    );
}

/// GH-339's silent half: the analysis commit failed, so the C that follows
/// is degraded.  Reported in `decompile_all.rs (load_program)`'s wording.
#[test]
fn reports_the_analysis_commit_failure() {
    assert_eq!(
        read_symbols_failure(COMMIT_FAILED).as_deref(),
        Some("g_a symbol created with zero size type")
    );
    assert_eq!(
        check_errors(COMMIT_FAILED, "main", "/x/sz.elf", false, true).as_deref(),
        Some("read symbols (analysis commit) failed: g_a symbol created with zero size type")
    );
}

/// A diagnostic belonging to another command is not reported as the commit
/// failure, and a failed `load file` is diagnosed by its own arm — not by
/// the `No load image present` every later command then echoes.
#[test]
fn a_diagnostic_is_attributed_to_its_own_command() {
    let other = "\
[decomp]> read symbols
[decomp]> load function nosuch
Execution error: Unknown function name: nosuch
[decomp]> quit
";
    assert_eq!(read_symbols_failure(other), None);
    assert!(
        check_errors(EMPTY_SCOPE, "main", "/x/hostile_scope_x86_64", false, true)
            .expect("still an error")
            .starts_with("could not build an architecture"),
        "the load failure wins over the No-load-image consequence"
    );
}

/// A refused `--option` VALUE is a failed run, not a silent one: the option
/// never took, so the C that follows is the default decompilation. The
/// wording is `decompile_all.rs (apply_one_option)`'s, so both surfaces
/// answer one bad pair the same way.
#[test]
fn reports_a_refused_option_value() {
    assert_eq!(
        option_failure(BAD_OPTION_VALUE).as_deref(),
        Some("option realtypes: Must specify toggle value, on/off")
    );
    assert_eq!(
        check_errors(BAD_OPTION_VALUE, "0x26a0", "/x/fmt", true, true).as_deref(),
        Some("option realtypes: Must specify toggle value, on/off")
    );
}

/// Every refusal `set_unlace_option` and `OptionDatabase::set` can raise
/// arrives under one of the console's diagnostic prefixes and names its own
/// option, whatever the value grammar was.
#[test]
fn reports_each_option_value_grammar() {
    // The last row echoes no name at all, so there is nothing to attribute
    // the diagnostic to and the arm declines.
    for (line, diagnostic, expected) in [
        (
            "option namestyle zzz",
            "Execution error: namestyle must be \"angr\" or \"ghidra\"",
            Some("option namestyle: namestyle must be \"angr\" or \"ghidra\""),
        ),
        (
            "option splitdatatype off",
            "Execution error: Unknown data-type split option: off",
            Some("option splitdatatype: Unknown data-type split option: off"),
        ),
        (
            "option jumptablemax x",
            "Execution error: Must specify integer maximum",
            Some("option jumptablemax: Must specify integer maximum"),
        ),
        ("option", "Command parsing error: Missing option name", None),
    ] {
        let out = format!(
            "[decomp]> load file /x/a.out\n[decomp]> {line}\n{diagnostic}\n[decomp]> quit\n"
        );
        assert_eq!(option_failure(&out).as_deref(), expected, "{line}");
    }
}

/// The option arm sits behind the architecture arm: a dead image makes every
/// later `option` line answer `No load image present`, which is the load
/// failure's consequence and not a bad value.
#[test]
fn a_dead_image_is_not_reported_as_a_bad_option() {
    assert_eq!(
        option_failure(EMPTY_SCOPE).as_deref(),
        Some("option listing: No load image present"),
        "the transcript does say it"
    );
    assert!(
        check_errors(EMPTY_SCOPE, "main", "/x/hostile_scope_x86_64", false, true)
            .expect("still an error")
            .starts_with("could not build an architecture"),
        "but the load failure is the reason"
    );
}

/// An accepted option is not a failure, and a diagnostic raised by a later
/// command is not attributed to the option that preceded it.
#[test]
fn an_accepted_option_reports_nothing() {
    assert_eq!(option_failure(COMMIT_FAILED), None);
    let later = "\
[decomp]> option listing on
Listing/xref disassembly tier turned on
[decomp]> load function nosuch
Execution error: Unknown function name: nosuch
[decomp]> quit
";
    assert_eq!(option_failure(later), None);
}

/// A healthy transcript is untouched by every recovery.
#[test]
fn a_clean_transcript_reports_nothing() {
    let out = "\
[decomp]> load file /x/a.out
/x/a.out successfully loaded: x86:LE:64:default:gcc
[decomp]> read symbols
[decomp]> decompile
Decompilation complete
[decomp]> quit
";
    assert_eq!(read_symbols_failure(out), None);
    assert_eq!(arch_failure_reason(out), None);
    assert_eq!(option_failure(out), None);
    assert_eq!(check_errors(out, "main", "/x/a.out", false, true), None);
}

/// The real console transcript shape (`decomp_dbg` echoes the prompt, then
/// the command's output lines).
#[test]
fn finds_the_console_abort_notice() {
    let out = "[decomp]> decompile\nClearing old decompilation\nDecompiling sub_3994\n\
                   Skipping sub_3994: decompile pipeline reached an un-ported seam (LOSS-131): \
                   called `Option::unwrap()` on a `None` value\n[decomp]> print C\n";
    let (func, reason) = find_pipeline_failure(out).expect("the notice is recognized");
    assert_eq!(func, "sub_3994");
    assert!(reason.contains("LOSS-131"), "{reason}");
    assert!(
        reason.contains("Option::unwrap()"),
        "the real panic text survives: {reason}"
    );
}

/// A prompt sharing the line with the notice is still recognized.
#[test]
fn finds_a_prompt_prefixed_notice() {
    let out = "[decomp]> Skipping main: boom\n";
    assert_eq!(
        find_pipeline_failure(out),
        Some(("main".to_string(), "boom".to_string()))
    );
}

/// A clean run reports no failure — the exit code stays 0.
#[test]
fn clean_transcript_has_no_failure() {
    let out = "[decomp]> decompile\nDecompiling main\nDecompilation complete\n";
    assert_eq!(find_pipeline_failure(out), None);
}

/// The C body mentioning the word must not be mistaken for the notice (only
/// a line that *starts* with it counts, and the C never reaches this text).
#[test]
fn body_text_is_not_a_failure() {
    let out = "[decomp]> print C\n  /* Skipping is fine here */\n";
    assert_eq!(find_pipeline_failure(out), None);
}

/// The console's OTHER per-function abort: `decompile` raised instead of
/// degrading into the swallowed `Skipping` notice.  It leaves the same
/// brace-matched shell behind, so a text-surface caller that reads only stdout
/// cannot tell it from a genuinely empty function -- and this surface used to
/// answer it with exit 0 and an empty stderr while `--json`, driving the same
/// engine in process, exited 1 (`docs/re-needs/rejected-flow-override-exits.md`).
#[test]
fn finds_a_raised_decompile_abort() {
    let out = "[decomp]> decompile\nClearing old decompilation\nDecompiling sub_100054\n\
                   Execution error: Could not apply flowoverride\n[decomp]> print C\n";
    assert_eq!(
        find_pipeline_failure(out),
        None,
        "it is not the Skipping notice"
    );
    assert_eq!(
        decompile_command_failure(out).as_deref(),
        Some("Could not apply flowoverride")
    );
    assert_eq!(decompiling_name(out).as_deref(), Some("sub_100054"));
}

/// A clean `decompile` raises nothing, and a transcript that never reached the
/// command is not reported as one that failed it.
#[test]
fn a_clean_or_unreached_decompile_is_not_an_abort() {
    let clean = "[decomp]> decompile\nDecompiling main\nDecompilation complete\n";
    assert_eq!(decompile_command_failure(clean), None);
    assert_eq!(decompile_command_failure("[decomp]> quit\n"), None);
}

/// A DEFERRED directive -- `override flow`, applied at flow time and not when
/// the command runs -- is refused under the `decompile` that discovered it, not
/// under its own echo.  `command_failure` therefore sees a clean command and the
/// ledger said `applied` for an override the engine had just thrown out.
#[test]
fn a_deferred_directive_refusal_is_paired_back_to_its_command() {
    let out = "[decomp]> override flow 0x101dfb branch\nSuccessfully added override\n\
                   [decomp]> decompile\nDecompiling sub_100054\n\
                   Rejected override flow 0x101dfb branch: Could not apply flowoverride\n\
                   Decompilation complete\n";
    assert_eq!(command_failure(out, "override flow 0x101dfb branch"), None);
    assert_eq!(
        pipeline_refusal(out, "override flow 0x101dfb branch").as_deref(),
        Some("Could not apply flowoverride")
    );
    // A different override in the same run is untouched.
    assert_eq!(pipeline_refusal(out, "override flow 0x1405 call"), None);
}

/// A path without whitespace is emitted exactly as before — the corpus
/// transcripts and any older `decomp_dbg` behind `--decomp-dbg` depend on
/// the script staying byte-identical for every path that works today.
#[test]
fn console_path_leaves_ordinary_paths_alone() {
    assert_eq!(console_path("/home/u/a.out"), "/home/u/a.out");
    assert_eq!(console_path("./a.out"), "./a.out");
    assert_eq!(console_path(r"C:\Users\u\a.out"), r"C:\Users\u\a.out");

    // Not merely equal — untouched. The borrow is the contract: a path that
    // needs no quoting is passed through, never rebuilt.
    assert!(matches!(console_path("/home/u/a.out"), Cow::Borrowed(_)));
    assert!(matches!(
        console_path("/home/u/test dir/a.out"),
        Cow::Owned(_)
    ));
}

/// A path with a space is quoted, with `\` and `"` escaped so the console's
/// `read_filename` recovers the original bytes.
#[test]
fn console_path_quotes_whitespace() {
    assert_eq!(
        console_path("/home/u/test dir/a.out"),
        "\"/home/u/test dir/a.out\""
    );
    assert_eq!(console_path("/a\tb/c.out"), "\"/a\tb/c.out\"");
    assert_eq!(
        console_path(r"C:\Users\John Doe\a.out"),
        r#""C:\\Users\\John Doe\\a.out""#
    );
    assert_eq!(
        console_path("/odd \"name\"/a.out"),
        r#""/odd \"name\"/a.out""#
    );
}

/// The declarations land AFTER `read symbols` and BEFORE the load: the commit
/// is what discovery writes, and the load is what reads the declared extent.
#[test]
fn build_script_declares_boundaries_between_read_symbols_and_the_load() {
    let decls = crate::funcdecl::parse_flag("0x1400-0x1480=decrypt").expect("parses");
    let script = build_script(
        &super::DecompileArgs {
            by_address: true,
            func_decls: decls.clone(),
            ..script_args("/tmp/a.out", "0x1400")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    let line = |needle: &str| {
        script
            .lines()
            .position(|l| l == needle)
            .unwrap_or_else(|| panic!("{needle:?} missing from:\n{script}"))
    };
    assert!(
        line("read symbols") < line("function bounds 0x1400 0x1480 as decrypt")
            && line("function bounds 0x1400 0x1480 as decrypt") < line("load addr 0x1400"),
        "wrong order in:\n{script}"
    );
}

/// A by-address run installs a symbol at the entry it points at, before the
/// directives that name it: `load addr` alone installs no `FunctionSymbol`, so
/// `prototype 0x…` for the very address being decompiled was rejected.
#[test]
fn build_script_symbols_the_entry_a_by_address_run_selected() {
    let directives = vec![
        crate::assertdecl::parse_one("prototype 0x401571 void decrypt(unsigned int key)")
            .expect("parses"),
    ];
    let script = build_script(
        &super::DecompileArgs {
            by_address: true,
            assertions: directives.clone(),
            ..script_args("/tmp/a.out", "0x401571")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    let line = |needle: &str| {
        script
            .lines()
            .position(|l| l == needle)
            .unwrap_or_else(|| panic!("{needle:?} missing from:\n{script}"))
    };
    assert!(
        line("read symbols") < line("function symbol 0x401571")
            && line("function symbol 0x401571")
                < line("map prototype 0x401571 void decrypt(unsigned int key);"),
        "wrong order in:\n{script}"
    );
}

/// A bare hex target under `--addr` takes the same symbol install, and a NAMED
/// selection takes none — the name path resolves through the symbol table
/// that already has the entry.
#[test]
fn only_an_addressed_selection_gets_an_implicit_symbol() {
    let script = |target: &str, by_address: bool| {
        build_script(
            &super::DecompileArgs {
                by_address,
                ..script_args("/tmp/a.out", target)
            },
            Path::new("/tmp/unlace.c"),
            LISTING,
            None,
        )
    };
    assert!(script("401571", true).contains("\nfunction symbol 0x401571\n"));
    assert!(!script("authenticate", false).contains("function symbol"));
    // An object-file coordinate is not a VMA, so there is nothing to declare.
    assert!(!script(".text+0x10", true).contains("function symbol"));
}

/// A caller who declared the same start keeps the extent they declared: a
/// second, bare declaration of that entry would clear it back to unbounded.
#[test]
fn a_declared_start_is_not_re_declared_without_its_extent() {
    let decls = crate::funcdecl::parse_flag("0x1400-0x1480=decrypt").expect("parses");
    let script = build_script(
        &super::DecompileArgs {
            by_address: true,
            func_decls: decls.clone(),
            ..script_args("/tmp/a.out", "0x1400")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert_eq!(
        script
            .lines()
            .filter(|l| l.starts_with("function bounds"))
            .count(),
        1,
        "the declared extent was re-declared away:\n{script}"
    );
}

/// The assertion slots, which are forced rather than stylistic: a parsed
/// prototype must precede the load, a `map param` needs the loaded function,
/// and a `rename` of a LOCAL needs a function that has already been
/// decompiled — before that the console answers `No symbol named: v2`, which
/// is exactly the bug that makes `--kassert p9 naming-policy` inert today.
#[test]
fn build_script_puts_each_assertion_in_its_own_slot() {
    let directives: Vec<_> = [
        "prototype authenticate int4 authenticate(char *u)",
        "param 0 RDI char *u",
        "name v2 credbuf",
    ]
    .iter()
    .map(|spec| crate::assertdecl::parse_one(spec).expect("parses"))
    .collect();
    let script = build_script(
        &super::DecompileArgs {
            assertions: directives.clone(),
            ..script_args("/tmp/a.out", "authenticate")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    let line = |needle: &str| {
        script
            .lines()
            .position(|l| l == needle)
            .unwrap_or_else(|| panic!("{needle:?} missing from:\n{script}"))
    };
    assert!(line("read symbols") < line("map prototype authenticate int4 authenticate(char *u);"));
    assert!(
        line("map prototype authenticate int4 authenticate(char *u);")
            < line("load function authenticate")
    );
    assert!(line("load function authenticate") < line("map param 0 %RDI char *u"));
    assert!(line("map param 0 %RDI char *u") < line("decompile"));
    assert!(line("decompile") < line("rename v2 credbuf"));
    // The symbol-scoped directive forces a SECOND decompile after it.
    assert_eq!(
        script.lines().filter(|l| *l == "decompile").count(),
        2,
        "a symbol-scoped directive needs a second pass:\n{script}"
    );
    assert!(line("rename v2 credbuf") < script.lines().count());
}

/// Without a symbol-scoped directive there is no second `decompile`, so an
/// assertion an agent passes never doubles the cost of a run that does not
/// need it.
#[test]
fn build_script_emits_one_decompile_without_a_symbol_scoped_assertion() {
    let directives = vec![crate::assertdecl::parse_one("data 0x601048 char *pw").expect("parses")];
    let script = build_script(
        &super::DecompileArgs {
            assertions: directives.clone(),
            ..script_args("/tmp/a.out", "main")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert_eq!(
        script.lines().filter(|l| *l == "decompile").count(),
        1,
        "{script}"
    );
    assert!(script.contains("map address 0x601048 char *pw"), "{script}");
}

/// The transcript reader is what gives the human surface a report at all: a
/// console diagnostic under a directive's echo is that directive's rejection,
/// and a clean echo is an application.
#[test]
fn assertion_outcomes_read_the_console_diagnostic_under_each_echo() {
    let directives: Vec<_> = ["name v2 credbuf", "type v9 char[4]"]
        .iter()
        .map(|spec| crate::assertdecl::parse_one(spec).expect("parses"))
        .collect();
    let transcript = "\
[decomp]> decompile
Decompiling authenticate
[decomp]> rename v2 credbuf
[decomp]> retype v9 char[4]
Execution error: No symbol named: v9
[decomp]> decompile
";
    let report = super::assertion_outcomes(transcript, &directives, Some("authenticate"));
    assert_eq!(report[0].status, "applied");
    assert_eq!(report[1].status, "rejected");
    assert_eq!(report[1].detail.as_deref(), Some("No symbol named: v9"));
}

/// Two `callproto` directives for one call: the console keeps the later
/// prototype, so the earlier is rejected rather than reported applied. A later
/// one the console refused replaces nothing.
#[test]
fn a_restated_call_prototype_rejects_the_earlier_one() {
    let parse = |specs: &[&str]| -> Vec<_> {
        specs
            .iter()
            .map(|spec| crate::assertdecl::parse_one(spec).expect("parses"))
            .collect()
    };
    let directives = parse(&[
        "callproto 0x13b0 void f(char *)",
        "callproto report::0x13b0 void g(char *, int)",
    ]);
    let transcript = "\
[decomp]> override prototype 0x13b0 void f(char *);
Successfully added override
[decomp]> override prototype 0x13b0 void g(char *, int);
Successfully added override
";
    let report = super::assertion_outcomes(transcript, &directives, Some("report"));
    assert_eq!(report[0].status, "rejected");
    assert!(
        report[0]
            .detail
            .as_deref()
            .unwrap_or_default()
            .contains("later callproto")
    );
    assert_eq!(report[1].status, "applied");
    let directives = parse(&[
        "callproto 0x13b0 void f(char *)",
        "callproto 0x13b0 void g(nosuch)",
    ]);
    let transcript = "\
[decomp]> override prototype 0x13b0 void f(char *);
Successfully added override
[decomp]> override prototype 0x13b0 void g(nosuch);
Execution error: Syntax error
";
    let report = super::assertion_outcomes(transcript, &directives, Some("report"));
    assert_eq!(report[0].status, "applied");
    assert_eq!(report[1].status, "rejected");
}

/// A script that never reached a directive did not apply it, and saying so is
/// the difference between a report and a guess.
#[test]
fn an_unreached_directive_is_rejected_not_assumed_applied() {
    let directives = vec![crate::assertdecl::parse_one("name v2 buf").expect("parses")];
    let report = super::assertion_outcomes(
        "[decomp]> load file /tmp/a.out\n",
        &directives,
        Some("main"),
    );
    assert_eq!(report[0].status, "rejected");
    assert!(
        report[0]
            .detail
            .as_deref()
            .unwrap_or_default()
            .contains("did not reach")
    );
}

/// No declarations ⇒ the script is byte-identical to what it always was.
#[test]
fn build_script_without_declarations_emits_no_boundary_lines() {
    let script = build_script(
        &script_args("/tmp/a.out", "main"),
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert!(!script.contains("function bounds"), "got:\n{script}");
}

/// The whole script: a spaced binary path and a spaced output path must both
/// reach the console as ONE argument each.  Unquoted, `load file` reads the
/// tail as the filename and `openfile write` truncates a file at the split.
#[test]
fn build_script_quotes_spaced_paths() {
    let script = build_script(
        &script_args("/home/u/test dir/a.out", "main"),
        Path::new("/tmp/out dir/unlace.c"),
        LISTING,
        Some(Path::new("/tmp/out dir/unlace.txt")),
    );
    assert!(
        script.contains("load file \"/home/u/test dir/a.out\"\n"),
        "the image path must be one quoted argument, got:\n{script}"
    );
    assert!(
        script.contains("openfile write \"/tmp/out dir/unlace.c\"\n"),
        "the C output path must be one quoted argument, got:\n{script}"
    );
    assert!(
        script.contains("openfile write \"/tmp/out dir/unlace.txt\"\n"),
        "the regions path must be one quoted argument, got:\n{script}"
    );
}

/// An explicit `--target` still yields `load file <target> <path>` with the
/// path quoted — the 3-token shape that silently dropped the path tail.
#[test]
fn build_script_quotes_the_path_after_a_bfd_target() {
    let script = build_script(
        &super::DecompileArgs {
            bfd_target: Some("x86:LE:64:default".into()),
            ..script_args("/home/u/test dir/a.out", "main")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert!(
        script.contains("load file x86:LE:64:default \"/home/u/test dir/a.out\"\n"),
        "got:\n{script}"
    );
}

#[test]
fn build_script_for_raw_input_preserves_load_and_output_order() {
    let script = build_script(
        &super::DecompileArgs {
            by_address: true,
            raw: true,
            raw_image: true,
            base: Some(0x4000),
            bfd_target: Some("x86:LE:64:default".into()),
            ..script_args("/tmp/raw image.bin", "0x4000")
        },
        Path::new("/tmp/out dir/unlace.c"),
        LISTING,
        Some(Path::new("/tmp/out dir/regions.txt")),
    );
    assert_eq!(
        script,
        concat!(
            "load raw x86:LE:64:default 0x4000 0x4000 \"/tmp/raw image.bin\"\n",
            "option errortoomanyinstructions off\noption listing on\nread symbols\n",
            "function containing 0x4000\nfunction symbol 0x4000\nload addr 0x4000\ndecompile\n",
            "openfile write \"/tmp/out dir/unlace.c\"\nprint C\nprint raw\nclosefile\n",
            "openfile write \"/tmp/out dir/regions.txt\"\nregion blocks\nregion tree\nclosefile\nquit\n",
        )
    );
}

/// The x86 real-mode language id contains a space; the load line quotes it
/// so the console does not read `Mode:default` as the next argument.
#[test]
fn build_script_quotes_a_target_containing_a_space() {
    for raw_image in [true, false] {
        let script = build_script(
            &super::DecompileArgs {
                by_address: true,
                raw_image,
                base: raw_image.then_some(0),
                bfd_target: Some("x86:LE:16:Real Mode:default".into()),
                ..script_args("/tmp/dazzle.exe", "0x70")
            },
            Path::new("/tmp/unlace.c"),
            LISTING,
            None,
        );
        let load = script.lines().next().unwrap();
        let expected = if raw_image {
            "load raw \"x86:LE:16:Real Mode:default\" 0x0 0x70 /tmp/dazzle.exe"
        } else {
            "load file \"x86:LE:16:Real Mode:default\" /tmp/dazzle.exe"
        };
        assert_eq!(load, expected);
    }
}

/// A checked-in fixture path, so the architecture classification behind the
/// discovery bundle reads a real object rather than a guess.
fn fixture(name: &str) -> String {
    std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .join("crates/unlace-analysis/tests/fixtures")
        .join(name)
        .canonicalize()
        .expect("fixture")
        .to_str()
        .expect("utf-8 fixture path")
        .to_string()
}

/// The two attempts are one table split in two: what a non-x86-64 image
/// holds back is exactly what the in-process drivers inject up front, so the
/// widened retry reaches the inventory `unlace functions` reports and not some
/// third configuration.
#[test]
fn the_retry_widens_to_the_in_process_drivers_bundle() {
    let arm = fixture("entrymain_arm");
    let full = decompile_all::driver_default_options(&arm, true, true, &[]);
    assert_eq!(full, WIDENED, "the non-x86-64 bundle");
    let (base, discovery): (Vec<_>, Vec<_>) = full
        .into_iter()
        .partition(|(name, _)| matches!(*name, "listing" | "errortoomanyinstructions"));
    assert_eq!(base, LISTING, "the first attempt");
    assert_eq!(discovery, &WIDENED[2..], "held back for the retry");
}

/// x86-64 has nothing to hold back, so there is no second attempt to make:
/// the Listing is measured entry-neutral there and the gap-walk can
/// over-produce, which is why the bundle is non-x86-64 only.
#[test]
fn there_is_no_retry_to_make_on_x86_64() {
    let full = decompile_all::driver_default_options(&fixture("fauxware"), true, true, &[]);
    assert_eq!(full, LISTING);
}

/// Naming an option skips its injection on this surface exactly as it does
/// on the in-process ones, so `--option aif off` is not silently re-enabled
/// by the retry.
#[test]
fn the_bundle_yields_to_a_named_option() {
    let options = vec![("aif".to_string(), "off".to_string())];
    let full =
        decompile_all::driver_default_options(&fixture("entrymain_arm"), true, true, &options);
    assert_eq!(
        full,
        &[
            ("errortoomanyinstructions", "off"),
            ("listing", "on"),
            ("funcstart_patterns", "on")
        ]
    );
}

/// The widened attempt emits its extra options where the console can still
/// act on them: ahead of `read symbols`, which is where the analysis passes
/// are committed.
#[test]
fn the_widened_script_puts_the_bundle_before_the_commit() {
    let script = build_script(
        &script_args(&fixture("entrymain_arm"), "sub_410"),
        Path::new("/tmp/unlace.c"),
        WIDENED,
        None,
    );
    let (before, after) = script.split_once("read symbols").expect("read symbols");
    for line in [
        "option listing on",
        "option funcstart_patterns on",
        "option aif on",
    ] {
        assert!(
            before.contains(&format!("{line}\n")),
            "missing {line}:\n{script}"
        );
    }
    assert!(after.contains("load function sub_410"), "got:\n{script}");
}

/// The retry fires on a MISS and on nothing else: an ambiguous selector, a
/// load failure or a pipeline abort all mean the name was understood, and
/// widening the inventory would only change the answer for the worse.
#[test]
fn only_a_name_miss_is_retryable() {
    assert!(is_unknown_function(
        "Execution error: no function matches \"sub_410\""
    ));
    assert!(is_unknown_function("Unknown function name: nope"));
    assert!(is_unknown_function("Bad namespace: a::b"));
    assert!(!is_unknown_function(
        "Execution error: selector \"main\" is ambiguous"
    ));
    assert!(!is_unknown_function(EMPTY_SCOPE));
    assert!(!is_unknown_function(COMMIT_FAILED));
}

/// A script over ordinary paths is unchanged, quotes and all absent.
#[test]
fn build_script_is_unchanged_for_ordinary_paths() {
    let script = build_script(
        &script_args("/home/u/a.out", "main"),
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert!(
        script.contains("load file /home/u/a.out\n"),
        "got:\n{script}"
    );
    assert!(
        script.contains("openfile write /tmp/unlace.c\n"),
        "got:\n{script}"
    );
    assert!(
        !script.contains('"'),
        "no quoting where none is needed:\n{script}"
    );
}

/// Quoting cannot rescue a newline — the transport is one command per line —
/// so it is diagnosed instead of silently producing a broken script.
#[test]
fn a_newline_in_the_path_is_diagnosed_not_quoted() {
    assert!(reject_unquotable("binary path", "/home/u/a.out").is_ok());
    assert!(reject_unquotable("binary path", "/home/u/test dir/a.out").is_ok());

    let err =
        reject_unquotable("binary path", "/home/u/nl\ndir/a.out").expect_err("must be rejected");
    assert!(err.contains("binary path contains a newline"), "got: {err}");
    assert!(err.contains("one command per line"), "got: {err}");
    assert!(reject_unquotable("temp directory", "/tmp/cr\rdir/x.c").is_err());
}

/// The contract that matters is the round trip: whatever `console_path`
/// emits, the console's own `read_filename` must read back as the original
/// path — one argument, byte for byte.
///
/// The producer (`unlace-cli`) and the consumer (`unlace-console`) are different
/// crates, so nothing but this test holds their escaping rules together; an
/// edit to either side that breaks the pairing fails here rather than in a
/// user's spaced directory.
#[test]
fn console_path_round_trips_through_the_console_reader() {
    use unlace_console::interface::CommandStream;

    for original in [
        "/home/u/a.out",
        "/home/u/test dir/a.out",
        "/home/u/two  spaces/a.out",
        " /leading/space",
        "/trailing/space ",
        r"C:\Users\John Doe\a.out",
        r"C:\Users\u\a.out",
        "/odd \"name\"/a.out",
        r"/back\slash and space/a.out",
        "/tab\there/a.out",
    ] {
        let emitted = console_path(original);
        let mut s = CommandStream::new(&emitted);
        assert_eq!(
            s.read_filename(),
            original,
            "round trip failed for {original:?} (emitted {emitted:?})"
        );
    }
}

/// An IMAGE-scoped directive is emitted before `read symbols`, and a
/// `readonly` one turns read-only propagation on ahead of the caller's own
/// `--option`s so an explicit `--option readonly off` still wins.
///
/// The order is load-bearing, not cosmetic: mapping a symbol folds the range
/// property into its `SymbolEntry` and never consults the range again, so a
/// `readonly` emitted after `read symbols` is silently inert over every
/// address the loader named.
#[test]
fn a_range_directive_precedes_read_symbols_and_turns_readonly_on() {
    let script = build_script(
        &super::DecompileArgs {
            options: vec![("readonly".into(), "off".into())],
            assertions: vec![
                crate::assertdecl::parse_one("readonly 0x404028+8").unwrap(),
                crate::assertdecl::parse_one("volatile 0x50000000+4").unwrap(),
            ],
            ..script_args("/tmp/a.out", "sample")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    let at = |needle: &str| {
        script
            .lines()
            .position(|l| l == needle)
            .unwrap_or_else(|| panic!("{needle:?} missing from:\n{script}"))
    };
    assert!(
        at("option readonly on") < at("option readonly off"),
        "{script}"
    );
    assert!(at("readonly 0x404028 8") < at("read symbols"), "{script}");
    assert!(at("volatile 0x50000000 4") < at("read symbols"), "{script}");
    // No symbol-scoped directive ⇒ still exactly one `decompile`.
    assert_eq!(
        script.lines().filter(|l| *l == "decompile").count(),
        1,
        "{script}"
    );
}

/// With no range directive the script is untouched — no `option readonly`
/// line appears from nowhere.
#[test]
fn no_range_directive_leaves_the_readonly_option_alone() {
    let script = build_script(
        &super::DecompileArgs {
            assertions: vec![crate::assertdecl::parse_one("name v2 buf").unwrap()],
            ..script_args("/tmp/a.out", "sample")
        },
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    assert!(!script.contains("option readonly"), "{script}");
}

/// The same round trip inside a whole `load file` line, which is how the
/// console actually sees it: the command words are consumed first and the
/// path must survive as the single remaining argument.
#[test]
fn a_spaced_path_is_one_argument_in_the_load_file_line() {
    use unlace_console::interface::CommandStream;

    let original = "/home/u/test dir/a.out";
    let script = build_script(
        &script_args(original, "main"),
        Path::new("/tmp/unlace.c"),
        LISTING,
        None,
    );
    let line = script
        .lines()
        .next()
        .expect("the script opens with load file");

    let mut s = CommandStream::new(line);
    assert_eq!(s.read_token(), "load");
    assert_eq!(s.read_token(), "file");
    let filename = s.read_filename();
    s.skip_ws();
    assert!(
        s.eof(),
        "the path must exhaust the line, not leave a second argument"
    );
    assert_eq!(filename, original);
}
