use unlace_decomp::funcreport::{StoragePiece, VarInfo};
use unlace_decomp::prettyprint::{SyntaxHighlight, TokenKind};
use unlace_decomp::srcmap::CodeToken;

use super::{Place, Span, address_spans, live_variables, span_addresses, span_text};

fn token(line: usize, col: usize, text: &str, address: Option<u64>) -> CodeToken {
    CodeToken {
        line,
        col,
        len: text.encode_utf16().count(),
        kind: TokenKind::Syntax,
        color: SyntaxHighlight::NoColor,
        text: text.to_string(),
        address,
        callee: None,
        var: None,
        decl: None,
        type_text: None,
    }
}

/// `  a = b + 1;` on line 3 and `  return a;` on line 4.
fn tokens() -> Vec<CodeToken> {
    vec![
        token(3, 2, "a", Some(0x10)),
        token(3, 4, "=", Some(0x10)),
        token(3, 6, "b", Some(0x14)),
        token(3, 8, "+", Some(0x14)),
        token(3, 10, "1", Some(0x14)),
        token(3, 11, ";", None),
        token(4, 2, "return", Some(0x18)),
        token(4, 9, "a", Some(0x10)),
        token(4, 10, ";", None),
    ]
}

fn span(start: (usize, usize), end: (usize, usize)) -> Span {
    Span {
        start: Place {
            line: start.0,
            col: start.1,
        },
        end: Place {
            line: end.0,
            col: end.1,
        },
    }
}

#[test]
fn a_span_takes_the_tokens_it_touches_and_its_end_is_not_included() {
    let tokens = tokens();
    assert_eq!(span_addresses(&tokens, &Span::line(3)), [0x10, 0x14]);
    assert_eq!(span_addresses(&tokens, &Span::line(4)), [0x10, 0x18]);
    assert_eq!(span_addresses(&tokens, &span((3, 6), (3, 7))), [0x14]);
    assert_eq!(span_addresses(&tokens, &span((3, 4), (3, 6))), [0x10]);
    assert_eq!(span_addresses(&tokens, &span((3, 5), (3, 6))), [0u64; 0]);
    assert_eq!(span_addresses(&tokens, &span((3, 11), (4, 2))), [0u64; 0]);
    assert_eq!(
        span_addresses(&tokens, &span((3, 10), (4, 3))),
        [0x14, 0x18]
    );
}

#[test]
fn an_address_gives_one_span_per_run_of_its_tokens() {
    let tokens = tokens();
    assert_eq!(
        address_spans(&tokens, 0x10),
        [span((3, 2), (3, 5)), span((4, 9), (4, 10))]
    );
    assert_eq!(address_spans(&tokens, 0x14), [span((3, 6), (3, 11))]);
    assert_eq!(address_spans(&tokens, 0x99), [Span::line(1); 0]);
    let code = "\n\n  a = b + 1;\n  return a;";
    assert_eq!(span_text(code, &span((3, 6), (3, 11))), "b + 1");
}

#[test]
fn a_span_is_two_ordered_places() {
    assert_eq!(Span::parse("3:6-4:2"), Ok(span((3, 6), (4, 2))));
    for bad in ["3:6", "3-4", "0:0-1:0", "4:2-3:6", "3:6-3:6", "a:b-c:d"] {
        assert!(Span::parse(bad).is_err(), "{bad}");
    }
}

#[test]
fn a_variable_is_live_where_one_of_its_pieces_holds_it() {
    let piece = |register: &str, ranges: &[(u64, u64)]| StoragePiece {
        space: "register".into(),
        register: Some(register.into()),
        offset: i128::from(register.as_bytes()[1]),
        size: 4,
        ranges: ranges.to_vec(),
    };
    let variable = |name: &str, storage: Vec<StoragePiece>| VarInfo {
        name: name.into(),
        type_name: "int".into(),
        stack_offset: None,
        size: 4,
        is_param: false,
        arg_index: None,
        line_numbers: Vec::new(),
        addresses: Vec::new(),
        split_piece: false,
        storage,
    };
    let variables = [
        variable(
            "a",
            vec![piece("eax", &[(0x10, 0x18)]), piece("ebx", &[(0x14, 0x20)])],
        ),
        variable("b", vec![piece("ecx", &[(0x18, 0x1c)])]),
    ];
    let live = |address: u64| -> Vec<(String, Vec<String>)> {
        live_variables(&variables, address)
            .into_iter()
            .map(|(v, pieces)| {
                (
                    v.name.clone(),
                    pieces.iter().filter_map(|p| p.register.clone()).collect(),
                )
            })
            .collect()
    };
    assert_eq!(live(0x10), [("a".to_string(), vec!["eax".to_string()])]);
    assert_eq!(
        live(0x14),
        [("a".to_string(), vec!["eax".to_string(), "ebx".to_string()])]
    );
    assert_eq!(
        live(0x18),
        [
            ("a".to_string(), vec!["ebx".to_string()]),
            ("b".to_string(), vec!["ecx".to_string()])
        ]
    );
    assert!(live(0x20).is_empty());
}

/// A parameter and the frame slot it is spilled to are two rows of one name
/// with the same pieces: they answer as one variable, each piece once.
#[test]
fn two_rows_of_one_name_answer_once() {
    let piece = StoragePiece {
        space: "register".into(),
        register: Some("edi".into()),
        offset: 0x38,
        size: 4,
        ranges: vec![(0x10, 0x20)],
    };
    let row = |is_param: bool, stack_offset: Option<i64>| VarInfo {
        name: "n".into(),
        type_name: "int".into(),
        stack_offset,
        size: 4,
        is_param,
        arg_index: is_param.then_some(0),
        line_numbers: Vec::new(),
        addresses: Vec::new(),
        split_piece: false,
        storage: vec![piece.clone()],
    };
    let rows = [row(true, None), row(false, Some(-28))];
    let live = live_variables(&rows, 0x14);
    assert_eq!(live.len(), 1);
    assert!(live[0].0.is_param);
    assert_eq!(live[0].1, [&piece]);
}
