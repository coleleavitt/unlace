//! Processor-family smoke tests from the `processors.toml` manifest: each function of each
//! family's raw image decompiles through the CLI without unimplemented or bad instructions, and its
//! output carries the expected text. A function with `xfail = "<why>"` is a known failure: it is
//! reported, and fails the test once it passes. `UNLACE_PROCESSORS=lanai,meta` runs only the named
//! families. A `loader = "auto"` family loads its fixture as a file (ELF, ...) instead, so the
//! loader picks the language and applies the relocations.

use std::path::{Path, PathBuf};

use crate::common::{repo_root, run_unlace, scratch_file};

const MANIFEST: &str = include_str!("processors.toml");

/// Always forbidden, case-insensitively, in every function's output.
const ALWAYS_FORBIDDEN: [&str; 2] = ["unimplemented", "bad instruction"];

#[derive(Debug)]
struct Case {
    family: String,
    test: String,
    language: String,
    base: String,
    address: String,
    image: PathBuf,
    /// Load the fixture as a file (ELF, ...) and let the loader pick the
    /// language, instead of `--raw-image --target --base`.
    loaded: bool,
    args: Vec<String>,
    forbid: Vec<String>,
    expect: Vec<String>,
    xfail: Option<String>,
}

fn str_field<'a>(t: &'a toml::Table, key: &str, ctx: &str) -> Result<&'a str, String> {
    t.get(key)
        .ok_or_else(|| format!("{ctx}: missing `{key}`"))?
        .as_str()
        .ok_or_else(|| format!("{ctx}: `{key}` is not a string"))
}

fn str_list(t: &toml::Table, key: &str, ctx: &str) -> Result<Vec<String>, String> {
    match t.get(key) {
        None => Ok(Vec::new()),
        Some(toml::Value::String(s)) => Ok(vec![s.clone()]),
        Some(toml::Value::Array(a)) => a
            .iter()
            .map(|v| {
                v.as_str()
                    .map(str::to_owned)
                    .ok_or_else(|| format!("{ctx}: `{key}` holds a non-string"))
            })
            .collect(),
        Some(_) => Err(format!("{ctx}: `{key}` is not a string or a list")),
    }
}

fn check_keys(t: &toml::Table, allowed: &[&str], ctx: &str) -> Result<(), String> {
    match t.keys().find(|k| !allowed.contains(&k.as_str())) {
        Some(k) => Err(format!("{ctx}: unknown key `{k}`")),
        None => Ok(()),
    }
}

fn hex_bytes(hex: &str, ctx: &str) -> Result<Vec<u8>, String> {
    let digits: Vec<u8> = hex.bytes().filter(|b| !b.is_ascii_whitespace()).collect();
    if digits.len() % 2 != 0 {
        return Err(format!("{ctx}: odd number of hex digits"));
    }
    digits
        .chunks(2)
        .map(|p| {
            std::str::from_utf8(p)
                .ok()
                .and_then(|s| u8::from_str_radix(s, 16).ok())
                .ok_or_else(|| format!("{ctx}: bad hex pair {:?}", String::from_utf8_lossy(p)))
        })
        .collect()
}

/// Every (function, language) pair the manifest lists, in manifest order.
fn load_cases(text: &str, root: &Path) -> Result<Vec<Case>, String> {
    let doc: toml::Table = text.parse().map_err(|e| format!("processors.toml: {e}"))?;
    check_keys(&doc, &["images", "family"], "processors.toml")?;
    let images = match doc.get("images") {
        None => toml::Table::new(),
        Some(v) => v.as_table().ok_or("[images] is not a table")?.clone(),
    };
    let families = doc
        .get("family")
        .and_then(|f| f.as_array())
        .ok_or("processors.toml: no [[family]] rows")?;
    let mut cases = Vec::new();
    let mut seen = std::collections::BTreeSet::new();
    for fam in families {
        let fam = fam.as_table().ok_or("a [[family]] row is not a table")?;
        let name = str_field(fam, "name", "[[family]]")?;
        if !seen.insert(name) {
            return Err(format!("{name}: family name used twice"));
        }
        check_keys(
            fam,
            &[
                "name", "language", "base", "fixture", "image", "args", "forbid", "function",
                "loader",
            ],
            name,
        )?;
        let loaded = match fam.get("loader") {
            None => false,
            Some(_) if str_field(fam, "loader", name)? == "auto" => true,
            Some(_) => return Err(format!("{name}: `loader` must be \"auto\"")),
        };
        let base = match (loaded, fam.get("base")) {
            (true, None) => "",
            (true, Some(_)) => return Err(format!("{name}: a `loader` row takes no `base`")),
            (false, _) => str_field(fam, "base", name)?,
        };
        let image = match (fam.get("fixture"), fam.get("image")) {
            (Some(_), None) => root.join(str_field(fam, "fixture", name)?),
            (None, Some(_)) => {
                let key = str_field(fam, "image", name)?;
                let hex = images
                    .get(key)
                    .and_then(|v| v.as_str())
                    .ok_or_else(|| format!("{name}: no [images] entry `{key}`"))?;
                let path = scratch_file(&format!("processor-{key}"), "bin");
                std::fs::write(&path, hex_bytes(hex, key)?).map_err(|e| e.to_string())?;
                path
            }
            _ => return Err(format!("{name}: give exactly one of `fixture` and `image`")),
        };
        let fam_langs = str_list(fam, "language", name)?;
        let fam_forbid = str_list(fam, "forbid", name)?;
        let args = str_list(fam, "args", name)?;
        let functions = fam
            .get("function")
            .and_then(|f| f.as_array())
            .ok_or_else(|| format!("{name}: no [[family.function]] rows"))?;
        for func in functions {
            let func = func
                .as_table()
                .ok_or_else(|| format!("{name}: a function row is not a table"))?;
            let test = str_field(func, "test", name)?;
            check_keys(
                func,
                &["test", "language", "address", "forbid", "expect", "xfail"],
                test,
            )?;
            let langs = match func.get("language") {
                Some(_) => str_list(func, "language", test)?,
                None => fam_langs.clone(),
            };
            if loaded && !langs.is_empty() {
                return Err(format!(
                    "{test}: a `loader` row picks its language; drop `language`"
                ));
            }
            let langs = if loaded {
                vec!["auto".to_owned()]
            } else {
                langs
            };
            if langs.is_empty() {
                return Err(format!(
                    "{test}: no `language` on the function or its family"
                ));
            }
            let mut forbid = fam_forbid.clone();
            forbid.extend(str_list(func, "forbid", test)?);
            let expect = str_list(func, "expect", test)?;
            let address = str_field(func, "address", test)?;
            let xfail = match func.get("xfail") {
                None => None,
                Some(_) => Some(str_field(func, "xfail", test)?.to_owned()),
            };
            for language in langs {
                cases.push(Case {
                    family: name.to_owned(),
                    test: test.to_owned(),
                    language,
                    base: base.to_owned(),
                    address: address.to_owned(),
                    image: image.clone(),
                    loaded,
                    args: args.clone(),
                    forbid: forbid.clone(),
                    expect: expect.clone(),
                    xfail: xfail.clone(),
                });
            }
        }
    }
    Ok(cases)
}

/// The failures of one case; empty when it passes.
fn run_case(c: &Case) -> Vec<String> {
    let image = c.image.to_string_lossy();
    let mut argv: Vec<&str> = vec!["decompile", &image, &c.address];
    if !c.loaded {
        argv.extend(["--raw-image", "--target", &c.language, "--base", &c.base]);
    }
    argv.extend(c.args.iter().map(String::as_str));
    let (stdout, stderr, code) = run_unlace(&argv);
    if code != 0 {
        return vec![format!("exit {code}: {stderr}")];
    }
    let lower = stdout.to_lowercase();
    let mut bad: Vec<String> = ALWAYS_FORBIDDEN
        .iter()
        .copied()
        .chain(c.forbid.iter().map(String::as_str))
        .filter(|f| lower.contains(&f.to_lowercase()))
        .map(|f| format!("contains forbidden {f:?}"))
        .collect();
    bad.extend(
        c.expect
            .iter()
            .filter(|e| !stdout.contains(e.as_str()))
            .map(|e| format!("lacks {e:?}")),
    );
    if !bad.is_empty() {
        bad.push(format!("output:\n{stdout}"));
    }
    bad
}

#[test]
fn processor_families_decompile() {
    let root = repo_root();
    let cases = load_cases(MANIFEST, &root).unwrap_or_else(|e| panic!("{e}"));
    let only: Option<Vec<String>> = std::env::var("UNLACE_PROCESSORS")
        .ok()
        .filter(|v| !v.is_empty())
        .map(|v| v.split(',').map(|s| s.trim().to_owned()).collect());
    let cases: Vec<&Case> = cases
        .iter()
        .filter(|c| only.as_ref().is_none_or(|o| o.contains(&c.family)))
        .collect();
    assert!(!cases.is_empty(), "no processor cases selected");
    let workers = std::thread::available_parallelism().map_or(4, |n| n.get().min(8));
    let next = std::sync::atomic::AtomicUsize::new(0);
    let failures = std::sync::Mutex::new(Vec::new());
    std::thread::scope(|s| {
        for _ in 0..workers {
            s.spawn(|| {
                loop {
                    let i = next.fetch_add(1, std::sync::atomic::Ordering::Relaxed);
                    let Some(c) = cases.get(i) else { break };
                    let bad = run_case(c);
                    let head = format!("{} [{} @ {}]", c.test, c.language, c.address);
                    let failure = match (&c.xfail, bad.is_empty()) {
                        (None, true) => None,
                        (None, false) => Some(format!("{head}: {}", bad.join("; "))),
                        (Some(why), false) => {
                            println!("{head}: known failure ({why}): {}", bad[0]);
                            None
                        }
                        (Some(_), true) => Some(format!("{head}: passes now; drop its `xfail`")),
                    };
                    if let Some(f) = failure {
                        failures
                            .lock()
                            .unwrap_or_else(|e| e.into_inner())
                            .push((i, f));
                    }
                }
            });
        }
    });
    let mut failures = failures.into_inner().unwrap_or_else(|e| e.into_inner());
    failures.sort();
    assert!(
        failures.is_empty(),
        "{} of {} processor cases failed:\n{}",
        failures.len(),
        cases.len(),
        failures
            .iter()
            .map(|(_, f)| f.as_str())
            .collect::<Vec<_>>()
            .join("\n\n")
    );
}

#[test]
fn the_manifest_rejects_unknown_keys() {
    let root = repo_root();
    let bad = "[[family]]\nname = \"x\"\nlanguage = \"a:LE:32:default\"\nbase = \"0\"\n\
               fixture = \"f\"\n[[family.function]]\ntest = \"t\"\naddress = \"0\"\nexpct = [\"y\"]\n";
    let err = load_cases(bad, &root).unwrap_err();
    assert!(err.contains("unknown key `expct`"), "{err}");
    assert_eq!(hex_bytes("0a ff\n10", "t").unwrap(), [0x0a, 0xff, 0x10]);
    assert!(hex_bytes("abc", "t").is_err());
    let loaded = "[[family]]\nname = \"x\"\nloader = \"auto\"\nfixture = \"f\"\n\
                  [[family.function]]\ntest = \"t\"\naddress = \"main\"\n";
    let cases = load_cases(loaded, &root).unwrap();
    assert!(cases[0].loaded && cases[0].language == "auto");
    let typed = loaded.replace(
        "loader = \"auto\"\n",
        "loader = \"auto\"\nlanguage = \"a\"\n",
    );
    assert!(
        load_cases(&typed, &root)
            .unwrap_err()
            .contains("drop `language`")
    );
}
