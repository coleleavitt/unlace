//! Rewrite rule files through `Decompiler::with_rules_file`: what a
//! pattern matches, what a replacement builds, and what a refused file says
//! (needs the checkout's `specs/`, as every workspace integration test does).

use unlace::{Decompiler, Error, Target};

/// `mov eax, edi; or eax, esi; and edi, esi; add eax, edi; ret`
const MIX: &[u8] = &[0x89, 0xf8, 0x09, 0xf0, 0x21, 0xf7, 0x01, 0xf8, 0xc3];
/// `and edi, 0xff; mov eax, edi; ret`
const LOW: &[u8] = &[0x81, 0xe7, 0xff, 0x00, 0x00, 0x00, 0x89, 0xf8, 0xc3];
/// `lea eax, [rdi-1]; ret`
const DEC: &[u8] = &[0x8d, 0x47, 0xff, 0xc3];
/// `and edi, 0xff; and esi, 0xff; lea eax, [rdi+rsi]; ret`
const TWO: &[u8] = &[
    0x81, 0xe7, 0xff, 0, 0, 0, 0x81, 0xe6, 0xff, 0, 0, 0, 0x8d, 0x04, 0x37, 0xc3,
];
/// `addsd xmm0, xmm0; ret`
const DOUBLED: &[u8] = &[0xf2, 0x0f, 0x58, 0xc0, 0xc3];
/// `and dil, sil; mov eax, edi; ret`
const LOW_BYTES: &[u8] = &[0x40, 0x20, 0xf7, 0x89, 0xf8, 0xc3];
/// [`TWO`] with `and esi, 0xf0`.
const TWO_DIFFERENT: &[u8] = &[
    0x81, 0xe7, 0xff, 0, 0, 0, 0x81, 0xe6, 0xf0, 0, 0, 0, 0x8d, 0x04, 0x37, 0xc3,
];

/// `int f(int a, int b)` over `code`, System V.
fn function(code: &[u8]) -> Decompiler {
    declared(code, "int f(int a, int b)")
}

fn declared(code: &[u8], prototype: &str) -> Decompiler {
    let mut bytes = vec![0xcc; 0x20];
    bytes[..code.len()].copy_from_slice(code);
    let sysv = Target::new("x86:LE:64:default:gcc");
    Decompiler::from_raw(bytes, sysv, 0x1000, &[], &[0x1000])
        .unwrap()
        .with_function(0x1000, Some(0x1000 + code.len() as u64), Some("f"))
        .with_prototype(0x1000, prototype)
}

/// A rule file with one rule in `group`.
fn rule_file(group: &str, pattern: &str, replacement: &str) -> tempfile::NamedTempFile {
    let file = tempfile::NamedTempFile::new().unwrap();
    let text = format!(
        "[[rule]]\nname = \"probe\"\ngroup = \"{group}\"\nmatch = \"{pattern}\"\nreplace = \"{replacement}\"\n"
    );
    std::fs::write(file.path(), text).unwrap();
    file
}

/// The `return` statement of `f` over `code` under one `analysis` rule.
fn returned(code: &[u8], pattern: &str, replacement: &str) -> String {
    returned_in("analysis", code, pattern, replacement)
}

fn returned_in(group: &str, code: &[u8], pattern: &str, replacement: &str) -> String {
    let file = rule_file(group, pattern, replacement);
    let mut decompiler = function(code).with_rules_file(file.path()).unwrap();
    statement(&decompiler.decompile(0x1000).unwrap().c)
}

/// The body of a one-statement function.
fn statement(c: &str) -> String {
    let body: Vec<&str> = c
        .lines()
        .map(str::trim)
        .filter(|l| l.ends_with(';'))
        .collect();
    assert_eq!(body.len(), 1, "{c}");
    body[0].to_string()
}

#[test]
fn the_functions_read_as_written_without_a_rule() {
    let plain = |code| statement(&function(code).decompile(0x1000).unwrap().c);
    assert_eq!(plain(MIX), "return (a | b) + (a & b);");
    assert_eq!(plain(LOW), "return a & 0xff;");
    assert_eq!(plain(DEC), "return a + -1;");
    assert_eq!(plain(TWO), "return (a & 0xffU) + (b & 0xffU);");
}

#[test]
fn a_pattern_matches_nested_ops_in_either_operand_order() {
    let sum = "INT_ADD(x, y)";
    assert_eq!(
        returned(MIX, "INT_ADD(INT_OR(x, y), INT_AND(x, y))", sum),
        "return a + b;"
    );
    // The code computes `(a | b) + (a & b)`; every commutative op is written the other way round.
    assert_eq!(
        returned(MIX, "INT_ADD(INT_AND(y, x), INT_OR(x, y))", sum),
        "return b + a;"
    );
    // INT_SUB is not commutative and the code has no subtraction.
    assert_eq!(
        returned(MIX, "INT_SUB(INT_OR(x, y), INT_AND(x, y))", sum),
        "return (a | b) + (a & b);"
    );
}

#[test]
fn an_operand_is_held_to_its_size_value_or_mask() {
    let rem = "INT_REM(x, 0x100)";
    let fired = "return (unsigned int)a % 0x100;";
    let untouched = "return a & 0xff;";
    assert_eq!(returned(LOW, "INT_AND(x, 0xff)", rem), fired);
    assert_eq!(returned(LOW, "INT_AND(x:4, 0xff:4)", rem), fired);
    assert_eq!(returned(LOW, "INT_AND(x:8, 0xff)", rem), untouched);
    assert_eq!(returned(LOW, "INT_AND(x, 0xfe)", rem), untouched);
    // Any constant whose low four bits are set; none with bit 8 set.
    assert_eq!(returned(LOW, "INT_AND(x, 0xf/0xf)", rem), fired);
    assert_eq!(returned(LOW, "INT_AND(x, 0x100/0x100)", rem), untouched);
    // `-1` is all ones at the operand's size.
    assert_eq!(
        returned(DEC, "INT_ADD(x, -1)", "INT_XOR(x, -1)"),
        "return a ^ 0xffffffff;"
    );
    assert_eq!(
        returned(DEC, "INT_ADD(x, 0xffffffff)", "INT_XOR(x, -1)"),
        "return a ^ 0xffffffff;"
    );
}

#[test]
fn a_name_used_twice_is_one_varnode_or_one_constant() {
    let pattern = "INT_ADD(INT_AND(x, k), INT_AND(y, k))";
    let masked_sum = "INT_AND(INT_ADD(x, y), k)";
    assert_eq!(returned(TWO, pattern, masked_sum), "return a + b & 0xff;");
    assert_eq!(
        returned(TWO_DIFFERENT, pattern, masked_sum),
        "return (a & 0xffU) + (b & 0xf0U);"
    );
    // `x | x` is not what the code has: its OR reads two different Varnodes.
    assert_eq!(
        returned(MIX, "INT_ADD(INT_OR(x, x), INT_AND(x, y))", "INT_ADD(x, y)"),
        "return (a | b) + (a & b);"
    );
}

#[test]
fn the_replacement_is_built_as_written() {
    let low = "INT_AND(x:4, 0xff)";
    // A capture and a constant: the op becomes a copy.
    assert_eq!(returned(LOW, low, "x"), "return a;");
    assert_eq!(returned(LOW, low, "7"), "return 7;");
    // A captured constant goes where its name stands.
    assert_eq!(
        returned(LOW, "INT_AND(x, k)", "INT_OR(x, k)"),
        "return a | 0xff;"
    );
    // New ops inside the replacement, each constant as wide as what it meets.
    assert_eq!(
        returned(
            MIX,
            "INT_ADD(INT_OR(x, y), INT_AND(x, y))",
            "INT_XOR(INT_NEGATE(x), INT_MULT(y, 3))"
        ),
        "return ~a ^ b * 3;"
    );
    assert_eq!(returned(LOW, low, "INT_LEFT(x, 3)"), "return a << 3;");
    // Sizes that an op does not fix are written out.
    assert_eq!(
        returned(LOW, low, "INT_SEXT(SUBPIECE(x, 0):1)"),
        "return (char)a;"
    );
    assert_eq!(
        returned(
            MIX,
            "INT_ADD(INT_OR(x, y), INT_AND(x, y))",
            "INT_ZEXT(INT_LESS(x, y))"
        ),
        "return (unsigned int)((unsigned int)a < (unsigned int)b);"
    );
}

#[test]
fn a_floating_point_op_is_built_only_at_a_size_with_a_format() {
    // 2.0 as the bits of a double.
    let file = rule_file(
        "analysis",
        "FLOAT_ADD(x:8, x)",
        "FLOAT_MULT(x, 0x4000000000000000)",
    );
    let mut doubled = declared(DOUBLED, "double f(double a)")
        .with_rules_file(file.path())
        .unwrap();
    assert_eq!(
        statement(&doubled.decompile(0x1000).unwrap().c),
        "return a * 2.0;"
    );

    // The processor has no one-byte floating-point format, so the rule does
    // not fire on the byte-wide AND; an integer rule at the same place does.
    let plain = statement(&function(LOW_BYTES).decompile(0x1000).unwrap().c);
    assert!(
        plain.contains("(unsigned char)a & (unsigned char)b"),
        "{plain}"
    );
    assert_eq!(
        returned(LOW_BYTES, "INT_AND(x:1, y)", "FLOAT_ADD(x, y)"),
        plain
    );
    let ored = returned(LOW_BYTES, "INT_AND(x:1, y)", "INT_OR(x, y)");
    assert!(
        ored.contains("(unsigned char)a | (unsigned char)b"),
        "{ored}"
    );
}

#[test]
fn a_rule_of_the_cleanup_pool_leaves_no_dead_op_behind() {
    // Dead-code removal does not run after the main loop; the rule removes
    // the OR and the AND it leaves unread.
    assert_eq!(
        returned_in(
            "cleanup",
            MIX,
            "INT_ADD(INT_OR(x, y), INT_AND(x, y))",
            "INT_ADD(x, y)"
        ),
        "return a + b;"
    );
}

#[test]
fn rules_that_undo_each_other_end_at_the_time_budget() {
    // The built-in `subzext` rule turns the replacement back into the pattern,
    // on the same op, so the op's rule walk never ends by itself.
    let file = rule_file(
        "analysis",
        "INT_AND(x:4, 0xff)",
        "INT_ZEXT(SUBPIECE(x, 0):1)",
    );
    let mut decompiler = function(LOW)
        .with_rules_file(file.path())
        .unwrap()
        .with_max_fn_seconds(1);
    let error = decompiler.decompile(0x1000).unwrap_err();
    let Error::Decompile { reason, .. } = &error else {
        panic!("{error}");
    };
    // The error names the pool and the two rules, the file's own among them.
    assert!(
        reason.ends_with(
            "budget exceeded (1 s) in action oppool1 (rules subzext and probe keep changing one op)"
        ),
        "{reason}"
    );
}

#[test]
fn the_rules_are_registered_on_every_load() {
    let file = rule_file("analysis", "INT_AND(x, 0xff)", "INT_REM(x, 0x100)");
    // The builder call after the file drops the load; the next one has the rule too.
    let mut decompiler = function(LOW)
        .with_rules_file(file.path())
        .unwrap()
        .with_option("ctypes", "on");
    let c = decompiler.decompile(0x1000).unwrap().c;
    assert!(c.contains("% 0x100"), "{c}");
}

#[test]
fn a_refused_file_is_a_request_error_naming_each_rule_and_line() {
    let file = tempfile::NamedTempFile::new().unwrap();
    let text = "\
[[rule]]
name = \"unknownop\"
group = \"analysis\"
match = \"INT_ANDD(x, 0xff)\"
replace = \"x\"

[[rule]]
name = \"wider\"
group = \"analysis\"
match = \"INT_ZEXT(x)\"
replace = \"x\"
";
    std::fs::write(file.path(), text).unwrap();
    let Err(Error::Request(message)) = function(LOW).with_rules_file(file.path()) else {
        panic!("the file is refused");
    };
    let path = file.path().display();
    let lines: Vec<&str> = message.lines().collect();
    assert_eq!(lines.len(), 2, "{message}");
    assert!(
        lines[0].starts_with(&format!(
            "{path}:4: rule \"unknownop\": match: unknown opcode"
        )),
        "{message}"
    );
    assert!(
        lines[1].starts_with(&format!("{path}:11: rule \"wider\": replace: ")),
        "{message}"
    );

    let missing = function(LOW).with_rules_file("/nonexistent/unlace-rules.toml");
    assert!(matches!(missing, Err(Error::Io { .. })));
}
