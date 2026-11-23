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
    ) -> unlace_base::error::KunaResult<()> {
        ptr.fill(0);
        Ok(())
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}
