# Original unlace techniques vs main: decompiled-references survey

Scope: what the reference tree at `research/decompiled-references/` holds, how it could serve as a corpus for main, and a ranked list of techniques from the archived research decompiler (`origin/master`) that main lacks or only partly has.

- Original side: `origin/master` (3aaf121866), read with `git show` and `git grep`, never checked out. Line numbers refer to that ref.
- Main side: `origin/main` at 188480126a. Line numbers were re-checked there.
- Not run: no cargo and no unlace binary, per the rules for this survey. The comparison below is code-reading evidence, not a decompile diff.
- Already recorded and not repeated: `notes/archived-master-inventory.md` (features, CLI and output), `notes/ida-gap/*.md`.

## 1. What the reference tree is

591,248 files, 8.8 GB, 12 top-level directories. Sizes from `du`:

| Dir | Size | What it is |
|---|---|---|
| `ida/` | 6.6 GB | IDA Pro 9.3sp1 install parts, plus `ida/INVENTORY.md`: 238,464 Hex-Rays pseudocode `.c` files across 76 module dumps, made 2026-05-18 with an idalib bulk dumper. Subtrees: `binary/` (IDA's own binaries), `idalib/`, `loaders/`, `processors/`, `plugins/`, `lumina/`, `metadata/`, `dbgsrv/` (debugger servers, out of scope), `.codegraph/` (SQLite, not opened). |
| `gcc/` | 1.2 GB | GCC source (git repo) and libunwind. About 63,500 C files sit under testsuite paths. |
| `ghidra/` | 434 MB | Ghidra git repo. `Features/Decompiler/src/decompile/cpp` holds 115 `.cc` files: the C++ engine that main ports. |
| `hexrays/ida_dump/` | 287 MB | Hex-Rays pseudocode dumps for 8 modules (`hexx64`, `hexarm`, `hexarc`, `hexmips`, `hexppc`, `hexrv`, `hexv850`, `hex_loader`). Each has about 7.6k to 7.8k `.c` files for about 8.2k to 8.4k function entries, and 2 to 3 failed addresses. Names are mangled. |
| `retdec/` | 122 MB | RetDec git repo (C++ decompiler). Its tests hold no `.c` files. |
| `iced/` | 112 MB | iced-x86 git repo (Rust x86 decoder). |
| `ida-binary/` | 90 MB | 20,267 pseudocode `.c` files plus `all_funcs.txt`. The sample is mostly Qt-style C++ symbols. |
| `plugins/`, `procs/`, `loaders/` | 44, 33, 25 MB | Hex-Rays pseudocode of IDA plugin, processor and loader modules. Directory names match `ida/INVENTORY.md`. |
| `rellic/` | 5.6 MB | Rellic git repo (LLVM IR to C). Tests hold 54 `.c` and 3 `.ll` files. |
| `demangle/` | 3.3 MB | `librustdemangle` and `libswiftdemangle` sources. Main has a Swift demangler (`crates/unlace-analysis/src/analyzers/demangle/swift`). |

Two warnings. First, `._*` AppleDouble sidecars are noise in every `all/` folder. Second, the Hex-Rays dumps are pseudocode only. The binaries they came from are not in the tree, except that `ida/binary/` holds IDA's own modules.

## 2. Use as a corpus for main

- **Not ground truth.** Hex-Rays output is a second decompiler's output, and the dumps carry no source. Using them as truth would reward matching IDA, not being correct.
- **Comparison corpus, usable now.** Pick functions from `hexx64/all_funcs.txt` (addresses such as 0x2B000) and run main on the same IDA module binaries under `ida/binary/`. Score structure (GED, see `notes/ida-gap/ged-vs-ida.md`) and naming, not text.
- **Ground truth, needs a build step.** The GCC testsuite sources, compiled with DWARF, give source-level truth for locals and types. That step compiles code, so it was not done here and needs a decision. rellic's 54 `.c` tests cover IR-to-C only.
- **Sample comparison.** Not run, because main cannot be run in this survey. The gaps below are read from code and from master's own measured design doc. Main's gap on the irreducible-region case is expected but not measured.

## 3. Ranked techniques

Status key: MISSING = no code found on main (grep at origin/main). PARTIAL = related code exists but the technique does not. HAVE = equivalent exists. "Unwired" means master's function has only test callers or only a re-export.

| # | Technique | Original (origin/master) | Main status (origin/main) | Port? | Size |
|---|---|---|---|---|---|
| 1 | DREAM reaching-condition structuring of irreducible and cyclic regions | `crates/unlace-struct/src/reaching_conditions.rs:437` `compute_reaching_conditions`; `condition_refinement.rs:210` `refine_cyclic_region`, `:1196` `refine_region`. Wired in `structurer/mod.rs:1311-1405`, default on, rollback `UNLACE_DREAM_STRUCT=0`. Design: `docs/design-structurer-irreducible-2026-05-29.md` | MISSING: no reaching-condition code. Fallbacks: `node_split` at `crates/unlace-middle/src/substrate/funcdata_block.rs:3224`; the region structurer stops at `Irreducible` at `crates/unlace-structure/src/p8_structure/region_structurer.rs:1647` | Yes, behind an option. The master design says 68 blocks and 20 entries stay as gotos under node-splitting | L |
| 2 | Control-flow deflattening (OLLVM and Themida dispatcher) | `crates/unlace-passes/src/deflat.rs:53` `detect_flattened_dispatch`, `:133` `recover_original_cfg`. Unwired (tests at 547, 587) | MISSING. `crates/unlace-structure/src/p8_structure/ifelseflatten.rs:53` is if-else flattening, a different thing | Yes, behind an option. Rewrite the CFG only on a proven state map | M |
| 3 | Taint propagation and constant-time violation check | `taint_engine.rs:70` `propagate_taint` (exported at `lib.rs:547`, no pipeline caller found). `ct_violation.rs:60` `detect_ct_violations`, `:136` taint propagation. `nullability_taint.rs:172` `analyze_taint`. Unwired | MISSING. `crates/unlace-console/src/codedata.rs` "taint" is Ghidra's notcode propagation, unrelated | Yes, report-only option. Needs a secret-source list | M |
| 4 | Shared loop trip-count and SCEV facts | `scalar_evolution.rs:129` `compute_trip_count`, `:246` `analyze_loop_scevs`. Used by `hir_loop_recovery.rs:72`, exported at `lib.rs:401` | PARTIAL. For-loop reroll exists at `funcdata_block.rs:333` `finalize_forloop_transform`. No shared trip-count facts. `crates/unlace-bandb/src/p3_dataflow/stackbytecopy.rs:115` is local | Maybe. Measure on for-loop output first | M |
| 5 | DWARF frame-offset guards: empirical delta, phantom-seed guard, no fusion across distinct DWARF names | `docs/design-lvar-recovery-spec-2026-06-04.md` (root cause and steps A to E). The spec records six serial attempts that each regressed one fixture | PARTIAL. Architectural CFA constant applied at `crates/unlace-analysis/src/pass.rs:185-190`. No phantom-seed guard and no distinct-name fusion guard found | Port the guards only, after a repro on main. The spec says the three offset maps must move together | M |
| 6 | API-hash resolution (ROR13, DJB2, CRC32) and hash-loop recognizer | `api_hash_resolve.rs:78` `hash_name`, `:110` `resolve_hash`, `:128` `recognize_api_hash_loops`. Unwired | MISSING | Yes, behind an option, for malware triage | S to M |
| 7 | Type voting with penalty ranking and evidence edges | `type_vote/ballot.rs:38` `unknownness`, `:130` `compatible`; `type_vote/evidence.rs` builds the edge set. Wiring not checked | PARTIAL. Ghidra type propagation; call-site votes in `crates/unlace-bandb/src/p5_types/sitetypelock.rs:5` | Measure first. A wholesale port is unlikely to pay | L |
| 8 | MemorySSA-driven dead-store elimination and cross-block global DSE | `memory_ssa_builder.rs:33` `build_memory_ssa`; `memory_ssa_dse.rs:85` (wired at `crates/unlace-cli/src/pipeline.rs:2618`); `dse_global.rs:89` `find_globally_dead_stores` (no pipeline caller found) | PARTIAL. Stack-alias dead store at `crates/unlace-bandb/src/p6_variables/stackalias.rs:23`; heritage-based SSA | Measure. Global DSE for stack slots only | M |
| 9 | Call-site argument window scan for prototype guesses | `callee_guess/site.rs:68` `collect_call_sites`, `:167` `scan_window`; `guess.rs:25` `guess_from_call_sites`, wired at `pipeline/call_site_guess.rs:64` | PARTIAL. Ghidra prototype recovery; per-site varargs overrides at `crates/unlace-console/src/decompile_step.rs:106` | Maybe, as a fallback when no prototype is known. Measure | M |
| 10 | VM-dispatch (virtualization obfuscator) recognizer | `vm_dispatch_recognize.rs:36` `recognize_vm_dispatch`. Unwired | MISSING | Report-only option; low priority | S |
| 11 | Encrypted-string decode-loop recognizer | `string_decode_recognize.rs:40` `recognize_string_decoders`. Unwired | PARTIAL. `StringDecodeKey` at `crates/unlace-middle/src/p0_knowledge/stringmanage.rs:71` | Maybe | S |
| 12 | Self-modifying-code unwrap | `smc_unwrap.rs:59` `detect_smc`. Unwired | MISSING | Low | S |
| 13 | Nullability inference | `nullability_taint.rs:47` `infer_nullability`. Unwired | MISSING. `crates/unlace-middle/src/substrate/context.rs:1136` `nullable_literal_values` is a value set, not an analysis | Only with a consumer | S to M |
| 14 | CWE pattern detection | `cwe_detect.rs:75` `detect_cwe`. Unwired | MISSING | Owner call. Heuristic, with false positives | S to M |
| 15 | Pointer-versus-scalar guard on PHI coalescing | `register_coalesce.rs:131` `pointer_scalar_conflict`, `:173` `try_coalesce_live_intervals`; wired at `:252` | PARTIAL by design. Cover-based merging: `crates/unlace-bandb/src/p6_variables/coreaction_cleanup.rs:1637`, `crates/unlace-decomp/src/infra/universalaction.rs:1854`. Not verified on main | No port until a repro on main shows the aliasing. Issue #1224 already covers this | S |
| 16 | Sparse conditional constant propagation and global value numbering | `sccp.rs` (1,829 lines); `gvn.rs:177` `compute_rewrites` | MISSING. No SCCP or GVN module; a CSE rule exists | SCCP maybe, for dead-arm removal. GVN no: it hurts readability | M each |
| 17 | Counterexample-guided type refinement; Daikon-style invariants | `counterexample_refine.rs:60`, `:126`; `daikon_invariants.rs:50` (test callers only) | MISSING | No. Heuristic, no oracle, reports only | M and S |
| 18 | Object-widening decision | `object_widen/widen.rs:108` `room`, `:159` `accepted` | PARTIAL. Stack-object widening test at `crates/unlace-bandb-core/src/p6_variables/stackobjects/tests.rs:143` | Compare first | M |

HAVE, no port: opaque-predicate removal (`crates/unlace-bandb/src/p3_dataflow/opaquepredicate.rs:1-25`, option row at `crates/unlace-decomp/src/p0_knowledge/option_dispatch.rs:131`, default off); known bits (`crates/unlace-bandb-core/src/p3_dataflow/ruleaction_4.rs:105` nzmask); printf typing (`crates/unlace-lift/src/p1_partition/formatstring.rs:187`); function fingerprint (`crates/unlace-analysis/src/analyzers/fid/mod.rs:172`).

Skipped: lazy lifting (per-function decompile covers it); LICM (a decompiler should not hoist); `lvar_lanes.rs:41` (diagnostics only); anti-debug (inventory A1).

## 4. Top three to file as issues

1. DREAM structuring (row 1).
2. Control-flow deflattening (row 2).
3. Taint and constant-time analysis (row 3).

Existing issues checked: none for DREAM, deflattening or taint. #1223 and #1224 cover other rows.
