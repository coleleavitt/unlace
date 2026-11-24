# Language-runtime plugins: IDA 9.5 vs unlace (2026-11-24)

Area survey for the IDA technique gap track, area *language-runtimes*: the IDA 9.5 plugins for Go
(plugins__golang), Rust (plugins__rust), MSVC RTTI (plugins__rtti), x64 exception tables
(plugins__eh34, plugins__eh_parse), COM (plugins__comhelper), indirect-call edits (plugins__callee),
Borland RTTI (plugins__bdescr), the Swift demangler (core__libSwiftDemangle, apple__swift) and the Objective-C
plugin (apple__objc). It extends notes/ida-gap/types-plugins-sigs.md and notes/ida-gap/apple-objc-macho.md
and reuses notes/ida-msvc-eh.md (its section 4 plan is still open for try/catch structuring). Research only.

Method. IDA side: per-module dumps in ~/SiteResearch/ida-pro/sqlite/plugins__*.sqlite and apple__*.sqlite
(tables functions, pseudocode, strings, xrefs). Strings name the passes (debug and error texts), and
xrefs from a string's address to a function locate the pass; the function address and size are from the
functions table. Function names are the dump's sub_<ea>. Descriptions are my own. unlace side: rg over
crates/unlace-analysis, crates/unlace-middle, crates/unlace-emit and crates/unlace-decomp/phases.toml on
origin/main (cbb6d13fc2 at survey time). The MSVC EH row also reads docs/spec/09-emission.md "MSVC throws".

Status: have = unlace does it (option named); partial; missing; ours-better = unlace goes past IDA.

## Ranked gaps

| # | technique | what IDA does | IDA function (addr, size) | unlace status (file) | impact | size |
|---|---|---|---|---|---|---|
| 1 | MSVC x64 try/catch and destructor scopes in the parent body | eh34 reads the FH3/FH4 FuncInfo, inlines each catch and unwind funclet into the parent (rebasing its frame), turns every state change into a helper call (__eh34_try, __eh34_wind, __eh34_catch, __eh34_continue_unwinding ...), then pairs the enter and exit helpers into scopes before structuring, so the structurer prints try { } catch (T) { }. Leftover helpers are printed under a "hidden states" comment | collector sub_20300 (37 KB); inline_catch_handlers sub_19200; begin_inlining sub_6A900; do_inline_eh4_func_entry sub_68EA0; make_descend_unwind_scaffolding sub_421A0; make_descend_catch_scaffolding sub_42980; pre_structural sub_37D50 (1.9 KB); helper validation sub_57400, sub_579B0 | partial. msvceh (phases.toml row "msvceh", default off) decodes FuncInfo and labels try blocks, catch clauses and funclets as header comments; the funclets stay separate roots ("nothing in the parent's flow reaches them", analyzers/entry/msvcfuncinfo.rs header). Throw prints as throw (p9_emit/msvcthrow.rs). No funclet inlining, no try/catch in the parent body. The four-step plan is in notes/ida-msvc-eh.md section 4 (steps 3 and 4 open) | high: every MSVC C++ function with a try or a destructor on the unwind path shows its catch bodies nowhere in the parent | L |
| 2 | Go map descriptors and both map layouts | builds the map type's struct view from its descriptor: the bucket layout for old maps and the group and slot layout for swiss-table maps, with key and element offsets, hasher, group and slot sizes, so a map value and its runtime calls carry key and element types | sub_1B0B0 (3.5 KB); its struct templates are the strings at 0x2a370-0x2a680 (plugins__golang) | missing. gotypes never reads map descriptors: analyzers/gotypes/typeglobals.rs (about line 189-192) says map descriptors "whose record changed size with the swiss-table maps, are not read". No maptype, hmap, bucket or group reader in analyzers/gotypes or analyzers/pclntab | high on Go 1.24 and later builds, which use swiss maps by default; map values stay untyped and mapaccess and mapassign calls show no key or element type | M |
| 3 | Go FUNCDATA_StackObjects (address-taken locals) | reads the per-function stack-object table: a count, then per object its frame offset, size, pointer-data size and the pointer bitmap, and types each slot by its named type | sub_22800 (434 B, string 0x26ab3 "FUNCDATA_StackObjects"; record struct at 0x2b230) | missing. FUNCDATA_ArgInfo is read only for the AMD64 ELF stack model (p0_knowledge/goabi.rs, module header lines 28-36). No reader for stack objects in analyzers/pclntab or analyzers/gotypes | medium: address-taken Go locals print as stack offsets and their GC pointer maps go unused | M |
| 4 | Try-range split scoring at epilogs and after calls | chooses where a try range and its catch continuation begin and end: candidate split points are the epilog addresses and the point after each call; each candidate is test-built, its local score (states that would be hidden) is recorded, and the lowest score wins; the continuation edges are then moved to the winner; a loop guard protects the function push | get_epilog_split_eas sub_22E00 (6.9 KB); AFTER CALL SPLIT sub_33F80 (4.3 KB); test_split_range sub_324A0 (8.6 KB); record_split_test_results sub_32F20 (3.0 KB); adjust_try_continuation_boundaries sub_36B80; push_function_on_stack sub_63C70 | missing. No split-candidate search, no continuation-boundary move (grep "continuation boundar|split candidate|epilog split" over analyzers, lift and structure: no hits). Needed only once row 1 prints catch bodies | medium: wrong boundaries spill catch code past the try; the hidden-states comment grows | M (after row 1) |
| 5 | x64 .pdata epilog scopes (UNWIND_INFO extension and the packed single-epilog form) | decodes the epilog records of a function's unwind info: each epilog's start and end, and the packed "single epilog" form whose codes begin at a given index; the result gives the function's exit ranges, which row 4 consumes | sub_293C0 (1.7 KB; string 0x2d6d0 "Single epilog (packed) - unwind codes begin at index"); the scope count string 0x2ae41 "Epilog scopes count" and the listing marker 0x2ae59 | missing for .pdata. The only epilog decoder is the PDB side: analyzers/pdb/pdbframe.rs header (lines 9-15, UWOP_EPILOG). No x64 .pdata epilog-scope reader | low to medium: a multi-exit function's cold epilog can read as code of the next function; prerequisite for row 4 | S |
| 6 | ARM64 Windows unwind codes (.pdata on Windows on ARM) | decodes the ARM64 unwind code set (alloc_s, save_r19r20_x, save_fplr and save_fplr_x, set_fp, add_fp, end_c, save_next, alloc_m, save_regp and save_regp_x, save_reg and save_reg_x, save_lrpair, save_fregp and save_fregp_x, save_freg and save_freg_x, alloc_l, nop, end and the reserved codes) and rejects unknown opcodes | eh_parse: name table at 0x2a883-0x2aa86; "bad unwind opcode!" at 0x2a94d; no separate function name in the dump | missing. No ARM64 UWOP decoder anywhere in analyzers, loader or lift. Windows-only target: CLAUDE.local.md says no Windows-only work, so this is deferred unless that rule changes | low for Cole's targets; medium for Windows on ARM | M |
| 7 | Borland C++ (BCC, C++Builder) RTTI descriptors | creates and lists the BCC type descriptors at the cursor, with a recursive mode that creates the descriptors a created one refers to, and a list of descriptors that failed to parse; the Pascal form is the same plugin | bdescr dispatcher sub_3610 (758 B); "RTTI descriptor problems" list sub_32B0 (856 B) | missing for C++ descriptors. analyzers/delphi covers Delphi VMT and type-info records (analyzers/delphi/mod.rs header lines 1-6); no BCC reader, no match for Borland C++ or TD descriptors | low volume (C++Builder binaries only) | M |
| 8 | Go pclntab consistency diagnostic | counts _func.entryOff fields that do not match the functab and reports that the table looks obfuscated, instead of silently reading garbage | sub_24870 (928 B; string 0x2b8d0 "fields do not match functab; the pclntab looks obfuscated") | missing as a message. The header probe and the moduledata fallback exist (analyzers/pclntab/mod.rs probe_header and parse_header; analyzers/pclntab/gomoduledata.rs header) and read a stomped table, so only the warning is absent | low: diagnostic only | S |

## Already covered (no task)

| IDA mechanism | IDA function (addr) | unlace (file) | status |
|---|---|---|---|
| Go pclntab header probe, four magics, LE then BE | golang sub_AAC0 (magic reconstruction), sub_B1C0 (version from moduledata) | analyzers/pclntab/mod.rs probe_header (line 219) and parse_header (282); analyzers/pclntab/gomoduledata.rs header (recovery through runtime.firstmoduledata when the magic is stomped) | have |
| Go itab walk and type creation from itab entries | sub_EF40 (itab walk stopped), sub_17960 (create type from itab) | option goitabcalls (phases.toml, row "goitabcalls"); analyzers/gotypes/itabtypes.rs, itabargs.rs | have |
| Go typelinks, descriptors as typed globals, newobject result typing | sub_F0F0 (typelinks discarded on bad range) | option gotypeglobals (phases.toml row "gotypeglobals"); analyzers/gotypes/typeglobals.rs | have, ours-better (also go1.26 descriptor region) |
| Go inline tree, pcfile and pcln tables | golang pcdata readers | analyzers/pclntab/gopcln.rs (PCDATA_InlTreeIndex) | have |
| Go layout validation | sub_18A40 (failed to validate layout; real vs expected struct size) | not compared field by field in this survey | unchecked |
| Go force_regabi command line option | sub_D2F0 | ABI handling in p0_knowledge/goabi.rs and p4_calls/vectorabi.rs; the option itself not compared in this survey | unchecked |
| Rust demangling (legacy _ZN and v0 _R) | rust sub_E050 (loads librustdemangle, "rust_demangle_callback"); option sub_8AB0 | analyzers/demangle/mod.rs header lines 16 and 83 (rustc_demangle crate, no shared library needed) | ours-better |
| Rust panic Location structures and rustc version | rust sub_B7E0 (1.6 KB: "Detecting Rust panic Location structures", "detected rustc version") | analyzers/sourcelang/rustfmtio.rs (PanicLocation kind, panic_location at line 390); analyzers/sourcelang/rustversion.rs | have |
| Rust string literals as fat slices | rust sub_A8D0 ("Creating Rust-specific string literals") | strcodelen, fatstr and rustfmt options (analyzers/sourcelang) | have |
| MSVC RTTI (TypeDescriptor, CompleteObjectLocator, ClassHierarchy, vftables) | rtti plugin (about 162 functions; mdisp/pdisp/vdisp printing) | analyzers/rtti (msvcvtabletypes.rs, vftable.rs); see types-plugins-sigs.md row 6 | ours-better |
| Itanium and ARM EH tables | eh_parse personality table (sub_19720 in its module) | option itaniumeh (phases.toml row "itaniumeh"); crates/unlace-lift/src/p2_lift/itaniumeh.rs; ida-msvc-eh.md note | have |
| MSVC throw sites and ThrowInfo labels | eh34 create_throw_helper_calls sub_39140 (4.5 KB); CatchableTypeArray reader sub_5C7E0 | option msvceh (phases.toml row "msvceh", default off); p9_emit/msvcthrow.rs | have, opt-in |
| MSVC FuncInfo FH3 and FH4 decode | eh34 FH3 parser sub_3F6E0; unwind-map entries sub_3C7A0; eh_parse FH4 decoder | analyzers/entry/msvcfuncinfo.rs (FH3 magic range 0x19930520-0x19930522, FH4 with window) | have, opt-in |
| MSVC exception-state helpers and hidden-state settings | eh34 sub_2DA30 (global settings), sub_2F3F0 and sub_38740 (hidden states), sub_430E0 (is_wind_state) | msvceh is a single on or off option with no state-hiding modes | missing (folded into row 1) |
| COM class and interface ids, GUID globals renamed by value, interface vtables | comhelper sub_4600 (watcher that renames GUID variables and adds vtables), sub_3780 (CLSID scan) | analyzers/com/mod.rs header lines 1-30; tables analyzers/com/guids.txt and interfaces.txt; comcfg reads clsid.cfg | ours-better |
| Indirect call target edits by hand | callee plugin dialog ("Change the callee address") | indirectoverride element (analyzers and overrides at p0_knowledge/overrides.rs line 74) | have |
| Swift demangler (libSwiftDemangle) | core__libSwiftDemangle (660 functions, native library) | analyzers/demangle/swift.rs (pure Rust, follows the Swift reference demangler) | have |
| Swift runtime layouts and value witnesses | apple__swift | types-plugins-sigs.md row 9 and notes/ida-apple-mechanisms.md | partial, see those notes |
| Objective-C class, method, category, protocol and block records; ARC; msgSend | apple__objc (sub_2FB60 "Detecting xrefs to", sub_2C650 "added resolved isa", sub_2E170 local blocks) | apple-objc-macho.md rows 1-9 (objcblocks.rs, objccats.rs, objcruntime.rs, objc/mod.rs) | have; the isa cross-reference pass is row 6 of apple-objc-macho.md |

## Ranked top 5 (filed as issues)

1. Row 1, MSVC try/catch structuring (L). The largest visible gap on MSVC C++ code, and the four-step plan
   already exists in notes/ida-msvc-eh.md section 4.
2. Row 2, Go map descriptors and swiss layouts (M). Common on current Go builds and cheap to verify on a
   stripped Go 1.24+ sample.
3. Row 3, Go FUNCDATA_StackObjects (M). Names address-taken locals and gives GC maps that the stack model
   can use.
4. Row 4, try-range split scoring (M, after row 1). Needed for correct catch boundaries; the scoring is the
   part IDA does not leave to the structurer.
5. Row 5, x64 .pdata epilog scopes (S). Small, self-contained, and the prerequisite for row 4.

Rows 6 to 8 are not filed: Windows-only (6), low volume (7), a diagnostic only (8).

## How to re-check

    sqlite3 -readonly ~/SiteResearch/ida-pro/sqlite/plugins__eh34.sqlite "select printf('%x',start), name, end-start from functions where start in (0x37d50,0x6a900,0x68ea0)"
    sqlite3 -readonly ~/SiteResearch/ida-pro/sqlite/plugins__golang.sqlite "select substr(replace(text,char(10),' '),1,300) from pseudocode where ea=0x1b0b0"
    rg -n "map descriptors|swiss-table" crates/unlace-analysis/src/analyzers/gotypes/typeglobals.rs
    rg -n -i "split candidate|continuation boundar|epilog split" crates/unlace-analysis/src crates/unlace-lift/src crates/unlace-structure/src
