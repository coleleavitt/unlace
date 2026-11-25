use super::*;

fn one(spec: &str) -> FuncDecl {
    parse_flag(spec)
        .expect("parses")
        .pop()
        .expect("one declaration")
}

#[test]
fn parses_start_end_and_name() {
    assert_eq!(
        one("0x1400-0x1480=decrypt"),
        FuncDecl {
            start: 0x1400,
            end: Some(0x1480),
            name: Some("decrypt".into())
        }
    );
}

#[test]
fn end_and_name_are_each_optional() {
    assert_eq!(
        one("0x1400"),
        FuncDecl {
            start: 0x1400,
            end: None,
            name: None
        }
    );
    assert_eq!(
        one("0x1400-0x1480"),
        FuncDecl {
            start: 0x1400,
            end: Some(0x1480),
            name: None
        }
    );
    assert_eq!(
        one("0x1400=decrypt"),
        FuncDecl {
            start: 0x1400,
            end: None,
            name: Some("decrypt".into())
        }
    );
}

#[test]
fn a_bare_hex_address_needs_no_prefix() {
    assert_eq!(
        one("1400-1480"),
        FuncDecl {
            start: 0x1400,
            end: Some(0x1480),
            name: None
        }
    );
}

#[test]
fn the_extent_is_end_exclusive() {
    assert_eq!(one("0x1400-0x1480").size(), 0x80);
    assert_eq!(one("0x1400").size(), 0);
}

/// An inverted or empty range is a caller error, not a silently-unbounded
/// function: a declaration unlace cannot honor must say so.
#[test]
fn an_end_at_or_below_the_start_is_rejected() {
    assert!(parse_flag("0x1480-0x1400").is_err());
    assert!(parse_flag("0x1400-0x1400").is_err());
}

#[test]
fn a_non_hex_token_is_rejected() {
    assert!(parse_flag("main").is_err());
    // A trailing `-` leaves an empty tail, so it is not a separator and the
    // whole token must fail as hex rather than parse as a bare start.
    assert!(parse_flag("0x1400-").is_err());
}

#[test]
fn lowers_to_the_console_command() {
    assert_eq!(
        one("0x1400-0x1480=decrypt").console_line(),
        "function bounds 0x1400 0x1480 as decrypt"
    );
    assert_eq!(
        one("0x1400-0x1480").console_line(),
        "function bounds 0x1400 0x1480"
    );
    assert_eq!(one("0x1400").console_line(), "function bounds 0x1400");
    // A name with no extent: `as` keys the name, so it cannot be read as the
    // end address.
    assert_eq!(
        one("0x1400=decrypt").console_line(),
        "function bounds 0x1400 as decrypt"
    );
}

#[test]
fn a_file_holds_one_declaration_per_line_with_comments() {
    let dir = std::env::temp_dir().join(format!("unlace-funcdecl-{}", std::process::id()));
    std::fs::create_dir_all(&dir).expect("scratch dir");
    let path = dir.join("bounds.txt");
    std::fs::write(
        &path,
        "# worked out by hand\n0x1400-0x1480=decrypt\n\n0x1480-0x1500\n",
    )
    .expect("write");
    let decls = parse_flag(&format!("@{}", path.display())).expect("parses");
    assert_eq!(decls.len(), 2);
    assert_eq!(decls[0].name.as_deref(), Some("decrypt"));
    assert_eq!(decls[1].start, 0x1480);
    let _ = std::fs::remove_dir_all(&dir);
}

#[test]
fn a_missing_file_is_an_error_naming_the_path() {
    let err = parse_flag("@/nonexistent/unlace-bounds.txt").expect_err("refuses");
    assert!(
        err.contains("/nonexistent/unlace-bounds.txt"),
        "got {err:?}"
    );
}
