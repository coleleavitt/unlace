use super::*;

fn identity() -> BinaryIdentity {
    BinaryIdentity::of_bytes(b"\x7fELF fake binary", Some("/tmp/a.out".into()))
}

fn project() -> Project {
    Project::in_memory(&identity()).expect("in-memory project")
}

#[test]
fn a_new_project_is_at_the_current_schema_and_bound_to_its_binary() {
    let p = project();
    assert_eq!(p.schema_version().unwrap(), schema::CURRENT_VERSION);
    let b = p.binary().unwrap();
    assert_eq!(b.sha256.len(), 64);
    assert_eq!(b.size, Some(16));
    assert!(p.check_binary(&identity()).is_ok());
    let other = BinaryIdentity::of_bytes(b"something else", None);
    assert!(
        p.check_binary(&other)
            .unwrap_err()
            .to_string()
            .contains("mismatch")
    );
}

#[test]
fn directives_round_trip_in_application_order() {
    let mut p = project();
    for d in [
        "comment main::0x401004 entry point",
        "name main::v2 credbuf",
        "type main::v2 char[16]",
        "isolate main::v3",
        "prototype main int main(int argc,char **argv)",
        "function 0x401000-0x401080=main",
        "typedef struct point { int x; int y; };",
        "data 0x404000 int counter",
        "bytes 0x401010 9090",
        "callee 0x40101a handler",
        "callproto 0x40101a void handler(int)",
        "readonly 0x404028+8",
        "flow 0x401030 return",
        "bookmark 0x401000 the entry",
    ] {
        p.set(d).unwrap_or_else(|e| panic!("{d}: {e}"));
    }
    assert_eq!(
        p.directives().unwrap(),
        vec![
            "typedef struct point { int x; int y; };",
            "function 0x401000-0x401080=main",
            "data 0x404000 int counter",
            "prototype main int main(int argc,char **argv)",
            "bytes 0x401010 9090",
            "readonly 0x404028+8",
            "flow 0x401030 return",
            "callee 0x40101a handler",
            "callproto 0x40101a void handler(int)",
            "type main::v2 char[16]",
            "name main::v2 credbuf",
            "isolate main::v3",
            "comment main::0x401004 entry point",
        ]
    );
}

#[test]
fn a_later_set_replaces_the_value_and_keeps_the_other_columns() {
    let mut p = project();
    p.set("function 0x1000=first").unwrap();
    p.set("function 0x1000-0x1040").unwrap();
    p.set("function 0x1000=second").unwrap();
    p.set("name v1 count").unwrap();
    p.set("type v1 int").unwrap();
    p.set("name v1 total").unwrap();
    let d = p.directives().unwrap();
    assert!(
        d.iter().any(|i| i == "function 0x1000-0x1040=second"),
        "{d:?}"
    );
    assert!(d.iter().any(|i| i == "type v1 int"), "{d:?}");
    assert!(d.iter().any(|i| i == "name v1 total"), "{d:?}");
}

#[test]
fn unset_removes_one_column_and_empty_rows() {
    let mut p = project();
    p.set("name v1 count").unwrap();
    p.set("type v1 int").unwrap();
    assert_eq!(p.unset("name v1").unwrap(), 1);
    assert_eq!(p.directives().unwrap(), vec!["type v1 int"]);
    assert_eq!(p.unset("type v1").unwrap(), 1);
    assert!(p.directives().unwrap().is_empty());
    let (_, rows) = p.query("SELECT count(*) FROM locals").unwrap();
    assert_eq!(rows[0][0], serde_json::json!(0));
    p.set("format 0x10 oct 0x1ff").unwrap();
    assert_eq!(p.unset("format 0x10 oct 0x1ff").unwrap(), 1);
}

#[test]
fn kernel_addresses_survive_the_signed_column() {
    let mut p = project();
    p.set("function 0xfffffe0007007840=pmgr_wait_pending")
        .unwrap();
    assert_eq!(
        p.directives().unwrap(),
        vec!["function 0xfffffe0007007840=pmgr_wait_pending"]
    );
    let (_, rows) = p
        .query("SELECT printf('0x%x', address) FROM functions")
        .unwrap();
    assert_eq!(rows[0][0], serde_json::json!("0xfffffe0007007840"));
}

#[test]
fn query_is_read_only_and_reports_columns() {
    let mut p = project();
    p.set("bytes 0x10 cc").unwrap();
    let (columns, rows) = p.query("SELECT address, bytes FROM patches").unwrap();
    assert_eq!(columns, vec!["address", "bytes"]);
    assert_eq!(
        rows,
        vec![vec![serde_json::json!(16), serde_json::json!("cc")]]
    );
    assert!(
        p.query("DELETE FROM patches")
            .unwrap_err()
            .to_string()
            .contains("read-only")
    );
    assert!(p.query("PRAGMA user_version = 7").is_err());
    // writes still work after a refused query
    p.set("bytes 0x20 90").unwrap();
    assert_eq!(p.directives().unwrap().len(), 2);
}

#[test]
fn export_is_canonical_and_imports_back() {
    let mut p = project();
    p.set("function 0x2000=b").unwrap();
    p.set("function 0x1000=a").unwrap();
    p.set("bytes 0x1004 90 90").unwrap();
    p.set("bookmark 0x1000 start").unwrap();
    p.set("name a::v1 len").unwrap();
    let json = ProjectJson::export(&p).unwrap();
    let text = json.to_canonical_string().unwrap();
    assert!(text.ends_with('\n'));
    assert_eq!(json.functions[0].address, "0x1000");
    assert_eq!(json.patches[0].bytes, "9090");
    // the same state exports to the same bytes
    assert_eq!(
        ProjectJson::export(&p)
            .unwrap()
            .to_canonical_string()
            .unwrap(),
        text
    );

    let mut q = project();
    let parsed = ProjectJson::parse(&text).unwrap();
    assert_eq!(parsed.import_into(&mut q, false).unwrap(), 5);
    assert_eq!(q.directives().unwrap(), p.directives().unwrap());
    assert_eq!(ProjectJson::export(&q).unwrap(), json);

    // replace empties first
    let mut only = parsed.clone();
    only.functions.truncate(1);
    only.patches.clear();
    only.bookmarks.clear();
    only.locals.clear();
    only.import_into(&mut q, true).unwrap();
    assert_eq!(q.directives().unwrap(), vec!["function 0x1000=a"]);
}

#[test]
fn import_refuses_another_binary_and_a_foreign_format() {
    let p = project();
    let mut json = ProjectJson::export(&p).unwrap();
    json.binary.sha256 = "0".repeat(64);
    let mut q = project();
    assert!(json.import_into(&mut q, false).is_err());
    assert!(ProjectJson::parse("{\"format\": \"other\", \"schema_version\": 1, \"binary\": {\"sha256\": \"\", \"path\": null, \"size\": null}}").is_err());
}

#[test]
fn a_file_project_is_created_once_and_reopened() {
    let dir = std::env::temp_dir().join(format!("unlace-project-test-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let path = dir.join("a.unlace");
    let _ = std::fs::remove_file(&path);
    {
        let mut p = Project::create(&path, &identity(), false).unwrap();
        p.set("function 0x10=f").unwrap();
    }
    assert!(Project::create(&path, &identity(), false).is_err());
    let p = Project::open(&path).unwrap();
    assert_eq!(p.directives().unwrap(), vec!["function 0x10=f"]);
    drop(p);
    let _ = std::fs::remove_dir_all(&dir);
}

#[test]
fn the_schema_description_names_every_real_column() {
    let p = project();
    for (table, keys, _, columns) in schema::DESCRIPTION {
        let (_, rows) = p
            .query(&format!(
                "SELECT name FROM pragma_table_info('{table}') ORDER BY cid"
            ))
            .unwrap();
        let real: Vec<String> = rows
            .iter()
            .map(|r| r[0].as_str().unwrap().to_string())
            .collect();
        let described: Vec<String> = columns.iter().map(|c| c.0.to_string()).collect();
        assert_eq!(real, described, "{table}");
        assert!(
            keys.iter().all(|k| described.iter().any(|d| d == k)),
            "{table}"
        );
    }
    for table in schema::TABLES {
        assert!(
            schema::DESCRIPTION.iter().any(|d| d.0 == *table),
            "{table} undescribed"
        );
    }
}
