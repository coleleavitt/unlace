//! CLI end-to-end gate for `unlace decompile-all` / `unlace functions` — drives the
//! built `unlace` binary over the real vendored `fauxware` ELF and asserts the
//! machine-readable JSON surface decbench and an LLM driver consume.
//!
//! Integration tests require the built processor specs under `specs/`.

#[path = "../common/mod.rs"]
mod common;

use common::process;

#[cfg(unix)]
#[path = "../common/compiler_probe_tests.rs"]
mod compiler_probe_tests;

use std::path::PathBuf;
use std::process::{Command, Stdio};
use std::time::{Duration, Instant};

use unlace_testkit::repo_root;

mod aarch64_returns;
mod bejoin;
mod callrettype;
mod elemptr;
mod float_roundtrip;
mod inventory;
mod jobs_dead_worker;
mod jobs_decode_lanes;
mod jobs_pool;
mod noreturn;
mod printed_c_casts;
mod printed_c_globals;
mod raw_image;
mod sizes;
mod te_image;
mod watchdog;

fn fauxware() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/fauxware")
        .to_str()
        .unwrap()
        .to_string()
}

/// `fauxware`'s `main` returns `accepted()`'s value, which the serial default's
/// callee-first order settles otherwise than a pool can
/// ([`jobs_notes_that_the_default_callee_first_order_is_serial_only`]), so the
/// pool runs held to the serial document turn that order off on both sides.
const SERIAL_ORDER_OFF: [&str; 3] = ["--option", "protoorder", "off"];

/// The checked-in stripped-ELF hang repro (`tests/hang-repro/README.md`): a
/// fully-stripped x86-64 openssh `ssh-sk-helper` whose `sub_1bd04` @ 0x1bd04
/// never converges in the decompile pipeline (the `--max-fn-seconds` watchdog's
/// raison d'être).
fn hang_repro() -> String {
    repo_root()
        .join("tests/hang-repro/ssh-sk-helper")
        .to_str()
        .unwrap()
        .to_string()
}

fn specs() -> String {
    repo_root().join("specs").to_str().unwrap().to_string()
}

/// A small **ARM 32-bit** (Thumb) ELF fixture — the non-x86-64 discovery surface
/// where `decompile-all` defaults `funcstart_patterns` ON (DIV-20).
fn arm_thumb() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/arm_thumb_linked_le32")
        .to_str()
        .unwrap()
        .to_string()
}

#[test]
fn explicit_isa_does_not_pin_uniform_recovery_spans() {
    let bin = repo_root().join("crates/unlace-analysis/tests/fixtures/arm_interwork_stubs_o0_le32");
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        bin.to_str().unwrap(),
        "--json",
        "--isa",
        "arm",
        "--mode",
        "reliable",
        "--option",
        "funcstart_patterns",
        "on",
        "--option",
        "armframes",
        "on",
        "--option",
        "aif",
        "on",
    ]);
    assert!(ok, "{stderr}");
    let doc: serde_json::Value = serde_json::from_str(&stdout).unwrap();
    let function = doc["functions"]
        .as_array()
        .unwrap()
        .iter()
        .find(|function| function["address"].as_u64() == Some(0x48a))
        .unwrap();
    let code = function["code"].as_str().unwrap();
    assert!(
        code.contains("dat_2010") && !code.contains("halt_baddata"),
        "{code}"
    );
}

fn arm_thumb_pe() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/armv4t_thumb_pe.exe")
        .to_str()
        .unwrap()
        .to_string()
}

fn dialog_callbacks_pe() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/stdcallpop_pe_i386.exe")
        .to_str()
        .unwrap()
        .to_string()
}

/// An executable callback pointer passed to DialogBoxParamA must seed the dialog
/// procedure, and rebuilding from that procedure must discover its nested dialog
/// callback in the same run.
#[test]
fn inventory_and_decompile_all_include_nested_dialog_callbacks() {
    let bin = dialog_callbacks_pe();
    let sp = specs();
    let (inventory, stderr, ok) = run_unlace(&["functions", &bin, "--json", "--sleighpath", &sp]);
    assert!(ok, "unlace functions failed: {stderr}");
    assert!(
        inventory.contains("\"address_hex\": \"0x401000\"")
            && inventory.contains("\"address_hex\": \"0x401410\""),
        "nested dialog callbacks are absent from the inventory: {inventory}"
    );
    let parent = inventory
        .find("\"address_hex\": \"0x4013e0\"")
        .map(|start| &inventory[start..inventory.len().min(start + 240)])
        .expect("parent function 0x4013e0 is absent");
    assert!(
        (41..=48).any(|size| parent.contains(&format!("\"size\": {size}"))),
        "the parent extent still covers its callback: {parent}"
    );

    let (without, stderr, ok) = run_unlace(&[
        "functions",
        &bin,
        "--json",
        "--sleighpath",
        &sp,
        "--option",
        "fast_funcdisc",
        "off",
    ]);
    assert!(
        ok,
        "unlace functions with fast_funcdisc off failed: {stderr}"
    );
    assert!(
        !without.contains("\"address_hex\": \"0x401000\"")
            && !without.contains("\"address_hex\": \"0x401410\""),
        "fast_funcdisc off no longer restores the prior inventory: {without}"
    );

    let (whole, stderr, ok) = run_unlace(&["decompile-all", &bin, "--json", "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for (address, body) in [("0x401000", "sub_401000"), ("0x401410", "sub_401410")] {
        assert!(
            whole.contains(&format!("\"address_hex\": \"{address}\"")) && whole.contains(body),
            "decompile-all omitted callback {address}: {whole}"
        );
    }
}

fn write_thumb_te() -> PathBuf {
    let bytes =
        unlace_analysis::loadimage_te::synthetic::TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build();
    let path = common::scratch_file("cli-thumb", "te");
    std::fs::write(&path, bytes).unwrap();
    path
}

/// A larger **ARM 32-bit** ELF fixture with a function the prologue-`<patternpairs>`
/// matcher genuinely finds and the entry oracles do not (`0x410`) — the fixture the
/// DIV-20 `funcstart_patterns` assertion needs.
///
/// `arm_thumb()` cannot serve that role: it holds exactly two functions, both
/// already named by `.symtab`, so `funcstart_patterns` adds no real entry there.
/// Before issue #197 the assertion appeared to pass on it only because the pass's
/// extra "discoveries" were duplicate records for those same two functions (a
/// `sub_<addr>` alias plus an odd-address Thumb `entry|1` phantom).
fn arm_entrymain() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/entrymain_arm")
        .to_str()
        .unwrap()
        .to_string()
}

/// A C++ ELF whose `main` calls a **namespaced** member, `foo::Bar::baz`. A name
/// is installed into the scope its `::` path names, so this is the fixture where
/// a second function symbol at one address lands in a different scope from the
/// first and the across-scopes display lookup starts answering with the wrong
/// one.
fn cpp_mangled() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/cpp_mangled_x86_64")
        .to_str()
        .unwrap()
        .to_string()
}

fn json_count(stdout: &str) -> Option<usize> {
    let document: serde_json::Value = serde_json::from_str(stdout).expect("valid CLI JSON");
    document
        .get("count")
        .and_then(serde_json::Value::as_u64)
        .and_then(|value| usize::try_from(value).ok())
}

fn json_addresses(stdout: &str) -> Vec<u64> {
    let document: serde_json::Value = serde_json::from_str(stdout).expect("valid CLI JSON");
    document
        .get("functions")
        .and_then(serde_json::Value::as_array)
        .expect("function array")
        .iter()
        .map(|function| {
            function
                .get("address")
                .and_then(serde_json::Value::as_u64)
                .expect("numeric function address")
        })
        .collect()
}

#[test]
fn json_helpers_use_function_fields_and_preserve_raw_records() {
    let document = r#"{"metadata":{"count":99,"address":99,"size":99},"count":2,"functions":[
  {"name":"a\"b","address":1,"size":4,"variables":[{"size":32}]},
  {"name":"second","address":2,"size":8}
]}"#;
    assert_eq!(json_count(document), Some(2));
    assert_eq!(json_addresses(document), [1, 2]);
    assert_eq!(json_sizes(document), [4, 8]);
    let records = json_records(document);
    assert_eq!(records.len(), 2);
    assert_eq!(record_name(records[0]), "a\"b");
    assert_eq!(
        records[0],
        r#"{"name":"a\"b","address":1,"size":4,"variables":[{"size":32}]}"#
    );
}

#[test]
fn json_helpers_reject_malformed_documents() {
    for document in [r#"{"count":2garbage}"#, r#"{"count":2} trailing"#] {
        assert!(std::panic::catch_unwind(|| json_count(document)).is_err());
    }
}

/// Run `unlace <cmd> <bin> --mode reliable --json` and return its entry addresses.
fn run_json_addrs(cmd: &str, bin: &str, sp: &str, extra: &[&str]) -> Vec<u64> {
    let mut args = vec![cmd, bin, "--json", "--sleighpath", sp, "--mode", "reliable"];
    args.extend_from_slice(extra);
    let (stdout, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace {cmd} failed on {bin}: {stderr}");
    }
    json_addresses(&stdout)
}

/// The `error(nonzero,…)` boundary-overrun fixture (`noreturn_error_x86_64`):
/// `err_fatal.constprop.0` @ 0x4011c0 ends in `call error(2,…)` and is immediately
/// followed by `compute` @ 0x4011f0.
fn noreturn_error_fixture() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/noreturn_error_x86_64")
        .to_str()
        .unwrap()
        .to_string()
}

/// The decode-lane knobs (`unlace_pdecode`). Cleared from every child here so a
/// suite run under `UNLACE_DECODE_JOBS=8 UNLACE_DECODE_MIN_BYTES=0` -- which is how
/// DIV-169 says to exercise the gates -- cannot move a baseline these tests take
/// for granted; each test then sets only what it means to.
const DECODE_ENV: [&str; 6] = [
    "UNLACE_DECODE_JOBS",
    "UNLACE_DECODE_MIN_BYTES",
    "UNLACE_DECODE_INTERVALS",
    "UNLACE_DECODE_SELFCHECK",
    "UNLACE_DECODE_STATS",
    "UNLACE_DECODE_FAULT",
];

/// A `unlace` invocation with this suite's environment hygiene, plus `env`.
fn unlace_command(env: &[(&str, &str)]) -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_DECOMP_DBG")
        .env_remove("UNLACE_SLACOMP")
        .env_remove("UNLACE_SLACOMP");
    // A lane fault reports itself in one line; `RUST_BACKTRACE` deliberately
    // turns the runtime's panic block back on, so it must not reach a child
    // whose whole assertion is that the block is absent.
    cmd.env_remove("RUST_BACKTRACE");
    cmd.env_remove("UNLACE_JOBS_FAULT")
        .env_remove("UNLACE_JOBS_FAULT");
    cmd.env_remove("UNLACE_RENDER_FAULT")
        .env_remove("UNLACE_RENDER_FAULT");
    cmd.env_remove("UNLACE_JUMPTABLE_FAULT")
        .env_remove("UNLACE_JUMPTABLE_FAULT");
    for name in DECODE_ENV {
        cmd.env_remove(name);
    }
    for (name, value) in env {
        cmd.env(name, value);
    }
    cmd
}

/// Run the built `unlace` binary, returning `(stdout, stderr, success)`.
fn run_unlace(args: &[&str]) -> (String, String, bool) {
    run_unlace_env(args, &[])
}

/// Run the built `unlace` binary with a hard outer wall-clock `cap`, returning
/// `Some((stdout, stderr, success))` if it exited in time, `None` if it had to
/// be killed.  The outer cap is the regression guard for the watchdog itself:
/// without `--max-fn-seconds` the hang-repro invocation would spin forever.
fn run_unlace_with_timeout(args: &[&str], cap: Duration) -> Option<(String, String, bool)> {
    run_unlace_env_with_timeout(args, &[], cap)
}

/// [`run_unlace_with_timeout`] with extra environment. Every fault-injecting
/// invocation goes through this: the failure the fallback exists to prevent is a
/// deadlock, and a wedged test binary reports nothing at all.
fn run_unlace_env_with_timeout(
    args: &[&str],
    env: &[(&str, &str)],
    cap: Duration,
) -> Option<(String, String, bool)> {
    process::output_with_timeout(
        unlace_command(env).args(args),
        cap,
        Duration::from_millis(200),
    )
    .map(|output| {
        (
            String::from_utf8_lossy(&output.stdout).into_owned(),
            String::from_utf8_lossy(&output.stderr).into_owned(),
            output.status.success(),
        )
    })
}

/// The `noreturn_propagate` fixture (`unlace-analysis/tests/fixtures/`): a
/// non-PIE x86-64 ELF whose custom no-return wrapper `my_die` (ending in
/// `call abort` + NOP padding, called from a SINGLE site) is only concluded
/// no-return by the call-graph propagation fixpoint — the mechanism the
/// decompile-all Listing default (decbench F1, DIV-15) exists to activate.
fn noreturn_fixture() -> String {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures/noreturn_propagate_x86_64")
        .to_str()
        .unwrap()
        .to_string()
}

/// Extract the JSON-escaped `code` string of the first function record (shape
/// assertion helper — no JSON dep, mirrors the other raw-substring checks).
fn code_field(stdout: &str) -> &str {
    let start = stdout
        .find("\"code\": \"")
        .expect("record has a code field")
        + 9;
    let rest = &stdout[start..];
    // The code string ends at the first unescaped quote.
    let mut end = 0;
    let bytes = rest.as_bytes();
    while end < bytes.len() {
        match bytes[end] {
            b'\\' => end += 2,
            b'"' => break,
            _ => end += 1,
        }
    }
    &rest[..end]
}

fn json_sizes(stdout: &str) -> Vec<u64> {
    let document: serde_json::Value = serde_json::from_str(stdout).expect("valid CLI JSON");
    document
        .get("functions")
        .and_then(serde_json::Value::as_array)
        .expect("function array")
        .iter()
        .map(|function| {
            function
                .get("size")
                .and_then(serde_json::Value::as_u64)
                .expect("numeric function size")
        })
        .collect()
}

/// The functions of a `decompile-all` document whose headers start with one of
/// `names`, each `struct_N` typedef and definition that `structdefs` printed
/// above them kept once and hoisted, so the set compiles as one file.
fn printed_functions(stdout: &str, names: &[&str]) -> String {
    let mut defs: Vec<String> = Vec::new();
    let mut bodies = String::new();
    for chunk in stdout
        .split("// Function: ")
        .filter(|c| names.iter().any(|n| c.starts_with(n)))
    {
        let mut lines = chunk.lines();
        bodies.push_str("// ");
        while let Some(line) = lines.next() {
            if line.starts_with("typedef struct struct_") {
                let def = format!("{line}\n");
                if !defs.contains(&def) {
                    defs.insert(0, def);
                }
            } else if line.starts_with("struct struct_") && line.ends_with('{') {
                let mut def = format!("{line}\n");
                for l in lines.by_ref() {
                    def.push_str(l);
                    def.push('\n');
                    if l == "};" {
                        break;
                    }
                }
                if !defs.contains(&def) {
                    defs.push(def);
                }
            } else {
                bodies.push_str(line);
                bodies.push('\n');
            }
        }
        bodies.push('\n');
    }
    format!("{}{bodies}", defs.concat())
}

/// The compilers a round trip is run with: every one of `gcc` and `clang` that
/// runs here, or `cc` when neither does.
fn round_trip_compilers() -> Vec<&'static str> {
    let runs = |cc: &str| process::optional_output(Command::new(cc).arg("--version")).is_some();
    let found: Vec<&'static str> = ["gcc", "clang"].into_iter().filter(|cc| runs(cc)).collect();
    if found.is_empty() && runs("cc") {
        vec!["cc"]
    } else {
        found
    }
}

/// Compile `src` with each of [`round_trip_compilers`] (a pointer handed to an
/// integer, or an integer to a pointer, is an error, as it is under CI's gcc 13
/// and clang 18), run it, and return each compiler's stdout.
fn compile_and_run_each(tag: &str, src: &str) -> Vec<(String, String)> {
    let dir = std::env::temp_dir().join(format!("unlace-{tag}-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let file = dir.join("rt.c");
    std::fs::write(&file, src).unwrap();
    let mut out = Vec::new();
    for cc in round_trip_compilers() {
        let exe = dir.join(format!("rt-{cc}"));
        let built = Command::new(cc)
            .args(common::CC_GCC15_DEMOTE)
            .args([
                "-std=gnu11",
                "-w",
                "-Werror=int-conversion",
                "-Werror=implicit-function-declaration",
                "-o",
            ])
            .arg(&exe)
            .arg(&file)
            .output()
            .expect("spawn the compiler");
        assert!(
            built.status.success(),
            "{cc} rejected the printed C:\n{}\n{src}",
            String::from_utf8_lossy(&built.stderr)
        );
        let run = Command::new(&exe).output().expect("run the round trip");
        out.push((
            cc.to_string(),
            String::from_utf8_lossy(&run.stdout).trim().to_string(),
        ));
    }
    let _ = std::fs::remove_dir_all(&dir);
    out
}

/// Parse records while retaining their original bytes for equality checks.
fn json_records(doc: &str) -> Vec<&str> {
    #[derive(serde::Deserialize)]
    struct Records<'a> {
        #[serde(borrow)]
        functions: Vec<&'a serde_json::value::RawValue>,
    }
    let document: Records<'_> = serde_json::from_str(doc).expect("valid function records");
    document
        .functions
        .into_iter()
        .map(|record| record.get())
        .collect()
}

fn record_name(record: &str) -> String {
    let record: serde_json::Value = serde_json::from_str(record).expect("valid function record");
    record
        .get("name")
        .and_then(serde_json::Value::as_str)
        .expect("function name")
        .to_owned()
}

/// The count a `[unlace <tag>] N function(s) left unfinished ... recovered.` line
/// reports, or `None` when the run printed no such line.
fn recovered_count(stderr: &str) -> Option<usize> {
    let line = stderr
        .lines()
        .find(|l| l.contains("left unfinished by a failed worker process"))?;
    line.split("] ").nth(1)?.split(' ').next()?.parse().ok()
}

/// Run `unlace` with extra environment, for the decode-lane knobs.
fn run_unlace_env(args: &[&str], env: &[(&str, &str)]) -> (String, String, bool) {
    let out = unlace_command(env)
        .args(args)
        .output()
        .expect("failed to spawn the unlace binary");
    (
        String::from_utf8_lossy(&out.stdout).into_owned(),
        String::from_utf8_lossy(&out.stderr).into_owned(),
        out.status.success(),
    )
}

/// The printed text of the functions `names` in a `decompile-all` listing, in
/// listing order, each from its `// Function:` header to the next.
fn callrettype_functions(listing: &str, names: &[&str]) -> String {
    let mut out = String::new();
    for part in listing.split("// Function: ").skip(1) {
        let name = part.split_whitespace().next().unwrap_or("");
        if names.contains(&name) {
            out.push_str("// Function: ");
            out.push_str(part);
        }
    }
    out
}
