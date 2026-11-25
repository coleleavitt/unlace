use super::*;

fn hit(pattern: &str, text: &str) -> bool {
    Regex::compile(pattern)
        .expect("pattern compiles")
        .is_match(text)
        .0
}

#[test]
fn literal_and_anchors() {
    assert!(hit("Enter the", "Enter the 128-byte quantum key"));
    assert!(!hit("^the", "Enter the key"));
    assert!(hit("^Enter", "Enter the key"));
    assert!(hit("key$", "Enter the key"));
    assert!(!hit("Enter$", "Enter the key"));
}

#[test]
fn classes_repeats_and_alternation() {
    assert!(hit("%[0-9]*[sd]", "value=%s"));
    assert!(hit("a+b", "aaab"));
    assert!(hit("colou?r", "color"));
    assert!(hit("colou?r", "colour"));
    assert!(hit("cat|dog", "hotdog"));
    assert!(!hit("cat|dog", "hotpony"));
    assert!(hit("\\d{3}-\\d{4}", "call 555-1234 now"));
    assert!(!hit("\\d{3}-\\d{5}", "call 555-1234 now"));
    assert!(hit("[^a-z]+", "ABC"));
    assert!(!hit("^[^a-z]+$", "AbC"));
}

#[test]
fn repetition_preserves_callback_order_and_short_circuiting() {
    for (greedy, accept, expected, remaining) in [
        (true, None, vec![3, 2, 1, 0], 93),
        (false, None, vec![0, 1, 2, 3], 93),
        (true, Some(2), vec![3, 2], 93),
        (false, Some(2), vec![0, 1, 2], 95),
        (true, Some(3), vec![3], 93),
        (false, Some(0), vec![0], 99),
    ] {
        let matcher = Matcher {
            text: &['a', 'a', 'a'],
            icase: false,
            budget: std::cell::Cell::new(100),
        };
        let repetition = Repetition {
            node: Box::new(Node::Char('a')),
            min: 0,
            max: 3,
            greedy,
        };
        let mut visited = Vec::new();
        let matched = matcher.repeat(&repetition, 0, 0, &mut |pos| {
            visited.push(pos);
            accept == Some(pos)
        });
        assert_eq!(matched, accept.is_some());
        assert_eq!(visited, expected);
        assert_eq!(matcher.budget.get(), remaining);
    }
}

#[test]
fn the_serial_format_is_findable_by_its_own_syntax() {
    // The literal an operator would paste straight out of the decompilation:
    // every metacharacter escaped.
    assert!(hit("%\\[\\^-\\]", "%[^-]-%[^-]-%s"));
    // And the shape query, which must not match an ordinary format string.
    assert!(hit("%\\[\\^.\\]-%\\[\\^.\\]-%s", "%[^-]-%[^-]-%s"));
    assert!(!hit("%\\[\\^.\\]-%\\[\\^.\\]-%s", "%s-%s-%s"));
}

#[test]
fn case_insensitive_prefix() {
    assert!(hit("(?i)PASSWORD", "Enter password:"));
    assert!(!hit("PASSWORD", "Enter password:"));
}

#[test]
fn a_bad_pattern_is_rejected_not_reinterpreted() {
    let bad = [
        "(unclosed",
        "[a-",
        "*leading",
        "a{3,1}",
        "trailing\\",
        "(?=x)",
        "a\\b",
        "\\x41",
    ];
    for bad in bad {
        assert!(Regex::compile(bad).is_err(), "{bad:?} must not compile");
    }
    // A `{` that is not a counter stays a literal brace.
    assert!(hit("APOCALYPSE\\{", "APOCALYPSE{THE_END_OF_CRACKMES}"));
    assert!(hit("x{not a count}", "x{not a count}"));
}

#[test]
fn a_pathological_pattern_gives_up_instead_of_hanging() {
    // The classic exponential blowup: every split of the a-run is retried
    // before the missing `b` fails the match.
    let re = Regex::compile("(a+)+b").expect("compiles");
    let (hit, gave_up) = re.is_match(&"a".repeat(64));
    assert!(!hit && gave_up, "the budget must stop the search");
}

#[test]
fn case_folding_reaches_classes_and_ranges() {
    assert!(hit("(?i)[a-z]+", "ABC"));
    assert!(hit("(?i)[A-Z]+", "abc"));
    assert!(!hit("[A-Z]+", "abc"));
    // The negated shorthands keep their meaning under (?i).
    assert!(hit("(?i)\\D", "x"));
    assert!(!hit("(?i)^\\d+$", "abc"));
}

#[test]
fn counted_numbers_preserve_value_and_cursor() {
    for (text, start, value, end) in [
        ("", 0, None, 0),
        ("0}", 0, Some(0), 1),
        ("0007,", 0, Some(7), 4),
        ("4294967295}", 0, Some(u32::MAX), 10),
        ("4294967296x", 0, None, 10),
        ("999999999999x", 0, None, 12),
        ("α42!", 1, Some(42), 3),
        ("١2", 0, None, 0),
        ("12tail", 2, None, 2),
        ("+1", 0, None, 0),
    ] {
        let chars: Vec<_> = text.chars().collect();
        let mut parser = Parser {
            src: &chars,
            pos: start,
            depth: 0,
        };
        assert_eq!((parser.number(), parser.pos), (value, end), "{text:?}");
    }
}

#[test]
fn overflowing_counts_keep_the_existing_pattern_grammar() {
    assert!(hit("^a{4294967296}$", "a{4294967296}"));
    assert!(!hit("^a{4294967296}$", "aa"));
    assert!(hit("^a{2,4294967296}$", "aaaa"));
    assert!(!hit("^a{2,4294967296}$", "a"));
    assert!(hit("^a{0,0}$", ""));
    assert!(!hit("^(?:){2}$", ""));
}
