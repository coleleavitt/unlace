# Original unlace loader (rest): techniques vs current main

Research note, docs only. Nothing was built or run. The archived side is `origin/master` (old unlace, read with `git show`, never checked out). The current side is `origin/main` at 188480126a. Main's loader does not live in a `unlace-loader` crate: it is `crates/unlace-analysis/src/loader/`, the `loadimage_*.rs` files, and `analyzers/`. Paths below are relative to `crates/unlace-analysis/src/` unless they start with `crates/`.

Scope: the master `crates/unlace-loader/src/` files that are not in the Apple set (`apple_kernelcache`, `dyld_*`, `ios_img4`, `macho`, `objc`, `swift_metadata`, `compact_unwind`, `demangle_swift`), the Windows set (`pe`, `pdb`, `pdb_types`, `msvc_rtti`, `seh`, `minidump`) or the debugger set (`frida_bridge`, `gdb_mi`, `lldb_bridge`, `rr_trace`, `ttd_trace`, `windbg_ttd`, out of scope by owner direction). Read first: `notes/archived-master-inventory.md` (on `origin/main`). It already ranks `identify-packer` and the Go and Android items. This note adds the loader-format rows it did not cover and corrects two IDA-gap rows that are now stale.

Method: for each master module, its header and public items (`git show origin/master:crates/unlace-loader/src/<file>`), then `git grep` on `origin/main` for the technique's names, then a read of the hit. Verdicts: **have** (main does it, file:line given), **partial** (some of it), **missing**.

## Ranked gaps (missing or partial, worth porting first)

| # | Technique | origin/master | main status (file:line) | Port? | Size |
|---|---|---|---|---|---|
| 1 | Go map descriptors, both layouts (old buckets, swiss groups) | `go_types.rs:79-88` (`Map` variant), `:367-372` (decode) | **missing**. `analyzers/gotypes/typeglobals.rs:189-192` says map descriptors "are not read"; no map reader in `analyzers/gotypes` or `analyzers/pclntab`. Already filed as #1142 | yes: swiss maps are the default on Go 1.24+, so map values stay untyped without it | M |
| 2 | DWARF general location expressions: `stack_value`, `implicit_value`, `entry_value` / `GNU_entry_value`, `implicit_pointer`, `bit_piece`, `regx` | `dwarf_expr.rs:19-27` (`Location`), `:97` (`evaluate`), `:286`, `:400`, `:466-534` | **missing**. `analyzers/dwarf/dwarflocation.rs:7,21` matches only `DW_OP_plus_uconst` and `DW_OP_fbreg`. `dwarfscopes.rs:184-196` reads `fbreg`+`piece` sequences. No `stack_value`, `implicit_value`, `entry_value` or `implicit_pointer` anywhere in `crates/` (grep). Filed as a new issue | yes: optimized (-O2) DWARF uses constant and entry-value locations, and main drops them. Port the design on top of gimli's `Evaluation` API, not the 538-line hand evaluator | M |
| 3 | Android OAT: `oatexec` native code and per-method code offsets | `android_oat.rs:6-7`, `:93-94` (`native_code`), `:212` (`parse_oat`), `:262-266` (method loop) | **partial**. `loadimage_dex.rs:58-90` finds `oatdata` and maps the embedded DEX files only; no `oatexec` mapping, no method table. Tracked as #1167 (OAT, CompactDex, VDEX checks) | yes for Android 5 to 7 framework `.oat` files; fold into #1167 | M-L |
| 4 | Packer classification by section-name signatures | `packer_detect.rs:106` (`detect_packer`), `:114-160` (rules) | **missing**. UPX, PKLITE and NEOLite unpacking exist (`upx/mod.rs`, `pklite/mod.rs`, `neolite.rs`) but nothing ranks a packer from its section names. Tracked as `identify-packer`, #1217 | yes: read-only and cheap | S |
| 5 | Lua 5.1 to 5.4 chunk loader: prototypes, constant pools, upvalues, debug names | `lua_bytecode.rs:1-2` | **missing**. `specs/Ghidra/Processors/Lua/README.md:7-8` says the raw `code` array of one prototype is loaded by hand; there is no chunk reader. Filed as a new issue | yes: the Lua SLEIGH exists, so a chunk loader makes a `.luac` openable | M |
| 6 | BTF type section reader (eBPF objects) | `btf.rs:1-3` | **missing**. `loader/reloc_apply.rs:3162` only skips `.BTF` sections when applying relocations. eBPF and BPF SLEIGH are present (`specs/Ghidra/Processors/eBPF`, `BPF`). Filed as a new issue | yes for eBPF objects: map and context types | S-M |
| 7 | Python 3.7+ `.pyc` header and code-object loader | `python_pyc.rs:1-10` | **missing**. `specs/Ghidra/Processors/CPython` exists but nothing opens a `.pyc` | maybe: only if Python bytecode is in scope | S-M |
| 8 | Split DWARF linkage: `.dwo` / `.dwp` skeleton CU (`DW_AT_GNU_dwo_id`, `dwo_name`) | `split_dwarf.rs:1-3` | **missing**. No `dwo` reader in `analyzers/dwarf` (grep). DWZ alt forms are read (`analyzers/dwarf/mod.rs:1577`, `loader/elf_debuglink.rs:119-128`) | yes for `-gsplit-dwarf` builds | M |
| 9 | Toolchain versions: MSVC `_MSC_VER` from Rich product ids, GCC/Clang version from `.comment`, libc minimum | `toolchain.rs:365` (`msvc_tool_versions`), `:387` (`msvc_family`), `:426` (`msvc_19_minor`), `:471` (`parse_comment_line`), `:581` (`detect_libc`) | **partial**. Family only: `analyzers/sourcelang/mod.rs:346` and `:549` detect the `GCC: ` record, `dwarfproducer.rs:52` reads `DW_AT_producer`; no version parse found. glibc symbol-version prototypes exist (`analyzers/protos/libctypes/glibc.rs:316`) | yes: versions choose CRT and prototype sets and belong in the report | S-M |
| 10 | ELF symbol fetch from debuginfod, next to the PDB symbol store | `symcache.rs:9-10`, `:71` (`debuginfod_url`), `symcache_fetch.rs:1-4` | **partial**. PDB store with `srv*` and msdl: `analyzers/pdb/locate.rs:111-140`. ELF: build-id directories only, `loader/elf_debuglink.rs:9-15`, `:29`. No debuginfod | watch: a network fetch is a trust decision; if taken, default off like the PDB store | S |
| 11 | EVM metadata: CBOR trailer, solc version, selector dispatch table | `evm_solidity.rs:1-10` | **partial**. `crates/unlace-lift/src/p2_lift/evmcalls.rs:1-3` recovers Solidity internal calls. No CBOR reader, no selector table (grep) | yes, small | S |
| 12 | WebAssembly component model: WIT, canonical lift and lower, WASI import names | `wasm_component.rs` (645 lines), `wasm_wit.rs` (135) | **missing**. `loader/format/wasm.rs` and `loadimage_wasm.rs` handle core modules only | watch | M |
| 13 | sBPF header and section detection | `sbpf_evm.rs:1-4` | **partial**. BPF relocations at `loader/reloc_apply.rs:1260-1270` and sBPF SLEIGH exist; no sBPF detector | low | S |
| 14 | SFrame unwind section | `sframe.rs:1-3` | **missing** (grep). `analyzers/entry/mod.rs:1869-1902` covers `.eh_frame` | low | S |
| 15 | XCOFF loading | `xcoff.rs:1-3` | **missing**. `crates/unlace-cli/src/sbom/collect.rs:150` names the format only | low (AIX) | S-M |
| 16 | Android `boot.img` (v0 to v2) header and kernel/ramdisk split | `android_boot.rs:1` | **missing** (grep `ANDROID!`) | low to medium for Android firmware | S |
| 17 | Android ART image heap | `android_art.rs` (606 lines) | **missing**. Heap objects, not code | no | L |
| 18 | CompactDex decode | `android_dex.rs` (`cdex`) | **partial**. Detection only: `crates/unlace-middle/src/p0_knowledge/dex/format.rs:31-32`. Tracked with #1167 | with #1167 | S |

## Have (main covers the technique)

| Technique | origin/master | main (file:line) |
|---|---|---|
| Itanium LSDA call-site table and landing-pad clauses | `gcc_except_table.rs` | `analyzers/entry/itaniumeh.rs:1-5`, `:40-44` (`collect_call_sites`) |
| `.eh_frame` CIE/FDE parsing and pointer encodings | `eh_frame.rs` | `analyzers/entry/mod.rs:1869-1902`, `analyzers/entry/fdeinterior.rs:174` |
| Go `pclntab` function tables, go1.16 to go1.20 shapes | `gopclntab.rs` | `analyzers/pclntab/gopcln.rs:18-66` |
| Go moduledata, `typelinks` | `go_moduledata.rs` | `analyzers/pclntab/gomoduledata.rs`; `analyzers/gotypes/mod.rs:7`, `:27-41` |
| Go build info (version) | `toolchain.rs:516` (`go_build_version`) | `loader/gobuildinfo.rs` |
| Go types other than maps (itabs, interface fields, struct layout) | `go_types.rs` | `analyzers/gotypes/*` (compared by name, not line by line) |
| DWARF `.debug_info` lowering | `dwarf.rs` (2,783 lines) | `analyzers/dwarf/*` (about 40 files), DWZ alt forms `analyzers/dwarf/mod.rs:1577` |
| On-demand DWARF type import (reachability set) | not on master | `analyzers/dwarf/dwarfondemand.rs:1-12`, wired at `analyzers/dwarf/mod.rs:138` |
| Itanium C++ RTTI and vtables | `rtti.rs` | `analyzers/rtti/itaniumrtti.rs` |
| Rust demangling, legacy and v0 | `demangle_rust.rs` | `analyzers/demangle/mod.rs:16`, `:134` (`rustc_demangle`) |
| Java `.class` (constant pool, methods, `Code`) | `java_class.rs` | `loadimage_class.rs:1-20`; `crates/unlace-middle/src/p0_knowledge/jvm/format.rs:1-25` |
| .NET CLI metadata | `dotnet_clr.rs` | `loadimage_cil.rs` |
| DEX, ODEX, VDEX, APK | `android_dex.rs`, `android_vdex.rs` | `loadimage_dex.rs:35` (`is_odex`), `:42-47` (`is_vdex`) |
| Intel HEX and Motorola S-record | `intel_hex.rs` | `loader/firmware/containers.rs:188` (`ihex`), `:232` (`srec`) |
| Cortex-M vector table blob | `stm32_blob.rs` | `loader/firmware/cortexm.rs` |
| ESP32 application image | `esp32_image.rs` | `loader/firmware/esp.rs:1-25`, `esprom.rs` (ROM symbols and memory maps; ours is richer) |
| `ar` archives | `archive.rs` | `analyzers/blobs/archives.rs` (object crate) |
| FLIRT pattern generation: CRC16, tail bytes, collision marks | `flirt/generator.rs`, `flirt/mod.rs`, `flirt/signatures.rs` | `analyzers/flirt/flirtpat.rs:94` (`patterns_from_object`), `:319` (`write_pat`, `(collision)` lines), `:368` (`pattern_collisions`) |
| Strings | `strings.rs` | `analyzers/strings/*` |
| UEFI firmware volumes and modules | `uefi_module.rs` | `analyzers/uefi/*`, `loader/firmware/uefifv.rs`, `tiano.rs` |
| Wasm core module | `wasm_object.rs` | `loader/format/wasm.rs`, `loadimage_wasm.rs` |
| PDB symbol store (msdl) | `symcache.rs:35` (`msft_symbol_server_url`) | `analyzers/pdb/locate.rs:111-140` |

## Corrections to the IDA-gap notes (on `origin/main`)

- `notes/ida-gap/debuginfo-loaders.md` row 5 (DWARF on-demand type import, "missing"): stale. `analyzers/dwarf/dwarfondemand.rs` computes the reachability set and is wired at `analyzers/dwarf/mod.rs:138`. Whether it matches IDA's preload and pass counts is not checked here.
- `notes/ida-gap/debuginfo-loaders.md` row 3 (FLIRT collision handling, "no collision pass"): stale. `analyzers/flirt/flirtpat.rs:319` writes excluded patterns as `;;;` lines ending `(collision)`, and `:368` groups colliding names. The `validate` option is still unverified.
- `notes/ida-gap/processors-loaders.md` row for `javaldr` ("missing", and item 7): stale. `loadimage_class.rs` maps `.class` and JAR members, and `unlace-middle` parses the class file.

## Left to other owners or out of scope

- Apple (`apple_kernelcache`, `dyld_*`, `ios_img4`, `macho`, `objc`, `swift_metadata`, `compact_unwind`, `demangle_swift`) and Windows (`pe`, `pdb`, `pdb_types`, `msvc_rtti`, `seh`, `minidump`): not reviewed here.
- Debugger and runtime tools (`frida_bridge`, `gdb_mi`, `lldb_bridge`, `rr_trace`, `ttd_trace`, `windbg_ttd`): excluded by owner direction.
- `image.rs`, `error.rs`, `lib.rs` and `eh_frame_test.rs`: data model and tests, not techniques.

## Issues filed from this note

- Rows 2, 5 and 6 are new issues (see the PR for their numbers).
- Rows 1, 3, 4 and 18 are already tracked (#1142, #1167, #1217) and were not refiled.
