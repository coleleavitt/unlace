# FLIRT signatures

unlace reads IDA's FLIRT signature files (`.sig`, magic `IDASGN`) and uses
them to name statically linked library functions in stripped binaries. The
reader and matcher live in `crates/unlace-flirt/src/sig/`; applying the
matches to an image is `crates/unlace-flirt/src/match_pass.rs`.

Everything below was taken from the IDA kernel itself (the decompiled
`libida` in `research/decompiled-references/ida/idalib/all/`) and the SDK
header `libfuncs.hpp`, then checked against the 162 signature files that ship
with IDA 9 (`research/ida-sig-til-samples/`, not in git). Function names in
parentheses are the libida functions that implement each step.

## Using it

```bash
unlace decompile ./target.exe --sig vc64ucrt.sig --sig vc64rtf.sig
unlace decompile ./target.exe --sig-dir ~/ida/sig/pc
unlace sigload vc64ucrt.sig --limit 20              # inspect a file
unlace sigload vc64ucrt.sig --apply --binary ./target.exe
```

`--flirt-min-confidence` (default 50) filters matches. A match scores 1.0
when the module's referenced name was verified and 0.9 otherwise. Only
functions with synthetic names (`sub_*`, `loc_*`, ...) are renamed.

`decompile` matches every discovered function once, before the selected
ones are decompiled, so `--function` still sees library names at its call
sites. `sigload --apply` matches function symbols plus the starts the loader
found without a symbol (PE `.pdata`, Mach-O `LC_FUNCTION_STARTS`). Matched
names also bring their libc prototypes (argument counts and types) and
noreturn status.

## Making signatures

`unlace siggen` builds a `.sig` file from static libraries (`.a`, `.rlib`,
`.lib`) and relocatable objects; this is what IDA's `pelf` + `sigmake` do.
The code lives in `crates/unlace-flirt/src/sig/make/`.

```bash
unlace siggen /usr/lib64/libc.a -o glibc.sig --name 'glibc 2.43 x86-64'
unlace siggen ld/go.o -o go.sig --exclude-prefix main. --exclude-prefix cmd/
unlace siggen libfoo.a --format toml        # unlace's own pattern format
```

Ready-made files for x86-64 Linux runtimes (glibc, libgcc, libstdc++,
compiler-rt, libc++, Go, Rust std per rustc release) and how they were
made are in `crates/unlace-flirt/sig/linux-x86_64/`.

- Functions: every defined text symbol with a size. Aliases at the same
  address become extra public names; the preferred one (fewest leading
  underscores, global, strong, shortest) is first and is the name a match
  applies.
- Variant bytes: every byte a relocation patches. On x86-64 also the
  instruction bytes the linker may rewrite: GOT relaxation (`call
  *x@GOTPCREL` → `addr32 call x`, `mov x@GOTPCREL` → `lea`/`mov $x`) and TLS
  model relaxation (GD/LD/IE/TLSDESC sequences). On x86, `call`/`jmp`/`jcc`
  rel32 fields that leave the function are variant even without a
  relocation, because Go's `go.o` (one linked text) carries none for them.
- Referenced names: each call or branch to a named function is recorded
  (aliases rewritten to the callee's preferred name). They are used only
  to tell modules apart, and to keep short functions (below
  `--min-fixed-bytes`, default 12 fixed bytes in pattern + CRC range):
  such a function is kept only with a referenced name, so it matches only
  where its callee is already named (`strftime` → `strftime_l`).
- Functions with fewer than 32 fixed bytes also check up to 8 fixed bytes
  spread over the rest of the body (tail bytes), so a heavily wildcarded
  pattern does not name unrelated code that starts alike.
- Collisions (same pattern, CRC range and CRC, different names) are
  resolved as a decision list: a tail byte, then a referenced name, where
  each function's value is unique among those still left; the module order
  in the leaf makes the earlier checks exclude the later functions. Once a
  reference split is used, the last function checks a reference too, since
  an unknown callee does not exclude anything. Functions that stay
  identical (`labs`/`llabs`, `getpwent`/`getgrent`, ...) are dropped, as
  `sigmake` does without an exclusion file. `--log unlace::flirt=debug`
  lists them.

### Measured (2026-10-28)

Stripped static x86-64 test programs, built on this machine, matched with
the files above; names checked against the unstripped build. "Before" is
the bundled pattern DB alone.

| binary | functions | named before (correct) | named by `.sig` | wrong |
|---|---:|---:|---:|---:|
| C, `gcc -O2 -static` | 1352 | 199 (2) | 1171 | 0 |
| C, `clang -O2 -static -rtlib=compiler-rt` | 1356 | 197 (2) | 1177 | 0 |
| C++, `g++ -O2 -static` | 4837 | 768 (1) | 2402 | 2* |
| C++, `zig c++` (libc++) | 1567 | 10 (0) | 748 | 0 |
| Rust 1.98.1 `--release` | 834 | 3 (0) | 494 | 0 |
| Rust 1.96.1 `--release` | 814 | 3 (0) | 483 | 1* |

\* Same body under another symbol: libstdc++'s static copy of libgcc's
`read_encoded_value_with_base`, and a v0- vs legacy-mangled `<&T as
Debug>::fmt`.

Most C/C++ misses are `.cold` fragments, functions the discovery pass
merges away, and functions in dropped collisions. Rust signatures are
specific to one rustc release: the 1.97.1 file names 391 functions of the
1.96.1 binary with mostly different monomorphizations, and on a large
third-party program (`ast-grep`, rustc 1.94, other crates' copies of
generic std code) about 75% of the 613 names were the same function, 2%
wrong, and the rest at starts that have no symbol. The Go file named 2291
of 2899 functions of a held-out Go 1.26 program (`sigload --apply
--force`, unstripped build), none wrongly. `/sbin/ldconfig` (stripped,
static glibc 2.43): 211 → 1332 named functions.

The bundled pattern DB (`unlace-loader/src/flirt/signatures.rs`) names
about 200 functions of each stripped static C binary, almost all wrongly
(`pthread_create` on `main`, `__cxa_pure_virtual` on small leaf
functions). An explicit `.sig` match takes precedence over it.

## File format

### Header

`sub_815960` reads 45 bytes and `sub_814C60` rewinds to the header size of
the file's version:

| offset | size | field | versions |
|---|---|---|---|
| 0 | 6 | magic `IDASGN` | all |
| 6 | 1 | version | 4..=10 |
| 7 | 1 | processor id (`PLFM_*`, 0 = x86, 13 = ARM) | all |
| 8 | 4 | file types | all |
| 12 | 2 | OS types | all |
| 14 | 2 | application types (`APPT_16BIT/32BIT/64BIT` = 0x80/0x100/0x200) | all |
| 16 | 2 | flags (`LS_*`, below) | all |
| 18 | 2 | module count (old) | all |
| 20 | 2 | ctype table CRC16 | all |
| 22 | 12 | ctype table name | all |
| 34 | 1 | library name length | all |
| 35 | 2 | alternate ctype CRC16 | v5+ |
| 37 | 4 | module count | v6+ |
| 41 | 2 | pattern size (32 before v8) | v8+ |
| 43 | 2 | third ctype CRC16 | v10 |

So the header is 35 (v4), 37 (v5), 41 (v6, v7), 43 (v8, v9) or 45 (v10)
bytes, followed by the library name. Versions 4..=6 are then read as 7.

Flags: `LS_STARTUP` 0x01, `LS_CTYPE` 0x02, `LS_CTYPE2` 0x04,
`LS_CTYPE_ALT` 0x08, `LS_ZIP` 0x10, `LS_CTYPE_3V` 0x20. With `LS_ZIP` the
body is deflated: zlib-wrapped from v7, raw deflate for v5 and v6
(`zip_inflate` clears zlib's `wrap` flag for them).

### Integers

All multi-byte integers in the body are big-endian.

- short (`sub_815180`): `b < 0x80` → `b`; else `((b & 0x7F) << 8) | next`.
- long (`sub_815220`): `0xxxxxxx` → 1 byte; `10xxxxxx` → 2 bytes;
  `110xxxxx` → `((b & 0x3F) << 24) | next 3 bytes`; `111xxxxx` → next 4
  bytes.
- offset (`sub_815370`): short up to v8, long from v9.

### Tree

The body is a prefix tree over the first `pattern_size` bytes of each
function (`sub_815C80`):

```text
node      := short child_count
             child_count == 0 → leaf
             else child_count × child
child     := length (u8 before v10, short in v10)
             variant_mask
             one literal byte per non-variant position
             node
```

The variant mask has one bit per pattern byte, most significant bit first;
a set bit means "any byte" (relocated or immediate operands). It is a
short for lengths below 16, a long up to 32, two longs (high, low) up to 64,
and `ceil(length / 8)` raw bytes beyond that (`sub_8155C0`). IDA drops a
leaf reached without a single fixed byte, without reading anything for it.

### Leaves and modules

```text
leaf        := crc_group+          (MORE_CRC_GROUPS 0x10 links groups)
crc_group   := u8 crc_len, u16 crc16, module+   (SAME_CRC 0x08 links modules)
module      := offset length, public_name+,
               [tail_bytes]        if flags & 0x02
               [reference]         if flags & 0x04
public_name := offset delta, [name_flags < 0x20], text, flags < 0x20
               (MORE_NAMES 0x01 links names; the other bits are read from
                the last name's terminator)
tail_bytes  := [u8 count] (v8+, else 1) × (offset, u8 value)
reference   := [u8 count] (v8+, IDA reads one), offset, u8 len
               (0 → short len), text   — a trailing NUL negates the offset
```

Name flags: 0x01 non-function label, 0x02 static function, 0x04 doubtful
(IDA only comments it), 0x08 the `?` placeholder of an unnamed module,
0x10 negative offset delta (consumed while reading).

### CRC

`sub_813280`: reflected CRC-16, polynomial 0x8408, initial value 0xFFFF;
the result is byte-swapped and inverted (CRC-16/X-25 byte-swapped, so
`"123456789"` gives 0x6E90). The lookup table was compared with the one in
`libida.so`.

## Matching

1. Walk the tree over the bytes at the candidate address (`sub_8148B0`).
   A child applies when all its fixed bytes equal the code. IDA
   binary-searches the fixed-first children and then tries the last child;
   unlace tries every applicable child in file order, which is a superset.
2. At the leaf, take the first module for which all of these hold
   (`sub_813F40`):
   - the `length` bytes from the start are inside the code;
   - CRC16 of `crc_len` bytes starting at `pattern_size` equals `crc16`;
   - each tail byte equals the code at `pattern_size + crc_len + offset`;
   - the reference, if any, holds:
     - startup signatures (`LS_STARTUP`): the name is a hex byte expected at
       `pattern_size + crc_len + offset`;
     - `.`: the operand points at the C ctype table, recognised by name
       (`LS_CTYPE`) or by the CRC of its first 128 bytes (256 with
       `LS_CTYPE2`) against the header's ctype CRCs (`sub_813690`);
     - otherwise the operand at `offset` must point at an address already
       known under that name (`sub_813D30`). IDA keeps a module whose name is
       not yet known as an "xref candidate" and does not apply it.
3. Apply the public name at offset 0 unless it is `?`, a non-function label
   or doubtful (`sub_68A440`). If the name already exists at another
   address, IDA logs "FLAIR COLLISION" and skips the function; so does
   unlace.

IDA resolves an operand through its own cross-references. unlace decodes
the operand at the reference site instead:

- x86-64: a rel32 field relative to the end of an instruction that ends
  right after it, or after a trailing imm8 or imm32;
- x86: an absolute address or a rel32 field;
- AArch64 and A32: `B`/`BL` at the site.

Referenced names match a known name exactly, or `__imp_X` matches the IAT
slot `dll!X`, `X@plt`, and the 32-bit decorations `_X` / `_X@N`. Other
architectures cannot verify references, so their referencing modules never
match.

Matching repeats over the still unnamed candidates while new names appear,
because a wrapper only matches once the function it calls is named.

## Not implemented

- IDA's handling of a match that fails on alignment padding: it skips an
  alignment instruction at the start and retries (`sub_68B4C0`).
- The rule that a tail byte must not be covered by a relocation (IDA checks
  fixups; unlace has none for loaded images).
- Names at non-zero offsets (other functions inside the same module) are
  decoded but not applied.
- Choosing signature files automatically from the startup signature and
  `autoload.cfg`. Pass the `.sig` files explicitly.
- `siggen`: an exclusion file to pick a winner among identical functions,
  and ARM/AArch64 relocation details beyond "the instruction is variant".

## Validation

- `sig::tests::decodes_every_ida_signature` decodes every file in
  `research/ida-sig-til-samples/` and requires the tree to consume the body
  exactly (skipped when the directory is absent).
- The other `sig::tests` build signatures with a small encoder and cover
  wildcards, shared prefixes, CRC and tail-byte disambiguation, references
  through the IAT, unnamed modules, negative offsets and header bitness.
- Real-world check (2026-10-28): `win64_remote.exe` from IDA 9.3 SP1's
  debug server, matched with `vc64rtf.sig`, `vc64ucrt.sig`, `vc64_14.sig`
  and `vc64seh.sig` over its 2359 `.pdata` function starts. 468 functions
  were named in 8 ms (20 of them through a verified reference), including
  `memcpy`, `memset`, `strlen`, `strcmp`, `strncmp`, `fread`, `fwrite`,
  `fclose`, `fflush`, `strtol`, `qsort`, `abort`, `_errno`, `toupper` and
  `tolower`. IDA's own decompilation of the same file skips library
  functions; 463 of the 468 are absent from it, i.e. IDA also treated them
  as library code. The other 5 are byte-identical library bodies that IDA
  left unnamed (for example the second copy of `cancel_current_task`, a
  name collision resolved in a different order). 16 further matches were
  withheld by the collision rule. A Python transcription of the same
  algorithm produced identical names.
