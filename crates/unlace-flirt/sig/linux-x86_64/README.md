# Runtime library signatures (x86-64 Linux)

IDASGN v10 files made with `unlace siggen` from the static libraries and
objects listed below. Load them with `--sig-dir` (or one at a time with
`--sig`):

```bash
unlace analyze ./stripped --sig-dir crates/unlace-flirt/sig/linux-x86_64
```

Signatures only match the exact library build they were made from. Pick the
files for the toolchain that built the target (`readelf -p .comment` shows
the GCC/clang/rustc version); a Rust signature of another rustc release
names few functions and some of them wrongly.

| file | made from |
|---|---|
| `glibc-2.43-x86_64.sig` | glibc 2.43 (Gentoo): `libc.a`, `libm-2.43.a`, `libmvec.a`, `libresolv.a`, `crt1.o` |
| `libgcc-15-x86_64.sig` | GCC 15.3: `libgcc.a`, `libgcc_eh.a`, `crtbeginT.o`, `crtend.o` |
| `libstdc++-15-x86_64.sig` | GCC 15.3: `libstdc++.a` |
| `compiler-rt-22-x86_64.sig` | LLVM 22: `libclang_rt.builtins.a` |
| `libc++-20-zig0.15-x86_64.sig` | LLVM 20.1.2 as built by zig 0.15.2: `libc++.a`, `libc++abi.a`, `libunwind.a` |
| `go1.26-amd64.sig` | Go 1.26.2: the `go.o` of external links of `cmd/go`, `cmd/vet` and two test programs, without `main.*` and `cmd/*` |
| `rust-<version>-x86_64.sig` | the rustup `x86_64-unknown-linux-gnu` sysroot rlibs (`std`, `core`, `alloc`, `panic_*`, `compiler_builtins`, `hashbrown`, `gimli`, `addr2line`, `object`, `memchr`, `miniz_oxide`, `rustc_demangle`, `libc`, `unwind`, ...) |

Regenerate, for example:

```bash
G=/usr/lib/gcc/x86_64-pc-linux-gnu/15
unlace siggen $G/libgcc.a $G/libgcc_eh.a $G/crtbeginT.o $G/crtend.o \
    -o libgcc-15-x86_64.sig --name 'GCC 15 runtime (libgcc) x86-64'

# Go: keep the linker's go.o, then drop the program's own functions.
CGO_ENABLED=1 go build -ldflags="-linkmode=external -tmpdir=$PWD/ld" cmd/go
unlace siggen ld/go.o -o go.sig --exclude-prefix main. --exclude-prefix cmd/

# Rust: every sysroot rlib except proc_macro, test, getopts, sysroot,
# profiler_builtins and the rustc_std_workspace_* shims.
```

A Go binary keeps its function names in `.gopclntab` even with `-s -w`;
the Go signature matters when that table is missing or obfuscated.
