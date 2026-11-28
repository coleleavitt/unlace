//! Global references, short-circuit calls and load ordering in the printed C.

use super::*;

/// `globalref`: a constant address used as a pointer prints as the global it
/// names (`put(&dat_30004070)`), and the project header declares it at the
/// type the function uses it at (`extern struct_0 dat_30004070;`). The round
/// trip exports the fixture both ways, compiles each witness caller exactly as
/// printed against the export's own header, links it with every `dat_<addr>`
/// placed at `<addr>` and the fixture's data mapped where the binary keeps it,
/// and runs it: both arms must print what the binary prints. The witnesses
/// cover a record, two scalars, a table and its one-past-the-end, a `void *`
/// libc argument, a pointer compare and a `char *` that is not a string; four
/// controls keep the cast (storage also read directly at another width or
/// type, twice, and a value also ordered or divided as a number, twice).
#[test]
fn a_constant_address_named_as_a_global_round_trips_through_the_printed_c() {
    check_globalref_round_trip(cfg!(all(target_os = "linux", target_arch = "x86_64")));
}

#[test]
fn globalref_spellings_are_checked_without_native_execution() {
    check_globalref_round_trip(false);
}

fn check_globalref_round_trip(run_native: bool) {
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let bin = fixtures.join("globalref_x86_64");
    let sp = specs();
    let witnesses = [
        "w_struct",
        "w_scalar",
        "w_range",
        "w_buffer",
        "w_compare",
        "w_glyph",
        "w_direct",
        "w_numeric",
        "w_width",
        "w_count",
    ];
    let arms: [(&str, &[&str], &[&str]); 2] = [
        (
            "on",
            &[
                "return put(&dat_30004070) + 1;",
                "return setbits(&dat_30004090,&dat_30004098) + 1;",
                "return sum(&dat_30002020,&dat_30002030) + 1;",
                "memset(&dat_300040c0,0x78,8);",
                "a0 == &dat_30004060",
                "return strlen(&dat_30002034) + 1;",
                "return put((struct_0 *)0x30004060) + v1;",
                "setbits((unsigned int *)0x30004090,&dat_30004098);",
                "return dat_300040a0 + strlen((char *)0x300040a0);",
                "memset((void *)0x300040c0,0,4);",
            ],
            &[
                "extern struct_0 dat_30004070;",
                "extern unsigned int dat_30004090;",
                "extern int dat_30002030;",
            ],
        ),
        (
            "off",
            &[
                "return put((struct_0 *)0x30004070) + 1;",
                "return setbits((unsigned int *)0x30004090,(long *)0x30004098) + 1;",
                "memset((void *)0x300040c0,0x78,8);",
                "a0 == (long *)0x30004060",
            ],
            &[],
        ),
    ];
    let expected = run_native.then(|| {
        let output = process::required_output(&mut Command::new(&bin));
        let text = String::from_utf8_lossy(&output.stdout).trim().to_string();
        assert_eq!(
            text, "210 21 27 121 1 0 4 229 1 -8608764254683430263 2",
            "the fixture itself"
        );
        text
    });
    if !run_native {
        eprintln!("globalref round trip: native execution disabled; checking all spellings");
    }
    let dir = common::scratch_file("globalref-round-trip", "dir");
    std::fs::create_dir(&dir).unwrap();
    let harness = dir.join("main.c");
    std::fs::write(
        &harness,
        GLOBALREF_HARNESS.replace("@FIXTURE@", bin.to_str().unwrap()),
    )
    .unwrap();
    for (arm, want, decls) in arms {
        let out = dir.join(arm);
        let (_, stderr, ok) = run_unlace(&[
            "decompile-project",
            bin.to_str().unwrap(),
            "-o",
            out.to_str().unwrap(),
            "--sleighpath",
            sp.as_str(),
            "--option",
            "globalref",
            arm,
        ]);
        assert!(ok, "unlace decompile-project failed: {stderr}");
        let header = std::fs::read_to_string(out.join("globalref_x86_64.h")).unwrap();
        let code = std::fs::read_to_string(out.join("globalref_x86_64.c")).unwrap();
        for w in want {
            assert!(code.contains(w), "{arm}: missing `{w}`:\n{code}");
        }
        for d in decls {
            assert!(
                header.contains(d),
                "{arm}: the header does not declare `{d}`:\n{header}"
            );
        }
        if arm == "off" {
            assert!(
                !header.contains("globals the code names by address"),
                "{header}"
            );
        }
        let mut printed = String::from("#include \"globalref_x86_64.h\"\n");
        for w in witnesses {
            let head = format!("// Function: {w} @ ");
            let at = code
                .find(&head)
                .unwrap_or_else(|| panic!("{arm}: no `{w}` in the export"));
            let end = code[at + head.len()..]
                .find("// Function: ")
                .map_or(code.len(), |e| at + head.len() + e);
            printed.push_str(&code[at..end]);
        }
        let mut names: Vec<String> = Vec::new();
        for (i, _) in printed.match_indices("dat_") {
            let hex: String = printed[i + 4..]
                .chars()
                .take_while(|c| c.is_ascii_hexdigit())
                .collect();
            let name = format!("dat_{hex}");
            if !hex.is_empty() && !names.contains(&name) {
                names.push(name);
            }
        }
        let undeclared: String = names
            .iter()
            .filter(|n| !header.contains(&format!(" {n};")))
            .map(|n| match n.as_str() {
                "dat_300040c3" => format!("extern char {n};\n"),
                _ => format!("extern long {n};\n"),
            })
            .collect();
        printed.insert_str(printed.find('\n').unwrap() + 1, &undeclared);
        std::fs::write(out.join("printed.c"), &printed).unwrap();
        let Some(expected) = &expected else { continue };
        for cc in ["gcc", "clang"] {
            if process::optional_output(Command::new(cc).arg("--version")).is_none() {
                eprintln!("globalref round trip: no `{cc}`");
                continue;
            }
            let exe = out.join(format!("rt-{cc}"));
            let mut args: Vec<String> = [
                "-std=gnu11",
                "-w",
                "-O0",
                "-fno-builtin",
                "-no-pie",
                "-DGLOBALREF_CALLEES_ONLY",
                "-o",
            ]
            .iter()
            .map(|s| s.to_string())
            .collect();
            args.push(exe.to_str().unwrap().to_string());
            args.push(harness.to_str().unwrap().to_string());
            args.push(out.join("printed.c").to_str().unwrap().to_string());
            args.push(
                fixtures
                    .join("globalref_x86_64.c")
                    .to_str()
                    .unwrap()
                    .to_string(),
            );
            for n in &names {
                args.push(format!("-Wl,--defsym,{n}=0x{}", &n[4..]));
            }
            let built = Command::new(cc)
                .args(&args)
                .args(common::CC_GCC15_DEMOTE)
                .current_dir(&out)
                .output()
                .expect("spawn cc");
            assert!(
                built.status.success(),
                "{arm}/{cc}: the printed callers did not compile:\n{}\n{printed}",
                String::from_utf8_lossy(&built.stderr)
            );
            let run = process::required_output(&mut Command::new(&exe));
            let got = String::from_utf8_lossy(&run.stdout).trim().to_string();
            assert_eq!(
                got, *expected,
                "{arm}/{cc}: the printed callers compute something else:\n{printed}"
            );
        }
    }
    let _ = std::fs::remove_dir_all(&dir);
}

/// The `globalref` round trip's `main`: map the fixture's non-executable load
/// segments at their own addresses, then call the printed witnesses in the
/// order the fixture's own `main` does.
const GLOBALREF_HARNESS: &str = r#"#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
long w_struct(void); long w_scalar(void); long w_range(void); int w_buffer(void);
unsigned long w_compare(void *); long w_glyph(void); long w_direct(void); _Bool w_numeric(unsigned long);
long w_width(void); unsigned long w_count(unsigned long);
int main(void) {
  int fd = open("@FIXTURE@", O_RDONLY);
  Elf64_Ehdr eh; pread(fd, &eh, sizeof eh, 0);
  for (int i = 0; i < eh.e_phnum; i++) {
    Elf64_Phdr ph; pread(fd, &ph, sizeof ph, eh.e_phoff + i * sizeof ph);
    if (ph.p_type != PT_LOAD || (ph.p_flags & PF_X)) continue;
    unsigned long lo = ph.p_vaddr & ~0xfffUL, hi = (ph.p_vaddr + ph.p_memsz + 0xfff) & ~0xfffUL;
    if (mmap((void *)lo, hi - lo, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0) != (void *)lo) return 2;
    pread(fd, (void *)ph.p_vaddr, ph.p_filesz, ph.p_offset);
  }
  long a = w_struct(); long b = w_scalar(); long c = w_range(); int d = w_buffer();
  int e = (int)w_compare((void *)0x30004060); int f = (int)w_compare((void *)0x30004070);
  long g = w_glyph(); long h = w_direct(); long i = w_numeric(1); long j = w_width();
  long k = (long)w_count(0x7fffffff);
  printf("%ld %ld %ld %d %d %d %ld %ld %ld %ld %ld\n", a, b, c, d, e, f, g, h, i, j, k);
  return 0;
}
"#;

/// A call whose result meets a comparison through a non-short-circuit `&` is
/// always made by the binary.  `foldcallret` used to fold it into the right-hand
/// operand of the `&&`/`||` the printer emits, `if (a0 <= 5 || tick(a0))`, so
/// the printed C skipped it whenever the left-hand side decided (GH-684).  The
/// round trip compiles `w1f` and `w4f` as printed and counts the calls: each
/// fixture prints `2 0` (`calls`, `gflag`) for an argument of 1.  clang -O0 puts
/// the call on the left, where it is always evaluated and still folds.
#[test]
fn a_call_in_a_short_circuit_operand_round_trips_through_the_printed_c() {
    let sp = specs();
    let fixtures: [(&str, &[&str], &[&str]); 3] = [
        (
            "foldcallret_sc_gcc_O0_x86_64",
            &[
                "v1 = tick(a0);",
                "if (6 <= a0 && !v1)",
                "gflag = (unsigned int)(5 < a0 && !v1);",
            ],
            &["|| tick(", "&& !tick("],
        ),
        (
            "foldcallret_sc_clang_O0_x86_64",
            &[
                "if (!tick(a0) && 6 <= a0)",
                "gflag = (unsigned int)(!tick(a0) && 5 < a0);",
            ],
            &[],
        ),
        (
            "foldcallret_sc_clang_O2_x86_64",
            &["v1 = tick(a0);", "gflag = (unsigned int)(6 <= a0 && !v1);"],
            &["&& !tick("],
        ),
    ];
    for (name, want, never) in fixtures {
        let bin = repo_root()
            .join("crates/unlace-analysis/tests/fixtures")
            .join(name)
            .to_str()
            .unwrap()
            .to_string();
        let (stdout, stderr, ok) = run_unlace(&[
            "decompile-all",
            bin.as_str(),
            "--functions",
            "w1f,w4f",
            "--sleighpath",
            sp.as_str(),
        ]);
        assert!(ok, "unlace decompile-all failed on {name}: {stderr}");
        for w in want {
            assert!(stdout.contains(w), "{name}: missing `{w}`:\n{stdout}");
        }
        for n in never {
            assert!(
                !stdout.contains(n),
                "{name}: the call was folded into a right-hand operand (`{n}`):\n{stdout}"
            );
        }

        if process::optional_output(Command::new("cc").arg("--version")).is_none() {
            eprintln!("foldcallret short-circuit round trip: no `cc`, spelling checked only");
            continue;
        }
        let dir = std::env::temp_dir().join(format!(
            "unlace-foldcallret-sc-{}-{name}",
            std::process::id()
        ));
        std::fs::create_dir_all(&dir).unwrap();
        let src = dir.join("rt.c");
        let exe = dir.join("rt");
        std::fs::write(
            &src,
            format!(
                "#include <stdio.h>\nint calls;\nint gflag;\nint tick(int x) {{ calls++; return x - 3; }}\n{stdout}\n\
                 int main(void) {{\n  w1f(1);\n  w4f(1);\n  printf(\"%d %d\\n\", calls, gflag);\n  return 0;\n}}\n"
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
            "{name}: the printed C did not compile:\n{}",
            String::from_utf8_lossy(&cc.stderr)
        );
        let run = process::required_output(&mut Command::new(&exe));
        let got = String::from_utf8_lossy(&run.stdout).trim().to_string();
        let _ = std::fs::remove_dir_all(&dir);
        assert_eq!(
            got, "2 0",
            "{name}: the printed C makes a different number of calls than the binary:\n{stdout}"
        );
    }
}

/// A load whose bytes a later store overwrites keeps its own statement ahead of
/// the store.  Whether a load may print after a store was decided by comparing
/// the two pointers alone, and one base plus two different constants counted as
/// two objects whatever the access widths: `inside` (a 4-byte read at `p+7`, a
/// byte store at `p+8`) printed the store first and then `return *(unsigned int
/// *)(a0 + 7);`, which returns the new byte.  The parameter is declared
/// `void *` by `ptrfromuse`, so the accesses through it carry a `(long)` cast.  `below` stores below the read,
/// `indexed` one element into an 8-byte read; `after`, `before` and `next` store
/// next to the read bytes, not into them, and keep the read folded.  The round
/// trip compiles the six printed functions and checks each against its source.
#[test]
fn a_load_is_not_printed_after_a_store_into_its_bytes() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/aliasoverlap_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        bin.as_str(),
        "--functions",
        "inside,below,after,before,indexed,next",
        "--sleighpath",
        sp.as_str(),
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let body = |name: &str| -> String {
        let at = stdout
            .find(&format!("// Function: {name} @"))
            .unwrap_or_else(|| panic!("no {name}:\n{stdout}"));
        let rest = &stdout[at + 1..];
        rest[..rest.find("// Function:").unwrap_or(rest.len())].to_string()
    };
    let ordered = [
        (
            "inside",
            "*(unsigned int *)((long)a0 + 7);",
            "((char *)a0)[8] = ",
        ),
        (
            "below",
            "*(unsigned int *)((long)a0 + 7);",
            "*(unsigned int *)((long)a0 + 5) = ",
        ),
        (
            "indexed",
            "*(unsigned long *)(a0 + a1 * 4);",
            "*(unsigned int *)(a0 + 4 + a1 * 4) = ",
        ),
        (
            "after",
            "((char *)a0)[0xb] = ",
            "return *(unsigned int *)((long)a0 + 7);",
        ),
        (
            "before",
            "((char *)a0)[6] = ",
            "return *(unsigned int *)((long)a0 + 7);",
        ),
        ("next", "a0[a1 + 1] = ", "return a0[a1];"),
    ];
    for (name, first, second) in ordered {
        let b = body(name);
        let (i, j) = (b.find(first), b.find(second));
        assert!(
            i.is_some() && j.is_some() && i < j,
            "{name}: `{first}` must print before `{second}`:\n{b}"
        );
    }

    if process::optional_output(Command::new("cc").arg("--version")).is_none() {
        eprintln!("aliasoverlap round trip: no `cc`, order checked only");
        return;
    }
    let dir = std::env::temp_dir().join(format!("unlace-aliasoverlap-rt-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let src = dir.join("rt.c");
    let exe = dir.join("rt");
    let harness = r#"#include <stdio.h>
#include <string.h>
@PRINTED@
static unsigned ref_inside(unsigned char *p, unsigned w) { unsigned v; memcpy(&v, p + 7, 4); p[8] = w; return v; }
static unsigned ref_below(unsigned char *p, unsigned w) { unsigned v; memcpy(&v, p + 7, 4); memcpy(p + 5, &w, 4); return v; }
static unsigned ref_after(unsigned char *p, unsigned w) { unsigned v; memcpy(&v, p + 7, 4); p[11] = w; return v; }
static unsigned ref_before(unsigned char *p, unsigned w) { unsigned v; memcpy(&v, p + 7, 4); p[6] = w; return v; }
static unsigned long ref_indexed(unsigned *a, long i, unsigned w) { unsigned long v; memcpy(&v, a + i, 8); a[i + 1] = w; return v; }
static unsigned ref_next(unsigned *a, long i, unsigned w) { unsigned v = a[i]; a[i + 1] = w; return v; }
static void fill(void *p, void *q, int n) {
  for (int i = 0; i < n; i++) ((unsigned char *)p)[i] = ((unsigned char *)q)[i] = (unsigned char)(i * 37 + 0x81);
}
int main(void) {
  int bad = 0;
  unsigned char b[32], r[32];
#define CHECK(T, f, ...) \
  fill(b, r, 32); \
  { T got = ((T (*)())f)((void *)b, __VA_ARGS__), want = ref_##f((void *)r, __VA_ARGS__); \
    if (got != want || memcmp(b, r, 32)) { printf(#f " %lx != %lx\n", (unsigned long)got, (unsigned long)want); bad++; } }
  CHECK(unsigned, inside, 0x5au)
  CHECK(unsigned, below, 0x5au)
  CHECK(unsigned, after, 0x5au)
  CHECK(unsigned, before, 0x5au)
  CHECK(unsigned long, indexed, 2L, 0x5au)
  CHECK(unsigned, next, 4L, 0x5au)
  printf("%d\n", bad);
  return 0;
}
"#;
    std::fs::write(&src, harness.replace("@PRINTED@", &stdout)).unwrap();
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
        "the printed functions did not compile:\n{}",
        String::from_utf8_lossy(&cc.stderr)
    );
    let run = process::required_output(&mut Command::new(&exe));
    let got = String::from_utf8_lossy(&run.stdout).to_string();
    let _ = std::fs::remove_dir_all(&dir);
    assert_eq!(
        got.lines().last(),
        Some("0"),
        "the printed functions read different bytes:\n{got}\n{stdout}"
    );
}

/// A typed read that spans several fields is not split at a COPY that lies past
/// a store or a call.  `SplitDatatype::split_load` built the per-field reads at
/// the read's lone COPY into the return register, so `intospan` printed
/// `s->c9 = (char)w;` and then read `s->c7`..`s->c10`, returning the new byte;
/// `otherptr` (called with `t == s`) and `acrosscall` (whose `sink` bumps
/// `s->c8`) did the same.  `plain`, with nothing between the read and its COPY,
/// still splits.  The round trip rewrites the printed partial writes
/// (`v1._0_1_ = ...`) as byte stores, compiles the four functions and checks
/// each against its source.
#[test]
fn a_split_load_is_not_moved_past_a_store_or_a_call() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/splitload_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        bin.as_str(),
        "--functions",
        "intospan,otherptr,acrosscall,plain",
        "--sleighpath",
        sp.as_str(),
    ]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let body = |name: &str| -> String {
        let at = stdout
            .find(&format!("// Function: {name} @"))
            .unwrap_or_else(|| panic!("no {name}:\n{stdout}"));
        let rest = &stdout[at + 1..];
        rest[..rest.find("// Function:").unwrap_or(rest.len())].to_string()
    };
    let read = "v1 = *(unsigned int *)&s->c7;";
    for (name, after) in [
        ("intospan", "s->c9 = w;"),
        ("otherptr", "t->c9 = w;"),
        ("acrosscall", "sink(s);"),
    ] {
        let b = body(name);
        let (i, j) = (b.find(read), b.find(after));
        assert!(
            i.is_some() && j.is_some() && i < j,
            "{name}: `{read}` must print before `{after}`:\n{b}"
        );
    }
    assert!(
        body("plain").contains("*(char *)&v1 = s->c7;"),
        "plain no longer splits:\n{}",
        body("plain")
    );

    if process::optional_output(Command::new("cc").arg("--version")).is_none() {
        eprintln!("splitload round trip: no `cc`, order checked only");
        return;
    }
    let partial = regex::Regex::new(r"(\w+)\._(\d+)_(\d+)_ = ").unwrap();
    let printed = partial.replace_all(&stdout, |c: &regex::Captures| {
        let ty = match &c[3] {
            "1" => "unsigned char",
            "2" => "unsigned short",
            "4" => "unsigned int",
            _ => "unsigned long",
        };
        format!("*({ty} *)((char *)&{} + {}) = ", &c[1], &c[2])
    });
    let dir = std::env::temp_dir().join(format!("unlace-splitload-rt-{}", std::process::id()));
    std::fs::create_dir_all(&dir).unwrap();
    let src = dir.join("rt.c");
    let exe = dir.join("rt");
    let harness = r#"#include <stdio.h>
#include <string.h>
typedef struct S { int i0; char c4, c5, c6, c7, c8, c9, c10, c11; } S;
void sink(S *s) { s->c8 = (char)(s->c8 + 0x11); }
@PRINTED@
static unsigned ref_intospan(S *s, int w) { unsigned v; memcpy(&v, &s->c7, 4); s->c9 = w; return v; }
static unsigned ref_otherptr(S *s, S *t, int w) { unsigned v; memcpy(&v, &s->c7, 4); t->c9 = w; return v; }
static unsigned ref_acrosscall(S *s) { unsigned v; memcpy(&v, &s->c7, 4); sink(s); return v; }
static unsigned ref_plain(S *s) { unsigned v; memcpy(&v, &s->c7, 4); return v; }
static void fill(S *p, S *q) {
  for (int i = 0; i < (int)sizeof(S); i++) ((unsigned char *)p)[i] = ((unsigned char *)q)[i] = (unsigned char)(i * 37 + 0x81);
}
int main(void) {
  int bad = 0;
  S a, r;
  unsigned got, want;
#define CHECK(name, call, ref) \
  fill(&a, &r); got = call; want = ref; \
  if (got != want || memcmp(&a, &r, sizeof a)) { printf(name " %08x != %08x\n", got, want); bad++; }
  CHECK("intospan", intospan(&a, 0x5a), ref_intospan(&r, 0x5a))
  CHECK("otherptr", otherptr(&a, &a, 0x5a), ref_otherptr(&r, &r, 0x5a))
  CHECK("acrosscall", acrosscall(&a), ref_acrosscall(&r))
  CHECK("plain", plain(&a), ref_plain(&r))
  printf("%d\n", bad);
  return 0;
}
"#;
    std::fs::write(&src, harness.replace("@PRINTED@", &printed)).unwrap();
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
        "the printed functions did not compile:\n{}",
        String::from_utf8_lossy(&cc.stderr)
    );
    let run = process::required_output(&mut Command::new(&exe));
    let got = String::from_utf8_lossy(&run.stdout).to_string();
    let _ = std::fs::remove_dir_all(&dir);
    assert_eq!(
        got.lines().last(),
        Some("0"),
        "the printed functions read different bytes:\n{got}\n{printed}"
    );
}

/// A call's own return-address push is part of the call.
/// Every function between the `tested` markers of `callpush_x86_64.c` calls
/// `alloca`, so its stack pointer is the entry value minus a run-time size and
/// each later call stored its return address through that pointer as a
/// statement, `*(unsigned long *)&v9[v5 + -8] = 0x14e7;`.  For the gcc -O0,
/// gcc -O2, clang -O0 and clang -O2 builds, none of the listed return addresses
/// (each is the address after a `call` in the tested functions, from
/// `objdump -d`) prints as a store, while the push of `call 1f` in `pc_here`,
/// whose destination is the stored address and which the function reads back,
/// still does.  The printed alloca frames are not compilable C (the alloca
/// itself prints as stack-pointer arithmetic, and `spread`'s stack arguments do
/// not reach the call), so the check is the statement set, not a run: the
/// removed store writes the slot below the stack pointer that only the callee's
/// `ret` reads.
#[test]
fn a_calls_own_return_address_push_is_part_of_the_call() {
    let fx = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let src = std::fs::read_to_string(fx.join("callpush_x86_64.c")).unwrap();
    let tested_src = src
        .split("/* tested */")
        .nth(1)
        .unwrap()
        .split("/* main */")
        .next()
        .unwrap();
    let tested: Vec<&str> = tested_src
        .lines()
        .filter_map(|l| l.strip_prefix("KEEP long "))
        .filter_map(|l| l.split('(').next())
        .collect();
    assert_eq!(tested, ["joined", "stacked", "twice", "pc_here"]);
    let builds: [(&str, &[&str], Option<&str>); 4] = [
        (
            "gcc_O0",
            &[
                "0x139d", "0x13d1", "0x13ee", "0x14e7", "0x1557", "0x1637", "0x165c", "0x1708",
                "0x172d",
            ],
            Some("0x1802"),
        ),
        (
            "gcc_O2",
            &[
                "0x1397", "0x13b1", "0x13bd", "0x148b", "0x14c4", "0x1583", "0x1593", "0x15f3",
                "0x1602",
            ],
            Some("0x16b0"),
        ),
        (
            "clang_O0",
            &[
                "0x1249", "0x1256", "0x1289", "0x12b2", "0x12c3", "0x131b", "0x1390", "0x13d6",
                "0x13ef", "0x1427", "0x144d",
            ],
            None,
        ),
        (
            "clang_O2",
            &[
                "0x11f9", "0x1204", "0x1231", "0x124d", "0x1259", "0x12bb", "0x12f7", "0x133e",
                "0x134e", "0x1378",
            ],
            Some("0x13c5"),
        ),
    ];
    let sp = specs();
    for (build, pushes, call_next) in builds {
        let bin = fx.join(format!("callpush_{build}_x86_64"));
        // `alloca off`: the pushes below a dynamic allocation stay stores
        // through stack arithmetic, which is what the strings below match.
        let args = [
            "decompile-all",
            bin.to_str().unwrap(),
            "--sleighpath",
            sp.as_str(),
            "--option",
            "alloca",
            "off",
        ];
        let (stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "unlace decompile-all failed: {stderr}");
        let mut body = String::new();
        for part in stdout.split("// Function: ").skip(1) {
            if tested.contains(&part.split(' ').next().unwrap_or("")) {
                body.push_str(part);
            }
        }
        for name in &tested {
            assert!(
                body.starts_with(name) || body.contains(&format!("\n{name} ")),
                "{build}: no `{name}`\n{stdout}"
            );
        }
        for p in pushes {
            let stored = format!("= {p};");
            assert!(
                !body.contains(&stored),
                "{build}: the push of return address {p} is still printed\n{body}"
            );
        }
        if let Some(p) = call_next {
            let stored = format!("= {p};");
            assert!(
                body.contains(&stored),
                "{build}: the push `call 1f` reads back is lost\n{body}"
            );
        }
    }
}
