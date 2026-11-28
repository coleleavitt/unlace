//! Function inventory, `decompile-all` selection and mode presets.

use super::*;

/// A filtered whole-binary run is still a body-lifting surface. Selecting a
/// mapped IAT word must fail before it can become a result row.
#[test]
fn decompile_all_refuses_an_executable_section_iat_slot() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/pe_iatincode_i386.exe")
        .to_str()
        .unwrap()
        .to_string();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--addr",
        "0x401000",
        "--json",
        "--sleighpath",
        &specs(),
    ]);
    assert!(!ok, "an IAT slot unexpectedly decompiled: {stdout}");
    assert!(
        stdout.trim().is_empty(),
        "an IAT result row escaped: {stdout}"
    );
    assert_eq!(
        stderr,
        "error: selector \"0x401000\" identifies import VirtualAlloc at 0x401000; \
         the IAT slot contains a loader-written pointer, not a function body\n"
    );
}

/// Among several selectors an IAT slot is reported and skipped, and the rest
/// still decompile; when the skips leave nothing to decompile, the run fails.
#[test]
fn decompile_all_skips_an_iat_slot_among_other_selectors() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/pe_iatincode_i386.exe")
        .to_str()
        .unwrap()
        .to_string();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--addr",
        "0x401000",
        "--addr",
        "0x401010",
        "--sleighpath",
        &specs(),
    ]);
    assert!(ok, "the run failed: {stderr}");
    assert_eq!(
        stderr,
        "warning: selector \"0x401000\" identifies import VirtualAlloc at 0x401000; \
         the IAT slot contains a loader-written pointer, not a function body; skipped\n"
    );
    assert!(
        stdout.contains("// Function: sub_401010 @ 0x401010"),
        "the body was not decompiled: {stdout}"
    );
    assert!(
        !stdout.contains("0x401000 "),
        "the IAT slot became a result: {stdout}"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--addr",
        "0x401000",
        "--functions",
        "GetModuleHandleA",
        "--sleighpath",
        &specs(),
    ]);
    assert!(!ok, "only IAT slots unexpectedly decompiled: {stdout}");
    assert!(
        stdout.trim().is_empty(),
        "an IAT result row escaped: {stdout}"
    );
    assert!(
        stderr.ends_with("error: every selector names an import slot; nothing to decompile\n"),
        "{stderr}"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--addr",
        "0x401000",
        "--functions",
        "no_such_function",
        "--sleighpath",
        &specs(),
    ]);
    assert!(
        !ok,
        "a slot and a missing name unexpectedly decompiled: {stdout}"
    );
    assert!(
        stdout.trim().is_empty(),
        "an IAT result row escaped: {stdout}"
    );
    assert!(
        stderr.ends_with("error: no selector names a function body; nothing to decompile\n"),
        "{stderr}"
    );
}

#[test]
fn decompile_all_emits_json_for_main() {
    let bin = fauxware();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--functions",
        "main,authenticate",
        "--json",
        "--sleighpath",
        &specs(),
    ]);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    // Shape assertions (no JSON dep): two functions, both with non-null code.
    assert!(
        stdout.trim_start().starts_with('{'),
        "output is not a JSON object:\n{stdout}"
    );
    assert!(
        stdout.contains("\"count\": 2"),
        "expected count 2:\n{stdout}"
    );
    assert!(
        stdout.contains("\"name\": \"main\""),
        "missing function `main`:\n{stdout}"
    );
    assert!(
        stdout.contains("\"name\": \"authenticate\""),
        "missing `authenticate`:\n{stdout}"
    );
    assert!(
        stdout.contains("\"variables\""),
        "missing variables array:\n{stdout}"
    );
    assert!(
        stdout.contains("\"line_mappings\""),
        "missing line mappings:\n{stdout}"
    );
    assert!(
        stdout.contains("\"line_number\":"),
        "line mappings are empty:\n{stdout}"
    );
    assert!(
        stdout.contains("\"line_numbers\""),
        "missing variable line evidence:\n{stdout}"
    );
    assert!(
        stdout.contains("\"addresses\""),
        "missing provenance addresses:\n{stdout}"
    );
    let has_variable_lines = stdout.match_indices("\"line_numbers\": [").any(|(i, key)| {
        stdout[i + key.len()..]
            .trim_start()
            .chars()
            .next()
            .is_some_and(|c| c.is_ascii_digit())
    });
    assert!(
        has_variable_lines,
        "all variable-use mappings are empty:\n{stdout}"
    );
    let authenticate = stdout
        .split("\"name\": \"authenticate\"")
        .nth(1)
        .expect("authenticate result must be present");
    let array_local = authenticate
        .split("\"name\": \"v2\"")
        .nth(1)
        .expect("authenticate must report its recovered array local");
    let array_lines = array_local
        .split("\"line_numbers\":")
        .nth(1)
        .expect("the array local must carry the additive provenance field");
    assert!(
        !array_lines.trim_start().starts_with("[]"),
        "the fragmented array-local varrefs must retain use evidence:\n{stdout}"
    );
    // `authenticate(const char *, const char *)` ⇒ a parameter with arg_index 0.
    assert!(
        stdout.contains("\"kind\": \"arg\"") && stdout.contains("\"arg_index\": 0"),
        "expected a parameter with arg_index 0:\n{stdout}"
    );
}

#[test]
fn fast_mode_matches_explicit_options_and_user_override_wins() {
    let bin = arm_entrymain();
    let sp = specs();
    let run = |extra: &[&str]| -> String {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--json",
            "--no-vars",
            "--sleighpath",
            sp.as_str(),
        ];
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&args);
        if !ok {
            panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
        }
        stdout
    };

    let fast = run(&["--mode", "fast"]);
    let explicit = run(&[
        "--mode",
        "reliable",
        "--option",
        "listing",
        "off",
        "--option",
        "funcstart_patterns",
        "off",
        "--option",
        "aif",
        "off",
        "--option",
        "fast_funcdisc",
        "on",
        "--option",
        "ctypes",
        "on",
    ]);
    assert_eq!(
        fast, explicit,
        "fast must equal its five explicit option overrides"
    );

    let noreturn = noreturn_fixture();
    let base = [
        "decompile-all",
        noreturn.as_str(),
        "--functions",
        "compute",
        "--json",
        "--no-vars",
        "--sleighpath",
        sp.as_str(),
    ];
    let mut fast_args = base.to_vec();
    fast_args.extend_from_slice(&["--mode", "fast"]);
    let (fast_out, stderr, ok) = run_unlace(&fast_args);
    assert!(ok, "fast no-return control failed: {stderr}");
    assert!(
        // (unlace DIV-39) the no-return warning renders as the `// no-return`
        // slug under the default inline warnstyle.
        !code_field(&fast_out).contains("// no-return"),
        "fast must keep the Listing/no-return consumer disabled"
    );

    let mut restored_args = base.to_vec();
    restored_args.extend_from_slice(&["--mode", "fast", "--option", "listing", "on"]);
    let (restored_out, stderr, ok) = run_unlace(&restored_args);
    assert!(ok, "fast with Listing restored failed: {stderr}");
    assert!(
        code_field(&restored_out).contains("// no-return"),
        "an explicit option after fast must win with last-write precedence"
    );
}

#[test]
fn modes_command_lists_auto_policy_and_fast_preset() {
    let (stdout, stderr, ok) = run_unlace(&["modes", "--json"]);
    assert!(ok, "unlace modes failed: {stderr}");
    let auto = stdout
        .split("\"name\": \"auto\"")
        .nth(1)
        .expect("modes JSON must list auto after its name");
    assert!(
        auto.contains("\"automatic\": true"),
        "auto mode JSON must identify a dynamic policy: {stdout}"
    );
    let fast = stdout
        .split("\"name\": \"fast\"")
        .nth(1)
        .expect("modes JSON must list fast after its name");
    for option in ["listing", "funcstart_patterns", "aif", "fast_funcdisc"] {
        assert!(
            fast.contains(&format!("\"option\": \"{option}\"")),
            "fast mode JSON missing {option}: {stdout}"
        );
    }
}

#[test]
fn omitted_and_explicit_auto_match_aggressive_on_a_small_binary() {
    let bin = fauxware();
    let sp = specs();
    let run = |mode: Option<&str>| -> String {
        let mut args = vec![
            "functions",
            bin.as_str(),
            "--json",
            "--sleighpath",
            sp.as_str(),
        ];
        if let Some(mode) = mode {
            args.extend_from_slice(&["--mode", mode]);
        }
        let (stdout, stderr, ok) = run_unlace(&args);
        if !ok {
            panic!("unlace functions failed for mode {mode:?}: {stderr}");
        }
        stdout
    };

    let omitted = run(None);
    assert_eq!(omitted, run(Some("auto")));
    assert_eq!(omitted, run(Some("aggressive")));
}

#[test]
fn decompile_mode_requires_a_value() {
    let bin = fauxware();
    let (_stdout, stderr, ok) = run_unlace(&["decompile", bin.as_str(), "main", "--mode"]);
    assert!(!ok, "missing --mode value must fail");
    assert!(
        stderr.contains("--mode requires a value"),
        "unexpected error: {stderr}"
    );
}

/// DIV-20: in `reliable` mode on a **non-x86-64** binary, `decompile-all` defaults
/// `funcstart_patterns` ON — the primary function-discovery source when oracle 5
/// (the x86-64-only prologue scan) does not apply. Without it a stripped ARM binary
/// discovers only the ELF entry; with it the prologue `<patternpairs>` matcher finds
/// more. The reliable driver fallback must match an explicit
/// `--option funcstart_patterns on` and beat `off`.
///
/// Runs on `entrymain_arm`, where the pass finds `0x410`, which nothing else does:
/// 10 entries `off` vs 11 by default. It used to run
/// on the two-function `arm_thumb()` fixture, where the "extra" entries the
/// assertion counted were in fact duplicate records for functions already found —
/// so the fixture swap is what keeps this assertion meaningful once issue #197
/// stops the enumeration reporting one function more than once.
#[test]
fn arm_decompile_all_defaults_funcstart_patterns_on() {
    let bin = arm_entrymain();
    let sp = specs();
    let run = |extra: &[&str]| -> usize {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--json",
            "--sleighpath",
            sp.as_str(),
            "--mode",
            "reliable",
        ];
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&args);
        if !ok {
            panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
        }
        json_count(&stdout).expect("count in json")
    };
    let default_cnt = run(&[]);
    let off_cnt = run(&["--option", "funcstart_patterns", "off"]);
    let on_cnt = run(&["--option", "funcstart_patterns", "on"]);
    // The non-x86-64 default injects the pass: it discovers strictly more than `off`,
    // and matches the explicit `on`.
    assert!(
        default_cnt > off_cnt,
        "ARM decompile-all default should discover MORE than funcstart_patterns off \
         (default={default_cnt}, off={off_cnt}) — the DIV-20 injection did not fire"
    );
    assert_eq!(
        default_cnt, on_cnt,
        "ARM default must equal explicit `funcstart_patterns on` (default={default_cnt}, on={on_cnt})"
    );
}

/// `decompile-all --mode reliable` on a non-x86-64 binary ALSO defaults the Aggressive Instruction
/// Finder (`aif`) ON — the gap-walk that seeds the disconnected call-graph components
/// (functions reached only via indirect calls / function-pointer tables, preceded by
/// data/literal-pools so the `funcstart_patterns` `<patternpairs>` epilogue-prepattern
/// never matches) that the prologue matcher + recursive-descent walk structurally miss
/// (crazyflie cf2.elf 1430 -> 2700 functions, 45% -> 82% of angr's set).  This small
/// fixture is too sparse for AIF's prologue-fingerprint histogram (`FINGERPRINT_THRESHOLD`)
/// to add anything — the coverage win is on real firmware, verified on the decbench ARM
/// projects — so here we assert the injection is WIRED and NON-DESTRUCTIVE: the default
/// path equals an explicit `--option aif on` and never discovers fewer than `aif off`.
#[test]
fn arm_decompile_all_defaults_aif_on() {
    let bin = arm_thumb();
    let sp = specs();
    let run = |extra: &[&str]| -> usize {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--json",
            "--sleighpath",
            sp.as_str(),
            "--mode",
            "reliable",
        ];
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&args);
        if !ok {
            panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
        }
        json_count(&stdout).expect("count in json")
    };
    let default_cnt = run(&[]);
    let off_cnt = run(&["--option", "aif", "off"]);
    let on_cnt = run(&["--option", "aif", "on"]);
    assert_eq!(
        default_cnt, on_cnt,
        "ARM default must equal explicit `aif on` (default={default_cnt}, on={on_cnt}) — the injection did not fire"
    );
    assert!(
        default_cnt >= off_cnt,
        "AIF must never discover FEWER than off (default={default_cnt}, off={off_cnt})"
    );
}

/// Stage 2 (angr-parity ARM discovery): reliable `decompile-all` on a non-x86-64 binary also
/// runs the **raw, UNPAIRED Thumb-prologue** gap seed
/// (`aif::raw_thumb_prologue_seeds`, the mirror of angr `CFGFast`'s
/// `_func_addrs_from_prologues()` over `ArchARMCortexM.thumb_prologs`). It scans for
/// canonical LR-saving Thumb prologues (`PUSH {..,lr}` `0xB5xx` / `PUSH.W {..,lr}`
/// `0xE92D..`) that fell in an UNDEFINED gap (never `<patternpairs>` epilogue-paired,
/// never reached by a direct BL, and skipped by AIF's cursor-advancing gap-walk),
/// validates each with `check_valid_subroutine`, and re-seeds the recursive-descent
/// walk with the survivors. It is folded into the existing `funcstart_patterns`
/// (`analysis_funcstart_patterns`) discovery gate — no new stage-model option — so
/// there is nothing extra to toggle here.
///
/// This tiny fixture has no dense literal-pool-separated prologue clusters, so the
/// raw scan adds nothing on it (the coverage win is on real Cortex-M firmware:
/// betaflight STM32F405 recovers the ~483 PUSH-prologue functions the
/// `<patternpairs>` matcher structurally misses, crazyflie 82% -> ~95% of angr's
/// discovered set — verified in the decbench ARM parity harness). Here we assert the
/// wiring is NON-DESTRUCTIVE: the default path (raw seed active) still succeeds and
/// never discovers FEWER functions than `funcstart_patterns off` (which disables the
/// whole recursive-discovery tier, raw seed included), and turning the gate off does
/// not error.
#[test]
fn arm_decompile_all_raw_thumb_prologue_seed_non_destructive() {
    let bin = arm_thumb();
    let sp = specs();
    let run = |extra: &[&str]| -> usize {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--json",
            "--sleighpath",
            sp.as_str(),
            "--mode",
            "reliable",
        ];
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&args);
        if !ok {
            panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
        }
        json_count(&stdout).expect("count in json")
    };
    let default_cnt = run(&[]);
    // `funcstart_patterns off` disables the whole recursive-discovery tier (the raw
    // Thumb-prologue seed is gated on the same flag), so the default (with the raw
    // seed active) must never discover fewer.
    let off_cnt = run(&["--option", "funcstart_patterns", "off"]);
    assert!(
        default_cnt >= off_cnt,
        "raw Thumb-prologue seed must never discover FEWER than funcstart_patterns off \
         (default={default_cnt}, off={off_cnt})"
    );
}

/// DIV-68: `unlace functions` takes the same discovery defaults as `unlace decompile-all`,
/// so the inventory can never omit an entry the whole-binary run decompiles.
///
/// `decompile-all` reports the CODE-backed SUBSET of the canonical inventory
/// `functions` prints, so every address the former decompiles must appear in the
/// latter.  Under `--mode reliable` on a non-x86-64 binary that invariant used to be
/// inverted: the DIV-20 `funcstart_patterns`/`aif` defaults (and the Listing that
/// gates them) were bundled behind the same flag as the DIV-15 Listing default, which
/// `functions` deliberately declined — so `entrymain_arm` listed 10 entries while
/// `decompile-all` decompiled 12, `0x3e0` and `0x410` among them.  On real firmware
/// the same hole read as `1` of `5,797` (stripped betaflight STM32F405).
#[test]
fn arm_functions_inventory_covers_every_decompile_all_entry() {
    let bin = arm_entrymain();
    let sp = specs();
    let inventory = run_json_addrs("functions", &bin, &sp, &[]);
    let decompiled = run_json_addrs("decompile-all", &bin, &sp, &["--no-vars"]);

    let missing: Vec<u64> = decompiled
        .iter()
        .copied()
        .filter(|a| !inventory.contains(a))
        .collect();
    assert!(
        missing.is_empty(),
        "`unlace functions` must list every entry `decompile-all` decompiles; missing {:x?} \
         (inventory={}, decompiled={})",
        missing,
        inventory.len(),
        decompiled.len()
    );
    // The entry only the prologue matcher finds — the concrete pre-fix miss.
    assert!(
        inventory.contains(&0x410),
        "the ARM inventory is missing the funcstart_patterns discovery 0x410: {:x?}",
        inventory
    );
    // 0x3e0 is `_start + 4`; it was listed only as the fall-through of an A32
    // misdecode of `_start` as a predicated `bleq` (GH-299).
    assert!(
        !inventory.contains(&0x3e0),
        "0x3e0 is inside _start: {inventory:x?}"
    );
    // The injection fired: the default inventory equals the explicit bundle.
    let explicit = run_json_addrs(
        "functions",
        &bin,
        &sp,
        &[
            "--option",
            "listing",
            "on",
            "--option",
            "funcstart_patterns",
            "on",
            "--option",
            "aif",
            "on",
        ],
    );
    assert_eq!(
        inventory, explicit,
        "the non-x86-64 `functions` default must equal the explicit discovery bundle"
    );
}

/// DIV-68, the other side: x86-64 enumeration is untouched.
///
/// The discovery bundle is non-x86-64-only and the Listing is measured entry-neutral
/// on x86-64, so `unlace functions` there must still inject nothing — same inventory as
/// an explicit `listing off`, and still a superset of what `decompile-all` decompiles.
#[test]
fn x86_64_functions_inventory_is_unchanged_and_covers_decompile_all() {
    let bin = fauxware();
    let sp = specs();
    let inventory = run_json_addrs("functions", &bin, &sp, &[]);
    let no_listing = run_json_addrs("functions", &bin, &sp, &["--option", "listing", "off"]);
    assert_eq!(
        inventory, no_listing,
        "x86-64 `unlace functions` must not build the Listing — the DIV-15 default is the \
         decompiling surfaces'"
    );
    let decompiled = run_json_addrs("decompile-all", &bin, &sp, &["--no-vars"]);
    let missing: Vec<u64> = decompiled
        .iter()
        .copied()
        .filter(|a| !inventory.contains(a))
        .collect();
    assert!(
        missing.is_empty(),
        "`unlace functions` must list every entry `decompile-all` decompiles; missing {missing:x?}"
    );
}

/// Issue #197: a whole-binary run reports each function ENTRY exactly once.
///
/// `arm_thumb_linked_le32` holds exactly two functions (`compute` @ 0x100b8 and
/// `_start` @ 0x100d6 — see the fixture's `.c`), but `decompile-all` used to emit
/// **six** records for them: one per name the entry carried (`compute` +
/// `sub_100b8`), plus one per ARM Thumb `entry|1` twin (`sub_100b9`, `sub_100d7`)
/// — the ELF `.symtab` stores these functions at the ODD `st_value` 0x100b9 /
/// 0x100d7, the mode bit, and the unmasked value was being seeded as a function
/// start.  The odd twins are not merely redundant: 0x100b9 is not an instruction
/// boundary, so it decompiled to a bogus empty `void sub_100b9(void)`.
///
/// Asserts the canonical shape: two entries, at the two even addresses, named by
/// their real symbols, with the generated `sub_<addr>` name kept in `aliases` (so
/// nothing that could be looked up before stops resolving) and no odd address
/// anywhere in the output.
#[test]
fn decompile_all_reports_each_entry_once() {
    let bin = arm_thumb();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        bin.as_str(),
        "--json",
        "--sleighpath",
        sp.as_str(),
    ]);
    if !ok {
        panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
    }
    assert_eq!(
        json_count(&stdout),
        Some(2),
        "the 2-function ARM fixture must report 2 entries, not one per name/twin:\n{stdout}"
    );
    // The real symbols win the `name` slot ...
    for want in ["\"name\": \"compute\"", "\"name\": \"_start\""] {
        assert!(stdout.contains(want), "expected {want} in:\n{stdout}");
    }
    // ... the generated placeholders survive as aliases, not as extra records ...
    for want in ["\"sub_100b8\"", "\"sub_100d6\""] {
        assert!(
            stdout.contains(want),
            "expected the alias {want} in:\n{stdout}"
        );
    }
    assert!(
        !stdout.contains("\"name\": \"sub_100b8\"") && !stdout.contains("\"name\": \"sub_100d6\""),
        "a generic `sub_<addr>` alias must not be a function's reported name:\n{stdout}"
    );
    // ... and the Thumb `entry|1` phantoms are gone entirely (address AND name).
    for gone in ["0x100b9", "0x100d7", "sub_100b9", "sub_100d7"] {
        assert!(
            !stdout.contains(gone),
            "the ARM Thumb `entry|1` twin {gone} must not be reported at all:\n{stdout}"
        );
    }
}

/// Issue #197, the companion guarantee: collapsing the enumeration must not make a
/// name that used to select a function stop working.  `--functions <alias>` still
/// resolves an entry through its alias list — the lookup decbench's name-narrowing
/// relies on — and reports it under its canonical name.
#[test]
fn decompile_all_functions_filter_resolves_an_alias() {
    let bin = arm_thumb();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        bin.as_str(),
        "--json",
        "--sleighpath",
        sp.as_str(),
        "--functions",
        "sub_100b8",
    ]);
    if !ok {
        panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
    }
    assert_eq!(
        json_count(&stdout),
        Some(1),
        "`--functions sub_100b8` must still select exactly one function:\n{stdout}"
    );
    assert!(
        stdout.contains("\"name\": \"compute\"") && stdout.contains("\"0x100b8\""),
        "the alias must resolve to `compute` @ 0x100b8:\n{stdout}"
    );
}

/// Issue #197, `--addr` on an ARM/Thumb `entry|1` address.
///
/// An ARM caller legitimately holds odd addresses — an ELF `st_value`, a DWARF
/// entry PC, a benchmark case address all carry the Thumb mode bit. Asking for
/// `--addr 0x100b9` used to decompile literally there, landing mid-`push {r7}`
/// and returning an empty `void compute(void) { return; }`. It now resolves to the
/// real entry, and the odd address must NOT fold on a byte-aligned ISA, where an
/// odd function address is genuine (`cet_pie_x86_64` really has
/// `elaborate_debug_symbol` at 0x1357).
#[test]
fn decompile_all_addr_tolerates_the_arm_thumb_bit() {
    let sp = specs();
    let arm = arm_thumb();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        arm.as_str(),
        "--json",
        "--sleighpath",
        sp.as_str(),
        "--addr",
        "0x100b9",
    ]);
    if !ok {
        panic!("unlace decompile-all failed on the ARM fixture: {stderr}");
    }
    assert!(
        stdout.contains("\"address_hex\": \"0x100b8\"") && stdout.contains("\"name\": \"compute\""),
        "--addr 0x100b9 must resolve to `compute` at its real entry 0x100b8:\n{stdout}"
    );
    assert!(
        stdout.contains("a0 * 3 + 7"),
        "--addr 0x100b9 must decompile the real body, not an empty phantom:\n{stdout}"
    );

    // The x86-64 guardrail: an odd address there is a real entry, never folded.
    let x86 = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/cet_pie_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        x86.as_str(),
        "--json",
        "--sleighpath",
        sp.as_str(),
        "--addr",
        "0x1357",
    ]);
    if !ok {
        panic!("unlace decompile-all failed on the x86-64 fixture: {stderr}");
    }
    assert!(
        stdout.contains("\"address_hex\": \"0x1357\""),
        "an odd x86-64 address is a REAL entry and must not be Thumb-masked:\n{stdout}"
    );
}

#[test]
fn arm_thumb_pe_functions_and_address_decompile() {
    let binary = arm_thumb_pe();
    let sp = specs();
    let target = "ARM:LE:32:v4t:default";

    let (stdout, stderr, ok) = run_unlace(&["functions", &binary, "--json", "--sleighpath", &sp]);
    if !ok {
        panic!("unlace functions failed on synthetic ARM PE: {stderr}");
    }
    assert!(
        stdout.contains("\"address_hex\": \"0x401000\""),
        "odd Thumb entry was not normalized:\n{stdout}"
    );
    // The name follows the normalized address, not the raw entry word.
    assert!(
        stdout.contains("\"name\": \"sub_401000\"") && !stdout.contains("sub_401001"),
        "the entry function must be named at its even address:\n{stdout}"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--addr",
        "0x401001",
        "--target",
        target,
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "automatic PE Thumb mode failed: {stderr}");
    assert!(
        stdout.contains("return 7;"),
        "wrong ARM/Thumb decode:\n{stdout}"
    );

    // An endian-conflicting --target is reported, not refused: --target is the
    // flag that overrides what the container declares, and a byte-swapped decode
    // of a mislabeled image is a legitimate use of it.
    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--target",
        "ARM:BE:32:v4t:default",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "endian-conflicting target must still load: {stderr}");
    assert!(
        stderr.contains("BE-endian") && stderr.contains("LE-endian"),
        "the mismatch must still be reported: {stderr}"
    );
    assert!(stdout.contains("0x401000"), "{stdout}");
}
