# Option firing audit

Which options in the catalog change output at all. Measured 2026-11-24 with the pinned
`unlace-bin/unlace-f0e726f2a4`, with `decompile-all --json` and `--max-fn-seconds 10`.

## Method

- **Options.** All 151 catalog rows whose default is not `on` (`off`, `auto`, numeric
  thresholds, multi-valued modes). Each one was run at every non-default value; placeholder
  values such as `<path>` were skipped.
- **Corpus.** Realistic binaries:
  - x86-64 ELF from decbench O2-noinline: `mesg`, `bzip2recover`, `getfacl`, `echo`.
  - PE32 MinGW: `x0r-usb.exe`, `minipig.exe`.
  - ARM Cortex-M: `libopencm3/usart.elf`.
  - Mach-O: arm64e `forkfix.dylib`, arm64 `idownloadd`, and the arm64e dext
    `IOUserBluetoothSerialDriver`.
  - Small fixtures:
    - Go: `go-paniccheck-return/paniccheck-elf`.
    - MIPS64: `octeon-elf-abi/abi-gcc73-64.elf`.
    - Rust: `rust-process-exit/linux-amd64`. It takes 68 s per run, so it was used only
      for the five Rust options.
- **Stripped copies.** The decbench binaries keep their symbols, which hides
  function-discovery options. So the discovery and listing options were also run on
  `strip --strip-all` copies of six of them.
- **Noise control.**
  - Every binary's base arm was run twice.
  - A function that differs between the two base runs is ignored.
  - So is a function that changes under 6 or more unrelated options; this catches
    `--max-fn-seconds` timeouts under load (5 such functions in `idownloadd`, 1 each in
    `echo` and `x0r-usb.exe`).
- **Fixtures.** Each stage test (`tests/stages/*.toml|xml`) that sets an option was turned
  into a CLI run:
  - The script's `load file` binary, or its bytechunks as a `--raw-image`.
  - Its other `option` lines and its `mode`.
  - Its `parse line` and `map prototype` lines as `--assert prototype`, and its
    `map address` lines as `--assert data`.
  - Then the option on vs off.
- **Crafted and test inputs.** Where no fixture existed, I built inputs or used the CLI
  test fixtures:
  - gcc, clang and zig builds for x86-64, i386 MSVC, ARM, SPARC and PPC32 (one of them a
    PPC32 `.PPC.EMB.apuinfo` image).
  - The `.fid` database and FLIRT `.sig` fixtures, through `unlace_fid_db` and
    `UNLACE_FLIRT_SIGS`.

## The `--mode auto` trap

`--mode auto` resolves to `aggressive` below 500 KiB, and every corpus binary is below
500 KiB. `aggressive` turns 48 off-by-default options on, so `--option X on` is a no-op for
them. Those 24 options in the sweep were measured again under `--mode reliable`:

- `addrtable`, `aif`, `constselectjump`, `devectorize`, `eh_frame_full`,
  `fast_funcdisc`, `fid`, `flirt`
- `funcstart_patterns`, `globalarrayanchor`, `listing`, `operand_refs`, `pdbtypes`,
  `ptrdepthcap`, `switchguardbound`, `switchmodbound`
- `unrolledguard`, `widestrings32`, `ctypes`, `iteexpr`, `opaquepredicate`,
  `regionedgeorder`, `rettriangle`, `stackstruct`

A measurement of a default-off option that runs under the auto mode on a small binary
measures nothing.

## Summary

| | options |
|---|---|
| changed at least one corpus function | 87 |
| changed only a fixture, test or crafted input | 54 |
| never changed anything on any input tried | 10 (2 of them broken wiring, fixed here) |

## Broken wiring

### `gopcln` (fixed)

- **Symptom.** `--option gopcln on` and `lines` changed nothing on go1.16.15, go1.17.13 and
  go1.26.2 builds: no `source:` header and no `inlined` comment.
- **Cause.** The class #589 found for `dextrpc`:
  - `GoPclnPass` and `GoPclnLinesPass` were registered in the load-time
    `passes_for` list.
  - Each returned early unless `GoPcln` was on.
  - A load-time pass runs at `load file`, before the run's `option` lines, so it sees the
    constructor default (`off`).
  - The commit gate (`analysis_pass_enabled("gopcln")`) then had nothing to commit.
  - No test ran the passes end to end; the only tests checked pass order.
- **Fix.**
  - The passes are no longer registered at load.
  - `passes::run_gopcln` runs both of them at the commit point, beside `run_dextrpc`,
    when `gopcln` is on.
  - A default run still decodes nothing.
  - Spec: `docs/spec/01-program-prep.md`.

### `cppshortnames` (fixed)

- **Symptom.** The catalog's own example (`std::__cxx11::basic_string::_M_append` prints
  `std::basic_string::_M_append`) did not happen in the CLI. A g++ -O1 call to
  `s.append()` still printed `std::__cxx11::basic_string::_M_append(a0,"xy",2)`.
- **Cause.**
  - The option shortens only the scope list `call_scope_prefix` takes from
    `arch.remote_scope`, which only the Ghidra front end has.
  - A standalone load names a function by its whole demangled path, so there was no
    scope list to shorten.
- **Fix.**
  - `unlace_cppshortnames::function_name` runs `short_type` over a direct callee's name, an
    `os_log` callee's name and the declared function's own name, when the option is on.
  - Off, the output is the same as before.
  - Spec: `docs/spec/09-emission.md`.

### The same load-time pattern, default-on gates (not fixed: `off` is probably ignored)

These load-time passes read a default-on gate from `ctx.arch.unlace_options` inside
`run()`:

- `StringLiteralPass` (`codestrings`). No test of it exists.
- `NoReturnKnownPass` and `LibProtoPass` / `LibcSigsPass` / `LibcTypesPass` /
  `LibgccSigsPass` (`nameladder`).
- `ObjcMetadataPass` (`swifttypes`).
- `IokitClassesPass` (`iokitclasses` `.types`).

`--option <name> off` can only reach them if the commit filters their facts again. I checked
that only for `iokitclasses names`, which does change output. `codestrings` and
`nameladder` have no commit-time filter, so their `off` value is very likely a no-op:
`nameladder off` changed nothing on the two MinGW PEs. I did not find an input that proves
it, so these are left for a follow-up with a fixture.

`crates/unlace-analysis` has 16 `AnalysisPass::run` bodies that read an option. The
deferred ones (`fid`, `formatstring`, `operand_refs`, `swiftmetadata`,
`noreturn_propagate`) run at the commit with the live options and fire.

## Options that change no corpus function

64 options changed no function on the corpus. Each was then checked on an input made for it.

### Fires on its own fixture, a test input or a crafted input (not broken)

| option | default | evidence |
|---|---|---|
| `addrtable` | off | fixture/reliable: addrtable.toml:on=3 |
| `aif` | off | fixture/auto: aifbracket.toml:off=1; fixture/auto: aifnoppad.toml:off=2 |
| `armframes` | inventory | fixture/auto: arm-frame-inventory.toml:off=1 |
| `bejoin` | callers | raw-fixture/auto: bejoin-evidence-pairs:off=6; raw-fixture/auto: bejoin-evidence-pairs:on=1 |
| `bejoinpass` | whole | fixture/auto: bejoinpass.xml:off=3; fixture/reliable+protos: bejoinpass.xml:off=3 |
| `callarrayextent` | off | fixture/reliable+protos: call-array-extent.xml:on=4 |
| `callmechanisms` | auto | raw-fixture/auto: ppc64-toc-reload-switch:on=2; raw-fixture/auto: ppc64-toc-reload-switch:on=2 |
| `calloverlap` | auto | raw-fixture/auto: ghdec-calloverlap:full=1; raw-fixture/auto: register-pair-call-args:full=1 |
| `callwide` | off | fixture/auto: callwide.toml:on=10 |
| `charptr` | off | raw-fixture/auto: charptr:on=1 |
| `constselectjump` | reentry | fixture/reliable: re-constselectjump.toml:on=1 |
| `devectorize` | off | fixture/reliable: devectorize.toml:on=1; fixture/reliable+protos: devectorize.toml:on=1 |
| `dynalloca` | off | fixture/auto: dynalloca.toml:on=1; fixture/reliable+protos: dynalloca.toml:on=1 |
| `flowmode` | off | fixture/auto: flowmode.toml:aftercall=2; fixture/auto: flowmode.toml:on=2 |
| `fpuemu` | auto | fixture/auto: x86-16-fpuemu.toml:on=3 |
| `globalarrayanchor` | off | fixture/reliable+protos: globalarrayanchor-a64.toml:on=9 |
| `gobool` | auto | raw-fixture/auto: gobool:always=1 |
| `gowritebarrier` | auto | fixture/auto: gojumpchain.toml:always=2; fixture/auto: gojumpchain.toml:auto=2 |
| `highsliceguard` | off | fixture/auto: ghangr-highslice-guard.toml:on=4 |
| `int3pad` | warn | raw-fixture/auto: int3pad:halt=1; raw-fixture/auto: int3pad:off=1 |
| `javasync` | off | fixture/auto: dex-javasync.toml:on=2 |
| `kernelcache` | auto | fixture/auto: kernelcache-merge.toml:Widget=7; fixture/auto: kernelcache-merge.toml:com.apple.kernel,Widget=5 |
| `kernelcache-boot` | auto | fixture/auto: kernelcacheboot.toml:off=2 |
| `linuxsyscall` | auto | raw-fixture/auto: linuxsyscall-x64-compat:on=1; raw-fixture/auto: linuxsyscall:on=1 |
| `msvcstrappend` | off | raw-fixture/auto: msvcstrappend:on=3; raw-fixture/auto: msvcstrappend:on=3 |
| `nulterminator` | off | raw-fixture/auto: gh468-nulterminator:on=1 |
| `octeoneffects` | atomic | raw-fixture/auto: octeoneffects:off=13; raw-fixture/auto: octeoneffects:ordered=2 |
| `outline` | off | raw-fixture/auto: outline-proto:0x401000:0x40100b-0x401019=1; raw-fixture/auto: outline:0x401000:0x40100a-0x401018=1 |
| `ppc32picimports` | off | fixture/auto: ppc32picimports-abi.toml:abi=2; fixture/auto: ppc32picimports-address-escapes.toml:on=1 |
| `structmerge` | off | raw-fixture/auto: structmerge-siblings:siblings=2; raw-fixture/auto: structmerge-siblings:siblings=2 |
| `switchguardbound` | off | fixture/auto: ghangr-missing-function-call-1101b1.toml:off=1 |
| `switchmodbound` | off | fixture/reliable: gh9191-switchmodbound.xml:on=1 |
| `switchselector` | off | raw-fixture/auto: switchselector:on=1; raw-fixture/auto: switchselector:on=1 |
| `unrolledguard` | off | fixture/auto: ghangr-optimized-memcpy-6301a9.toml:off=1; fixture/reliable: ghangr-optimized-memcpy-6301a9.toml:on=1 |
| `wrapadd` | off | fixture/auto: wrapadd.toml:on=1 |
| `x86listingswitch` | off | fixture/auto: x86listingswitch.toml:on=5 |
| `armpairparam` | off | zig ARM -O2 `-g0` `long long` add/compare: 3 functions; with DWARF prototypes it has nothing to do |
| `calleeargsmsvc` | off | `calleeargsmsvc_pe_i386.dll` with `calleeargs on`: 1 |
| `calleevote` | fields | `off` on stripped `getfacl`: 2 |
| `dyldimage` | none | the `dyld_cache_objc` fixture: selects the image (base arm errors "choose one with --image") |
| `fid` | off | `fid_audit_x86_64` with `unlace_fid_db=fid_audit_x86_64.fid` and `listing on`: 2 |
| `fieldtype` | off | `fieldtype_gcc_O0_x86_64`: 4 |
| `flirt` | off | `tests/fixtures/fid/callees/prog` with `UNLACE_FLIRT_SIGS=flirt/callees.sig`: `functions` names 4 |
| `gomorestack` | auto | `off` on `go-type-names/go1.26.2-amd64` `main.main`: 1 |
| `libgccsigs` | off | zig SPARC32 `__divdi3` callers: 2 |
| `mixedtailret` | off | `crates/unlace-cli/tests/fixtures/mixed_tail_returns.S`: 6 (the catalog already says it changes no real function) |
| `pairbranch` | off | zig i386-msvc `long long` compares: 1 |
| `pdbtypes`, `pdblines` | off | `pdb_types_x86_64.exe`+`.pdb` under `--mode reliable`: 14 each |
| `ppcapu` | off | crafted PPC32 object with an SPE `apuinfo` note: `evaddw` decodes, 1 |
| `satmul` | off | clang++ -O2 `new S[n]`: 1 (gcc's and AArch64's shapes: 0) |
| `structheadless` | off | `structheadless_x86_64`: 2, `structheadless_argv_x86_64`: 1 |
| `varargsharedfloat` | off | zig PPC32 -O0 `sumi(2, x * 2, x)` with `--assert prototype sumi int sumi(int n, ...)`: 1 |
| `widestrings32` | off | `widestr32_gcc_O2_x86_64` with `operand_refs on`: 5 (stripped build: 6) |

### Never changed anything on any input tried

| option | why |
|---|---|
| `gopcln` | broken wiring, fixed above |
| `cppshortnames` | broken wiring in the standalone path, fixed above |
| `ctree` | by design: the tree printer is proven to print exactly what the block printer prints (`nestedand`, default on, already routes every function through it) |
| `boolreturn`, `retternary`, `orexit` | Already done by default-on passes. On the textbook C at gcc/clang -O0/-O1/-O2, `if (a > b) return 1; else return 0;` already prints `return a1 < a0;` and `if (a) return; if (b) return; g();` prints `if ((!a0) && (!a1)) g();`. `retternary` matches only an `if/else` whose arms both return, but the default structurer prints the early-return form `if (a0) return 1; return v1;`, so it never sees that shape. Extending it to the early-return form would make it fire. |
| `eh_frame_full` | Inert by construction. It commits each LSDA landing pad as a function entry, and `fdeinterior` then rejects every pad that lies strictly inside its own FDE, which is where every gcc landing pad lies. `functions` lists the same 21 entries on `eh_lsda_x86_64` with it on or off, and `verify_eh_frame_full.rs` only tests `off`. |
| `funcchunks` | Has no visible effect on its own: it changes only the body FID hashes (`modes.rs` says so). No change on `funcchunks_x86_64`. |
| `retsplitlimit` | A guard: it changes output only in a function whose RETURN split would clone more than 1,048,576 ops. |
| `delphi` | No Delphi PE on this machine. The pass does not read its gate at load (`DelphiPass::run`) and is commit-gated, so the wiring looks correct. It needs a sample. |

## Options that changed corpus functions

The counts are changed functions, summed over the binaries:

- `auto`: the corpus under `--mode auto`.
- `reliable`: the corpus under `--mode reliable`.
- `stripped/*`: the stripped copies under each mode.
- `rust`: `rust-process-exit/linux-amd64`.

| option | default | changed functions |
|---|---|---|
| `armconstshift` | off | auto:12 |
| `armhoist` | off | auto:3 |
| `atomics` | auto | auto:7 |
| `bytearrayc` | off | auto:6 |
| `calleesaved` | off | auto:4 |
| `callresultuse` | off | auto:301 |
| `castwiden` | literal | auto:33 |
| `cmpmerge` | off | auto:24 |
| `compareform` | original | auto:116 |
| `condstmts` | 3 | auto:70 |
| `contextnames` | off | auto:354 |
| `cppsig` | proven | auto:2 |
| `ctypes` | off | reliable:669 |
| `deadcascade` | 32 | auto:1 |
| `declorder` | natural | auto:56 |
| `dextrpc` | off | auto:28 |
| `dirtypool` | off | auto:1 |
| `dwarf_lines` | off | auto:267 |
| `dwarfglobaltypes` | off | auto:29 |
| `egraph` | off | auto:5 |
| `esprom` | auto | auto:13 |
| `fast_funcdisc` | off | stripped/reliable:5 |
| `fatstr` | auto | auto:28, rust:68 |
| `flownames` | off | auto:105 |
| `formatstring` | static | auto:76 |
| `funcstart_patterns` | off | stripped/reliable:24, stripped/auto:2 |
| `goabi` | auto | auto:2 |
| `guardarm` | off | auto:45 |
| `honestgaps` | off | auto:36 |
| `impliedrefs` | 2 | auto:802 |
| `implweight` | off | auto:69 |
| `indexaliasguard` | global | auto:44 |
| `indirectonly` | off | auto:1 |
| `infloopstyle` | while | auto:25 |
| `iteexpr` | off | reliable:4 |
| `jumptablemax` | 1024 | auto:6 |
| `latecse` | off | auto:49 |
| `lazyfuncs` | off | auto:6 |
| `libctypes` | opaque | auto:41 |
| `listing` | off | stripped/reliable:58, stripped/auto:44 |
| `loopcondhoist` | off | auto:8 |
| `mapglobalsyms` | off | auto:6 |
| `mba` | off | auto:2 |
| `msvceh` | off | auto:239 |
| `namestyle` | angr | auto:910 |
| `narrowargs` | callers | auto:1 |
| `narrowext` | abi | auto:5 |
| `objcsdk` | off | auto:3765 |
| `opaquepredicate` | off | reliable:20, stripped/reliable:14, stripped/auto:7 |
| `operand_refs` | off | reliable:1, stripped/reliable:4, stripped/auto:4 |
| `orchainbool` | off | auto:1 |
| `orchainlive` | off | auto:2 |
| `outlang` | c | auto:2510, rust:414 |
| `paramcopyhoist` | off | auto:11 |
| `pebnames` | auto | auto:1 |
| `persistcalls` | 65536 | auto:3 |
| `phiarm` | off | auto:96 |
| `phithread` | off | auto:4 |
| `protoorder` | cycles | auto:390 |
| `ptrdepthcap` | off | stripped/reliable:1, stripped/auto:1 |
| `ptrfromuse` | void | auto:168 |
| `readonlycalls` | 65536 | auto:3 |
| `regionedgeorder` | off | reliable:6 |
| `regsigned` | off | auto:5 |
| `rettriangle` | off | reliable:19 |
| `returnpair` | pair | auto:41 |
| `rustabi` | auto | rust:2 |
| `rustarrayzero` | off | rust:2 |
| `rustprobestack` | off | rust:7 |
| `signedness` | auto | auto:289 |
| `sourcelang` | auto | auto:2386 |
| `spillargtrial` | off | auto:52 |
| `stackaddrargtrial` | off | auto:1, stripped/reliable:2, stripped/auto:2 |
| `stackalias` | off | auto:35 |
| `stackstruct` | off | reliable:1 |
| `stackviews` | off | auto:250 |
| `storetype` | uefi | auto:2 |
| `structdefs` | off | auto:413 |
| `structsynth` | locals | auto:28 |
| `swiftstr` | auto | auto:35 |
| `symbolnamechars` | safe | auto:600 |
| `syscallregs` | auto | auto:7 |
| `tailcallentryall` | off | stripped/reliable:10, stripped/auto:10 |
| `termdup` | 2 | auto:64 |
| `typelib` | auto | auto:1265 |
| `varargsave` | off | auto:1 |
| `warnstyle` | inline | auto:877 |

## Side findings

- A zig `x86-windows-gnu` COFF object (`.o`) fails every function with `Unable to load 512
  bytes at r0x004001fc`. It is not an option issue.
- `gh9191-switchmodbound` and `ghangr-optimized-memcpy` change under the CLI only with
  `--mode reliable`. Under the auto mode the aggressive preset already has `switchmodbound`
  and `unrolledguard` on, which matches the stage tests' second pass.

Scripts and raw data are in the session scratchpad (`audit/`): `audit.py` (the sweep),
`fx5.py` (fixture to CLI), `agg2.py` (noise-filtered aggregation) and `evidence.json`.
