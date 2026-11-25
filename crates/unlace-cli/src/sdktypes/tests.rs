use super::*;

#[test]
fn objc_containers_are_blanked_and_lines_kept() {
    let text = "typedef long NSInteger;\n@class NSString;\n@protocol P;\n\
                    @interface NSObject <P>\n- (id)init;\n@end\nvoid NSLog(id format, ...);\n";
    let got = blank_objc_containers(text);
    assert_eq!(
        got,
        "typedef long NSInteger;\n\n\n\n\n\nvoid NSLog(id format, ...);\n"
    );
}

#[test]
fn a_header_declares_an_import_only_before_a_parenthesis() {
    let names: BTreeSet<String> = ["sqlite3_open".to_string()].into_iter().collect();
    assert!(declares_any(
        b"int sqlite3_open (const char *, sqlite3 **);",
        &names
    ));
    assert!(!declares_any(
        b"#define sqlite3_open_v2 x\nint sqlite3_openx(void);",
        &names
    ));
    assert!(!declares_any(b"typedef int sqlite3_open;", &names));
}

#[test]
fn diagnostics_name_the_umbrella_lines() {
    let err = "In file included from /tmp/u.h:3:\n/tmp/u.h:7:10: fatal error: 'x.h' file not found\n\
                   /usr/include/a.h:2:1: error: bad\n";
    assert_eq!(
        umbrella_lines(err, "/tmp/u.h")
            .into_iter()
            .collect::<Vec<_>>(),
        vec![3, 7]
    );
}

#[test]
fn an_sdk_name_implies_its_platform() {
    assert_eq!(sdk_platform(Path::new("/x/iPhoneOS16.5.sdk")), Some("ios"));
    assert_eq!(sdk_platform(Path::new("/x/MacOSX14.sdk")), Some("macos"));
    assert_eq!(sdk_platform(Path::new("/x/other")), None);
}
