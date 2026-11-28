//! Floats in integer registers, compiled and run from the printed C.

use super::*;

/// On MIPS o32 `h(int, float)` takes its float in a general register, and each
/// `g*` hands it a word's bits while also adding, comparing, truncating or
/// storing that word as an integer.  A float vote there printed `(int)v1 + 3`,
/// `(short)((unsigned int)v1 >> 0x10)` and `a2[1] = (int)v1` -- value conversions
/// where the machine moves bits -- so it is refused.  The round trip compiles the
/// seven printed callers (`-no-pie`, so the array's address survives the printed
/// 32-bit `(int)a1 + 0xc`) against a bit-preserving `h` and compares them with the
/// source.
#[test]
fn a_float_in_a_general_register_keeps_its_integer_uses_round_trip() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_floatgpr_mipsel")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--option",
        "structdefs",
        "on",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "return (int)h(a0,v1) + v1 + 3;",
        "(unsigned int)(v1 < 0x3fc00000)",
        "if (v1 == 0x3fc00001)",
        "(unsigned int)(0x3fc00000 < v1)",
        "*a2 = (short)(v1 >> 0x10);",
        "a2[1] = v1 >> 0x10;",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    assert!(
        stdout.contains("a2[1] = v1;") || stdout.contains("a2->field_0x4 = v1;"),
        "missing the bitwise store of v1:\n{stdout}"
    );
    for bad in ["float v1;", "1.5000001"] {
        assert!(!stdout.contains(bad), "`{bad}` printed:\n{stdout}");
    }
    let converts_v1 = |cast: &str, shift_ok: bool| {
        stdout.match_indices(cast).any(|(i, m)| {
            let rest = &stdout[i + m.len()..];
            !rest.starts_with(|c: char| c.is_ascii_digit())
                && !(shift_ok && rest.starts_with(" >>"))
        })
    };
    assert!(
        !converts_v1("(int)v1", false),
        "`(int)v1` printed:\n{stdout}"
    );
    assert!(
        !converts_v1("(unsigned int)v1", true),
        "`(unsigned int)v1` printed:\n{stdout}"
    );

    let compilers: Vec<&str> = ["gcc", "clang"]
        .into_iter()
        .filter(|cc| process::optional_output(Command::new(cc).arg("--version")).is_some())
        .collect();
    assert!(
        !compilers.is_empty(),
        "protoorder float-in-GPR round trip requires a C compiler"
    );
    let printed = printed_functions(
        &stdout,
        &["g3 ", "g5 ", "g6 ", "g9 ", "g20 ", "g22 ", "g24 "],
    );
    let dir = std::env::temp_dir().join(format!(
        "unlace-protoorder-floatgpr-rt-{}",
        std::process::id()
    ));
    std::fs::create_dir_all(&dir).unwrap();
    let src = dir.join("rt.c");
    let exe = dir.join("rt");
    std::fs::write(
        &src,
        format!(
            "#include <stdio.h>\n#include <string.h>\n\
             static float hs(int k, float x) {{ return x * 2.5f + (float)k; }}\n\
             static float h(int k, int bits) {{ float x; memcpy(&x, &bits, 4); return hs(k, x); }}\n\
             {printed}\n\
             static float fb(int b) {{ float f; memcpy(&f, &b, 4); return f; }}\n\
             static int s3(int k, int *p) {{ int b = p[3]; return (int)hs(k, fb(b)) + b + 3; }}\n\
             static int s5(int k, int *p) {{ int b = p[3]; return (int)hs(k, fb(b)) + (b < 0x3fc00000); }}\n\
             static int s6(int k, int *p) {{ int b = p[3]; return (int)hs(k, fb(b)) + (b == 0x3fc00001) * 100; }}\n\
             static unsigned s9(int k, unsigned *p) {{ unsigned b = p[3]; \
             return (unsigned)hs(k, fb((int)b)) + (b > 0x3fc00000u); }}\n\
             static int s20(int k, int *p, unsigned short *q) {{ int b = p[3]; int r = (int)hs(k, fb(b)); \
             *q = (short)(b >> 16); return r; }}\n\
             static int s22(int k, int *p, char *q) {{ int b = p[3]; int r = (int)hs(k, fb(b)); \
             q[0] = (char)(b >> 8); q[1] = (char)(b >> 16); return r; }}\n\
             static unsigned s24(int k, int *p, int *q) {{ int b = p[3]; float r = hs(k, fb(b)); \
             q[1] = b; q[0] = (int)r; return 0; }}\n\
             static int arr[4] = {{1, 2, 3, 0x3fc00001}};\n\
             static int bits[4] = {{1, 2, 3, 0x3fc01234}};\n\
             static void run(int use_printed) {{\n  \
             void *a = arr, *b = bits;\n  \
             unsigned short s = 0; char c[2] = {{0, 0}}; int q[2] = {{0, 0}}; int r20, r22, r24;\n  \
             if (use_printed) {{\n    \
             printf(\"%d %d %d %u \", g3(7, a), g5(7, a), g6(7, a), (unsigned)g9(7, a));\n    \
             r20 = g20(7, b, &s); r22 = g22(7, b, c); r24 = (int)g24(7, b, (void *)q);\n  \
             }} else {{\n    \
             printf(\"%d %d %d %u \", s3(7, arr), s5(7, arr), s6(7, arr), s9(7, (unsigned *)arr));\n    \
             r20 = s20(7, bits, &s); r22 = s22(7, bits, c); r24 = (int)s24(7, bits, q);\n  \
             }}\n  \
             printf(\"%d %04x %d %02x %02x %d %d %x\\n\", r20, s, r22, (unsigned char)c[0], (unsigned char)c[1], \
             r24, q[0], q[1]);\n\
             }}\n\
             int main(void) {{\n  run(1);\n  run(0);\n  return 0;\n}}\n"
        ),
    )
    .unwrap();
    for cc in &compilers {
        for level in ["-O0", "-O2"] {
            let compiled = Command::new(cc)
                .args(["-std=gnu11", "-w", "-fno-pie", "-no-pie", level])
                .args(common::CC_GCC15_DEMOTE)
                .args(["-o", exe.to_str().unwrap(), src.to_str().unwrap()])
                .output()
                .expect("spawn the C compiler");
            assert!(
                compiled.status.success(),
                "{cc} {level} rejected the printed callers:\n{}",
                String::from_utf8_lossy(&compiled.stderr)
            );
            let run = process::required_output(&mut Command::new(&exe));
            let got = String::from_utf8_lossy(&run.stdout);
            let lines: Vec<&str> = got.lines().collect();
            assert_eq!(lines.len(), 2, "{cc} {level}: {got}");
            assert_eq!(
                lines[0], lines[1],
                "{cc} {level}: printed callers compute different values:\n{printed}"
            );
        }
    }
    let _ = std::fs::remove_dir_all(&dir);
}

/// `size` bytes of the fixture image at virtual address `vaddr`.
fn image_bytes(path: &str, vaddr: u64, size: usize) -> Vec<u8> {
    use object::{Object, ObjectSection};
    let data = std::fs::read(path).unwrap();
    let file = object::File::parse(data.as_slice()).unwrap();
    let section = file
        .sections()
        .find(|s| s.address() <= vaddr && vaddr + size as u64 <= s.address() + s.size())
        .unwrap_or_else(|| panic!("no section holds 0x{vaddr:x}"));
    let at = (vaddr - section.address()) as usize;
    section.data().unwrap()[at..at + size].to_vec()
}

/// The bits of a value of any printed type, for a round trip that compares
/// what a function hands back whatever type it was printed with.
const BITS: &str = "#define BITS(e) ({ __typeof__(e) r_ = (e); unsigned long long u_ = 0; \
                    memcpy(&u_, &r_, sizeof r_ < 8 ? sizeof r_ : 8); u_; })\n";

/// `floatret_x86_64` (clang -O0): `qnan` returns `nanf("")` through the import
/// stub, `pick` returns `x < 0 ? qnan() : x * 2`, `wrapd` and `wrapi` hand back
/// what their callee returned (`call; ret`), and `getf`/`getd` return a global
/// in `xmm0`. Before, `qnan`, `wrapd` and `wrapi` were `void` while their callers
/// read the result -- `v1 = (float)sub_1150()`, which no compiler accepts. The
/// stub's jump returns the stub's float without a conversion, and `getf` stays
/// `unsigned int`: one declaration of the global serves every function, and
/// another may read it as an integer. `idf` returns its argument and stays an
/// `unsigned int` of one: what it receives is its callers' to type. The printed
/// functions, the stub included, are compiled against the fixture's own data
/// and hand back the bits the fixture computes.
#[test]
fn a_float_register_return_and_a_read_void_result_round_trip() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "float nanf(char *a0)",
        "float sub_1150(void)",
        "return nanf((char *)0x203d);",
        "v1 = sub_1150();",
        "unsigned int sub_11c0(void)",
        "unsigned long sub_11d0(void)",
        "unsigned long sub_11e0(void)",
        "return sub_11d0();",
        "unsigned int sub_11f0(unsigned int a0)",
        "int sub_1210(void)",
        "return sub_1200();",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    for bad in ["(float)(*dat_4018)", "(float)sub_1150"] {
        assert!(!stdout.contains(bad), "`{bad}` printed:\n{stdout}");
    }
    let names = [
        "nanf ",
        "sub_1150 ",
        "sub_1170 ",
        "sub_11c0 ",
        "sub_11d0 ",
        "sub_11e0 ",
        "sub_11f0 ",
        "sub_1200 ",
        "sub_1210 ",
    ];
    let printed = printed_functions(&stdout, &names);
    let mut globals = String::new();
    let mut init = String::new();
    for (name, ty, addr, size) in [
        ("dat_2004", "float", 0x2004u64, 4usize),
        ("dat_4038", "unsigned int", 0x4038, 4),
        ("dat_4040", "unsigned long", 0x4040, 8),
        ("dat_4048", "int", 0x4048, 4),
    ] {
        let bytes: Vec<String> = image_bytes(&bin, addr, size)
            .iter()
            .map(|b| b.to_string())
            .collect();
        globals.push_str(&format!(
            "{ty} {name};\nstatic const unsigned char {name}_b[{size}] = {{{}}};\n",
            bytes.join(",")
        ));
        init.push_str(&format!("  memcpy(&{name}, {name}_b, sizeof {name});\n"));
    }
    // The stub carries libc's `nanf` prototype (`typelib`); the macro hands its
    // caller's call and the definition to a stub of no parameters.
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n{BITS}#define nanf(...) nanf_stub()\n\
         static float target(void) {{ return __builtin_nanf(\"\"); }}\nfloat (*dat_4018)(void) = target;\n{globals}{printed}\n\
         int main(void) {{\n{init}  printf(\"%llx %llx %llx %llx %llx %llx %llx\\n\", BITS(sub_1170(3.0f)), BITS(sub_1170(-3.0f)), \
         BITS(sub_11c0()), BITS(sub_11d0()), BITS(sub_11e0()), BITS(sub_11f0({})), BITS(sub_1210()));\n  return 0;\n}}\n",
        arg_of_bits(&printed, "sub_11f0", 0, 0x3fa0_0000)
    );
    for (cc, got) in compile_and_run_each("floatret-x86_64", &src) {
        assert_eq!(
            got, "40c00000 7fc00000 3fc00000 4002000000000000 4002000000000000 3fa00000 2a",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
}

/// `floatret_wrap_{gcc,clang}_O0`: `set_tz` and `restore_cwd` return what one
/// of two calls returns in `eax`, `gi_as_f`/`set_gi_bits` move a float's bits
/// through the `int` global `gi` that `use_gi` computes with, and `wrapneg`,
/// `wrapabs`, `wrapnegd` and `twice` hand back the result of a callee whose
/// recovery computes on the bits (`xorps`, `andps`) and returns an integer.
/// Before, `set_tz` returned the rest of `rax` it never set (`unsigned long`,
/// `return v2;`), `gi_as_f` returned `gi` converted to a float, and the wrappers
/// returned `(float)absf(a0)` -- each a value the binary does not compute. The
/// printed functions are compiled and must hand back the fixture's bits.
#[test]
fn a_wrapper_returns_its_callees_result_round_trip() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let bin = fixture("floatret_wrap_gcc_O0");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "int set_tz(char *a0)",
        "int restore_cwd(int a0,char *a1)",
        "unsigned int gi_as_f(void)",
        "void set_gi_bits(unsigned int a0)",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    let printed = printed_functions(
        &stdout,
        &[
            "set_tz ",
            "chdir_long ",
            "restore_cwd ",
            "gi_as_f ",
            "set_gi_bits ",
            "use_gi ",
        ],
    );
    assert!(
        !printed.contains("CONCAT"),
        "a return pieces in bits no path sets:\n{printed}"
    );
    let src = format!(
        "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <unistd.h>\n{BITS}int gi = 0x3fc00000;\n{printed}\n\
         int main(void) {{\n  int r = set_tz(NULL), s = restore_cwd(-1, \"/tmp\");\n  unsigned long long g = BITS(gi_as_f());\n  \
         set_gi_bits(0xc0f00000u);\n  printf(\"%d %d %llx %x\\n\", r, s, g, use_gi());\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-wrap-gcc", &src) {
        assert_eq!(
            got, "0 3 3fc00000 c0f00001",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }

    let bin = fixture("floatret_wrap_clang_O0");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "unsigned int wrapneg(unsigned int a0)",
        "unsigned int wrapabs(unsigned int a0)",
        "unsigned long wrapnegd(unsigned long a0)",
        "unsigned int twice(unsigned int a0)",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    let names = [
        "negf ",
        "absf ",
        "negd ",
        "wrapneg ",
        "wrapabs ",
        "wrapnegd ",
        "twice ",
    ];
    let printed = printed_functions(&stdout, &names);
    for bad in ["(float)", "(double)"] {
        assert!(
            !printed.contains(bad),
            "`{bad}` converts a callee's bits:\n{printed}"
        );
    }
    let mut globals = String::new();
    let mut init = String::new();
    for line in printed.lines() {
        for word in line.split(|c: char| !c.is_ascii_alphanumeric() && c != '_') {
            let Some(addr) = word
                .strip_prefix("dat_")
                .and_then(|h| u64::from_str_radix(h, 16).ok())
            else {
                continue;
            };
            if globals.contains(&format!(" {word};")) {
                continue;
            }
            let bytes: Vec<String> = image_bytes(&bin, addr, 8)
                .iter()
                .map(|b| b.to_string())
                .collect();
            globals.push_str(&format!(
                "unsigned long {word};\nstatic const unsigned char {word}_b[8] = {{{}}};\n",
                bytes.join(",")
            ));
            init.push_str(&format!("  memcpy(&{word}, {word}_b, 8);\n"));
        }
    }
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n{BITS}{globals}{printed}\n\
         int main(void) {{\n{init}  printf(\"%llx %llx %llx %llx\\n\", BITS(wrapneg(0x3fc00000u)) & 0xffffffff, \
         BITS(wrapabs(0xbfa00000u)) & 0xffffffff, BITS(wrapnegd(0x3ff8000000000000ul)), BITS(twice(0x40400000u)) & 0xffffffff);\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-wrap-clang", &src) {
        assert_eq!(
            got, "bfc00000 3fa00000 bff8000000000000 40400000",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }

    // gcc -O2 tail-jumps to the callee; the wrapper takes no parameter of its own
    // (a separate gap), so this one is checked as text: the callee's integer bits
    // are returned as they are, not converted.
    let bin = fixture("floatret_wrap_gcc_O2");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "unsigned long wrapneg(void)",
        "return negf(); // tail-call",
        "unsigned long wrapnegd(void)",
        "return negd(); // tail-call",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    let printed = printed_functions(&stdout, &["wrapneg ", "wrapabs ", "wrapnegd ", "twice "]);
    for bad in ["(float)", "(double)"] {
        assert!(
            !printed.contains(bad),
            "`{bad}` converts a callee's bits:\n{printed}"
        );
    }
}

/// `floatret_stale_gcc_O0` (gcc -O0): `find` and `slot` hand back what `lookup`
/// and `slot_of` return (`call; ret`), and `set_e`, `get_c`, `put` and `take`
/// reach a field through that result. `find` was `void`, so its callers printed
/// `*(unsigned int *)(find(a0) + 0x20) = a1`, which does not compile; once the
/// redo made `find` return `long *`, callers decompiled before it kept that
/// text, which C scales by the pointee and writes 0x100 bytes past the record.
/// Every reader of a function whose return a redo changed is decompiled again,
/// and a caller that keeps the result as another class converts it. The
/// printed functions, compiled against the fixture's own `lookup` and
/// `slot_of`, compute what the fixture prints.
#[test]
fn a_reader_of_a_redone_wrapper_round_trips() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_stale_gcc_O0")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--option",
        "structdefs",
        "on",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "long * find(unsigned int a0)",
        "long * slot(unsigned int a0)",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    let printed = printed_functions(
        &stdout,
        &["find ", "set_e ", "get_c ", "slot ", "put ", "take "],
    );
    for bad in ["find(a0) + ", "slot(a0) + "] {
        assert!(
            !printed.contains(bad),
            "`{bad}` is arithmetic C scales by the pointee:\n{printed}"
        );
    }
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n\
         struct rec {{ long a, b, c, d; unsigned int e, f; }};\nstruct rec table[4];\nlong *slots[4];\nstatic long store[4][4];\n\
         long *lookup(unsigned int k) {{ struct rec *r = &table[k & 3]; r->d = r->a + r->b; return (long *)r; }}\n\
         long *slot_of(unsigned int k) {{ long *p = slots[k & 3]; p[1] = p[0] + 1; return p; }}\n{printed}\n\
         int main(void) {{\n  for (int i = 0; i < 4; i++) slots[i] = store[i];\n  \
         set_e(1, 7); put(1, 11); store[1][3] = 5; table[1].c = 13;\n  \
         printf(\"%u %ld %ld %ld\\n\", table[1].e, store[1][2], take(1), get_c(1));\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-stale", &src) {
        assert_eq!(
            got, "7 11 5 13",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
}

/// `floatret_cm4.o` (Cortex-M4F, clang -O2): `qnanf_` loads 0x7fc00000 into
/// `s0` and returns it, and `logish` tail-calls it on its error path -- the
/// shape of crazyflie's `logf`. Before, `qnanf_` was `unsigned int` returning
/// `0x7fc00000` and `logish` returned `(float)qnanf_()`, a value conversion of
/// the NaN's bits that evaluates to 2143289344.0. `qp`, `sn` and `nn` return NaNs
/// `NAN` cannot spell (a payload, a signalling NaN, a negative payload); the
/// hard-float contract of the default preset (`armfloatreturn`) returns them as
/// floats reinterpreted from their exact bits, and `third` returns its `double`
/// in `d0` whole. `put` and `put2` store `core`'s float through an untyped pointer,
/// which printed `((unsigned int *)a1)[2] = core(a0)`, a conversion by value.
/// The printed functions, compiled on the host, must compute what the source
/// computes.
#[test]
fn a_nan_returned_in_s0_round_trips() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_cm4.o")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "float qnanf_(void)",
        "return NAN;",
        "v1 = qnanf_();",
        "float qp(void)",
        ".from = 0x7fc00123 }).to;",
        ".from = 0x7fa00000 }).to;",
        ".from = 0xffc00005 }).to;",
        "double third(void)",
        "return 0.3333333333333333;",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    for bad in [
        "0x7fc00000",
        "(float)qnanf_",
        "float third",
        "(unsigned int *)",
    ] {
        assert!(!stdout.contains(bad), "`{bad}` printed:\n{stdout}");
    }
    assert!(
        stdout.contains("*(float *)(a1 + a2 * 4) = core(a0);"),
        "put stores core's float:\n{stdout}"
    );
    let printed = printed_functions(
        &stdout,
        &[
            "qnanf_ ", "core ", "logish ", "use ", "qp ", "sn ", "nn ", "put2 ",
        ],
    );
    // The errno slot is the object's own `err`: its MOVW/MOVT pair is relocated
    // against that symbol (`reloc_apply`), so it prints by name.
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n#include <math.h>\n{BITS}int err;\n{printed}\n\
         int main(void) {{\n  float out[4] = {{0}};\n  put2(3.0f, out);\n  \
         printf(\"%f %f %f %f %llx %llx %llx %llx\\n\", use(-3.0f), use(0.0f), use(4.0f), logish(-3.0f), \
         BITS(qp()), BITS(sn()), BITS(nn()), BITS(out[2]));\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-cm4", &src) {
        assert_eq!(
            got, "nan -inf 3.000000 nan 7fc00123 7fa00000 ffc00005 3fc00000",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
}

/// A C expression of the type the printed `name` declares its parameter `index`
/// as, holding the bits `bits`: a round trip hands each function the bits the
/// binary does, whichever type the listing gave the parameter.
fn arg_of_bits(printed: &str, name: &str, index: usize, bits: u64) -> String {
    let ty = param_type(printed, name, index);
    format!(
        "({{ {ty} t_; unsigned long long u_ = {bits:#x}ULL; memcpy(&t_, &u_, sizeof t_); t_; }})"
    )
}

/// An argument for parameter `index` of the printed function `name` holding
/// the address `expr`, whether the listing declares a pointer or a `long`.
fn arg_of_pointer(printed: &str, name: &str, index: usize, expr: &str) -> String {
    let ty = param_type(printed, name, index);
    format!("({{ {ty} t_; const void *p_ = {expr}; memcpy(&t_, &p_, sizeof t_); t_; }})")
}

/// The type the printed function `name` declares for parameter `index`.
fn param_type(printed: &str, name: &str, index: usize) -> String {
    let head = printed
        .lines()
        .find(|l| !l.starts_with("//") && l.contains(&format!(" {name}(")))
        .unwrap_or_else(|| panic!("no signature for {name}:\n{printed}"));
    let params = &head[head.find('(').unwrap() + 1..head.rfind(')').unwrap()];
    let param = params
        .split(',')
        .nth(index)
        .unwrap_or_else(|| panic!("{name} has no parameter {index}: {head}"))
        .trim();
    param
        .trim_end_matches(|c: char| c.is_ascii_alphanumeric() || c == '_')
        .trim()
        .to_string()
}

/// `floatret_calls_{clang,gcc}_O0`: `signbit_` hands its float to `f2u`, which
/// keeps the bits as an `unsigned int`; `fetch` writes `p[1] = p[0] + 1` and
/// hands `*(float *)p` on to `pass`, which returns it; `use` passes two floats to
/// `mk` and `mk`'s `struct { float, float }` to `first_of`. A float vote on a
/// value in `xmm0` printed `signbit_(float a0) { .. f2u(a0) .. }` beside
/// `f2u(unsigned int)`, `a0[1] = (float)((int)*a0 + 1)` in `fetch`, and
/// `use(float a0,float a1)` handing both to `mk(unsigned int,unsigned int)` --
/// each a conversion by value where the binary moves bits. The printed functions
/// are compiled with gcc and clang and must compute the fixture's bits. At gcc
/// -O0, `call_f2u` hands `f2u`'s result back (`call; leave; ret`), but the
/// argument joined from two registers keeps the call from having an output: it
/// was printed returning a local nothing assigns, and stays `void`.
#[test]
fn a_float_crossing_an_integer_call_round_trips() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let bin = fixture("floatret_calls_clang_O0");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let printed = printed_functions(
        &stdout,
        &[
            "f2u ",
            "signbit_ ",
            "pass ",
            "fetch ",
            "mk ",
            "first_of ",
            "use ",
        ],
    );
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n{BITS}\
         #define CONCAT44(h, l) ((unsigned long)(unsigned int)(h) << 32 | (unsigned int)(l))\nunsigned int g_out;\n{printed}\n\
         int main(void) {{\n  unsigned a[2] = {{0x3fc00000u, 0}};\n  fetch((void *)a);\n  \
         use({}, {});\n  printf(\"%llx %x %x\\n\", BITS(signbit_({})) & 0xff, a[1], g_out);\n  return 0;\n}}\n",
        arg_of_bits(&printed, "use", 0, 0x3fc0_0000),
        arg_of_bits(&printed, "use", 1, 0x4020_0000),
        arg_of_bits(&printed, "signbit_", 0, 0xbf00_0000),
    );
    for (cc, got) in compile_and_run_each("floatret-calls", &src) {
        assert_eq!(
            got, "1 3fc00001 3fc00000",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }

    let bin = fixture("floatret_calls_gcc_O0");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let body = printed_functions(&stdout, &["call_f2u "]);
    for line in body.lines() {
        let Some(var) = line
            .trim()
            .strip_prefix("return ")
            .and_then(|r| r.strip_suffix(';'))
        else {
            continue;
        };
        if var.starts_with('v') && var[1..].chars().all(|c| c.is_ascii_digit()) {
            assert!(
                body.contains(&format!("{var} = ")),
                "call_f2u returns `{var}`, which nothing assigns:\n{body}"
            );
        }
    }
}

/// Compile `lib` and `main` as two translation units with each of
/// [`round_trip_compilers`], run the program, and return each compiler's stdout.
fn compile_pair_and_run_each(tag: &str, lib: &str, main: &str) -> Vec<(String, String)> {
    let dir = std::env::temp_dir().join(format!("unlace-{tag}-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let (lib_file, main_file) = (dir.join("lib.c"), dir.join("main.c"));
    std::fs::write(&lib_file, lib).unwrap();
    std::fs::write(&main_file, main).unwrap();
    let mut out = Vec::new();
    for cc in round_trip_compilers() {
        let exe = dir.join(format!("rt-{cc}"));
        let built = Command::new(cc)
            .args(common::CC_GCC15_DEMOTE)
            .args([
                "-std=gnu11",
                "-w",
                "-Werror=int-conversion",
                "-Werror=implicit-function-declaration",
                "-o",
            ])
            .arg(&exe)
            .arg(&main_file)
            .arg(&lib_file)
            .output()
            .expect("spawn the compiler");
        assert!(
            built.status.success(),
            "{cc} rejected the printed C:\n{}\n{lib}",
            String::from_utf8_lossy(&built.stderr)
        );
        let run = Command::new(&exe).output().expect("run the round trip");
        out.push((
            cc.to_string(),
            String::from_utf8_lossy(&run.stdout).trim().to_string(),
        ));
    }
    let _ = std::fs::remove_dir_all(&dir);
    out
}

/// `floatparam_x86_64{_O0,}.o` (gcc -O0, clang -O2): `fs`, `ff` and `sink`
/// receive a `double` or `float`s in `xmm0`/`xmm1` and only store them through
/// a pointer, and each parameter printed as an integer, which the convention
/// passes in a general register: `fs(unsigned long a0,unsigned int *a1,..)`
/// read the pointer from `rsi`. The printed functions, compiled on the host
/// beside a caller that declares the source prototypes, must store what the
/// source stores. `fy` copies its double into a global nothing else in the
/// object touches, which `floatglobals` finds is only ever a float.
/// `floatparam_a64.o` (AArch64,
/// clang -O2) and `floatparam_x86_64_clang_O0.o`: `negsink` hands `sink` the
/// bits of an integer in `s0`/`xmm0`, and `k3b` hands `use` the bits `iget3`
/// returns in an integer register, beside an `iget3` printed returning
/// `unsigned int`; each is a reinterpretation the printed call must spell as
/// one, not as the conversion C applies to an integer argument of a `float`
/// parameter. `twicetrunc` reads the float `trunc16` computes on its bits and
/// returns in `s0`, beside a `trunc16` printed returning `unsigned int`:
/// `(float)trunc16(a0)` converted.
#[test]
fn a_float_register_parameter_round_trips() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let callers = "#include <stdio.h>\nvoid fs(int *p, double b, double *q);\nvoid ff(int *p, float b, float *q);\n\
                   void sink(float *o, float a, float b);\n\
                   int main(void) {\n  int k1 = 0, k2 = 0;\n  double q = 0;\n  float f = 0, o[2] = {0};\n  \
                   fs(&k1, 2.5, &q);\n  ff(&k2, 1.25f, &f);\n  sink(o, -1.5f, 2.0f);\n  \
                   printf(\"%d %d %g %g %g %g\\n\", k1, k2, q, f, o[0], o[1]);\n  return 0;\n}\n";
    for (tag, name) in [
        ("gcc-O0", "floatparam_x86_64_O0.o"),
        ("clang-O0", "floatparam_x86_64_clang_O0.o"),
        ("clang-O2", "floatparam_x86_64.o"),
    ] {
        let (stdout, stderr, ok) =
            run_unlace(&["decompile-all", &fixture(name), "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        for want in [
            "void fs(double a0,unsigned int *a1,double *a2)",
            "void ff(float a0,unsigned int *a1,float *a2)",
            "void fr(double a0,",
            "void sink(float a0,float a1,float *a2)",
            "void fy(double a0,unsigned int *a1)",
        ] {
            assert!(stdout.contains(want), "{tag}: missing `{want}`:\n{stdout}");
        }
        let lib = format!(
            "#include <string.h>\n{}",
            printed_functions(&stdout, &["fs ", "ff ", "sink "])
        );
        for (cc, got) in compile_pair_and_run_each(&format!("floatparam-{tag}"), &lib, callers) {
            assert_eq!(
                got, "1 1 2.5 1.25 -1.5 2",
                "{tag} {cc}: the printed C stores something else:\n{lib}"
            );
        }
    }

    for (tag, name) in [
        ("a64", "floatparam_a64.o"),
        ("x86-clang-O0", "floatparam_x86_64_clang_O0.o"),
    ] {
        let (stdout, stderr, ok) =
            run_unlace(&["decompile-all", &fixture(name), "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        for want in [
            "void sink(float a0,float a1,float *a2)",
            "void use(float a0,unsigned int *a1,float *a2)",
        ] {
            assert!(stdout.contains(want), "{tag}: missing `{want}`:\n{stdout}");
        }
        let printed = printed_functions(&stdout, &["sink ", "negsink ", "iget3 ", "use ", "k3b "]);
        let constants: String = printed
            .split(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
            .filter(|w| w.starts_with("dat_"))
            .map(|w| format!("const float {w} = 2.0f;\n"))
            .collect::<std::collections::BTreeSet<_>>()
            .into_iter()
            .collect();
        let src = format!(
            "#include <stdio.h>\n#include <string.h>\n{BITS}int gj = 0x40490fdb;\n{constants}{printed}\n\
             int main(void) {{\n  unsigned p[2] = {{0, 0x3fc00000u}};\n  float o[2] = {{0}}, q = 0;\n  int k = 0;\n  \
             negsink((void *)p, o);\n  k3b((void *)&k, &q);\n  \
             printf(\"%llx %llx %d %llx\\n\", BITS(o[0]), BITS(o[1]), k, BITS(q));\n  return 0;\n}}\n"
        );
        for (cc, got) in compile_and_run_each(&format!("floatparam-{tag}"), &src) {
            assert_eq!(
                got, "bfc00000 40000000 1 40490fdb",
                "{tag} {cc}: the printed C computes something else:\n{printed}"
            );
        }
    }

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &fixture("floatparam_a64.o"),
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(
        !stdout.contains("(float)trunc16("),
        "trunc16's bits are converted:\n{stdout}"
    );
    let printed = printed_functions(&stdout, &["trunc16 ", "twicetrunc "]);
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n{BITS}{printed}\n\
         int main(void) {{\n  printf(\"%llx\\n\", BITS(twicetrunc({})));\n  return 0;\n}}\n",
        arg_of_bits(&printed, "twicetrunc", 0, 0x4049_0fd0)
    );
    for (cc, got) in compile_and_run_each("floatparam-trunc-a64", &src) {
        assert_eq!(
            got, "40c90000",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
}

/// `floatglobal_{x86_64_gcc_O2,x86_64_clang_O0,a64_O2,armhf_O2}` (linked,
/// `floatglobal.c`): `fy`, `fw` and `ff` copy a float parameter into a global
/// the program only moves through float registers, and `pass`/`passf` hand one
/// to a float parameter. Each parameter printed as an integer the convention
/// passes in a general register (`fy(unsigned long a0,unsigned int *a1)` read
/// the pointer from `rsi`), and each argument as a union reinterpretation of an
/// integer. `gpun` takes a float's bits and is added to as an integer, so
/// `set_gpun` keeps its integer parameter; `gz` is zeroed by an integer store at
/// -O2 (`setz` keeps `unsigned long`) and through `xmm0` at clang -O0 (`setz`
/// takes the `double`). The printed functions, compiled on the host beside a
/// caller that declares the source prototypes, must store what the source
/// stores. Hard-float ARM drops `fy`'s and `fw`'s `d0` parameter
/// (`armfloatargs` off), so only `ff` is compiled there.
#[test]
fn a_global_only_moved_through_float_registers_round_trips() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    for (tag, name, doubles, setz) in [
        (
            "x86-gcc-O2",
            "floatglobal_x86_64_gcc_O2",
            true,
            "void setz(unsigned long a0)",
        ),
        (
            "x86-clang-O0",
            "floatglobal_x86_64_clang_O0",
            true,
            "void setz(double a0)",
        ),
        (
            "a64-O2",
            "floatglobal_a64_O2",
            true,
            "void setz(unsigned long a0)",
        ),
        (
            "armhf-O2",
            "floatglobal_armhf_O2",
            false,
            "void ff(float a0,unsigned int *a1)",
        ),
    ] {
        let (stdout, stderr, ok) =
            run_unlace(&["decompile-all", &fixture(name), "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let mut want = vec![
            "void ff(float a0,unsigned int *a1)",
            "sinkf(gf2)",
            "void set_gpun(unsigned int a0)",
            setz,
        ];
        if doubles {
            want.extend([
                "void fy(double a0,unsigned int *a1)",
                "void fw(double a0,unsigned int a1)",
                "sink(gd2)",
            ]);
        }
        for w in want {
            assert!(stdout.contains(w), "{tag}: missing `{w}`:\n{stdout}");
        }
        assert!(
            !stdout.contains(".from = gf2") && !stdout.contains(".from = gd2"),
            "{tag}: a float global reinterpreted:\n{stdout}"
        );
        let (names, calls, expect): (&[&str], &str, &str) = if doubles {
            (
                &["fy ", "fw ", "ff "],
                "fy(&k1, 2.5);\n  fw(3, 4.5);\n  ff(&k2, 1.25f);",
                "1 2 4.5 1.25 3",
            )
        } else {
            (
                &["ff "],
                "k1 = 1;\n  gd = 4.5;\n  gi = 3;\n  ff(&k2, 1.25f);",
                "1 2 4.5 1.25 3",
            )
        };
        let lib = format!(
            "double gd;\nfloat gf;\nunsigned int gi;\n{}",
            printed_functions(&stdout, names)
        );
        let callers = format!(
            "#include <stdio.h>\nvoid fy(int *p, double b);\nvoid fw(int a, double b);\nvoid ff(int *p, float b);\n\
             extern double gd;\nextern float gf;\nextern unsigned int gi;\n\
             int main(void) {{\n  int k1 = 0, k2 = 0;\n  {calls}\n  printf(\"%d %d %g %g %u\\n\", k1, k2, gd, gf, gi);\n  return 0;\n}}\n"
        );
        for (cc, got) in compile_pair_and_run_each(&format!("floatglobal-{tag}"), &lib, &callers) {
            assert_eq!(
                got, expect,
                "{tag} {cc}: the printed C stores something else:\n{lib}"
            );
        }
    }
}

/// `floatglobal_index_x86_64_gcc_O2` (`floatglobal_index.c`): `ixa`, `lv0`,
/// `fld`, `neg` and `pas` read a double global's bits as an integer through an
/// index from its address, which the whole-program scan cannot see. A float
/// taken there prints `(&gda)[a1]` as a double element, a value conversion
/// where the machine adds to the bits, so the parameter and argument votes
/// refuse. `put` indexes a double array only as doubles and keeps its double.
#[test]
fn an_integer_access_through_an_index_from_a_float_global_refuses_the_float() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatglobal_index_x86_64_gcc_O2")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for w in [
        "void ixa(unsigned long a0,int a1)",
        "void lv0(unsigned long a0,int a1)",
        "void fld(unsigned long a0,int a1)",
        "void neg(unsigned long a0,int a1)",
        "void put(double a0,int a1)",
        ".from = gdp }",
    ] {
        assert!(stdout.contains(w), "missing `{w}`:\n{stdout}");
    }
    assert!(
        !stdout.contains("sink(gdp)"),
        "gdp handed on as a float its own index reads as an integer:\n{stdout}"
    );
}

/// `floatparam_retreg_clang_O2` (clang -O2, stripped): `v1` (`sub_11c0`) returns
/// `(float)geti()` in `xmm0`, but its recovery returns `rax`, and `main` reads
/// the call's `xmm0`. The return a callee states in another register says
/// nothing of what the caller reads, so the read is not printed as a
/// reinterpretation of `sub_11c0`'s integer.
#[test]
fn a_return_stated_in_another_register_is_not_reinterpreted() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatparam_retreg_clang_O2")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(
        stdout.contains("unsigned long sub_11c0("),
        "sub_11c0 no longer returns rax; re-pick the case:\n{stdout}"
    );
    assert!(
        !stdout.contains(".from = sub_11c0("),
        "a return in rax reinterpreted as xmm0's float:\n{stdout}"
    );
}

/// `floatbitshelper_armhf.o` (Cortex-M4F hard-float, clang -O2), `floatbitshelper_a64_O0.o`
/// (AArch64, clang -O0) and `floatbitshelper_x86_64_gcc_O2` (stripped), built from
/// `floatbitshelper.c`: `fb_fabsf`, `fb_negf` and `fb_copysignf` mask or flip the bits
/// of the floats they receive in `s0`/`xmm0` and hand them back there,
/// `fb_isnanf` compares them, and `fb_fabs` masks a double (`d0`/`xmm0`). Each printed
/// `unsigned int (unsigned int)`, which C passes in a general register, so
/// `fb_use` handed `fb_fabsf` its float as a number and wrapped each result in
/// a union. `fb_keep` adds 1 to the bits `fb_fabsf` returns and keeps them as an
/// integer, which now reinterprets the float at the call. The printed
/// functions, compiled with gcc and clang and called with the source's floats,
/// compute the fixture's bits; `fb_bump`, `fb_store` and `fb_mix` compute with,
/// store or or an integer into the bits and keep their integer types, except
/// that hard-float ARM's `fb_mix` returns the convention's float in `s0`.
#[test]
fn a_float_bit_helper_round_trips() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let prelude = format!(
        "#include <stdio.h>\n#include <string.h>\n#include <stdbool.h>\n{BITS}\
         #define ABS(x) _Generic((x), float: __builtin_fabsf, double: __builtin_fabs)(x)\n"
    );
    for (tag, name) in [
        ("armhf", "floatbitshelper_armhf.o"),
        ("a64-O0", "floatbitshelper_a64_O0.o"),
    ] {
        let (stdout, stderr, ok) =
            run_unlace(&["decompile-all", &fixture(name), "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        for want in [
            "float fb_fabsf(float a0)",
            "float fb_negf(float a0)",
            "float fb_copysignf(float a0,float a1)",
            "bool fb_isnanf(float a0)",
            "v1 = fb_fabsf(a0 - a1);",
            "v3 = fb_copysignf(3.0f,a0);",
            "*a1 = ((union { float from; int to; }){ .from = fb_fabsf(a0) }).to + 1;",
            "int fb_bump(int a0)",
            "void fb_store(unsigned int a0,unsigned int *a1)",
            if tag == "armhf" {
                "float fb_mix(unsigned int a0,unsigned int a1)"
            } else {
                "unsigned int fb_mix(unsigned int a0,unsigned int a1)"
            },
        ] {
            assert!(stdout.contains(want), "{tag}: missing `{want}`:\n{stdout}");
        }
        if tag == "a64-O0" {
            for want in ["double fb_fabs(double a0)", "return fb_fabs(a0) * 3.0;"] {
                assert!(stdout.contains(want), "{tag}: missing `{want}`:\n{stdout}");
            }
        }
        let printed = printed_functions(
            &stdout,
            &[
                "fb_fabsf ",
                "fb_negf ",
                "fb_copysignf ",
                "fb_isnanf ",
                "fb_bump ",
                "fb_store ",
                "fb_mix ",
                "fb_use ",
                "fb_keep ",
            ],
        );
        assert!(
            !printed.contains("float to; }){ .from = fb_"),
            "{tag}: a helper's result is reinterpreted as a float:\n{printed}"
        );
        let src = format!(
            "{prelude}{printed}\n\
             int main(void) {{\n  float a = -1.5f, b = 2.25f, n = -__builtin_nanf(\"\");\n  unsigned int s = 0;\n  int k = 0;\n  \
             fb_store({}, &s);\n  fb_keep(a, &k);\n  \
             printf(\"%llx %llx %llx %d %d %llx %x %llx %llx %llx %x\\n\", BITS(fb_fabsf(a)), BITS(fb_negf(a)), BITS(fb_copysignf(b, a)), \
             (int)fb_isnanf(a), (int)fb_isnanf(n), BITS(fb_fabsf(n)), s, BITS(fb_bump({})), BITS(fb_mix({}, 0x80000000u)), BITS(fb_use(a, b)), k);\n  \
             return 0;\n}}\n",
            arg_of_bits(&printed, "fb_store", 0, 0xbfc0_0000),
            arg_of_bits(&printed, "fb_bump", 0, 0xbfc0_0000),
            arg_of_bits(&printed, "fb_mix", 0, 0x3fc0_0000),
        );
        for (cc, got) in compile_and_run_each(&format!("floatbits-{tag}"), &src) {
            assert_eq!(
                got,
                "3fc00000 3fc00000 c0100000 0 1 7fc00000 3fc00000 bfc00001 bfc00000 40100000 3fc00001",
                "{tag} {cc}: the printed C computes something else:\n{printed}"
            );
        }
    }

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &fixture("floatbitshelper_x86_64_gcc_O2"),
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "float sub_12f0(float a0)",
        "float sub_1310(float a0)",
        "float sub_1330(float a0,float a1)",
        "bool sub_1360(float a0)",
        "double sub_1380(double a0)",
        "void sub_13c0(unsigned int a0,unsigned int *a1)",
        "unsigned int sub_13e0(unsigned int a0,unsigned int a1)",
    ] {
        assert!(stdout.contains(want), "x86-64: missing `{want}`:\n{stdout}");
    }
    let printed = printed_functions(
        &stdout,
        &[
            "sub_12f0 ",
            "sub_1310 ",
            "sub_1330 ",
            "sub_1360 ",
            "sub_1380 ",
        ],
    );
    let src = format!(
        "{prelude}{printed}\n\
         int main(void) {{\n  float a = -1.5f, b = 2.25f, n = -__builtin_nanf(\"\");\n  double d = -4.5;\n  \
         printf(\"%llx %llx %llx %d %d %llx %llx\\n\", BITS(sub_12f0(a)), BITS(sub_1310(a)), BITS(sub_1330(b, a)), \
         (int)sub_1360(a), (int)sub_1360(n), BITS(sub_12f0(n)), BITS(sub_1380(d)));\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatbits-x86-64", &src) {
        assert_eq!(
            got, "3fc00000 3fc00000 c0100000 0 1 7fc00000 4012000000000000",
            "x86-64 {cc}: the printed C computes something else:\n{printed}"
        );
    }
}

/// `floatbitswithdraw_armhf.o` (Cortex-M4F hard-float, clang -O2, built from
/// `floatbitswithdraw.c`): `abs_bits` returns the bits `fbabs` hands back in
/// `s0` as an integer, which withdraws `fbabs`'s float return, and with it the
/// float parameter the same bit ops gave it. `from_bits` tail-calls `fbabs`
/// without reading its result, and was printed before the withdrawal as
/// `fbabs(((union { unsigned int from; float to; }){ .from = a0 }).to)`, a
/// float handed to the final `unsigned int fbabs(unsigned int a0)`, which C
/// converts by value. Every caller of the helper is now decompiled again. The
/// withdrawal is checked with `armfloatreturn` off: the hard-float contract of
/// the default preset returns `s0` as the convention's float, so `fbabs` keeps
/// its float on both sides and `abs_bits` reinterprets the result.
#[test]
fn a_withdrawn_float_bit_helper_is_called_with_its_final_prototype() {
    let fixture = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatbitswithdraw_armhf.o")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &fixture,
        "--option",
        "armfloatreturn",
        "off",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(
        stdout.contains("unsigned int fbabs(unsigned int a0)"),
        "fbabs is no longer withdrawn; re-pick the case:\n{stdout}"
    );
    assert!(
        stdout.contains("  fbabs(a0); // tail-call"),
        "from_bits does not call fbabs with its integer:\n{stdout}"
    );
    assert!(
        !stdout.contains("float to; }){ .from = a0 }).to)"),
        "a float is handed to fbabs's integer parameter:\n{stdout}"
    );
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &fixture, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    assert!(
        stdout.contains("float fbabs(float a0)"),
        "the preset withdrew fbabs's float:\n{stdout}"
    );
    assert!(
        stdout.contains("return ((union { float from; unsigned int to; }){ .from = fbabs("),
        "abs_bits does not reinterpret fbabs's float:\n{stdout}"
    );
}

/// `floatret_put_{cm4,a64}.o` (Cortex-M4F and AArch64, clang -O2): `putf2` moves
/// its floats from `s0`..`s2` into `r0`..`r2` / `w0`..`w2` and tail-calls
/// `put3`, which stores them as `u32`. A float vote on the parameters printed
/// `putf2(float a0,..) { put3(a0,..); }` beside `put3(unsigned int,..)`, which
/// stores 1, 2 and 7 where the binary stores the bits. The printed functions,
/// compiled on the host, must store the bits.
#[test]
fn a_float_handed_on_to_an_integer_parameter_round_trips() {
    let sp = specs();
    for (tag, name) in [("cm4", "floatret_put_cm4.o"), ("a64", "floatret_put_a64.o")] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let printed = printed_functions(&stdout, &["put3 ", "putf2 "]);
        let src = format!(
            "#include <stdio.h>\n#include <string.h>\n{printed}\n\
             int main(void) {{\n  unsigned s[3] = {{0}};\n  putf2({}, {}, {}, (void *)s);\n  \
             printf(\"%x %x %x\\n\", s[0], s[1], s[2]);\n  return 0;\n}}\n",
            arg_of_bits(&printed, "putf2", 0, 0x3fc0_0000),
            arg_of_bits(&printed, "putf2", 1, 0x4020_0000),
            arg_of_bits(&printed, "putf2", 2, 0x40e0_0000),
        );
        for (cc, got) in compile_and_run_each(&format!("floatret-put-{tag}"), &src) {
            assert_eq!(
                got, "3fc00000 40200000 40e00000",
                "{tag} {cc}: the printed C stores something else:\n{printed}"
            );
        }
    }
}

/// `floatret_pair_gcc_O2` (gcc -O2, stripped): `k2`, `k3` and `kc` return
/// `{1.0f, 2.0f}` in `xmm0` as a `struct { float, float }`, the first two
/// floats of three, and a `float _Complex`, and each reader copies the eight
/// bytes into a `uint64_t` global and shifts out the upper half. A float vote
/// typed the callees `double` and the readers printed `dat_4040 =
/// (unsigned long)sub_11d0()`, which converts 2.0000004 to 2. The callees keep
/// their bits and the printed functions, compiled with gcc and clang, store
/// what the fixture stores.
#[test]
fn a_float_pair_held_as_an_integer_round_trips() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_pair_gcc_O2")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "unsigned long sub_11d0(void)",
        "unsigned long sub_11f0(void)",
        "unsigned long sub_1210(void)",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    let printed = printed_functions(
        &stdout,
        &[
            "sub_11d0 ",
            "sub_11f0 ",
            "sub_1210 ",
            "sub_1230 ",
            "sub_1260 ",
            "sub_1290 ",
        ],
    );
    for bad in ["double", "(unsigned long)sub_"] {
        assert!(!printed.contains(bad), "`{bad}` printed:\n{printed}");
    }
    let mut globals = String::new();
    for line in printed.lines() {
        for word in line.split(|c: char| !c.is_ascii_alphanumeric() && c != '_') {
            if word.starts_with("dat_") && !globals.contains(&format!(" {word};")) {
                globals.push_str(&format!("unsigned long {word};\n"));
            }
        }
    }
    let src = format!(
        "#include <stdio.h>\n{globals}{printed}\n\
         int main(void) {{\n  sub_1230(1);\n  sub_1260();\n  sub_1290();\n  \
         printf(\"%lx %lx %lx %lx %lx %lx %lx\\n\", dat_4040, dat_4048, dat_4050, dat_4058, dat_4060, dat_4068, dat_4070);\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-pair", &src) {
        assert_eq!(
            got, "400000003f800000 40000000 1 400000003f800000 40000000 400000003f800000 40000000",
            "{cc}: the printed C stores something else:\n{printed}"
        );
    }
}

/// `floatret_chain_gcc_O1` (gcc -O1, stripped): `wrapd` hands on the `double`
/// `getd` returns in `xmm0` (`call; ret`), `wrap2` hands on `wrapd`'s, and
/// `wrapp` the `struct { float, float }` of `getp`; each reader copies the eight
/// bytes into a `uint64_t` global. A reader keeping the bits as an integer
/// withdrew the wrapper's float return, but the float came from the getter's
/// own, which stayed: the wrapper still returned `double`, and the reader's
/// `dat_40a0 = sub_1156(a0,a1)` converted 2.25 to 2. The getters are withdrawn
/// with the wrappers, and the printed functions, compiled with gcc and clang,
/// store the fixture's bits. `floatret_chain_mips_O0` (mipsel gcc -O0) hands a
/// `float` in `$f0` through `wrapf` the same way: nothing on that chain is a
/// float either, and the printed reader, run on the fixture's array mapped at a
/// 32-bit address, stores the bits of 2.25f, where a float chain stored 2.
#[test]
fn a_float_handed_on_through_wrappers_to_an_integer_round_trips() {
    let sp = specs();
    let fixture = |name: &str| {
        repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string()
    };
    let bin = fixture("floatret_chain_gcc_O1");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let names = [
        "sub_1149 ",
        "sub_1156 ",
        "sub_1160 ",
        "sub_1181 ",
        "sub_118e ",
        "sub_1198 ",
        "sub_11ba ",
        "sub_11ff ",
    ];
    let printed = printed_functions(&stdout, &names);
    for want in [
        "unsigned long sub_1156(long a0,int a1)",
        "unsigned long sub_1160(long a0,int a1)",
        "unsigned long sub_118e(long a0,int a1)",
    ] {
        assert!(printed.contains(want), "missing `{want}`:\n{printed}");
    }
    assert!(
        !printed.contains("double"),
        "a function of the chain returns a float:\n{printed}"
    );
    let globals: String = [
        "dat_40a0", "dat_40a8", "dat_40b0", "dat_40b8", "dat_40d0", "dat_40d8",
    ]
    .iter()
    .map(|g| format!("unsigned long {g};\n"))
    .collect();
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n\
         double darr[4] = {{1.5, -0.0, 2.25, 3.0}};\n\
         struct {{ float x, y; }} parr[4] = {{{{1.0f, 2.0f}}, {{3.0f, 4.0f}}, {{5.0f, 6.0f}}, {{7.0f, 8.0f}}}};\n\
         {globals}{printed}\n\
         int main(void) {{\n  sub_1198({}, 2);\n  sub_11ba({}, 3);\n  sub_11ff({}, 1);\n  \
         printf(\"%lx %lx %lx %lx %lx %lx\\n\", dat_40a0, dat_40a8, dat_40b0, dat_40b8, dat_40d0, dat_40d8);\n  return 0;\n}}\n",
        arg_of_pointer(&printed, "sub_1198", 0, "darr"),
        arg_of_pointer(&printed, "sub_11ba", 0, "darr"),
        arg_of_pointer(&printed, "sub_11ff", 0, "parr"),
    );
    for (cc, got) in compile_and_run_each("floatret-chain", &src) {
        assert_eq!(
            got, "4002000000000000 40020000 4008000000000000 40080000 4080000040400000 40800000",
            "{cc}: the printed C stores something else:\n{printed}"
        );
    }
    let mips = fixture("floatret_chain_mips_O0");
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &mips, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let printed = printed_functions(&stdout, &["sub_40085c ", "sub_400898 ", "sub_400b78 "]);
    for want in [
        "unsigned int sub_40085c(int a0,int a1)",
        "unsigned int sub_400898(int a0,int a1)",
    ] {
        assert!(printed.contains(want), "missing `{want}`:\n{printed}");
    }
    assert!(
        !printed.contains("float"),
        "a function of the chain returns a float:\n{printed}"
    );
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n#include <sys/mman.h>\n\
         void __stack_chk_fail(void);\nint guard_;\nint *dat_412094 = &guard_;\n\
         unsigned int dat_4120e0, dat_4120e4, dat_4120e8, dat_4120ec;\n{printed}\n\
         int main(void) {{\n  float farr[4] = {{1.5f, -0.0f, 2.25f, 3.0f}};\n  \
         void *base = mmap((void *)0x20000000, 4096, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);\n  \
         if (base != (void *)0x20000000) return 2;\n  memcpy(base, farr, sizeof farr);\n  sub_400b78({}, 2);\n  \
         printf(\"%x %x %x %x\\n\", dat_4120e0, dat_4120e4, dat_4120e8, dat_4120ec);\n  return 0;\n}}\n",
        arg_of_pointer(&printed, "sub_400b78", 0, "base"),
    );
    for (cc, got) in compile_and_run_each("floatret-chain-mips", &src) {
        assert_eq!(
            got, "40100000 0 4010 0",
            "{cc}: the printed MIPS reader stores something else:\n{printed}"
        );
    }
}

/// `floatret_pair32_{i386_O2,arm_O0}.o`: `use` reads a 64-bit result in two
/// registers from `hi` (`call zsum; or $0xff,%edx`) and from `wrap` (`call
/// ins16; ret`). Returned in `eax` alone, `hi` dropped the `0xff` its high
/// register carries, and `wrap` returned the low half of a 64-bit value. A
/// return the callers read in two registers is returned whole or not at all.
#[test]
fn a_pair_return_handed_on_stays_whole_round_trips() {
    let sp = specs();
    let pairs: [(u32, u32); 4] = [(1, 2), (0x7fff, 0x10), (0x1000000, 0x2345), (0, 0)];
    let want: Vec<String> = pairs
        .iter()
        .map(|(a, b)| format!("{:x}", (a.wrapping_add(*b) as u64) | 0xff00000000))
        .collect();
    for name in ["floatret_pair32_i386_O2.o", "floatret_pair32_arm_O0.o"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        assert!(
            !stdout.contains("unsigned int wrap("),
            "{name}: wrap returns half of a 64-bit value:\n{stdout}"
        );
        let printed = printed_functions(&stdout, &["zsum ", "hi "]);
        assert!(
            printed.contains("unsigned long long hi(int a0,int a1)"),
            "{name}:\n{printed}"
        );
        let calls: String = pairs
            .iter()
            .map(|(a, b)| format!("  printf(\"%llx\\n\", hi({a:#x},{b:#x}));\n"))
            .collect();
        let src =
            format!("#include <stdio.h>\n{printed}\nint main(void) {{\n{calls}  return 0;\n}}\n");
        for (cc, got) in compile_and_run_each("floatret-pair32", &src) {
            assert_eq!(
                got.lines().collect::<Vec<_>>(),
                want,
                "{name} {cc}: the printed hi returns something else:\n{printed}"
            );
        }
    }
}

/// `floatret_beside_gcc_O2` (gcc -O2, stripped): `getf` returns a packed
/// global's float on one path and `0.0f` on the other, each with its own `ret`.
/// A value read from a global refuses the float-register vote, but the constant
/// on the other path was voted alone, and the function returned `float` with
/// the global in it. Every value the function returns in the register now
/// answers for the vote.
#[test]
fn a_float_return_beside_a_global_read_stays_an_integer() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_beside_gcc_O2")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let printed = printed_functions(&stdout, &["sub_1180 "]);
    for want in [
        "unsigned int sub_1180(int a0)",
        "return 0;",
        "return dat_4017;",
    ] {
        assert!(printed.contains(want), "missing `{want}`:\n{printed}");
    }
}

/// The entry hands `f`'s `eax` to `ExitProcess`, so `f` is decompiled again to
/// return it, and that decompile restarts once its second indirect call
/// resolves to `ExitProcess`. On its one returning path `f` returns the handle
/// the comparison also reads, the `INVALID_HANDLE_VALUE` bits `0xffffffff`.
/// The restart starts from the prototype the function was given, as upstream's
/// `Funcdata::clear` does, so the return type is what the restarted pass
/// recovers (`unsigned int`), not the first pass's. Patched to also load
/// through the handle on that path (`je` to a `mov ecx,[eax]` the
/// `ExitProcess` path jumps over), the pass before the restart returned `eax`,
/// joined with what the unresolved call left, and the pass after it refused
/// the handle: the function must be `void`. No function that declares a return
/// type prints a bare `return;`.
#[test]
fn a_return_refused_after_a_restart_leaves_the_function_void() {
    let fixture =
        repo_root().join("crates/unlace-analysis/tests/fixtures/floatret_restart_pe_i386.exe");
    let sp = specs();
    let decompile = |bin: &str| {
        let (stdout, stderr, ok) = run_unlace(&["decompile-all", bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        for chunk in stdout.split("// Function: ") {
            let mut lines = chunk.lines().skip(1);
            let Some(sig) = lines.next() else { continue };
            if !sig.starts_with("void ") {
                assert!(
                    !lines.any(|l| l.trim() == "return;"),
                    "`{sig}` returns nothing:\n{stdout}"
                );
            }
        }
        printed_functions(&stdout, &["sub_401020 "])
    };
    let printed = decompile(fixture.to_str().unwrap());
    assert!(
        printed.contains("unsigned int sub_401020(unsigned int a0)")
            && printed.contains("return 0xffffffff;"),
        "{printed}"
    );

    let mut image = std::fs::read(&fixture).unwrap();
    let at = |image: &[u8], pattern: &[u8]| {
        image
            .windows(pattern.len())
            .position(|w| w == pattern)
            .unwrap()
    };
    let je = at(&image, &[0x74, 0x0e, 0xc7, 0x04, 0x24]);
    image[je + 1] = 0x10;
    let leave = at(&image, &[0xff, 0xd0, 0xc9, 0xc3]) + 2;
    image[leave..leave + 12].copy_from_slice(&[
        0xeb, 0x08, 0x8b, 0x08, 0x89, 0x0d, 0x00, 0x21, 0x40, 0x00, 0xc9, 0xc3,
    ]);
    let patched = common::scratch_file("floatret-restart-load", "exe");
    std::fs::write(&patched, &image).unwrap();
    let printed = decompile(patched.to_str().unwrap());
    assert!(
        printed.contains("void sub_401020(unsigned int a0)"),
        "{printed}"
    );
}

/// `floatret_handon_gcc_O1`: `key_ssh_name` passes `key_type_plain`'s `int` to
/// `type_name` and returns `type_name`'s pointer (`call; call; ret`), and `main`
/// reads all of `rax`. The function names only `eax`, the first call's result,
/// so its return was as narrow: `unsigned int key_ssh_name(..)`, which cuts the
/// pointer to 32 bits. The printed functions are compiled against a key table
/// whose string lies above 4 GiB and must return that string's address.
#[test]
fn a_pointer_handed_on_past_an_int_call_round_trips() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_handon_gcc_O1")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &bin,
        "--option",
        "structdefs",
        "on",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let printed = printed_functions(&stdout, &["type_name ", "key_type_plain ", "key_ssh_name "]);
    let src = format!(
        "#include <stdio.h>\n#include <string.h>\n#include <sys/mman.h>\n{BITS}unsigned long keytypes[8];\n{printed}\n\
         int main(void) {{\n  char *ed = mmap((void *)0x7e0000000000ul, 4096, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);\n  \
         strcpy(ed, \"ssh-ed25519\");\n  keytypes[0] = (unsigned long)\"ssh-rsa\"; keytypes[2] = (unsigned long)ed; keytypes[3] = 3;\n  \
         keytypes[4] = (unsigned long)\"ecdsa\"; keytypes[5] = 2 | (415ul << 32); keytypes[7] = (unsigned long)-1;\n  \
         unsigned char key[64] = {{3}};\n  unsigned long long r = BITS(key_ssh_name((void *)key));\n  \
         printf(\"%d %d %s\\n\", (unsigned long)ed > 0xfffffffful, r == (unsigned long)ed, r == (unsigned long)ed ? ed : \"?\");\n  return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatret-handon", &src) {
        assert_eq!(
            got, "1 1 ssh-ed25519",
            "{cc}: the printed C returns something else:\n{printed}"
        );
    }
}

/// `floatret_twopath_gcc_O1`: `wrap` tests `pick`'s `int` and returns one of
/// two `getname` calls' pointers, both paths ending at one `ret`, and `main`
/// reads all of `rax`. Heritage refines the planted `rax` at the `eax` the body
/// names and merges each half on its own, which no rule joins again: `wrap`
/// returned `CONCAT44(dat_4,v2)` and stored the upper half of `getname`'s
/// pointer into `dat_4`, a register piece printed as a global the binary never
/// writes. It stays `void`, as before a caller asked for its result.
#[test]
fn a_return_merged_in_pieces_stays_void() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_twopath_gcc_O1")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let printed = printed_functions(&stdout, &["wrap "]);
    assert!(
        printed.contains("void wrap("),
        "`wrap` returns a value assembled from separately merged pieces:\n{printed}"
    );
    for bad in ["dat_4 =", "CONCAT44(dat_4,"] {
        assert!(
            !printed.contains(bad),
            "`wrap` writes a register piece as a global (`{bad}`):\n{printed}"
        );
    }
}

/// `floatret_parse_gcc_O1.o` and `floatret_parse_armel.o` (soft-float ARM):
/// `parse`, `parse2` and `parsef` return what `strtod` and `strtof` return, and
/// `rp` keeps `parse`'s bits as an integer, `rp2` stores `parse2`'s `double`, and
/// Code-proven imports receive their known floating-point contracts on x86-64.
/// On the soft-float object, which states the base standard, `armbasepcs` binds
/// the `.o`'s undefined `strtod` to the core-register model, so `parse` and
/// `parse2` return its `double` whole in `r0:r1`. `parsef` keeps no return: its
/// `r0` is `strtof`'s call output itself, which return recovery does not count
/// as a result.
#[test]
fn a_known_float_import_preserves_its_floating_return() {
    let sp = specs();
    for name in ["floatret_parse_gcc_O1.o", "floatret_parse_armel.o"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed on {name}: {stderr}");
        let printed = printed_functions(&stdout, &["parse ", "parse2 ", "parsef "]);
        let wants: &[&str] = if name == "floatret_parse_gcc_O1.o" {
            &[
                "double parse(char *",
                "double parse2(char *",
                "float parsef(char *",
                "return strtod(",
                "return strtof(",
            ]
        } else {
            &[
                "double parse(char *",
                "double parse2(char *",
                "return strtod(",
                "void parsef(",
            ]
        };
        for want in wants {
            assert!(
                printed.contains(want),
                "{name}: missing `{want}`:\n{printed}"
            );
        }
        for bad in [
            "unsigned long parse(",
            "unsigned long parse2(",
            "unsigned int parsef(",
            "(int)strtod(",
            "(int)strtof(",
        ] {
            assert!(
                !printed.contains(bad),
                "{name}: `{bad}` numerically converts a floating return:\n{printed}"
            );
        }
    }
}

/// `floatret_softfp_armv7` states the base procedure-call standard and has an
/// FPU (`-mfloat-abi=softfp`, as Android `armeabi-v7a` builds do), so its
/// imports take and return doubles in core registers: `pw` passes `r0`-`r3` to
/// `pow`, and `rd` stores `strtod`'s `r0:r1` and passes it to `ceil`. The libc
/// table's `double` rows laid those calls out in VFP registers and dropped the
/// arguments and results (`pow(v1,v2)` of unset `d0`/`d1`); they are not seeded
/// on such an image.
#[test]
fn soft_float_imports_keep_their_core_register_values() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/floatret_softfp_armv7")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "pow(a1,a0);",
        "= strtod(a0,NULL);",
        "= strtof(a0,NULL);",
        "= ceil(",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    for bad in ["pow(v1,v2)"] {
        assert!(
            !stdout.contains(bad),
            "`{bad}` reads VFP registers the code never sets:\n{stdout}"
        );
    }
}

/// `floatret_armrows_soft` and `floatret_armrows_hard` (soft-float and
/// hard-float ARM): `clampd` returns `strtod`'s result or 0, and `rd` copies
/// its bits into a `uint64_t`. The soft image states the base standard, which
/// returns a `double` whole in `r0:r1`, so it takes the rows whatever the
/// option: `clampd` is `double sub_10224(..)`, and `rd` keeps the bits it copies
/// (`unsigned long long v1 = sub_10224()` converted 2.25 to 2). The hard image
/// printed `unsigned int sub_101f0(..)` returning `SUB84(v1,0)`, the low half
/// of `d0`, and gets none of the rows with `armfloatreturn` off. Under the
/// default preset's hard-float contract it takes `strtod`'s row, and `parse`
/// and `clampd` return their doubles whole in `d0`.
#[test]
fn arm_images_get_no_double_libc_rows() {
    let sp = specs();
    for name in ["floatret_armrows_soft", "floatret_armrows_hard"] {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            &bin,
            "--option",
            "armfloatreturn",
            "off",
            "--sleighpath",
            &sp,
        ]);
        assert!(ok, "unlace decompile-all failed on {name}: {stderr}");
        assert!(
            !stdout.contains("SUB84("),
            "{name}: a double return is cut to its low word:\n{stdout}"
        );
        if name.ends_with("soft") {
            for want in [
                "double strtod(char *a0,char **a1)",
                "double sub_10224(char *a0)",
                "{ .from = sub_10224(a0) }).to;",
                "{ .from = sub_10214(a0) }).to;",
            ] {
                assert!(stdout.contains(want), "{name}: missing `{want}`:\n{stdout}");
            }
            assert!(
                !stdout.contains("v1 = sub_10224(a0);") && !stdout.contains("v1 = sub_10214(a0);"),
                "{name}: a bit copy of a double prints as a conversion:\n{stdout}"
            );
        } else {
            assert!(
                !stdout.contains("double"),
                "{name}: `double` from a libc row with `armfloatreturn` off:\n{stdout}"
            );
        }
        let (preset, stderr, ok) = run_unlace(&["decompile-all", &bin, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile-all failed on {name}: {stderr}");
        if name.ends_with("soft") {
            assert_eq!(
                preset, stdout,
                "{name}: the hard-float contract changed a soft-float image"
            );
        } else {
            for want in [
                "double strtod(char *a0,char **a1)",
                "double sub_101e0(char *a0)",
                "double sub_101f0(char *a0)",
                "v1 = strtod(a0,NULL);",
            ] {
                assert!(preset.contains(want), "{name}: missing `{want}`:\n{preset}");
            }
            assert!(
                !preset.contains("SUB84("),
                "{name}: a double return is cut to its low word:\n{preset}"
            );
        }
    }
}

/// `unlace decompile armfloat_libm_hard mant` builds one function: the held-back
/// `frexp` and `sin` rows must be parked before that first `Funcdata` takes its
/// callee-prototype snapshot, or `mant` reads `frexp()` with no arguments.
#[test]
fn arm_library_float_rows_reach_a_single_decompile() {
    let sp = specs();
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/armfloat_libm_hard")
        .to_str()
        .unwrap()
        .to_string();
    for (func, want) in [
        ("mant", "double mant(double a0,int *a1)"),
        ("mant", "v1 = frexp(a0,a1);"),
        ("wave", "v1 = sin(a0);"),
    ] {
        let (stdout, stderr, ok) = run_unlace(&["decompile", &bin, func, "--sleighpath", &sp]);
        assert!(ok, "unlace decompile {func} failed: {stderr}");
        assert!(stdout.contains(want), "{func}: missing `{want}`:\n{stdout}");
    }
    let (off, stderr, ok) = run_unlace(&[
        "decompile",
        &bin,
        "mant",
        "--option",
        "armfloatreturn",
        "off",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "unlace decompile mant failed: {stderr}");
    assert!(
        !off.contains("frexp(a0,a1)"),
        "armfloatreturn off still parked frexp:\n{off}"
    );
}

/// `dsum`, `norm` and `use` read their argument as `double *`, `struct P *` and
/// `struct M *`, and each caller writes that memory with integer bits first. A
/// pointer vote from the callee printed those stores as value conversions
/// (`a0->field_0x0 = (double)(a1 + 1)`, `a0->field_0x4 = (float)v2`), the payload
/// NaN as `NAN`, and `s3`'s integer-register parameters as `double`. Both passes,
/// the default and `--option protoorder off`, compile the six printed callers
/// against recording callees and must leave the same bytes as the source.
#[test]
fn a_float_pointee_keeps_the_callers_integer_stores_round_trip() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_floatpointee_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let have_cc = process::optional_output(Command::new("cc").arg("--version")).is_some();
    for off in [false, true] {
        let mut args = vec![
            "decompile-all",
            bin.as_str(),
            "--option",
            "structdefs",
            "on",
            "--sleighpath",
            &sp,
        ];
        if off {
            args.extend_from_slice(&["--option", "protoorder", "off"]);
        }
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let names = ["u1 ", "u2 ", "s3 ", "cp1 ", "cp3 ", "cp5 "];
        let chunks: Vec<&str> = stdout
            .split("// Function: ")
            .filter(|c| names.iter().any(|n| c.starts_with(n)))
            .collect();
        assert_eq!(chunks.len(), names.len(), "{stdout}");
        for bad in ["= (double)(", "= (float)", "NAN", "double a1", "double a2"] {
            assert!(
                !chunks.iter().any(|c| c.contains(bad)),
                "`{bad}` printed (off={off}):\n{stdout}"
            );
        }
        if !have_cc {
            eprintln!("protoorder float pointee round trip: no `cc`, spelling checked only");
            continue;
        }
        let printed = printed_functions(&stdout, &names);
        let dir = std::env::temp_dir().join(format!(
            "unlace-protoorder-pointee-rt-{}-{off}",
            std::process::id()
        ));
        std::fs::create_dir_all(&dir).unwrap();
        let src = dir.join("rt.c");
        let exe = dir.join("rt");
        std::fs::write(
            &src,
            format!(
                "#include <stdio.h>\n#include <string.h>\n#include <math.h>\n\
                 static unsigned char seen[32];\n\
                 double dsum(void *p) {{ memcpy(seen, p, 32); return 0; }}\n\
                 double norm(void *p) {{ memcpy(seen, p, 16); return 0; }}\n\
                 double use(void *p) {{ memcpy(seen, p, 16); return 0; }}\n\
                 {printed}\n\
                 union U {{ long l[4]; double d[4]; }};\n\
                 struct P {{ double x, y; }};\n\
                 struct M {{ int i; float f; double d; }};\n\
                 static void s_u1(union U *u, long v) {{ u->l[0] = v + 1; u->l[1] = v >> 1; dsum(u->d); }}\n\
                 static void s_u2(union U *u) {{ long t = u->l[2]; u->l[0] = t * 3; \
                 u->l[1] = 0x7ff0000000000001L; dsum(u->d); }}\n\
                 static void s_s3(struct P *d, long a, long b) {{ memcpy(&d->x, &a, 8); memcpy(&d->y, &b, 8); \
                 norm(d); }}\n\
                 static void s_cp1(struct M *d, const struct M *s) {{ *d = *s; use(d); }}\n\
                 static void s_cp3(struct M *d, long a, long b) {{ memcpy(d, &a, 8); memcpy(&d->d, &b, 8); \
                 use(d); }}\n\
                 static void s_cp5(struct M *d, unsigned v) {{ unsigned w = v * 2 + 1; memcpy(&d->f, &w, 4); \
                 d->i = v; d->d = 0; use(d); }}\n\
                 static void show(const char *tag, long *b) {{\n  printf(\"%s\", tag);\n  \
                 for (int i = 0; i < 4; i++) printf(\" %016lx\", b[i]);\n  \
                 for (int i = 0; i < 32; i++) printf(\"%02x\", seen[i]);\n  printf(\"\\n\");\n  \
                 memset(seen, 0, 32);\n}}\n\
                 static void run(int p) {{\n  \
                 long b[4], s[4] = {{0x40000000L << 32 | 1, 0x4008000000000000L, 0, 0}};\n  \
                 memcpy(b, (long[4]){{1, 2, 3, 4}}, 32);\n  \
                 if (p) ((void (*)(void *, long))u1)(b, 7); else s_u1((void *)b, 7);\n  show(\"u1\", b);\n  \
                 memcpy(b, (long[4]){{1, 2, 3, 4}}, 32);\n  \
                 if (p) ((void (*)(void *))u2)(b); else s_u2((void *)b);\n  show(\"u2\", b);\n  \
                 memset(b, 0, 32);\n  \
                 if (p) ((void (*)(void *, long, long))s3)(b, 0x4008000000000001L, 0x4010000000000000L);\n  \
                 else s_s3((void *)b, 0x4008000000000001L, 0x4010000000000000L);\n  show(\"s3\", b);\n  \
                 memset(b, 0, 32);\n  \
                 if (p) ((void (*)(void *, void *))cp1)(b, s); else s_cp1((void *)b, (void *)s);\n  \
                 show(\"cp1\", b);\n  memset(b, 0, 32);\n  \
                 if (p) ((void (*)(void *, long, long))cp3)(b, 0x4000000000000001L, 0x3ff0000000000000L);\n  \
                 else s_cp3((void *)b, 0x4000000000000001L, 0x3ff0000000000000L);\n  show(\"cp3\", b);\n  \
                 memset(b, 0, 32);\n  \
                 if (p) ((void (*)(void *, unsigned))cp5)(b, 0x1fc00007u); else s_cp5((void *)b, 0x1fc00007u);\n  \
                 show(\"cp5\", b);\n}}\n\
                 int main(void) {{\n  run(1);\n  printf(\"--\\n\");\n  run(0);\n  return 0;\n}}\n"
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
            "the printed callers did not compile (off={off}):\n{}\n{printed}",
            String::from_utf8_lossy(&cc.stderr)
        );
        let run = process::required_output(&mut Command::new(&exe));
        let got = String::from_utf8_lossy(&run.stdout).to_string();
        let _ = std::fs::remove_dir_all(&dir);
        let (printed_run, source_run) = got.split_once("--\n").expect("both runs printed");
        assert_eq!(
            printed_run, source_run,
            "the printed callers store different bytes (off={off}):\n{printed}"
        );
    }
}

/// `fill` stores the eight bytes of `"ustar  "` through the buffer it hands
/// `peek`, whose recovered parameter is `unsigned char *`. Taken as a vote, that
/// type made `fill`'s parameter a byte pointer and `SplitDatatype` printed the
/// store as eight byte stores; the vote is refused because the caller writes
/// wider than the pointee. Checked at the default, which also types `fill`'s
/// parameter from its own dereferences, and with `--option ptrfromuse off`.
#[test]
fn a_byte_pointee_vote_keeps_the_callers_wide_stores() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_narrowvote_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    for off in [false, true] {
        let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", &sp];
        if off {
            args.extend_from_slice(&["--option", "ptrfromuse", "off"]);
        }
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let fill = stdout
            .split("// Function: ")
            .find(|c| c.starts_with("fill "))
            .expect("fill is printed");
        assert!(
            fill.contains("= 0x2020726174737575;"),
            "the eight-byte store was split (off={off}):\n{fill}"
        );
        assert!(
            !fill.contains("unsigned char *a0"),
            "the byte-pointer vote was taken (off={off}):\n{fill}"
        );
    }
}

/// The callee-first order runs the batch's `structsynth` convergence sweep too:
/// `fc` supersedes the structure `fb` minted, and `fb` is decompiled again onto
/// `fc`'s. The three readers make no direct calls, so the callee-first order is
/// the address order and the whole document equals the `protoorder off` one.
#[test]
fn callee_first_runs_the_structsynth_convergence_sweep() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/structsynthchain_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let base = [
        "decompile-all",
        bin.as_str(),
        "--sleighpath",
        sp.as_str(),
        "--option",
        "structsynth",
        "param",
    ];
    let (default, stderr, ok) = run_unlace(&base);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let mut off_args = base.to_vec();
    off_args.extend_from_slice(&["--option", "protoorder", "off"]);
    let (off, stderr, ok) = run_unlace(&off_args);
    assert!(
        ok,
        "unlace decompile-all --option protoorder off failed: {stderr}"
    );
    let proto = |name: &str| {
        default
            .lines()
            .find(|l| l.starts_with(&format!("long {name}(")))
            .map(str::to_string)
            .unwrap_or_default()
    };
    assert_eq!(
        proto("fb").replace("fb", "f"),
        proto("fc").replace("fc", "f"),
        "fb was not moved onto fc's structure:\n{default}"
    );
    assert_eq!(
        default, off,
        "the callee-first run differs from the address-order run"
    );
}

/// `fill_words` stores an eight-byte constant at each word of the buffer it hands
/// the byte-reading `peek`, and `fill_many` stores 520 of them at fixed places,
/// more addresses than the vote's access walk follows. Taken as a vote, `peek`'s
/// `unsigned char *` printed every one of those stores as eight byte stores; both
/// votes are refused, at the default and with `--option ptrfromuse off`.
#[test]
fn a_byte_pointee_vote_keeps_word_fills_and_long_callers_whole() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_widefill_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    for off in [false, true] {
        let mut args = vec!["decompile-all", bin.as_str(), "--sleighpath", &sp];
        if off {
            args.extend_from_slice(&["--option", "ptrfromuse", "off"]);
        }
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        for (name, store) in [
            ("fill_words", "= 0x102030405060708;"),
            ("fill_many", "= 0x2020726174737575;"),
        ] {
            let body = stdout
                .split("// Function: ")
                .find(|c| c.starts_with(&format!("{name} ")))
                .unwrap_or_else(|| panic!("{name} is printed"));
            assert!(
                body.contains(store),
                "{name}'s eight-byte store was split (off={off}):\n{body}"
            );
            assert!(
                !body.contains("unsigned char *a0"),
                "{name} took the byte-pointer vote (off={off}):\n{body}"
            );
        }
    }
}

/// `sum_words` reads words, so its recovered parameter is `int *`. `scramble`
/// reads and writes its buffer a byte at a time and refuses that vote, so its
/// byte accesses print without a cast; `xor_words` walks words over a
/// loop-carried offset before a byte tail and keeps a pointer, where a refusal
/// printed its buffer as a `long` handed to `sum_words`.
#[test]
fn a_byte_cursor_refuses_a_word_vote_unless_it_walks_whole_words() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/protoorder_bytecursor_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", bin.as_str(), "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let body = |name: &str| {
        stdout
            .split("// Function: ")
            .find(|c| c.starts_with(&format!("{name} ")))
            .unwrap_or_else(|| panic!("{name} is printed"))
    };
    let signature = |name: &str| {
        body(name)
            .lines()
            .find(|l| l.contains(&format!(" {name}(")))
            .unwrap_or_default()
            .to_string()
    };
    let scramble = body("scramble");
    assert!(
        signature("scramble").contains("char *a0,"),
        "scramble took the word vote:\n{scramble}"
    );
    assert!(
        !scramble.contains("char *)a0"),
        "scramble's byte accesses are cast:\n{scramble}"
    );
    let xor_words = body("xor_words");
    assert!(
        signature("xor_words").contains(" *a0,"),
        "xor_words lost its pointer:\n{xor_words}"
    );
}
