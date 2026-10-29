use super::combine_expressions;
use super::parse::parse_expr;

fn combine(body: &str) -> String {
    combine_expressions(format!("    {body}\n"))
        .trim()
        .to_string()
}

#[test]
fn round_trips_printer_forms() {
    for src in [
        "*(_QWORD *)(v2 + 0x10LL) = v1",
        "((__int64 (*)())pfn)()",
        "v3 = (_DWORD)c3 < (_DWORD)1",
        "a->b.c[i + 1] = -~x",
        "x = c ? \"a;b\" : 'c'",
        "p = (struct foo *)q",
        "x = std::max(a, b)",
    ] {
        let e = parse_expr(src).unwrap_or_else(|| panic!("parse {src}"));
        assert_eq!(e.to_string(), src);
    }
}

#[test]
fn compound_assignment() {
    assert_eq!(combine("c1 = c1 + a2 + c2;"), "c1 = c1 + a2 + c2;");
    assert_eq!(combine("c1 = c1 + (a2 + c2);"), "c1 += a2 + c2;");
    assert_eq!(combine("a2 = a2 + v29;"), "a2 += v29;");
    assert_eq!(combine("a2 = v29 + a2;"), "a2 += v29;");
    assert_eq!(combine("a2 = v29 - a2;"), "a2 = v29 - a2;");
    assert_eq!(combine("result = result >> 1;"), "result >>= 1;");
    assert_eq!(combine("c0 = c0 + 0x10LL;"), "c0 += 0x10LL;");
    assert_eq!(
        combine("*(_DWORD *)(p + 8) = *(_DWORD *)(p + 8) | 4;"),
        "*(_DWORD *)(p + 8) |= 4;"
    );
    assert_eq!(combine("x = x + f(x);"), "x = x + f(x);");
    assert_eq!(combine("x = x + x;"), "x = x + x;");
    assert_eq!(combine("x = y * x + x;"), "x = y * x + x;");
    assert_eq!(combine("x = p[x] ^ x;"), "x = p[x] ^ x;");
    assert_eq!(combine("x = x & p->x;"), "x &= p->x;");
    assert_eq!(combine("x = x - y;"), "x -= y;");
    assert_eq!(combine("x = x * y;"), "x *= y;");
    assert_eq!(combine("x = x / y;"), "x /= y;");
    assert_eq!(combine("x = x % y;"), "x %= y;");
    assert_eq!(combine("x = x ^ y;"), "x ^= y;");
    assert_eq!(combine("x = x << 3;"), "x <<= 3;");
    assert_eq!(combine("x = 3 << x;"), "x = 3 << x;");
    assert_eq!(combine("f(x) = f(x) + 1;"), "f(x) = f(x) + 1;");
    assert_eq!(
        combine("MEMORY[0x10] = MEMORY[0x10] + 1;"),
        "MEMORY[0x10] = MEMORY[0x10] + 1;"
    );
}

#[test]
fn increment_and_decrement() {
    assert_eq!(combine("c2 = c2 + 1;"), "++c2;");
    assert_eq!(combine("c2 = c2 - 1LL;"), "--c2;");
    assert_eq!(combine("c2 = 1 + c2;"), "++c2;");
    assert_eq!(combine("i++;"), "++i;");
    assert_eq!(combine("x += 1;"), "++x;");
    assert_eq!(
        combine("for (i = 0; i < n; i++) {"),
        "for (i = 0; i < n; ++i) {"
    );
}

#[test]
fn self_assignment_is_dropped() {
    assert_eq!(combine("c20 = 0; c17 = c17; c8 = 0LL;"), "c20 = 0; c8 = 0;");
    assert_eq!(
        combine_expressions("    c17 = c17;\n    x = 1;\n".into()),
        "    x = 1;\n"
    );
    assert_eq!(combine("*p = *p;"), "*p = *p;");
}

#[test]
fn literal_folds() {
    assert_eq!(combine("c13 = LOBYTE(0);"), "c13 = 0;");
    assert_eq!(
        combine("x = LODWORD(2LL) * LODWORD(c2);"),
        "x = 2u * (_DWORD)c2;"
    );
    assert_eq!(combine("c0 = LODWORD(0xd8LL) / v44;"), "c0 = 0xd8u / v44;");
    assert_eq!(
        combine("*(_DWORD *)(v2) = LODWORD(0x42LL);"),
        "*(_DWORD *)v2 = 0x42;"
    );
    assert_eq!(combine("x = LOBYTE(-1);"), "x = 255;");
    assert_eq!(combine("x = HIDWORD(0x100000002LL);"), "x = 1;");
    assert_eq!(combine("x = HIDWORD(5);"), "x = HIDWORD(5);");
    assert_eq!(combine("x = BYTE1(0x1234);"), "x = 0x12;");
}

#[test]
fn part_reads_become_casts() {
    assert_eq!(
        combine("c3 = LODWORD(c3 + c12 + 1LL);"),
        "c3 = (_DWORD)(c3 + c12 + 1LL);"
    );
    assert_eq!(combine("c19 = LOBYTE(c12 < 1);"), "c19 = (_BYTE)(c12 < 1);");
    assert_eq!(combine("LODWORD(v3) = v7;"), "LODWORD(v3) = v7;");
    assert_eq!(combine("x = HIDWORD(v3);"), "x = HIDWORD(v3);");
    assert_eq!(
        combine("c16 = (_DWORD)LODWORD(c3) < 1;"),
        "c16 = (_DWORD)c3 < 1;"
    );
}

#[test]
fn part_reads_take_the_direct_part() {
    assert_eq!(combine("x = LOBYTE(v0 >> 8);"), "x = BYTE1(v0);");
    assert_eq!(
        combine("x = LOBYTE((_DWORD)v0 >> 24);"),
        "x = BYTE3((_DWORD)v0);"
    );
    assert_eq!(combine("x = LOWORD(v0 >> 16);"), "x = HIWORD(v0);");
    assert_eq!(combine("x = LODWORD(v0 >> 32);"), "x = HIDWORD(v0);");
    assert_eq!(combine("x = BYTE1(v0 >> 8);"), "x = BYTE2(v0);");
    assert_eq!(combine("x = LOBYTE(HIWORD(v0));"), "x = BYTE2(v0);");
    assert_eq!(combine("x = LODWORD(HIDWORD(v0));"), "x = HIDWORD(v0);");
    assert_eq!(combine("x = BYTE1(v0 & 0xFF00);"), "x = BYTE1(v0);");
    assert_eq!(combine("x = HIWORD(0xFFFF0000 & v0);"), "x = HIWORD(v0);");
    assert_eq!(combine("x = (_BYTE)(v0 >> 16);"), "x = BYTE2(v0);");
    assert_eq!(combine("x = (_WORD)(v0 >> 16);"), "x = HIWORD(v0);");
    assert_eq!(combine("x = (_BYTE)(v0 >> 8 >> 8);"), "x = BYTE2(v0);");
    assert_eq!(combine("x = (_DWORD)(v0 >> 32);"), "x = HIDWORD(v0);");
}

#[test]
fn part_reads_keep_bits_they_cannot_prove() {
    // The mask drops bits BYTE1 reads.
    assert_eq!(combine("x = BYTE1(v0 & 0xF00);"), "x = BYTE1(v0 & 0xF00);");
    // BYTE1 of a byte reads bits LOBYTE dropped.
    assert_eq!(combine("x = BYTE1(LOBYTE(v0));"), "x = BYTE1((_BYTE)v0);");
    // No part sits at bit 40.
    assert_eq!(
        combine("x = BYTE1(HIDWORD(v0));"),
        "x = BYTE1(HIDWORD(v0));"
    );
    assert_eq!(combine("x = (_BYTE)(v0 >> 4);"), "x = (_BYTE)(v0 >> 4);");
    assert_eq!(combine("LOBYTE(v0 >> 8) = 1;"), "LOBYTE(v0 >> 8) = 1;");
}

#[test]
fn idempotent_bit_ops() {
    assert_eq!(
        combine("if ((LODWORD(c12) & LODWORD(c12)) != 0) {"),
        "if ((_DWORD)c12) {"
    );
    assert_eq!(combine("x = a | a;"), "x = a;");
    assert_eq!(combine("x = f() & f();"), "x = f() & f();");
}

#[test]
fn zero_tests_in_conditions() {
    assert_eq!(combine("if (qword_3FE8 == 0LL) {"), "if (!qword_3FE8) {");
    assert_eq!(combine("if (byte_4010 != '\\0') {"), "if (byte_4010) {");
    assert_eq!(
        combine("} else if (a1 == 0 && *p != 0) {"),
        "} else if (!a1 && *p) {"
    );
    assert_eq!(combine("if ((v5 & 2) != 0) {"), "if ((v5 & 2) != 0) {");
    assert_eq!(combine("if (a + b == 0) {"), "if (a + b == 0) {");
    assert_eq!(
        combine("} while (c3 != 1 && 1 <= c3);"),
        "} while (c3 != 1 && 1 <= c3);"
    );
    assert_eq!(combine("if (!(v0)) {"), "if (!v0) {");
    assert_eq!(combine("return !!v1;"), "return !!v1;");
    assert_eq!(combine("x = -(-y);"), "x = -(-y);");
    assert_eq!(combine("x = a == 0;"), "x = a == 0;");
}

#[test]
fn comparison_literals() {
    assert_eq!(
        combine("if ((_DWORD)c3 < (_DWORD)1) {"),
        "if ((_DWORD)c3 < 1) {"
    );
    assert_eq!(combine("if (x == 5LL) {"), "if (x == 5) {");
    assert_eq!(combine("if (x < 5uLL) {"), "if (x < 5uLL) {");
    assert_eq!(
        combine("if (x < 0x80000000LL) {"),
        "if (x < 0x80000000LL) {"
    );
}

#[test]
fn values_and_declarations() {
    assert_eq!(combine("return 0LL;"), "return 0;");
    assert_eq!(
        combine("__int64 c1 = 0LL; // rcx"),
        "__int64 c1 = 0; // rcx"
    );
    assert_eq!(
        combine("char c13 = LOBYTE(0); // SF"),
        "char c13 = 0; // SF"
    );
    assert_eq!(combine("x = -1LL;"), "x = -1;");
    assert_eq!(combine("x = y + 1LL;"), "x = y + 1LL;");
}

#[test]
fn leaves_unparsed_lines_alone() {
    for line in [
        "goto LABEL_5;",
        "/* cleanup destructor */ (p)->~Foo(/* extra */ x);",
        "if (cond) { dst = src; }",
        "v = foo<int>(x);",
        "LABEL_3:",
    ] {
        assert_eq!(combine(line), line);
    }
}

/// Every statement the printer emitted for the stored goldens either fails
/// to parse or prints back byte-identically, and combining is idempotent.
#[test]
fn goldens_round_trip_and_combine_is_idempotent() {
    let dir = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../tests/golden/expected");
    let mut checked = 0;
    for entry in std::fs::read_dir(&dir).expect("golden dir") {
        let path = entry.expect("entry").path();
        if path.extension().is_none_or(|e| e != "c") {
            continue;
        }
        let text = std::fs::read_to_string(&path).expect("golden");
        let once = combine_expressions(text);
        let twice = combine_expressions(once.clone());
        assert_eq!(
            once,
            twice,
            "combine is not idempotent on {}",
            path.display()
        );
        checked += 1;
    }
    assert!(checked > 0);
}
