use super::TypeLib;

#[test]
fn a_value_is_auto_off_or_an_existing_file() {
    assert_eq!(TypeLib::parse("auto"), Ok(TypeLib::Auto));
    assert_eq!(TypeLib::parse(" OFF "), Ok(TypeLib::Off));
    assert!(TypeLib::parse("/nonexistent/library.ktl").is_err());
    let exe = std::env::current_exe().unwrap();
    assert!(
        TypeLib::parse(exe.to_str().unwrap())
            .unwrap_err()
            .contains("not a type library")
    );
    let til = std::env::temp_dir().join(format!("unlace-typelib-{}.til", std::process::id()));
    std::fs::write(&til, b"IDATIL\x12\0\0\0").unwrap();
    let parsed = TypeLib::parse(til.to_str().unwrap());
    std::fs::remove_file(&til).unwrap();
    assert_eq!(parsed, Ok(TypeLib::Files(vec![til.clone()])));
    let file = std::env::temp_dir().join(format!("unlace-typelib-{}.ktl", std::process::id()));
    std::fs::write(&file, "typelib 1\ntarget linux x86_64\nsource test 1\n").unwrap();
    let parsed = TypeLib::parse(file.to_str().unwrap());
    std::fs::remove_file(&file).unwrap();
    assert_eq!(parsed, Ok(TypeLib::Files(vec![file.clone()])));
    assert_eq!(
        TypeLib::Files(vec![file.clone()]).as_str(),
        file.display().to_string()
    );
}

#[test]
fn a_colon_list_names_several_libraries() {
    let dir = std::env::temp_dir();
    let a = dir.join(format!("unlace-typelib-list-a-{}.til", std::process::id()));
    let b = dir.join(format!("unlace-typelib-list-b-{}.til", std::process::id()));
    std::fs::write(&a, b"IDATIL\x12\0\0\0").unwrap();
    std::fs::write(&b, b"IDATIL\x12\0\0\0").unwrap();
    let list = format!("{}:{}", a.display(), b.display());
    let parsed = TypeLib::parse(&list);
    let bad = TypeLib::parse(&format!("{}:/nonexistent/x.til", a.display()));
    std::fs::remove_file(&a).unwrap();
    std::fs::remove_file(&b).unwrap();
    assert_eq!(parsed, Ok(TypeLib::Files(vec![a.clone(), b.clone()])));
    assert_eq!(parsed.unwrap().as_str(), list);
    assert!(bad.is_err());
}
