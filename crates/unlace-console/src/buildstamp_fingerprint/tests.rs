use super::*;

fn workspace(tag: &str) -> PathBuf {
    let root = std::env::temp_dir().join(format!(
        "unlace_buildstamp_fingerprint_{}_{}",
        std::process::id(),
        tag
    ));
    let _ = fs::remove_dir_all(&root);
    fs::create_dir_all(root.join("crates/unlace-console/src")).unwrap();
    fs::create_dir_all(root.join("crates/unlace-core/src")).unwrap();
    fs::create_dir_all(root.join("crates/unlace-harness/src")).unwrap();
    fs::write(
        root.join("Cargo.toml"),
        "[workspace]\nmembers = [\"crates/*\"]\n\
             [workspace.dependencies]\n\
             unlace-core = { path = \"crates/unlace-core\" }\n\
             unlace-console = { path = \"crates/unlace-console\" }\n",
    )
    .unwrap();
    fs::write(root.join("Cargo.lock"), "version = 4\n").unwrap();
    fs::write(
        root.join("crates/unlace-console/Cargo.toml"),
        "[package]\nname = \"unlace-console\"\n[dependencies]\nunlace-core.workspace = true\n",
    )
    .unwrap();
    fs::write(root.join("crates/unlace-console/src/lib.rs"), "console\n").unwrap();
    fs::write(
        root.join("crates/unlace-core/Cargo.toml"),
        "[package]\nname = \"unlace-core\"\n",
    )
    .unwrap();
    fs::write(root.join("crates/unlace-core/src/lib.rs"), "core\n").unwrap();
    fs::write(
        root.join("crates/unlace-harness/Cargo.toml"),
        "[package]\nname = \"unlace-harness\"\n[dependencies]\nunlace-console.workspace = true\n",
    )
    .unwrap();
    fs::write(root.join("crates/unlace-harness/src/lib.rs"), "harness\n").unwrap();
    root
}

#[test]
fn component_graphs_cover_their_sources_and_workspace_inputs() {
    let root = workspace("coverage");
    let engine_fingerprint = calculate(&root, "unlace-console").unwrap();
    assert!(
        engine_fingerprint
            .watched
            .contains(&root.join("Cargo.toml"))
    );
    assert!(
        engine_fingerprint
            .watched
            .contains(&root.join("Cargo.lock"))
    );
    let engine = engine_fingerprint.value;
    let harness = calculate(&root, "unlace-harness").unwrap().value;

    fs::write(
        root.join("crates/unlace-harness/src/lib.rs"),
        "changed harness\n",
    )
    .unwrap();
    assert_eq!(calculate(&root, "unlace-console").unwrap().value, engine);
    assert_ne!(calculate(&root, "unlace-harness").unwrap().value, harness);

    let harness = calculate(&root, "unlace-harness").unwrap().value;
    fs::write(root.join("crates/unlace-core/src/lib.rs"), "changed core\n").unwrap();
    assert_ne!(calculate(&root, "unlace-console").unwrap().value, engine);
    assert_ne!(calculate(&root, "unlace-harness").unwrap().value, harness);

    let engine = calculate(&root, "unlace-console").unwrap().value;
    let harness = calculate(&root, "unlace-harness").unwrap().value;
    fs::write(
        root.join("Cargo.toml"),
        "[workspace]\nmembers = [\"crates/*\"]\nresolver = \"2\"\n",
    )
    .unwrap();
    assert_ne!(calculate(&root, "unlace-console").unwrap().value, engine);
    assert_ne!(calculate(&root, "unlace-harness").unwrap().value, harness);

    let engine = calculate(&root, "unlace-console").unwrap().value;
    let harness = calculate(&root, "unlace-harness").unwrap().value;
    fs::write(root.join("Cargo.lock"), "version = 4\n# changed\n").unwrap();
    assert_ne!(calculate(&root, "unlace-console").unwrap().value, engine);
    assert_ne!(calculate(&root, "unlace-harness").unwrap().value, harness);
    let _ = fs::remove_dir_all(root);
}

#[test]
fn missing_required_inputs_fail_closed() {
    let root = workspace("missing");
    fs::remove_file(root.join("Cargo.lock")).unwrap();
    let err = calculate(&root, "unlace-console").unwrap_err();
    assert_eq!(err.kind(), io::ErrorKind::NotFound);
    let _ = fs::remove_dir_all(root);
}

#[test]
fn valid_cargo_dependency_forms_do_not_hide_workspace_crates() {
    let forms = [
        (
            "quoted",
            "[dependencies]\n\"unlace-core\" = { path = \"../unlace-core\" }\n",
            None,
        ),
        (
            "renamed",
            "[dependencies]\nengine = { package = \"unlace-core\", path = \"../unlace-core\" }\n",
            None,
        ),
        (
            "table",
            "[dependencies.engine]\npackage = \"unlace-core\"\npath = \"../unlace-core\"\n",
            None,
        ),
        (
            "quoted_table",
            "[dependencies.\"unlace-core\"]\npath = \"../unlace-core\"\n",
            None,
        ),
        (
            "workspace_alias",
            "[dependencies]\nengine.workspace = true\n",
            Some(
                "[workspace]\nmembers = [\"crates/*\"]\n\
                     [workspace.dependencies]\n\
                     engine = { package = \"unlace-core\", path = \"crates/unlace-core\" }\n",
            ),
        ),
    ];
    for (tag, console_dependencies, workspace_manifest) in forms {
        let root = workspace(tag);
        if let Some(manifest) = workspace_manifest {
            fs::write(root.join("Cargo.toml"), manifest).unwrap();
        }
        fs::write(
            root.join("crates/unlace-console/Cargo.toml"),
            format!("[package]\nname = \"unlace-console\"\n{console_dependencies}"),
        )
        .unwrap();
        let before = calculate(&root, "unlace-console").unwrap().value;
        fs::write(root.join("crates/unlace-core/src/lib.rs"), "changed core\n").unwrap();
        assert_ne!(
            calculate(&root, "unlace-console").unwrap().value,
            before,
            "dependency form {tag} omitted unlace-core",
        );
        let _ = fs::remove_dir_all(root);
    }
}

#[test]
fn unlace_looking_aliases_for_external_packages_stay_external() {
    let root = workspace("external_alias");
    fs::write(
        root.join("crates/unlace-console/Cargo.toml"),
        "[package]\nname = \"unlace-console\"\n\
             [dependencies.unlace-shim]\n\
             package = \"serde\"\n\
             version = \"1\"\n",
    )
    .unwrap();
    calculate(&root, "unlace-console").unwrap();

    fs::write(
        root.join("Cargo.toml"),
        "[workspace]\nmembers = [\"crates/*\"]\n\
             [workspace.dependencies.unlace-shim]\n\
             package = \"serde\"\n\
             version = \"1\"\n",
    )
    .unwrap();
    fs::write(
        root.join("crates/unlace-console/Cargo.toml"),
        "[package]\nname = \"unlace-console\"\n\
             [dependencies]\n\
             unlace-shim.workspace = true\n",
    )
    .unwrap();
    calculate(&root, "unlace-console").unwrap();
    let _ = fs::remove_dir_all(root);
}

#[test]
fn crlf_and_lf_sources_have_the_same_fingerprint() {
    let root = workspace("newlines");
    let path = root.join("crates/unlace-core/src/lib.rs");
    fs::write(&path, "one\ntwo\n").unwrap();
    let lf = calculate(&root, "unlace-console").unwrap().value;
    fs::write(&path, "one\r\ntwo\r\n").unwrap();
    assert_eq!(calculate(&root, "unlace-console").unwrap().value, lf);
    let _ = fs::remove_dir_all(root);
}
