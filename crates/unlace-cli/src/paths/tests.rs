use super::*;

/// A scratch directory, named after the calling test so parallel cases do not
/// collide.
fn sandbox(tag: &str) -> PathBuf {
    let dir = env::temp_dir().join(format!("unlace_paths_{}_{tag}", std::process::id()));
    let _ = std::fs::remove_dir_all(&dir);
    std::fs::create_dir_all(&dir).expect("create sandbox");
    dir
}

/// A workspace checkout: `<root>/crates/unlace-cli/Cargo.toml` beside `<root>/target`.
fn checkout(tag: &str) -> PathBuf {
    let root = sandbox(tag);
    let cli = root.join("crates").join("unlace-cli");
    std::fs::create_dir_all(&cli).expect("create the crate dir");
    std::fs::write(cli.join("Cargo.toml"), "").expect("write the crate manifest");
    root
}

/// The parent pop is only trusted where the layout it assumes is real.
#[test]
fn only_an_in_tree_layout_yields_a_repo_root() {
    let r = checkout("intree");
    assert_eq!(
        in_tree_root(&r.join("target").join("release")),
        Some(r.clone())
    );
    assert_eq!(
        in_tree_root(
            &r.join("target")
                .join("x86_64-pc-windows-msvc")
                .join("release")
        ),
        Some(r.clone())
    );
    assert_eq!(
        in_tree_root(&r.join("target").join("debug").join("deps")),
        Some(r.clone())
    );
    let _ = std::fs::remove_dir_all(&r);
}

/// The extracted release archive: three parents up is `C:\`, which is why the
/// pop must be refused rather than reported.
#[test]
fn an_extracted_archive_has_no_repo_root() {
    assert_eq!(
        in_tree_root(Path::new("/c/unlace-v1.329-windows-x86_64")),
        None
    );
    assert_eq!(in_tree_root(Path::new("/usr/local/bin")), None);
    assert_eq!(in_tree_root(Path::new("/")), None);
    // `target` alone is not the marker -- its parent must hold the workspace.
    let r = sandbox("nottree");
    assert_eq!(
        in_tree_root(&r.join("other").join("target").join("release")),
        None
    );
    let _ = std::fs::remove_dir_all(&r);
}

/// The specs tree an archive user extracts beside the binaries is found.
#[test]
fn the_specs_probe_accepts_an_archive_layout() {
    let root = sandbox("specs");
    let bindir = root.join("unlace-v1.329-linux-x86_64");
    std::fs::create_dir_all(&bindir).expect("create the extracted binary dir");
    std::fs::create_dir_all(root.join("specs").join("Ghidra").join("Processors"))
        .expect("create the extracted specs tree");
    let candidates = vec![
        bindir.join("specs"),
        root.join("specs"),
        root.join("nowhere").join("specs"),
    ];
    assert_eq!(first_spec_tree(&candidates), Some(root.join("specs")));
    assert!(!is_spec_tree(&bindir.join("specs")));
    let _ = std::fs::remove_dir_all(&root);
}
