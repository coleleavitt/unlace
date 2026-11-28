//! Call results typed by their callee, round-tripped through the printed C.

use super::*;

/// Every call in `listing`, keyed by the function printing it: the callee's
/// name and how many arguments it is passed, sorted.  A header counts as a
/// call to itself, so a function whose own parameter list moves shows too.
fn callrettype_calls(listing: &str) -> std::collections::BTreeMap<String, Vec<(String, usize)>> {
    const NOT_CALLS: &[&str] = &["if", "while", "for", "switch", "return", "sizeof"];
    let mut out = std::collections::BTreeMap::new();
    for part in listing.split("// Function: ").skip(1) {
        let name = part.split_whitespace().next().unwrap_or("").to_string();
        let b = part.as_bytes();
        let mut calls = Vec::new();
        let mut i = 0;
        while i < b.len() {
            if b[i].is_ascii_alphabetic() || b[i] == b'_' {
                let start = i;
                while i < b.len() && (b[i].is_ascii_alphanumeric() || b[i] == b'_') {
                    i += 1;
                }
                let word = &part[start..i];
                if i < b.len() && b[i] == b'(' && !NOT_CALLS.contains(&word) {
                    let (mut depth, mut args, mut j, mut empty) = (0i32, 1usize, i, true);
                    while j < b.len() {
                        match b[j] {
                            b'(' => depth += 1,
                            b')' => {
                                depth -= 1;
                                if depth == 0 {
                                    break;
                                }
                            }
                            b',' if depth == 1 => args += 1,
                            b' ' | b'\n' => {}
                            _ if depth >= 1 => empty = false,
                            _ => {}
                        }
                        j += 1;
                    }
                    calls.push((word.to_string(), if empty { 0 } else { args }));
                }
                continue;
            }
            i += 1;
        }
        calls.sort();
        out.insert(name, calls);
    }
    out
}

/// (unlace `callrettype`) A call's result takes the return type its callee's own
/// recovery gave it earlier in the same run, so `(char *)skip_blanks(a0)` under
/// a `char * skip_blanks(char *a0)` declaration prints without the conversion,
/// and the same for a `char *` found by `strchr`, a `FILE *` handed back from a
/// global and a `long` compared signed.  The controls keep their casts: a callee
/// whose unsigned result shares a variable with `strcmp`'s signed one, the
/// `unsigned long` shift a `long` result is read through, a callee recovered
/// `void`, which states nothing, and a `long *` result stored in an integer
/// cache while the function returns `-1` or a count (`cached`, which must stay
/// `unsigned long` rather than turn into a pointer), and two callers
/// that zero-extend a callee's `short` and `int` result in place before
/// returning it (`unsigned short use_s16_as_u`, `unsigned int
/// use_neg_as_unsigned`, called through their printed prototypes, where a
/// statement at the callee's sign would hand back -15536 and
/// 18446744073709551613), and two that keep an `int` result in an `unsigned
/// int` and hand it back as `unsigned long` through a reload or a move from
/// the register it was kept in across another call (`keep_widened`,
/// `keep_across`, read whole and shifted, which prints them `unsigned long` as
/// declared, where `int` would print 9223372036854775806), and one that passes such a result to an `unsigned
/// long` parameter (`pass_widened`, where an `int` argument would hand `halve`
/// a sign-extended value and print 9223372036854775807).  Every fixture is
/// decompiled with the option
/// off and on; every printed function compiled with gcc and clang at -O0 and
/// -O2 must print what the binary prints, and no call in the whole listing may
/// gain or lose an argument or a result.
#[test]
fn a_call_result_typed_by_its_callee_round_trips_through_the_printed_c() {
    const ALL: &[&str] = &[
        "skip_blanks",
        "count_upper",
        "upper_after_blanks",
        "upper_of_rest",
        "first_of",
        "first_char",
        "signed_delta",
        "is_behind",
        "clamp_delta",
        "hash_of",
        "pick",
        "after_colon",
        "fallback_name",
        "name_len",
        "pick_stream",
        "stream_no",
        "s16",
        "use_s16_as_u",
        "neg32",
        "use_neg_as_unsigned",
        "widen_signed",
        "tick",
        "keep_widened",
        "keep_across",
        "halve",
        "pass_widened",
        "mark",
        "marked_len",
        "cached",
    ];
    const O2: &[&str] = &[
        "first_of",
        "first_char",
        "signed_delta",
        "is_behind",
        "clamp_delta",
        "hash_of",
        "pick",
        "after_colon",
        "fallback_name",
        "name_len",
        "pick_stream",
        "stream_no",
        "s16",
        "use_s16_as_u",
        "neg32",
        "use_neg_as_unsigned",
        "widen_signed",
        "tick",
        "keep_widened",
        "keep_across",
        "halve",
        "pass_widened",
        "mark",
        "marked_len",
    ];
    const WANT: &str = "202 205 2\n104 -1\n1 0 -2\n1 -1 0\n7 6 6\n10 21 9\n50000 4294967293 -12\n2147483646 2147483646 2147483647\n";
    const MAIN: &str = r#"
int main(void) {
  char buf[] = "  AbC";
  char buf2[] = "xyzw";
  char buf3[] = "Hi!Hi!!";
  unsigned long keys[] = {0, 5, 99, 100, 500};
  for (unsigned i = 0; i < 5; ++i) {
    long good[4] = {0, 1, 7, 0}, empty[4] = {0};
    unsigned long key = keys[i];
    if (cached(good, key) != ((key && key < 100) ? key : key + 7)) return 1;
    if ((!key || key >= 100) && good[0] != (long)&good[2]) return 2;
    if (cached(empty, key) != ((key && key < 100) ? key : ~0UL)) return 3;
  }
  printf("%ld %ld %ld\n", (long)upper_after_blanks((long)buf), (long)upper_of_rest(buf),
         (long)((char *)skip_blanks(buf) - buf));
  printf("%d %d\n", (int)first_char((unsigned long)(buf2 + 1), 3L) - 17, (int)first_char((unsigned long)buf2, 0L));
  printf("%d %d %ld\n", (int)is_behind(3L, 9L), (int)is_behind(9L, 3L), (long)clamp_delta(1L, 9L));
  printf("%d %d %d\n", (int)pick("ab", "cd", 1), (int)pick("ab", "cd", 0), (int)pick("ab", "ab", 0));
  printf("%ld %ld %ld\n", (long)name_len(NULL), (long)name_len("key:value"), (long)name_len("plain"));
  printf("%d %d %ld\n", (int)stream_no(0), (int)stream_no(1), (long)marked_len(buf3));
  printf("%ld %lu %ld\n", (long)use_s16_as_u(50), (unsigned long)use_neg_as_unsigned(1), (long)widen_signed(4));
  printf("%lu %lu %lu\n", (unsigned long)keep_widened(1) >> 1, (unsigned long)keep_across(1) >> 1,
         (unsigned long)pass_widened(1));
  return 0;
}
"#;
    const O2_WANT: &str = "104 -1\n1 0 -2\n1 -1 0\n7 6 6\n10 21 9\n50000 4294967293 -12\n2147483646 2147483646 2147483647\n";
    const O2_MAIN: &str = r#"
int main(void) {
  char buf2[] = "xyzw";
  char buf3[] = "Hi!Hi!!";
  printf("%d %d\n", (int)first_char((unsigned long)(buf2 + 1), 3L) - 17, (int)first_char((unsigned long)buf2, 0L));
  printf("%d %d %ld\n", (int)is_behind(3L, 9L), (int)is_behind(9L, 3L), (long)clamp_delta(1L, 9L));
  printf("%d %d %d\n", (int)pick("ab", "cd", 1), (int)pick("ab", "cd", 0), (int)pick("ab", "ab", 0));
  printf("%ld %ld %ld\n", (long)name_len(NULL), (long)name_len("key:value"), (long)name_len("plain"));
  printf("%d %d %ld\n", (int)stream_no(0), (int)stream_no(1), (long)marked_len(buf3));
  printf("%ld %lu %ld\n", (long)use_s16_as_u(50), (unsigned long)use_neg_as_unsigned(1), (long)widen_signed(4));
  printf("%lu %lu %lu\n", (unsigned long)keep_widened(1) >> 1, (unsigned long)keep_across(1) >> 1,
         (unsigned long)pass_widened(1));
  return 0;
}
"#;
    // (fixture, printed functions, main, output, what option off prints and what
    // option on prints instead, what both print)
    type Case<'a> = (
        &'a str,
        &'a [&'a str],
        &'a str,
        &'a str,
        &'a [(&'a str, &'a str)],
        &'a [&'a str],
    );
    let cases: [Case; 3] = [
        (
            "callrettype_gcc_O0_x86_64",
            ALL,
            MAIN,
            WANT,
            &[
                ("v1 = (char *)skip_blanks(a0);", "v1 = skip_blanks(a0);"),
                (
                    "stream = (FILE *)pick_stream(a0);",
                    "stream = pick_stream(a0);",
                ),
                (
                    "s = (a0) ? (char *)after_colon(a0) : (char *)fallback_name();",
                    "    s = after_colon(a0);\n  else {\n    s = fallback_name();",
                ),
                ("return (int)neg32(a0);", "return neg32(a0);"),
            ],
            &[
                "return (unsigned long)signed_delta(a0,a1) >> 0x3f;",
                "(unsigned int)hash_of(a0) % 7",
                "  mark(a0);\n",
                "unsigned long cached(long *a0,unsigned long a1)",
                "      return 0xffffffffffffffff;",
                "    a1 = lookup((long *)*a0,a1);",
                "unsigned short use_s16_as_u(",
                "unsigned int use_neg_as_unsigned(",
                "unsigned long keep_widened(",
                "unsigned long keep_across(",
            ],
        ),
        (
            "callrettype_clang_O0_x86_64",
            ALL,
            MAIN,
            WANT,
            &[
                ("v1 = (char *)skip_blanks(a0);", "v1 = skip_blanks(a0);"),
                (
                    "stream = (FILE *)pick_stream(a0);",
                    "stream = pick_stream(a0);",
                ),
                (
                    "return (long)signed_delta(a0,a1) < 0;",
                    "return signed_delta(a0,a1) < 0;",
                ),
                (
                    "s = (a0) ? (char *)after_colon(a0) : (char *)fallback_name();",
                    "s = (a0) ? after_colon(a0) : fallback_name();",
                ),
                ("return (int)neg32(a0);", "return neg32(a0);"),
            ],
            &[
                "  mark(a0);\n",
                "unsigned short use_s16_as_u(",
                "unsigned int use_neg_as_unsigned(",
                "unsigned long keep_widened(",
                "unsigned long keep_across(",
            ],
        ),
        (
            "callrettype_gcc_O2_x86_64",
            O2,
            O2_MAIN,
            O2_WANT,
            &[
                ("v1 = (char *)after_colon(a0);", "v1 = after_colon(a0);"),
                ("v1 = (char *)fallback_name();", "v1 = fallback_name();"),
                (
                    "stream = (FILE *)pick_stream(a0);",
                    "stream = pick_stream(a0);",
                ),
                ("return (int)neg32(a0);", "return neg32(a0);"),
            ],
            &[
                "v1 = (char *)skip_blanks(a0);",
                "return (unsigned long)signed_delta(a0,a1) >> 0x3f;",
                "unsigned short use_s16_as_u(short a0)",
                "unsigned int use_neg_as_unsigned(int a0)",
                "unsigned long keep_widened(",
                "unsigned long keep_across(",
            ],
        ),
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    assert!(
        !compilers.is_empty(),
        "callrettype round trip requires a C compiler"
    );
    for (fixture, funcs, main, want, lines, kept) in cases {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let mut listings: Vec<String> = Vec::new();
        for opt in ["off", "on"] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--sleighpath",
                sp.as_str(),
                "--option",
                "callrettype",
                opt,
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            for (off, on) in lines {
                let want = if opt == "on" { on } else { off };
                assert!(
                    stdout.contains(want),
                    "{fixture} option {opt} does not print `{want}`:\n{stdout}"
                );
            }
            for k in kept {
                assert!(
                    stdout.contains(k),
                    "{fixture} option {opt} lost `{k}`:\n{stdout}"
                );
            }
            let printed = callrettype_functions(&stdout, funcs);
            for cc in &compilers {
                for level in ["-O0", "-O2"] {
                    let dir = std::env::temp_dir().join(format!(
                        "unlace-callrettype-rt-{}-{fixture}-{opt}-{cc}{level}",
                        std::process::id()
                    ));
                    std::fs::create_dir_all(&dir).unwrap();
                    let src = dir.join("rt.c");
                    let exe = dir.join("rt");
                    std::fs::write(
                        &src,
                        format!(
                            "#include <stdbool.h>\n#include <stdio.h>\n#include <string.h>\n\
                             #define stderr_ptr (&stderr)\n#define stdout_ptr (&stdout)\n\
                             #define CONCAT22(h, l) ((unsigned int)(unsigned short)(h) << 16 | (unsigned short)(l))\n\
                             char *g_fallback = \"fallback\";\nvolatile int g_ticks;\n\
                             long *table_of(long *c) {{ return c[1] ? &c[2] : NULL; }}\n\
                             unsigned long lookup(long *t, unsigned long k) {{ return (unsigned long)t[0] + k; }}\n\
                             {printed}\n{main}"
                        ),
                    )
                    .unwrap();
                    let out = Command::new(cc)
                        .args(["-std=gnu11", "-w", "-Wno-error=int-conversion", level])
                        .args(common::CC_GCC15_DEMOTE)
                        .args(["-o", exe.to_str().unwrap(), src.to_str().unwrap()])
                        .output()
                        .expect("spawn the C compiler");
                    assert!(
                        out.status.success(),
                        "{cc} {level} rejected the printed C ({fixture}, option {opt}):\n{}",
                        String::from_utf8_lossy(&out.stderr)
                    );
                    let run = process::required_output(&mut Command::new(&exe));
                    let _ = std::fs::remove_dir_all(&dir);
                    assert_eq!(
                        String::from_utf8_lossy(&run.stdout),
                        want,
                        "{fixture} printed with option {opt} and built by {cc} {level} computes a different value:\n{printed}"
                    );
                }
            }
            listings.push(stdout);
        }
        assert_eq!(
            callrettype_calls(&listings[0]),
            callrettype_calls(&listings[1]),
            "{fixture}: option callrettype moved a call's arguments"
        );
        let reads = |listing: &str, callee: &str| {
            let call = format!("{callee}(");
            listing
                .lines()
                .filter(|l| l.find(&call).is_some_and(|at| l[..at].contains('=')))
                .count()
        };
        for header in listings
            .iter()
            .flat_map(|l| l.lines())
            .filter(|l| l.starts_with("void "))
        {
            let callee = header[5..].split('(').next().unwrap_or("").trim();
            assert_eq!(
                reads(&listings[0], callee),
                reads(&listings[1], callee),
                "{fixture}: option callrettype changed how often the result of the void function {callee} is read"
            );
        }
    }
}
