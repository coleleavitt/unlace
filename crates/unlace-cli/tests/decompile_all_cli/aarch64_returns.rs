//! AArch64 float returns.

use super::*;

/// `zerofillreturn_a64.o` (clang -O2, AArch64): `scale` returns
/// `*g * 1.5 + a` in `d0`, but the `fmov d0,#1.5` before its `fmadd` zero-fills
/// the upper half of `q0`, and that zero joined the return: `undefined16
/// scale(..)` with `v1._8_8_ = 0`, `recip`'s `return 0.0` as `ZEXT816(0)`, and
/// `floor_add` casting the 16-byte result, `(double)scale(a0,a1)`. The fill is
/// no part of the value: every function returns its `double`, the tail call
/// hands it on, and the printed functions compiled on the host compute what
/// the source does. `zerofillfwd_a64.o` (gcc -O0): `mk` reloads both members
/// of a two-double struct from its frame and joins them in `d1:d0`; `fa`
/// writes its callee's complex result through a pointer reloaded from the frame,
/// so the `d1` it reloads may be what the call left, and keeps `q0` as before.
#[test]
fn an_aarch64_double_return_leaves_out_the_zero_fill() {
    let sp = specs();
    let fixture = repo_root().join("crates/unlace-analysis/tests/fixtures/zerofillreturn_a64.o");
    let fixture = fixture.to_str().unwrap();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", fixture, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "double scale(int a0,double *a1)",
        "double recip(int a0)",
        "double tail(int a0,double *a1)",
        "return 0.0;",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    assert!(
        !stdout.contains("undefined16") && !stdout.contains("(double)scale("),
        "the fill is still returned:\n{stdout}"
    );
    let printed = printed_functions(&stdout, &["scale ", "recip ", "tail ", "floor_add "]);
    let src = format!(
        "#include <stdio.h>\n{printed}\n\
         int main(void) {{\n  double g = 1.25;\n  \
         printf(\"%g %g %g %d %d\\n\", scale(3, &g), tail(3, &g), recip(4), floor_add(3, &g), floor_add(-2, &g));\n  \
         return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("zerofillreturn-a64", &src) {
        assert_eq!(
            got, "4.875 5.875 0.25 5 0",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
    let fwd = repo_root().join("crates/unlace-analysis/tests/fixtures/zerofillfwd_a64.o");
    let (stdout, stderr, ok) =
        run_unlace(&["decompile-all", fwd.to_str().unwrap(), "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    let fa = printed_functions(&stdout, &["fa "]);
    let mk = printed_functions(&stdout, &["mk "]);
    assert!(
        mk.contains("// d1:d0") && mk.contains("*(double *)&v1[8] = a0 * a0;"),
        "mk's reloaded pair is not joined:\n{mk}"
    );
    assert!(
        !fa.contains("d1:d0") && fa.contains("[8] = 0;"),
        "fa joins a d1 its callee may have left:\n{fa}"
    );
}

/// `voidret_complexpick_a64.o` (clang -O2, AArch64): `pick` tail-calls `cpart`,
/// which returns a double, on one path and `cboth`, a complex double recovered
/// as a 16-byte `d1:d0` join, on the other; `user` reads `pick`'s `d0`. The
/// return forced on `pick` for `user` hands back an untyped call result on the
/// `cboth` path, which the float-return check counted as a conversion: `pick`
/// was decompiled again without its return and printed `void`, beside
/// `(double)pick(a0)` in `user`. A value left in a floating register is not an
/// integer converted to a float.
#[test]
fn a_tail_call_wrapper_keeps_the_float_its_readers_read() {
    let sp = specs();
    let fixture =
        repo_root().join("crates/unlace-analysis/tests/fixtures/voidret_complexpick_a64.o");
    let fixture = fixture.to_str().unwrap();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", fixture, "--sleighpath", sp.as_str()]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "double pick(double a0)",
        "return cpart(a0); // tail-call",
        "v1 = pick(a0);",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
}

/// `floatbits_a64.o` (clang -O2, AArch64): `to_bits` and `exponent` move the
/// bits of `getd`'s `double` to an integer register (`fmov x0,d0`), `to_fbits`
/// those of `getf`'s `float` (`fmov w0,s0`), and `store_bits` stores them
/// through an `unsigned long *`. The listing declares `double getd(..)` and
/// `float getf(..)`, and the readers printed `return getf(a0,a1);` from an
/// `unsigned int` function, `(unsigned long)getd(a0,a1) >> 0x34` and `*a2 =
/// getd(a0,a1);`, which C converts by value. The printed functions, compiled
/// on the host, hand back the bits.
#[test]
fn a_float_result_held_as_bits_round_trips() {
    let sp = specs();
    let fixture = repo_root().join("crates/unlace-analysis/tests/fixtures/floatbits_a64.o");
    let fixture = fixture.to_str().unwrap();
    let (stdout, stderr, ok) = run_unlace(&["decompile-all", fixture, "--sleighpath", &sp]);
    assert!(ok, "unlace decompile-all failed: {stderr}");
    for want in [
        "double getd(int a0,double *a1)",
        "float getf(int a0,float *a1)",
    ] {
        assert!(stdout.contains(want), "missing `{want}`:\n{stdout}");
    }
    for bad in [
        "return getd(",
        "return getf(",
        ")getd(",
        ")getf(",
        "*a2 = getd(",
    ] {
        assert!(
            !stdout.contains(bad),
            "a reader converts the float by value (`{bad}`):\n{stdout}"
        );
    }
    let printed = printed_functions(
        &stdout,
        &[
            "getd ",
            "getf ",
            "to_bits ",
            "to_fbits ",
            "exponent ",
            "store_bits ",
        ],
    );
    let src = format!(
        "#include <stdio.h>\n{printed}\n\
         int main(void) {{\n  double g = 1.25;\n  float f = 1.25f;\n  unsigned long s = 0;\n  \
         store_bits(-3, &g, (void *)&s);\n  \
         printf(\"%lx %lx %x %x %d %d %lx\\n\", (unsigned long)to_bits(3, &g), (unsigned long)to_bits(-3, &g), \
         (unsigned int)to_fbits(3, &f), (unsigned int)to_fbits(-3, &f), (int)exponent(3, &g), (int)exponent(-3, &g), s);\n  \
         return 0;\n}}\n"
    );
    for (cc, got) in compile_and_run_each("floatbits-a64", &src) {
        assert_eq!(
            got, "4011000000000000 c00a000000000000 40880000 c0500000 1025 1024 c00a000000000000",
            "{cc}: the printed C computes something else:\n{printed}"
        );
    }
}
