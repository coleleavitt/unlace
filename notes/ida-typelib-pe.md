# Windows type libraries on PE imports: how IDA 9.5 picks and applies them, and what unlace needs (2026-11-24)

Deepens gap 2 of `notes/ida-gaps.md`. Correction to that row: unlace can already read a Windows
`.til` on a PE (`--option typelib /path/mssdk64_win10.til`: `library_text` in
`crates/unlace-console/src/typelib.rs` renders a `.til` for the image's own target, e.g.
`windows x86_64`). What is missing is choosing the library, combining several, and letting it win over
the hand-written Win32 table. The `typelib` row in `docs/options.md` ("inert on every other target")
describes `auto` only.

## 1. Measured value

152 PE images of one vendor driver package (`~/SiteResearch/lenovo/gfx-driver`, x86 and x64, CRT
forwarders `api-ms-win-crt-*`, `vcruntime`, `msvcp`, `ucrtbase` left out), 22,689 import references to
1,470 distinct names (script: `idamine_pecov.py`, pefile + `ida-9.5-tils.sqlite`):

| source | import references declared | distinct names |
|---|---|---|
| IDA `mssdk64_win10.til` (221,668 symbols) | 21,946 (96.7%) | 1,154 / 1,470 |
| unlace `win32sigs.rs` (146 names) | 11,552 (50.9%) | 131 / 1,470 |

1,008 of the til's declarations for these names use a handle, struct or pointer typedef
(`LPSECURITY_ATTRIBUTES`, `HKEY`, `LPSYSTEM_INFO`, `LPCRITICAL_SECTION`). 99 of them are also in
`win32sigs`, which types those parameters `void *` on purpose, and today `win32sigs` wins: `seed` skips any
import "no earlier source declared", and `win32sigs` has already declared it (`prototypes_at`). Examples:
`CreateFileW`, `CloseHandle`, `CreateThread`, `CompareStringW`, `AcquireSRWLockExclusive`,
`CreateToolhelp32Snapshot`.

## 2. How IDA chooses the libraries

At load, before analysis, the x86 processor module decides the compiler and the libraries
(`x86__pc.sqlite` `sub_98900`):

1. **Compiler from mangled names.** With no compiler set, it demangles every name in the name list and
   votes: an MSVC-mangled name sets Visual C++ at once, a Borland one sets Borland, more than 99
   GNU-style names set GCC; `___gxx_personality_v0` on a GCC PE sets `mingw`. Then `set_compiler`.
2. **Base library by OS and compiler:** `uefi`/`uefi64` for an EFI image, `w32dos`/`w16dos`,
   `bcb5win` (Borland), `ms16win`, `bc31`, `gnulnx_x86`/`gnulnx_x64`; `add_til(name, 3)`.
3. **SDK library by subsystem:** a user-mode PE gets `mssdk_win7` / `mssdk64_win7`, a native one (kernel
   driver) `ntddk_win7` / `ntddk64_win7`. The PDB plugin repeats the rule when it loads (`plugins__pdb`
   `sub_33DE0`: PE signature, subsystems 2, 3, 5, 7, 9 -> mssdk, else ntddk; magic 0x20B -> the 64-bit
   one).
4. **Signatures pull more libraries.** The module plans `vcseh.sig` / `vc64seh.sig`; each FLIRT
   signature can autoload a library (`sig/<proc>/autoload.cfg`, logged by libida `sub_6849A0`
   "%s.sig autoloads %s.til"), and import-name files do the same (`ids/idsnames`, libida `sub_691270`
   "ids/idsnames: %s autoloads %s.til"; `ids/win.zip` also maps DLL ordinals to names).
5. **Apply by name.** Loading a library (libida `sub_684360`) checks its compiler against the
   database's ("Type library %s is for %s while the current compiler is %s"), then "Applying
   types..." to every name in the database that a library symbol matches ("Types applied to %d
   names."): imports, and also functions FLIRT or a PDB named.
6. **Hex-Rays at a call:** the callee's own type, else the type of the IAT/GOT slot an indirect call
   goes through (hexx64 `sub_FD810`, survey §3.1). Kernel APIs used for this across modules:
   `apply_tinfo` (18 modules), `get_named_type_tid` (14), `add_til` (10)
   (`select callee_name,n_modules,modules from api_fanin where callee_name in ('apply_tinfo','add_til','get_named_type_tid')`).

## 3. What unlace needs

All behind the existing `typelib` option (a refinement extends the option it refines); no SDK-derived
table is ever committed, the `.til` files stay a runtime input from the user's IDA install.

| step | change | where | size |
|---|---|---|---|
| 1 | **Precedence.** When `typelib` names a library, a declaration from it replaces a `win32sigs` (and `libcsigs`) entry for the same import; the hand tables stay the fallback when no library is given. | `kuna_typelib::seed` (the "no earlier source declared" filter), or `win32sigs` consulting `TypeLibFacts` | S |
| 2 | **Several libraries.** `typelib` takes a `:`-separated list (as `KUNA_FLIRT_SIGS` does); the first library that declares a name wins. Lets `mssdk64_win10.til:ntapi64_win10.til` work together. | `TypeLib` option type, `library_text` | S |
| 3 | **Choose automatically from a directory.** A til directory (env `UNLACE_TIL_DIR` pointing at `<ida>/til`) plus IDA's rules from §2: PE32/PE32+ x subsystem -> `mssdk[64]_win10` or `ntddk[64]_win10` (newest present); EFI subsystems 10-13 -> `uefi[64]`; then `ntapi[64]_win10`. Report the choice on stderr. | `protos/typelib.rs` (facts: subsystem, magic) + console | S-M |
| 4 | **Names beyond imports.** Seed the library for functions named by FLIRT, FID or a PDB (IDA's "Types applied to %d names"), not only for imports. | `seed`: walk `named` (already in `TypeLibFacts`) as well as `imports` | S |
| 5 | **Docs.** The `typelib` row and spec chapter state that a `.til` path works on any target. | `phases.toml`, `docs/spec`, regenerate `docs/options.md` | S |

Measure before and after on the same 152 images: prototypes typed from the library, and
`void *`/`undefined` parameters left at Win32 call sites (decompile-all JSON). Expected gain from §1:
up to 1,023 more distinct imports declared, 99 of them upgraded from `void *`.

## Status (2026-11-24, gap-wintil)

All five steps are in. Step 1 and a built-in library (#274): `typelib auto` on an x86 or x64 PE reads
`crates/unlace-console/typelib/windows-x86{,_64}.ktl`, derived by `scripts/typelib/gen_windows.py` from
`mssdk[64]_win10` + `ntapi[64]_win10` and kept to the exports of 41 core DLLs (the lead allowed a
derived table in the repo for this gap), and a library chosen by a file list or `UNLACE_TIL_DIR` replaces the `win32sigs` entry (keeping its
`libcnames` names); the built-in library alone does not, since replacing it there regressed 20 stage
assertions (libcnames names, call-site argument recovery). Steps 2-5 (follow-up PR): `typelib a.til:b.til` reads a list, first declaration wins;
`UNLACE_TIL_DIR` under `auto` picks `mssdk`/`ntddk`/`uefi` (+`ntapi`) by subsystem and width, newest
release first, ahead of the built-in library, and says what it read on stderr; every library also
declares functions FLIRT, FID or a PDB named. Not done: compiler voting (Borland `bcb5win`), FLIRT
`autoload.cfg` pulls, the Hex-Rays IAT-slot fallback.

## Re-check

```sh
python3 -I idamine_pecov.py ~/SiteResearch/lenovo/gfx-driver ~/SiteResearch/ida-pro/ida-9.5-tils.sqlite \
    crates/unlace-analysis/src/analyzers/protos/win32sigs.rs
sqlite3 -readonly ~/SiteResearch/ida-pro/sqlite/x86__pc.sqlite "select text from pseudocode where ea=0x98900"
sqlite3 -readonly ~/SiteResearch/ida-pro/libida.sqlite "select text from pseudocode where ea=0x684360"
```

The script (pefile; counts import names per image, looks each up in `til_symbols` of
`mssdk64_win10.til` and in the quoted names of `win32sigs.rs`) is kept with the derived database at
`~/SiteResearch/ida-pro/derived/idamine_pecov.py`.
