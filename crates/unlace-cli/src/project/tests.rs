use super::*;

#[test]
fn the_default_project_file_sits_beside_the_binary() {
    assert_eq!(
        default_project_path("dir/a.out"),
        PathBuf::from("dir/a.out.unlace")
    );
    assert_eq!(default_project_path("prog"), PathBuf::from("prog.unlace"));
}

#[test]
fn get_builds_a_keyed_lookup_and_quotes_text() {
    assert_eq!(
        get_sql("functions", "0x10").unwrap(),
        "SELECT * FROM functions WHERE address = 16"
    );
    assert_eq!(
        get_sql("locals", "it's::v1").unwrap(),
        "SELECT * FROM locals WHERE target = 'it''s::v1'"
    );
    assert_eq!(
        get_sql("assertions", "flow 0x10").unwrap(),
        "SELECT * FROM assertions WHERE kind = 'flow' AND target = '0x10'"
    );
    assert!(get_sql("sqlite_master", "x").is_err());
}

#[test]
fn rows_are_objects_in_column_order() {
    let columns = vec!["z".to_string(), "a".to_string()];
    let row = vec![json!(1), json!("x\"y")];
    assert_eq!(row_object(&columns, &row), r#"{"z":1,"a":"x\"y"}"#);
}

#[test]
fn the_schema_document_lists_every_table() {
    let s = schema_json();
    let names: Vec<&str> = s["tables"]
        .as_array()
        .unwrap()
        .iter()
        .map(|t| t["name"].as_str().unwrap())
        .collect();
    for table in unlace_project::schema::TABLES {
        assert!(names.contains(table), "{table}");
    }
    assert!(s["tables"][0]["columns"][0]["description"].is_string());
}

#[test]
fn bookmarks_skip_the_engine_check_and_unknown_directives_fail_it() {
    assert_eq!(
        checked("bookmark 0x10 start").unwrap(),
        "bookmark 0x10 start"
    );
    assert!(checked("frobnicate 0x10").is_err());
    assert_eq!(checked("name v2 credbuf").unwrap(), "name v2 credbuf");
}
