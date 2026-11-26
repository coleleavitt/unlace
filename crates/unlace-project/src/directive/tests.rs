use super::*;

#[test]
fn functions_parse_with_and_without_extent_and_name() {
    assert_eq!(
        parse("function 0x4013c9-0x401420=stage1").unwrap(),
        Change::Function {
            address: 0x4013c9,
            end: Some(0x401420),
            name: Some("stage1".into())
        }
    );
    assert_eq!(
        parse("function 4014a0 = main").unwrap(),
        Change::Function {
            address: 0x4014a0,
            end: None,
            name: Some("main".into())
        }
    );
    assert_eq!(
        parse("function 0x10").unwrap(),
        Change::Function {
            address: 0x10,
            end: None,
            name: None
        }
    );
    assert_eq!(
        function_directive(0x10, Some(0x20), Some("f")),
        "function 0x10-0x20=f"
    );
}

#[test]
fn locals_and_callsites_keep_their_scoped_target() {
    assert_eq!(
        parse("name main::v2 credbuf").unwrap(),
        Change::LocalName {
            target: "main::v2".into(),
            name: "credbuf".into()
        }
    );
    assert_eq!(
        parse("type v2 char[16]").unwrap(),
        Change::LocalType {
            target: "v2".into(),
            ty: "char[16]".into()
        }
    );
    assert_eq!(
        parse("callproto 0x13b0 void f(char *fmt, int a)").unwrap(),
        Change::CallProto {
            target: "0x13b0".into(),
            prototype: "void f(char *fmt, int a)".into()
        }
    );
}

#[test]
fn typedefs_are_keyed_by_the_name_they_declare() {
    assert_eq!(
        typedef_name("struct point { int x; int y; };"),
        "struct point"
    );
    assert_eq!(
        typedef_name("typedef struct { int x; } point_t;"),
        "point_t"
    );
    assert_eq!(typedef_name("typedef int (*cb)(int);"), "cb");
    assert_eq!(typedef_name("typedef char name[16];"), "name");
    assert_eq!(typedef_name("enum color { RED, GREEN };"), "enum color");
}

#[test]
fn noreturn_is_stored_by_its_function() {
    assert_eq!(
        parse("noreturn 0x401200").unwrap(),
        Change::Assertion {
            kind: "noreturn".into(),
            target: "0x401200".into(),
            directive: "noreturn 0x401200".into(),
        }
    );
}

#[test]
fn verbatim_kinds_keep_the_directive_and_a_target() {
    assert_eq!(
        parse("format 0x1005 oct 0x1ff").unwrap(),
        Change::Assertion {
            kind: "format".into(),
            target: "0x1005 0x1ff".into(),
            directive: "format 0x1005 oct 0x1ff".into()
        }
    );
    assert_eq!(
        parse("readonly 0x404028+8").unwrap(),
        Change::Assertion {
            kind: "readonly".into(),
            target: "0x404028+8".into(),
            directive: "readonly 0x404028+8".into()
        }
    );
}

#[test]
fn bytes_and_errors() {
    assert_eq!(
        parse("bytes 0x43d0c6 8bd5 81").unwrap(),
        Change::Patch {
            address: 0x43d0c6,
            bytes: vec![0x8b, 0xd5, 0x81]
        }
    );
    assert!(parse("bytes 0x10 @x.bin").is_err());
    assert!(parse("bytes 0x10 abc").is_err());
    assert!(parse("prototype main").is_err());
    assert!(parse("frobnicate x").is_err());
    assert!(parse("").is_err());
}
