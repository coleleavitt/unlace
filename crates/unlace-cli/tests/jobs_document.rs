//! `--jobs N` with `--tokens --ctree --storage`: a worker ships the token map and the syntax tree
//! in its result frame, so the document is the one `--jobs 1` writes.

use crate::common::{repo_root, run_unlace};

#[test]
fn a_worker_ships_the_token_map_the_tree_and_the_storage() {
    let sample = repo_root()
        .join("integrations/web/test/fixtures/sample.elf")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned();
    let document = |jobs: &str| {
        let (stdout, stderr, code) = run_unlace(&[
            "decompile-all",
            &sample,
            "--json",
            "--tokens",
            "--ctree",
            "--storage",
            "--jobs",
            jobs,
        ]);
        assert_eq!(code, 0, "--jobs {jobs}: {stderr}");
        stdout
    };
    let serial = document("1");
    let parallel = document("2");
    assert_eq!(serial, parallel, "--jobs 2 differs from --jobs 1");
    let parsed: serde_json::Value = serde_json::from_str(&parallel).expect("a JSON document");
    let functions = parsed["functions"].as_array().expect("functions");
    assert!(functions.iter().any(|f| f["ctree"].is_object()));
    assert!(
        functions
            .iter()
            .any(|f| f["tokens"].as_array().is_some_and(|t| !t.is_empty()))
    );
}
