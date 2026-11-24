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
//! `UNLACE_PARITY_FILES=<paths or globs>` (comma-separated) runs only the matching files of each
//! corpus ([`parity_selection`]); the baseline's other keys are then not checked, and a corpus
//! none of whose files match is skipped.
//!
//! `cargo test -p unlace-harness --test parity` runs both, each corpus across up to eight
//! `decomp_test_dbg -worker` processes (`UNLACE_PARITY_JOBS=N`; `1` runs it in this process). `UNLACE_BLESS=1` re-records the
//! baselines from the run (a deliberate default change, a new stage test) instead of comparing;
//! it refuses while any assertion fails or any file errors. Never bless to absorb a regression.
//! The corpora run from the repository root (their scripts load fixtures by relative path); each
//! `.sla` they need compiles from `specs/` into the `.sla` cache on first use.

use std::collections::{BTreeMap, BTreeSet};
use std::path::{Path, PathBuf};
use std::sync::Mutex;

use unlace_harness::parallel::run_test_files_parallel;
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
    /// Each file's repository-relative path, wall time in ms and outcome (pass, fail, error).
    times: Vec<(String, u64, &'static str)>,
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

/// Worker processes for a corpus: `UNLACE_PARITY_JOBS` (1 runs the files in this process), else
/// the machine's parallelism up to 8.
fn parity_jobs() -> usize {
    std::env::var("UNLACE_PARITY_JOBS")
        .ok()
        .and_then(|j| j.parse().ok())
        .unwrap_or_else(|| std::thread::available_parallelism().map_or(1, |n| n.get().min(8)))
}

/// The `UNLACE_PARITY_FILES` selection: comma-separated paths or globs (`*` any run of
/// characters, `/` included; `?` one character), each matched against a corpus file's absolute
/// path, its repository-relative path, its file name and its name without the extension.
/// `None` (unset or empty) runs every file.
fn parity_selection() -> Option<Vec<String>> {
    let value = std::env::var("UNLACE_PARITY_FILES").ok()?;
    let patterns: Vec<String> = value
        .split(',')
        .map(|p| p.trim().trim_start_matches("./"))
        .filter(|p| !p.is_empty())
        .map(str::to_string)
        .collect();
    (!patterns.is_empty()).then_some(patterns)
}

/// Does `pattern` (`*`, `?`, else literal bytes) match all of `text`.
fn glob_match(pattern: &str, text: &str) -> bool {
    let (p, t) = (pattern.as_bytes(), text.as_bytes());
    let (mut pi, mut ti) = (0, 0);
    let mut star: Option<(usize, usize)> = None;
    while ti < t.len() {
        if pi < p.len() && (p[pi] == b'?' || p[pi] == t[ti]) {
            pi += 1;
            ti += 1;
        } else if pi < p.len() && p[pi] == b'*' {
            star = Some((pi, ti));
            pi += 1;
        } else if let Some((sp, st)) = star {
            pi = sp + 1;
            ti = st + 1;
            star = Some((sp, st + 1));
        } else {
            return false;
        }
    }
    p[pi..].iter().all(|&c| c == b'*')
}

/// Is corpus file `file` (absolute) one of `patterns`.
fn selected(root: &Path, file: &str, patterns: &[String]) -> bool {
    let path = Path::new(file);
    let rel = path
        .strip_prefix(root)
        .map(|r| r.to_string_lossy().into_owned())
        .unwrap_or_else(|_| file.to_string());
    let name = path
        .file_name()
        .map(|n| n.to_string_lossy().into_owned())
        .unwrap_or_default();
    let stem = path
        .file_stem()
        .map(|n| n.to_string_lossy().into_owned())
        .unwrap_or_default();
    patterns.iter().any(|p| {
        [file, rel.as_str(), name.as_str(), stem.as_str()]
            .iter()
            .any(|t| glob_match(p, t))
    })
}

/// The corpus run, or `None` when a selection matches none of its files.
fn run_corpus(root: &Path, corpus: &Path, select: Option<&[String]>) -> Option<DataResult> {
    assert!(
        has_slaspec(&root.join("specs")),
        "specs/ holds no SLEIGH sources (.slaspec)"
    );
    let mut files = corpus_files(corpus);
    assert!(!files.is_empty(), "{} holds no tests", corpus.display());
    if let Some(patterns) = select {
        files.retain(|f| selected(root, f, patterns));
        if files.is_empty() {
            return None;
        }
    }
    let mut specs = vec![root.join("specs").to_string_lossy().into_owned()];
    if let Ok(home) = std::env::var("SLEIGHHOME")
        && !home.is_empty()
    {
        specs.push(home);
    }
    let jobs = parity_jobs();
    let runs = if jobs > 1 {
        let exe = Path::new(env!("CARGO_BIN_EXE_decomp_test_dbg"));
        run_test_files_parallel(&files, &specs, jobs, exe)
    } else {
        std::thread::Builder::new()
            .name("parity".into())
            .stack_size(256 << 20)
            .spawn(move || run_test_files_each(&files, &specs))
            .expect("spawn the corpus thread")
            .join()
            .unwrap_or_else(|_| panic!("the engine panicked on {}", corpus.display()))
    };
    let mut r = DataResult::default();
    for run in runs {
        let mut text = run.output;
        for f in &run.failures {
            text.push_str(f);
            text.push('\n');
        }
        let d = parse_data(&text);
        let outcome = if !d.errors.is_empty() {
            "error"
        } else if !d.failing.is_empty() {
            "fail"
        } else {
            "pass"
        };
        let rel = Path::new(&run.file)
            .strip_prefix(root)
            .map_or_else(|_| run.file.clone(), |p| p.to_string_lossy().into_owned());
        r.times.push((rel, run.wall_ms, outcome));
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
    Some(r)
}

/// `target/parity-times.json`: per corpus, each file's wall time and outcome, slowest first. A
/// run replaces its own corpus's entry and keeps the other's; a write failure only warns.
fn write_parity_times(corpus: &str, r: &DataResult) {
    let Some(target) = Path::new(env!("CARGO_TARGET_TMPDIR")).parent() else {
        return;
    };
    let path = target.join("parity-times.json");
    let mut doc: serde_json::Map<String, serde_json::Value> = std::fs::read_to_string(&path)
        .ok()
        .and_then(|t| serde_json::from_str(&t).ok())
        .unwrap_or_default();
    let mut times = r.times.clone();
    times.sort_by(|a, b| b.1.cmp(&a.1).then_with(|| a.0.cmp(&b.0)));
    let rows: Vec<serde_json::Value> = times
        .iter()
        .map(|(file, ms, outcome)| serde_json::json!({"file": file, "ms": ms, "outcome": outcome}))
        .collect();
    doc.insert(corpus.to_string(), serde_json::Value::Array(rows));
    let text = serde_json::to_string_pretty(&serde_json::Value::Object(doc))
        .expect("serialize the parity times");
    if let Err(e) = std::fs::create_dir_all(target).and_then(|()| std::fs::write(&path, text)) {
        eprintln!("warning: could not write {}: {e}", path.display());
    }
}

/// A full run's assertions against the baseline: must-pass (the baseline's keys), regressed (a
/// must-pass key that no longer passes; fails the gate) and newly passing (passes, not in the
/// baseline; reported, never failing, so a bless that adds it is a deliberate step).
#[derive(Debug, PartialEq)]
struct Classes {
    must_pass: usize,
    regressed: Vec<String>,
    newly: Vec<String>,
}

impl Classes {
    fn of(base: &BTreeSet<String>, now: &BTreeSet<String>) -> Classes {
        Classes {
            must_pass: base.len(),
            regressed: base.difference(now).cloned().collect(),
            newly: now.difference(base).cloned().collect(),
        }
    }

    fn summary(&self, baseline: &str, failing: usize, errors: usize) -> String {
        format!(
            "  must-pass      {:>5}  ({baseline} keys; {} pass)\n  \
             regressed      {:>5}  (must-pass keys that no longer pass: the gate fails)\n  \
             newly passing  {:>5}  (pass, not in the baseline: reported, not failing)\n  \
             failing        {:>5}  (assertions that fail: the gate fails)\n  \
             file errors    {:>5}  (files that could not be parsed or run: the gate fails)\n",
            self.must_pass,
            self.must_pass - self.regressed.len(),
            self.regressed.len(),
            self.newly.len(),
            failing,
            errors
        )
    }

    /// The newly passing keys and the command that records them, or nothing.
    fn newly_block(&self, corpus: &str) -> String {
        if self.newly.is_empty() {
            return String::new();
        }
        let filter = if corpus.ends_with("datatests") {
            "datatests"
        } else {
            "stage_tests"
        };
        let mut s = format!(
            "{corpus}: newly passing ({}), not in the baseline; to record them deliberately:\n  \
             UNLACE_BLESS=1 cargo test -p unlace-harness --test parity {filter}\n",
            self.newly.len()
        );
        for k in &self.newly {
            s += &format!("  {k}\n");
        }
        s
    }
}

/// A baseline key's assertion name: `data:<name>` without its ` @dupN` suffix.
fn key_name(key: &str) -> &str {
    let name = key.strip_prefix("data:").unwrap_or(key);
    match name.rsplit_once(" @dup") {
        Some((n, dup)) if !dup.is_empty() && dup.bytes().all(|b| b.is_ascii_digit()) => n,
        _ => name,
    }
}

/// The report of a selected run (`UNLACE_PARITY_FILES`): the selected files' assertions are
/// compared with the baseline by name, as the corpus-wide `@dupN` numbering does not apply to a
/// subset. Every assertion must pass; a failing one the baseline holds is REGRESSED.
fn selected_report(corpus: &str, base_text: &str, r: &DataResult, files: &[String]) {
    let base: BTreeSet<String> = baseline_passing(base_text)
        .unwrap_or_else(|e| panic!("{corpus}: the baseline is not a baseline record: {e}"))
        .iter()
        .filter(|k| k.starts_with("data:"))
        .map(|k| key_name(k).to_string())
        .collect();
    let mut report = format!(
        "{corpus}: {}/{} assertions passed in {} selected files (UNLACE_PARITY_FILES; the \
         baseline's other keys are not checked)\n",
        r.succeeded,
        r.applied,
        files.len()
    );
    for f in files {
        report += &format!("  file {f}\n");
    }
    let regressed: Vec<&String> = r
        .failing
        .iter()
        .filter(|n| base.contains(n.as_str()))
        .collect();
    for n in &r.failing {
        report += &format!("  [data] {n}\n");
    }
    for f in &r.errors {
        report += &format!("  [data] ERROR in {f}\n");
    }
    if !regressed.is_empty() {
        report += &format!("REGRESSED ({}):\n", regressed.len());
        for n in &regressed {
            report += &format!("  {n}\n");
        }
    }
    let newly: Vec<(usize, &String)> = r
        .passing
        .iter()
        .enumerate()
        .filter(|(i, n)| !r.in_toml.contains(i) && !base.contains(n.as_str()))
        .collect();
    if !newly.is_empty() {
        report += &format!(
            "newly passing ({}), re-record with UNLACE_BLESS=1 on a full run:\n",
            newly.len()
        );
        for (_, n) in &newly {
            report += &format!("  {n}\n");
        }
    }
    let ok = r.failing.is_empty() && r.errors.is_empty();
    report += if ok { "PARITY OK" } else { "PARITY FAIL" };
    assert!(ok, "{report}");
    println!("{report}");
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
    let select = parity_selection();
    let Some(r) = run_corpus(&root, &root.join(corpus), select.as_deref()) else {
        println!("{corpus}: UNLACE_PARITY_FILES selects none of its files, skipped");
        return;
    };
    write_parity_times(corpus, &r);
    let (in_toml, now): (Vec<_>, Vec<_>) = dedup_list("data:", &r.passing)
        .into_iter()
        .enumerate()
        .partition(|(i, _)| r.in_toml.contains(i));
    let now: BTreeSet<String> = now.into_iter().map(|(_, k)| k).collect();
    let toml_keys: BTreeSet<String> = in_toml.into_iter().map(|(_, k)| k).collect();
    let baseline_path = root.join(baseline);
    let text = std::fs::read_to_string(&baseline_path).ok();
    let broken = r.errors.len() + r.failing.len();

    if std::env::var_os("UNLACE_BLESS").is_some_and(|v| !v.is_empty() && v != "0") {
        assert!(
            select.is_none(),
            "not re-recording {baseline} from a selected run: unset UNLACE_PARITY_FILES"
        );
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
    if let Some(patterns) = &select {
        let files: Vec<String> = corpus_files(&root.join(corpus))
            .into_iter()
            .filter(|f| selected(&root, f, patterns))
            .collect();
        selected_report(corpus, &text, &r, &files);
        return;
    }
    let base: BTreeSet<String> = baseline_passing(&text)
        .unwrap_or_else(|e| panic!("{baseline} is not a baseline record: {e}"))
        .into_iter()
        .filter(|k| k.starts_with("data:"))
        .collect();
    // A key a TOML test owns (left by a baseline recorded before its file was converted) is
    // checked in place, not against the baseline.
    let stale = base.intersection(&toml_keys).count();
    let base: BTreeSet<String> = base.difference(&toml_keys).cloned().collect();
    let classes = Classes::of(&base, &now);
    let mut report = format!(
        "{corpus}: {}/{} assertions passed ({} of them in TOML tests)\n",
        r.succeeded,
        r.applied,
        r.in_toml.len()
    );
    report += &classes.summary(baseline, r.failing.len(), r.errors.len());
    if stale > 0 {
        report += &format!(
            "{stale} baseline keys belong to TOML tests and are ignored (UNLACE_BLESS=1 drops them)\n"
        );
    }
    for n in &r.failing {
        report += &format!("  [data] {n}\n");
    }
    for f in &r.errors {
        report += &format!("  [data] ERROR in {f}\n");
    }
    if !classes.regressed.is_empty() {
        report += &format!("REGRESSED ({}):\n", classes.regressed.len());
        for k in &classes.regressed {
            report += &format!("  {k}\n");
        }
    }
    let newly = classes.newly_block(corpus);
    report += &newly;
    let ok = classes.regressed.is_empty() && broken == 0;
    report += if ok { "PARITY OK" } else { "PARITY FAIL" };
    assert!(ok, "{report}");
    println!("{report}");
    // Past cargo test's capture, so a passing run still shows what a bless would add.
    if !newly.is_empty() {
        use std::io::Write as _;
        let _ = std::io::stderr().write_all(newly.as_bytes());
    }
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
fn the_file_selection_matches_paths_names_and_globs() {
    assert!(glob_match("kuna-*.toml", "wideslice.toml"));
    assert!(glob_match(
        "tests/stages/*wide*",
        "tests/stages/wideslice.toml"
    ));
    assert!(glob_match("gh55?-*", "gh558-compareform"));
    assert!(glob_match("*", ""));
    assert!(!glob_match("kuna-*.xml", "wideslice.toml"));
    assert!(!glob_match("a?c", "ac"));
    let root = Path::new("/repo");
    let file = "/repo/tests/stages/wideslice.toml";
    for p in [
        "wideslice",
        "wideslice.toml",
        "tests/stages/wideslice.toml",
        "/repo/tests/stages/wideslice.toml",
        "tests/stages/kuna-wide*",
    ] {
        assert!(selected(root, file, &[p.to_string()]), "{p}");
    }
    assert!(!selected(root, file, &["tests/datatests/*".to_string()]));
}

#[test]
fn the_report_classifies_must_pass_regressed_and_newly_passing() {
    let set = |k: &[&str]| {
        k.iter()
            .map(|s| s.to_string())
            .collect::<BTreeSet<String>>()
    };
    let c = Classes::of(&set(&["data:a", "data:b"]), &set(&["data:b", "data:c"]));
    assert_eq!(
        c,
        Classes {
            must_pass: 2,
            regressed: vec!["data:a".into()],
            newly: vec!["data:c".into()],
        }
    );
    let block = c.newly_block("tests/stages");
    assert!(
        block.contains("UNLACE_BLESS=1 cargo test -p unlace-harness --test parity stage_tests")
    );
    assert!(block.contains("  data:c\n"));
    assert!(
        c.summary("b.json", 0, 0)
            .contains("must-pass          2  (b.json keys; 1 pass)")
    );
    assert_eq!(
        Classes::of(&set(&["data:a"]), &set(&["data:a"])).newly_block("x"),
        ""
    );
}

#[test]
fn baseline_keys_name_their_assertion() {
    assert_eq!(key_name("data:Test #1"), "Test #1");
    assert_eq!(key_name("data:Test #1 @dup2"), "Test #1");
    assert_eq!(key_name("data:a @dupe"), "a @dupe");
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
