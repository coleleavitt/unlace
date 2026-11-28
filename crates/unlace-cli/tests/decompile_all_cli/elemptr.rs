//! Element pointers and narrow reads, round-tripped through the printed C.

use super::*;

/// `elemptr`: a pointer the program uses only as an array of one element type
/// is declared as that pointer, so a textbook base64 decoder reads
/// `dat_30004060[v2]`, `a0[v7]` and `v6[v8]` instead of three integer sums behind
/// casts. The round trip exports `elemptr_x86_64.c`'s gcc -O0, clang -O0 and
/// gcc -O2 builds with the option on and off, compiles the witnesses exactly as
/// printed against the export's own header with gcc and clang, links every
/// `dat_<addr>` at `<addr>` with the fixture's data mapped where the binary keeps
/// it, and runs them: both arms must print what the binary prints. The inputs
/// read bytes at and above 0x80 signed and unsigned, use them as indexes both
/// ways, index backwards from the end of an `int` array, read a `.data` table
/// of `int`s, fill a table through a global the program allocated, and return
/// an allocated buffer to the caller. Two controls keep their integer form: a
/// record walked by a stride, and one pointer read at two widths. A second line
/// reads tables whose elements have the top bit set: a `unsigned short` and an
/// `unsigned int` element returned to a caller that widens them (declared
/// signed, the callers would sign-extend; they add to the whole register, so
/// the functions return `unsigned long`, as declared), one shifted and one only compared,
/// and a byte table one function zero-extends and another sign-extends (the
/// header can declare it at one sign only, so neither indexes it). At -O2, gcc's
/// `w_rev` returns the `malloc` result it never copies out of `rax`, and unlace
/// declares it `void` in both arms (a return-recovery gap outside this option),
/// so that build's round trip does not compare the reversed string. A third
/// line copies a string into buffers bounded by a length the function compares
/// a pointer difference against (the length stays `unsigned long`, never a
/// `char *` base), and stores an `int` counter into an `unsigned` table and
/// indexes a second table with its elements (the counter stays `int`). A
/// fourth line reads a global `int *` two functions index and two others step
/// by bytes, a table one function indexes and two others name the first
/// element of, and a 2-byte field at the end of a readable page through a
/// pointer a callee reads as `unsigned int *`: no function may type the global
/// or the table (the batch's one declaration would rescale the others' byte
/// arithmetic, or make the scalar the array), and the field is read 2 bytes
/// wide (a 4-byte element read would fault). A global the header declines as
/// read at two types is compiled at the pointer that header comment lists, the
/// type the batch would commit, so a disagreement cannot hide behind `char *`.
/// A fifth line returns 8-byte elements above 2^32 from a function that loads
/// them through an address computed in the register it returns them in
/// (`w_nexttab`, coreutils `expand`'s `get_next_tab_column`), which is never
/// declared to return that address's type. A sixth line compares and hashes a
/// 15-byte table with a zero byte inside it through parameters the option
/// types `char *` (`w_chk`, `w_hash`) and through a parameter merged with it
/// (`w_pick`): the table is passed as its address, never as a string literal
/// that ends at the zero byte while the reader takes all fifteen.
#[test]
fn an_element_pointer_round_trips_through_the_printed_c() {
    check_elemptr_round_trip(cfg!(all(target_os = "linux", target_arch = "x86_64")));
}

#[test]
fn elemptr_spellings_are_checked_without_native_execution() {
    check_elemptr_round_trip(false);
}

fn check_elemptr_round_trip(run_native: bool) {
    let fixtures = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let sp = specs();
    let witnesses = [
        "w_build",
        "w_decode",
        "w_sbytes",
        "w_ubytes",
        "w_words",
        "w_back",
        "w_sidx",
        "w_table",
        "w_rev",
        "w_record",
        "w_mixed",
        "w_wu",
        "w_wucall",
        "w_iu",
        "w_iucall",
        "w_iu2",
        "w_srch",
        "w_xu",
        "w_xs",
        "w_put",
        "w_ctr",
        "w_gpinit",
        "w_gpbump",
        "w_gpadv",
        "w_gpread",
        "w_tidx",
        "w_tfirst",
        "w_tset",
        "w_sum4",
        "w_hdr",
        "w_nexttab",
        "w_tabinit",
        "w_bcmp",
        "w_chk",
        "w_hsum",
        "w_hash",
        "w_pick",
    ];
    let on: &[&str] = &[
        "char * w_decode(char *a0,unsigned long a1,unsigned long *a2)",
        "long w_sbytes(char *a0,int a1)",
        "long w_ubytes(unsigned char *a0,int a1)",
        "long w_sidx(char *a0,int a1,int *a2)",
        "long w_mixed(char *a0,int a1)",
        "unsigned long w_wu(unsigned int a0)",
        "unsigned long w_iu(unsigned int a0)",
        "w_put(char *a0,unsigned long a1,char *a2)",
        "w_ctr(unsigned int *a0,",
        "long w_hsum(char *a0,long a1)",
        "long w_pick(char *a0,long a1,int a2)",
    ];
    let off: &[&str] = &["void * w_decode(long a0,unsigned long a1,unsigned long *a2)"];
    if !run_native {
        eprintln!("elemptr round trip: native execution disabled; checking all spellings");
    }
    let dir = common::scratch_file("elemptr-round-trip", "dir");
    std::fs::create_dir(&dir).unwrap();
    for build in ["gcc_O0", "clang_O0", "gcc_O2"] {
        let stem = format!("elemptr_{build}_x86_64");
        let bin = fixtures.join(&stem);
        let rev_broken = build == "gcc_O2";
        let expected = run_native.then(|| {
            let output = process::required_output(&mut Command::new(&bin));
            let mut text = String::from_utf8_lossy(&output.stdout).trim().to_string();
            if rev_broken {
                let mut fields: Vec<&str> = text.split(' ').collect();
                fields[3] = "-";
                text = fields.join(" ");
            }
            text
        });
        for arm in ["on", "off"] {
            let harness = dir.join(format!("main-{build}-{arm}.c"));
            std::fs::write(
                &harness,
                ELEMPTR_HARNESS
                    .replace("@FIXTURE@", bin.to_str().unwrap())
                    .replace("@REV@", if rev_broken { "0" } else { "1" }),
            )
            .unwrap();
            let out = dir.join(format!("{build}-{arm}"));
            let (_, stderr, ok) = run_unlace(&[
                "decompile-project",
                bin.to_str().unwrap(),
                "-o",
                out.to_str().unwrap(),
                "--sleighpath",
                sp.as_str(),
                "--option",
                "elemptr",
                arm,
            ]);
            assert!(ok, "unlace decompile-project failed: {stderr}");
            let header = std::fs::read_to_string(out.join(format!("{stem}.h"))).unwrap();
            let code = std::fs::read_to_string(out.join(format!("{stem}.c"))).unwrap();
            for w in if arm == "on" { on } else { off } {
                assert!(code.contains(w), "{build} {arm}: missing `{w}`:\n{code}");
            }
            assert!(
                code.contains("long w_table(int a0)"),
                "{build} {arm}:\n{code}"
            );
            assert!(
                !code.contains("w_put(char *a0,char *a1"),
                "{build} {arm}: the length is a number:\n{code}"
            );
            assert!(
                !code.contains("(unsigned short)a0[1]"),
                "{build} {arm}: the 2-byte field is read 4 wide:\n{code}"
            );
            assert!(
                code.contains("unsigned long w_nexttab(unsigned long a0,"),
                "{build} {arm}: the returned element is a number:\n{code}"
            );
            assert!(
                !code.contains("\"0!0"),
                "{build} {arm}: the table with a zero byte inside is a string literal:\n{code}"
            );
            if arm == "on" {
                assert!(
                    header.contains("extern unsigned char dat_"),
                    "{build}: the encoding table:\n{header}"
                );
                assert!(
                    header.contains("extern int dat_"),
                    "{build}: the weights table:\n{header}"
                );
                assert!(
                    !code.contains("(long)v6 + (long)v8"),
                    "{build}: the decoded buffer:\n{code}"
                );
                assert!(
                    header.contains("extern unsigned short dat_"),
                    "{build}: the word table:\n{header}"
                );
                assert!(
                    !header
                        .lines()
                        .any(|l| l.contains("[];") && l.contains("also used as")),
                    "{build}: one table declared at two elements:\n{header}"
                );
            }
            let mut printed =
                format!("#include <stddef.h>\n#include <stdlib.h>\n#include \"{stem}.h\"\n");
            let mut bodies = String::new();
            for w in witnesses {
                let head = format!("// Function: {w} @ ");
                let at = code
                    .find(&head)
                    .unwrap_or_else(|| panic!("{build} {arm}: no `{w}` in the export"));
                let end = code[at + head.len()..]
                    .find("// Function: ")
                    .map_or(code.len(), |e| at + head.len() + e);
                bodies.push_str(&code[at..end]);
            }
            let mut names: Vec<String> = Vec::new();
            for (i, _) in bodies.match_indices("dat_") {
                let hex: String = bodies[i + 4..]
                    .chars()
                    .take_while(|c| c.is_ascii_hexdigit())
                    .collect();
                let name = format!("dat_{hex}");
                if !hex.is_empty() && !names.contains(&name) {
                    names.push(name);
                }
            }
            for n in &names {
                if header.contains(&format!(" {n};")) || header.contains(&format!(" {n}[];")) {
                    continue;
                }
                let listed = header.lines().find_map(|l| {
                    let why = l.split_once(&format!("/* {n} is "))?.1;
                    let decls = why
                        .split_once("so it is not declared: ")?
                        .1
                        .trim_end_matches(" */");
                    let views: Vec<_> = decls.split(", ").collect();
                    let byte_address = !bodies.contains(&format!("{n}["))
                        && views.iter().any(|d| {
                            *d == format!("long {n}") || *d == format!("unsigned long {n}")
                        });
                    if byte_address {
                        assert!(
                            !header
                                .lines()
                                .any(|line| line.starts_with("extern ") && line.contains(n))
                        );
                        Some(format!("long {n}"))
                    } else {
                        views
                            .into_iter()
                            .find(|d| d.contains('*') || d.ends_with("[]"))
                            .map(str::to_string)
                    }
                });
                // A name the header leaves out is main's integer global; one the
                // bodies subscript is a pointer.
                let guess = if bodies.contains(&format!("{n}[")) {
                    format!("char *{n}")
                } else {
                    format!("long {n}")
                };
                printed.push_str(&format!("extern {};\n", listed.unwrap_or(guess)));
            }
            printed.push_str(&bodies);
            std::fs::write(out.join("printed.c"), &printed).unwrap();
            let Some(expected) = &expected else { continue };
            for cc in ["gcc", "clang"] {
                if process::optional_output(Command::new(cc).arg("--version")).is_none() {
                    eprintln!("elemptr round trip: no `{cc}`");
                    continue;
                }
                let exe = out.join(format!("rt-{cc}"));
                // Clang 16+ and gcc 14 make these errors, which `-w` does not
                // silence; a guessed declaration of an undeclared global trips them.
                let mut args: Vec<String> = [
                    "-std=gnu11",
                    "-w",
                    "-Wno-error=int-conversion",
                    "-Wno-error=incompatible-pointer-types",
                    "-O0",
                    "-fno-builtin",
                    "-no-pie",
                    "-o",
                ]
                .iter()
                .map(|s| s.to_string())
                .collect();
                args.push(exe.to_str().unwrap().to_string());
                args.push(harness.to_str().unwrap().to_string());
                args.push(out.join("printed.c").to_str().unwrap().to_string());
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
                    "{build} {arm}/{cc}: the printed witnesses did not compile:\n{}\n{printed}",
                    String::from_utf8_lossy(&built.stderr)
                );
                let run = process::required_output(&mut Command::new(&exe));
                let mut got = String::from_utf8_lossy(&run.stdout).trim().to_string();
                let mut want = expected.clone();
                // gcc -O2 with the option off (main): `w_tabinit` fills the table
                // through `unsigned long *` and `w_nexttab` reads it as an integer
                // sum, and the header declares neither, so no one declaration
                // computes both; with the option on both read `dat_<addr>[i]`.
                if build == "gcc_O2" && arm == "off" {
                    let four = |t: &str| t.lines().take(4).collect::<Vec<_>>().join("\n");
                    got = four(&got);
                    want = four(&want);
                }
                assert_eq!(
                    got, want,
                    "{build} {arm}/{cc}: the printed witnesses compute something else:\n{printed}"
                );
            }
        }
    }
    let _ = std::fs::remove_dir_all(&dir);
}

/// A read or a write narrower than the field or element its pointer is typed to
/// keeps its own width.  `narrowload_x86_64.c` reads the low bytes, one byte and
/// a masked byte of a record's 4-byte field and of its 8-byte field on a path
/// that never reads the whole field, the low half of an element one past a
/// `long` walk, and two bytes past a callee's `unsigned int` element, and writes
/// one, two and four bytes the same ways.  `main` passes each an object that
/// ends at the last byte the function touches, at the end of a readable page.
/// unlace printed `(unsigned short)a0->field_0x8`, `(a0->field_0x8 & 0x2000) != 0`
/// and `(int)a0[a1]`, which read the whole field or element and fault there.
/// The round trip exports the gcc and clang -O0 and -O2 builds with `elemptr` on
/// and off, compiles every function between the fixture's markers exactly as
/// printed against the export's header, links it with the fixture's own prelude
/// and `main` compiled on their own, and runs it: it must print what the binary
/// prints.
#[test]
fn a_narrow_read_round_trips_through_the_printed_c() {
    check_narrowload_round_trip(
        "narrowload",
        17,
        cfg!(all(target_os = "linux", target_arch = "x86_64")),
        stripped_wide,
    );
}

#[test]
fn narrowload_spellings_are_checked_without_native_execution() {
    check_narrowload_round_trip("narrowload", 17, false, stripped_wide);
}

/// The DWARF twin: `narrowload_dwarf_x86_64.c`, built with `-g`, masks one byte
/// of a declared record's 4-byte field through a call's result, a loop's phi
/// and a pointer read out of another record, each ending at that byte at the
/// end of a page.  Main kept these narrow only with `elemptr` on; a widening
/// gated on the record alone printed `(src(k)->flags & 0x8100) == 0x8000` and
/// `(r_1->flags & 0x81) != 0x80`, which fault.
#[test]
fn a_narrow_read_of_a_declared_record_round_trips_through_the_printed_c() {
    check_narrowload_round_trip(
        "narrowload_dwarf",
        3,
        cfg!(all(target_os = "linux", target_arch = "x86_64")),
        dwarf_wide,
    );
}

#[test]
fn narrowload_dwarf_spellings_are_checked_without_native_execution() {
    check_narrowload_round_trip("narrowload_dwarf", 3, false, dwarf_wide);
}

fn stripped_wide(_: &str, body: &str) -> Option<&'static str> {
    [
        "(unsigned short)a0->",
        "(short)a0->",
        "(unsigned char)a0->",
        "(int)a0->",
        "(int)a0[",
        "->field_0x8 & 0x",
    ]
    .into_iter()
    .find(|w| body.contains(w))
}

fn dwarf_wide(name: &str, body: &str) -> Option<&'static str> {
    if body.contains("0x8100") {
        return Some("0x8100");
    }
    let loop_test = "->flags & 0x81) != 0x80";
    let widened = body.match_indices(loop_test).any(|(i, _)| {
        body[..i]
            .trim_end_matches(|c: char| c.is_ascii_alphanumeric() || c == '_')
            .ends_with('(')
    });
    (name == "d_loop" && widened).then_some(loop_test)
}

fn check_narrowload_round_trip(
    fixture: &str,
    n_tested: usize,
    run_native: bool,
    wide: fn(&str, &str) -> Option<&'static str>,
) {
    let fx = repo_root().join("crates/unlace-analysis/tests/fixtures");
    let src = std::fs::read_to_string(fx.join(format!("{fixture}_x86_64.c"))).unwrap();
    let prelude = src
        .split("/* prelude */")
        .nth(1)
        .unwrap()
        .split("/* tested */")
        .next()
        .unwrap();
    let tested_src = src
        .split("/* tested */")
        .nth(1)
        .unwrap()
        .split("/* main */")
        .next()
        .unwrap();
    let main = src.split("/* main */").nth(1).unwrap();
    let tested: Vec<&str> = tested_src
        .lines()
        .filter_map(|l| l.strip_prefix("KEEP "))
        .filter_map(|l| l.split('(').next())
        .filter_map(|l| l.rsplit([' ', '*']).next())
        .collect();
    assert_eq!(tested.len(), n_tested, "{tested:?}");
    let sp = specs();
    if !run_native {
        eprintln!("narrowload round trip: native execution disabled; checking all spellings");
    }
    let dir = common::scratch_file(&format!("{fixture}-round-trip"), "dir");
    std::fs::create_dir(&dir).unwrap();
    for build in ["gcc_O0", "clang_O0", "gcc_O2", "clang_O2"] {
        let stem = format!("{fixture}_{build}_x86_64");
        let bin = fx.join(&stem);
        let expected = run_native.then(|| process::required_output(&mut Command::new(&bin)));
        for elem in ["on", "off"] {
            let out = dir.join(format!("{build}-{elem}"));
            let (_, stderr, ok) = run_unlace(&[
                "decompile-project",
                bin.to_str().unwrap(),
                "-o",
                out.to_str().unwrap(),
                "--sleighpath",
                sp.as_str(),
                "--option",
                "elemptr",
                elem,
            ]);
            assert!(ok, "unlace decompile-project failed: {stderr}");
            let code = std::fs::read_to_string(out.join(format!("{stem}.c"))).unwrap();
            let mut bodies = String::new();
            for w in &tested {
                let head = format!("// Function: {w} @ ");
                let at = code
                    .find(&head)
                    .unwrap_or_else(|| panic!("{build} {elem}: no `{w}` in the export"));
                let end = code[at + head.len()..]
                    .find("// Function: ")
                    .map_or(code.len(), |e| at + head.len() + e);
                let body = &code[at..end];
                if let Some(w) = wide(w, body) {
                    panic!("{build} {elem}: a narrow read printed wide, as `{w}`:\n{body}");
                }
                bodies.push_str(body);
            }
            let Some(expected) = &expected else { continue };
            std::fs::write(
                out.join("printed.c"),
                format!(
                    "#include <stddef.h>\n#include <stdlib.h>\n#include \"{stem}.h\"\n{bodies}"
                ),
            )
            .unwrap();
            std::fs::write(out.join("harness.c"), format!("{prelude}{main}")).unwrap();
            for cc in ["gcc", "clang"] {
                if process::optional_output(Command::new(cc).arg("--version")).is_none() {
                    eprintln!("narrowload round trip: no `{cc}`");
                    continue;
                }
                let exe = out.join(format!("rt-{cc}"));
                let built = Command::new(cc)
                    .args([
                        "-std=gnu11",
                        "-w",
                        "-Wno-error=int-conversion",
                        "-Wno-error=incompatible-pointer-types",
                        "-O0",
                        "-fno-builtin",
                        "-o",
                        exe.to_str().unwrap(),
                        "harness.c",
                        "printed.c",
                    ])
                    .args(common::CC_GCC15_DEMOTE)
                    .current_dir(&out)
                    .output()
                    .expect("spawn cc");
                assert!(
                    built.status.success(),
                    "{build} {elem}/{cc}: the printed functions did not compile:\n{}\n{bodies}",
                    String::from_utf8_lossy(&built.stderr)
                );
                let run = Command::new(&exe).output().expect("run the round trip");
                assert_eq!(
                    (String::from_utf8_lossy(&run.stdout), run.status.code()),
                    (
                        String::from_utf8_lossy(&expected.stdout),
                        expected.status.code()
                    ),
                    "{build} {elem}/{cc}: the printed functions compute something else:\n{bodies}"
                );
            }
        }
    }
    let _ = std::fs::remove_dir_all(&dir);
}

/// `elemptr` under `--jobs N`: a global or a table is an array only where
/// every function of a batch agrees, and a worker sees a share of the
/// functions, so a pool of more than one function types neither -- exactly as
/// a serial run that does not take the callee-first order. With `--option
/// protoorder off` on both, `decompile-all` and `decompile-project` print with
/// `--jobs 4` what they print with `--jobs 1`, and neither declares the global
/// `gp` an `int *` that `w_gpbump` steps by 4 bytes (as `int *`, `gp += 4`
/// would move 16). The default serial run still types it where the batch agrees.
#[test]
fn element_pointers_under_jobs_match_the_serial_run() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/elemptr_gcc_O0_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let off = ["--sleighpath", sp.as_str(), "--option", "protoorder", "off"];
    let serial: Vec<&str> = ["decompile-all", bin.as_str()]
        .iter()
        .chain(off.iter())
        .copied()
        .collect();
    let (want, stderr, ok) = run_unlace(&serial);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let mut pooled = serial.clone();
    pooled.extend_from_slice(&["--jobs", "4", "--jobs-chunk", "1"]);
    let (got, stderr, ok) = run_unlace(&pooled);
    assert!(ok, "unlace decompile-all --jobs 4 failed: {stderr}");
    assert_eq!(got, want, "--jobs 4 moved the elemptr fixture's document");
    assert!(
        got.contains("dat_300053e8 += 4;"),
        "the byte step on gp:\n{got}"
    );
    assert!(
        !got.contains("dat_300053e8["),
        "gp is indexed as an array without a batch:\n{got}"
    );
    let (callee_first, _, ok) =
        run_unlace(&["decompile-all", bin.as_str(), "--sleighpath", sp.as_str()]);
    assert!(ok);
    assert!(
        callee_first.contains("dat_300053e0[dat_30005080[v2]] = (char)v2;"),
        "{callee_first}"
    );

    let dir = std::env::temp_dir().join(format!("unlace-elemptr-jobs-{}", std::process::id()));
    let _ = std::fs::remove_dir_all(&dir);
    let mut exports = Vec::new();
    for jobs in ["1", "4"] {
        let out = dir.join(format!("j{jobs}"));
        let mut args = vec![
            "decompile-project",
            bin.as_str(),
            "-o",
            out.to_str().unwrap(),
        ];
        args.extend_from_slice(&off);
        args.extend_from_slice(&["--jobs", jobs, "--jobs-chunk", "1"]);
        let (_, stderr, ok) = run_unlace(&args);
        assert!(
            ok,
            "unlace decompile-project --jobs {jobs} failed: {stderr}"
        );
        let read = |ext: &str| {
            std::fs::read_to_string(out.join(format!("elemptr_gcc_O0_x86_64.{ext}"))).unwrap()
        };
        exports.push((read("c"), read("h")));
    }
    let _ = std::fs::remove_dir_all(&dir);
    assert_eq!(
        exports[0].0, exports[1].0,
        "decompile-project --jobs 4 moved the .c"
    );
    assert_eq!(
        exports[0].1, exports[1].1,
        "decompile-project --jobs 4 moved the .h"
    );
    assert!(
        !exports[1].1.contains("int *dat_300053e8"),
        "the .h declares gp an int *:\n{}",
        exports[1].1
    );
}

/// The `elemptr` round trip's `main`: map the fixture's non-executable load
/// segments at their own addresses, then call the printed witnesses with the
/// fixture's own inputs and print its line.
const ELEMPTR_HARNESS: &str = r#"#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
unsigned char *w_decode(const char *, unsigned long, unsigned long *);
long w_sbytes(const char *, int); long w_ubytes(const unsigned char *, int);
long w_words(const int *, int); long w_back(const int *, int);
long w_sidx(const signed char *, int, const int *); long w_table(int); char *w_rev(const char *, int);
long w_record(const long *, int); long w_mixed(const char *, int);
unsigned long w_wucall(unsigned int); unsigned long w_iucall(unsigned int); unsigned long w_iu2(unsigned int);
long w_srch(unsigned int); unsigned long w_xu(const unsigned char *, int); long w_xs(const unsigned char *, int);
void w_put(char *, unsigned long, const char *); void w_ctr(unsigned int *, unsigned int *, int);
void w_gpinit(long); void w_gpbump(void); void w_gpadv(long); long w_gpread(long);
long w_tidx(unsigned int); long w_tfirst(void); void w_tset(long); long w_hdr(const unsigned int *);
void w_tabinit(void); unsigned long w_nexttab(unsigned long, unsigned long *, _Bool *);
int w_chk(const char *); long w_hash(void); long w_pick(const char *, long, int);
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
  static const char hi[] = "\x81\x7f\xfe\x01\x80\x10";
  static const int wide[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  static int span[256];
  for (int i = 0; i < 256; i++)
    span[i] = i * 3 - 384;
  static const long recs[] = {2, 3, 5, 7, 11, 13};
  unsigned long n = 0;
  unsigned char *dec = w_decode("aGVsbG8gd29ybGQ=", 16, &n);
  char *rev = @REV@ ? w_rev("kuna", 4) : (w_rev("kuna", 4), "-");
  long a = w_sbytes(hi, 6);
  long b = w_ubytes((const unsigned char *)hi, 6);
  long c = w_words(wide, 16);
  long d = w_back(wide + 16, 16);
  long e = w_sidx((const signed char *)hi, 6, span + 128);
  long f = w_table(8);
  long g = w_record(recs, 3);
  long h = w_mixed("abcdefgh", 2);
  printf("%s %lu %s %ld %ld %ld %ld %ld %ld %ld %ld\n", (char *)dec, n, rev, a, b, c, d, e, f, g, h);
  static const unsigned char ix[] = {0, 1, 2, 3, 4, 5};
  printf("%lu %lu %lu %lu %lu %lu %ld %ld %lu %ld\n", w_wucall(1), w_wucall(6), w_iucall(1), w_iucall(3), w_iu2(1),
         w_iu2(2), w_srch(0xffffffffu), w_srch(5), w_xu(ix, 6), w_xs(ix, 6));
  char put8[8], put4[4];
  static unsigned int fmap[8], eclass[8] = {5, 6, 7};
  w_put(put8, 8, "abc");
  w_put(put4, 4, "abcdef");
  w_ctr(fmap, eclass, 8);
  printf("%s %s %u %u %u\n", put8, put4, eclass[0], eclass[3], eclass[7]);
  w_gpinit(16);
  long g1 = w_gpread(1);
  w_gpbump();
  long g2 = w_gpread(1);
  w_gpadv(2);
  long g3 = w_gpread(1);
  long t1 = w_tidx(3), t2 = w_tfirst();
  w_tset(-7);
  long t3 = w_tidx(8), t4 = w_tfirst();
  unsigned char *pg = mmap(0, 8192, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
  mprotect(pg + 4096, 4096, PROT_NONE);
  unsigned char *o = pg + 4096 - 6;
  o[0] = 1, o[1] = 2, o[2] = 3, o[3] = 4, o[4] = 0x34, o[5] = 0x92;
  printf("%ld %ld %ld %ld %ld %ld %ld %ld\n", g1, g2, g3, t1, t2, t3, t4, w_hdr((const unsigned int *)o));
  w_tabinit();
  unsigned long ti = 0;
  _Bool last = 0;
  unsigned long n1 = w_nexttab(9, &ti, &last), n2 = w_nexttab(0x100000005ul, &ti, &last), n3 = w_nexttab(0x200000000ul, &ti, &last);
  printf("%lu %lu %lu %lu %d\n", n1, n2, n3, ti, (int)last);
  static const unsigned char der[15] = {0x30, 0x21, 0x30, 0x09, 0x06, 0x05, 0x2b, 0x0e, 0x03, 0x02, 0x1a, 0x05, 0x00, 0x04, 0x14};
  char ok[15], bad[15];
  memcpy(ok, der, 15);
  memcpy(bad, der, 15);
  bad[14] = 0;
  printf("%d %d %ld %ld %ld\n", w_chk(ok), w_chk(bad), w_hash(), w_pick("abcdefghijklmno", 15, 1), w_pick(0, 15, 0));
  return 0;
}
"#;
