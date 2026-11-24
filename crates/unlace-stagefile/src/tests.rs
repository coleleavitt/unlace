use super::*;

const SAMPLE: &str = r#"
[image]
arch = "8051:BE:16:default"
symbols = [{ space = "CODE", offset = "0x0", name = "func0" }]

[[image.bytes]]
space = "CODE"
offset = "0x0"
readonly = true
hex = """
D374FF34
00 74
"""

[script]
commands = ["lo fu func0", { com = "bogus", expect_error = true }, "quit"]

[[match]]
name = "a literal"
count = 1
literal = "P1 = 2;"

[[match]]
name = "a two-line regex"
min = 0
max = 2
regex = ['if \(x\)', 'return']
"#;

#[test]
fn a_stage_test_parses() {
    let t = StageTest::parse(SAMPLE).unwrap();
    assert_eq!(
        t.image_xml,
        "<binaryimage arch=\"8051:BE:16:default\">\n\
         <bytechunk space=\"CODE\" offset=\"0x0\" readonly=\"true\">D374FF340074</bytechunk>\n\
         <symbol space=\"CODE\" offset=\"0x0\" name=\"func0\"/>\n</binaryimage>\n"
    );
    assert_eq!(
        t.commands,
        [
            ("lo fu func0".to_owned(), false),
            ("bogus".to_owned(), true),
            ("quit".to_owned(), false)
        ]
    );
    assert_eq!(t.matches.len(), 2);
    assert_eq!((t.matches[0].min, t.matches[0].max), (1, 1));
    assert_eq!(t.matches[0].lines, [PatternLine::Literal("P1 = 2;".into())]);
    assert_eq!((t.matches[1].min, t.matches[1].max), (0, 2));
    assert_eq!(
        t.matches[1].lines,
        [
            PatternLine::Regex(r"if \(x\)".into()),
            PatternLine::Regex("return".into())
        ]
    );
}

#[test]
fn a_computed_count_needs_a_resolver() {
    let all = SAMPLE.replace(
        "count = 1",
        "count = { settables = { tier = \"core\" }, plus = 3 }",
    );
    assert!(
        StageTest::parse(&all)
            .unwrap_err()
            .contains("needs the settable catalog")
    );
    let t = StageTest::parse_with(&all, &|filter, _| {
        assert_eq!(filter.get("tier").and_then(|v| v.as_str()), Some("core"));
        Ok(4)
    })
    .unwrap();
    assert_eq!((t.matches[0].min, t.matches[0].max), (7, 7));
}

#[test]
fn the_xml_equivalent_reads_back() {
    let xml = StageTest::parse(SAMPLE).unwrap().to_xml().unwrap();
    assert!(xml.starts_with("<decompilertest>\n<binaryimage arch=\"8051:BE:16:default\">"));
    assert!(xml.contains("  <com>lo fu func0</com>\n  <com expecterror=\"true\">bogus</com>\n"));
    assert!(
        xml.contains("<stringmatch name=\"a literal\" min=\"1\" max=\"1\">P1 = 2;</stringmatch>")
    );
    assert!(xml.contains("min=\"0\" max=\"2\">if \\(x\\)\nreturn</stringmatch>"));
    let blank = SAMPLE.replace("literal = \"P1 = 2;\"", "literal = \" P1\"");
    assert!(StageTest::parse(&blank).unwrap().to_xml().is_err());
}

#[test]
fn mistakes_are_errors() {
    for (from, to, err) in [
        ("count = 1", "cuont = 1", "unknown key `cuont`"),
        ("count = 1", "count = 1\nmin = 1", "give `count`, or both"),
        (
            "literal = \"P1 = 2;\"",
            "",
            "exactly one of `regex` and `literal`",
        ),
        ("00 74", "0 74", "whole hex bytes"),
        ("readonly = true", "readonly = \"yes\"", "not a boolean"),
        ("[script]", "[scrpt]", "unknown key `scrpt`"),
    ] {
        let text = SAMPLE.replacen(from, to, 1);
        let e = StageTest::parse(&text).unwrap_err();
        assert!(e.contains(err), "{from} -> {to}: {e}");
    }
}

#[test]
fn literals_escape_the_regex_operators() {
    assert_eq!(
        escape_literal("if (a[0] < b.c) {"),
        r"if \(a\[0\] < b\.c\) \{"
    );
    assert_eq!(escape_literal(r"x\y|z^$*+?"), r"x\\y\|z\^\$\*\+\?");
}
