# Semantic suite results

First run of `tools/semantic` (see its README), 2026-11-24, with the main pin
`unlace-c451bbc6e5`. Host: gcc 15.3.0, clang 22.1.8, zig 0.15.2 (aarch64-linux-musl, static),
qemu-aarch64 10.2.2. Emitted C is compiled at -O0 with -fwrapv. `tools/semantic/baseline.toml`
holds these outcomes.

Of 348 rows, 292 pass, 17 compute a wrong result, 39 do not compile, and unlace fails none
outright.

| config | pass | wrong | nocompile | decomp |
|---|---|---|---|---|
| aarch64-zig O0 | 49 | 4 | 5 | 0 |
| aarch64-zig O2 | 49 | 4 | 5 | 0 |
| x86_64-clang O0 | 53 | 2 | 3 | 0 |
| x86_64-clang O2 | 50 | 2 | 6 | 0 |
| x86_64-gcc O0 | 47 | 1 | 10 | 0 |
| x86_64-gcc O2 | 44 | 1 | 13 | 0 |

## Per construct

| case | function | aarch64-zig O0 | aarch64-zig O2 | x86_64-clang O0 | x86_64-clang O2 | x86_64-gcc O0 | x86_64-gcc O2 |
|---|---|---|---|---|---|---|---|
| arrays | checksum16 | pass | pass | pass | pass | pass | nocompile |
| arrays | fill_grid | pass | pass | pass | pass | pass | nocompile |
| arrays | local_array | pass | pass | pass | pass | pass | nocompile |
| arrays | reverse_bytes | pass | pass | pass | pass | pass | pass |
| arrays | trace_grid | pass | pass | pass | pass | pass | pass |
| calls | callee_twice | pass | pass | pass | pass | nocompile | nocompile |
| calls | mix6 | wrong | wrong | pass | pass | nocompile | nocompile |
| calls | mix9 | pass | pass | pass | pass | nocompile | nocompile |
| calls | out_params | pass | pass | pass | pass | nocompile | nocompile |
| calls | recurse | pass | pass | pass | pass | nocompile | nocompile |
| conversions | lt_mixed | pass | pass | wrong | wrong | wrong | wrong |
| conversions | mul_hi | pass | pass | pass | pass | nocompile | pass |
| conversions | sdiv | pass | pass | pass | pass | pass | pass |
| conversions | shr_signed | pass | pass | pass | pass | pass | pass |
| conversions | shr_unsigned | pass | pass | pass | pass | pass | pass |
| conversions | sx16_mul | pass | pass | pass | pass | pass | pass |
| conversions | sx8 | wrong | wrong | pass | pass | pass | pass |
| conversions | trunc_store | pass | pass | pass | pass | pass | pass |
| conversions | u32_wrap | pass | pass | pass | pass | pass | pass |
| conversions | udiv | pass | pass | pass | pass | pass | pass |
| conversions | zx8 | pass | pass | wrong | pass | pass | pass |
| floats | f2i | pass | pass | pass | pass | pass | pass |
| floats | f2u | wrong | wrong | pass | pass | pass | pass |
| floats | fcmp | wrong | wrong | pass | pass | pass | pass |
| floats | fmix | pass | pass | pass | pass | nocompile | nocompile |
| floats | i2d | nocompile | pass | pass | pass | pass | pass |
| floats | is_between | pass | pass | pass | pass | pass | pass |
| floats | poly | pass | pass | pass | pass | pass | pass |
| globals | alias_store | pass | pass | pass | pass | pass | pass |
| globals | bump | pass | pass | pass | pass | pass | pass |
| globals | rotate_table | pass | pass | pass | pass | pass | pass |
| globals | via_ptr | pass | pass | pass | pass | pass | pass |
| loops | collatz_steps | pass | pass | pass | pass | pass | pass |
| loops | find_first | pass | pass | pass | pass | pass | pass |
| loops | nested | pass | pass | pass | pass | pass | pass |
| loops | sum_weighted | pass | pass | pass | nocompile | pass | pass |
| noreturn | checked_div | pass | pass | nocompile | nocompile | nocompile | nocompile |
| noreturn | clamp_or_die | pass | pass | pass | nocompile | pass | pass |
| noreturn | fatal | nocompile | nocompile | pass | nocompile | pass | pass |
| noreturn | parse_digit | nocompile | nocompile | pass | pass | pass | pass |
| structs | pair_sum | pass | pass | pass | pass | pass | pass |
| structs | pair_swap | pass | pass | pass | pass | pass | pass |
| structs | rec_init | pass | pass | pass | pass | pass | pass |
| structs | rec_score | pass | pass | pass | pass | pass | pass |
| switches | chars | pass | pass | pass | pass | pass | pass |
| switches | dense | pass | pass | pass | pass | pass | nocompile |
| switches | jump | pass | pass | pass | pass | pass | pass |
| switches | sparse | pass | pass | pass | pass | pass | pass |
| tailcalls | even | pass | nocompile | pass | pass | pass | pass |
| tailcalls | leaf | pass | pass | pass | pass | pass | pass |
| tailcalls | odd | pass | pass | pass | pass | pass | pass |
| tailcalls | tail_cond | pass | pass | pass | pass | pass | pass |
| tailcalls | tail_plain | pass | pass | pass | pass | pass | pass |
| tailcalls | tail_ptr | pass | pass | pass | pass | pass | pass |
| tailcalls | twice | pass | pass | pass | pass | pass | pass |
| varargs | fmt_into | pass | pass | pass | nocompile | pass | pass |
| varargs | vmix | nocompile | nocompile | nocompile | wrong | nocompile | nocompile |
| varargs | vsum | nocompile | nocompile | nocompile | nocompile | nocompile | nocompile |

## What fails, and why

Wrong results (the emitted C compiles and computes something else):

1. **AArch64 prints a signed byte as `char`.** `sx8` and `mix6`, both levels: the parameter is
   read with a sign extension (`ldrsb`/`sxtb`) and printed `char`, but `char` is unsigned
   on AArch64, so the recompiled body zero-extends (`-3` comes back as `253`). A signed
   one-byte integer should print `signed char` (or `int8_t`) whatever the target's plain
   `char`.
2. **An `int` comparison result is declared `bool`.** `lt_mixed` (`return a < b;` with an `int`
   return), x86-64 gcc and clang, both levels: the function is printed `bool lt_mixed(...)`,
   the recompiled body sets only `al`, and the caller, which reads `eax` as the binary does,
   gets `-256`. The binary zero-extends into the whole register, so the return is 4 bytes wide.
3. **AArch64 `fcvtzu` prints as a signed conversion.** `f2u`, both levels: `(unsigned)f` is
   printed `int f2u(float) { return (int)a0; }`, which saturates 3e9 to 2147483647.
4. **AArch64 unordered float compare.** `fcmp`, both levels: the `a > b` test after an
   `fcmp` is printed `if (!(a0 <= v1)) return 1;`, which is also true for NaN, so the
   unordered case returns 1 instead of 2.
5. **clang -O0 zero extension printed as `char`.** `zx8` (`unsigned long zx8(unsigned char)`)
   is printed `char zx8(char)`, so 253 comes back as -3 sign-extended.
6. **clang -O2 `vmix`** (varargs reading longs and doubles) compiles and returns garbage.

Does not compile:

7. **gcc's `.localalias` names the function.** `calls`, gcc both levels: a recursive weak
   function gets a `recurse.localalias` local symbol; the export prefers it, so the header
   declares `int recurse.localalias(int a0);` and every function in that header fails.
8. **`undefined16` is a struct but is returned as an integer.** `checked_div` (gcc, clang) and
   `mul_hi` (gcc -O0): a function returning the `rdx:rax` pair is declared `undefined16`, which
   the prelude defines as `struct { unsigned char b[16]; }`, and the body returns an
   `unsigned __int128`.
9. **Partial member of an array.** `fmix`, gcc both levels: `char v1[16]; v1._4_12_ = ...`.
10. **Array locals assigned.** `checksum16` (gcc -O2), `sum_weighted` (clang -O2): a
    `char v[16]` SSE local is assigned whole (`v2 = *a0;`).
11. **gcc switch tables by their symbol name.** `dense`, gcc -O2: `return CSWTCH.5[a0];`, a
    name that is not an identifier and that the header does not declare.
12. **By-address globals missing from the header.** `fill_grid`, `local_array`, gcc -O2: the
    body names `dat_402030`..`dat_402038` (pieces of a vector constant) and the header declares
    only `dat_402040`/`dat_402048`.
13. **`va_start`/`va_arg` without a `va_list`.** `vsum`, `vmix`, every x86-64 row: the body
    calls `va_start(ap, a0)` but never declares `ap`, and the prelude does not include
    `<stdarg.h>`. On AArch64 the bodies instead read `Register00000008` and
    `Stackffffffffffffffe0`, storage the printer never declared.
14. **Callee prototypes that do not match their calls.** clang -O2: `fatal` is recovered as
    `void fatal(int a0, int a1)` (the code is moved to `esi` for `printf` before the call), so
    its callers' one-argument calls fail; `fmt_into` calls `snprintf(a0, -1)` with two
    arguments and `printf`/`snprintf` have no prototype. AArch64 -O2: in the mutually
    tail-recursive `even`/`odd`, `odd` is declared `void`, so `return odd(...)` fails.
15. **AArch64 static images: libc calls without prototypes.** `fatal`, `parse_digit`: `fflush`,
    `exit` and `abort` are plain functions in a static musl image, not imports, so the header
    declares none of them.
16. **AArch64 -O0: `NEON_ucvtf` user op.** `i2d` prints the SLEIGH user op
    `NEON_ucvtf(...)` as a call instead of the conversion.

Also seen, outside the table (the reference keeps DWARF with `--keep-debug`): with zig's
compiler_rt DWARF in the image, the export header carries every DWARF type, including a member
named `register` (a C keyword) and one named `linux` (a predefined macro under `-std=gnu11`),
so no AArch64 function compiled until the driver stripped the debug info.

## Status after the fixes (2026-11-24)

Fixed in main, not yet re-measured (`baseline.toml` still holds the first run's outcomes; re-save it
with one suite run on a build of current main):

| Item | PR |
|---|---|
| AArch64 signed byte printed `char` (1) | sem1 in #1091 |
| `int` return declared `bool`, callers read wider (2) | sem2 in #1091 |
| AArch64 `fcvtzu` as `(int)` (3) | #1086 |
| AArch64 NaN compares (4) | sem4 in #1091 |
| gcc `.localalias` names the function (7) | sem5 in #1091 |
| `va_list ap` undeclared, no `<stdarg.h>` (13) | sem6 in #1091 |
| `undefined16` struct vs 16-byte values (8) | sem7 in #1091 |
| C keyword member names (`register`) | #1093 |
| AArch64 `NEON_ucvtf` (16) | #1096 |

Still open, each needs a run to find its cause:

- clang -O0 `zx8` printed `char` (5): expected to be covered by sem2 now that the suite decompiles `main`; unchecked.
- clang -O2 `fatal` recovered with an extra argument, so its callers' calls do not match (14).
- AArch64 -O2 mutual tail recursion: `odd` declared `void` (14).
- `CSWTCH.5` printed verbatim and missing from the header (11).
- `dat_` pieces of a read-only vector constant left out of the header (12); the real fix is folding the constant in the body.
- `fmix`: `._4_12_` partial member of a `char[16]` (9).
- Whole-array assignment of SSE locals, `checksum16`, `sum_weighted` (10).
- AArch64 static musl: `exit`, `abort`, `fflush` called with no prototype (15).
- AArch64 varargs: `Register00000008` / `Stack…` storage names never declared (13).
