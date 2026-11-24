//! `SleighBase::has_context_commits` over the whole vendored `.sla` corpus.
//!
//! The predicate answers "can one instruction's decode change how a DIFFERENT
//! address decodes?" — the SLEIGH `globalset` mechanism — and it is decided from
//! the constructors that were actually decoded, not from an architecture
//! allow-list. This gate pins both halves: the named languages that must answer
//! each way, and the agreement of the whole corpus with a `globalset` count over
//! each language's own source closure (`.slaspec` plus every `.sinc` it
//! `@include`s, transitively). Zero occurrences must mean `false`, and any
//! occurrence must mean `true`, for all 462 vendored languages.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;

struct DummyImg;

impl LoadImage for DummyImg {
    fn get_file_name(&self) -> &str {
        "dummy"
    }
    fn load_fill(&mut self, ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        ptr.fill(0);
        Ok(())
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
}

/// Every vendored language, sorted, as `(processor, `.sla` file name, `.sla` path)`; the path
/// names the `.slaspec`'s sibling, which `unlace_slacomp::slacache` compiles on first read.
fn vendored_sla() -> Vec<(String, String, PathBuf)> {
    let procs = repo_root().join("specs/Ghidra/Processors");
    let mut out = Vec::new();
    let dirs = std::fs::read_dir(&procs).expect("read vendored processor directory");
    for d in dirs {
        let d = d.expect("read processor directory entry");
        let processor = d.file_name().to_string_lossy().into_owned();
        let langs = d.path().join("data/languages");
        let Ok(files) = std::fs::read_dir(&langs) else {
            continue;
        };
        for f in files {
            let f = f.expect("read language directory entry");
            let p = f.path();
            if p.extension().and_then(|e| e.to_str()) != Some("slaspec") {
                continue;
            }
            let p = p.with_extension("sla");
            let name = p.file_name().unwrap().to_string_lossy().into_owned();
            out.push((processor.clone(), name, p));
        }
    }
    out.sort();
    out
}

/// The `globalset` occurrences in a language's own source closure: its `.slaspec` plus every
/// `.sinc` it `@include`s, transitively, as the SLEIGH preprocessor would read them. An
/// `@include "$(NAME)"` takes NAME's `@define`; `@ifdef`/`@ifndef` blocks (and their `@else`)
/// whose condition is false contribute neither text nor includes, so a `globalset` only one
/// variant compiles counts only for that variant. An `@if` expression is not evaluated: both
/// of its branches are read.
fn globalset_occurrences(sla: &Path) -> usize {
    let mut defines: BTreeMap<String, String> = BTreeMap::new();
    let mut count = 0;
    read_closure(&sla.with_extension("slaspec"), &mut defines, &mut count, 0);
    count
}

fn read_closure(
    file: &Path,
    defines: &mut BTreeMap<String, String>,
    count: &mut usize,
    depth: usize,
) {
    assert!(depth < 64, "{}: @include nesting too deep", file.display());
    let file = file
        .canonicalize()
        .unwrap_or_else(|e| panic!("{}: {e}", file.display()));
    let text = std::fs::read_to_string(&file).unwrap_or_else(|e| panic!("{}: {e}", file.display()));
    let dir = file.parent().unwrap().to_path_buf();
    // One entry per open conditional: (this branch is read, an earlier branch was taken, the
    // condition was evaluated). An unevaluated `@if` reads every branch its parent reads.
    let mut conds: Vec<(bool, bool, bool)> = Vec::new();
    for line in text.lines() {
        let trimmed = line.trim_start();
        let parent = conds.iter().all(|(on, ..)| *on);
        if let Some(rest) = trimmed.strip_prefix("@ifdef") {
            let on = parent && defines.contains_key(rest.trim());
            conds.push((on, on, true));
            continue;
        }
        if let Some(rest) = trimmed.strip_prefix("@ifndef") {
            let on = parent && !defines.contains_key(rest.trim());
            conds.push((on, on, true));
            continue;
        }
        if trimmed.starts_with("@if") {
            conds.push((parent, false, false));
            continue;
        }
        if trimmed.starts_with("@elif") || trimmed.starts_with("@else") {
            let outer = conds[..conds.len().saturating_sub(1)]
                .iter()
                .all(|(on, ..)| *on);
            if let Some(top) = conds.last_mut() {
                top.0 = if top.2 { outer && !top.1 } else { outer };
                top.1 = top.1 || top.0;
            }
            continue;
        }
        if trimmed.starts_with("@endif") {
            conds.pop();
            continue;
        }
        if !conds.iter().all(|(on, ..)| *on) {
            continue;
        }
        *count += line.matches("globalset").count();
        if let Some(rest) = trimmed.strip_prefix("@define") {
            let mut parts = rest.trim().splitn(2, char::is_whitespace);
            if let Some(name) = parts.next() {
                let value = parts
                    .next()
                    .unwrap_or("")
                    .trim()
                    .trim_matches('"')
                    .to_owned();
                defines.entry(name.to_owned()).or_insert(value);
            }
            continue;
        }
        let Some(rest) = trimmed.strip_prefix("@include") else {
            continue;
        };
        let Some(open) = rest.find('"') else { continue };
        let Some(close) = rest[open + 1..].find('"') else {
            continue;
        };
        let name = &rest[open + 1..open + 1 + close];
        let name = match name.strip_prefix("$(").and_then(|n| n.strip_suffix(')')) {
            Some(macro_name) => match defines.get(macro_name) {
                Some(value) => value.clone(),
                None => continue,
            },
            None => name.to_owned(),
        };
        read_closure(&dir.join(name), defines, count, depth + 1);
    }
}

fn has_commits(sla: &Path) -> bool {
    let bytes = unlace_slacomp::slacache::read_sla(sla)
        .unwrap_or_else(|e| panic!("{}: {e}", sla.display()));
    let mut engine = Sleigh::new(Box::new(DummyImg), Box::new(ContextInternal::new()));
    engine
        .initialize_from_sla(&bytes)
        .expect("decode vendored processor spec");
    engine.base().has_context_commits()
}

/// Every `.sla` under these processors must answer `false` for the context-
/// commit gate. Delay-slot admission is a separate predicate.
const ALL_FALSE: &[&str] = &["AARCH64", "Sparc", "SuperH", "Z80"];
/// Every `.sla` under these must answer `true` (RISC-V: vsetvli/vsetivli commit vtype).
const ALL_TRUE: &[&str] = &["ARC", "ARM", "MIPS", "PowerPC", "PA-RISC", "RISCV"];
/// These carry `globalset` in some of their languages but not all, so the
/// processor-level claim is only that at least one answers `true`.
/// (x86: `x86-16.sla` commits the real-mode code segment; `x86.sla` and
/// `x86-64.sla` are checked below.)
const SOME_TRUE: &[&str] = &["PIC", "M16C", "x86"];

#[test]
fn context_commits_agree_with_the_globalset_sources() {
    let corpus = vendored_sla();
    assert_eq!(corpus.len(), 464, "the vendored language corpus changed");

    let mut answers: Vec<(String, String, bool, usize)> = Vec::new();
    for (processor, name, path) in &corpus {
        let commits = has_commits(path);
        let occurrences = globalset_occurrences(path);
        assert_eq!(
            commits,
            occurrences > 0,
            "{processor}/{name}: has_context_commits() is {commits} but its source closure \
             spells `globalset` {occurrences} times"
        );
        answers.push((processor.clone(), name.clone(), commits, occurrences));
    }

    for p in ALL_FALSE {
        let langs: Vec<_> = answers.iter().filter(|(proc, ..)| proc == p).collect();
        assert!(!langs.is_empty(), "{p}: no vendored .sla to check");
        for (_, name, commits, _) in langs {
            assert!(!commits, "{p}/{name} must be free of context commits");
        }
    }
    for p in ALL_TRUE {
        let langs: Vec<_> = answers.iter().filter(|(proc, ..)| proc == p).collect();
        assert!(!langs.is_empty(), "{p}: no vendored .sla to check");
        for (_, name, commits, _) in langs {
            assert!(commits, "{p}/{name} must carry context commits");
        }
    }
    for p in SOME_TRUE {
        let langs: Vec<_> = answers.iter().filter(|(proc, ..)| proc == p).collect();
        assert!(!langs.is_empty(), "{p}: no vendored .sla to check");
        assert!(
            langs.iter().any(|(.., commits, _)| *commits),
            "{p}: at least one language must carry context commits"
        );
    }

    // The two named languages the parallel decode's gate is written around.
    for name in ["x86.sla", "x86-64.sla"] {
        let found = answers.iter().find(|(_, n, ..)| n == name);
        let (_, _, commits, occurrences) = found.unwrap_or_else(|| panic!("{name} not vendored"));
        assert!(
            !commits && *occurrences == 0,
            "{name} must be free of context commits"
        );
    }
}

#[test]
fn delay_slot_bytes_are_zero_off_the_delay_slot_languages() {
    let corpus = vendored_sla();
    for name in ["x86-64.sla", "AARCH64.sla"] {
        let (_, _, path) = corpus
            .iter()
            .find(|(_, n, _)| n == name)
            .expect("required processor spec");
        let bytes = unlace_slacomp::slacache::read_sla(path).expect("read .sla");
        let mut engine = Sleigh::new(Box::new(DummyImg), Box::new(ContextInternal::new()));
        engine.initialize_from_sla(&bytes).expect("decode .sla");
        assert_eq!(
            engine.base().max_delay_slot_bytes(),
            0,
            "{name} has no delay slots, so a decode never reaches past its instruction"
        );
    }
    // SPARC is the counter-example: a decode there folds the delay slot in.
    let (_, _, path) = corpus
        .iter()
        .find(|(_, n, _)| n == "SparcV9_32.sla")
        .expect("required SPARC processor spec");
    let bytes = unlace_slacomp::slacache::read_sla(path).expect("read .sla");
    let mut engine = Sleigh::new(Box::new(DummyImg), Box::new(ContextInternal::new()));
    engine.initialize_from_sla(&bytes).expect("decode .sla");
    assert!(
        engine.base().max_delay_slot_bytes() > 0,
        "SparcV9_32 decodes a delay slot inside one_instruction"
    );
}
