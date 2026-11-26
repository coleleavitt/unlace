use super::*;

static TREE: &[(&str, &[u8])] = &[
    (
        "Ghidra/Processors/toy/data/languages/toy.ldefs",
        b"<language_definitions/>",
    ),
    ("Ghidra/Processors/toy/data/languages/toy.sla", b"sla"),
    ("Ghidra/Processors/toy/data/languages/.hidden.ldefs", b""),
    (
        "Ghidra/Processors/toy/data/languages/old/toy_old.ldefs",
        b"old",
    ),
    ("Ghidra/Processors/toy/data/patterns/p.xml", b"p"),
    ("README.md", b"readme"),
];

fn mounted() -> (Vec<MemorySpecs>, String) {
    (vec![MemorySpecs::new(TREE)], memory_root(0))
}

#[test]
fn a_mounted_table_reads_back() {
    let (mounts, root) = mounted();
    let sla = format!("{root}/Ghidra/Processors/toy/data/languages/toy.sla");
    assert!(exists(&mounts, &sla));
    assert_eq!(&*read(&mounts, &sla).unwrap(), b"sla");
    assert_eq!(
        &*read(&mounts, &format!("{root}/README.md")).unwrap(),
        b"readme"
    );
    let missing = read(&mounts, &format!("{root}/nope.sla")).unwrap_err();
    assert_eq!(missing.kind(), io::ErrorKind::NotFound);
    assert!(
        !exists(&mounts, &format!("{root}/Ghidra/Processors")),
        "a directory is not a file"
    );
}

#[test]
fn owned_and_shared_contents_read_like_static_ones() {
    let owned = MemorySpecs::from_files([(String::from("a/b.sla"), vec![1u8, 2, 3])]);
    assert_eq!(owned.get("a/b.sla"), Some(&[1u8, 2, 3][..]));
    let shared: Arc<[u8]> = Arc::from(&b"pspec"[..]);
    let shared = MemorySpecs::from_files([("a/b.pspec", shared)]);
    let mounts = [owned, shared];
    assert_eq!(
        &*read(&mounts, &format!("{}/a/b.sla", memory_root(0))).unwrap(),
        [1, 2, 3]
    );
    assert_eq!(
        &*read(&mounts, &format!("{}/a/b.pspec", memory_root(1))).unwrap(),
        b"pspec"
    );
}

#[test]
fn an_unmounted_index_holds_nothing() {
    let (mounts, _) = mounted();
    let root = memory_root(1);
    assert!(!exists(&mounts, &format!("{root}/README.md")));
    let mut dirs = Vec::new();
    directory_list(&mounts, &mut dirs, &root);
    assert!(dirs.is_empty());
}

#[test]
fn listings_see_only_direct_children() {
    let (mounts, root) = mounted();
    let mut dirs = Vec::new();
    directory_list(
        &mounts,
        &mut dirs,
        &format!("{root}/Ghidra/Processors/toy/data/"),
    );
    let languages = format!("{root}/Ghidra/Processors/toy/data/languages");
    assert_eq!(
        dirs,
        [
            languages.clone(),
            format!("{root}/Ghidra/Processors/toy/data/patterns")
        ]
    );

    let mut ldefs = Vec::new();
    match_list_dir(&mounts, &mut ldefs, ".ldefs", &languages);
    assert_eq!(ldefs, [format!("{languages}/toy.ldefs")]);
}

#[test]
fn the_sleigh_layout_scan_finds_language_directories() {
    let (mounts, root) = mounted();
    let mut ghidra = Vec::new();
    scan_directory_recursive(&mounts, &mut ghidra, "Ghidra", &root, 2);
    assert_eq!(ghidra, [format!("{root}/Ghidra")]);
    let mut languages = Vec::new();
    scan_directory_recursive(
        &mounts,
        &mut languages,
        "languages",
        &format!("{root}/Ghidra/Processors/toy"),
        2,
    );
    assert_eq!(
        languages,
        [format!("{root}/Ghidra/Processors/toy/data/languages")]
    );
}

#[test]
fn find_file_takes_the_first_directory_in_order() {
    let (mounts, root) = mounted();
    let mut paths = FileManage::default();
    paths.add_dir_2_path("/nonexistent/unlace/specs");
    paths.add_dir_2_path(&format!("{root}/Ghidra/Processors/toy/data/languages/old"));
    paths.add_dir_2_path(&format!("{root}/Ghidra/Processors/toy/data/languages"));
    let mut res = String::new();
    find_file(&mounts, &paths, &mut res, "toy.sla");
    assert_eq!(
        res,
        format!("{root}/Ghidra/Processors/toy/data/languages/toy.sla")
    );
    find_file(&mounts, &paths, &mut res, "absent.sla");
    assert!(res.is_empty());
}
