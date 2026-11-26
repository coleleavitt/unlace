use super::pattern::{self, Kind, Number};
use super::sizes::{self, Build, Size};
use super::{RewriteError, parse_rules};

fn rule(name: &str, group: &str, pattern: &str, replacement: &str) -> String {
    format!(
        "[[rule]]\nname = \"{name}\"\ngroup = \"{group}\"\nmatch = \"{pattern}\"\nreplace = \"{replacement}\"\n\n"
    )
}

/// The one error of a one-rule file.
fn refusal(pattern: &str, replacement: &str) -> String {
    let source = rule("probe", "analysis", pattern, replacement);
    let errors = parse_rules(&source).err().unwrap_or_default();
    assert_eq!(errors.len(), 1, "{pattern} -> {replacement}: {errors:?}");
    assert_eq!(errors[0].rule.as_deref(), Some("probe"));
    errors.into_iter().next().unwrap().message
}

fn program(pattern: &str, replacement: &str) -> sizes::Program {
    let (lhs, rhs) = (
        pattern::parse(pattern).unwrap(),
        pattern::parse(replacement).unwrap(),
    );
    sizes::compile((pattern, &lhs), (replacement, &rhs))
        .unwrap_or_else(|problem| panic!("{pattern} -> {replacement}: {}", problem.message))
}

#[test]
fn rules_come_back_in_file_order() {
    let source = format!(
        "# two rules\n\n{}{}",
        rule(
            "orandsum",
            "analysis",
            "INT_ADD(INT_OR(x, y), INT_AND(x, y))",
            "INT_ADD(x, y)"
        ),
        rule("lowbyte", "cleanup", "INT_AND(x:1, 0xff)", "x"),
    );
    let rules = parse_rules(&source).unwrap();
    let seen: Vec<(&str, &str)> = rules
        .iter()
        .map(|rule| (rule.name(), rule.group()))
        .collect();
    assert_eq!(seen, [("orandsum", "analysis"), ("lowbyte", "cleanup")]);
    assert!(parse_rules("# nothing here\n").unwrap().is_empty());
}

#[test]
fn every_refused_rule_is_reported_with_its_name_and_the_line_of_its_fault() {
    // Rule k starts on line 6k+1: its `group` is on line 6k+3, `match` on
    // 6k+4, `replace` on 6k+5.
    let rules = [
        ("unknownop", "analysis", "INT_ANDD(x, 0xff)", "x"),
        ("fine", "analysis", "INT_AND(x:1, 0xff)", "x"),
        ("sizes", "analysis", "INT_AND(x:1, y:2)", "x"),
        ("unbound", "analysis", "INT_AND(x, 0xff)", "y"),
        ("wider", "analysis", "INT_ZEXT(x)", "x"),
        ("nogroup", "nosuch", "INT_AND(x, 0xff)", "x"),
    ];
    let source: String = rules
        .iter()
        .map(|(name, group, pattern, replacement)| rule(name, group, pattern, replacement))
        .collect();
    let errors = parse_rules(&source).unwrap_err();
    let seen: Vec<(Option<&str>, usize)> = errors
        .iter()
        .map(|error| (error.rule.as_deref(), error.line))
        .collect();
    assert_eq!(
        seen,
        [
            (Some("unknownop"), 4),
            (Some("sizes"), 16),
            (Some("unbound"), 23),
            (Some("wider"), 29),
            (Some("nogroup"), 33),
        ]
    );
    let said = |index: usize, what: &str| {
        let message = &errors[index].message;
        assert!(message.contains(what), "{message}");
    };
    said(0, "unknown opcode INT_ANDD");
    said(1, "size mismatch");
    said(2, "unbound capture `y`");
    said(3, "not as wide as the matched op's output");
    said(4, "unknown group `nosuch`");
    assert_eq!(
        errors[0].to_string(),
        format!("rule \"unknownop\": {}", errors[0].message)
    );
}

#[test]
fn a_rule_says_only_what_an_op_can_do() {
    let cannot = refusal("LOAD(space, x)", "x");
    assert!(cannot.contains("LOAD cannot be used"), "{cannot}");
    let count = refusal("INT_ADD(x, y, z)", "x");
    assert!(count.contains("INT_ADD takes 2 inputs, not 3"), "{count}");
    let leaf = refusal("x", "x");
    assert!(leaf.contains("the pattern must be an op"), "{leaf}");
    let masked = refusal("INT_AND(x, 0xf0/0xf0)", "INT_OR(x, 0xf0/0xf0)");
    assert!(masked.contains("a replacement cannot hold it"), "{masked}");
    let never = refusal("INT_AND(x, 0x1/0x2)", "x");
    assert!(never.contains("no constant matches it"), "{never}");
    let offset = refusal("INT_AND(x, y)", "SUBPIECE(x, y)");
    assert!(offset.contains("SUBPIECE is a constant"), "{offset}");
}

#[test]
fn a_rule_that_matches_its_own_replacement_is_refused() {
    for (pattern, replacement) in [
        ("INT_ADD(x, y)", "INT_ADD( x , y )"),
        // The operands of a commutative op match either way round.
        ("INT_ADD(x, y)", "INT_ADD(y, x)"),
        ("INT_ADD(INT_ADD(x, a), b)", "INT_ADD(x, INT_ADD(a, b))"),
        // An op inside the replacement is rewritten in its turn.
        ("INT_AND(x, k)", "INT_OR(INT_AND(x, k), 1)"),
        ("INT_AND(x, 0xf0/0xf0)", "INT_AND(INT_NEGATE(x), 0xff)"),
    ] {
        let message = refusal(pattern, replacement);
        assert!(message.contains("fire forever"), "{pattern}: {message}");
    }
    for (pattern, replacement) in [
        // A capture of the replacement is not an op the pattern can look into.
        ("INT_ADD(INT_ADD(x, a), b)", "INT_ADD(x, b)"),
        ("INT_SUB(INT_SUB(x, a), b)", "INT_SUB(x, INT_SUB(b, a))"),
        ("INT_AND(x, 0xf0/0xf0)", "INT_AND(INT_NEGATE(x), 0x0f)"),
        ("INT_ZEXT(x:1):4", "INT_ZEXT(INT_ZEXT(x):2)"),
    ] {
        program(pattern, replacement);
    }
}

#[test]
fn sizes_that_cannot_fit_are_refused() {
    for (pattern, replacement) in [
        // Two known sizes meet.
        ("INT_AND(x:1, y:2)", "x"),
        ("INT_ADD(x:4, y)", "INT_ADD(x, y:8)"),
        ("INT_EQUAL(x, y):4", "x"),
        ("BOOL_AND(x:2, y)", "x"),
        // An extension, a truncation and a join change the size.
        ("INT_SEXT(x:4):4", "x"),
        ("SUBPIECE(x:4, 2):4", "x"),
        ("PIECE(x:4, y:4):4", "x"),
        // A constant too wide for where it stands.
        ("INT_AND(x:1, 0x100)", "x"),
        ("INT_ADD(x:1, -129)", "x"),
    ] {
        let message = refusal(pattern, replacement);
        assert!(message.contains("size mismatch"), "{pattern}: {message}");
    }
    for (pattern, replacement) in [
        // The replacement is narrower or wider than the op it replaces.
        ("INT_ZEXT(x)", "x"),
        ("SUBPIECE(x, 0)", "x"),
        ("PIECE(x, y)", "INT_OR(x, y)"),
        ("INT_ADD(x:4, y)", "INT_EQUAL(x, y)"),
        ("INT_EQUAL(x:4, y)", "INT_SUB(x, y)"),
    ] {
        let message = refusal(pattern, replacement);
        assert!(
            message.contains("not as wide as the matched op's output"),
            "{pattern}: {message}"
        );
    }
    let open = refusal("INT_AND(x, 0xff)", "INT_ZEXT(SUBPIECE(x, 0))");
    assert!(
        open.contains("nothing gives `SUBPIECE(x, 0)` a size"),
        "{open}"
    );
    let wide = refusal("INT_AND(x:16, 0xff)", "x");
    assert!(wide.contains("a constant is at most 8 bytes"), "{wide}");
    // Sizes and offsets no machine has are refused like any other misfit.
    for pattern in [
        "PIECE(x:2000000000, y:2000000000)",
        "SUBPIECE(x:4, 0xffffffffffffffff):1",
    ] {
        let message = refusal(pattern, "INT_NEGATE(x)");
        assert!(message.contains("size mismatch"), "{pattern}: {message}");
    }
}

/// The size of each input of the replacement's root op.
fn input_sizes(program: &sizes::Program) -> Vec<Size> {
    let Build::Op { inputs, .. } = &program.replacement.kind else {
        panic!("the replacement is an op");
    };
    inputs
        .iter()
        .map(|input| program.sizes[input.node])
        .collect()
}

#[test]
fn the_replacement_takes_its_sizes_from_what_the_pattern_matched() {
    // The matched op's output, `x` and both constants are one size, the size
    // of the Varnode found at node 0.
    let sum = program("INT_AND(x, 0xff)", "INT_ADD(x, 1)");
    assert_eq!(sum.sizes[sum.replacement.node], Size::Of(0));
    assert_eq!(input_sizes(&sum), [Size::Of(0), Size::Of(0)]);
    // A size written anywhere in the class fixes all of it.
    let sum = program("INT_AND(x, 0xff:2)", "INT_ADD(x, 1)");
    assert_eq!(input_sizes(&sum), [Size::Fixed(2), Size::Fixed(2)]);

    // A shift amount nothing sizes is four bytes; one that is given a size keeps it.
    let shift = program("INT_MULT(x, 8)", "INT_LEFT(x, 3)");
    assert_eq!(input_sizes(&shift), [Size::Of(0), Size::Fixed(4)]);
    let shift = program("INT_MULT(x, 8)", "INT_LEFT(x, 3:1)");
    assert_eq!(input_sizes(&shift), [Size::Of(0), Size::Fixed(1)]);

    // The two halves of a PIECE give its size, and a half follows from the whole.
    let joined = program("INT_ZEXT(x:4):8", "PIECE(0:4, x)");
    assert_eq!(joined.sizes[joined.replacement.node], Size::Fixed(8));
    let half = program("INT_ZEXT(x:4):8", "PIECE(0, x)");
    assert_eq!(input_sizes(&half), [Size::Fixed(4), Size::Fixed(4)]);
}

#[test]
fn a_pattern_nested_two_ops_deep_is_offered_every_op_of_its_opcode() {
    use crate::action::Rule;
    let far = |pattern: &str| {
        let rules = parse_rules(&rule("probe", "analysis", pattern, "x")).unwrap();
        rules[0].walks_far()
    };
    // The root reads its inputs and what writes them: one op away.
    assert!(!far("INT_AND(x, 0)"));
    assert!(!far("INT_AND(INT_OR(x, y), INT_XOR(x, y))"));
    // The inputs of the innermost op are two ops from the root.
    assert!(far("INT_AND(INT_OR(INT_NEGATE(x), y), y)"));
}

#[test]
fn a_file_that_is_not_rules_is_one_error() {
    let line = |source: &str| -> RewriteError {
        let errors = parse_rules(source).unwrap_err();
        assert_eq!(errors.len(), 1, "{errors:?}");
        errors.into_iter().next().unwrap()
    };
    let syntax = line("[[rule]]\nname = \"a\"\ngroup = analysis\n");
    assert_eq!((syntax.line, syntax.rule), (3, None));
    let stray = line("\nrules = 1\n");
    assert_eq!(stray.line, 2);
    assert!(stray.message.contains("unknown key `rules`"), "{stray}");
    let table = line("[rule]\nname = \"a\"\n");
    assert!(table.message.contains("[[rule]]"), "{table}");
}

#[test]
fn a_rule_table_holds_exactly_its_four_keys() {
    let one = |body: &str| -> RewriteError {
        let errors = parse_rules(&format!("[[rule]]\n{body}")).unwrap_err();
        assert_eq!(errors.len(), 1, "{errors:?}");
        errors.into_iter().next().unwrap()
    };
    let full = "name = \"a\"\ngroup = \"analysis\"\nmatch = \"INT_NEGATE(INT_NEGATE(x))\"\n";
    let missing = one(full);
    assert_eq!((missing.line, missing.rule.as_deref()), (1, Some("a")));
    assert!(
        missing.message.contains("missing key `replace`"),
        "{missing}"
    );
    let typo = one(&format!("{full}replace = \"x\"\nrepalce = \"x\"\n"));
    assert_eq!(typo.line, 6);
    assert!(typo.message.contains("unknown key `repalce`"), "{typo}");
    let number = one(&format!("{full}replace = 7\n"));
    assert!(number.message.contains("`replace` is a string"), "{number}");
    let unnamed = one("group = \"analysis\"\n");
    assert_eq!(unnamed.rule, None);
    let shouting = one("name = \"Loud\"\n");
    assert!(shouting.message.contains("lower-case"), "{shouting}");

    let twice = format!(
        "{}{}",
        rule("twin", "analysis", "INT_NEGATE(INT_NEGATE(x))", "x"),
        rule("twin", "analysis", "INT_2COMP(INT_2COMP(x))", "x"),
    );
    let errors = parse_rules(&twice).unwrap_err();
    assert_eq!((errors.len(), errors[0].line), (1, 8));
    assert!(errors[0].message.contains("another rule"), "{}", errors[0]);
    // `andmask` is one of the engine's own rules.
    let taken = one("name = \"andmask\"\n");
    assert!(taken.message.contains("built-in rule"), "{taken}");
}

#[test]
fn expressions_parse_as_written() {
    let expr = pattern::parse(" INT_AND( x:1 ,0xff ) :1 ").unwrap();
    let Kind::Op(_, inputs) = &expr.kind else {
        panic!("an op");
    };
    assert_eq!(expr.size, Some(1));
    assert_eq!(inputs[0].kind, Kind::Capture("x".to_string()));
    assert_eq!(inputs[0].size, Some(1));
    let ff = Number {
        magnitude: 0xff,
        negative: false,
    };
    assert_eq!(inputs[1].kind, Kind::Const(ff));
    let masked = pattern::parse("0x80/0xf0:2").unwrap();
    assert_eq!(
        (masked.kind, masked.size),
        (
            Kind::Masked {
                value: 0x80,
                mask: 0xf0
            },
            Some(2)
        )
    );
    for (text, at, what) in [
        ("INT_AND(x, 0xff", 15, "expected `,` or `)`"),
        ("INT_AND(x,)", 10, "unexpected `)`"),
        ("INT_AND x", 0, "needs its inputs"),
        ("Foo", 0, "lower case"),
        ("INT_AND(x, 0xfg)", 11, "not a number"),
        ("INT_AND(x:0, y)", 10, "not a size"),
        ("INT_AND(x, y) z", 14, "after the expression"),
        ("INT_AND(x, -1/0xf)", 14, "no minus sign"),
        ("INT_AND(_, 1)", 8, "unexpected `_`"),
    ] {
        let error = pattern::parse(text).unwrap_err();
        assert_eq!(error.at, at, "{text}: {}", error.message);
        assert!(error.message.contains(what), "{text}: {}", error.message);
    }
    // 256 nodes parse; the 257th is refused before the nesting can use up the stack.
    let nested = |ops: usize| format!("{}x{}", "INT_NEGATE(".repeat(ops), ")".repeat(ops));
    assert!(pattern::parse(&nested(255)).is_ok());
    let error = pattern::parse(&nested(256)).unwrap_err();
    assert!(error.message.contains("more than 256"), "{}", error.message);
}

#[test]
fn a_constant_fits_a_size_or_does_not() {
    let n = |magnitude, negative| Number {
        magnitude,
        negative,
    };
    assert_eq!(n(0xff, false).bits(1), Some(0xff));
    assert_eq!(n(0x100, false).bits(1), None);
    assert_eq!(n(1, true).bits(1), Some(0xff));
    assert_eq!(n(1, true).bits(4), Some(0xffff_ffff));
    assert_eq!(n(128, true).bits(1), Some(0x80));
    assert_eq!(n(129, true).bits(1), None);
    assert_eq!(n(1, true).bits(8), Some(u64::MAX));
    assert_eq!(n(u64::MAX, false).bits(8), Some(u64::MAX));
    assert_eq!(n(1, false).bits(16), None);
}
