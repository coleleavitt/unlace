//! Casts, fields and variables round-tripped through the printed C.

use super::*;

/// A synthesized field commits to a signedness only when every read of its width
/// does.  `f` reads its 16-bit field into a signed comparison and, after a call,
/// zero-extends it into `sink`'s 32-bit argument; a `short field_0xc` would make
/// the printed call sign-extend, handing `sink` 4294941372 where the binary hands
/// it 0x9abc.  The round trip compiles `f` with the definition `structdefs`
/// prints above it.
#[test]
fn a_sign_contested_synthesized_field_round_trips_through_the_printed_c() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/signfield_zext_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--functions",
        "f",
        "--option",
        "structdefs",
        "on",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(stdout.contains("unsigned short field_0xc;"), "{stdout}");
    assert!(stdout.contains("sink(a0->field_0xc);"), "{stdout}");

    if process::optional_output(Command::new("cc").arg("--version")).is_none() {
        eprintln!("signfield round trip: no `cc`, spelling checked only");
        return;
    }
    let dir = std::env::temp_dir().join(format!("unlace-signfield-rt-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let src = dir.join("rt.c");
    let exe = dir.join("rt");
    std::fs::write(
        &src,
        format!(
            "#include <stdio.h>\nstatic unsigned int got;\nvoid touch(void *s) {{ (void)s; }}\n\
             void sink(unsigned int x) {{ got = x; }}\n{stdout}\n\
             int main(void) {{\n  static unsigned long s[2];\n  s[0] = 1;\n  \
             ((unsigned short *)s)[6] = 0x9abc;\n  int (*fp)() = (int (*)())f;\n  fp((void *)s);\n  \
             printf(\"%u\\n\", got);\n  return 0;\n}}\n"
        ),
    )
    .unwrap();
    let cc = Command::new("cc")
        .args([
            "-std=gnu11",
            "-w",
            "-o",
            exe.to_str().unwrap(),
            src.to_str().unwrap(),
        ])
        .args(common::CC_GCC15_DEMOTE)
        .output()
        .expect("spawn cc");
    assert!(
        cc.status.success(),
        "the printed f did not compile:\n{}",
        String::from_utf8_lossy(&cc.stderr)
    );
    let run = process::required_output(&mut Command::new(&exe));
    let got = String::from_utf8_lossy(&run.stdout).trim().to_string();
    let _ = std::fs::remove_dir_all(&dir);
    assert_eq!(
        got,
        (0x9abcu32).to_string(),
        "the printed f hands sink a different value:\n{stdout}"
    );
}

/// An 8-byte union member read both as a `double` and as a `long` is raw bytes,
/// so every read casts the address. A `long field_0x8` made the `movsd` read
/// print `(double)a0->field_0x8`, a value conversion: with 2.5 stored, tag 2
/// returned 4612811918334230528.0. The round trip compiles `vread` with the
/// definition `structdefs` prints above it and compares every tag against the
/// union read directly, over two payloads.
#[test]
fn a_float_and_integer_union_field_round_trips_through_the_printed_c() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/unionfield_fp_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--functions",
        "vread",
        "--option",
        "structdefs",
        "on",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(stdout.contains("char field_0x8[8];"), "{stdout}");
    assert!(
        stdout.contains("return *(double *)a0->field_0x8;"),
        "{stdout}"
    );

    if process::optional_output(Command::new("cc").arg("--version")).is_none() {
        eprintln!("unionfield round trip: no `cc`, spelling checked only");
        return;
    }
    let dir = std::env::temp_dir().join(format!("unlace-unionfield-rt-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let src = dir.join("rt.c");
    let exe = dir.join("rt");
    std::fs::write(
        &src,
        format!(
            "#include <stdio.h>\n#include <string.h>\n{stdout}\n\
             static double truth(const unsigned char *b) {{\n  int tag; memcpy(&tag, b, 4);\n  \
             union {{ int i; float f; double d; long l; unsigned char c[8]; }} u; memcpy(&u, b + 8, 8);\n  \
             switch (tag) {{ case 0: return u.i; case 1: return u.f; case 2: return u.d;\n  \
             case 3: return (double)u.l; default: return u.c[1]; }}\n}}\n\
             int main(void) {{\n  static unsigned long s[2];\n  unsigned char *b = (unsigned char *)s;\n  \
             int bad = 0;\n  for (int k = 0; k < 2; k++)\n    for (int tag = 0; tag < 5; tag++) {{\n      \
             double d = 2.5;\n      if (k) for (int i = 8; i < 16; i++) b[i] = (unsigned char)(i * 37 + 0x81);\n      \
             else memcpy(b + 8, &d, 8);\n      memcpy(b, &tag, 4);\n      \
             double (*fp)() = (double (*)())vread;\n      double got = fp((void *)s), want = truth(b);\n      \
             if (memcmp(&got, &want, 8)) {{ printf(\"payload %d tag %d: %a != %a\\n\", k, tag, got, want); bad++; }}\n    }}\n  \
             printf(\"%d\\n\", bad);\n  return 0;\n}}\n"
        ),
    )
    .unwrap();
    let cc = Command::new("cc")
        .args([
            "-std=gnu11",
            "-w",
            "-o",
            exe.to_str().unwrap(),
            src.to_str().unwrap(),
        ])
        .args(common::CC_GCC15_DEMOTE)
        .output()
        .expect("spawn cc");
    assert!(
        cc.status.success(),
        "the printed vread did not compile:\n{}",
        String::from_utf8_lossy(&cc.stderr)
    );
    let run = process::required_output(&mut Command::new(&exe));
    let got = String::from_utf8_lossy(&run.stdout).to_string();
    let _ = std::fs::remove_dir_all(&dir);
    assert_eq!(
        got.lines().last(),
        Some("0"),
        "the printed vread reads the union differently:\n{got}\n{stdout}"
    );
}

/// A zero-extended 16-bit field read through a pointer typed `unsigned int *`
/// keeps its width and its zero extension.  `RuleExpandLoad` used to print it as
/// `(short)a0[0x1a]`; compiled, that hands `sink` 4294941372 where the binary
/// hands it 0x9abc.  The round trip compiles `f` exactly as printed, both with
/// `structsynth off` (the raw pointer) and at the default, where the read goes
/// through a synthesized `unsigned short field_0x68` whose definition
/// `structdefs` prints above `f`.
#[test]
fn a_zero_extended_narrow_load_round_trips_through_the_printed_c() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/expandload_zext_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let arms: [(&[&str], &str); 2] = [
        (
            &["--option", "structsynth", "off"],
            "sink(*(unsigned short *)&a0[0x1a]);",
        ),
        (&["--option", "structdefs", "on"], "sink(a0->field_0x68);"),
    ];
    for (extra, call) in arms {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--functions",
            "f",
            "--sleighpath",
            sp.as_str(),
        ];
        args.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        assert!(stdout.contains(call), "{stdout}");

        if process::optional_output(Command::new("cc").arg("--version")).is_none() {
            eprintln!("expandload round trip: no `cc`, spelling checked only");
            continue;
        }
        let dir = std::env::temp_dir().join(format!(
            "unlace-expandload-rt-{}-{}",
            std::process::id(),
            extra[1]
        ));
        std::fs::create_dir_all(&dir).unwrap();
        let src = dir.join("rt.c");
        let exe = dir.join("rt");
        std::fs::write(
            &src,
            format!(
                "#include <stdio.h>\nstatic unsigned int got;\nvoid sink(unsigned int x) {{ got = x; }}\n{stdout}\n\
                 int main(void) {{\n  static unsigned int s[27];\n  s[0] = 1; s[1] = 2;\n  \
                 ((unsigned short *)s)[0x34] = 0x9abc;\n  void (*fp)() = (void (*)())f;\n  fp((void *)s);\n  \
                 printf(\"%u\\n\", got);\n  return 0;\n}}\n"
            ),
        )
        .unwrap();
        let cc = Command::new("cc")
            .args([
                "-std=gnu11",
                "-w",
                "-o",
                exe.to_str().unwrap(),
                src.to_str().unwrap(),
            ])
            .args(common::CC_GCC15_DEMOTE)
            .output()
            .expect("spawn cc");
        assert!(
            cc.status.success(),
            "the printed f did not compile:\n{}",
            String::from_utf8_lossy(&cc.stderr)
        );
        let run = process::required_output(&mut Command::new(&exe));
        let got = String::from_utf8_lossy(&run.stdout).trim().to_string();
        let _ = std::fs::remove_dir_all(&dir);
        assert_eq!(
            got,
            (0x9abcu32).to_string(),
            "the printed f hands sink a different value:\n{stdout}"
        );
    }
}

/// (unlace `castimplied`) A cast C's own conversion already performs is left out,
/// and a cast that changes the value stays.  The fixture widens values into libc
/// arguments, into variables of the wider type, out through `return`, and under
/// another conversion; its last functions change the value (a sign change under
/// a widening, a varargs argument) or pass a type C would convert differently.
/// The round trip compiles the printed functions, option off and on, with gcc
/// and clang, and checks every build prints what the original binary prints.
/// `castwiden` is held off: it leaves out some of the widenings pinned here,
/// which `an_implied_widening_round_trips_through_the_printed_c` covers.
#[test]
fn an_implied_cast_round_trips_through_the_printed_c() {
    const FUNCS: &str = "arg_memchr,arg_toupper,arg_strchr,asg_char,asg_uint,asg_short,asg_uchar,\
                         ret_int,ret_uint,ret_char,ret_less,to_uchar,lookup,keep_inner,keep_inner2,\
                         keep_size,keep_vararg";
    const WANT: &str = "2 2 -1 82 251 1\n1648 936 1300 50\n-7 4294967280 -100 1 0\n-89 27\n\
                        2147483645 -2 2147483647 1\n-42\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
int main(void) {
  static const char neg[] = {-5, 7, -40, 3};
  static const unsigned int big[] = {0xfffffff0u, 5, 0x80000001u};
  static const short sh[] = {-300, 1300, -2};
  static const unsigned char uc[] = {250, 3, 128};
  char table[256];
  for (int i = 0; i < 256; i++) table[i] = (char)(i ^ 0x5a);
  printf("%ld %ld %ld %d %d %ld\n", F(long, arg_memchr)("ab\xfb" "c", -5, 4),
         F(long, arg_memchr)("abc", 'c', 3), F(long, arg_memchr)("abc", 'z', 3),
         F(int, arg_toupper)('q'), F(int, arg_toupper)(250), F(long, arg_strchr)("x\xfey", -2));
  printf("%ld %ld %d %d\n", F(long, asg_char)(neg, 4), F(long, asg_uint)(big, 3),
         F(int, asg_short)(sh, 3), F(int, asg_uchar)(uc, 3));
  printf("%ld %lu %d %d %d\n", F(long, ret_int)(-7), (unsigned long)F(unsigned int, ret_uint)(0xfffffff0u),
         F(int, ret_char)(-100), (int)F(_Bool, ret_less)(-1, 1), (int)F(_Bool, ret_less)(2, 1));
  printf("%d %d\n", F(char, lookup)(table, -3), F(char, lookup)(table, 'A'));
  unsigned int half;
  long k2 = F(long, keep_inner2)(0xfffffffeu, &half);
  printf("%ld %ld %u %ld\n", F(long, keep_inner)(0xfffffffeu), k2, half, F(long, keep_size)("abc", 'b', 3));
  F(void, keep_vararg)(-42);
  return 0;
}
"#;
    let changed: [(&str, &str); 6] = [
        ("memchr(a0,(int)a1,(unsigned long)a2);", "memchr(a0,a1,a2);"),
        ("strchr(a0,(int)a1);", "strchr(a0,a1);"),
        ("v1 = (long)a0[v2];", "v1 = a0[v2];"),
        (
            "(int)(unsigned int)(unsigned char)to_uchar((int)a1)",
            "(int)(unsigned char)to_uchar((int)a1)",
        ),
        (
            "long ret_int(int a0)\n{\n  return (long)a0;",
            "long ret_int(int a0)\n{\n  return a0;",
        ),
        (
            "*a1 = a0 >> 1;\n  return (long)(int)a0;",
            "*a1 = a0 >> 1;\n  return (int)a0;",
        ),
    ];
    let kept: [&str; 3] = [
        "(long)(int)a0",
        "(long)a2);",
        "printf(\"%ld\\n\",(long)a0);",
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for fixture in ["castimplied_gcc_O0_x86_64", "castimplied_clang_O0_x86_64"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        for opt in ["off", "on"] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                FUNCS,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castimplied",
                opt,
                "--option",
                "castwiden",
                "off",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            for want in kept {
                assert!(
                    stdout.contains(want),
                    "{fixture} option {opt} lost `{want}`:\n{stdout}"
                );
            }
            let semantic = without_variable_sources(&stdout);
            for (off, on) in changed {
                let want = if opt == "on" { on } else { off };
                assert!(
                    semantic.contains(&without_variable_sources(want)),
                    "{fixture} option {opt} does not print `{want}`:\n{stdout}"
                );
            }
            for cc in &compilers {
                let dir = std::env::temp_dir().join(format!(
                    "unlace-castimplied-rt-{}-{fixture}-{opt}-{cc}",
                    std::process::id()
                ));
                std::fs::create_dir_all(&dir).unwrap();
                let src = dir.join("rt.c");
                let exe = dir.join("rt");
                std::fs::write(
                    &src,
                    format!(
                        "#include <ctype.h>\n#include <stdbool.h>\n#include <stdio.h>\n#include <string.h>\n\
                         {stdout}\n{MAIN}"
                    ),
                )
                .unwrap();
                let out = Command::new(cc)
                    .args([
                        "-std=gnu11",
                        "-w",
                        "-o",
                        exe.to_str().unwrap(),
                        src.to_str().unwrap(),
                    ])
                    .args(common::CC_GCC15_DEMOTE)
                    .output()
                    .expect("spawn the C compiler");
                assert!(
                    out.status.success(),
                    "{cc} rejected the printed C ({fixture}, option {opt}):\n{}",
                    String::from_utf8_lossy(&out.stderr)
                );
                let run = process::required_output(&mut Command::new(&exe));
                let _ = std::fs::remove_dir_all(&dir);
                assert_eq!(
                    String::from_utf8_lossy(&run.stdout),
                    WANT,
                    "{fixture} printed with option {opt} and built by {cc} computes a different value:\n{stdout}"
                );
            }
        }
    }
}

/// (unlace `fieldtype`) A synthesized field some access holds as a pointer is
/// declared as that pointer, a field whose value is really a number stays one,
/// and the printed C still computes what the binary does.  The fixture's records
/// hold a buffer added to before `memmove` gets it, a context compared with a
/// sentinel before `strlen` and `free` get it, two walking pointers and the two
/// end pointers they are compared with, a function pointer compared with zero
/// before it is called, a union member read as a double and as a pointer, an
/// index read at a table and then handed to `write` as its buffer, and a number
/// that clang -O2 passes to one `fprintf` through the register a string also
/// takes.  The printed functions are compiled with the option off and on, with
/// gcc and clang, and each build must print what the fixture binary prints.
/// `ops_run` is checked by spelling only: unlace spells a code pointer `void *`,
/// so a call through one is not C in either arm.  `cell_val` is left out of the
/// clang builds (at -O0 its double conversion prints as partial-variable
/// assignments, at -O2 its double return is lost, in either arm), and
/// `pctx_print` out of gcc -O2, whose jump table prints as a call in either arm.
/// `libctypes` is held at `opaque`: under `streams` `FILE` carries glibc's
/// fields, and its printed body would redefine the `FILE` the round trip's
/// `<stdio.h>` declares.
#[test]
fn a_pointer_field_round_trips_through_the_printed_c() {
    const PRELUDE: &str = "#include <stdbool.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\
                           #include <unistd.h>\nchar unknown_ctx[] = \"?\";\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
static long twice(long x) { return 2 * x + 1; }
struct buf_ { char *data; long used; int left; int flags; };
struct ent_ { char *name; int size; char *ctx; int flags; };
struct range_ { long *lo; long *hi; long *end_lo; long *end_hi; int nlo; int nhi; };
struct cell_ { long tag; union { double d; char *s; long l; } u; };
struct pctx_ { unsigned long num; char *str; unsigned int ino; unsigned long blk; };
struct slot_ { int kind; long idx; char *name; };
int main(void) {
  char text[] = "hello, fieldtype world";
  struct buf_ b = { text, 10, 4, 0 };
  long s1 = F(long, buf_shift)(&b);
  printf("buf %ld %ld %d %.*s\n", s1, b.used, b.flags, (int)b.used, b.data);
  char *heap = malloc(8);
  strcpy(heap, "context");
  struct ent_ e1 = { "a", 3, heap, 1 }, e2 = { "b", 5, unknown_ctx, 0 }, e3 = { "c", 7, "static", 0 }, e4 = { 0, 1, "x", 0 };
  long r1 = F(long, ent_release)(&e1), r2 = F(long, ent_release)(&e2), r3 = F(long, ent_release)(&e3);
  long r4 = F(long, ent_release)(&e4);
  printf("ent %ld %ld %ld %ld\n", r1, r2, r3, r4);
  long lo[] = { 9, 8, 7, 6, 5 }, hi[] = { 1, 2, 3, 4, 5 };
  struct range_ r = { lo, hi + 4, lo + 5, hi, 0, 0 };
  long w = F(long, range_walk)(&r);
  printf("range %ld %d %d\n", w, r.nlo, r.nhi);
#ifndef NO_CELL
  struct cell_ c1 = { 1, { .s = "four" } }, c2 = { 2, { .l = -12 } }, c3 = { 3, { .d = 2.5 } };
  printf("cell %g %g %g\n", F(double, cell_val)(&c1), F(double, cell_val)(&c2), F(double, cell_val)(&c3));
#endif
#ifndef NO_PCTX
  struct pctx_ pc = { 42, "path", 7, 99 };
  for (const char *p = "nbisxz"; *p; p++) {
    F(void, pctx_print)(stdout, *p, 3, &pc);
    putchar('|');
  }
  pc.str = 0;
  pc.num = 0;
  F(void, pctx_print)(stdout, 's', 1, &pc);
  F(void, pctx_print)(stdout, 'n', 1, &pc);
  putchar('\n');
#endif
  long tab[] = { 3, 1, 4, 1, 5, 9, 2, 6 };
  struct slot_ sl = { 2, 5, "five" };
  printf("slot %ld\n", F(long, slot_post)(tab, &sl));
  return 0;
}
"#;
    const CELL: &str = "cell 4 -12 2.5\n";
    const PCTX: &str = " 42| 99|  7|path| 2a|z|(none) NULL(none) 0\n";
    const WANT: &str = "buf 1054690 4 1  fie\nent 10 -1 13 -2\nrange 1600 1 0\ncell 4 -12 2.5\n 42| 99|  7|path| 2a|z|(none) NULL(none) 0\nslot 10\n";
    let changed: [(&str, &str); 6] = [
        (
            "    long field_0x0;\n    long field_0x8;",
            "    void *field_0x0;\n    long field_0x8;",
        ),
        (
            "memmove((void *)a0->field_0x0,(void *)(a0->field_0x0 + (a0->field_0x8 - a0->field_0x10)),a0->field_0x10);",
            "memmove(a0->field_0x0,(void *)((long)a0->field_0x0 + (a0->field_0x8 - a0->field_0x10)),a0->field_0x10);",
        ),
        (
            "len = strlen((char *)a0->field_0x10);",
            "len = strlen(a0->field_0x10);",
        ),
        (
            "    long field_0x10;\n    long field_0x18;",
            "    long *field_0x10;\n    long *field_0x18;",
        ),
        (
            "a0->field_0x0 = a0->field_0x0 + 8;",
            "a0->field_0x0 = &a0->field_0x0[1];",
        ),
        (
            "v1 = (*(long (*)(unsigned long))a0->field_0x8)(a0->field_0x10);",
            "v1 = (*a0->field_0x8)(a0->field_0x10);",
        ),
    ];
    let index_stays_a_number = "    int field_0x0;\n    char field_0x4[4];\n    long field_0x8;";
    let number_stays_a_number =
        "    long field_0x0;\n    char *field_0x8;\n    unsigned int field_0x10;";
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for fixture in [
        "fieldtype_gcc_O0_x86_64",
        "fieldtype_clang_O0_x86_64",
        "fieldtype_gcc_O2_x86_64",
        "fieldtype_clang_O2_x86_64",
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let clang = fixture.contains("clang");
        let gcc_o2 = fixture == "fieldtype_gcc_O2_x86_64";
        let funcs = if clang {
            "buf_shift,ent_release,range_walk,pctx_print,slot_post"
        } else if gcc_o2 {
            "buf_shift,ent_release,range_walk,cell_val,slot_post"
        } else {
            "buf_shift,ent_release,range_walk,cell_val,pctx_print,slot_post"
        };
        for opt in ["off", "on"] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                funcs,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "structdefs",
                "on",
                "--option",
                "fieldtype",
                opt,
                "--option",
                "libctypes",
                "opaque",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            if fixture == "fieldtype_gcc_O0_x86_64" {
                let args = [
                    "decompile-all",
                    bin.as_str(),
                    "--functions",
                    "buf_shift,ent_release,ops_run,range_walk",
                    "--sleighpath",
                    sp.as_str(),
                    "--option",
                    "structdefs",
                    "on",
                    "--option",
                    "fieldtype",
                    opt,
                    "--option",
                    "libctypes",
                    "opaque",
                ];
                let (all, stderr, ok) = run_unlace(&args);
                assert!(ok, "unlace decompile-all failed: {stderr}");
                for (off, on) in changed {
                    let want = if opt == "on" { on } else { off };
                    assert!(
                        all.contains(want),
                        "{fixture} option {opt} does not print `{want}`:\n{all}"
                    );
                }
            }
            if !clang {
                assert!(
                    stdout.contains("    char field_0x8[8];"),
                    "{fixture} option {opt}: a union member read as a double and a pointer must stay raw bytes:\n{stdout}"
                );
            }
            if fixture.contains("_O0_") {
                assert!(
                    stdout.contains(index_stays_a_number),
                    "{fixture} option {opt}: an index read at a table and handed to write must stay a number:\n{stdout}"
                );
            }
            if fixture == "fieldtype_clang_O2_x86_64" {
                assert!(
                    stdout.contains(number_stays_a_number),
                    "{fixture} option {opt}: a number merged with a string on its way to fprintf must stay a number:\n{stdout}"
                );
            }
            let printed: String = stdout
                .lines()
                .filter(|l| !l.ends_with("/* opaque */"))
                .map(|l| format!("{l}\n"))
                .collect();
            for cc in &compilers {
                let dir = std::env::temp_dir().join(format!(
                    "unlace-fieldtype-rt-{}-{fixture}-{opt}-{cc}",
                    std::process::id()
                ));
                std::fs::create_dir_all(&dir).unwrap();
                let src = dir.join("rt.c");
                let exe = dir.join("rt");
                std::fs::write(&src, format!("{PRELUDE}{printed}\n{MAIN}")).unwrap();
                let mut cmd = Command::new(cc);
                cmd.args(common::CC_GCC15_DEMOTE);
                cmd.args([
                    "-std=gnu11",
                    "-w",
                    "-Werror=int-conversion",
                    "-o",
                    exe.to_str().unwrap(),
                ]);
                if clang {
                    cmd.arg("-DNO_CELL");
                }
                if gcc_o2 {
                    cmd.arg("-DNO_PCTX");
                }
                let out = cmd
                    .arg(src.to_str().unwrap())
                    .output()
                    .expect("spawn the C compiler");
                assert!(
                    out.status.success(),
                    "{cc} rejected the printed C ({fixture}, option {opt}):\n{}",
                    String::from_utf8_lossy(&out.stderr)
                );
                let run = process::required_output(&mut Command::new(&exe));
                let _ = std::fs::remove_dir_all(&dir);
                let mut want = WANT.to_string();
                if clang {
                    want = want.replace(CELL, "");
                }
                if gcc_o2 {
                    want = want.replace(PCTX, "");
                }
                assert_eq!(
                    String::from_utf8_lossy(&run.stdout),
                    want,
                    "{fixture} printed with option {opt} and built by {cc} computes a different value:\n{stdout}"
                );
            }
        }
    }
}

/// (unlace `castternary`) A widening on an arm of `c ? a : b` that the
/// conditional performs itself is left out, and a cast whose removal would give
/// the conditional another type stays.  The fixture holds a textbook base64
/// decoder (`in[i] != '=' ? table[in[i]] : 0`, four times per quantum) and arms
/// of char, unsigned char, short and int against int, unsigned, long and
/// negative constants and a second cast, fed bytes 0x80..0xff and negative
/// values.  The printed functions are compiled with the option off and on, with
/// gcc and clang, and each build must print what the fixture binary prints.
/// gcc -O0 keeps the result of each conditional in a register, so its build
/// prints conditionals; clang -O0 spills it, and most of its diamonds print as
/// if/else, where `castimplied` already leaves the widening out.
/// `castwiden` is held off: it leaves out some of the widenings pinned here,
/// which `an_implied_widening_round_trips_through_the_printed_c` covers.
#[test]
fn a_conditional_arm_cast_round_trips_through_the_printed_c() {
    const FUNCS: &str = "b64_decode,arm_char,arm_uchar,arm_short,arm_char_uint,arm_long,arm_char_long,\
                         arm_ulong,arm_uint_long,arm_uint_max,arm_both,arm_wide_literal,arm_all_ones,\
                         keep_narrow,keep_less,keep_float";
    const WANT: &str = "13 72 101 108 108 111 32 119 111 114 108 100 63 251\n\
                        -1 -128 127 -1 0 255 128 -1\n\
                        -300 7 4294967295 4294967168 0\n\
                        -1 -7 -9 -128 -1 -9\n\
                        4294967295 5 4294967295 3000000000 -9 4294967295 18446744073709551615\n\
                        -5 4294967291 -1 -5 -7 3000000000\n\
                        4294967168 4294967295 1 4294967295 -3.5\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
int main(void) {
  signed char t[256];
  static const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  memset(t, -1, 256);
  for (int i = 0; i < 64; i++) t[(unsigned char)alphabet[i]] = (signed char)i;
  static const char txt[] = "SGVsbG8gd29ybGQ/+w==";
  unsigned char out[16];
  unsigned long n = F(unsigned long, b64_decode)(t, txt, strlen(txt), out);
  static const char bytes[] = {0, -1, -128, 0x7f, (char)0xff, 'H'};
  static const unsigned char ub[] = {0, 0xff, 0x80, 0xde};
  static const short sh[] = {0, -300, 7};
  static const int in[] = {0, -1, -7};
  static const unsigned int ui[] = {0, 0xffffffffu, 3000000000u};
  static const long lg[] = {-9, 5, -1};
  static const unsigned long ul[] = {5, 0xfffffffffffffff0UL, 1};
  printf("%lu", n);
  for (unsigned long i = 0; i < n; i++) printf(" %u", out[i]);
  printf("\n%d %d %d %d %d %d %d %d\n", F(int, arm_char)(bytes, 1), F(int, arm_char)(bytes, 2),
         F(int, arm_char)(bytes, 3), F(int, arm_char)(bytes, 4), F(int, arm_char)(bytes, 0),
         F(int, arm_uchar)(ub, 1), F(int, arm_uchar)(ub, 2), F(int, arm_uchar)(ub, 0));
  printf("%d %d %u %u %u\n", F(int, arm_short)(sh, 1), F(int, arm_short)(sh, 0),
         F(unsigned int, arm_char_uint)(bytes, 1), F(unsigned int, arm_char_uint)(bytes, 2),
         F(unsigned int, arm_char_uint)(bytes, 0));
  printf("%ld %ld %ld %ld %ld %ld\n", F(long, arm_long)(in, lg, 1), F(long, arm_long)(in, lg, 2),
         F(long, arm_long)(in, lg, 0), F(long, arm_char_long)(bytes, lg, 2), F(long, arm_char_long)(bytes, lg, 4),
         F(long, arm_char_long)(bytes, lg, 0));
  printf("%lu %lu %ld %ld %ld %lu %lu\n", F(unsigned long, arm_ulong)(ui, ul, 1),
         F(unsigned long, arm_ulong)(ui, ul, 0), F(long, arm_uint_long)(ui, lg, 1), F(long, arm_uint_long)(ui, lg, 2),
         F(long, arm_uint_long)(ui, lg, 0), F(unsigned long, arm_uint_max)(ui, 1), F(unsigned long, arm_uint_max)(ui, 0));
  printf("%ld %ld %ld %ld %ld %ld\n", F(long, arm_both)(-5, 7u, 1), F(long, arm_both)(-5, 0xfffffffbu, 0),
         F(long, keep_narrow)(in, 1), F(long, keep_narrow)(in, 0), F(long, arm_wide_literal)(in, 2),
         F(long, arm_wide_literal)(in, 0));
  printf("%u %u %u %u %.1f\n", F(unsigned int, arm_all_ones)(bytes, 2), F(unsigned int, arm_all_ones)(bytes, 0),
         F(unsigned int, keep_less)(1, 2, 1), F(unsigned int, keep_less)(1, 2, 0),
         ((double (*)(float, double, int))(void (*)())keep_float)(-3.5f, 2.0, 1));
  return 0;
}
"#;
    let both = [(
        "v1 = (a2) ? (unsigned long)a0 : (unsigned long)a1;",
        "v1 = (a2) ? (unsigned long)a0 : a1;",
    )];
    let gcc_only: [(&str, &str); 8] = [
        (
            "v3 = (*(char *)(v8 + a1) != '=') ? (int)*(char *)(a0 + (unsigned long)*(unsigned char *)(v8 + a1)) : 0;",
            "v3 = (*(char *)(v8 + a1) != '=') ? *(char *)(a0 + (unsigned long)*(unsigned char *)(v8 + a1)) : 0;",
        ),
        (
            "v1 = (a1) ? (int)*(char *)(a0 + a1) : 0;",
            "v1 = (a1) ? *(char *)(a0 + a1) : 0;",
        ),
        (
            "v1 = (a1) ? (unsigned int)*(unsigned char *)(a0 + a1) : 0xffffffff;",
            "v1 = (a1) ? *(unsigned char *)(a0 + a1) : 0xffffffff;",
        ),
        (
            "v1 = (a1) ? (int)*(short *)(a0 + (long)a1 * 2) : 7;",
            "v1 = (a1) ? *(short *)(a0 + (long)a1 * 2) : 7;",
        ),
        (
            "v1 = (a1) ? (unsigned long)*(unsigned int *)(a0 + (long)a1 * 4) : 0xffffffffffffffff;",
            "v1 = (a1) ? *(unsigned int *)(a0 + (long)a1 * 4) : 0xffffffffffffffff;",
        ),
        (
            "v1 = (a1) ? (long)*(int *)(a0 + (long)a1 * 4) : 3000000000;",
            "v1 = (a1) ? *(int *)(a0 + (long)a1 * 4) : 3000000000;",
        ),
        (
            "v1 = (a1) ? (int)*(char *)(a0 + a1) : -1;",
            "v1 = (a1) ? *(char *)(a0 + a1) : -1;",
        ),
        (
            "v6 = (*(char *)(a1 + v8 + 3) != '=') ? (int)*(char",
            "v6 = (*(char *)(a1 + v8 + 3) != '=') ? *(char",
        ),
    ];
    let gcc_kept = [
        "v1 = (a1) ? (long)*(int *)(a0 + (long)a1 * 4) : -5;",
        "v1 = (a2) ? (unsigned int)(a0 < a1) : 0xffffffff;",
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for fixture in ["castternary_gcc_O0_x86_64", "castternary_clang_O0_x86_64"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let gcc = fixture.contains("gcc");
        // The spellings are pinned with `elemptr` off, which leaves the table
        // bases integers; with it on (the default) they are subscripts of
        // declared pointers, and the printed C must still compute the same values.
        for (elem, opt) in [("off", "off"), ("off", "on"), ("on", "off"), ("on", "on")] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                FUNCS,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castternary",
                opt,
                "--option",
                "castwiden",
                "off",
                "--option",
                "elemptr",
                elem,
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            let changed: Vec<(&str, &str)> = both
                .iter()
                .chain(if gcc { gcc_only.iter() } else { [].iter() })
                .copied()
                .collect();
            if elem == "off" {
                for (off, on) in changed {
                    let want = if opt == "on" { on } else { off };
                    assert!(
                        stdout.contains(want),
                        "{fixture} option {opt} does not print `{want}`:\n{stdout}"
                    );
                }
                if gcc {
                    for want in gcc_kept {
                        assert!(
                            stdout.contains(want),
                            "{fixture} option {opt} lost `{want}`:\n{stdout}"
                        );
                    }
                }
            }
            for cc in &compilers {
                for level in ["-O0", "-O2"] {
                    let dir = std::env::temp_dir().join(format!(
                        "unlace-castternary-rt-{}-{fixture}-{elem}-{opt}-{cc}{level}",
                        std::process::id()
                    ));
                    std::fs::create_dir_all(&dir).unwrap();
                    let src = dir.join("rt.c");
                    let exe = dir.join("rt");
                    std::fs::write(
                        &src,
                        format!("#include <stdbool.h>\n#include <stdio.h>\n#include <string.h>\n{stdout}\n{MAIN}"),
                    )
                    .unwrap();
                    let out = Command::new(cc)
                        .args([
                            "-std=gnu11",
                            level,
                            "-w",
                            "-Wno-error=int-conversion",
                            "-o",
                            exe.to_str().unwrap(),
                            src.to_str().unwrap(),
                        ])
                        .args(common::CC_GCC15_DEMOTE)
                        .output()
                        .expect("spawn the C compiler");
                    assert!(
                        out.status.success(),
                        "{cc} rejected the printed C ({fixture}, option {opt}):\n{}",
                        String::from_utf8_lossy(&out.stderr)
                    );
                    let run = process::required_output(&mut Command::new(&exe));
                    let _ = std::fs::remove_dir_all(&dir);
                    assert_eq!(
                        String::from_utf8_lossy(&run.stdout),
                        WANT,
                        "{fixture} printed with option {opt} and built by {cc} {level} computes a different value:\n{stdout}"
                    );
                }
            }
        }
    }
}

/// (unlace `castwiden`) A 64-bit widening C performs by itself keeps no cast: an
/// operand of `+ - * / % & | ^` beside a 64-bit operand of the cast's type, beside
/// a literal the `literal` value prints with its `L`/`UL` suffix, and a widening
/// into an assignment, a store or a prototyped argument of the cast's type or
/// width.  A shift, a comparison, an unsigned widening beside a signed operand, a
/// negated unsigned literal and one widened value read by both operands of an op
/// (`(long)i * (long)i`) keep their cast, and a 32-bit sum or product beside a long
/// of the same operator keeps its parentheses.  Beside a chain of its own operator,
/// which prints without parentheses and which C regroups (`(long)a + ((long)b + x)`
/// prints `(long)a + b + x`), the left operand keeps its cast unless the chain's
/// first leaf is 64-bit.  The functions of
/// `castwiden_x86_64.c`, built with gcc and clang at -O0 and -O2, are printed with
/// the option off, on and literal, compiled with gcc and clang at -O0 and -O2
/// (`-fwrapv`, so the 32-bit arithmetic unlace prints as `int` wraps as the machine's
/// does), and every build must print what the fixture binary prints for negative
/// values, 0x80000000..0xffffffff, sums past 32 bits and squares past 2^32.
#[test]
fn an_implied_widening_round_trips_through_the_printed_c() {
    const FUNCS: &str = "add_load,minus_load,add_uload,mix_uint,add_char,div_load,udiv_load,mul_two,lit_mul,lit_add,\
                         lit_umul,lit_index,lit_mask,lit_neg,ret_ulong,store_long,store_ulong,store_uchar,assign_ulong,\
                         assign_loop,sink,assign_call,assign_size,field_add,field_umix,find_len,keep_shift,keep_less,\
                         keep_mixed,keep_neglit,sq,usq,sq_diff,dist,par_add,par_mul,chain_add,chain_mul,chain_add3,\
                         chain_xor";
    const WANT: &str = "2147483647 2147483647 5 0 0 7 1 0 -3\n\
0 1 0\n\
0 0\n\
2147483646 2147483648 4 1 3 -5 0 -1664 -4\n\
18446744073709551615 1 18446744073709551613\n\
5\n\
-1 18446744073709551615\n\
4294967294 0 2147483652 4611686014132420609 -6442450941 25769803771 2147483648 3573412788608 2147483644\n\
2147483647 1 18446744071562067965\n\
0\n\
2147483647 2147483647\n\
-1 4294967295 18446744071562067973 4611686018427387904 6442450944 -25769803769 -2147483647 -3573412790272 -2147483651\n\
18446744071562067968 0 2147483648\n\
2147483647\n\
-2147483648 18446744071562067968\n\
2147483640 2147483654 18446744073709551614 49 21 -77 -6 -11648 -10\n\
18446744073709551609 0 18446744073709551607\n\
1\n\
-7 18446744073709551609\n\
2147483650 2147483644 8 9 -9 43 4 4992 0\n\
3 1 18446744073709551609\n\
0\n\
3 3\n\
18446744073709551600 0 4294967296 0\n\
18446744071562067983 34359738360 8589934591 18446742974197923840 4294967296\n\
18446744073709551600 17179869184 6442450944 0 8589934591\n\
18446744073709551603 24 4294967299 3298534883328 6148914691236517200\n\
-133 122 255 250 2147483775\n\
3 -1 -1\n\
38654705538 4294967284\n\
6148914691236517202 715827882 6148914690520689323\n\
4294967292 2 10\n\
-6 18446744069414584334\n\
4294967294 18446744071562067968\n\
-2147483647 0\n\
0 0 0 0 2147483647 2147483648 0 0\n\
-5 0 2147483647 18446744073709551603\n\
1 18446744065119617025 0 2 2147483645 2147483647 2147483647 -6442450941\n\
-7 -9 2147483644 18446744069414584332\n\
4611686014132420609 4611686014132420609 1152921504606846976 5764607516591783938 2147483645 -1 2147483647 4611686009837453315\n\
4294967289 19327352823 8589934588 18446744071562067980\n\
4611686018427387904 4611686018427387904 1152921504606846976 5764607523034234880 2147483647 0 0 -4611686016279904256\n\
-4294967301 -19327352832 -4294967297 18446744071562067955\n\
4294967296 4294967296 1073741824 5368709120 2147614719 2147549184 0 422212464869376\n\
131067 589824 2147680255 18446744073709486067\n\
4295098369 18446181119461294081 1073741824 5368905730 2147352573 2147418111 281477124063231 -422218907320317\n\
-131079 -589833 2147287036 18446744069414649868\n\
2147488281 2147488281 536895241 2684337181 2147576329 2147529989 -4611676066988167705 298549619056881\n\
92677 417069 2147622670 18446744073709505270\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
struct rec {
  long a;
  unsigned long b;
  int c;
  unsigned int d;
};
int main(void) {
  long lp[4] = {-5, 0x7fffffff, -1, 3};
  unsigned long up[4] = {0xfffffffffffffff0UL, 0x80000000UL, 5, 0};
  static const signed char sc[] = {1, -128, 127};
  static const unsigned char uc[] = {0xff, 0x80};
  int ints[] = {0, -1, 0x7fffffff, (int)0x80000000, -7, 3};
  unsigned int uints[] = {0, 0xffffffffu, 0x80000000u, 3};
  for (int k = 0; k < 6; k++) {
    int i = ints[k];
    printf("%ld %ld %lu %ld %ld %ld %ld %ld %ld\n", F(long, add_load)(lp, i), F(long, minus_load)(lp, i),
           F(unsigned long, add_uload)(up, i), F(long, mul_two)(i, i), F(long, mul_two)(i, -3), F(long, lit_mul)(i),
           F(long, lit_add)(i), F(long, lit_index)(i, i), F(long, lit_neg)(i));
    printf("%lu %d %lu\n", F(unsigned long, ret_ulong)(i), (int)F(bool, keep_less)(lp, i),
           F(unsigned long, assign_ulong)(i, (int)(0u - (unsigned int)i)));
    if (i != 0)
      printf("%ld\n", F(long, div_load)(lp, i));
    long sl[4] = {0};
    unsigned long su[4] = {0};
    F(void, store_long)(sl, i);
    F(void, store_ulong)(su, i);
    printf("%ld %lu\n", sl[1], su[2]);
  }
  for (int k = 0; k < 4; k++) {
    unsigned int u = uints[k];
    printf("%lu %lu %lu %lu", F(unsigned long, mix_uint)(up, u), F(unsigned long, lit_umul)(u),
           F(unsigned long, lit_mask)(u), F(unsigned long, keep_shift)(u));
    if (u != 0)
      printf(" %lu", F(unsigned long, udiv_load)(up, u));
    printf("\n");
  }
  unsigned long su[4] = {0};
  F(void, store_uchar)(su, uc);
  printf("%ld %ld %lu %lu %lu\n", F(long, add_char)(lp, sc), F(long, add_char)(lp, sc + 1), su[3],
         F(unsigned long, keep_mixed)(lp, uc), F(unsigned long, keep_mixed)(lp + 1, uc + 1));
  printf("%ld %ld %ld\n", F(long, find_len)("abcxdef", 7), F(long, find_len)("abcxdef", 3),
         F(long, find_len)("abcdef", 6));
  printf("%lu %lu\n", F(unsigned long, assign_loop)(ints, 6), F(unsigned long, assign_loop)(ints + 1, 3));
  printf("%lu %lu %lu\n", F(unsigned long, assign_size)(-7), F(unsigned long, assign_size)(0x7fffffff),
         F(unsigned long, assign_size)((int)0x80000000));
  printf("%lu %lu %lu\n", F(unsigned long, assign_call)(-1, 0xffffffffu), F(unsigned long, assign_call)((int)0x80000000, 0x80000000u),
         F(unsigned long, assign_call)(5, 7));
  struct rec rs[3] = {{-5, 7, -1, 0xffffffffu}, {0x7fffffff, 0xfffffffffffffff0UL, 0x7fffffff, 1},
                      {1, 2, (int)0x80000000, 0x80000000u}};
  for (int k = 0; k < 3; k++)
    printf("%ld %lu\n", F(long, field_add)(&rs[k]), F(unsigned long, field_umix)(&rs[k]));
  int big[] = {0, -1, 0x7fffffff, (int)0x80000000, 0x10000, -0x10001, 46341};
  for (int k = 0; k < 7; k++) {
    int i = big[k];
    printf("%ld %lu %ld %ld %ld %ld %ld %ld\n", F(long, sq)(i), F(unsigned long, usq)((unsigned int)i),
           F(long, sq_diff)(i, i >> 1), F(long, dist)(0, 0, i, i >> 1), F(long, par_add)(lp, i, i),
           F(long, par_add)(lp, i, 1), F(long, par_mul)(lp, i, i), F(long, par_mul)(lp, i, 3));
    printf("%ld %ld %ld %lu\n", F(long, chain_add)(lp, i, i), F(long, chain_mul)(lp + 3, i, 3),
           F(long, chain_add3)(lp, i, i, i), F(unsigned long, chain_xor)(up, (unsigned int)i, 3u));
  }
  return 0;
}
"#;
    // (function, text with the option off, with `on`, with `literal`) per fixture.
    type Pins = &'static [(&'static str, &'static str, &'static str, &'static str)];
    let gcc_o0: Pins = &[
        (
            "add_load",
            "(long)a1 + ((long *)a0)[1]",
            "return a1 + ((long *)a0)[1];",
            "return a1 + ((long *)a0)[1];",
        ),
        (
            "mul_two",
            "(long)a1 * (long)a0",
            "return (long)a1 * a0;",
            "return (long)a1 * a0;",
        ),
        (
            "lit_mul",
            "return (long)a0 * 0xc + 7;",
            "return (long)a0 * 0xc + 7;",
            "return a0 * 0xcL + 7;",
        ),
        (
            "lit_mask",
            "(unsigned long)a0 | 0x100000000;",
            "(unsigned long)a0 | 0x100000000;",
            "return a0 | 0x100000000UL;",
        ),
        (
            "store_ulong",
            "((long *)a0)[2] = (long)a1;",
            "((long *)a0)[2] = a1;",
            "((long *)a0)[2] = a1;",
        ),
        (
            "assign_size",
            "v1 = (unsigned long)a0;",
            "v1 = a0;",
            "v1 = a0;",
        ),
        (
            "find_len",
            "memchr(a0,0x78,(long)a1)",
            "memchr(a0,0x78,a1)",
            "memchr(a0,0x78,a1)",
        ),
        (
            "keep_mixed",
            "*a0 + (unsigned long)*a1",
            "*a0 + (unsigned long)*a1",
            "*a0 + (unsigned long)*a1",
        ),
        (
            "sq",
            "return (long)a0 * (long)a0;",
            "return (long)a0 * a0;",
            "return (long)a0 * a0;",
        ),
        (
            "sq_diff",
            "(long)(a0 - a1) * (long)(a0 - a1)",
            "(long)(a0 - a1) * (long)(a0 - a1)",
            "(long)(a0 - a1) * (long)(a0 - a1)",
        ),
        (
            "par_add",
            "return (long)(a2 + a1) + ((long *)a0)[1];",
            "return (a2 + a1) + ((long *)a0)[1];",
            "return (a2 + a1) + ((long *)a0)[1];",
        ),
    ];
    let clang_o0: Pins = &[
        (
            "add_load",
            "((long *)a0)[1] + (long)a1",
            "return ((long *)a0)[1] + a1;",
            "return ((long *)a0)[1] + a1;",
        ),
        (
            "mul_two",
            "(long)a0 * (long)a1",
            "return (long)a0 * a1;",
            "return (long)a0 * a1;",
        ),
        (
            "lit_index",
            "((long)a0 * 0xc + (long)a1) * 0x80",
            "((long)a0 * 0xc + a1) * 0x80",
            "(a0 * 0xcL + a1) * 0x80",
        ),
        (
            "assign_size",
            "v1 = (unsigned long)a0;",
            "v1 = a0;",
            "v1 = a0;",
        ),
        (
            "keep_mixed",
            "(unsigned long)*a1 + *a0",
            "(unsigned long)*a1 + *a0",
            "(unsigned long)*a1 + *a0",
        ),
        (
            "par_add",
            "((long *)a0)[1] + (long)(a1 + a2);",
            "((long *)a0)[1] + (a1 + a2);",
            "((long *)a0)[1] + (a1 + a2);",
        ),
        (
            "par_mul",
            "((long *)a0)[1] * (long)(a1 * a2);",
            "((long *)a0)[1] * (a1 * a2);",
            "((long *)a0)[1] * (a1 * a2);",
        ),
        (
            "chain_add",
            "return (long)a1 + (long)a2 + *a0;",
            "return (long)a1 + a2 + *a0;",
            "return (long)a1 + a2 + *a0;",
        ),
        (
            "chain_add3",
            "(long)a1 + (long)a2 + (long)a3 + ",
            "return a1 + (long)a2 + a3 + ",
            "return a1 + (long)a2 + a3 + ",
        ),
    ];
    let gcc_o2: Pins = &[
        (
            "add_load",
            "(long)a1 + ((long *)a0)[1]",
            "return a1 + ((long *)a0)[1];",
            "return a1 + ((long *)a0)[1];",
        ),
        (
            "lit_add",
            "return (long)a0 + 1;",
            "return (long)a0 + 1;",
            "return a0 + 1L;",
        ),
        (
            "store_long",
            "((long *)a0)[1] = (long)a1;",
            "((long *)a0)[1] = a1;",
            "((long *)a0)[1] = a1;",
        ),
        (
            "assign_size",
            "v1 = (unsigned long)a0;",
            "v1 = a0;",
            "v1 = a0;",
        ),
        (
            "sq",
            "return (long)a0 * (long)a0;",
            "return (long)a0 * (long)a0;",
            "return (long)a0 * (long)a0;",
        ),
        (
            "usq",
            "(unsigned long)a0 * (unsigned long)a0;",
            "(unsigned long)a0 * (unsigned long)a0;",
            "(unsigned long)a0 * (unsigned long)a0;",
        ),
    ];
    let clang_o2: Pins = &[
        (
            "sq",
            "return (long)a0 * (long)a0;",
            "return (long)a0 * (long)a0;",
            "return (long)a0 * (long)a0;",
        ),
        (
            "usq",
            "(unsigned long)a0 * (unsigned long)a0;",
            "(unsigned long)a0 * (unsigned long)a0;",
            "(unsigned long)a0 * (unsigned long)a0;",
        ),
        (
            "par_mul",
            "return (long)(a1 * a2) * ((long *)a0)[1];",
            "return (a1 * a2) * ((long *)a0)[1];",
            "return (a1 * a2) * ((long *)a0)[1];",
        ),
        (
            "chain_mul",
            "return (long)a2 * (long)a1 * *a0;",
            "return (long)a2 * a1 * *a0;",
            "return (long)a2 * a1 * *a0;",
        ),
    ];
    // Kept by every value: a comparison operand, and a widening beside a negated
    // unsigned literal (`keep_neglit`, whose constant unlace prints with the option
    // off too in a form C reads as +2^31, so it is not called below).
    let kept = [
        ("keep_less", "*a0 < (long)a1"),
        ("keep_neglit", "return (long)a0 + "),
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for (fixture, pins) in [
        ("castwiden_gcc_O0_x86_64", gcc_o0),
        ("castwiden_clang_O0_x86_64", clang_o0),
        ("castwiden_gcc_O2_x86_64", gcc_o2),
        ("castwiden_clang_O2_x86_64", clang_o2),
    ] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        for (arm, opt) in ["off", "on", "literal"].into_iter().enumerate() {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                FUNCS,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castwiden",
                opt,
                "--option",
                "structdefs",
                "on",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            for &(func, off, on, literal) in pins {
                let want = [off, on, literal][arm];
                let text = castsign_function(&stdout, func);
                assert!(
                    text.contains(want),
                    "{fixture} option {opt}: {func} does not print `{want}`:\n{text}"
                );
            }
            for (func, want) in kept {
                let text = castsign_function(&stdout, func);
                assert!(
                    text.contains(want),
                    "{fixture} option {opt}: {func} lost `{want}`:\n{text}"
                );
            }
            for cc in &compilers {
                for level in ["-O0", "-O2"] {
                    let dir = std::env::temp_dir().join(format!(
                        "unlace-castwiden-rt-{}-{fixture}-{opt}-{cc}{level}",
                        std::process::id()
                    ));
                    std::fs::create_dir_all(&dir).unwrap();
                    let src = dir.join("rt.c");
                    let exe = dir.join("rt");
                    std::fs::write(
                        &src,
                        format!("#include <stdbool.h>\n#include <stdio.h>\n#include <string.h>\n{stdout}\n{MAIN}"),
                    )
                    .unwrap();
                    let out = Command::new(cc)
                        .args(common::CC_GCC15_DEMOTE)
                        .args([
                            "-std=gnu11",
                            level,
                            "-w",
                            "-fno-strict-aliasing",
                            "-fwrapv",
                            "-Wno-error=int-conversion",
                            "-Werror=incompatible-pointer-types",
                            "-o",
                            exe.to_str().unwrap(),
                            src.to_str().unwrap(),
                        ])
                        .output()
                        .expect("spawn the C compiler");
                    assert!(
                        out.status.success(),
                        "{cc} rejected the printed C ({fixture}, option {opt}):\n{}",
                        String::from_utf8_lossy(&out.stderr)
                    );
                    let run = process::required_output(&mut Command::new(&exe));
                    let _ = std::fs::remove_dir_all(&dir);
                    assert_eq!(
                        String::from_utf8_lossy(&run.stdout),
                        WANT,
                        "{fixture} printed with option {opt} and built by {cc} {level} computes a different value:\n{stdout}"
                    );
                }
            }
        }
    }
}

/// The text of one function in a `decompile-all` listing, from its `// Function:`
/// header to the next.
fn castsign_function<'a>(listing: &'a str, name: &str) -> &'a str {
    let head = format!("// Function: {name} @");
    let start = listing
        .find(&head)
        .unwrap_or_else(|| panic!("{name} not printed:\n{listing}"));
    let rest = &listing[start + head.len()..];
    &listing[start..start + head.len() + rest.find("// Function: ").unwrap_or(rest.len())]
}

/// Ignore variable-storage diagnostics when checking types and executable C.
fn without_variable_sources(output: &str) -> String {
    use regex::Regex;
    static PATTERNS: std::sync::OnceLock<(Regex, Regex, Regex, Regex)> = std::sync::OnceLock::new();
    let (home, declaration, prototype, parameter) = PATTERNS.get_or_init(|| {
        let register = r"(?i:acc|(?:r|e)?(?:ax|bx|cx|dx|sp|bp|di|si)|[abcd][lh]|(?:[sb]p|[sd]i)l|r[0-9]+[bwd]?|(?:[xyz]mm|st)[0-9]+(?:_[a-z]+)?|[cdefgs]s|[fg]s_offset|[csozapd]f)";
        (
            Regex::new(&format!(r"^(?:tmp|{register}(?::{register})*|stack [+-] 0x[0-9a-fA-F]+|[A-Za-z_][A-Za-z0-9_]* 0x[0-9a-fA-F]+)$")).unwrap(),
            Regex::new(r"^(?P<decl>  (?:[A-Za-z_][A-Za-z0-9_]*[ \t]+|\*[ \t]*)+[A-Za-z_][A-Za-z0-9_]*(?: \[[0-9]+\])?;) // (?P<source>.+)$").unwrap(),
            Regex::new(r"^(?:[A-Za-z_][A-Za-z0-9_]*[ \t]+|\*[ \t]*)+[A-Za-z_][A-Za-z0-9_]*\((?P<params>[^()]*)\)$").unwrap(),
            Regex::new(r"^(?:[A-Za-z_][A-Za-z0-9_]*[ \t]+|\*[ \t]*)+(?P<name>[A-Za-z_][A-Za-z0-9_]*)(?: \[[0-9]+\])?$").unwrap(),
        )
    });
    let storage = |source: &str| source.split(" | ").all(|part| home.is_match(part));
    let mut parameters = std::collections::BTreeSet::new();
    output
        .split_inclusive('\n')
        .filter_map(|line| {
            let content = line.strip_suffix('\n').unwrap_or(line);
            let signature = content.split(" // ").next().unwrap();
            if let Some(captures) = prototype.captures(signature) {
                parameters = captures["params"]
                    .split(',')
                    .filter_map(|part| {
                        parameter
                            .captures(part.trim())
                            .map(|p| p["name"].to_string())
                    })
                    .collect();
            } else if content == "}" {
                parameters.clear();
            }
            if let Some((name, source)) = content
                .strip_prefix("  // ")
                .and_then(|s| s.split_once(": "))
                && parameters.contains(name) && storage(source) {
                    return None;
                }
            if let Some(captures) = declaration.captures(content) {
                let decl = &captures["decl"];
                let statement = matches!(
                    decl.split_whitespace().next(),
                    Some("return" | "goto" | "throw")
                );
                if !statement && storage(&captures["source"]) {
                    return Some(format!(
                        "{decl}{}",
                        if line.ends_with('\n') { "\n" } else { "" }
                    ));
                }
            }
            Some(line.to_string())
        })
        .collect()
}

#[test]
fn variable_source_normalization_preserves_statement_and_note_boundaries() {
    let text = "uint1 f(int4 x) // warn: bad data\n{\n  uint1 v1; // ram 0x52 | acc\n  // x: edi | stack - 0xc\n  // note: rax\n  int4 v2; // warning\n  v1 = 1; // acc\n  return v1; // acc\n}\nuint1 g(int4 y)\n{\n  // x: edi\n  // y: esi\n  return y;\n}\n";
    let expected = "uint1 f(int4 x) // warn: bad data\n{\n  uint1 v1;\n  // note: rax\n  int4 v2; // warning\n  v1 = 1; // acc\n  return v1; // acc\n}\nuint1 g(int4 y)\n{\n  // x: edi\n  return y;\n}\n";
    assert_eq!(without_variable_sources(text), expected);
}

/// (unlace `castsign`) A variable the program only compares signed is declared
/// signed, and the `(long)v` it cost at each comparison goes.  A variable that
/// `+ - *` reads keeps its unsigned declaration: that arithmetic wraps, and the
/// signed form would overflow at the edge of the range, which gcc and clang fold
/// on.  `castsign_wrap_x86_64.c` passes its functions 2^63 - 1, 2^63, 2^63 + 1
/// and the 32-bit edges; `castsign_x86_64.c` keeps lengths and indexes taken from
/// `strlen` and from unsigned tables.  Each fixture is decompiled with the option
/// off and on, the printed functions are compiled with gcc and clang at -O0 and
/// -O2, and every build must print what the fixture binary prints.  The -O1
/// build of the wrap source is checked on `sign_of` and `peek` only: its
/// arithmetic shapes are register locals, which `signedness` decides and this
/// option leaves alone.  `castsign_eq_x86_64.c` also compares the value for
/// equality with `3000000000` or `10000000000000000000`, decimal literals whose C
/// type is wider than the declaration, so those declarations stay unsigned.
/// `castwiden` is held off: it leaves out some of the widenings pinned here,
/// which `an_implied_widening_round_trips_through_the_printed_c` covers.
#[test]
fn a_signed_only_variable_round_trips_through_the_printed_c() {
    const WRAP_FUNCS: &str = "dec_neg,cnt_wrap,spin,count_down,dec_neg32,sign_of,sign_of32,peek";
    const WRAP_WANT: &str = "dec_neg      0 1 1 5 5 0 0\ncnt_wrap     5 5 5 0 5 5 5\nspin         3 0 5\n\
count_down   0 1 2 5 5 0 0\ndec_neg32    0 13 15 15 0\nsign_of      1 2 0 1\nsign_of32    5 6 4 5\n\
peek         99 -1 -2 100\n";
    const WRAP_MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
static const char *const W64[] = {"0", "1", "2", "0x7fffffffffffffff", "0x8000000000000000",
                                  "0x8000000000000001", "0xffffffffffffffff"};
static const char *const W32[] = {"0", "5", "0x7fffffff", "0x80000000", "0x80000001"};
int main(void) {
  printf("dec_neg     ");
  for (int i = 0; i < 7; i++)
    printf(" %ld", F(long, dec_neg)(W64[i]));
  printf("\ncnt_wrap    ");
  for (int i = 0; i < 7; i++)
    printf(" %ld", F(long, cnt_wrap)(W64[i]));
  printf("\nspin         %ld %ld %ld\ncount_down  ", F(long, spin)("0x7ffffffffffffffe", "0x8000000000000001"),
         F(long, spin)("0x8000000000000001", "0x7ffffffffffffffe"), F(long, spin)("0xfffffffffffffffe", "0x10"));
  for (int i = 0; i < 7; i++)
    printf(" %ld", F(long, count_down)(W64[i]));
  printf("\ndec_neg32   ");
  for (int i = 0; i < 5; i++)
    printf(" %ld", F(long, dec_neg32)(W32[i]));
  printf("\nsign_of      %ld %ld %ld %ld\nsign_of32    %ld %ld %ld %ld", F(long, sign_of)(W64[3], W64[0]),
         F(long, sign_of)(W64[4], "0xfffffffffffffffa"), F(long, sign_of)(W64[6], "0xfffffffffffffffe"),
         F(long, sign_of)(W64[5], W64[3]), F(long, sign_of32)(W32[2], W32[0]),
         F(long, sign_of32)(W32[3], "0xfffffffa"), F(long, sign_of32)("0xffffffff", "0xfffffffe"),
         F(long, sign_of32)(W32[4], "0x7ffffff0"));
  printf("\npeek         %ld %ld %ld %ld\n", F(long, peek)("abcd", "2"), F(long, peek)("abcd", W64[4]),
         F(long, peek)("abcd", W64[3]), F(long, peek)("abcd", "3"));
  return 0;
}
"#;
    const REG_FUNCS: &str = "sign_of,peek";
    const REG_WANT: &str = "sign_of      1 2 0 1\npeek         99 -1 -2 100\n";
    const REG_MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
int main(void) {
  printf("sign_of      %ld %ld %ld %ld\n", F(long, sign_of)("0x7fffffffffffffff", "0"),
         F(long, sign_of)("0x8000000000000000", "0xfffffffffffffffa"),
         F(long, sign_of)("0xffffffffffffffff", "0xfffffffffffffffe"),
         F(long, sign_of)("0x8000000000000001", "0x7fffffffffffffff"));
  printf("peek         %ld %ld %ld %ld\n", F(long, peek)("abcd", "2"), F(long, peek)("abcd", "0x8000000000000000"),
         F(long, peek)("abcd", "0x7fffffffffffffff"), F(long, peek)("abcd", "3"));
  return 0;
}
"#;
    const FUNCS: &str =
        "trim_right,count_down,run_len,word_end,pick_len,zext_walk,both_ways,halved";
    const WANT: &str = "-7 23 13\n2 7\n2 125\n-3 7 0\n-1 3\n6 9 3 0 -1\n";
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
int main(void) {
  char a[] = "   ", b[] = "abc  ", c[] = "xy ";
  static const int arr[] = {-4, 5, -6, 7, 0, -1};
  static unsigned char tab[256];
  for (int i = 0; i < 256; i++)
    tab[i] = (unsigned char)(i % 7);
  printf("%ld %ld %ld\n", F(long, trim_right)(a), F(long, trim_right)(b), F(long, trim_right)(c));
  printf("%ld %ld\n", F(long, count_down)(arr, "abcd"), F(long, count_down)(arr, "abcdef"));
  printf("%ld %ld\n", F(long, run_len)(tab, "hello world", 3L), F(long, run_len)(tab, "zzzzzzz", 100L));
  printf("%ld %ld %ld\n", F(long, word_end)("ab cd", 0u), F(long, both_ways)("abcdefghij", 99UL),
         F(long, both_ways)("abc", 1UL));
  printf("%ld %ld\n", F(long, halved)("a"), F(long, halved)("abcdefgh"));
  static const unsigned int lens[] = {0, 4, 9, 2};
  static const unsigned int at[] = {6, 0};
  printf("%ld %ld %ld %ld %ld\n", F(long, pick_len)(lens, "ab  ", 0), F(long, pick_len)(lens, "abc ", 1),
         F(long, pick_len)(lens, "a ", 3), F(long, zext_walk)(at, "aqbbbbbb"), F(long, zext_walk)(at + 1, "q"));
  return 0;
}
"#;
    const EQ_FUNCS: &str = "d_eq32,c_eq64,c_ne64,c_or64,c_eq7";
    const EQ_WANT: &str = "d_eq32   2 1 0\nc_eq64   2 1 0 1 0\nc_ne64   0 1 0 1 0\nc_or64   2 1 0 1 0\n\
c_eq7    1 2 0 1 0\n";
    const EQ_MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
static const char *const E[] = {"10000000000000000000", "0x8000000000000001", "5", "0xffffffffffffffff", "0"};
int main(void) {
  unsigned int a[2] = {htonl(3000000000u), 0}, b[2] = {htonl(0x80000001u), 0}, c[2] = {htonl(5), 0};
  printf("d_eq32   %ld %ld %ld\n", F(long, d_eq32)(a, "y"), F(long, d_eq32)(b, "y"), F(long, d_eq32)(c, "y"));
  printf("c_eq64  ");
  for (int i = 0; i < 5; i++)
    printf(" %ld", F(long, c_eq64)(E[i], "y"));
  printf("\nc_ne64  ");
  for (int i = 0; i < 5; i++)
    printf(" %ld", F(long, c_ne64)(E[i], "y"));
  printf("\nc_or64  ");
  for (int i = 0; i < 5; i++)
    printf(" %ld", F(long, c_or64)(E[i], "y"));
  printf("\nc_eq7    %ld %ld %ld %ld %ld\n", F(long, c_eq7)("0x8000000000000000", "y"), F(long, c_eq7)("7", "y"),
         F(long, c_eq7)("6", "y"), F(long, c_eq7)("x", "x0xffffffffffffffff"), F(long, c_eq7)("0", "y"));
  return 0;
}
"#;
    const WIDE: &[&str] = &["d_eq32", "c_eq64", "c_ne64", "c_or64"];
    const WRAPS: &[&str] = &["dec_neg", "cnt_wrap", "spin", "count_down", "dec_neg32"];
    const OLD: &[&str] = &[
        "trim_right",
        "count_down",
        "run_len",
        "word_end",
        "zext_walk",
        "both_ways",
        "halved",
    ];
    // (fixture, functions, main, output, the lines option off prints and what
    // option on prints instead, the functions option on must print unchanged)
    type Case<'a> = (
        &'a str,
        &'a str,
        &'a str,
        &'a str,
        &'a [(&'a str, &'a str)],
        &'a [&'a str],
    );
    let cases: [Case; 9] = [
        (
            "castsign_eq_gcc_O0_x86_64",
            EQ_FUNCS,
            EQ_MAIN,
            EQ_WANT,
            &[
                (
                    "\n  unsigned long v1; // stack - 0x10\n  \n  v1 = strtoul(a0,NULL,0);\n  if (*a1 == 'x')\n    v1 = strtoul(&a1[1],NULL,0);\n  if (v1 == 7)",
                    "\n  long v1; // stack - 0x10\n  \n  v1 = strtoul(a0,NULL,0);\n  if (*a1 == 'x')\n    v1 = strtoul(&a1[1],NULL,0);\n  if (v1 == 7)",
                ),
                ("if ((long)v1 <= -1)", "if (v1 <= -1)"),
            ],
            WIDE,
        ),
        (
            "castsign_eq_clang_O0_x86_64",
            EQ_FUNCS,
            EQ_MAIN,
            EQ_WANT,
            &[
                (
                    "\n  unsigned long v1; // stack - 0x28\n  \n  v1 = strtoul(a0,NULL,0);\n  if (*a1 == 'x')\n    v1 = strtoul(&a1[1],NULL,0);\n  if (v1 == 7)",
                    "\n  long v1; // stack - 0x28\n  \n  v1 = strtoul(a0,NULL,0);\n  if (*a1 == 'x')\n    v1 = strtoul(&a1[1],NULL,0);\n  if (v1 == 7)",
                ),
                ("if ((long)v1 <= -1)", "if (v1 <= -1)"),
            ],
            WIDE,
        ),
        (
            "castsign_wrap_gcc_O0_x86_64",
            WRAP_FUNCS,
            WRAP_MAIN,
            WRAP_WANT,
            &[
                (
                    "\n  unsigned long v1; // stack - 0x10",
                    "\n  long v1; // stack - 0x10",
                ),
                (
                    "if (0 <= (long)v1)\n    return 1;",
                    "if (0 <= v1)\n    return 1;",
                ),
                (
                    "\n  unsigned int v1; // stack - 0x14",
                    "\n  int v1; // stack - 0x14",
                ),
                ("if (0 <= (int)v1)", "if (0 <= v1)"),
                (
                    "if ((long)strlen(a0) <= (long)v1)",
                    "if ((long)strlen(a0) <= v1)",
                ),
            ],
            WRAPS,
        ),
        (
            "castsign_wrap_clang_O0_x86_64",
            WRAP_FUNCS,
            WRAP_MAIN,
            WRAP_WANT,
            &[
                (
                    "\n  unsigned long v1; // stack - 0x28",
                    "\n  long v1; // stack - 0x28",
                ),
                (
                    "\n  unsigned int v2; // stack - 0x1c",
                    "\n  int v2; // stack - 0x1c",
                ),
                ("if (0 <= (int)v2)", "if (0 <= v2)"),
                (
                    "if ((long)strlen(a0) <= (long)v1) // branch-flip",
                    "if ((long)strlen(a0) <= v1) // branch-flip",
                ),
            ],
            WRAPS,
        ),
        (
            "castsign_wrap_gcc_O1_x86_64",
            REG_FUNCS,
            REG_MAIN,
            REG_WANT,
            &[
                ("\n  unsigned long v1; // rax", "\n  long v1; // rax"),
                (
                    "if ((long)v1 < (long)strlen(a0))",
                    "if (v1 < (long)strlen(a0))",
                ),
            ],
            &["sign_of"],
        ),
        ("castsign_gcc_O0_x86_64", FUNCS, MAIN, WANT, &[], OLD),
        ("castsign_clang_O0_x86_64", FUNCS, MAIN, WANT, &[], OLD),
        ("castsign_gcc_O1_x86_64", FUNCS, MAIN, WANT, &[], OLD),
        (
            "castsign_clang_O1_x86_64",
            FUNCS,
            MAIN,
            WANT,
            &[("len = (unsigned long)a0[a2];", "len = a0[a2];")],
            OLD,
        ),
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for (fixture, funcs, main, want, lines, same) in cases {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let mut printed: Vec<String> = Vec::new();
        for opt in ["off", "on"] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                funcs,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castsign",
                opt,
                "--option",
                "castwiden",
                "off",
                "--option",
                "boolreturn",
                "off",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            let semantic = without_variable_sources(&stdout);
            for (off, on) in lines {
                let want = if opt == "on" { on } else { off };
                assert!(
                    semantic.contains(&without_variable_sources(want)),
                    "{fixture} option {opt} does not print `{want}`:\n{stdout}"
                );
            }
            for cc in &compilers {
                for level in ["-O0", "-O2"] {
                    let dir = std::env::temp_dir().join(format!(
                        "unlace-castsign-rt-{}-{fixture}-{opt}-{cc}{level}",
                        std::process::id()
                    ));
                    std::fs::create_dir_all(&dir).unwrap();
                    let src = dir.join("rt.c");
                    let exe = dir.join("rt");
                    std::fs::write(
                        &src,
                        format!(
                            "#include <arpa/inet.h>\n#include <stdbool.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n{stdout}\n{main}"
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
                        "{fixture} printed with option {opt} and built by {cc} {level} computes a different value:\n{stdout}"
                    );
                }
            }
            printed.push(semantic);
        }
        for name in same {
            assert_eq!(
                castsign_function(&printed[0], name),
                castsign_function(&printed[1], name),
                "{fixture}: option castsign changed {name}"
            );
        }
    }
    // Rust has no implicit integer conversions, so the option leaves Rust output alone.
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/castsign_wrap_gcc_O0_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let rust: Vec<String> = ["off", "on"]
        .iter()
        .map(|opt| {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                WRAP_FUNCS,
                "--sleighpath",
                sp.as_str(),
                "--language",
                "rust",
                "--option",
                "castsign",
                opt,
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all --language rust failed: {stderr}");
            stdout
        })
        .collect();
    assert_eq!(rust[0], rust[1], "castsign changed Rust output");
}

/// (unlace `castobject`) A local whose address only fills declared `int *`
/// parameters is declared `int` when no reader wants it unsigned, and the call
/// stops casting its address.  `castobject_x86_64.c` reaps children that exit
/// with 0, 7 and 255 or die of a signal, so every status bit the tests read is
/// exercised, and runs the `init_*`, `gid_mixed` and `stored_value` objects,
/// which start with a parameter's value that `waitpid` on a pid with no child
/// (or `getgroups` with a size of 0) leaves in place, over values with the top
/// bit set.  `init_signed` is read signed only and moves at `-O0`; the others
/// have a reader that wants the other signedness (a logical shift, an unsigned
/// compare, a zero-extension, a signed compare of a `gid_t`, or a logical shift
/// of the value stored into the object), and they and the other readers that
/// disagree (a logical shift at `-O2`, an address kept in a pointer, a byte read
/// of one half, wrapping arithmetic) must print exactly as they did.  Each
/// fixture is decompiled with the option off and on, the printed functions are
/// compiled with gcc and clang at -O0 and -O2, and every build must print what
/// the fixture binary prints.  `clang -O2` allocates the status slot with
/// `push %rax` and unlace reads the pushed register back after the call, and it
/// prints `escaped` and `two_widths` through a piece accessor, which is not C;
/// both are defects of their own, the same in either arm, so the functions that
/// reap children are not built from that fixture.
#[test]
fn an_out_parameter_local_round_trips_through_the_printed_c() {
    const ALL: &str = "exit_code,status_order,reaped,escaped,two_widths,plus_one,cancel_state,\
init_signed,init_ushr,init_ult,init_zext,gid_mixed,stored_value";
    const CLANG_O2: &str =
        "plus_one,cancel_state,init_signed,init_ushr,init_ult,init_zext,gid_mixed,stored_value";
    const UNCHANGED: &[&str] = &[
        "status_order",
        "reaped",
        "escaped",
        "two_widths",
        "plus_one",
        "cancel_state",
        "init_ushr",
        "init_ult",
        "init_zext",
        "gid_mixed",
        "stored_value",
    ];
    const EVERY: &[&str] = &[
        "exit_code",
        "status_order",
        "reaped",
        "escaped",
        "two_widths",
        "plus_one",
        "cancel_state",
        "init_signed",
        "init_ushr",
        "init_ult",
        "init_zext",
        "gid_mixed",
        "stored_value",
    ];
    const INIT: &str = "init 00000000 0 0 0 0 0 ff800000\ninit 00000020 0 0 2 0 12 8\n\
init 00000100 0 0 1 0 101 ff800000\ninit 00007f00 0 3 127 0 12869 ff80003f\n\
init 80000000 -2048 800 0 ffffffff00000000 -1 ffc00000\ninit 80000001 0 0 0 0 -1 ffc00000\n\
init fffffffe 255 ff 255 ff -1 f\ninit ffffffff 255 ff 255 ff -1 f\ninit 87654321 67 43 101 43 -1 c\n\
init ffff0000 -1 fff 0 ffffffff00000000 -1 ffffff80\ninit 800000ff 0 0 0 0 -1 c\n";
    const REAP: &str = "exit_code    0 7 255 -2\nstatus_order 0 3 9\nreaped       5 -15\nescaped      9 0\n\
two_widths   9 3840\n";
    const TAIL: &str = "plus_one     257 16\ncancel_state 7 7\n";
    let want = format!("{REAP}{TAIL}{INIT}");
    let want_clang_o2 = format!("{TAIL}{INIT}");
    const MAIN: &str = r#"
#define F(ret, f) ((ret (*)())(void (*)())f)
static int child(int code) {
  int pid = fork();
  if (pid == 0) {
    if (code < 0)
      raise(-code);
    _exit(code);
  }
  return pid;
}
int main(void) {
#ifndef SUBSET
  int a = F(int, exit_code)(child(0)), b = F(int, exit_code)(child(7)), c = F(int, exit_code)(child(255)),
      d = F(int, exit_code)(child(-SIGTERM));
  printf("exit_code    %d %d %d %d\n", a, b, c, d);
  long e = F(long, status_order)(child(0)), f = F(long, status_order)(child(3)),
       g = F(long, status_order)(child(-SIGKILL));
  printf("status_order %ld %ld %ld\n", e, f, g);
  child(5);
  long h = F(long, reaped)();
  child(-SIGTERM);
  long i = F(long, reaped)();
  printf("reaped       %ld %ld\n", h, i);
  int j = F(int, escaped)(child(9)), k = F(int, escaped)(child(-SIGTERM));
  printf("escaped      %d %d\n", j, k);
  int l = F(int, two_widths)(child(9)), m = F(int, two_widths)(child(-SIGTERM));
  printf("two_widths   %d %d\n", l, m);
#endif
  unsigned long n = F(unsigned long, plus_one)(child(1)), o = F(unsigned long, plus_one)(child(-SIGTERM));
  printf("plus_one     %lu %lu\n", n, o);
  int q = F(int, cancel_state)();
  pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL);
  int r = F(int, cancel_state)();
  printf("cancel_state %d %d\n", q, r);
  unsigned vals[] = {0, 0x20, 0x100, 0x7f00, 0x80000000u, 0x80000001u, 0xfffffffeu, 0xffffffffu, 0x87654321u,
                     0xffff0000u, 0x800000ffu};
  for (unsigned t = 0; t < sizeof vals / sizeof *vals; t++)
    printf("init %08x %d %x %d %lx %ld %x\n", vals[t], F(int, init_signed)(vals[t]), F(unsigned, init_ushr)(vals[t]),
           F(int, init_ult)(vals[t]), F(long, init_zext)(vals[t]), F(long, gid_mixed)((int)vals[t]),
           F(unsigned, stored_value)(vals[t]));
  return 0;
}
"#;
    // (fixture, functions, output, the lines option off prints and what option on
    // prints instead, the functions option on must print unchanged)
    type Case<'a> = (
        &'a str,
        &'a str,
        &'a str,
        &'a [(&'a str, &'a str)],
        &'a [&'a str],
    );
    let cases: [Case; 4] = [
        (
            "castobject_gcc_O0_x86_64",
            ALL,
            want.as_str(),
            &[
                (
                    "\n  unsigned int stat_loc; // stack - 0x14\n  \n  if (waitpid(a0,(int *)&stat_loc,0) <= -1)",
                    "\n  int stat_loc; // stack - 0x14\n  \n  if (waitpid(a0,&stat_loc,0) <= -1)",
                ),
                (
                    "    return (int)stat_loc >> 8 & 0xff;",
                    "    return stat_loc >> 8 & 0xff;",
                ),
                (
                    "\n  unsigned int stat_loc; // stack - 0x14\n  \n  stat_loc = a0;\n  waitpid(0x7ffffff0,(int *)&stat_loc,1);",
                    "\n  int stat_loc; // stack - 0x14\n  \n  stat_loc = a0;\n  waitpid(0x7ffffff0,&stat_loc,1);",
                ),
                (
                    "(int)stat_loc >> 8 & 0xff : (int)stat_loc >> 0x14;",
                    "stat_loc >> 8 & 0xff : stat_loc >> 0x14;",
                ),
            ],
            UNCHANGED,
        ),
        (
            "castobject_clang_O0_x86_64",
            ALL,
            want.as_str(),
            &[
                (
                    "\n  unsigned int stat_loc; // stack - 0x14",
                    "\n  int stat_loc; // stack - 0x14",
                ),
                (
                    "if (0 <= waitpid(a0,(int *)&stat_loc,0)) {",
                    "if (0 <= waitpid(a0,&stat_loc,0)) {",
                ),
                (
                    "  waitpid(0x7ffffff0,(int *)&stat_loc,1);\n  v3 = (stat_loc & 0x7f) ? (int)stat_loc >> 8",
                    "  waitpid(0x7ffffff0,&stat_loc,1);\n  v3 = (stat_loc & 0x7f) ? stat_loc >> 8",
                ),
            ],
            UNCHANGED,
        ),
        (
            "castobject_gcc_O2_x86_64",
            ALL,
            want.as_str(),
            &[("(int *)&stat_loc", "(int *)&stat_loc")],
            EVERY,
        ),
        (
            "castobject_clang_O2_x86_64",
            CLANG_O2,
            want_clang_o2.as_str(),
            &[],
            &EVERY[5..],
        ),
    ];
    let sp = specs();
    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    for (fixture, funcs, want, lines, same) in cases {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(fixture)
            .to_str()
            .unwrap()
            .to_string();
        let mut printed: Vec<String> = Vec::new();
        for opt in ["off", "on"] {
            let args = [
                "decompile-all",
                bin.as_str(),
                "--functions",
                funcs,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castobject",
                opt,
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            let semantic = without_variable_sources(&stdout);
            for (off, on) in lines {
                let line = if opt == "on" { on } else { off };
                assert!(
                    semantic.contains(&without_variable_sources(line)),
                    "{fixture} option {opt} does not print `{line}`:\n{stdout}"
                );
            }
            for cc in &compilers {
                for level in ["-O0", "-O2"] {
                    let dir = std::env::temp_dir().join(format!(
                        "unlace-castobject-rt-{}-{fixture}-{opt}-{cc}{level}",
                        std::process::id()
                    ));
                    std::fs::create_dir_all(&dir).unwrap();
                    let src = dir.join("rt.c");
                    let exe = dir.join("rt");
                    let subset = if funcs == CLANG_O2 {
                        "#define SUBSET\n"
                    } else {
                        ""
                    };
                    std::fs::write(
                        &src,
                        format!(
                            "{subset}#include <pthread.h>\n#include <signal.h>\n#include <stdbool.h>\n#include <stdio.h>\n#include <stdlib.h>\n#include <sys/wait.h>\n#include <unistd.h>\n{stdout}\n{MAIN}"
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
                        "{fixture} printed with option {opt} and built by {cc} {level} computes a different value:\n{stdout}"
                    );
                }
            }
            printed.push(semantic);
        }
        for name in same {
            assert_eq!(
                castsign_function(&printed[0], name),
                castsign_function(&printed[1], name),
                "{fixture}: option castobject changed {name}"
            );
        }
    }
}

/// (unlace `castsign`) A declaration whose type is locked is never re-signed.  A
/// `--assert type` on a stack local and on a register local, and a DWARF local
/// the source declares `unsigned long`, keep that type and the `(long)` their
/// signed comparison needs, option on as off.  Unlocked, the same variables are
/// declared `long`, so each case also checks that the option fires there.
/// `boolreturn` is pinned off: since a43d3535b7 it is on by default and prints
/// the `if (c) return 1;` shapes these checks read as `return (c);`.
#[test]
fn castsign_leaves_a_locked_declaration_alone() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let unsigned_stack: &[&str] = &[
        "\n  unsigned long v1; // stack - 0x10",
        "if (0 <= (long)v1)\n    return 1;",
    ];
    let signed_stack: &[&str] = &[
        "\n  long v1; // stack - 0x10",
        "if (0 <= v1)\n    return 1;",
    ];
    let unsigned_reg: &[&str] = &[
        "\n  unsigned long v1; // rax",
        "if ((long)v1 < (long)strlen(a0))",
    ];
    let signed_reg: &[&str] = &["\n  long v1; // rax", "if (v1 < (long)strlen(a0))"];
    // (fixture, function, assertion, printed unlocked with the option on, printed locked)
    let asserted = [
        (
            "castsign_wrap_gcc_O0_x86_64",
            "sign_of",
            "type v1 unsigned long",
            signed_stack,
            unsigned_stack,
        ),
        (
            "castsign_wrap_gcc_O1_x86_64",
            "peek",
            "type v1 unsigned long",
            signed_reg,
            unsigned_reg,
        ),
    ];
    for (name, func, assertion, unlocked, locked) in asserted {
        let bin = fixture(name);
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile",
            &bin,
            func,
            "--sleighpath",
            &sp,
            "--option",
            "castsign",
            "on",
            "--option",
            "boolreturn",
            "off",
        ]);
        assert!(ok, "unlace decompile failed: {stderr}");
        let semantic = without_variable_sources(&stdout);
        for want in unlocked {
            assert!(
                semantic.contains(&without_variable_sources(want)),
                "{name} {func} unlocked does not print `{want}`:\n{stdout}"
            );
        }
        for opt in ["on", "off"] {
            let args = [
                "decompile",
                bin.as_str(),
                func,
                "--sleighpath",
                sp.as_str(),
                "--assert",
                assertion,
                "--option",
                "castsign",
                opt,
                "--option",
                "boolreturn",
                "off",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile --assert failed: {stderr}");
            let semantic = without_variable_sources(&stdout);
            for want in locked {
                assert!(
                    semantic.contains(&without_variable_sources(want)),
                    "{name} {func} under `{assertion}`, option {opt}, does not print `{want}`:\n{stdout}"
                );
            }
        }
    }
    let dwarf = fixture("castsign_dwarf_gcc_O0_x86_64");
    let locked: &[&str] = &[
        "\n  unsigned long n; // stack - 0x10",
        "if (0 <= (long)n)\n    return 1;",
    ];
    for opt in ["on", "off"] {
        let args = [
            "decompile-all",
            dwarf.as_str(),
            "--functions",
            "sign_of",
            "--sleighpath",
            sp.as_str(),
            "--option",
            "castsign",
            opt,
            "--option",
            "boolreturn",
            "off",
        ];
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let semantic = without_variable_sources(&stdout);
        for want in locked {
            assert!(
                semantic.contains(&without_variable_sources(want)),
                "the DWARF local, option {opt}, does not print `{want}`:\n{stdout}"
            );
        }
    }
    let dir = std::env::temp_dir().join(format!("unlace-castsign-lock-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let stripped = dir.join("sign_of");
    let strip = process::optional_output(Command::new("objcopy").args([
        "--strip-debug",
        dwarf.as_str(),
        stripped.to_str().unwrap(),
    ]));
    if strip.is_some() {
        let args = [
            "decompile-all",
            stripped.to_str().unwrap(),
            "--functions",
            "sign_of",
            "--sleighpath",
            sp.as_str(),
            "--option",
            "castsign",
            "on",
            "--option",
            "boolreturn",
            "off",
        ];
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(
            ok,
            "unlace decompile-all (debug info stripped) failed: {stderr}"
        );
        let semantic = without_variable_sources(&stdout);
        for want in signed_stack {
            assert!(
                semantic.contains(&without_variable_sources(want)),
                "stripped, the slot does not print `{want}`:\n{stdout}"
            );
        }
    } else {
        eprintln!("castsign stripped-DWARF check: no `objcopy`");
    }
    let _ = std::fs::remove_dir_all(&dir);
}

/// A pointer plus a constant that is a whole number of elements prints as
/// pointer arithmetic under `castarith`, `((unsigned int *)a0)[0x2b]` with one
/// cast, instead of the integer round trip `*(unsigned int *)((long)a0 +
/// 0xac)`.  The round trip compiles every function between the `tested`
/// markers of `castarith_x86_64.c` exactly as printed, between the fixture's
/// own prelude and `main`, for the gcc -O0, clang -O0 and gcc -O2 builds with
/// the option on and off, and checks the program prints what the binary does:
/// loads and stores of 1, 2, 4 and 8 bytes signed and unsigned, a double, a
/// negative offset, an offset that is not whole elements (kept), a pointer
/// passed on, compared, and stepped in a loop, a base typed as another pointer,
/// a record base, which keeps its fields, loaded bytes and words widened under
/// the subscript, an integer base, which keeps the integer form, and negative
/// indexes of 2^31 elements or more, which keep it too: C reads the literal
/// `0x80000000` as an `unsigned int`, so `p[-0x80000000]` would point forward.
/// `main` reads those through a 48 GiB `MAP_NORESERVE` map, and prints the same
/// line in the binary and the round trip when the map is refused.
/// `structheadless` is held off: it gives `wide_cmp`'s `void *` a synthesized
/// record for its two byte reads (0x11 and 0x13), so no subscript is left to
/// check there.
#[test]
fn a_pointer_plus_whole_elements_round_trips_through_the_printed_c() {
    let fx = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let src = std::fs::read_to_string(fx.join("castarith_x86_64.c")).unwrap();
    let section = |from: &str, to: &str| -> String {
        let tail = src.split(from).nth(1).unwrap();
        tail.split(to).next().unwrap().to_string()
    };
    let prelude = section("/* prelude */", "/* tested */");
    let tested_src = section("/* tested */", "/* main */");
    let main = src.split("/* main */").nth(1).unwrap().to_string();
    let tested: Vec<&str> = tested_src
        .lines()
        .filter_map(|l| l.strip_prefix("KEEP void "))
        .filter_map(|l| l.split('(').next())
        .collect();
    assert!(tested.len() >= 24, "{tested:?}");
    let sp = specs();
    let runs_here = cfg!(all(target_os = "linux", target_arch = "x86_64"));
    let have_cc = process::optional_output(Command::new("cc").arg("--version")).is_some();
    for build in ["gcc_O0", "clang_O0", "gcc_O2"] {
        let bin = fx.join(format!("castarith_{build}_x86_64"));
        let bin = bin.to_str().unwrap();
        for arm in ["on", "off"] {
            let args = [
                "decompile-all",
                bin,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "structdefs",
                "on",
                "--option",
                "castarith",
                arm,
                "--option",
                "structheadless",
                "off",
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            let mut body = String::new();
            let mut seen = 0;
            for part in stdout.split("// Function: ").skip(1) {
                let name = part.split(' ').next().unwrap_or("");
                if tested.contains(&name) {
                    body.push_str(part.split_once('\n').map(|(_, b)| b).unwrap_or(""));
                    seen += 1;
                }
            }
            assert_eq!(
                seen,
                tested.len(),
                "{build} {arm}: missing a tested function\n{stdout}"
            );
            let want: &[&str] = if arm == "on" {
                &[
                    "((short *)a0)[-0xd]",
                    "take(&((unsigned int *)a0)[4]);",
                    "((long *)a0)[0x11] = a1 * 7;",
                    "((unsigned int *)a0)[-1] = 0xfeed;",
                    "((unsigned short *)a0)[3]",
                    "&((char *)",
                    "*(unsigned int *)((long)a0 + 0x6a)",
                    "a1 <= (int)((unsigned char *)a0)[0x11]",
                    "((unsigned short *)a0)[0x24] << 4",
                    "long *)a0)[-0x7fffffff]",
                    "long *)a0)[0x80000000]",
                    "long *)((long)a0 + -0x400000000)",
                    "long *)((long)a0 + -0x7fffffff8)",
                    "*(int *)((long)a0 + -0x200000000)",
                    "*(short *)((long)a0 + -0x100000000)",
                ]
            } else {
                &[
                    "take((unsigned int *)((long)a0 + 0x10));",
                    "*(unsigned int *)((long)a0 + 0x6a)",
                ]
            };
            for w in want {
                assert!(
                    body.contains(w),
                    "{build} castarith {arm}: expected `{w}`\n{body}"
                );
            }
            for wide in ["[-0x80000000]", "[-0xffffffff]"] {
                assert!(
                    !body.contains(wide),
                    "{build} castarith {arm}: C reads the index `{wide}` as unsigned, so it points forward\n{body}"
                );
            }
            assert!(
                !body.contains("(unsigned int)((unsigned char *)"),
                "{build} castarith {arm}: a widening castimplied leaves out came back over a subscript\n{body}"
            );
            if !runs_here || !have_cc {
                eprintln!("castarith round trip: no x86-64 host or no `cc`, spelling checked only");
                continue;
            }
            let expected = process::required_output(&mut Command::new(bin));
            let dir = std::env::temp_dir().join(format!(
                "unlace-castarith-rt-{}-{build}-{arm}",
                std::process::id()
            ));
            std::fs::create_dir_all(&dir).unwrap();
            let c = dir.join("rt.c");
            let exe = dir.join("rt");
            std::fs::write(
                &c,
                format!("#include <stdio.h>\n#include <string.h>\n#include <stdbool.h>\n{prelude}\n{body}\n{main}"),
            )
            .unwrap();
            let cc = Command::new("cc")
                .args([
                    "-std=gnu11",
                    "-w",
                    "-o",
                    exe.to_str().unwrap(),
                    c.to_str().unwrap(),
                ])
                .args(common::CC_GCC15_DEMOTE)
                .output()
                .expect("spawn cc");
            assert!(
                cc.status.success(),
                "{build} castarith {arm}: the printed functions did not compile:\n{}\n{body}",
                String::from_utf8_lossy(&cc.stderr)
            );
            let got = process::required_output(&mut Command::new(&exe));
            let _ = std::fs::remove_dir_all(&dir);
            assert_eq!(
                String::from_utf8_lossy(&got.stdout),
                String::from_utf8_lossy(&expected.stdout),
                "{build} castarith {arm}: the printed C computes something else\n{body}"
            );
        }
    }
}

/// `castindex`: a pointer plus a variable index of whole elements prints as a
/// subscript, and the difference of two `char *` as `p - q`.  The round trip
/// compiles the prelude of `castindex_x86_64.c`, unlace's printing of every
/// function between its markers and its `main`, with the option on and off, and
/// checks the program prints what the binary does.  The indexes are `int`,
/// `unsigned int`, `short`, `signed char`, `unsigned char` and `long`, negative
/// where signed, and `main` reads an `unsigned int` index with its top bit set
/// through a 24 GiB `MAP_NORESERVE` map, which a sign extension would read 2^31
/// elements backward; the differences are divided, shifted, compared signed and
/// unsigned, and passed as a length.  A scale that is not the element's size, a
/// byte offset read at 8 bytes and a `long *` difference keep the integer form.
/// A base64 decoder indexes its `malloc`ed global table by input bytes of 0x80
/// and up, into a filler with the sign bit set, and checksums every quad.
/// `castwiden` is held off: it leaves out some of the widenings pinned here,
/// which `an_implied_widening_round_trips_through_the_printed_c` covers.
#[test]
fn a_variable_index_and_a_byte_pointer_difference_round_trip_through_the_printed_c() {
    let fx = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let src = std::fs::read_to_string(fx.join("castindex_x86_64.c")).unwrap();
    let section = |from: &str, to: &str| -> String {
        let tail = src.split(from).nth(1).unwrap();
        tail.split(to).next().unwrap().to_string()
    };
    let prelude = section("/* prelude */", "/* tested */");
    let tested_src = section("/* tested */", "/* main */");
    let main = src.split("/* main */").nth(1).unwrap().to_string();
    let tested: Vec<&str> = tested_src
        .lines()
        .filter_map(|l| l.strip_prefix("KEEP void "))
        .filter_map(|l| l.split('(').next())
        .collect();
    assert!(tested.len() >= 20, "{tested:?}");
    let sp = specs();
    let runs_here = cfg!(all(target_os = "linux", target_arch = "x86_64"));
    let have_cc = process::optional_output(Command::new("cc").arg("--version")).is_some();
    for build in ["gcc_O0", "clang_O0", "gcc_O2"] {
        let bin = fx.join(format!("castindex_{build}_x86_64"));
        let bin = bin.to_str().unwrap();
        // The spellings are pinned with `elemptr` off, which leaves the bases
        // `void *` for this option to rewrite; with it on (the default) P5 types
        // them first, and the printed C must still compute the same values.
        for (elem, arm) in [("off", "on"), ("off", "off"), ("on", "on"), ("on", "off")] {
            let args = [
                "decompile-all",
                bin,
                "--sleighpath",
                sp.as_str(),
                "--option",
                "castindex",
                arm,
                "--option",
                "castwiden",
                "off",
                "--option",
                "elemptr",
                elem,
            ];
            let (stdout, stderr, ok) = run_unlace(&args);
            assert!(ok, "unlace decompile-all failed: {stderr}");
            let mut body = String::new();
            let mut seen = 0;
            for part in stdout.split("// Function: ").skip(1) {
                let name = part.split(' ').next().unwrap_or("");
                if tested.contains(&name) {
                    body.push_str(part.split_once('\n').map(|(_, b)| b).unwrap_or(""));
                    seen += 1;
                }
            }
            assert_eq!(
                seen,
                tested.len(),
                "{build} {arm}: missing a tested function\n{stdout}"
            );
            let kept: &[&str] = &[
                "*(long *)((long)a0 + (long)a1 * 0x10 + 8)",
                "*(int *)((long)a0 + (long)a1 * 0xc)",
                "*(long *)((long)a0 + a1)",
                "(long)a1 - (long)a0 >> 3",
            ];
            let want: &[&str] = if arm == "on" {
                &[
                    "((char *)a0)[a1]",
                    "((short *)a0)[a1]",
                    "((unsigned short *)a0)[a1]",
                    "((unsigned int *)a0)[a1]",
                    "((unsigned long *)a0)[a1]",
                    "((double *)a0)[a1]",
                    "strchr(a0,a1) - a0",
                    "((char *)b64_table)[",
                ]
            } else {
                &[
                    "(long)strchr(a0,a1) - (long)a0",
                    "*(short *)((long)a0 + (long)a1 * 2)",
                    "(long)b64_table",
                ]
            };
            if elem == "off" {
                for w in want.iter().chain(kept) {
                    assert!(
                        body.contains(w),
                        "{build} castindex {arm}: expected `{w}`\n{body}"
                    );
                }
                if arm == "on" {
                    assert!(
                        !body.contains("(long)b64_table"),
                        "{build}: the table lookup kept its round trip\n{body}"
                    );
                }
            }
            if !runs_here || !have_cc {
                eprintln!("castindex round trip: no x86-64 host or no `cc`, spelling checked only");
                continue;
            }
            let expected = process::required_output(&mut Command::new(bin));
            let dir = std::env::temp_dir().join(format!(
                "unlace-castindex-rt-{}-{build}-{elem}-{arm}",
                std::process::id()
            ));
            std::fs::create_dir_all(&dir).unwrap();
            let c = dir.join("rt.c");
            let exe = dir.join("rt");
            std::fs::write(
                &c,
                format!("#include <stdio.h>\n#include <string.h>\n#include <stdbool.h>\n{prelude}\n{body}\n{main}"),
            )
            .unwrap();
            let cc = Command::new("cc")
                .args([
                    "-std=gnu11",
                    "-w",
                    "-o",
                    exe.to_str().unwrap(),
                    c.to_str().unwrap(),
                ])
                .args(common::CC_GCC15_DEMOTE)
                .output()
                .expect("spawn cc");
            assert!(
                cc.status.success(),
                "{build} castindex {arm}: the printed functions did not compile:\n{}\n{body}",
                String::from_utf8_lossy(&cc.stderr)
            );
            let got = process::required_output(&mut Command::new(&exe));
            let _ = std::fs::remove_dir_all(&dir);
            assert_eq!(
                String::from_utf8_lossy(&got.stdout),
                String::from_utf8_lossy(&expected.stdout),
                "{build} castindex {arm}: the printed C computes something else\n{body}"
            );
        }
    }
}

/// An enum element keeps the integer form under `castarith`.  unlace prints every
/// enum as a plain `enum`, which C sizes as an `int`, while the fixture's
/// packed enums are 1 and 2 bytes in the binary (as are `-fshort-enums` enums
/// and a C++ `enum class : uint8_t`), so `((color *)p)[3]` would read 12 bytes
/// past `p` instead of 3.  The round trip compiles unlace's own enum typedefs,
/// the prelude of `castarith_enum_x86_64.c` (whose callees read the width the
/// binary passes), the printed functions between its markers and its `main`,
/// with the option on and off, and checks the program prints what the binary
/// does.  The C++ build is checked for spelling only.
#[test]
fn an_enum_element_keeps_the_integer_form_and_round_trips() {
    let fx = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let src = std::fs::read_to_string(fx.join("castarith_enum_x86_64.c")).unwrap();
    let section = |from: &str, to: &str| -> String {
        let tail = src.split(from).nth(1).unwrap();
        tail.split(to).next().unwrap().to_string()
    };
    let prelude = section("/* prelude */", "/* tested */");
    let tested_src = section("/* tested */", "/* main */");
    let main = src.split("/* main */").nth(1).unwrap().to_string();
    let tested: Vec<&str> = tested_src
        .lines()
        .filter_map(|l| l.strip_prefix("KEEP void "))
        .filter_map(|l| l.split('(').next())
        .collect();
    assert_eq!(tested.len(), 4, "{tested:?}");
    let sp = specs();
    let runs_here = cfg!(all(target_os = "linux", target_arch = "x86_64"));
    let have_cc = process::optional_output(Command::new("cc").arg("--version")).is_some();
    let decompile = |bin: &str, arm: &str| -> String {
        let args = [
            "decompile-all",
            bin,
            "--sleighpath",
            sp.as_str(),
            "--option",
            "structdefs",
            "on",
            "--option",
            "castarith",
            arm,
        ];
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        stdout
    };
    let cxx = fx.join("castarith_enumclass_gpp_O2_x86_64");
    let out = decompile(cxx.to_str().unwrap(), "on");
    let rd = out
        .split("// Function: rd_enum_class ")
        .nth(1)
        .expect("rd_enum_class printed");
    let rd = rd.split("// Function: ").next().unwrap();
    for w in [
        "use_kind(*(Kind *)((long)p + 5));",
        "use_op(*(Op *)((long)p + 6));",
    ] {
        assert!(rd.contains(w), "enum class: expected `{w}`\n{rd}");
    }
    for build in ["gcc_O0", "gcc_O2"] {
        let bin = fx.join(format!("castarith_enum_{build}_x86_64"));
        let bin = bin.to_str().unwrap();
        for arm in ["on", "off"] {
            let stdout = decompile(bin, arm);
            let mut types: Vec<String> = Vec::new();
            let mut body = String::new();
            let mut seen = 0;
            for part in stdout.split("// Function: ").skip(1) {
                let name = part.split(' ').next().unwrap_or("");
                if !tested.contains(&name) {
                    continue;
                }
                seen += 1;
                let mut block: Option<String> = None;
                for line in part.lines().skip(1) {
                    if let Some(b) = block.as_mut() {
                        b.push_str(line);
                        b.push('\n');
                        if line.starts_with('}') && line.ends_with(';') {
                            let b = block.take().unwrap();
                            if !types.contains(&b) {
                                types.push(b);
                            }
                        }
                    } else if line.starts_with("typedef") && line.ends_with('{') {
                        block = Some(format!("{line}\n"));
                    } else {
                        body.push_str(line);
                        body.push('\n');
                    }
                }
            }
            assert_eq!(
                seen,
                tested.len(),
                "{build} {arm}: missing a tested function\n{stdout}"
            );
            assert_eq!(
                types.len(),
                3,
                "{build} {arm}: expected unlace's color, mark and level\n{stdout}"
            );
            for w in [
                "use_color(*(color *)((long)p + 3));",
                "use_mark(*(mark *)((long)p + 6));",
                "use_level(*(level *)((long)p + 8));",
                "set_color((color *)((long)p + 5));",
            ] {
                assert!(
                    body.contains(w),
                    "{build} castarith {arm}: expected `{w}`\n{body}"
                );
            }
            if !runs_here || !have_cc {
                eprintln!(
                    "castarith enum round trip: no x86-64 host or no `cc`, spelling checked only"
                );
                continue;
            }
            let expected = process::required_output(&mut Command::new(bin));
            let dir = std::env::temp_dir().join(format!(
                "unlace-castarith-enum-rt-{}-{build}-{arm}",
                std::process::id()
            ));
            std::fs::create_dir_all(&dir).unwrap();
            let c = dir.join("rt.c");
            let exe = dir.join("rt");
            std::fs::write(
                &c,
                format!(
                    "#include <stdio.h>\n#define UNLACE_RT\n{}\n{prelude}\n{body}\n{main}",
                    types.concat()
                ),
            )
            .unwrap();
            let cc = Command::new("cc")
                .args([
                    "-std=gnu11",
                    "-w",
                    "-o",
                    exe.to_str().unwrap(),
                    c.to_str().unwrap(),
                ])
                .args(common::CC_GCC15_DEMOTE)
                .output()
                .expect("spawn cc");
            assert!(
                cc.status.success(),
                "{build} castarith {arm}: the printed functions did not compile:\n{}\n{body}",
                String::from_utf8_lossy(&cc.stderr)
            );
            let got = process::required_output(&mut Command::new(&exe));
            let _ = std::fs::remove_dir_all(&dir);
            assert_eq!(
                String::from_utf8_lossy(&got.stdout),
                String::from_utf8_lossy(&expected.stdout),
                "{build} castarith {arm}: the printed C computes something else\n{body}"
            );
        }
    }
}
