# IDA 9.5 debug-info and loader plugins vs unlace: what IDA recovers that unlace does not (2026-11-24)

Area: debuginfo-loaders. Research and docs only, no code changes. Extends [processors-loaders.md](processors-loaders.md) (loader table, section 2) and [types-plugins-sigs.md](types-plugins-sigs.md) (PDB/DWARF rows); where those notes overlap this one, this note carries the newer evidence and each overlapping note now points here.

Scope: plugins pdb, dwarf, uefi, svdimport, makesig, patfind; loaders uefi_fv, pe, elf, coff, macho, dex; core libclpx.

## Method and sources

- IDA side: `~/SiteResearch/ida-pro/sqlite/<cat>__<module>.sqlite` (tables `strings`, `pseudocode`, `names`, `functions`). Message-to-function mapping uses `~/SiteResearch/ida-pro/derived/ida-links.sqlite` (`string_users`, which joins strings to the function that references them). Decimal `func_start` values are converted to hex; IDA names are the dump names `sub_<hex>`.
- Claims rest on the message strings, their referencing function and the function names. Pseudocode bodies were sampled but not quoted: the dumps are verbose and the strings already name each pass.
- unlace side: `git grep` over `crates/` on `origin/main` (b50c4b082f), then the cited file read. Each row says `have`, `partial` or `missing`; a `missing` row means the grep found no code path, not just no test.
- `core__libclpx` is not a C parser: see Corrections.

## Ranked gaps (missing or partial)

Ranking: corpus reach times evidence, divided by size. Top five become issues (section 4).

| # | technique | what IDA does (evidence) | IDA function / address | unlace status (file:line) | impact | size |
|---|---|---|---|---|---|---|
| 1 | Mach-O `.dSYM` lookup by UUID; fat-slice choice by cpu and UUID | The dwarf plugin searches a `.dSYM` bundle for the image (string ".dSYM"), prints "Looking for cpu=%d:%d, uuid=%s", "Candidate: ...", "Failed retrieving archs/UUID", and warns "Couldn't find UUID/debug ID \"%s\" for file". `*.kext` bundles are searched the same way. The macho loader runs the same fat-candidate match | dwarf `sub_C3770` (0xC3770, ".dSYM"), `sub_C3110` (0xC3110, candidate match), `sub_C4120`/`sub_C4230` (0xC4120, 0xC4230, kext bundles), `sub_30B40` (0x30B40, not-found); macho `sub_416A0` (0x416A0) | **missing**: no code reads a `.dSYM` (the only `dSYM` hit is a doc comment, `crates/unlace-analysis/src/pass.rs:1418`). Fat slices chosen by arch name and target only: `crates/unlace-analysis/src/loader/macho_fat.rs:104` `select_fat_slice`, `:137` `slice_pref` | high on Apple: a shipped framework or app with its DWARF in a `.dSYM` decompiles without types and names. The UUID match is what keeps a mismatched dSYM from being applied | M |
| 2 | UEFI module entry prototypes by module kind | The uefi_fv loader types each module's entry by its FFS kind: `PeimEntryPoint(EFI_PEI_FILE_HANDLE, const EFI_PEI_SERVICES **)`, `DxeMain(void *HobStart)`, `PeiCore(...)`, `StandaloneMmEntryPoint(EFI_HANDLE, EFI_MM_SYSTEM_TABLE *)`, and `ModuleEntryPoint`; it labels combined modules `COMBINED_PEIM_DRIVER` and `COMBINED_MM_DXE` | loaders__uefi_fv `sub_A900` (0xA900); loaders__uefi_fv `sub_9AA0` (0x9AA0, image kind names) | **partial**: the FFS type is read (`crates/unlace-analysis/src/loader/firmware/uefifv.rs:21-22`, `:181`); only `_ModuleEntryPoint` is typed (`crates/unlace-analysis/src/analyzers/uefi/mod.rs:1-12`, `:193`). No PEIM, DXE, PEI-core or MM entry prototype and no combined-kind label (grep: none) | every PEIM, DXE and MM module in a firmware image: entry argument types and names | S |
| 3 | Signature generation: collision detection, exclusion, validation | makesig writes collided patterns as `;;; ... (collision)` exclusion lines and refuses to read the file until they are deleted ("delete these lines to allow sigmake to read this file"); it has an "Edit collisions" dialog and "NO LIBRARY MODULES ARE FOUND"; options `validate` (0, 1, 2), `toolchain` (8-bit), `dummynorename`, `collect` (all or selected), `names` (all, uname, anon); a module must fit a size bound and reports "N patterns out of M functions" | makesig `sub_14D30` (0x14D30), `sub_5910` (0x5910), `sub_9320` (0x9320), `sub_6730` (0x6730) | **partial/missing**: `crates/unlace-analysis/src/analyzers/flirt/flirtpat.rs:1-12` renders `.pat` text with no collision pass (`:181` is a name dedup only); `crates/unlace-analysis/src/analyzers/fid/build.rs:108` dedups by address; `fid/fidstrict.rs` is an apply-time rename gate, not a build check. No collision or validate option in either (grep) | an ambiguous signature silently names every match in every library it touches | M |
| 4 | Android OAT container, CompactDex, VDEX checks, boot-classpath and quickening, hiddenapi | dex: "Could not locate DEX file inside the OAT file"; "Unsupported VDEX %s DEX section version"; "Unsupported VDEX version"; CompactDex banner; "optimized by VM build %u against %u boot classpath file(s)"; "the quickened offsets make %s %u bytes"; "hiddenapi class data" | loaders__dex `sub_115E0` (0x115E0), `sub_11B30` (0x11B30), `sub_11CE0` (0x11CE0), `sub_170D0` (0x170D0, CompactDex), `sub_17940` (0x17940), `sub_1CA20` (0x1CA20), `sub_18160` (0x18160) | **partial**: APK and plain DEX only (`crates/unlace-analysis/src/loadimage_dex.rs:1-10`); VDEX version 027 (`:42`); quickened ODEX only as a doc note (`:30`). No OAT reader, CompactDex or hiddenapi (grep `OatFile\|OAT_\|CompactDex\|hiddenapi`: none) | Android 5 to 8 framework and boot `.oat` files, and CompactDex APKs | M |
| 5 | DWARF on-demand type import | The import has an option "Skip the eager whole-graph type import and materialize only the types reachable from named functions" (also "On-demand type loading (for very large binaries)"); it preloads with "Preloading types: %zu / %zu" and "Loading types: Compile unit N of M"; it reports multi-pass progress "Types (Pass %u of ~%u)" | dwarf `sub_2B4B0` (0x2B4B0, options), `sub_520C0` (0x520C0, preload), `sub_486C0` (0x486C0, passes) | **missing**: one eager pass in `crates/unlace-analysis/src/analyzers/dwarf/mod.rs:1517` `run_generic`; no reachability mode (grep `lazy\|on.demand\|reachable` in `analyzers/dwarf`: none) | run time and memory on multi-GB debug info; output unchanged | M |
| 6 | DWARF evidence for hard-float ABI | "ARM: hardfloat ABI inferred from DWARF VFP-located parameter": a parameter located in a VFP register marks the image hard-float | dwarf `sub_17C70` (0x17C70) | **missing** from DWARF: the ARM float ABI comes from `.ARM.attributes` only (`crates/unlace-analysis/src/loader/armfloatabi.rs:58` `vfp_args`, `:109` `args_evidence`, `:188` `fp_hardware`); grep of `analyzers/dwarf` for VFP or hardfloat: none | ARM hard-float decompiles whose attributes are absent but whose DWARF keeps VFP locations | S |
| 7 | patfind post-rules and pattern constraints | Reads `prepatterns`, `postpatterns`, `patternconstraints` (alignment, endianness, setcontext, optional_post); reports "Possible function found at ..., pattern %x"; validates bit and byte counts | patfind `sub_6350` (0x6350), `sub_9000` (0x9000), `sub_5380` (0x5380) | **partial**: `crates/unlace-analysis/src/analyzers/entry/mod.rs:70-80` ports bare `<funcstart/>` patterns and `<patternpairs>` (`:272`); post-rules and the PseudoDisassembler are dropped; the prologue oracle is x86-64 only; `patternconstraints` for ARM, AArch64, MIPS and PPC is a follow-up (`:79`) | function starts in non-x86 firmware reached only by prologue patterns | M |
| 8 | SVD register labels at absolute addresses | svdimport: SET NAME and CREATE BYTE, WORD or DWORD at each register address; ADD and RESIZE SEGMENT for peripherals; reports "Applied svd file, renamed %d, failed on %d addresses" | svdimport `sub_5680` (0x5680), `sub_5EA0` (0x5EA0), `sub_16250` (0x16250) | **partial** (different model): `crates/unlace-analysis/src/loader/firmware/svd.rs:1-6` builds C structures at base addresses (derivedFrom, dim, clusters, reserved gaps); no per-register address naming path (grep `set_name\|label` in svd.rs: none) | registers at absolute addresses have no names unless the struct is applied | S-M |
| 9 | Mach-O ARM32 relocatable objects (Thumb BR22, PAIR, SUBTRACTOR, ADDEND) | Applies ARM relocations to `.o` input and reports "ARM_THUMB_RELOC_BR22 relocation to non-aligned address", "Unmatched SUBTRACTOR relocation", "Illegal ADDEND relocation", "missing required PAIR relocation", "illegal relocation length" | macho `sub_1A920` (0x1A920), `sub_1B390` (0x1B390), `sub_1C760` (0x1C760) | **missing**: `crates/unlace-analysis/src/loader/reloc_apply.rs:427` matches `ARM64_RELOC_BRANCH26` only; no `ARM_RELOC_*` arm (grep) | armv7 Mach-O objects and archives; niche | M |
| 10 | PE CHPE metadata and dynamic value relocation table (DVRT) | Names "CHPEMetadataPointer", "DynamicValueRelocTable" (and Section and Offset) among the load-config labels. Only names: the strings show no application step | pe `sub_17790` (0x17790) | **missing**: `crates/unlace-analysis/src/loader/peloadconfig.rs:1-25` reads the CFG, SEH and cookie fields and the XFG pointers; `:53-55` stops at `GuardMemcpyFunctionPointer`. ARM64EC and ARM64X unwind is handled (`crates/unlace-analysis/src/analyzers/entry/pe_entry.rs:29-30`, `:222-223`) | ARM64X hybrid fixups and ARM64EC x86 ranges. **Not an IDA-applied technique**: a format gap, listed for completeness | M |
| 11 | Symbol-store PDB search by default | `_NT_SYMBOL_PATH` entries are parsed, a `srv*` entry is used or ignored, a missing cache directory is replaced with a fallback ("directory doesn't exist will use ..."); "symbol servers will be used" or "local directories search only"; a two-tier search reports "found CV ea"; the RSDS and NB10 records are read | pdb `sub_77DD0` (0x77DD0), `sub_40850` (0x40850), `sub_78830` (0x78830), `sub_76EA0` (0x76EA0) | **partial**: tier 4 is opt-in (`crates/unlace-analysis/src/analyzers/pdb/locate.rs:23`, `unlace_pdb_symsrv`), gated on GUID and age (`locate.rs:31-40`) | stripped PEs with no sidecar PDB on a machine with a symbol cache. A default-on is a network-behaviour decision for Cole | S |
| 12 | ECOFF object format | "ECOFF symbol count", "ECOFF fdr count", "Bad ECOFF symbol table" | coff `sub_E4C0` (0xE4C0), `sub_E6D0` (0xE6D0), `sub_F470` (0xF470) | **missing** (grep `ECOFF` in `crates/` finds only GUID text) | MIPS ECOFF objects; niche | M |
| 13 | COFF import members in archives (`.lib`) | "AR import header (%s)" | coff `sub_FAC0` (0xFAC0) | **missing** as a short-import parse (grep `ImportFile\|IMPORT_HEADER`: none). Archives are read with `object::read::archive` (`crates/unlace-analysis/src/analyzers/flirt/ruststdsigs.rs:148`, `crates/unlace-cli/src/armember.rs:37`) | import libraries given directly; low | S |

## Techniques unlace already has (verified, no task)

| technique | IDA evidence | unlace (file:line) | status |
|---|---|---|---|
| PDB forward references resolved to the full definition | pdb `sub_57040` (0x57040, "could not resolve forward reference"); TPI hash adjust `sub_5B2E0` (0x5B2E0) | by unique name: `crates/unlace-analysis/src/analyzers/pdb/pdbtpi.rs:12`, `:77-89` (no TPI hash stream) | have (different method) |
| PDB struct alignment and padding | pdb `sub_45F20` (0x45F20, "Failed to calculate struct member alignments") | `crates/unlace-analysis/src/analyzers/pdb/pdbtpi.rs:700-706` `alignment`, `:738` default map | have |
| PDB search tiers (explicit path, CodeView name, sidecar) | pdb `sub_78830` (0x78830); "found PDB file in COFF" `sub_530A0` (0x530A0) | `crates/unlace-analysis/src/analyzers/pdb/locate.rs:23` tiers 1 to 3; basename only | have |
| Inline-site and register-range variables | pdb `S_INLINESITE` path | `crates/unlace-analysis/src/analyzers/pdb/pdbtypes.rs:71-72`, `:19` (defrange) | have |
| DWZ and `.gnu_debugaltlink` companion | dwarf `sub_B7E40` (0xB7E40), `sub_2B4B0` ("Load &DWZ data") | `crates/unlace-analysis/src/loader/elf_debuglink.rs:119-128` reads the link; `crates/unlace-analysis/src/analyzers/dwarf/mod.rs:1577` names the alt forms | have (alt-form resolution to confirm on a DWZ-compressed debuginfo) |
| DWARF declarations and sized shells | dwarf `sub_52C80` (0x52C80, "is a sized shell of %s; treating it as a declaration") | `crates/unlace-analysis/src/analyzers/dwarf/dwarfstructs.rs:109`; `crates/unlace-analysis/src/analyzers/dwarf/callwide.rs:355` | have |
| ELF MiniDebugInfo `.gnu_debugdata` | elf `sub_14640` (0x14640) | `crates/unlace-analysis/src/loader/elf_debuglink.rs:3` | have |
| UEFI firmware volumes, FFS, LZMA, Tiano, Brotli | uefi_fv `sub_A900` (0xA900) | `crates/unlace-analysis/src/loader/firmware/uefifv.rs:1-8` | have |
| UEFI PEI services getter (ARM TPIDR) | uefi `sub_32880` (0x32880) | `crates/unlace-analysis/src/analyzers/uefi/mod.rs:14`, `:55` | have |
| UEFI protocol installation and synthesized interface structs | uefi `sub_14F30` (0x14F30), `sub_13E40` (0x13E40, "structure(s) synthesized from the installed interfaces") | `crates/unlace-analysis/src/analyzers/uefi/flow.rs:16`, `:1890` `synthesize` | have |
| UEFI DebugAssert and DebugPrint prototypes | uefi `sub_227C0` (0x227C0) | data: `crates/unlace-analysis/src/analyzers/uefi/protocols.txt:52` | have (as data) |
| PE TLS callbacks, delayed imports, .NET | pe `sub_B6E0` (0xB6E0), `sub_9060` (0x9060), `sub_163C0` (0x163C0) | `crates/unlace-analysis/src/analyzers/entry/mod.rs:567`; `crates/unlace-analysis/src/loader/pe_iat.rs:183`, `:212`; `crates/unlace-analysis/src/loadimage_cil.rs:1` | have |
| Mach-O platform (`LC_BUILD_VERSION`) | macho platform and type-library notes | `crates/unlace-analysis/src/analyzers/protos/sdkprotos.rs:116-124` | have |
| Kernel collection (`MH_FILESET`) | macho and kcu modules | `crates/unlace-analysis/src/image_bytes.rs:53` declines; `crates/unlace-analysis/src/loader/kernelcache.rs` | have |

## Corrections to the brief and to earlier notes

- **`core__libclpx` is not a C or C++ type parser.** It is the COIN-OR Clp linear-programming solver with the CoinLpIO LP-format reader: about 3,300 `Clp` or `Coin` strings and 7,300 names (for example `ClpSimplex::readLp`, `CoinLpIO`), and no declaration-parser strings. Its use is IDA's LP-based stack-pointer and purge solve, already listed in [processors-loaders.md](processors-loaders.md) section 3. Nothing in this area needs it.
- **DWZ is not missing.** [types-plugins-sigs.md](types-plugins-sigs.md) row 13 and its top-10 item 1 said there was no `.gnu_debugaltlink` support. unlace reads it (`crates/unlace-analysis/src/loader/elf_debuglink.rs:119-128`). Those lines are corrected in that note.
- **UEFI DebugAssert is not missing** (`protocols.txt:52`); PDB forward references are resolved, by unique name rather than the TPI hash.

## Top five, as issues

1. Mach-O `.dSYM` lookup by UUID (row 1).
2. UEFI module entry prototypes by FFS kind (row 2).
3. Signature collision and validation (row 3).
4. Android OAT, CompactDex and VDEX checks (row 4).
5. DWARF on-demand type import (row 5).

Rows 6 to 13 stay in this note. Rows 10 and 11 need a decision from Cole before any task: row 10 is a format gap that IDA does not apply, and row 11 changes network behaviour.

## IDA references

| IDA module | function | address | meaning |
|---|---|---|---|
| dwarf | `sub_C3770` | 0xC3770 | `.dSYM` lookup |
| dwarf | `sub_C3110` | 0xC3110 | cpu and UUID candidate match |
| dwarf | `sub_2B4B0` | 0x2B4B0 | DWARF import options (lazy types, DWZ, definitive prototypes) |
| dwarf | `sub_520C0` | 0x520C0 | type preload |
| dwarf | `sub_17C70` | 0x17C70 | hard-float from DWARF |
| loaders__uefi_fv | `sub_A900` | 0xA900 | entry prototypes per module kind |
| plugins__uefi | `sub_13E40`, `sub_14F30` | 0x13E40, 0x14F30 | protocol synthesis and records |
| plugins__makesig | `sub_14D30`, `sub_5910`, `sub_9320`, `sub_6730` | 0x14D30, 0x5910, 0x9320, 0x6730 | collisions, module selection, options, pattern bounds |
| loaders__dex | `sub_115E0`, `sub_170D0`, `sub_17940`, `sub_18160` | 0x115E0, 0x170D0, 0x17940, 0x18160 | OAT, CompactDex, boot classpath, hiddenapi |
| loaders__macho | `sub_416A0`, `sub_1A920`, `sub_1B390`, `sub_1C760` | 0x416A0, 0x1A920, 0x1B390, 0x1C760 | fat candidate match, ARM relocations |
| plugins__patfind | `sub_6350`, `sub_9000` | 0x6350, 0x9000 | pattern file and search |
| plugins__svdimport | `sub_5680`, `sub_16250` | 0x5680, 0x16250 | register names, apply report |
| loaders__pe | `sub_17790` | 0x17790 | load-config labels |
| plugins__pdb | `sub_77DD0`, `sub_40850`, `sub_78830` | 0x77DD0, 0x40850, 0x78830 | symbol path, providers, search |
| core__libclpx | `ClpSimplex::readLp`, `CoinLpIO` (strings) | n/a | COIN-OR LP solver |
