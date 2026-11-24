//! The parity gates: the datatest corpus (`tests/datatests`) against `docs/baseline.json` and
//! the stage corpus (`tests/stages`) against `docs/baseline-stages.json`.
//!
//! A TOML stage test (`tests/stages/*.toml`) is its own baseline: every assertion in it must
//! pass, and its names are not in `docs/baseline-stages.json`. The baseline holds the passing
//! assertions of the XML files only, keyed as before (a repeated name's `@dupN` counts over
//! the whole corpus, TOML files included, so converting a file never renames another's keys).
//!
//! Each corpus runs in this process through the harness's datatest runner
//! ([`run_test_files_with_specs`], the engine `decomp_test_dbg` drives), and its passing
//! assertions are compared with the baseline's `data:` keys. A test fails when a baseline
//! assertion no longer passes (REGRESSED), when any assertion fails, or when a test file cannot be
//! parsed or run; assertions that pass but are not in the baseline are reported, not failed.
//!
//! `cargo test -p unlace-harness --test parity` runs both. `UNLACE_BLESS=1` re-records the
//! baselines from the run (a deliberate default change, a new stage test) instead of comparing;
//! it refuses while any assertion fails or any file errors. Never bless to absorb a regression.
//! The corpora run from the repository root (their scripts load fixtures by relative path); each
//! `.sla` they need compiles from `specs/` into the `.sla` cache on first use.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::sync::Mutex;

use unlace_harness::testfunction::{describe_test_file, run_test_files_each};

/// The engine keeps a few process-wide settings; the two corpora run one after the other.
static SERIAL: Mutex<()> = Mutex::new(());

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .expect("the repository root")
}

/// The datatest stream of one corpus run.
#[derive(Debug, Default)]
struct DataResult {
    passing: Vec<String>,
    /// Indices into `passing` of the assertions that came from TOML stage tests.
    in_toml: BTreeSet<usize>,
    failing: Vec<String>,
    errors: Vec<String>,
    applied: i64,
    succeeded: i64,
}

fn parse_data(stdout: &str) -> DataResult {
    let mut r = DataResult::default();
    let mut errors = Vec::new();
    for raw in stdout.lines() {
        let line = raw.trim_end_matches([' ', '\t']);
        if let Some(name) = line.strip_prefix("Success -- ") {
            r.passing.push(name.to_string());
        } else if let Some(name) = line.strip_prefix("FAIL -- ") {
            r.failing.push(name.to_string());
        } else if let Some(file) = parse_data_error(line) {
            errors.push(file);
        } else if let Some(n) = line.strip_prefix("Total tests applied = ") {
            r.applied = n.trim().parse().unwrap_or(0);
        } else if let Some(n) = line.strip_prefix("Total passing tests = ") {
            r.succeeded = n.trim().parse().unwrap_or(0);
        }
    }
    let mut seen = BTreeSet::new();
    r.errors = errors
        .into_iter()
        .filter(|e| seen.insert(e.clone()))
        .collect();
    r
}

/// A file-level datatest error line (also in the indented `Failures:` summary), naming its file.
fn parse_data_error(line: &str) -> Option<String> {
    let t = line.trim_start();
    for kw in ["Error parsing ", "Error executing "] {
        if let Some(rest) = t.strip_prefix(kw)
            && let Some(idx) = rest.find(".xml: ").or_else(|| rest.find(".toml: "))
        {
            let end = rest[idx..].find(':').map_or(rest.len(), |c| idx + c);
            return Some(rest[..end].to_string());
        }
    }
    for kw in [
        "Error: Did not apply tests in ",
        "No output for ",
        "Execution failed for ",
    ] {
        if let Some(rest) = t.strip_prefix(kw)
            && (rest.ends_with(".xml") || rest.ends_with(".toml"))
        {
            return Some(rest.to_string());
        }
    }
    None
}

/// Baseline keys in run order: `data:<name>`, the Nth repeat of a name `data:<name> @dupN`.
fn dedup_list(prefix: &str, names: &[String]) -> Vec<String> {
    let mut seen: BTreeMap<&str, usize> = BTreeMap::new();
    names
        .iter()
        .map(|n| {
            let count = seen.entry(n).or_insert(0);
            *count += 1;
            if *count == 1 {
                format!("{prefix}{n}")
            } else {
                format!("{prefix}{n} @dup{count}")
            }
        })
        .collect()
}

fn dedup_keys(prefix: &str, names: &[String]) -> BTreeSet<String> {
    dedup_list(prefix, names).into_iter().collect()
}

/// The baseline's passing set; a record without a string-array `passing` is an error, never empty.
fn baseline_passing(text: &str) -> Result<BTreeSet<String>, String> {
    let value: serde_json::Value = serde_json::from_str(text).map_err(|e| e.to_string())?;
    let passing = value
        .get("passing")
        .and_then(|p| p.as_array())
        .ok_or("no \"passing\" array")?;
    passing
        .iter()
        .map(|k| {
            k.as_str()
                .map(str::to_string)
                .ok_or("a non-string passing key".to_string())
        })
        .collect()
}

/// Every `*.xml` and `*.toml` test directly in `dir`, sorted (the harness's `gatherDataTests`).
fn corpus_files(dir: &Path) -> Vec<String> {
    let mut files: Vec<String> = std::fs::read_dir(dir)
        .unwrap_or_else(|e| panic!("read {}: {e}", dir.display()))
        .flatten()
        .map(|e| e.path())
        .filter(|p| p.extension().is_some_and(|e| e == "xml" || e == "toml"))
        .map(|p| p.to_string_lossy().into_owned())
        .collect();
    files.sort();
    files
}

/// Is there a SLEIGH source anywhere under `dir`.
fn has_slaspec(dir: &Path) -> bool {
    std::fs::read_dir(dir)
        .into_iter()
        .flatten()
        .flatten()
        .any(|e| {
            let p = e.path();
            if p.is_dir() {
                has_slaspec(&p)
            } else {
                p.extension().is_some_and(|x| x == "slaspec")
            }
        })
}

fn run_corpus(root: &Path, corpus: &Path) -> DataResult {
    assert!(
        has_slaspec(&root.join("specs")),
        "specs/ holds no SLEIGH sources (.slaspec)"
    );
    let files = corpus_files(corpus);
    assert!(!files.is_empty(), "{} holds no tests", corpus.display());
    let mut specs = vec![root.join("specs").to_string_lossy().into_owned()];
    if let Ok(home) = std::env::var("SLEIGHHOME")
        && !home.is_empty()
    {
        specs.push(home);
    }
    let runs = std::thread::Builder::new()
        .name("parity".into())
        .stack_size(256 << 20)
        .spawn(move || run_test_files_each(&files, &specs))
        .expect("spawn the corpus thread")
        .join()
        .unwrap_or_else(|_| panic!("the engine panicked on {}", corpus.display()));
    let mut r = DataResult::default();
    for run in runs {
        let mut text = run.output;
        for f in &run.failures {
            text.push_str(f);
            text.push('\n');
        }
        let d = parse_data(&text);
        if run.file.ends_with(".toml") {
            r.in_toml
                .extend(r.passing.len()..r.passing.len() + d.passing.len());
        }
        r.passing.extend(d.passing);
        r.failing.extend(d.failing);
        for e in d.errors {
            if !r.errors.contains(&e) {
                r.errors.push(e);
            }
        }
        r.applied += i64::from(run.applied);
        r.succeeded += i64::from(run.succeeded);
    }
    r
}

/// The re-recorded baseline: this run's `data:` keys and footer, every other key kept.
fn blessed(old: Option<&str>, keys: &BTreeSet<String>, r: &DataResult) -> String {
    let old: serde_json::Value = old
        .and_then(|t| serde_json::from_str(t).ok())
        .unwrap_or(serde_json::Value::Null);
    let mut passing: BTreeSet<String> = old
        .get("passing")
        .and_then(|p| p.as_array())
        .into_iter()
        .flatten()
        .filter_map(|k| k.as_str())
        .filter(|k| !k.starts_with("data:"))
        .map(str::to_string)
        .collect();
    passing.extend(keys.iter().cloned());
    let failed = (r.applied - r.succeeded).clamp(0, 255);
    let unit_footer = old
        .get("unit_footer")
        .cloned()
        .unwrap_or(serde_json::Value::Null);
    let mut doc = serde_json::Map::new();
    doc.insert(
        "data_footer".into(),
        serde_json::json!([r.applied, r.succeeded]),
    );
    doc.insert("passing".into(), serde_json::json!(passing));
    doc.insert("returncode".into(), serde_json::json!(failed));
    doc.insert("unit_footer".into(), unit_footer);
    serde_json::to_string_pretty(&serde_json::Value::Object(doc)).expect("serialize the baseline")
}

fn parity(corpus: &str, baseline: &str) {
    let _serial = SERIAL.lock().unwrap_or_else(|e| e.into_inner());
    let root = repo_root();
    // Test scripts load their fixtures by repository-relative path.
    std::env::set_current_dir(&root).expect("enter the repository root");
    let r = run_corpus(&root, &root.join(corpus));
    let now: BTreeSet<String> = dedup_list("data:", &r.passing)
        .into_iter()
        .enumerate()
        .filter(|(i, _)| !r.in_toml.contains(i))
        .map(|(_, k)| k)
        .collect();
    let baseline_path = root.join(baseline);
    let text = std::fs::read_to_string(&baseline_path).ok();
    let broken = r.errors.len() + r.failing.len();

    if std::env::var_os("UNLACE_BLESS").is_some_and(|v| !v.is_empty() && v != "0") {
        assert!(
            broken == 0,
            "not re-recording {baseline}: {} failing assertions, {} file errors\n{}",
            r.failing.len(),
            r.errors.len(),
            r.failing
                .iter()
                .chain(&r.errors)
                .map(|n| format!("  {n}\n"))
                .collect::<String>()
        );
        std::fs::write(&baseline_path, blessed(text.as_deref(), &now, &r))
            .unwrap_or_else(|e| panic!("write {}: {e}", baseline_path.display()));
        println!("{baseline} re-recorded: {} passing assertions", now.len());
        return;
    }

    let text = text.unwrap_or_else(|| panic!("read {}", baseline_path.display()));
    let base: BTreeSet<String> = baseline_passing(&text)
        .unwrap_or_else(|e| panic!("{baseline} is not a baseline record: {e}"))
        .into_iter()
        .filter(|k| k.starts_with("data:"))
        .collect();
    let regressed: Vec<&String> = base.difference(&now).collect();
    let newly: Vec<&String> = now.difference(&base).collect();
    let mut report = format!(
        "{corpus}: {}/{} assertions passed ({} of them in TOML tests)\n",
        r.succeeded,
        r.applied,
        r.in_toml.len()
    );
    for n in &r.failing {
        report += &format!("  [data] {n}\n");
    }
    for f in &r.errors {
        report += &format!("  [data] ERROR in {f}\n");
    }
    if !regressed.is_empty() {
        report += &format!("REGRESSED ({}):\n", regressed.len());
        for k in &regressed {
            report += &format!("  {k}\n");
        }
    }
    if !newly.is_empty() {
        report += &format!(
            "newly passing ({}), re-record with UNLACE_BLESS=1:\n",
            newly.len()
        );
        for k in &newly {
            report += &format!("  {k}\n");
        }
    }
    let ok = regressed.is_empty() && broken == 0;
    report += if ok { "PARITY OK" } else { "PARITY FAIL" };
    assert!(ok, "{report}");
    println!("{report}");
}

#[test]
fn datatests_match_the_baseline() {
    parity("tests/datatests", "docs/baseline.json");
}

#[test]
fn stage_tests_match_the_baseline() {
    parity("tests/stages", "docs/baseline-stages.json");
}

/// Every TOML stage test loads exactly like the XML file it was converted from, read from git at
/// `UNLACE_STAGE_XML_REV` (default `HEAD`, so run it before committing a conversion):
/// `cargo test -p unlace-harness --test parity -- --ignored converted`.
#[test]
#[ignore = "run when converting stage tests (scripts/stage_toml.py)"]
fn converted_stage_tests_load_like_their_xml() {
    let root = repo_root();
    let rev = std::env::var("UNLACE_STAGE_XML_REV").unwrap_or_else(|_| "HEAD".into());
    let scratch = PathBuf::from(env!("CARGO_TARGET_TMPDIR")).join("stage-xml-ref");
    std::fs::create_dir_all(&scratch).expect("create the scratch directory");
    let mut compared = 0usize;
    let mut diffs = Vec::new();
    for toml in corpus_files(&root.join("tests/stages")) {
        let Some(stem) = toml
            .strip_suffix(".toml")
            .and_then(|s| s.rsplit('/').next())
        else {
            continue;
        };
        let show = std::process::Command::new("git")
            .args(["show", &format!("{rev}:tests/stages/{stem}.xml")])
            .current_dir(&root)
            .output()
            .expect("run git show");
        if !show.status.success() {
            continue;
        }
        let xml = scratch.join(format!("{stem}.xml"));
        std::fs::write(&xml, &show.stdout).expect("write the XML original");
        let want = describe_test_file(&xml.to_string_lossy());
        let have = describe_test_file(&toml);
        compared += 1;
        if want != have {
            let (w, h) = (want.unwrap_or_else(|e| e), have.unwrap_or_else(|e| e));
            let at = w.lines().zip(h.lines()).position(|(a, b)| a != b);
            let line = |s: &str| at.and_then(|i| s.lines().nth(i)).unwrap_or("").to_string();
            diffs.push(format!(
                "{stem}:\n  xml:  {}\n  toml: {}",
                line(&w),
                line(&h)
            ));
        }
    }
    assert!(
        compared > 0,
        "no TOML stage test has an XML original at {rev}"
    );
    assert!(
        diffs.is_empty(),
        "{} of {compared} converted stage tests differ from their XML:\n{}",
        diffs.len(),
        diffs.join("\n")
    );
    println!("{compared} converted stage tests load like their XML at {rev}");
}

#[test]
fn the_datatest_stream_parses() {
    let d = parse_data(
        "Success -- Test #1\nFAIL -- Test #2\nError parsing a.xml: bad\n  Error parsing a.xml: bad\n\
         Total tests applied = 2\nTotal passing tests = 1\n",
    );
    assert_eq!(d.passing, ["Test #1"]);
    assert_eq!(d.failing, ["Test #2"]);
    assert_eq!(d.errors, ["a.xml"]);
    assert_eq!((d.applied, d.succeeded), (2, 1));
    assert_eq!(
        parse_data_error("Error executing b.xml: trap").as_deref(),
        Some("b.xml")
    );
    assert_eq!(
        parse_data_error("Error: Did not apply tests in c.xml").as_deref(),
        Some("c.xml")
    );
    assert_eq!(
        parse_data_error("  No output for d.xml").as_deref(),
        Some("d.xml")
    );
    assert_eq!(
        parse_data_error("  Execution failed for e.xml").as_deref(),
        Some("e.xml")
    );
    assert_eq!(
        parse_data_error("Error parsing f.toml: no [image] table").as_deref(),
        Some("f.toml")
    );
    assert_eq!(
        parse_data_error("  Execution failed for g.toml").as_deref(),
        Some("g.toml")
    );
    assert_eq!(parse_data_error("Success -- a thing"), None);
}

#[test]
fn repeated_names_get_dup_keys() {
    let names = ["A", "A", "B"].map(String::from);
    let keys = dedup_keys("data:", &names);
    assert_eq!(
        keys,
        BTreeSet::from(["data:A", "data:A @dup2", "data:B"].map(String::from))
    );
}

#[test]
fn a_broken_baseline_is_never_an_empty_one() {
    let ok =
        baseline_passing(r#"{"passing":["data:b","unit:a","data:b"],"returncode":0}"#).unwrap();
    assert_eq!(ok, BTreeSet::from(["data:b", "unit:a"].map(String::from)));
    assert!(baseline_passing(r#"{"passing":[]}"#).unwrap().is_empty());
    for text in [
        "null",
        "[]",
        "{}",
        r#"{"passing":null}"#,
        r#"{"passing":"data:a"}"#,
        r#"{"passing":["data:a",1]}"#,
        r#"{"passing":[]} false"#,
    ] {
        assert!(baseline_passing(text).is_err(), "accepted {text}");
    }
}

#[test]
fn a_blessed_baseline_keeps_its_other_keys() {
    let r = DataResult {
        applied: 2,
        succeeded: 2,
        ..DataResult::default()
    };
    let keys = BTreeSet::from(["data:new".to_string()]);
    let old = r#"{"data_footer":[1,1],"passing":["data:old","unit:u"],"returncode":0,"unit_footer":[1,1]}"#;
    assert_eq!(
        blessed(Some(old), &keys, &r),
        "{\n  \"data_footer\": [\n    2,\n    2\n  ],\n  \"passing\": [\n    \"data:new\",\n    \"unit:u\"\n  ],\n  \"returncode\": 0,\n  \"unit_footer\": [\n    1,\n    1\n  ]\n}"
    );
}
