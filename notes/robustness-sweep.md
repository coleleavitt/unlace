# Robustness sweep (2026-11-24)

`unlace decompile-all <binary> --json --max-fn-seconds 30` over a mixed corpus, run with the
pinned `unlace-f0e726f2a4` (`--jobs 4`, through `kuna-slot`). Every failing function was
re-run on `unlace-cc4eab698b`, and the table below gives that re-run. The scratch driver
collects each function's `error` field, panics on stderr, and `halt_baddata` /
"bad instruction" / "unimplemented instruction" in the emitted C (string literals excluded).

| set | binaries | functions | source |
|---|---:|---:|---|
| /usr/bin | 40 | 24,336 | random sample (seed 42) of ELF files of 20 KB-4 MB on this Gentoo host |
| /usr/lib64 `.so` | 20 | 24,742 | the same, from /usr/lib64 (the host has no /usr/lib/x86_64-linux-gnu) |
| iOS 16.4.1 arm64e | 18 | 12,788 | the binaries in `~/SiteResearch/ios-16_4_1_a13/binaries` (two `.i64` IDA databases there are not binaries) |
| Holley EFI PEs | 17 | 36,733 | every `.exe`/`.dll`/`.sys` under `~/SiteResearch/holley_efi/extracted` |
| processors.toml | 201 runs | 201 | each `[[family.function]]` row (`--raw-image --target --base --addr`, every language of a list) |

No process crashed and every processors.toml row decompiled clean.

## Findings by cause

| # | cause | where (functions) | kind | status |
|---|---|---|---|---|
| 1 | `selectdiv.rs` shift overflow on a varnode wider than 8 bytes | libjxl (2 panics, 2 jump-table-recovery errors `attempt to shift left with overflow`) | panic | fixed on main before the sweep (e7dc5f6f73); no pinned build carried it yet |
| 2 | mainloop never settles on an MSVC vtordisp thunk (`sub ecx,[ecx-4]; jmp target`) when `vtabletypes` types `this` as the class pointer: 43,870 mainloop passes in 8 s (`KUNA_ACTION_PROF`) | USBCAN-Driver.dll `std::basic_*::vfunc_0` (4 functions of 8 bytes), PEGRP32F `CHttpFile::vfunc_13` (313 bytes) | pathological timeout | bounded by #781 (`MAX_REPEATS` = 100,000 repeat passes per run, with a header warning); the transform pair that loops is not identified yet (not reproducible on a raw image with an asserted struct) |
| 3 | `RuleIntAbs` (`bitidioms`) adds an `abs` CALLOTHER on every pass for a MULTIEQUAL whose readers it already moved: dead code never removes a CALLOTHER | libgsl `sub_1dafd0` (4.5 KB; more than 10 min unbounded, 1.5 s with `bitidioms off`) | pathological timeout | #782 (skip a MULTIEQUAL nothing reads or that reads itself); confirm on the next pin |
| 4 | obfuscated arm64e dispatch: `braa` through a shared signed-pointer table indexed by `(cond * k) ^ c`; jump-table recovery runs once per dispatch (931 unresolved computed jumps in the image) and follows table entries into other functions (`during jump-table recovery at 0x1185630`) | libCoreKE.dylib, 18 functions of 1-20 KB | timeout | open: needs index-value-set recovery for a boolean-selected index (two values) instead of a range; no single option flip (`constselectjump`, `jumpassist`, `calltable`, `switchextent`, `jumptablemax 64`, `tailcalljump`) avoids it |
| 5 | very large functions | libjxl (12-20 KB, 6), PEGRP32F (18-55 KB, 9), MachOMerger `main` (20 KB) | timeout | expected at a 30 s budget; spread across heritage, oppool1, structuring and merging |
| 6 | an 880,848-byte extent for one function | Holley.exe `sub_405c00`, `sub_53f660`, `sub_6383e0` (`in action universal`) | timeout | open: function-bound recovery on this Delphi-built image (holley track) |
| 7 | strings in WDM driver code sections taken as function starts | silabenm.sys (3 errors: `Unable to load 512 bytes` when the "code" runs into the gap between PAGE and PAGESENM, `Overlapping input varnodes` on UTF-16 text; 7 bad-instruction functions), silabser.sys (1) | error / bad instruction | open: function discovery (prologue scan after `int3` padding) |
| 8 | switch tables without a bound check read past their end | csplit `sub_13330` (gnulib regcomp; entry 0x26 lands mid-instruction), coqtop OCaml stdlib (10 functions) | bad instruction | open: jump-table extent (`switchextent` family) |
| 9 | CP210xVCPInstaller.exe `sub_402f80` | 1 | bad instruction | not triaged |

## Reproducing

- #2: `unlace decompile USBCAN-Driver.dll 0x10007f8c --addr --max-fn-seconds 90` (with `--option vtabletypes off` it finishes in 3 s)
- #3: `unlace decompile /usr/lib64/libgsl.so.28.0.0 0x1dafd0 --addr --max-fn-seconds 0`
- #4: `unlace decompile libCoreKE.dylib 0x685c --addr`
- Pass counts for comparison: the 40 largest functions of /usr/bin/bash take at most 25 fullloop and 79 mainloop passes and 6,209 action applications (`KUNA_ACTION_PROF`).
