//! Big-endian register pairs and first-register returns.

use super::*;

/// A 64-bit value a function builds in its one return register from two 32-bit
/// halves is returned whole, and both arguments that feed it stay parameters.
/// The return-pair repair read an argument register in the returned value as
/// whatever the caller had left there: `join_lo_hi` (`((u64)hi << 32) | lo`)
/// printed `unsigned int join_lo_hi(unsigned int a0) { return a0; }` at -O0,
/// and `join_hi_sum` (`((u64)(a + 1) << 32) | b`) printed `return a0 + 1;` at
/// -O2.  The round trip compiles the printed functions with gcc and clang at -O0
/// and -O2 and checks each build prints what the fixture prints.
#[test]
fn a_value_built_in_one_return_register_round_trips_through_the_printed_c() {
    const FUNCS: &str = "join_lo_hi,join_third,join_sixth,join_signed,join_hi_sum,join_lo_sum,join_after_call,join_hi_lo";
    const ARITY: [(&str, usize); 8] = [
        ("join_lo_hi", 2),
        ("join_third", 3),
        ("join_sixth", 6),
        ("join_signed", 2),
        ("join_hi_sum", 2),
        ("join_lo_sum", 2),
        ("join_after_call", 2),
        ("join_hi_lo", 2),
    ];
    const WANT: &str = "1234567800000005 fedcba98ffffffff\n2222222211111111 800000007fffffff\n\
                        6666666655555555 fffffffe00000001\nfffffffe00000005 ffffffff80000000\n\
                        1234567900000005 ffffffff00000000\n1234567800000006 fedcba9800000000\n\
                        1234567800000005 fedcba98ffffffff\n0000000512345678 fffffffffedcba98\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
typedef unsigned long u64;
int main(void) {
  printf("%016lx %016lx\n", F(u64, join_lo_hi)(5u, 0x12345678u), F(u64, join_lo_hi)(0xffffffffu, 0xfedcba98u));
  printf("%016lx %016lx\n", F(u64, join_third)(9u, 0x11111111u, 0x22222222u), F(u64, join_third)(0u, 0x7fffffffu, 0x80000000u));
  printf("%016lx %016lx\n", F(u64, join_sixth)(1u, 2u, 3u, 4u, 0x55555555u, 0x66666666u),
         F(u64, join_sixth)(1u, 2u, 3u, 4u, 1u, 0xfffffffeu));
  printf("%016lx %016lx\n", (u64)F(long, join_signed)(5, -2), (u64)F(long, join_signed)((int)0x80000000u, -1));
  printf("%016lx %016lx\n", F(u64, join_hi_sum)(0x12345678u, 5u), F(u64, join_hi_sum)(0xfffffffeu, 0u));
  printf("%016lx %016lx\n", F(u64, join_lo_sum)(5u, 0x12345678u), F(u64, join_lo_sum)(0xffffffffu, 0xfedcba98u));
  printf("%016lx %016lx\n", F(u64, join_after_call)(5u, 0x12345678u), F(u64, join_after_call)(0xffffffffu, 0xfedcba98u));
  printf("%016lx %016lx\n", F(u64, join_hi_lo)(5u, 0x12345678u), F(u64, join_hi_lo)(0xffffffffu, 0xfedcba98u));
  return 0;
}
"#;
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for fixture in [
        "piecehi_gcc_O0_x86_64",
        "piecehi_clang_O0_x86_64",
        "piecehi_gcc_O2_x86_64",
        "piecehi_clang_O2_x86_64",
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            bin.as_str(),
            "--functions",
            FUNCS,
            "--sleighpath",
            sp.as_str(),
        ]);
        assert!(ok, "unlace decompile-all failed on {fixture}: {stderr}");
        for (name, arity) in ARITY {
            let decl = stdout
                .lines()
                .find(|l| {
                    !l.starts_with(' ') && l.contains(&format!(" {name}(")) && l.ends_with(')')
                })
                .unwrap_or_else(|| panic!("{fixture}: no declaration of {name}:\n{stdout}"));
            let params = decl.split_once('(').unwrap().1.trim_end_matches(')');
            assert_eq!(
                params.split(',').count(),
                arity,
                "{fixture}: {name} lost an argument: `{decl}`"
            );
            assert!(
                decl.starts_with("unsigned long ") || decl.starts_with("long "),
                "{fixture}: {name} returns less than the eight bytes it computes: `{decl}`"
            );
        }
        for cc in &compilers {
            for level in ["-O0", "-O2"] {
                let dir = std::env::temp_dir().join(format!(
                    "unlace-piecehi-rt-{}-{fixture}-{cc}{level}",
                    std::process::id()
                ));
                std::fs::create_dir_all(&dir).unwrap();
                let src = dir.join("rt.c");
                let exe = dir.join("rt");
                std::fs::write(
                    &src,
                    format!(
                        "#include <stdio.h>\n#include <sys/wait.h>\n\
                         #define CONCAT44(h, l) ((unsigned long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
                         {stdout}\n{MAIN}"
                    ),
                )
                .unwrap();
                let out = Command::new(cc)
                    .args([
                        "-std=gnu11",
                        "-w",
                        level,
                        "-o",
                        exe.to_str().unwrap(),
                        src.to_str().unwrap(),
                    ])
                    .args(common::CC_GCC15_DEMOTE)
                    .output()
                    .expect("spawn the C compiler");
                assert!(
                    out.status.success(),
                    "{cc} {level} rejected the printed C ({fixture}):\n{}",
                    String::from_utf8_lossy(&out.stderr)
                );
                let run = process::required_output(&mut Command::new(&exe));
                let _ = std::fs::remove_dir_all(&dir);
                assert_eq!(
                    String::from_utf8_lossy(&run.stdout),
                    WANT,
                    "{fixture} printed and built by {cc} {level} computes a different value:\n{stdout}"
                );
            }
        }
    }
}

/// A value a sign-sensitive operation reads keeps its own variable rather
/// than merging into a global it is stored to, and the store stays where the
/// binary makes it.  `else { u = init * 3; sink = u; r = (int)(u >> 4); }` used
/// to print `sink = init * 3; r = sink >> 4;` — the shift re-read the global, so
/// a reader who gives `sink` its real type (`volatile int`) turned the logical
/// shift arithmetic.  The witnesses cover both signedness directions across a
/// branch merge, a straight line, a loop, a compare, a divide/remainder, a
/// widening (`w_sext`, `w_first`), a conversion to `double` (`w_i2f`) and a byte
/// compare (`w_eqc`), and `w_alias` stores before a pointer store that may alias
/// the global.  `w_sadd`, `w_xordiv`, `w_f`, `w_sidx` and `w_cond` reach the
/// operation through `+` or `^`, which C types after the global too
/// (`usink = a0 * 3; v1 = usink + 1 >> 4;`).  `w_fold16`, `w_fold8`, `w_neg16`,
/// `w_sub16`, `w_not16` and `w_xor16` compare a short or a byte computed with
/// `+`, `-`, `~` or `^` against a constant, which a fold later moves across that
/// operator (`hsink = a0 * 3; v1 = hsink == -1;`), `w_carry16` tests a carry,
/// and `w_meld16` ors two compares that merge into `shsink < 2`.  `w_realias`,
/// `w_rephi`, `w_reboth` and `w_recopy` store to a plain `int` and then through a
/// pointer that the harness points at it, so the load the binary makes afterwards
/// must still print as the global.  `w_ohoist`, `w_oif` and `w_oloop` load a
/// global after a pointer store that may change it, store a new value to it and
/// still use the value they loaded, which must not be copied out above the
/// pointer store.  Each is decompiled and, with the globals given their real
/// types, compiled by gcc and clang against the fixture's own `main` and must
/// print what the binary prints.  The functions a build keeps from the source
/// (clang -O2's `w_first`, gcc -O0's `w_rephi`, and the `w_o*` witnesses outside
/// the builds they witness) have printed forms with defects outside this test.
#[test]
fn a_value_read_by_a_sign_sensitive_op_is_not_re_read_from_a_global() {
    const FUNCS: &str = "w_branch,w_line,w_loop,w_less,w_div,w_signed,w_order,w_once,w_alias,w_sext,w_i2f,w_eqc,\
                         w_sadd,w_xordiv,w_f,w_sidx,w_cond,w_fold16,w_fold8,w_neg16,w_sub16,w_not16,w_xor16,w_carry16,w_meld16,\
                         w_realias,w_reboth,w_recopy";
    const DECLS: &str = "#include <stdio.h>\n#include <string.h>\n#include <stdlib.h>\n#include <stdbool.h>\n\
                         extern volatile int sink;\nextern volatile int sink2;\nextern volatile unsigned int usink;\n\
                         extern volatile unsigned char csink;\nextern volatile unsigned short hsink;\n\
                         extern volatile short shsink;\nextern unsigned long res;\nextern int retsel;\n\
                         extern char words[];\nextern int gre;\nextern int gre2;\nextern unsigned int uold;\n\
                         extern int gold;\n";
    let sp = specs();
    let fixtures_dir = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let harness = fixtures_dir.join("globalstore_x86_64.c");
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for (fixture, extra, kept) in [
        (
            "globalstore_gcc_O0_x86_64",
            ",w_first,w_oif,w_oloop",
            &["REPHI", "OHOIST"][..],
        ),
        (
            "globalstore_gcc_O2_x86_64",
            ",w_first,w_rephi,w_ohoist",
            &["OIF", "OLOOP"][..],
        ),
        (
            "globalstore_clang_O2_x86_64",
            ",w_rephi,w_oif",
            &["FIRST", "OHOIST", "OLOOP"][..],
        ),
    ] {
        let bin = fixtures_dir.join(fixture).to_str().unwrap().to_string();
        let want = match process::optional_output(&mut Command::new(&bin)) {
            Some(o) => String::from_utf8_lossy(&o.stdout).to_string(),
            None => {
                eprintln!(
                    "globalstore round trip: the fixture {fixture} does not run here, spelling checked only"
                );
                continue;
            }
        };
        let funcs = format!("{FUNCS}{extra}");
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            bin.as_str(),
            "--functions",
            funcs.as_str(),
            "--sleighpath",
            sp.as_str(),
        ]);
        assert!(ok, "unlace decompile-all failed on {fixture}: {stderr}");
        assert!(
            !stdout.contains("v1 = sink >> 4")
                && !stdout.contains("v1 = usink >> 4")
                && !stdout.contains("usink + 1")
                && !stdout.contains("(sink ^ 0x10")
                && !stdout.contains("hsink == ")
                && !stdout.contains("csink == ")
                && !stdout.contains("shsink < "),
            "{fixture}: the store's value is still re-read from the global:\n{stdout}"
        );
        for cc in &compilers {
            let dir = std::env::temp_dir().join(format!(
                "unlace-globalstore-rt-{}-{fixture}-{cc}",
                std::process::id()
            ));
            let _ = std::fs::remove_dir_all(&dir);
            std::fs::create_dir_all(&dir).unwrap();
            let printed = dir.join("printed.c");
            std::fs::write(&printed, format!("{DECLS}{stdout}\n")).unwrap();
            let exe = dir.join("rt");
            let mut args = vec![
                "-std=gnu11".to_string(),
                "-w".into(),
                "-O0".into(),
                "-DGLOBALSTORE_HARNESS".into(),
            ];
            args.extend(kept.iter().map(|k| format!("-DGLOBALSTORE_KEEP_{k}")));
            let out = Command::new(cc)
                .args(&args)
                .args(common::CC_GCC15_DEMOTE)
                .args([
                    "-o",
                    exe.to_str().unwrap(),
                    printed.to_str().unwrap(),
                    harness.to_str().unwrap(),
                ])
                .output()
                .expect("spawn the C compiler");
            assert!(
                out.status.success(),
                "{cc} rejected the printed C ({fixture}):\n{}\n{stdout}",
                String::from_utf8_lossy(&out.stderr)
            );
            let run = process::required_output(&mut Command::new(&exe));
            let got = String::from_utf8_lossy(&run.stdout).to_string();
            let _ = std::fs::remove_dir_all(&dir);
            assert_eq!(
                got, want,
                "{fixture} built by {cc} computes a different value than the binary:\n{stdout}"
            );
        }
    }
}

/// A 64-bit value a 32-bit ABI returns in two registers joins with the high
/// word where the ABI puts it. Every big-endian ABI here returns the high word
/// in the FIRST register (PowerPC r3, MIPS o32 `$2`, SPARC `%o0`, ARM r0), and
/// return recovery and the call-output pair joined that register as the LOW
/// word, so `wide_mul` printed `CONCAT44(low, high)` and returned the two halves
/// swapped. `same` and `keep_zero` return one register. `bejoin.c`'s big-endian
/// builds and two little-endian controls are printed, every function is
/// compiled with gcc and clang at -O0 and -O2, and each is run against the
/// source's own arithmetic: the cross-built objects cannot run on this host, so
/// the source stands in for the binary. The arguments of `add_one` go in the
/// ABI's register order: high word first on a big-endian target. MIPS
/// `add_one` and `triple_plus` are left out: unlace drops a half of the first
/// (on either endianness), and in the second cannot follow MIPS's unrelocated
/// call. SPARC `triple_plus` reads the `%o0:%o1` pair its call to `triple`
/// returns (#862). On SPARC `restore` hands the second argument back in `%o1`,
/// and `keep_zero` and `same` printed it shifted into the high word on their
/// `return 0` path (#796).
#[test]
fn a_big_endian_register_pair_round_trips_through_the_printed_c() {
    const ALL: &[&str] = &[
        "wide_mul",
        "add_one",
        "triple",
        "triple_plus",
        "same",
        "keep_zero",
    ];
    let cases: [(&str, bool, &[&str]); 6] = [
        ("bejoin_ppc32_be.o", true, ALL),
        ("bejoin_arm32_be.o", true, ALL),
        ("bejoin_sparc32_be.o", true, ALL),
        (
            "bejoin_mips32_be.o",
            true,
            &["wide_mul", "triple", "same", "keep_zero"],
        ),
        ("bejoin_ppc32_le.o", false, ALL),
        ("bejoin_arm32_le.o", false, ALL),
    ];
    let sp = specs();
    for (fixture, big_endian, funcs) in cases {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
            "--option",
            "armpairparam",
            "off",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, funcs);
        let decls: String = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .map(|sig| format!("{sig};\n"))
            .collect();
        let mut checks =
            String::from("  for (int i = 0; i < 10; i++)\n    for (int j = 0; j < 10; j++)\n");
        checks.push_str("      bad += (unsigned long long)wide_mul(xs[i], xs[j]) != (unsigned long long)((long long)xs[i] * xs[j]);\n");
        checks.push_str("  for (int i = 0; i < 10; i++) {\n");
        checks.push_str("    bad += (unsigned long long)triple(xs[i]) != (unsigned long long)((long long)xs[i] * 3);\n");
        if funcs.contains(&"triple_plus") {
            checks.push_str("    bad += (unsigned long long)triple_plus(xs[i]) != (unsigned long long)((long long)xs[i] * 3 + 7);\n");
        }
        checks.push_str("  }\n");
        checks.push_str("  for (int i = 0; i < 10; i++) {\n    int cell = 0;\n");
        if funcs.contains(&"keep_zero") {
            checks.push_str("    bad += keep_zero((void *)&cell, xs[i]) != 0 || cell != xs[i];\n");
        }
        checks.push_str("    for (int j = 0; j < 10; j++)\n");
        checks.push_str("      bad += (unsigned int)same(xs[i], xs[j]) != (unsigned int)(xs[i] == xs[j]);\n  }\n");
        if funcs.contains(&"add_one") {
            let (first, second) = if big_endian {
                ("hi", "lo")
            } else {
                ("lo", "hi")
            };
            checks.push_str(&format!(
                "  for (int i = 0; i < 6; i++) {{\n    int hi = (int)(vs[i] >> 32); unsigned int lo = (unsigned int)vs[i];\n    \
                 bad += (unsigned long long)add_one({first}, {second}) != (unsigned long long)(vs[i] + 1);\n  }}\n"
            ));
        }
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             {decls}{printed}\n\
             int main(void) {{\n  static const int xs[10] = {{0, 1, -1, 7, -7, 0x7fffffff, (int)0x80000000, 0x55555553, -0x55555553, 123456789}};\n  \
             static const long long vs[6] = {{0, 0xffffffffLL, -1, 0x7ffffffffffffffeLL, -0x100000000LL, 0x12345678ffffffffLL}};\n  \
             int bad = 0;\n{checks}  printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// Compile `src_text` -- the printed functions `printed` and a `main` that
/// prints how many of its checks disagree with the source -- with gcc and clang
/// at -O0 and -O2, run it, and require `0`. The cross-built objects cannot run
/// on this host, so the source's own arithmetic stands in for the binary.
/// The printed C is the machine's arithmetic, which wraps, so it is built with
/// `-fwrapv`: gcc -O2 otherwise folds `-a0 < 0` for `a0 == INT_MIN`.
fn bejoin_round_trip(label: &str, src_text: &str, printed: &str) {
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for cc in &compilers {
        for level in ["-O0", "-O2"] {
            let dir = std::env::temp_dir().join(format!(
                "unlace-bejoin-rt-{}-{label}-{cc}{level}",
                std::process::id()
            ));
            std::fs::create_dir_all(&dir).unwrap();
            let src = dir.join("rt.c");
            let exe = dir.join("rt");
            std::fs::write(&src, src_text).unwrap();
            let out = Command::new(cc)
                .args([
                    "-std=gnu11",
                    "-w",
                    "-fwrapv",
                    "-Wno-error=int-conversion",
                    level,
                ])
                .args(common::CC_GCC15_DEMOTE)
                .args(["-o", exe.to_str().unwrap(), src.to_str().unwrap()])
                .output()
                .expect("spawn the C compiler");
            assert!(
                out.status.success(),
                "{cc} {level} rejected the printed C ({label}):\n{}\n{src_text}",
                String::from_utf8_lossy(&out.stderr)
            );
            let run = process::required_output(&mut Command::new(&exe));
            let _ = std::fs::remove_dir_all(&dir);
            assert_eq!(
                String::from_utf8_lossy(&run.stdout),
                "0\n",
                "{label} printed and built by {cc} {level} computes a different value:\n{printed}"
            );
        }
    }
}

/// How many parameters the printed header `sig` declares.
fn bejoin_arity(sig: &str) -> usize {
    let inner = sig
        .split_once('(')
        .and_then(|(_, rest)| rest.rsplit_once(')'))
        .map(|(p, _)| p.trim())
        .unwrap_or("");
    if inner.is_empty() || inner == "void" {
        0
    } else {
        inner.split(',').count()
    }
}

/// A big-endian ARM ABI returns a `long long` in r0:r1 with the high word in r0,
/// and r1 is also where the second argument arrives. `bejoin_carry.c` carries
/// that argument across a call into the low word (`mov r4,r1; bl ext; mov r0,#0;
/// mov r1,r4`). Joined first register low, all three printed `return (unsigned
/// long long)a1 << 0x20;`. The move back into r1 makes the argument a value the
/// function returns, not the register left as it arrived, so the pair joins in
/// the ABI's order even though the call might, for all return recovery knows
/// yet, read r1. The little-endian build is the control and returns the
/// argument in r0 as `a1`. Every function is compiled with gcc and clang at -O0
/// and -O2 and run against the source; `carry_low`'s argument goes in the ABI's
/// register order.
#[test]
fn an_argument_carried_across_a_call_into_the_low_word_is_returned() {
    let sp = specs();
    for (fixture, big_endian) in [
        ("bejoin_carry_arm32_be.o", true),
        ("bejoin_carry_arm32_le.o", false),
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &["carry_b", "carry_if", "carry_low"]);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            3,
            "{fixture}: all three functions print:\n{stdout}"
        );
        if !big_endian {
            let carry_b = callrettype_functions(&stdout, &["carry_b"]);
            assert!(
                carry_b.contains("return a1;"),
                "the little-endian control returns r1 as it arrived:\n{carry_b}"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let low_arity = sigs
            .iter()
            .find(|s| s.contains("carry_low("))
            .map(|s| bejoin_arity(s))
            .unwrap_or(0);
        let words = if big_endian {
            ["hi", "lo"]
        } else {
            ["lo", "hi"]
        };
        let low_args = words[..low_arity.min(2)].join(", ");
        let src_text = format!(
            "#include <stdio.h>\n\
             void ext(void) {{}}\n\
             {decls}{printed}\n\
             int main(void) {{\n  static const int xs[10] = {{0, 1, -1, 7, -7, 0x7fffffff, (int)0x80000000, 0x55555553, -0x55555553, 123456789}};\n  \
             static const long long vs[6] = {{0, 0xffffffffLL, -1, 0x7ffffffffffffffeLL, -0x100000000LL, 0x12345678ffffffffLL}};\n  \
             int bad = 0;\n  \
             for (int i = 0; i < 10; i++)\n    for (int j = 0; j < 10; j++) {{\n      \
             bad += (unsigned long long)carry_b(xs[i], xs[j]) != (unsigned long long)(unsigned int)xs[j];\n      \
             bad += (unsigned long long)carry_if(xs[i], xs[j]) != (unsigned long long)(unsigned int)xs[j];\n    }}\n  \
             for (int i = 0; i < 6; i++) {{\n    unsigned int hi = (unsigned int)(vs[i] >> 32), lo = (unsigned int)vs[i];\n    \
             (void)hi;\n    bad += (unsigned long long)carry_low({low_args}) != (unsigned long long)lo;\n  }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// AVR's gcc ABI returns an `int` in R25:R24 with the high byte in R25, the
/// first register its `<join reversesignif="true">` rule consumes, although the
/// target is little-endian. The pair joined R25 as the low byte, so `negate`
/// printed `CONCAT11(a1,a0)`. With the order right, the two registers are
/// contiguous and name `R25R24` -- a global, since AVR maps its register file
/// into data memory -- and a value built there printed as `return R25R24;`, a
/// read of a register the printed C never assigns. `bejoin_avr.bin` is the raw
/// `.text` of `bejoin_avr.c`; both functions are compiled with gcc and clang at
/// -O0 and -O2 against the source's 16-bit arithmetic, the arguments in ABI
/// register order (R25, the high byte, first). The printed C writes the zero
/// register `R1`, which the driver declares.
#[test]
fn an_avr_register_pair_joins_high_byte_first_as_a_value() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/bejoin_avr.bin")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--raw-image",
        "--target",
        "avr8:LE:16:default:gcc",
        "--base",
        "0",
        "--addr",
        "0x0",
        "--addr",
        "0x4",
        "--sleighpath",
        &sp,
        "--option",
        "bejoin",
        "on",
    ]);
    assert!(ok, "unlace decompile-all bejoin_avr.bin failed: {stderr}");
    let printed = callrettype_functions(&stdout, &["sub_0", "sub_4"]);
    let sigs: Vec<&str> = printed
        .split("// Function: ")
        .skip(1)
        .filter_map(|part| part.lines().nth(1))
        .collect();
    assert_eq!(sigs.len(), 2, "both functions print:\n{stdout}");
    assert!(
        !printed.contains("return R25R24;"),
        "the pair is a value, not the global register:\n{printed}"
    );
    let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
    let src_text = format!(
        "#include <stdbool.h>\n#include <stdio.h>\n\
         char R1;\n\
         #define CONCAT11(h, l) ((unsigned short)((unsigned char)(h) << 8 | (unsigned char)(l)))\n\
         {decls}{printed}\n\
         int main(void) {{\n  static const int xs[12] = {{0, 1, -1, 0x7f, 0x80, 0xff, 0x100, 0x1234, 0x7fff, -0x8000, -2, 0x55aa}};\n  \
         int bad = 0;\n  \
         for (int i = 0; i < 12; i++) {{\n    unsigned short x = (unsigned short)xs[i];\n    \
         bad += (unsigned short)sub_0((char)(x >> 8), (char)x) != (unsigned short)(0u - x);\n    \
         bad += (unsigned short)sub_4((char)(x >> 8), (unsigned char)x) != (unsigned short)(x + 0x1234u);\n  }}\n  \
         printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
    );
    bejoin_round_trip("bejoin_avr.bin", &src_text, &printed);
}

/// The external calls `printed` makes -- the fixtures' `ext*` callees, or
/// `sub_*` where a call is not relocated -- declared and defined as functions
/// returning 0.
fn bejoin_stubs(printed: &str) -> (String, String) {
    let ident = |c: char| c.is_ascii_alphanumeric() || c == '_';
    let mut stubs: Vec<&str> = Vec::new();
    let mut at = 0;
    while at < printed.len() {
        let Some(start) = printed[at..].find(|c: char| ident(c)).map(|n| at + n) else {
            break;
        };
        let end = printed[start..]
            .find(|c: char| !ident(c))
            .map_or(printed.len(), |n| start + n);
        let name = &printed[start..end];
        if (name.starts_with("sub_") || name.starts_with("ext"))
            && printed[end..].trim_start().starts_with('(')
        {
            stubs.push(name);
        }
        at = end;
    }
    stubs.sort_unstable();
    stubs.dedup();
    (
        stubs.iter().map(|s| format!("int {s}();\n")).collect(),
        stubs
            .iter()
            .map(|s| format!("int {s}() {{ return 0; }}\n"))
            .collect(),
    )
}

/// On a big-endian ABI a function returning one `int` often leaves something
/// else in the second return register, the low word of a returned `long
/// long`: clang -O0 on MIPS materializes a zero in `$3` it never reads
/// (`realeof`, `both`), and SPARC's `restore` hands back in `%o1` whatever the
/// function left in `%i1` -- the second argument (`bound`'s first path, the
/// byte readers), a value it computed and also used (`bound`'s other paths,
/// `back4`'s loop), a byte it stored (`mark`). Joined first register low, such
/// a pair narrows back to the first register (the uncomputed-half repair, a
/// bool or byte return, C's truncation in `bound`'s narrow prototype); joined
/// in the ABI's order it keeps the wrong one, and printed `both` as `v1 <<
/// 0x20`, `bound`'s pair returns with their halves swapped, and the byte
/// readers as `char`. These stay joined as before and keep the first
/// register. `zero_after` and `one_after` keep the second argument in `%i1`
/// after passing it to a call, and their `return 0` printed it shifted into
/// the high word, folded into the pair before the repair read it (#796).
/// Every function is compiled with gcc and clang at -O0 and -O2 and run
/// against the source. Left out: `hi_only` returns `(u64)x << 32` with the
/// same zero in `$3` as the `int` functions and prints as its high word, as
/// before; `pgetc_like`, `expand` and -O0 `one_after` print a pair of the
/// value and a value they also used in `%i1`, as before.
#[test]
fn a_big_endian_function_returning_one_register_keeps_it() {
    let sp = specs();
    let cases: [(&str, &[&str]); 5] = [
        ("bejoin_zero_mips32_O0.o", &["realeof", "both"]),
        ("bejoin_window_sparc32_O0.o", &["mark", "zero_after"]),
        (
            "bejoin_window_sparc32_O2.o",
            &["back4", "zero_after", "one_after"],
        ),
        (
            "bejoin_narrow_sparc32_O0.o",
            &["bound", "ibyte", "ubyte", "ihalf", "ibyte_leaf"],
        ),
        (
            "bejoin_narrow_sparc32_O2.o",
            &["bound", "ibyte", "ubyte", "ihalf", "ibyte_leaf"],
        ),
    ];
    for (fixture, funcs) in cases {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, funcs);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            funcs.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        assert!(
            !printed.contains("<< 0x20"),
            "{fixture}: no value is shifted into the high word:\n{printed}"
        );
        let (stub_decls, stub_defs) = bejoin_stubs(&printed);
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let mut checks = String::new();
        for f in funcs {
            checks.push_str(match *f {
                "realeof" => "  for (int i = 0; i < 10; i++)\n    bad += (long long)realeof(xs[i]) != (long long)ref_realeof(xs[i]);\n",
                "both" => "  for (int i = 0; i < 10; i++)\n    for (int j = 0; j < 10; j++)\n      \
                           bad += (long long)both(xs[i], xs[j]) != (long long)(xs[i] && xs[j]);\n",
                "mark" => "  for (int n = 0; n < 8; n++) {\n    char buf[8] = \"abcdefg\";\n    \
                           bad += (long long)mark(buf, n) != (long long)(n + 1) || buf[n] != 0 || buf[0] != 0;\n  }\n",
                "back4" => "  for (int i = 5; i < 29; i++)\n    bad += (long long)back4(text + i) != (long long)ref_back4(text + i);\n",
                "zero_after" => "  for (int i = 0; i < 10; i++)\n    for (int j = 0; j < 10; j++)\n      \
                                 bad += (long long)zero_after(xs[i], xs[j]) != 0LL;\n",
                "one_after" => "  for (int i = 0; i < 10; i++)\n    for (int j = 0; j < 10; j++)\n      \
                                bad += (long long)one_after(xs[i], xs[j]) != (long long)(xs[i] > 0);\n",
                "bound" => "  for (int i = 0; i < 16; i++)\n    for (int n = 0; n < 10; n++) {\n      \
                            int s[4] = {(i & 1) ? 15 : 3, (i >> 1) & 1, 1000 + i, (i >> 2) & 1};\n      \
                            unsigned int v = (unsigned int)xs[n] >> 2;\n      \
                            bad += (unsigned int)bound(s, v) != ref_bound(s, v);\n    }\n",
                "ibyte" | "ubyte" | "ihalf" | "ibyte_leaf" => "",
                other => panic!("no check for {other}"),
            });
        }
        if funcs.contains(&"ibyte") {
            checks.push_str(
                "  for (int b = 0; b < 256; b++) {\n    unsigned char c = (unsigned char)b;\n    unsigned short h = (unsigned short)(b * 0x101);\n    \
                 bad += (long long)ibyte(&c) != (long long)b;\n    bad += (long long)ubyte(&c) != (long long)b;\n    \
                 bad += (long long)ibyte_leaf(&c) != (long long)b;\n    bad += (long long)ihalf(&h) != (long long)h;\n  }\n",
            );
        }
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             {stub_decls}{decls}{printed}\n{stub_defs}\
             static int ref_realeof(unsigned a) {{ return a != 0 && a != 1; }}\n\
             static int ref_back4(const char *p) {{ while (p[-1] || p[-2] || p[-3] || p[-4]) p--; return p[-5] + 100; }}\n\
             static unsigned ref_bound(int *s, unsigned n) {{\n  unsigned a = n + (n >> 3) + 4, b = n + (n >> 5) + 7;\n  \
             if (s[3]) return (a > b ? a : b) + 6;\n  if (s[0] != 15) return (s[1] ? a : b) + s[2];\n  \
             return n + (n >> 12) + 13 + s[2];\n}}\n\
             int main(void) {{\n  static const int xs[10] = {{0, 1, -1, 7, -7, 0x7fffffff, (int)0x80000000, 0x55555553, -0x55555553, 123456789}};\n  \
             static const char text[29] = {{0, 0, 0, 0, 0, 9, 8, 7, 6, 5, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 0, 11, 12, 13, 14}};\n  \
             int bad = 0;\n  (void)xs; (void)text;\n{checks}  printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// SPARC returns a `long long` in `%o0:%o1`, the high word in `%o0`, and each
/// function in `bejoin_window64.c` puts its low word in `%o1` on purpose:
/// through `restore`'s destination register (`restore %g0,1,%o1`), or in `%i1`
/// for `restore` to hand back (`mov 10,%i1`, `mix2`'s product), read by nothing
/// but the RETURNs. Joined first register low, `k_one`, `status64` and `bool64`
/// printed `return 0x100000000;`, `sel_const` `return (unsigned long long)v1 <<
/// 0x20;`, `mix2`'s shifted return `return a0;` and its product
/// `CONCAT44(low,high)`, and `mix3`'s `0x500000000` `return 5;`. Both builds
/// are printed; every function keeps its source's parameter count and is
/// compiled with gcc and clang at -O0 and -O2 and run against the source,
/// called as `long long`. The driver defines the calls to `ext` and `ext_i` as
/// returning 0.
#[test]
fn a_low_word_a_sparc_function_returns_on_purpose_is_part_of_the_value() {
    const FUNCS: [(&str, usize); 7] = [
        ("neg_one", 0),
        ("k_one", 0),
        ("status64", 1),
        ("bool64", 2),
        ("sel_const", 1),
        ("mix2", 2),
        ("mix3", 2),
    ];
    let names: Vec<&str> = FUNCS.iter().map(|(f, _)| *f).collect();
    let sp = specs();
    for fixture in [
        "bejoin_window64_sparc32_O0.o",
        "bejoin_window64_sparc32_O2.o",
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &names);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .map(|sig| sig.split("//").next().unwrap_or("").trim())
            .collect();
        assert_eq!(
            sigs.len(),
            FUNCS.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        for (f, arity) in FUNCS {
            let sig = sigs
                .iter()
                .find(|s| s.contains(&format!(" {f}(")))
                .expect("printed header");
            assert_eq!(
                bejoin_arity(sig),
                arity,
                "{fixture}: {f} keeps its parameters: {sig}"
            );
        }
        let (stub_decls, stub_defs) = bejoin_stubs(&printed);
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             {stub_decls}{decls}{printed}\n{stub_defs}\
             int main(void) {{\n  static const int xs[10] = {{0, 1, -1, 7, -7, 0x7fffffff, (int)0x80000000, 0x55555553, -0x55555553, 123456789}};\n  \
             int bad = (long long)neg_one() != -1LL;\n  \
             bad += (long long)k_one() != 1LL;\n  \
             for (int i = 0; i < 10; i++) {{\n    \
             bad += (long long)status64(xs[i]) != (long long)(xs[i] != 0);\n    \
             bad += (long long)sel_const(xs[i]) != (long long)(xs[i] ? 10 : 20);\n    \
             for (int j = 0; j < 10; j++) {{\n      \
             unsigned int x = (unsigned int)xs[i];\n      \
             bad += (unsigned long long)bool64(xs[i], xs[j]) != (unsigned long long)(xs[i] == xs[j]);\n      \
             bad += (unsigned long long)mix2(x, xs[j]) != (xs[j] ? (unsigned long long)x << 32 : (unsigned long long)x * 3);\n      \
             bad += (unsigned long long)mix3(x, xs[j]) != (xs[j] ? 0x500000000ULL : (unsigned long long)x * 3);\n    }}\n  }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// A 64-bit comparison on big-endian ARM computes the difference of the low
/// words into r1 for its flags and returns its `int` result in r0, so r1 holds
/// what reads as the low word of a returned `long long`: `big` (the e2fsprogs
/// `ext2fs_needs_large_file_feature` test), `ge64`, `lt64` and the saturating
/// `sat`. Joined in the ABI's order they printed `CONCAT14(flag,0x7fffffff -
/// a1)`, which C truncates to the leftover. A first register holding a
/// comparison's result, or a difference no borrow ties the first register to,
/// keeps the first-register-low join, which truncates to r0. Both builds are
/// compiled with gcc and clang at -O0 and -O2 and run against the source.
#[test]
fn a_64_bit_comparison_keeps_its_int_result_in_the_first_register() {
    const FUNCS: [&str; 4] = ["big", "ge64", "lt64", "sat"];
    let sp = specs();
    for fixture in ["bejoin_cmp_arm32_be_O0.o", "bejoin_cmp_arm32_be_O2.o"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
            "--option",
            "armpairparam",
            "off",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &FUNCS);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            FUNCS.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        for sig in &sigs {
            let want = if sig.contains("big(") || sig.contains("sat(") {
                2
            } else {
                4
            };
            assert_eq!(
                bejoin_arity(sig),
                want,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             typedef unsigned long long u64; typedef long long i64; typedef unsigned u32;\n\
             #define V(h, l) (((u64)(u32)(h) << 32) | (u32)(l))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             static inline int SBORROW4(int a, int b) {{ int r; return __builtin_sub_overflow(a, b, &r); }}\n\
             {decls}{printed}\n\
             static int ref_big(u32 h, u32 l) {{ return V(h, l) >= 0x80000000ULL; }}\n\
             static int ref_ge64(u32 ah, u32 al, u32 bh, u32 bl) {{ return V(ah, al) >= V(bh, bl); }}\n\
             static int ref_lt64(int ah, u32 al, int bh, u32 bl) {{ return (i64)V(ah, al) < (i64)V(bh, bl); }}\n\
             static int ref_sat(u32 ah, u32 al) {{\n  i64 v = (i64)V(ah, al);\n  if (v > 0x7fffffff) return 0x7fffffff;\n  \
             if (v < -0x7fffffff - 1) return -0x7fffffff - 1;\n  return (int)v;\n}}\n\
             int main(void) {{\n  static const u32 ws[8] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0xfffffffe, 0x12345678, 0x80000001}};\n  \
             int bad = 0;\n  \
             for (int i = 0; i < 8; i++)\n    for (int j = 0; j < 8; j++) {{\n      \
             bad += (int)big(ws[i], ws[j]) != ref_big(ws[i], ws[j]);\n      \
             bad += (int)sat(ws[i], ws[j]) != ref_sat(ws[i], ws[j]);\n      \
             for (int k = 0; k < 8; k++) {{\n        \
             bad += (int)ge64(ws[i], ws[j], ws[k], ws[7 - j]) != ref_ge64(ws[i], ws[j], ws[k], ws[7 - j]);\n        \
             bad += (int)lt64(ws[i], ws[j], ws[k], ws[7 - j]) != ref_lt64(ws[i], ws[j], ws[k], ws[7 - j]);\n      }}\n    }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// The trade-off `option bejoin` makes. An `int` holding the high word of a
/// 64-bit temporary leaves the stale low half in the second return register
/// and compiles to the same registers as the `long long` returning the whole
/// value: `sum_hi` and `sum64` on PowerPC -O2 (`addc 4,4,6; addze 3,3; add
/// 3,3,5`), `mulhi` and `uwide_mul` on MIPS gcc -O0 (both halves of `multu`
/// left in `$2:$3`). On, every one reads as the `long long`, so the `int`
/// versions print the whole 64-bit value; off, every one reads as the `int`,
/// so the `long long` versions print with their halves swapped. The default,
/// `evidence`, reads them as off does, except PowerPC `uwide_mul`, whose low
/// word `mullw` makes apart from the `mulhwu` that leaves `mulhi`'s: it prints
/// the whole product, and `mulhi` its `int`.
/// gcc -O0 on MIPS moves `sum_hi`'s high word down with `srl $17,$2,0` for
/// `>> 32`, which works it over, so there `sum_hi` reads as its `int` in both
/// modes. `ltz` returns a flag and reads as its `int` either way. Each mode's
/// readings are compiled with gcc and clang at -O0 and -O2 and run against
/// the source.
#[test]
fn bejoin_reads_an_ints_stale_low_half_as_the_long_long_it_matches() {
    let sp = specs();
    for (fixture, funcs) in [
        (
            "bejoin_tradeoff_ppc32_O2.o",
            &["sum64", "sum_hi", "ltz"][..],
        ),
        (
            "bejoin_tradeoff_mips32_O0.o",
            &["sum64", "sum_hi", "uwide_mul", "mulhi", "ltz"][..],
        ),
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        for mode in ["on", "off", "evidence"] {
            let on = mode == "on";
            let proven = mode == "evidence" && !fixture.contains("mips");
            let funcs: Vec<&str> = if proven {
                funcs
                    .iter()
                    .copied()
                    .chain(["uwide_mul", "mulhi"])
                    .collect()
            } else {
                funcs.to_vec()
            };
            let funcs = &funcs[..];
            let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", sp.as_str()];
            if mode != "evidence" {
                args.extend(["--option", "bejoin", mode]);
            }
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(
                ok,
                "unlace decompile-all {fixture} (bejoin {mode}) failed: {stderr}"
            );
            let printed = callrettype_functions(&stdout, funcs);
            let sigs: Vec<&str> = printed
                .split("// Function: ")
                .skip(1)
                .filter_map(|part| part.lines().nth(1))
                .collect();
            assert_eq!(
                sigs.len(),
                funcs.len(),
                "{fixture}: every function prints:\n{stdout}"
            );
            let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
            let ltz_args = if sigs
                .iter()
                .any(|s| s.contains("ltz(") && bejoin_arity(s) == 1)
            {
                "ws[i]"
            } else {
                "ws[i], ws[j]"
            };
            let sum_hi_long = on && !fixture.contains("mips");
            let (sum64_want, sum_hi_want, wide_want, hi_want) = if on {
                (
                    "V(ws[i], ws[j]) + V(ws[k], ws[j ^ 3])",
                    if sum_hi_long {
                        "V(ws[i], ws[j]) + V(ws[k], ws[j ^ 3])"
                    } else {
                        "(u64)(u32)((V(ws[i], ws[j]) + V(ws[k], ws[j ^ 3])) >> 32)"
                    },
                    "(u64)ws[i] * ws[j]",
                    "(u64)ws[i] * ws[j]",
                )
            } else {
                (
                    "SW(V(ws[i], ws[j]) + V(ws[k], ws[j ^ 3]))",
                    "(u64)(u32)((V(ws[i], ws[j]) + V(ws[k], ws[j ^ 3])) >> 32)",
                    if proven {
                        "(u64)ws[i] * ws[j]"
                    } else {
                        "SW((u64)ws[i] * ws[j])"
                    },
                    "(u64)(u32)(((u64)ws[i] * ws[j]) >> 32)",
                )
            };
            let mut checks = format!(
                "      bad += (int)ltz({ltz_args}) != ((i64)V(ws[i], ws[j]) < 0);\n      \
                 for (int k = 0; k < 8; k++) {{\n        \
                 bad += (u64)sum64(ws[i], ws[j], ws[k], ws[j ^ 3]) != {sum64_want};\n        \
                 bad += (u64)(u32)sum_hi(ws[i], ws[j], ws[k], ws[j ^ 3]) != (u64)(u32)({sum_hi_want})\n          \
                 || ({sum_hi_long} && (u64)sum_hi(ws[i], ws[j], ws[k], ws[j ^ 3]) != {sum_hi_want});\n      }}\n"
            );
            if funcs.contains(&"mulhi") {
                checks.push_str(&format!(
                    "      bad += (u64)uwide_mul(ws[i], ws[j]) != {wide_want};\n      \
                     bad += (u64)(u32)mulhi(ws[i], ws[j]) != (u64)(u32)({hi_want})\n        \
                     || ({on} && (u64)mulhi(ws[i], ws[j]) != {hi_want});\n"
                ));
            }
            let src_text = format!(
                "#include <stdbool.h>\n#include <stdio.h>\n\
                 typedef unsigned long long u64; typedef long long i64; typedef unsigned u32;\n\
                 #define V(h, l) (((u64)(u32)(h) << 32) | (u32)(l))\n\
                 #define SW(x) ((u64)(x) << 32 | (u64)(x) >> 32)\n\
                 #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
                 #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
                 {decls}{printed}\n\
                 int main(void) {{\n  static const u32 ws[8] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0xfffffffe, 0x12345678, 0x80000001}};\n  \
                 int bad = 0;\n  \
                 for (int i = 0; i < 8; i++)\n    for (int j = 0; j < 8; j++) {{\n{checks}    }}\n  \
                 printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
            );
            bejoin_round_trip(&format!("{fixture}-{mode}"), &src_text, &printed);
        }
    }
}

/// Two shapes of `int` on a big-endian ABI that leave a 64-bit value's word in
/// the second return register. A boolean a branch chose: `v == (int)v` on
/// SPARC -O2 is `addcc %i1,%i2,%i1; addxcc %i0,0,%i0; cmp; be` and then
/// `restore %g0,1,%o0` or `restore %g0,%g0,%o0`, so `%o1` keeps the sum, and
/// PowerPC computes the same flag with `li 3,1`/`li 3,0` on two paths, or with
/// `cntlzw 3,3; srwi 3,3,5`. And an `int` truncation of a 64-bit temporary at
/// -O0: `(int)(c ? a : b)` reloads the temporary low word first (`lwz
/// 4,12(31); lwz 3,16(31)` on PowerPC), the reverse of `pick64`'s `long long`
/// (`lwz 3,12(31); lwz 4,16(31)`). Joined in the ABI's order, `fits_int` printed
/// `return a1 + 0x80000000;` and `pick` returned the high word. Every function
/// is compiled with gcc and clang at -O0 and -O2 against `bejoin_trunc.c`, the
/// 64-bit arguments split high word first; `pick64` and `tabs64` keep their
/// fix. PowerPC -O1 and -O2 narrow `pick64` and `tabs64` to one register for a
/// reason unrelated to the join, so they are left out there. `armpairparam` is
/// held off, so ARM big-endian passes its 64-bit arguments split as SPARC and
/// PowerPC do: on it, `lua_fits` and `min_len` take one `long long` each.
#[test]
fn a_branch_chosen_flag_or_an_int_truncation_keeps_its_int_in_the_first_register() {
    const ALL: [&str; 8] = [
        "fits_int", "lua_fits", "ovf", "pick", "pick64", "min_len", "tabs", "tabs64",
    ];
    const NARROWED: [&str; 6] = ["fits_int", "lua_fits", "ovf", "pick", "min_len", "tabs"];
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let source = std::fs::read_to_string(fixtures.join("bejoin_trunc.c")).unwrap();
    for (fixture, funcs) in [
        ("bejoin_trunc_sparc32_O0.o", &ALL[..]),
        ("bejoin_trunc_sparc32_O2.o", &ALL[..]),
        ("bejoin_trunc_ppc32_O0.o", &ALL[..]),
        ("bejoin_trunc_ppc32_O1.o", &NARROWED[..]),
        ("bejoin_trunc_ppc32_O2.o", &NARROWED[..]),
        ("bejoin_trunc_arm32_be_O0.o", &ALL[..]),
    ] {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
            "--option",
            "armpairparam",
            "off",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, funcs);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            funcs.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        for sig in &sigs {
            let want = if sig.contains("pick") { 5 } else { 2 };
            assert_eq!(
                bejoin_arity(sig),
                want,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let refs: String = ALL
            .iter()
            .map(|f| format!("#define {f} ref_{f}\n"))
            .collect();
        let unrefs: String = ALL.iter().map(|f| format!("#undef {f}\n")).collect();
        let (tabs64, pick64) = if funcs.contains(&"pick64") {
            (
                "bad += (u64)tabs64(H(v), L(v)) != (u64)ref_tabs64(v);",
                "bad += (u64)pick64(H(v), L(v), H(w), L(w), c) != (u64)ref_pick64(v, w, c);",
            )
        } else {
            ("", "")
        };
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             typedef unsigned long long u64; typedef long long i64; typedef unsigned u32;\n\
             #define H(x) ((u32)((u64)(x) >> 32))\n\
             #define L(x) ((u32)(u64)(x))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
             static inline int SBORROW4(int a, int b) {{ int r; return __builtin_sub_overflow(a, b, &r); }}\n\
             static inline int SCARRY4(int a, int b) {{ int r; return __builtin_add_overflow(a, b, &r); }}\n\
             {refs}{source}{unrefs}{decls}{printed}\n\
             int main(void) {{\n  \
             static const u64 ws[13] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x17fffffff,\n    \
             0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0, 0xfffffffffffffffb, 99, 0xffffffff7fffffff}};\n  \
             static const int xs[8] = {{0, 1, -1, 7, 0x7fffffff, -0x7fffffff - 1, 0x55555553, 123456789}};\n  \
             int bad = 0;\n  \
             for (int i = 0; i < 13; i++) {{\n    i64 v = (i64)ws[i];\n    \
             bad += (int)fits_int(H(v), L(v)) != ref_fits_int(v);\n    \
             bad += (int)lua_fits(H(v), L(v)) != ref_lua_fits(v);\n    \
             bad += (int)min_len(H(v), L(v)) != ref_min_len(v);\n    \
             bad += (int)tabs(H(v), L(v)) != ref_tabs(v);\n    \
             {tabs64}\n    \
             for (int j = 0; j < 13; j++)\n      for (int c = 0; c < 2; c++) {{\n        i64 w = (i64)ws[j];\n        \
             bad += (int)pick(H(v), L(v), H(w), L(w), c) != ref_pick(v, w, c);\n        \
             {pick64}\n      }}\n  }}\n  \
             for (int i = 0; i < 8; i++)\n    for (int j = 0; j < 8; j++)\n      \
             bad += (int)ovf(xs[i], xs[j]) != ref_ovf(xs[i], xs[j]);\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// An `int` range or overflow check that returns any literal, or a flag
/// negated, leaves the sum or difference it tested in the second return
/// register. SPARC -O2 `chk_err` is `addcc %i1,%i2,%i1; addxcc %i0,-1,%i0;
/// cmp %i0,-1; bne` and then `restore %g0,34,%o0` or `restore %g0,%g0,%o0`;
/// PowerPC -O1 `fits_neg` is `addc 4,4,5; addze 3,3; cntlzw 3,3; srwi 3,3,5;
/// neg 3,3`; ARM big-endian -O2 `d_code` keeps the `adcs` result in r0 on the
/// path where it is zero (`adcs r0,r0,#0; movne r0,#22`). Joined in the ABI's
/// order, each returned the leftover sum (`chk_err` printed `return a1 +
/// 0x80000000;`). The `long long` twins whose high word is a sum's carry added
/// in, or a literal on another path (`add_k`, `d64`, `mul_k`, `clamp_ll`,
/// `zsum`), keep their fix. Every function is compiled with gcc and clang at
/// -O0 and -O2 against `bejoin_code.c`, the 64-bit arguments split high word
/// first. ARM big-endian -O2 leaves out `ovf_m1` and `clamp_ll`, which print
/// wrong there for reasons unrelated to the join, with the option on or off.
/// The ARM fixtures run with `armpairparam` off: that option (on by default since
/// fc53d27e61, 2026-11-24) joins each aligned register pair into one 8-byte
/// parameter, and these tests count the words of each signature, so they pin it
/// off as 533b021def does.
#[test]
fn a_range_check_returning_any_literal_or_flag_keeps_its_int_in_the_first_register() {
    const ONE: &str = "for (int i = 0; i < 13; i++) {\n    i64 v = (i64)ws[i];\n";
    const TWO: &str = "for (int i = 0; i < 13; i++)\n    for (int j = 0; j < 13; j++) {\n      i64 v = (i64)ws[i], w = (i64)ws[j];\n";
    const INTS: &str = "for (int i = 0; i < 8; i++)\n    for (int j = 0; j < 8; j++) {\n";
    let checks: [(&str, &str, &str); 11] = [
        (
            "chk_err",
            ONE,
            "bad += (int)chk_err(H(v), L(v)) != ref_chk_err(v);",
        ),
        (
            "chk_m1",
            ONE,
            "bad += (int)chk_m1(H(v), L(v)) != ref_chk_m1(v);",
        ),
        (
            "fits_neg",
            ONE,
            "bad += (int)fits_neg(H(v), L(v)) != ref_fits_neg(v);",
        ),
        (
            "add_k",
            ONE,
            "bad += (u64)add_k(H(v), L(v)) != (u64)ref_add_k(v);",
        ),
        (
            "clamp_ll",
            ONE,
            "bad += (u64)clamp_ll(H(v), L(v)) != (u64)ref_clamp_ll(v);",
        ),
        (
            "st_code2",
            TWO,
            "bad += (int)st_code2(H(v), L(v), H(w), L(w)) != ref_st_code2(v, w);",
        ),
        (
            "d_code",
            TWO,
            "bad += (int)d_code(H(v), L(v), H(w), L(w)) != ref_d_code(v, w);",
        ),
        (
            "d64",
            TWO,
            "bad += (u64)d64(H(v), L(v), H(w), L(w)) != (u64)ref_d64(v, w);",
        ),
        (
            "ovf_m1",
            INTS,
            "bad += (int)ovf_m1(xs[i], xs[j]) != ref_ovf_m1(xs[i], xs[j]);",
        ),
        (
            "mul_k",
            INTS,
            "bad += (u64)mul_k(xs[i], xs[j]) != (u64)ref_mul_k(xs[i], xs[j]);",
        ),
        (
            "zsum",
            INTS,
            "bad += (u64)zsum(xs[i], xs[j]) != (u64)ref_zsum(xs[i], xs[j]);",
        ),
    ];
    let names: Vec<&str> = checks.iter().map(|&(f, _, _)| f).collect();
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let source = std::fs::read_to_string(fixtures.join("bejoin_code.c")).unwrap();
    for (fixture, skip) in [
        ("bejoin_code_sparc32_O2.o", &[][..]),
        ("bejoin_code_ppc32_O1.o", &[][..]),
        ("bejoin_code_ppc32_O2.o", &[][..]),
        ("bejoin_code_arm32_be_O2.o", &["ovf_m1", "clamp_ll"][..]),
    ] {
        let funcs: Vec<&str> = names
            .iter()
            .copied()
            .filter(|f| !skip.contains(f))
            .collect();
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let pin: &[&str] = if fixture.contains("arm") {
            &["--option", "armpairparam", "off"]
        } else {
            &[]
        };
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--sleighpath",
            sp.as_str(),
            "--option",
            "bejoin",
            "on",
        ];
        args.extend_from_slice(pin);
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &funcs);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .map(|sig| sig.split(" //").next().unwrap_or(sig).trim_end())
            .collect();
        assert_eq!(
            sigs.len(),
            funcs.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        for sig in &sigs {
            let want = if ["st_code2", "d_code", "d64"]
                .iter()
                .any(|f| sig.contains(f))
            {
                4
            } else {
                2
            };
            assert_eq!(
                bejoin_arity(sig),
                want,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let refs: String = names
            .iter()
            .map(|f| format!("#define {f} ref_{f}\n"))
            .collect();
        let unrefs: String = names.iter().map(|f| format!("#undef {f}\n")).collect();
        let body: String = checks
            .iter()
            .filter(|(f, _, _)| funcs.contains(f))
            .map(|(_, lp, check)| format!("  {lp}      {check}\n    }}\n"))
            .collect();
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define H(x) ((u32)((u64)(x) >> 32))\n\
             #define L(x) ((u32)(u64)(x))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
             static inline int SBORROW4(int a, int b) {{ int r; return __builtin_sub_overflow(a, b, &r); }}\n\
             static inline int SCARRY4(int a, int b) {{ int r; return __builtin_add_overflow(a, b, &r); }}\n\
             {refs}{source}{unrefs}{decls}{printed}\n\
             int main(void) {{\n  \
             static const u64 ws[13] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x17fffffff,\n    \
             0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0, 0xfffffffffffffffb, 99, 0xffffffff7fffffff}};\n  \
             static const int xs[8] = {{0, 1, -1, 7, 0x7fffffff, -0x7fffffff - 1, 0x55555553, 123456789}};\n  \
             int bad = 0;\n{body}  printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// A division by a constant on big-endian ARM multiplies by a magic number
/// and shifts the product's high half down, and `umull`/`smull` leave the
/// product's low half in r1: `a / 10` at -O0 is `umull r1,r0,r2,r3; lsr
/// r0,r0,#3`, `a / 7` on ARMv6 and v7 `umull r1,r2,r0,r1; sub; add ...,lsr
/// #1; lsr r0,r0,#2`. Joined in the ABI's order, each returned that low half
/// (`ud10` printed `CONCAT44(a0 / 10,a0 * -0x33333333)`). A high half shifted
/// down on its way to the first register keeps the first-register-low join,
/// which C's truncation narrows to the quotient. The `long long` products
/// whose high half is returned as it is or with terms added (`m3`, `mk` to
/// `mk5`) keep their fix. Every function is compiled with gcc and clang at -O0
/// and -O2 against `bejoin_div.c`, the 64-bit arguments split high word first.
#[test]
fn a_division_by_a_constant_keeps_its_quotient_in_the_first_register() {
    const UNARY: [&str; 12] = [
        "ud10", "ud100", "ud1000", "ud3600", "ud86400", "ud3", "ud5", "ud7", "ud19", "dv_365",
        "um7", "mk4",
    ];
    const ALL: [&str; 19] = [
        "ud10", "ud100", "ud1000", "ud3600", "ud86400", "ud3", "ud5", "sd3", "ud7", "ud19",
        "dv_365", "ud7_ptr", "um7", "m3", "mk", "mk2", "mk3", "mk4", "mk5",
    ];
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let source = std::fs::read_to_string(fixtures.join("bejoin_div.c")).unwrap();
    for fixture in [
        "bejoin_div_arm32_be_O0.o",
        "bejoin_div_arm32_be_v6_Os.o",
        "bejoin_div_arm32_be_v7_O2.o",
    ] {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &ALL);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            ALL.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        for sig in &sigs {
            let want = if ["m3(", "mk2(", "mk3(", "mk5("]
                .iter()
                .any(|f| sig.contains(f))
            {
                2
            } else {
                1
            };
            assert_eq!(
                bejoin_arity(sig),
                want,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let refs: String = ALL
            .iter()
            .map(|f| format!("#define {f} ref_{f}\n"))
            .collect();
        let unrefs: String = ALL.iter().map(|f| format!("#undef {f}\n")).collect();
        let unary: String = UNARY
            .iter()
            .map(|f| {
                format!(
                    "    bad += ({f}(x) & 0xffffffffULL) != (ref_{f}(x) & 0xffffffffULL)\n      \
                     || (sizeof(ref_{f}(x)) == 8 && (u64){f}(x) != (u64)ref_{f}(x));\n"
                )
            })
            .collect();
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define H(x) ((u32)((u64)(x) >> 32))\n\
             #define L(x) ((u32)(u64)(x))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             {refs}{source}{unrefs}{decls}{printed}\n\
             int main(void) {{\n  \
             static const u64 ws[13] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x17fffffff,\n    \
             0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0, 0xfffffffffffffffb, 99, 0xffffffff7fffffff}};\n  \
             static const int xs[12] = {{0, 1, -1, 7, -7, 0x7fffffff, -0x7fffffff - 1, 0x55555553, -0x55555553, 123456789, 86399, 365}};\n  \
             int bad = 0;\n  \
             for (int i = 0; i < 12; i++) {{\n    u32 x = (u32)xs[i], c = x;\n{unary}    \
             bad += (int)sd3(xs[i]) != ref_sd3(xs[i]);\n    \
             bad += (u32)ud7_ptr(&c) != ref_ud7_ptr(&c);\n    \
             bad += (u64)mk(x) != ref_mk(x);\n    \
             for (int j = 0; j < 12; j++) {{\n      \
             bad += (u64)mk3(xs[i], xs[j]) != (u64)ref_mk3(xs[i], xs[j]);\n      \
             bad += (u64)mk5(x, (u32)xs[j]) != ref_mk5(x, (u32)xs[j]);\n    }}\n  }}\n  \
             for (int i = 0; i < 13; i++) {{\n    i64 v = (i64)ws[i];\n    \
             bad += (u64)m3(H(v), L(v)) != (u64)ref_m3(v);\n    \
             bad += (u64)mk2(H(v), L(v)) != ref_mk2((u64)v);\n  }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// Big-endian ARM computes an `int` that is a 64-bit sum, difference or
/// product shifted right by one in the reverse register pair, low half in r0:
/// `(u32)(((u64)a + b) >> 1)` is `adds r0,r1,r0; adc r1,r2,#0; lsrs r1,r1,#1;
/// rrx r0,r0`, which moves bit 0 of r1 into r0 and leaves the stale `r1 >> 1`
/// in the second register. Joined in the ABI's order, that stale word became
/// the low word (`avg_u` printed `(unsigned long long)(...) << 0x20`). A low
/// word that is a right shift whose dropped bits reach the first register
/// keeps the first-register-low join, which C's truncation narrows to r0. A
/// `long long` shifted right moves the bit the other way, and `avg64`,
/// `mshr1_64` and `sshr33` keep their fix. Every function is compiled with gcc
/// and clang at -O0 and -O2 against `bejoin_shr.c`, the 64-bit arguments split
/// high word first. The ARM objects run with `armpairparam` off: since
/// fc53d27e61 that option joins each aligned register pair into one 8-byte
/// parameter, which this test does not measure.
#[test]
fn a_shift_that_carries_into_the_first_register_keeps_the_int() {
    const NARROW: [&str; 11] = [
        "avg_u", "avg_s", "avg_d", "mshr1", "sshr1", "ashr1", "sub_shr1", "avg_ret", "uq1r",
        "avg64", "mshr1_64",
    ];
    const ALL: [&str; 15] = [
        "avg_u", "avg_s", "avg_d", "avg3", "mshr1", "sshr1", "mshr1k", "ashr1", "sub_shr1",
        "avg_ret", "uq1r", "mid64", "avg64", "mshr1_64", "sshr33",
    ];
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let source = std::fs::read_to_string(fixtures.join("bejoin_shr.c")).unwrap();
    for fixture in [
        "bejoin_shr_arm32_be_O0.o",
        "bejoin_shr_arm32_be_v6_Os.o",
        "bejoin_shr_arm32_be_v7_O2.o",
    ] {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            "on",
            "--option",
            "armpairparam",
            "off",
        ]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let printed = callrettype_functions(&stdout, &ALL);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            ALL.len(),
            "{fixture}: every function prints:\n{stdout}"
        );
        let sshr33 = sigs
            .iter()
            .find(|sig| sig.contains("sshr33("))
            .copied()
            .unwrap_or("");
        let sshr33_args = if bejoin_arity(sshr33) == 1 {
            "H(v)"
        } else {
            "H(v), L(v)"
        };
        for sig in &sigs {
            let want = match sig {
                s if s.contains("avg3(") => 3,
                s if s.contains("mid64(") => 4,
                s if s.contains("mshr1k(") || s.contains("sshr33(") => {
                    bejoin_arity(sig).clamp(1, 2)
                }
                _ => 2,
            };
            assert_eq!(
                bejoin_arity(sig),
                want,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let refs: String = ALL
            .iter()
            .map(|f| format!("#define {f} ref_{f}\n"))
            .collect();
        let unrefs: String = ALL.iter().map(|f| format!("#undef {f}\n")).collect();
        let binary: String = NARROW
            .iter()
            .map(|f| {
                format!(
                    "      bad += ((u64){f}(x, y) & 0xffffffffULL) != ((u64)ref_{f}(x, y) & 0xffffffffULL)\n        \
                     || (sizeof(ref_{f}(x, y)) == 8 && (u64){f}(x, y) != (u64)ref_{f}(x, y));\n"
                )
            })
            .collect();
        let src_text = format!(
            "#include <stdbool.h>\n#include <stdio.h>\n\
             #define H(x) ((u32)((u64)(x) >> 32))\n\
             #define L(x) ((u32)(u64)(x))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
             {refs}{source}{unrefs}{decls}{printed}\n\
             int main(void) {{\n  \
             static const u64 ws[13] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x17fffffff,\n    \
             0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0, 0xfffffffffffffffb, 99, 0xffffffff7fffffff}};\n  \
             static const int xs[12] = {{0, 1, -1, 7, -7, 0x7fffffff, -0x7fffffff - 1, 0x55555553, -0x55555553, 123456789, 2, 5}};\n  \
             int bad = 0;\n  \
             for (int i = 0; i < 12; i++) {{\n    u32 x = (u32)xs[i];\n    \
             bad += (u32)mshr1k(x) != ref_mshr1k(x);\n    \
             for (int j = 0; j < 12; j++) {{\n      u32 y = (u32)xs[j];\n{binary}      \
             for (int k = 0; k < 12; k++)\n        \
             bad += (u32)avg3(x, y, (u32)xs[k]) != ref_avg3(x, y, (u32)xs[k]);\n    }}\n  }}\n  \
             for (int i = 0; i < 13; i++) {{\n    i64 v = (i64)ws[i];\n    \
             bad += (u64)sshr33({sshr33_args}) != (u64)ref_sshr33(v);\n    \
             for (int j = 0; j < 13; j++)\n      \
             bad += (u32)mid64(H(v), L(v), H(ws[j]), L(ws[j])) != ref_mid64((u64)v, ws[j]);\n  }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}

/// gcc copies an argument into `$3` before a switch for the case that passes
/// it on (`move v1,a1`), and a jump table the object leaves to relocations is
/// not recovered, so those cases are not part of the function unlace sees: on
/// the default path, `return "???"` leaves the copy beside the pointer in
/// `$2`, the registers `zb`, which returns its second argument zero-extended,
/// leaves on purpose. Joined in the ABI's order, `pick` returned the argument
/// (`return a1;`). A function with an indirect jump flow could not follow
/// keeps the first-register-low join, off's, for a low word
/// nothing visible reads and the jump's code can; `zb` keeps its fix and is
/// compiled with gcc and clang at -O0 and -O2. (`pick`'s printed jump-as-call
/// is not C a compiler takes.)
#[test]
fn an_unrecovered_switch_keeps_a_pointers_register() {
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let bin = fixtures
        .join("bejoin_jump_mips32_O2.o")
        .to_str()
        .unwrap()
        .to_string();
    let mut listings = Vec::new();
    for on in [true, false] {
        let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", sp.as_str()];
        args.extend(["--option", "bejoin", if on { "on" } else { "off" }]);
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(
            ok,
            "unlace decompile-all bejoin_jump_mips32_O2.o (bejoin {on}) failed: {stderr}"
        );
        listings.push(stdout);
    }
    let (on, off) = (&listings[0], &listings[1]);
    let pick = callrettype_functions(on, &["pick"]);
    assert!(!pick.is_empty(), "pick prints:\n{on}");
    assert_eq!(
        pick,
        callrettype_functions(off, &["pick"]),
        "pick keeps the first-register-low join"
    );
    let printed = callrettype_functions(on, &["zb"]);
    assert_ne!(
        printed,
        callrettype_functions(off, &["zb"]),
        "zb joins in the ABI's order"
    );
    let sig = printed
        .split("// Function: ")
        .nth(1)
        .and_then(|part| part.lines().nth(1))
        .unwrap_or("");
    let src_text = format!(
        "#include <stdio.h>\n\
         typedef unsigned long long u64;\n\
         #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
         {sig};\n{printed}\n\
         int main(void) {{\n  \
         int bad = 0;\n  \
         for (unsigned b = 0; b < 0x100000; b += 0x1357)\n    \
         bad += (u64)zb(7, b) != (u64)b;\n  \
         printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
    );
    bejoin_round_trip("bejoin_jump_mips32_O2.o", &src_text, &printed);
}

/// A call reads its callee's pair the way the callee's own RETURN joins it,
/// whichever of the two is decompiled first and in whatever run. The default,
/// `bejoin evidence`, decides both from the callee's instructions alone.
/// `bejoin_order.c` places `D_mix` and `E_self` before `widen` and `self`,
/// whose sign-extended `long long` they read both words of, and `self` reads
/// its own pair back. Each caller is taken from a whole `decompile-all`, a run
/// narrowed to it with `--functions`, a `--jobs 2` run and a single `unlace
/// decompile`, compiled with gcc and clang at -O0 and -O2 beside its callee's
/// printed C, and run against the source, callee included. On main the callee
/// printed its halves swapped; an order-dependent join printed it right but
/// let a caller decompiled first read its low word as the high one. (`E_self`
/// is checked on MIPS alone: unlace drops `self`'s recursive argument on SPARC
/// and its low word on PowerPC, as before.) The `-mlong-calls` build calls
/// through a register the pipeline resolves to the callee only mid-pass, so
/// the caller had no verdict to read.
#[test]
fn bejoin_evidence_reads_a_callee_pair_alike_in_every_run() {
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let cases: [(&str, &[&str]); 4] = [
        ("bejoin_order_ppc32_O2.o", &["D_mix"]),
        ("bejoin_order_sparc32_O2.o", &["D_mix"]),
        ("bejoin_order_mips32_O2", &["D_mix", "E_self"]),
        ("bejoin_order_mips32_O2_longcalls", &["D_mix", "E_self"]),
    ];
    for (fixture, callers) in cases {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let (full, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let (jobs, stderr, ok) =
            run_unlace(&["decompile-all", &bin, "--sleighpath", &sp, "--jobs", "2"]);
        assert!(
            ok,
            "unlace decompile-all {fixture} --jobs 2 failed: {stderr}"
        );
        for &caller in callers {
            let callee = if caller == "D_mix" { "widen" } else { "self" };
            let (narrowed, stderr, ok) = run_unlace(&[
                "decompile-all",
                &bin,
                "--sleighpath",
                &sp,
                "--functions",
                caller,
            ]);
            assert!(
                ok,
                "unlace decompile-all {fixture} --functions {caller} failed: {stderr}"
            );
            let (single, stderr, ok) =
                run_unlace(&["decompile", &bin, caller, "--sleighpath", &sp]);
            assert!(ok, "unlace decompile {fixture} {caller} failed: {stderr}");
            let runs = [
                ("all", callrettype_functions(&full, &[caller])),
                ("functions", callrettype_functions(&narrowed, &[caller])),
                ("jobs", callrettype_functions(&jobs, &[caller])),
                ("single", format!("// Function: {caller}\n{single}")),
            ];
            let callee_text = callrettype_functions(&full, &[callee]);
            assert!(
                !callee_text.is_empty(),
                "{fixture}: {callee} prints:\n{full}"
            );
            for (run, caller_text) in runs {
                assert!(
                    caller_text.contains(caller),
                    "{fixture} ({run}): {caller} prints:\n{caller_text}"
                );
                let printed = format!("{callee_text}\n{caller_text}");
                let sigs: String = printed
                    .split("// Function: ")
                    .skip(1)
                    .filter_map(|part| part.lines().find(|l| l.contains('(')))
                    .map(|sig| format!("{sig};\n"))
                    .collect();
                let (stub_decls, stub_defs) = bejoin_stubs(&printed);
                let src_text = format!(
                    "#include <stdio.h>\n\
                     typedef long long i64;\n\
                     #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
                     {stub_decls}{sigs}{printed}\n{stub_defs}\
                     static i64 src_self(int n) {{ int r = n * 9; if (n > 0 && n < 8) {{ i64 v = src_self(n - 1); r = (int)(v >> 32) * 3 + (int)v - n; }} return (i64)r; }}\n\
                     static i64 src_widen(int x) {{ return x; }}\n\
                     static int src_D_mix(int x) {{ i64 v = x; return (int)(v >> 32) * 3 + (int)v; }}\n\
                     static int src_E_self(int n) {{ i64 v = src_self(n); return (int)(v >> 32) * 3 + (int)v; }}\n\
                     int main(void) {{\n  static const int xs[10] = {{0, 1, -1, 7, -7, 3, 0x7fffffff, (int)0x80000000, 123456789, -5}};\n  \
                     int bad = 0;\n  for (int i = 0; i < 10; i++)\n    bad += (int){caller}(xs[i]) != src_{caller}(xs[i])\n      || (i64){callee}(xs[i]) != src_{callee}(xs[i]);\n  \
                     printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
                );
                bejoin_round_trip(
                    &format!("order-{fixture}-{caller}-{run}"),
                    &src_text,
                    &printed,
                );
            }
        }
    }
}

/// A 64-bit sum, and ARMv7's single-instruction product, compile to the bytes
/// of the `int` that returns their high word, so the callee alone proves
/// neither; the default, `bejoin callers`, also takes a caller that reads the
/// second register after the call. In `bejoin_callers.c`, `c_add` and `c_mul`
/// store both words of `add64` and `umul64`, and `c_pass` both words of
/// `pass`, which returns `add64`'s value through a frame of its own, while
/// `c_hi` and `c_mulhi` read only the first register of `add_hi` and
/// `umul_hi`, and gcc keeps `c_keep`'s `b` in `r1` across `bl keep`, which
/// never writes it. The verdict comes from the image's own call sites and
/// symbols, so every function prints the same in a whole `decompile-all`, one
/// narrowed by `--functions`, `--jobs 2` and a single `unlace decompile` (with
/// `protoorder` off: its callee-first prototypes reach only the whole serial
/// run, on main too), and every caller reads its callee's pair in one order in
/// the default runs. `add64`, `umul64` and `pass` are compiled beside the
/// source with gcc and clang and must compute it, and the `int`s print as
/// with `bejoin evidence`. The ARM object runs with `armpairparam` off: that
/// option (shipped on by fc53d27e61, 2026-11-24) joins the unprototyped
/// `long long` that `add64`'s aligned register pairs carry, which this test
/// does not measure; the bejoin ordering it guards is the same either way.
#[test]
fn bejoin_callers_read_a_pair_alike_in_every_run() {
    const FUNCS: [&str; 12] = [
        "add64", "add_hi", "umul64", "umul_hi", "keep", "pass", "c_add", "c_hi", "c_mul",
        "c_mulhi", "c_keep", "c_pass",
    ];
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    for (fixture, pair) in [
        ("bejoin_callers_ppc32_O2", "// r3:r4"),
        ("bejoin_callers_arm32_be_O2.o", "// r0:r1"),
    ] {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let pin: &[&str] = if fixture.ends_with(".o") {
            &["--option", "armpairparam", "off"]
        } else {
            &[]
        };
        let run = |extra: &[&str]| {
            let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", sp.as_str()];
            args.extend_from_slice(pin);
            args.extend_from_slice(extra);
            let (out, stderr, ok) = run_unlace(&args);
            assert!(
                ok,
                "unlace decompile-all {fixture} {extra:?} failed: {stderr}"
            );
            out
        };
        let single = |f: &str, extra: &[&str]| {
            let mut args = vec!["decompile", bin.as_str(), f, "--sleighpath", sp.as_str()];
            args.extend_from_slice(pin);
            args.extend_from_slice(extra);
            let (out, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile {fixture} {f} failed: {stderr}");
            out.trim().to_string()
        };
        let body = |listing: &str, f: &str| {
            let text = callrettype_functions(listing, &[f]);
            text.split_once('\n')
                .map(|(_, b)| b.trim().to_string())
                .unwrap_or_default()
        };
        let off = ["--option", "protoorder", "off"];
        let whole = run(&off);
        let jobs = run(&["--option", "protoorder", "off", "--jobs", "2"]);
        for f in FUNCS {
            let text = body(&whole, f);
            assert!(!text.is_empty(), "{fixture}: {f} prints:\n{whole}");
            let narrowed = run(&["--option", "protoorder", "off", "--functions", f]);
            for (mode, other) in [
                ("--jobs 2", body(&jobs, f)),
                ("--functions", body(&narrowed, f)),
                ("decompile", single(f, &off)),
            ] {
                assert_eq!(
                    other, text,
                    "{fixture}: {f} prints differently under {mode}"
                );
            }
        }
        let full = run(&[]);
        for f in ["c_add", "c_mul", "c_pass"] {
            for (mode, text) in [
                ("decompile-all", body(&full, f)),
                ("decompile", single(f, &[])),
            ] {
                assert!(
                    text.contains(pair),
                    "{fixture} ({mode}): {f} reads its callee's pair {pair}:\n{text}"
                );
            }
        }
        let evidence = run(&["--option", "bejoin", "evidence"]);
        for f in ["add_hi", "umul_hi", "keep", "c_hi", "c_mulhi", "c_keep"] {
            assert_eq!(
                body(&full, f),
                body(&evidence, f),
                "{fixture}: {f} reads one register:\n{full}"
            );
        }
        let add = body(&full, "add64");
        assert!(
            add.contains("return CONCAT44(a0 + a2 + (unsigned int)CARRY4(a1,a3),a1 + a3);"),
            "{fixture}: add64 returns its sum high word first:\n{add}"
        );
        assert_ne!(
            add,
            body(&evidence, "add64"),
            "{fixture}: bejoin evidence leaves add64's halves swapped"
        );
        let wide: &[&str] = if fixture.ends_with(".o") {
            &["add64", "umul64", "pass"]
        } else {
            &["add64", "pass"]
        };
        let printed = callrettype_functions(&full, wide);
        let sigs: String = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().find(|l| l.contains('(')))
            .map(|sig| format!("{sig};\n"))
            .collect();
        let product = if wide.contains(&"umul64") {
            "bad += (u64)umul64((unsigned)a, (unsigned)b) != (u64)(unsigned)a * (unsigned)b;\n"
        } else {
            ""
        };
        let src_text = format!(
            "#include <stdio.h>\n\
             typedef unsigned long long u64;\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
             {sigs}{printed}\n\
             int main(void) {{\n  static const u64 xs[6] = {{0, 1, 0xffffffffULL, 0x100000000ULL, 0x123456789abcdef0ULL, ~0ULL}};\n  \
             int bad = 0;\n  for (int i = 0; i < 6; i++)\n    for (int j = 0; j < 6; j++) {{\n      u64 a = xs[i], b = xs[j];\n      \
             bad += (u64)add64((int)(a >> 32), (unsigned)a, (int)(b >> 32), (unsigned)b) != a + b;\n      \
             bad += (u64)pass((int)(a >> 32), (unsigned)a, (int)(b >> 32), (unsigned)b) != a + b;\n      {product}    }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(&format!("callers-{fixture}"), &src_text, &printed);
    }
}

/// A call unlace does not know never returns is followed by code of another
/// path, which reads the second return register for a value of its own, so
/// it is no caller reading the callee's pair. In `bejoin_unreach.c`, built
/// for PowerPC, `hi` and `hj` return the high word of a 64-bit sum, and each
/// is called once ahead of `__builtin_unreachable()`: gcc lays out the block
/// a `bne` reaches right after `u_unr`'s `bl hi` (`add 3,7,4`), and the jump
/// table's next case right after `u_sw`'s `bl hj` (`mulli 3,4,3`). In
/// `bejoin_unreach_arm.c`, built for ARM big-endian, the literal pool follows
/// `u_pool`'s `bl hi`, and its first word decodes as `andeq r0,r2,r0,lsl r1`.
/// In `bejoin_unreach_ppc.c`, linked with the local symbols discarded, the
/// static `s_next` follows `u_tail`'s `bl hi` and reads its second argument,
/// and built with gcc's hot/cold partition, `u_cold.cold` lays the rare block
/// its hot part enters right after the `bl hi` (`mr 3,4`). In
/// `bejoin_unreach_thumb.c`, built for big-endian Thumb, the literal pool after
/// `u_pool`'s `bl hi` holds `0x00080123`, which decodes as `movs r0,r1`. In
/// `bejoin_unreach_eh.cc`, built for PowerPC and ARM big-endian (linked, and
/// as an ARM object), the `catch` landing pad follows `u_eh`'s call of `hi`
/// and compares the selector the unwinder leaves in the second register. In
/// `bejoin_unreach_hidden.c`, linked with the local symbols discarded, a
/// static function that only a pointer or a tail call reaches follows each
/// `bl`, and on PowerPC so does the rare block of a `.cold` part whose symbol
/// went with them; the sizes the symbols state keep the walk out of both.
/// `c_hi` reads only the first register of each, so every function prints as
/// with `bejoin evidence`, in a whole `decompile-all` and a single
/// `unlace decompile`. The ARM and Thumb fixtures run with `armpairparam` off, as
/// in 533b021def, since the join would change the parameter words they print.
#[test]
fn bejoin_callers_ignore_code_a_call_does_not_return_to() {
    const HIDDEN: &[&str] = &["hi_p", "hi_t", "hi_c", "u_ptr", "u_tl", "u_cold", "c_hi"];
    let sp = specs();
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let cases: [(&str, &[&str], &str); 10] = [
        (
            "bejoin_unreach_ppc32_O1",
            &["hi", "hj", "u_unr", "u_sw", "c_hi"],
            "return CONCAT44(a1 + a3,",
        ),
        (
            "bejoin_unreach_arm32_be_O2",
            &["hi", "u_pool", "c_hi"],
            "return hi(a0,a1,a2,a3) + 1;",
        ),
        (
            "bejoin_unreach_strip_ppc32_O2",
            &["hi", "u_tail", "u_cold", "c_hi"],
            "return CONCAT44(a1 + a3,",
        ),
        (
            "bejoin_unreach_cold_ppc32_O2",
            &["hi", "u_tail", "u_cold", "c_hi"],
            "return CONCAT44(a1 + a3,",
        ),
        (
            "bejoin_unreach_thumb_be_O2",
            &["hi", "u_pool", "c_hi"],
            "return hi(a0,a1,a2,a3) + 1;",
        ),
        (
            "bejoin_unreach_eh_ppc32_O2",
            &["hi", "u_eh", "c_hi"],
            "return hi(a0,a1,a2,a3) + 1;",
        ),
        (
            "bejoin_unreach_eh_arm32_be_O2",
            &["hi", "u_eh", "c_hi"],
            "return hi(a0,a1,a2,a3) + 1;",
        ),
        (
            "bejoin_unreach_eh_arm32_be_O2_obj",
            &["hi", "u_eh", "c_hi"],
            "return hi(a0,a1,a2,a3) + 1;",
        ),
        (
            "bejoin_unreach_hidden_ppc32_O2",
            HIDDEN,
            "return v1 + v2 + 1 + hi_c(a0,a1,a2,a3);",
        ),
        (
            "bejoin_unreach_hidden_arm32_be_O2",
            HIDDEN,
            "return v1 + v2 + 1 + hi_c(a0,a1,a2,a3);",
        ),
    ];
    for (fixture, funcs, expect) in cases {
        let bin = fixtures.join(fixture).to_str().unwrap().to_string();
        let pin: &[&str] = if fixture.contains("arm") || fixture.contains("thumb") {
            &["--option", "armpairparam", "off"]
        } else {
            &[]
        };
        let run = |extra: &[&str]| {
            let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", sp.as_str()];
            args.extend_from_slice(pin);
            args.extend_from_slice(extra);
            let (out, stderr, ok) = run_unlace(&args);
            assert!(
                ok,
                "unlace decompile-all {fixture} {extra:?} failed: {stderr}"
            );
            out
        };
        let body = |listing: &str, f: &str| {
            let text = callrettype_functions(listing, &[f]);
            text.split_once('\n')
                .map(|(_, b)| b.trim().to_string())
                .unwrap_or_default()
        };
        let single = |f: &str, extra: &[&str]| {
            let mut args = vec!["decompile", bin.as_str(), f, "--sleighpath", sp.as_str()];
            args.extend_from_slice(pin);
            args.extend_from_slice(extra);
            let (out, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile {fixture} {f} failed: {stderr}");
            out.trim().to_string()
        };
        let evidence = ["--option", "bejoin", "evidence"];
        let (full, narrow) = (run(&[]), run(&evidence));
        for f in funcs {
            let text = body(&full, f);
            assert!(!text.is_empty(), "{fixture}: {f} prints:\n{full}");
            assert_eq!(
                text,
                body(&narrow, f),
                "{fixture}: {f} prints as with bejoin evidence:\n{full}"
            );
            assert_eq!(
                single(f, &[]),
                single(f, &evidence),
                "{fixture}: {f} prints as with bejoin evidence in a single decompile"
            );
        }
        assert!(
            full.contains(expect),
            "{fixture}: expected `{expect}`:\n{full}"
        );
    }
}

/// gcc -Os on MIPS computes `chk`'s exit argument from `b + 1`, made in the
/// delay slot of the branch to the RETURN (`beqz a0; addiu v1,a1,1`), so
/// `return 0` finds `b + 1` in `$3` beside the zero in `$2`, the shape of a
/// zero-extended `long long`. Only the path calling `exit` reads it, and a
/// value any path reads proves nothing, so the default prints `chk` and
/// `chk2` as `bejoin off` does; the evidence once read `chk` as returning `b +
/// 1`. `zk`'s product, made in the same kind of delay slot beside an `abort`
/// path that reads nothing of it, still joins in the ABI's order. The image is
/// linked: an object file leaves `exit` unresolved. Each function is compiled
/// with gcc and clang at -O0 and -O2 and run against the source, `exit` and
/// `abort` recording their argument.
#[test]
fn a_value_only_a_no_return_path_reads_proves_nothing() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/bejoin_noreturn_mips32_Os")
        .to_str()
        .unwrap()
        .to_string();
    let names = ["chk", "chk2", "zk"];
    let run = |mode: &str| {
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--functions",
            "chk,chk2,zk",
            "--option",
            "bejoin",
            mode,
        ]);
        assert!(
            ok,
            "unlace decompile-all bejoin_noreturn_mips32_Os ({mode}) failed: {stderr}"
        );
        stdout
    };
    let (evidence, off) = (run("evidence"), run("off"));
    assert_eq!(
        callrettype_functions(&evidence, &["chk", "chk2"]),
        callrettype_functions(&off, &["chk", "chk2"]),
        "a value only the exit path reads proves nothing:\n{evidence}"
    );
    let printed = callrettype_functions(&evidence, &names);
    let sigs: Vec<&str> = printed
        .split("// Function: ")
        .skip(1)
        .filter_map(|part| part.lines().nth(1))
        .collect();
    assert_eq!(
        sigs.len(),
        names.len(),
        "every function prints:\n{evidence}"
    );
    let zk = callrettype_functions(&evidence, &["zk"]);
    assert!(
        !zk.contains("CONCAT44"),
        "zk's product joins in the ABI's order:\n{zk}"
    );
    let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
    let src_text = format!(
        "#include <stdio.h>\n\
         #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
         static int got;\n#define exit(v) (got = (v))\n#define abort() (got = -1)\n\
         {decls}{printed}\n\
         int main(void) {{\n  static const int xs[8] = {{0, 1, -1, 7, -7, 0x7fffffff, (int)0x80000000, 123456789}};\n  \
         int bad = 0;\n  for (int i = 0; i < 8; i++)\n    for (int j = 0; j < 8; j++)\n      for (int k = 0; k < 8; k++) {{\n        \
         int a = xs[i], b = xs[j], c = xs[k], r;\n        \
         got = 0x5a5a; r = (int)chk(a, b, c);\n        \
         bad += a ? got != ((c - b) ^ (a * (b + 1))) - c * (b + 1) : r != 0 || got != 0x5a5a;\n        \
         got = 0x5a5a; r = (int)chk2(a, b, c);\n        \
         bad += a == c ? got != (b + 1) * c : r != 0 || got != 0x5a5a;\n        \
         got = 0x5a5a; unsigned long long w = (unsigned long long)zk(a, b, c);\n        \
         bad += a ? got != -1 : w != (unsigned long long)(unsigned)b * (unsigned)c || got != 0x5a5a;\n      }}\n  \
         printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
    );
    bejoin_round_trip("bejoin_noreturn_mips32_Os", &src_text, &printed);
}

/// gcc -O0 on ARM big-endian reloads a `long long` stack temporary into
/// `r0:r1` and moves the `int` taken from its high word back into `r0` out of
/// the stack slot it kept it in, so the pair holds both loaded words, the
/// shape of `return *p`. A register moved back to the value it already held,
/// through a stack slot or not, proves nothing while the other register is
/// left where the reload put it, and neither does a low word whose reload
/// something else reads (`hi_lo_stored` stores it on), so the three `int`s
/// and their caller print as with `bejoin off`, while `ll_copy`, the `long
/// long` itself, still joins high word first. `hi_kept` does the same to
/// `ll_copy`'s pair and is not proven either; `ll_kept` and `ll_passed` move
/// both of its words back into place and return it whole. `hi_atomic` moves
/// `__atomic_load_8`'s pair back whole, as `ll_atomic` does, and then its
/// `int` back into `r0` once more, so it is not proven either.
#[test]
fn an_int_kept_in_a_stack_slot_proves_no_loaded_pair() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/bejoin_reload_arm32_be_O0.o")
        .to_str()
        .unwrap()
        .to_string();
    let run = |mode: &str| {
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--sleighpath",
            &sp,
            "--option",
            "bejoin",
            mode,
        ]);
        assert!(
            ok,
            "unlace decompile-all bejoin_reload_arm32_be_O0.o ({mode}) failed: {stderr}"
        );
        stdout
    };
    let (evidence, off) = (run("evidence"), run("off"));
    let ints = ["hi_local", "hi_lo_stored", "hi_named", "hi_use"];
    let structs = regex::Regex::new(r"struct_\d+").unwrap();
    let norm = |listing: &str| {
        structs
            .replace_all(&callrettype_functions(listing, &ints), "struct_N")
            .into_owned()
    };
    assert_eq!(
        norm(&evidence),
        norm(&off),
        "an int moved back out of its stack slot proves nothing:\n{evidence}"
    );
    let ll = callrettype_functions(&evidence, &["ll_copy"]);
    assert!(
        ll.contains("return *a0;"),
        "ll_copy returns its long long whole:\n{ll}"
    );
    for f in ["ll_kept", "ll_passed"] {
        let w = callrettype_functions(&evidence, &[f]);
        assert!(
            w.contains("return ll_copy(a0);"),
            "{f} hands ll_copy's pair back whole:\n{w}"
        );
    }
    let hk = callrettype_functions(&evidence, &["hi_kept"]);
    assert!(
        !hk.is_empty() && !hk.contains("return ll_copy(a0);"),
        "hi_kept moves only its int back:\n{hk}"
    );
    let la = callrettype_functions(&evidence, &["ll_atomic"]);
    assert!(
        la.contains("return __atomic_load_8(a0,0);"),
        "ll_atomic hands __atomic_load_8's pair back whole:\n{la}"
    );
    let ha = callrettype_functions(&evidence, &["hi_atomic"]);
    assert!(
        !ha.is_empty() && !ha.contains("return __atomic_load_8(a0,0);"),
        "hi_atomic moves its int back once more:\n{ha}"
    );
}

/// An `int` worked out from the high half of a 64-bit temporary leaves the low
/// half in the second register: `(u32)((x + y) >> 48)` on PowerPC -O2 is
/// `addc 4,6,4; adde 3,5,3; srwi 3,3,16`, ARM's `umull r1,r0` leaves the low
/// half of `(u32)((x * k) >> 32) & 0xff` in r1, gcc -O0 on MIPS computes
/// `(u32)((x ^ y) >> 32) & 0xffff` in `$2:$3` and masks `$2` alone, and clang
/// -O0 on MIPS reloads a 64-bit hash's spilled `mfhi` into `$3` beside
/// `(u32)x`. Joined in the ABI's order, each returned that stale half as its
/// low word (`xy_shr48` printed `CONCAT44(a2 + a0 + CARRY4(a3,a1) >> 0x10,a3 +
/// a1)`). A first register that shifts, masks, offsets, negates or
/// multiplies a sum's high word, or applies such a literal operation to a
/// value the low word never reads, or reads the low half of the product whose
/// high half is the low word, keeps the first-register-low join; the 64-bit
/// sums, differences, negation, product and packing keep their fix. Each
/// function that prints with the source's word count is compiled with gcc and
/// clang at -O0 and -O2 against `bejoin_hiop.c`, 64-bit arguments split high
/// word first.
/// The ARM fixtures run with `armpairparam` off: that option (on by default since
/// fc53d27e61, 2026-11-24) joins each aligned register pair into one 8-byte
/// parameter, and these tests count the words of each signature, so they pin it
/// off as 533b021def does.
#[test]
fn an_int_worked_out_from_the_high_half_of_a_temporary_keeps_it() {
    const SHAPES: [(&str, &str); 22] = [
        ("xy_shr48", "WW"),
        ("xb_shr36", "WI"),
        ("xy_hi_shr4", "WW"),
        ("xy_hi_and", "WW"),
        ("xy_hi_add", "WW"),
        ("sxy_hi_neg", "WW"),
        ("ss_shr34", "II"),
        ("s3_hi_mul", "III"),
        ("d_shr40", "II"),
        ("sum3_shr33", "III"),
        ("xk_shr40", "W"),
        ("p_hi_and", "II"),
        ("p_hi_add", "II"),
        ("p_hi_neg", "II"),
        ("xm_hi_and", "WI"),
        ("xx_hi_xor", "WW"),
        ("hash64", "W"),
        ("xy_add", "WW"),
        ("xy_sub", "WW"),
        ("neg64", "W"),
        ("pm", "II"),
        ("pack8", "I"),
    ];
    const WIDE: [&str; 5] = ["xy_add", "xy_sub", "neg64", "pm", "pack8"];
    let fixtures_dir = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let source = std::fs::read_to_string(fixtures_dir.join("bejoin_hiop.c")).unwrap();
    let sp = specs();
    for (fixture, skip) in [
        ("bejoin_hiop_ppc32_O2.o", &["xx_hi_xor"][..]),
        ("bejoin_hiop_arm32_be_v7_O2.o", &["xx_hi_xor", "pack8"][..]),
        (
            "bejoin_hiop_sparc32_O0.o",
            &["xx_hi_xor", "hash64", "pack8"][..],
        ),
        (
            "bejoin_hiop_mips32_O0.o",
            &["xy_hi_and", "xy_add", "xy_sub", "neg64"][..],
        ),
        (
            "bejoin_hiop_mips32_clang_O0.o",
            &["xy_hi_and", "xx_hi_xor", "xy_add", "pack8"][..],
        ),
    ] {
        let bin = fixtures_dir.join(fixture).to_str().unwrap().to_string();
        let pin: &[&str] = if fixture.contains("arm") {
            &["--option", "armpairparam", "off"]
        } else {
            &[]
        };
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--sleighpath",
            sp.as_str(),
            "--option",
            "bejoin",
            "on",
        ];
        args.extend_from_slice(pin);
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all {fixture} failed: {stderr}");
        let checked: Vec<(&str, &str)> = SHAPES
            .iter()
            .copied()
            .filter(|(f, _)| !skip.contains(f))
            .collect();
        let names: Vec<&str> = checked.iter().map(|&(f, _)| f).collect();
        let printed = callrettype_functions(&stdout, &names);
        let sigs: Vec<&str> = printed
            .split("// Function: ")
            .skip(1)
            .filter_map(|part| part.lines().nth(1))
            .collect();
        assert_eq!(
            sigs.len(),
            names.len(),
            "{fixture}: every checked function prints:\n{stdout}"
        );
        for &(f, shape) in &checked {
            let sig = sigs
                .iter()
                .find(|s| s.contains(&format!(" {f}(")))
                .copied()
                .unwrap_or("");
            let words: usize = shape.chars().map(|c| if c == 'W' { 2 } else { 1 }).sum();
            assert_eq!(
                bejoin_arity(sig),
                words,
                "{fixture}: {sig} keeps the source's word count"
            );
        }
        let decls: String = sigs.iter().map(|sig| format!("{sig};\n")).collect();
        let refs: String = SHAPES
            .iter()
            .map(|(f, _)| format!("#define {f} ref_{f}\n"))
            .collect();
        let unrefs: String = SHAPES
            .iter()
            .map(|(f, _)| format!("#undef {f}\n"))
            .collect();
        let checks: String = checked
            .iter()
            .map(|&(f, shape)| {
                let cast = if WIDE.contains(&f) { "u64" } else { "u32" };
                let (loops, args, refargs) = match shape {
                    "WW" => ("for (int i = 0; i < 13; i++) for (int j = 0; j < 13; j++)", "H(ws[i]), L(ws[i]), H(ws[j]), L(ws[j])", "ws[i], ws[j]"),
                    "WI" => ("for (int i = 0; i < 13; i++) for (int j = 0; j < 12; j++)", "H(ws[i]), L(ws[i]), (u32)xs[j]", "ws[i], (u32)xs[j]"),
                    "W" => ("for (int i = 0; i < 13; i++)", "H(ws[i]), L(ws[i])", "ws[i]"),
                    "I" => ("for (int i = 0; i < 12; i++)", "xs[i]", "xs[i]"),
                    "II" => ("for (int i = 0; i < 12; i++) for (int j = 0; j < 12; j++)", "xs[i], xs[j]", "xs[i], xs[j]"),
                    _ => (
                        "for (int i = 0; i < 12; i++) for (int j = 0; j < 12; j++) for (int k = 0; k < 12; k++)",
                        "xs[i], xs[j], xs[k]",
                        "xs[i], xs[j], xs[k]",
                    ),
                };
                format!("  {loops}\n    bad += ({cast}){f}({args}) != ({cast})ref_{f}({refargs});\n")
            })
            .collect();
        let src_text = format!(
            "#include <stdio.h>\n\
             #define H(x) ((u32)((u64)(x) >> 32))\n\
             #define L(x) ((u32)(u64)(x))\n\
             #define CONCAT44(h, l) ((unsigned long long)(unsigned int)(h) << 32 | (unsigned int)(l))\n\
             #define CARRY4(a, b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))\n\
             {refs}{source}{unrefs}{decls}{printed}\n\
             int main(void) {{\n  \
             static const u64 ws[13] = {{0, 1, 0x7fffffff, 0x80000000, 0xffffffff, 0x100000000, 0x17fffffff,\n    \
             0xffffffffffffffff, 0x8000000000000000, 0x123456789abcdef0, 0xfffffffffffffffb, 99, 0xffffffff7fffffff}};\n  \
             static const int xs[12] = {{0, 1, -1, 7, -7, 0x7fffffff, -0x7fffffff - 1, 0x55555553, -0x55555553, 123456789, 2, 5}};\n  \
             int bad = 0;\n{checks}  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        );
        bejoin_round_trip(fixture, &src_text, &printed);
    }
}
