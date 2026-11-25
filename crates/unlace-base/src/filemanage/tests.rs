use super::*;
use std::path::PathBuf;

/// Unique scratch directory per test; removed by `TempTree::drop`.
struct TempTree {
    root: PathBuf,
}

impl TempTree {
    fn new(tag: &str) -> Self {
        let root =
            std::env::temp_dir().join(format!("unlace_filemanage_{}_{}", tag, std::process::id()));
        let _ = fs::remove_dir_all(&root);
        fs::create_dir_all(&root).unwrap();
        TempTree { root }
    }

    fn path(&self) -> &str {
        self.root.to_str().unwrap()
    }

    fn mkdir(&self, rel: &str) {
        fs::create_dir_all(self.root.join(rel)).unwrap();
    }

    fn mkfile(&self, rel: &str) {
        fs::write(self.root.join(rel), b"x").unwrap();
    }
}

impl Drop for TempTree {
    fn drop(&mut self) {
        let _ = fs::remove_dir_all(&self.root);
    }
}

fn sorted(mut v: Vec<String>) -> Vec<String> {
    v.sort();
    v
}

#[test]
fn test_filemanage_match_list_dir_suffix_and_prefix() {
    let t = TempTree::new("matchdir");
    t.mkfile("x86.sla");
    t.mkfile("arm.sla");
    t.mkfile("notes.txt");
    t.mkfile(".hidden.sla");
    t.mkdir("sub");
    t.mkfile("sub/inner.sla");

    // suffix match, no dot files, no recursion into sub/
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(&mut res, ".sla", true, t.path(), false);
    assert_eq!(
        sorted(res),
        vec![
            format!("{}/arm.sla", t.path()),
            format!("{}/x86.sla", t.path())
        ]
    );

    // allowdot picks up the dot file
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(&mut res, ".sla", true, t.path(), true);
    assert_eq!(
        sorted(res),
        vec![
            format!("{}/.hidden.sla", t.path()),
            format!("{}/arm.sla", t.path()),
            format!("{}/x86.sla", t.path())
        ]
    );

    // prefix match; directory entries participate like any dirent in C++
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(&mut res, "x86", false, t.path(), false);
    assert_eq!(res, vec![format!("{}/x86.sla", t.path())]);
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(&mut res, "sub", false, t.path(), false);
    assert_eq!(res, vec![format!("{}/sub", t.path())]);

    // a trailing separator on dirname is not doubled
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(
        &mut res,
        "notes.txt",
        false,
        &format!("{}/", t.path()),
        false,
    );
    assert_eq!(res, vec![format!("{}/notes.txt", t.path())]);

    // unreadable directory contributes nothing
    let mut res: Vec<String> = Vec::new();
    FileManage::match_list_dir(
        &mut res,
        ".sla",
        true,
        &format!("{}/nosuch", t.path()),
        false,
    );
    assert!(res.is_empty());
}

#[test]
fn test_filemanage_match_list_accumulates_across_paths() {
    let t = TempTree::new("matchlist");
    t.mkdir("a");
    t.mkdir("b");
    t.mkfile("a/one.ldefs");
    t.mkfile("b/two.ldefs");
    t.mkfile("b/skip.txt");

    let mut fm = FileManage::default();
    fm.add_dir_2_path(&format!("{}/a", t.path()));
    fm.add_dir_2_path(&format!("{}/b", t.path()));
    let mut res: Vec<String> = Vec::new();
    fm.match_list(&mut res, ".ldefs", true);
    assert_eq!(
        sorted(res),
        vec![
            format!("{}/a/one.ldefs", t.path()),
            format!("{}/b/two.ldefs", t.path())
        ]
    );
}

#[test]
fn test_filemanage_directory_list_dirs_only() {
    let t = TempTree::new("dirlist");
    t.mkdir("Adir");
    t.mkdir("Bdir");
    t.mkdir(".git");
    t.mkfile("plain.txt");

    let mut res: Vec<String> = Vec::new();
    FileManage::directory_list(&mut res, t.path(), false);
    assert_eq!(
        sorted(res),
        vec![format!("{}/Adir", t.path()), format!("{}/Bdir", t.path())]
    );

    // allowdot includes the dot directory
    let mut res: Vec<String> = Vec::new();
    FileManage::directory_list(&mut res, t.path(), true);
    assert_eq!(
        sorted(res),
        vec![
            format!("{}/.git", t.path()),
            format!("{}/Adir", t.path()),
            format!("{}/Bdir", t.path())
        ]
    );
}

#[cfg(unix)]
#[test]
fn test_filemanage_directory_list_follows_symlinks() {
    let t = TempTree::new("dirlink");
    t.mkdir("real");
    t.mkfile("real/f");
    std::os::unix::fs::symlink(t.root.join("real"), t.root.join("link")).unwrap();
    std::os::unix::fs::symlink(t.root.join("real/f"), t.root.join("filelink")).unwrap();
    std::os::unix::fs::symlink(t.root.join("gone"), t.root.join("dangling")).unwrap();

    let mut res: Vec<String> = Vec::new();
    FileManage::directory_list(&mut res, t.path(), false);
    // symlink-to-dir counts (C++ stats through DT_LNK); symlink-to-file
    // and dangling links do not
    assert_eq!(
        sorted(res),
        vec![format!("{}/link", t.path()), format!("{}/real", t.path())]
    );
}

#[test]
fn test_filemanage_scan_directory_recursive_depth_and_no_descend() {
    let t = TempTree::new("scan");
    t.mkdir("data/languages");
    t.mkdir("other/data");
    t.mkdir("data/data"); // a match nested under a match: not descended into

    // maxdepth 0: nothing scanned
    let mut res: Vec<String> = Vec::new();
    FileManage::scan_directory_recursive(&mut res, "data", t.path(), 0);
    assert!(res.is_empty());

    // depth 1: only direct children
    let mut res: Vec<String> = Vec::new();
    FileManage::scan_directory_recursive(&mut res, "data", t.path(), 1);
    assert_eq!(res, vec![format!("{}/data", t.path())]);

    // depth 2: other/data appears; data/data does NOT (matched parent is
    // recorded, not recursed into)
    let mut res: Vec<String> = Vec::new();
    FileManage::scan_directory_recursive(&mut res, "data", t.path(), 2);
    assert_eq!(
        sorted(res),
        vec![
            format!("{}/data", t.path()),
            format!("{}/other/data", t.path())
        ]
    );

    let mut res: Vec<String> = Vec::new();
    FileManage::scan_directory_recursive(&mut res, "languages", t.path(), 2);
    assert_eq!(res, vec![format!("{}/data/languages", t.path())]);
}

#[test]
fn test_filemanage_find_file_search_order_and_absolute() {
    let t = TempTree::new("findfile");
    t.mkdir("p1");
    t.mkdir("p2");
    t.mkfile("p2/target.spec");
    t.mkfile("p1/both.spec");
    t.mkfile("p2/both.spec");

    let mut fm = FileManage::default();
    fm.add_dir_2_path(&format!("{}/p1", t.path()));
    fm.add_dir_2_path(&format!("{}/p2", t.path()));

    let mut res = String::new();
    fm.find_file(&mut res, "target.spec");
    assert_eq!(res, format!("{}/p2/target.spec", t.path()));

    // first path in the list wins
    fm.find_file(&mut res, "both.spec");
    assert_eq!(res, format!("{}/p1/both.spec", t.path()));

    // not found: res cleared even if previously set
    res = "stale".to_string();
    fm.find_file(&mut res, "missing.spec");
    assert_eq!(res, "");

    // absolute name is used verbatim, ignoring the path list
    let abs = format!("{}/p2/target.spec", t.path());
    fm.find_file(&mut res, &abs);
    assert_eq!(res, abs);
    fm.find_file(&mut res, &format!("{}/p2/nope.spec", t.path()));
    assert_eq!(res, "");
}

#[test]
fn test_filemanage_split_path_vectors() {
    let mut path = String::new();
    let mut base = String::new();

    FileManage::split_path("/a/b/c", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("/a/b/", "c"));

    // terminating separator is taken into account
    FileManage::split_path("/a/b/", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("/a/", "b"));

    // no separator: everything is the base, path empty
    FileManage::split_path("name", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("", "name"));

    // bare root: C++'s wrapped `end` clamps to an empty base
    FileManage::split_path("/", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("/", ""));

    // separator-terminated relative path with no other separator: the
    // C++ bounded find_last_of misses it, so base keeps the separator
    FileManage::split_path("a/", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("", "a/"));

    FileManage::split_path("", &mut path, &mut base);
    assert_eq!((path.as_str(), base.as_str()), ("", ""));
}

#[test]
fn test_filemanage_is_absolute_path_and_separator() {
    assert!(!FileManage::is_absolute_path(""));
    assert!(FileManage::is_absolute_path("/x"));
    assert!(FileManage::is_absolute_path("/"));
    assert!(!FileManage::is_absolute_path("x/y"));
    assert!(FileManage::is_separator('/'));
    assert!(!FileManage::is_separator('\\')); // POSIX branch only
}

#[test]
fn test_filemanage_is_directory() {
    let t = TempTree::new("isdir");
    t.mkdir("d");
    t.mkfile("f");
    assert!(FileManage::is_directory(t.path()));
    assert!(FileManage::is_directory(&format!("{}/d", t.path())));
    assert!(!FileManage::is_directory(&format!("{}/f", t.path())));
    assert!(!FileManage::is_directory(&format!("{}/nosuch", t.path())));
}

#[test]
fn test_filemanage_add_dir_2_path_separator_handling() {
    let t = TempTree::new("adddir");
    t.mkfile("here.txt");
    let mut fm = FileManage::default();
    fm.add_dir_2_path(""); // ignored
    fm.add_dir_2_path(t.path()); // separator appended
    let mut res = String::new();
    fm.find_file(&mut res, "here.txt");
    assert_eq!(res, format!("{}/here.txt", t.path()));

    // already-terminated path is not double-separated
    let mut fm2 = FileManage::default();
    fm2.add_dir_2_path(&format!("{}/", t.path()));
    fm2.find_file(&mut res, "here.txt");
    assert_eq!(res, format!("{}/here.txt", t.path()));
}

#[test]
fn test_filemanage_discover_ghidra_root_development_layout() {
    let t = TempTree::new("devroot");
    // argv0 path components: .../devroot/ghidra.master.git/Ghidra/bin/decomp
    t.mkdir("devroot/ghidra.master.git/Ghidra/bin");
    // the development witness tree: devroot/ghidra.git/Ghidra
    t.mkdir("devroot/ghidra.git/Ghidra");

    let argv0 = format!("{}/devroot/ghidra.master.git/Ghidra/bin/decomp", t.path());
    assert_eq!(
        FileManage::discover_ghidra_root(&argv0),
        format!("{}/devroot", t.path())
    );

    // "." path elements are skipped while walking argv0
    let dotted = format!("{}/devroot/ghidra.master.git/./Ghidra/bin/decomp", t.path());
    assert_eq!(
        FileManage::discover_ghidra_root(&dotted),
        format!("{}/devroot", t.path())
    );
}

#[test]
fn test_filemanage_discover_ghidra_root_install_layout() {
    let t = TempTree::new("instroot");
    // argv0 path components: .../inst/Ghidra/bin/decomp ; install witness
    // is inst/server/server.conf (a directory, per the C++ scan)
    t.mkdir("inst/Ghidra/bin");
    t.mkdir("inst/server/server.conf");

    let argv0 = format!("{}/inst/Ghidra/bin/decomp", t.path());
    assert_eq!(
        FileManage::discover_ghidra_root(&argv0),
        format!("{}/inst", t.path())
    );
}

#[test]
fn test_filemanage_discover_ghidra_root_not_found() {
    let t = TempTree::new("noroot");
    t.mkdir("plain/Ghidra/bin");
    let argv0 = format!("{}/plain/Ghidra/bin/decomp", t.path());
    assert_eq!(FileManage::discover_ghidra_root(&argv0), "");
    // no "Ghidra" element at all
    assert_eq!(FileManage::discover_ghidra_root("/usr/bin/decomp"), "");
}
