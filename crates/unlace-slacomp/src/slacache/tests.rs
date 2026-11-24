//! Tests for the `.sla` cache.

use super::*;

fn repo_specs() -> PathBuf {
    Path::new(env!("CARGO_MANIFEST_DIR")).join("../../specs/Ghidra/Processors")
}

#[test]
fn sources_follow_includes_relative_to_the_including_file() {
    let spec = repo_specs().join("x86/data/languages/x86-64.slaspec");
    let files = sources(&spec);
    assert_eq!(files[0], spec);
    assert!(
        files
            .iter()
            .any(|f| f.file_name().is_some_and(|n| n == "ia.sinc")),
        "{files:?}"
    );
}

#[test]
fn a_compiled_image_is_reused_while_its_sources_are_unchanged() {
    let cache = std::env::temp_dir().join(format!("unlace-sla-test-{}", std::process::id()));
    let _ = fs::remove_dir_all(&cache);
    let spec = repo_specs().join("Toy/data/languages/toy_builder_be_align2.slaspec");
    let first = compile_cached_in(&cache, &spec).expect("compile");
    let built = fs::metadata(&first)
        .and_then(|m| m.modified())
        .expect("mtime");
    let second = compile_cached_in(&cache, &spec).expect("reuse");
    assert_eq!(first, second);
    assert_eq!(
        fs::metadata(&second)
            .and_then(|m| m.modified())
            .expect("mtime"),
        built
    );
    let mut engine = unlace_sleigh::sleigh::Sleigh::new(
        Box::new(NoImage),
        Box::new(unlace_sleigh::globalcontext::ContextInternal::new()),
    );
    engine
        .initialize_from_sla(&fs::read(&second).expect("read"))
        .expect("decode the cached image");
    let leftovers: Vec<_> = fs::read_dir(&cache)
        .expect("cache dir")
        .flatten()
        .filter(|e| e.file_name().to_string_lossy().ends_with(".tmp"))
        .collect();
    assert!(leftovers.is_empty(), "temporary files left behind");
    let _ = fs::remove_dir_all(&cache);
}

#[test]
fn a_symlinked_or_stale_sla_is_not_used_as_prebuilt() {
    let dir = std::env::temp_dir().join(format!("unlace-sla-prebuilt-{}", std::process::id()));
    let _ = fs::remove_dir_all(&dir);
    fs::create_dir_all(&dir).expect("dir");
    let spec = dir.join("a.slaspec");
    let sla = dir.join("a.sla");
    fs::write(&sla, b"old").expect("sla");
    std::thread::sleep(std::time::Duration::from_millis(20));
    fs::write(&spec, b"").expect("spec");
    assert!(!prebuilt_is_current(&sla, &spec), "older than its source");
    std::thread::sleep(std::time::Duration::from_millis(20));
    fs::write(&sla, b"new").expect("sla");
    assert!(prebuilt_is_current(&sla, &spec), "newer than its source");
    #[cfg(unix)]
    {
        let link = dir.join("b.sla");
        let link_spec = dir.join("b.slaspec");
        fs::write(&link_spec, b"").expect("spec");
        std::thread::sleep(std::time::Duration::from_millis(20));
        std::os::unix::fs::symlink(&sla, &link).expect("symlink");
        assert!(
            !prebuilt_is_current(&link, &link_spec),
            "a symlink is never prebuilt"
        );
    }
    let _ = fs::remove_dir_all(&dir);
}

struct NoImage;

impl unlace_sleigh::loadimage::LoadImage for NoImage {
    fn get_file_name(&self) -> &str {
        ""
    }
    fn load_fill(
        &mut self,
        ptr: &mut [u8],
        _addr: &unlace_base::address::Address,
    ) -> unlace_base::error::UnlaceResult<()> {
        ptr.fill(0);
        Ok(())
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

#[test]
fn the_stamp_answers_the_key_until_a_source_changes() {
    let tmp = std::env::temp_dir().join(format!("unlace-sla-stamp-{}", std::process::id()));
    let _ = fs::remove_dir_all(&tmp);
    let langs = tmp.join("languages");
    fs::create_dir_all(&langs).expect("mkdir");
    let from = repo_specs().join("Toy/data/languages");
    for entry in fs::read_dir(&from).expect("read Toy") {
        let path = entry.expect("entry").path();
        if path.is_file() {
            fs::copy(&path, langs.join(path.file_name().unwrap())).expect("copy");
        }
    }
    let spec = langs.join("toy_builder_be_align2.slaspec");
    let cache = tmp.join("cache");
    let key = current_key(&cache, "toy_builder_be_align2", &spec);
    assert_eq!(key, cache_key(&spec));
    let stamp = stamp_path(&cache, "toy_builder_be_align2", &spec);
    assert_eq!(stamped_key(&stamp).as_deref(), Some(key.as_str()));

    let include = sources(&spec)
        .into_iter()
        .find(|f| f != &spec)
        .expect("the Toy spec includes a file");
    let mut text = fs::read(&include).expect("read include");
    text.extend_from_slice(b"\n# changed\n");
    std::thread::sleep(std::time::Duration::from_millis(20));
    fs::write(&include, text).expect("write include");
    assert_eq!(
        stamped_key(&stamp),
        None,
        "a changed include invalidates the stamp"
    );
    let changed = current_key(&cache, "toy_builder_be_align2", &spec);
    assert_ne!(changed, key);
    assert_eq!(changed, cache_key(&spec));
    let _ = fs::remove_dir_all(&tmp);
}

fn scratch(name: &str) -> PathBuf {
    let dir = std::env::temp_dir().join(format!("unlace-sla-{name}-{}", std::process::id()));
    let _ = fs::remove_dir_all(&dir);
    fs::create_dir_all(&dir).expect("mkdir");
    dir
}

fn rewrite(path: &Path, text: &[u8]) {
    std::thread::sleep(std::time::Duration::from_millis(20));
    fs::write(path, text).expect("write");
}

#[test]
fn editing_an_included_sinc_changes_the_key() {
    let dir = scratch("include-edit");
    let spec = dir.join("a.slaspec");
    fs::write(&spec, b"@include \"sub/b.sinc\"\n").expect("spec");
    fs::create_dir_all(dir.join("sub")).expect("mkdir");
    fs::write(dir.join("sub/b.sinc"), b"@include \"c.sinc\"\n").expect("b");
    fs::write(dir.join("sub/c.sinc"), b"define alignment=1;\n").expect("c");
    let cache = dir.join("cache");
    let key = current_key(&cache, "a", &spec);
    rewrite(&dir.join("sub/c.sinc"), b"define alignment=2;\n");
    let changed = current_key(&cache, "a", &spec);
    assert_ne!(changed, key, "a nested include is part of the key");
    assert_eq!(changed, cache_key(&spec));
    let _ = fs::remove_dir_all(&dir);
}

#[test]
fn a_macro_named_include_is_part_of_the_key() {
    let dir = scratch("macro-include");
    let spec = dir.join("a.slaspec");
    fs::write(
        &spec,
        b"@define GEN \"gen32.sinc\"\n@include \"main.sinc\"\n",
    )
    .expect("spec");
    fs::write(
        dir.join("main.sinc"),
        b"@ifndef GEN\n@define GEN \"gen.sinc\" # default\n@endif\n  @include \"$(GEN)\"\n",
    )
    .expect("main");
    fs::write(dir.join("gen.sinc"), b"# 64\n").expect("gen");
    fs::write(dir.join("gen32.sinc"), b"# 32\n").expect("gen32");
    let files = sources(&spec);
    for name in ["main.sinc", "gen.sinc", "gen32.sinc"] {
        assert!(files.contains(&dir.join(name)), "{name} in {files:?}");
    }
    let cache = dir.join("cache");
    let key = current_key(&cache, "a", &spec);
    rewrite(&dir.join("gen32.sinc"), b"# 32, edited\n");
    let changed = current_key(&cache, "a", &spec);
    assert_ne!(changed, key, "the expanded include is part of the key");
    assert_eq!(changed, cache_key(&spec));
    let _ = fs::remove_dir_all(&dir);
}

#[test]
fn an_undefined_macro_include_stands_for_every_sinc_beside_it() {
    let dir = scratch("undefined-macro");
    let spec = dir.join("a.slaspec");
    fs::write(&spec, b"@include \"$(NOWHERE)\"\n").expect("spec");
    fs::write(dir.join("x.sinc"), b"").expect("x");
    fs::write(dir.join("y.sinc"), b"").expect("y");
    let files = sources(&spec);
    assert!(files.contains(&dir.join("x.sinc")) && files.contains(&dir.join("y.sinc")));
    let _ = fs::remove_dir_all(&dir);
}

#[test]
fn creating_a_missing_include_invalidates_the_stamp() {
    let dir = scratch("missing-include");
    let spec = dir.join("a.slaspec");
    fs::write(&spec, b"@ifdef OPT\n@include \"opt.sinc\"\n@endif\n").expect("spec");
    let cache = dir.join("cache");
    current_key(&cache, "a", &spec);
    let stamp = stamp_path(&cache, "a", &spec);
    assert!(stamped_key(&stamp).is_some());
    fs::write(dir.join("opt.sinc"), b"").expect("opt");
    assert_eq!(
        stamped_key(&stamp),
        None,
        "a new include invalidates the stamp"
    );
    let _ = fs::remove_dir_all(&dir);
}

#[test]
fn a_stamp_from_an_older_format_is_not_trusted() {
    let dir = scratch("old-stamp");
    let spec = dir.join("a.slaspec");
    fs::write(&spec, b"").expect("spec");
    let stamp = dir.join("a.stamp");
    fs::write(&stamp, format!("{COMPILER_FINGERPRINT}\tdeadbeef\n")).expect("stamp");
    assert_eq!(stamped_key(&stamp), None);
    let _ = fs::remove_dir_all(&dir);
}

#[test]
fn ia64_counts_both_generated_tables() {
    let spec = repo_specs().join("IA64/data/languages/ia64_be32.slaspec");
    let files = sources(&spec);
    for name in [
        "ia64.sinc",
        "ia64_regs.sinc",
        "ia64_gen.sinc",
        "ia64_gen32.sinc",
    ] {
        assert!(
            files
                .iter()
                .any(|f| f.file_name().is_some_and(|n| n == name)),
            "{name} in {files:?}"
        );
    }
}
