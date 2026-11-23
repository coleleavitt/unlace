# Handoff (2026-11-23)

Work stopped here on Cole's request. Everything below is the state at the stop and what remains.
Nothing is running: no agents, no builds. All work is committed and pushed.

## Where the project is

- **Repo:** `coleleavitt/unlace`, branch `main` (default). This is the decompiler that was Cole's
  kuna fork (`all` branch), rebranded: crates `unlace-*`, binary `unlace`, edition 2024.
  Internal `kuna_<slug>.rs` module names, option names, stage-test IDs and baselines were kept on
  purpose (baselines and upstream pulls still line up).
- **Old unlace** is archived on branch `master` and tag `unlace-v1-final`. Don't build the new engine there.
- **Upstream (Noelo-Lab/kuna):** all of Cole's PRs and issues there are closed. Their branches are
  archived on this repo as `archive/kuna-pr/<n>-<branch>` and `archive/kuna-fix/<name>`.
  No PRs or pushes go to Noelo-Lab/kuna or coleleavitt/kuna.
- **Upstream sync:** Noelo-Lab `main` up to 760a27b63 is merged in. Later upstream commits can be
  merged the same way (git rename detection maps `kuna-*` onto `unlace-*`).
- **Docs to read first:** `CLAUDE.md`, `docs/dev-setup.md` (build recipe, CI, benchmarks),
  `notes/crate-architecture.md` (the split plan), `docs/architecture/decompiler-ir-landscape.md`.

## Done in this round (2026-11-22/23)

- Moved off upstream; rebrand; upstream sync; README/NOTICE.
- CI: fast separate jobs (tidy/rustfmt, clippy, parity gates), the workspace suite under
  cargo-llvm-cov with a Repowise coverage upload, the `.sla` cache, a conflict-label job;
  CodSpeed with 9 benchmarks (`crates/unlace-bench`).
- Landed or ported all 61 former upstream PRs (57 merged, 2 superseded, #41's useful parts ported
  onto `itaniumeh`, 3 ObjC PRs rewritten onto main's ObjC code).
- Exception handling: `itaniumeh` gained ARM EHABI (`.ARM.exidx`/`.ARM.extab`), type names from
  `type_info` strings, `catch (A | B)` headers, runtime prototypes, and two flow/printing fixes.
- Test fixes after the landings: 9 workspace tests, the stage baseline (5909/5909 at the time),
  the `callbacktype`/`gottailcall` CLI probes, `kuna_dynrelocs`, spec anchors.
- Crate split: steps 1, 2, 4 merged (#36 layering check, #37 time budget, #38 extension traits);
  step 5 (options) and the hooks inversions about half done (below).
- Layering allowlist (`scripts/layers-allowlist.txt`): 394 lines -> 215 on main
  (192-200 at the tips of the open branches).

## Open PRs (left open on purpose, not merged)

| PR | Branch | What | State |
|---|---|---|---|
| #121 | `arch/optreg-9` | Option registry: 54 more on/off options | mergeable; tidy + clippy passed, parity was pending |
| #120 | `arch/hooks-12` | Move pass-owned types and `kuna_typequal` down; more hooks | in CI at the stop; allowlist 205 -> 192 |
| #119 | `arch/p2p-4` | Move `OutLang`, `Operation`, shared helpers and the JSON report modules down | open |

## Pushed branches with no PR yet (stacked, in order)

Option registry (worktree `/home/cole/RustProjects/active/unlace-wt-optreg`, target dir
`/home/cole/RustProjects/forks/unlace-target/optreg`), each stacked on the one before #121:

| Branch | Content | Checked |
|---|---|---|
| `arch/optreg-10` | 67 analysis-pass on/off gates in `p0_knowledge/kuna_analysisgates.rs` | `cargo check --workspace --tests` + `check_layers` only |
| `arch/optreg-11` | 37 options the dispatch parses into a field, as registered types | same |
| `arch/optreg-12` | compareform, returnpair, memsetrecover, rodatastring, regnarrow, regsigned, narrowret, pairparam, storetype | same |
| `arch/optreg-13` | `rustabi`, `fatstr`, `swiftstr` store their mode instead of a `u8` | same |
| `arch/optreg-14` | 18 on/off options `Architecture` reads itself, in `p0_knowledge/kuna_coreoptions.rs` | full gate passed except clippy |

Hooks / pass-to-pass (worktrees `unlace-wt-hooks` on `arch/hooks-13`, `unlace-wt-p2p` on `arch/p2p-5`):
`arch/hooks-13` and `arch/p2p-5` hold the next batches after #120 and #119.

Process for each: merge newest `origin/main`, run the gate (below), open the PR, merge when
tidy/clippy/parity are green, then the next one.

## What remains

### Option registry (crate-split step 5): done
Landed: #121 (optreg-9), #126 (optreg-10), #133 (steps 5j-5p: optreg-11..17), #135 (option types
into the knowledge plane), and the loader/environment options PR after it.
1. Done: #121 and optreg-10 .. optreg-14.
2. Done (#133): the two-field options are value structs; `readonlycalls`, `persistcalls`,
   `deadcascade`, `implweight` parse in their types. `jumptablemax` stays the upstream
   `max_jumptable_size` field.
3. Done (#133): the middle-band options are in `kuna_coreoptions`; `impliedrefs` and `termdup` stay
   the upstream `max_implied_ref` / `max_term_duplication` fields.
4. Done: `fpuemu`, `goabi`, `sourcelang`, `ppcapu`, `ifuncfpret`, `macho-arm64e`, `debuglink`,
   `dwarfscopes`, `symbolnamechars`, `typelib`, `callwide`, `armfloatargs`, `armfloatreturn` (plus
   `libctypes` and `objcivars`, the same kind) are registered types; their dispatch arms keep the
   load-option and env side effects. `ppcapu` and `ifuncfpret` are carried across
   `reset_defaults_internal`, as their fields were. `mzdgroup` was already registered (its apply
   stays in the arm).
   Left on purpose: `ppc32picimports` stays a field, because its reset value depends on what the
   loader applied (`Mode::loaded()`), which a static `shipped()` cannot state. `kernelcache`,
   `kernelcache-boot`, `dyldimage`, `objcsdk`, `exporttrie`, `cil`, `dyldcrossrefs` hold no
   `Architecture` field: their state is the program's load options and the env bridge.
5. Decided: the printer options (`arraynotation`, `braceelide`, `warnstyle`, ...) stay on the
   printer's own options.
- The live-value pin (`kuna_phases::tests`) is 138, which matches the 138 `live_field` rows in
  `phases.toml`.

### Hooks and pass-to-pass edges
1. Land #120 and #119, then `arch/hooks-13` and `arch/p2p-5`.
2. Middle -> pass edges after `arch/hooks-14` (which cleared jumptable -> constselectjump /
   jumpassist, architecture -> goreg / prefersplit, context -> prefersplit / narrowext / syscallregs,
   kuna_loadoptions -> goreg; their calls go through KunaHooks):
   - Done (#133, #135): architecture -> syscallregs / narrowext / octeoneffects, context ->
     octeoneffects, heritage -> indexaliasguard. The option types are in `kuna_coreoptions`; the
     Octeon mode, operation table, upstream fixups and `userop_ids` are in
     `p0_knowledge/kuna_octeonops.rs` (only `UserOpManage` is needed, so no hook).
   - Step 6 (per-arch or per-function state with behaviour; a hook signature would have to name
     the pass type): architecture/context -> callmechanisms (`Mechanisms`, funcdata `State`,
     plus `CallMechanismMode`), jumpassist (`JumpAssists`), segmentize (`SegmentDef`);
     architecture and fspec -> modelrules (`ModelRule` on `ParamListStandard`); heritage ->
     prefersplit (`PreferSplitManager`).
3. **Decided and done (`arch/hooks-14`):**
   - `architecture -> universalaction`: the driver installs the hook table at link time.
     `kuna_passhooks::default_pass_hooks()` calls an `extern "Rust"` symbol that
     `universalaction` defines (`#[no_mangle]`), so unit tests and embedders need no setup
     call; the universal action tree is built through the `universal_action` hook.
   - `kuna_phases` is in the middle band (`check_layers.py`), clearing `kuna_assert -> kuna_phases`
     and `architecture -> kuna_phases`.
4. About 160 remaining middle edges are type references to per-function / per-arch pass state on
   `Funcdata` / `ArchContext` / `Architecture`: that is step 6.

### Later crate-split steps (not started)
- **Step 6 (done):** the kuna pass tables moved off `Funcdata` into typed per-function slots
  (`substrate/kuna_funcstate.rs`: `FuncState`, `kuna_func_state!`, `Funcdata::kuna_state[_mut]`,
  each with a keep-across-`clear()` flag), and the architecture-wide ones (call mechanisms, jump
  assists, segment definitions) into `substrate/kuna_archstate.rs` (`ArchState`, `ArchStates`,
  held by `Architecture` and cloned into every `ArchContext`; installed through pass hooks while
  the specs load). A pass's accessors moved with its table into an `impl Funcdata` /
  `impl Architecture` / `impl ArchContext` block in the pass module, so callers kept their method
  names (former `pub(crate)` fields are read with `x()` and written with `x_mut()`). PRs #132,
  #134, #136, #138, #139, #142 and the arch-state PR. `UnitRetype` and `StorageSource` are plain
  data core `Funcdata` code builds, so they moved down into `funcdata.rs` (re-exported from their
  pass modules). `modelrules` (+ `kuna_aggregateabi`) and `prefersplit` are Ghidra-core modules
  with middle-only deps, so `check_layers.py` puts them in the middle band. No `funcdata -> *`
  line and none of the step-6 arch/context/heritage/fspec/dex edges are left in
  `scripts/layers-allowlist.txt`. `kuna_go_receiver` and `go_string_input` still name
  `p0_knowledge` types (same band, no edge).
  - **Step-9 follow-up:** an inherent `impl Funcdata` (or `Architecture`/`ArchContext`) block
    must live in the crate that defines the type, so when the middle band becomes its own crate
    the accessor blocks in pass modules have to become extension traits (the `FuncdataCastExt`
    pattern in `lib.rs`) or free functions. The slot types themselves can stay in the passes.
- **Step 8:** `#[inline]` half done (arch/inline-8): 301 small middle-band functions (substrate,
  p0_knowledge, infra) that p1-p9 code calls at least 5 times (codegraph `edges` kind `calls`), each a
  field read or a one-line wrapper of at most 4 body lines, no loops or searches; plus the
  `FuncStates` slot readers and the `kuna_func_state!` / `kuna_option_id!` `id()` functions. Functions
  that already had `#[inline]`/`#[inline(always)]` were left as they were. Not done: the benchmark half
  (`decompile-all` CPU time on 3 binaries, best of 3) needs release builds, so it was skipped under
  the no-compile rule; the lead runs it once before step 9.
- **Step 9:** the physical split, one crate per PR, bottom-up via `git mv` + re-exports:
  `unlace-middle` (~105k), then lift, structure, bandb, emit; `unlace-decomp` stays the driver +
  facade. Only after steps 5, 6 and 8 (splitting earlier makes builds worse; see the plan).

### Step 9 plan: the physical split (prepared 2026-11-23, nothing moved yet)

**What "middle" is.** `scripts/check_layers.py` puts 92 modules (124 files, about 153k lines) in the middle
band: all of `substrate/` and `p0_knowledge/` except `kuna_option_dispatch` (driver), plus 12 modules that live
in other folders: `infra/{action,architecture,kuna_fasthash}`, `p2_lift/jumptable`, `p3_dataflow/heritage`,
`p4_calls/fspec`, `p5_types/typeop`, `p6_variables/{cover,dynamic,merge,variable,varmap}`. The rest of `infra/` is
driver and stays in unlace-decomp.

**Blockers for `unlace-middle` (state on main after #141):**
1. *Upward edges (101, all in `scripts/layers-allowlist.txt`).* No other band has an upward edge today, so this
   list is the whole layer debt.
   - architecture -> lift 13 (inject_sleigh, cortexmpriv, esprom, formatstring, itaniumeh, jumpassist,
     kernelbug, langfamily, mzdgroup, nullable_reloc, ppc32piccalls, ptrauthtrap, x64syscall), -> bandb 34
     (bejoin, callbacktype, calleedeadarg, calleememory, calleepurge, calleevote, callerargs, callmechanisms,
     callrettype, callwide, elemptr, floatglobals, gottailcall, inputhints, kalloctype, msvcbyval, narrowret,
     objcrettype, opaqueglobals, protoorder, retsysreg, roundingops, rustabi, segmentize, simdlane, stablenames,
     storetype, structsynth, swiftcall, tlsnames, voidret, x87intrinsic, x87truncate, modelrules), -> emit 7
     (kuna_lang, rustfmtflags/io/write, printc, printlanguage, stringmanage), -> driver 4 (engine_translate,
     kuna_decodekit, kuna_hooks, remote_provider).
   - context -> lift 3 (itaniumeh, jumpassist, nullable_reloc), -> bandb 14 (callmechanisms, floatglobals,
     kalloctype, libcnames, msvcbyval, objcrettype, opaqueglobals, segmentize, structsynth, swiftcall, tlsnames,
     varargretreg, varargsave, x87emptyreturn), -> emit (stringmanage), -> driver (remote_provider).
   - fspec -> bandb 8 (calleedeadarg, calleepurge, condexeret, libcnames, passthrough, registerslots, spsolve,
     modelrules), -> driver (remote_provider). heritage -> bandb 5 (calloverlap, globalcallranges, loadguardreads,
     revisitrefine, prefersplit). varmap -> bandb (arrayextent, stablenames), -> driver (remote_provider).
     dtype -> bitfield, prettyprint. database -> remote_provider. jumptable -> kuna_emulatefunction. kuna_dex ->
     kuna_callmechanisms. kuna_loadoptions -> kuna_calltargettype. options -> kuna_option_dispatch.
   - `remote_provider` (5 sources) and `printc`/`printlanguage` (Architecture owns the printer) are the big ones:
     the remote provider trait and the print-language trait/handle have to move down, with the concrete
     printers staying in emit.
2. *Inherent impls on middle types outside middle* (E0116 once the type is foreign): `impl Funcdata` in 33
   pass files (step 6's slot accessors, e.g. `p2_lift/kuna_atomicxadd.rs`, `p4_calls/kuna_bejoin.rs`);
   `impl Architecture` generated by `kuna_options!` in `kuna_option_dispatch` (`set_kuna_option`);
   `impl OutLang` in `p9_emit/kuna_lang.rs`; `impl MemoryOps` in `p3_dataflow/kuna_persistcalls.rs`;
   `impl LiveCalls` in `p3_dataflow/kuna_prunedssa.rs`; `impl WidePair` in `p4_calls/kuna_bejoin/evidence.rs`.
   Fix: one extension trait per pass module (`FuncdataXxxExt`, like the existing `prelude` traits) re-exported
   from `unlace_decomp::prelude` and imported by each caller file; or callers use `data.kuna_state::<S>()`
   directly. `set_kuna_option` becomes `ArchOptionExt::set_kuna_option` in the driver (in the prelude).
3. *Foreign trait on foreign type* (E0117): `impl HighContext for Funcdata` and `impl MergeContext for Funcdata`
   in `p6_variables/funcdata_merge.rs` (traits from `variable`/`merge`). Move the two impls into middle (they
   only call `FuncdataMergeExt`, so that needs a hook) or move the traits up to bandb.
4. *The `extern "Rust"` hook symbol.* `substrate/kuna_passhooks.rs` declares `__unlace_default_pass_hooks` and
   `infra/universalaction.rs` defines it `#[unsafe(no_mangle)]`. A binary that links unlace-middle without
   unlace-decomp (unlace-middle's own unit-test binary) has an undefined symbol. Fix: a
   `#[cfg(test)] #[unsafe(no_mangle)]` definition in unlace-middle that returns a table filled with test
   stubs, or replace the symbol with a `OnceLock<&'static KunaHooks>` the driver sets (then every embedder
   must call it, which is the setup call the symbol was meant to avoid).
5. *Tests in middle files that use higher bands* (40 edges, invisible to the check because it drops test code):
   architecture/tests.rs (blockaction, flow, prettyprint, region_structurer, 17 option modules), action
   (ruleaction_1), heritage (coreaction_early, renamereads, wrapsplit), jumptable (constselectjump,
   highslice_guard, switchguardrange), funcdata/funcdata_op (funcdata_merge), funcdata_varnode (flow,
   noreturnretuse, varsources), block (gotolabel), userop (inject_sleigh), and `super::` paths in the tests of
   cover, merge, variable, kuna_fasthash. These tests move to unlace-decomp (`crates/unlace-decomp/tests/` or a
   `#[cfg(test)]` module in the driver); a dev-dependency from unlace-middle on unlace-decomp would build a second
   copy of middle and its types would not match.
6. *`pub(crate)` across bands.* Middle declares 204 `pub(crate)` items; about 150 are used by name from higher
   bands (e.g. `Funcdata::sblocks_root`, `jumpvec_mut`, `op_set_opcode_code`, `kuna_budget` (a `pub(crate) mod`),
   `kuna_wrappedstackmap`, `fspec::kuna_entries_mut`, `jumptable::kuna_retry_flow`, `OPERATIONS`) plus about 50
   `pub(crate)` fields (`kuna_regnarrow_*`, `kuna_x87_*`, `stack_alias_holds`, ...). Plan: in the move PR, every
   `pub(crate)` in a moved file becomes `#[doc(hidden)] pub` (items) or `pub` (fields), mechanically, so no
   per-item judgement is needed; tighten later. `cover.rs` has 5 `pub(super)` items its p6 siblings use: make
   them `pub` too.
7. *Folder paths.* Higher bands name middle modules through their folder 47 times
   (`crate::infra::architecture` 17, `crate::p4_calls::fspec` 12, `crate::p0_knowledge::options` 10,
   `crate::p3_dataflow::heritage` 5, `crate::substrate::{kuna_avxintrin,funcdata}`, `crate::p0_knowledge::{database,
   kuna_wrappedstackmap}`). Rewrite them to the flat `crate::<module>` form before the move.
8. *Build script and fixtures.* `kuna_phases` (middle) `include!`s `OUT_DIR/phases_generated.rs`, so `build.rs`
   and `build/registry.rs` move to unlace-middle and read `../unlace-decomp/phases.toml` (the catalog file keeps
   its path for check-spec, `docs/options.md` and the counts; the build-script test's `include_str!("phases.toml")`
   gets the new relative path). `p0_knowledge/kuna_dex/{links,tests}.rs` and `infra/architecture/tests.rs` use
   `env!("CARGO_MANIFEST_DIR")` for fixtures under `crates/unlace-decomp/tests/fixtures`: point them at
   `../unlace-decomp/tests/fixtures` or move those fixtures.
9. *Paths outside Rust.* `scripts/check_layers.py` (`SRC`, the band of a file), `tools/check_spec.py` and 354
   spec anchors in `docs/spec/` name `crates/unlace-decomp/src/...` paths of middle files; the observatory and
   repipe scripts too. The move PR rewrites them in the same commit (sed over `docs/ scripts/ tools/`).
10. *Macros.* `kuna_flag!`, `kuna_option_id!`, `kuna_func_state!` are `#[macro_export]` with `$crate::` paths into
    middle: fine once `$crate` is unlace_middle, as long as callers reach them through the crate-root glob
    re-export below. The non-exported `arch_option!`, `declare_hooks!`, `descend_into!` are only used in their own
    file.

**Crate order and mechanics.** One PR per crate, bottom-up, each a `git mv` that keeps the folder layout:
1. `crates/unlace-middle/src/{substrate,p0_knowledge}/...` plus the 12 relocated modules (into `substrate/` and
   `p0_knowledge/`, keeping their `foo/tests.rs` siblings). Cargo.toml with unlace-base/num/sleigh, thiserror,
   smallvec, slotmap; the build script above.
2. `unlace-lift` (p1, p2), 3. `unlace-structure` (p7, p8), 4. `unlace-bandb` (p3-p6), 5. `unlace-emit` (p9).
   unlace-decomp keeps `infra/` minus the moved modules, `kuna_option_dispatch`, `phases.toml` and the
   integration tests.
- Each new crate's `lib.rs`: `#[doc(hidden)] pub use unlace_middle::*;` (and the lower pass crates' globs), so
  every `crate::funcdata::...` path in moved code still resolves without edits. A glob only loses to a local item
  of the same name, and module names are already unique in the one-crate tree.
- unlace-decomp's `lib.rs` becomes the facade: `pub use unlace_middle::*; pub use unlace_lift::*; ...` plus its
  own `infra::*`, and `prelude` re-exports every extension trait. unlace-console/cli/harness/analysis/ghidra/wasm
  keep their `unlace_decomp::...` paths unchanged.
- Visibility: the `pub(crate)` rewrite in item 6, applied to the moved files only, per PR.
- Tests: a module's `foo/tests.rs` moves with it; tests that need a higher band move up (item 5).
  `crates/unlace-decomp/tests/` (171 integration tests, `autotests = false` + `integration.rs`) stays in place:
  it uses public `unlace_decomp::` paths. `crates/unlace-bench` keeps depending on unlace-decomp.
- `scripts/check_layers.py`: `SRC` becomes a list of crate src dirs, with bands taken from the crate (the
  folder/`MODULE_BAND` map stays for files still in unlace-decomp). Once every crate is split, the dependency graph
  enforces the layering and the script can retire.

### CI and tests
- 2026-11-23, after the stop: every finished Tests run on `main` since 2026-11-22 20:57 had failed
  the workspace suite (11 real failures), and queued main runs were replaced by newer pushes, so most
  landed commits had no run. Branch `ci/fast-tests` fixed the failures (a raw-image object view
  built from the file instead of the mapped bytes; five tests pinned to output that later landings
  changed on purpose), moved the suite to cargo-nextest (one archive build, three partitions,
  `.config/nextest.toml`), gave each main commit its own concurrency group, and moved
  coverage plus the slowest tests to the scheduled `coverage.yml`.
- Known follow-ups:
  - `kuna_phases::tests::option_values_live_value_present_for_129` pins 137 options with a live
    field; the tree has 138 (spsolve added one without bumping it). Fix: pin 138.
  - Done: a GOT-slot stub prints as a tail call in a single-function decompile
    (`tailcalljump on` now files the callee itself; XNUTABLES #15). The patchelf `SysError`
    handlers print as `try` (pads folded into a shared handler, `kuna-itaniumeh-sharedpad`).
  - Still open: a call whose exceptional edge structures as a loop condition prints
    `while (readFile(...), !eh_unwinding()) { ... }` with the pad after the loop, not a
    `try` (`eh4_x86_64.elf` `probe`); a negated edge whose pad falls out of an enclosing
    `if` (g++ `-fno-reorder-blocks-and-partition` build of the same source) stays an `if` too.
  - `project_named_globals` was not flaky: Ubuntu 26.04's gcc emits AVX (`vmulsd`/`vmovsd`), and
    `vexzeroupper` left scalar VEX results as whole-`zmm0` writes, so `grow` lost its `double`
    return. Fixed on `ci/fast-tests` (fixture `vexret_avx_x86_64`).
  - The live-value pin above passed in a full local run on 692e5ae40c; recheck before bumping it.
- Landings in this round went in on compile checks only (Cole's rule: `cargo check` + build +
  clippy + fmt, no local test runs; CI runs the tests). 18 upward edges slipped in that way and were
  re-baselined once (78cc72dbd3); keep running `python3 scripts/check_layers.py` before every push.

### Backlog issues (coleleavitt/unlace)
P1: #32 real-binary quality harness; #16 Cortex-M ELF (device memory landed; SVD-for-ELF and core
register names left); #9 boolean results as `return c`; #8 no-return arm first (prototype in the
decompiler-structure-quality skill).
P2: #10 `&&`/`||` chains; #17 Thumb switch helpers by shape; #18 64-bit on 32-bit targets (borrow
compares and `pairparam` landed, more left); #19 atomics; #20 merged variables; #24 DWARF register
locals binding; #28 no-return names; #33 honest gaps; #34 determinism lint.
P3: #21 PE Load Config; #23 variable names; #25 Go interface calls; #26 UEFI protocols;
#27 MSVC classes; #29 type libraries; #30 PDB; #31 MSVC exceptions. Also #98 processor coverage.
Closed today as done: #7, #11-#15, #22, #35.

## Working rules that applied

- Gate: `cargo check --workspace`, build the binaries, `cargo clippy` on touched crates,
  `cargo fmt --all --check`, `unlace catalog --check`, `python3 scripts/check_layers.py`,
  `python3 tools/check_spec.py`. No local test suites unless asked; CI runs them.
- Build env: `export MAKEFLAGS="-j --jobserver-auth=fifo:/run/user/$(id -u)/unlace-jobserver.fifo"`
  and never set `CARGO_BUILD_JOBS` (it bypasses the shared jobserver). Heavy runs through
  `tools/hooks/unlace-slot`. Never export `RUSTFLAGS`.
- The jobserver fifo is created by `tools/hooks/unlace-jobserver` (run it once per boot; on this
  machine `/run/user/1000/unlace-jobserver.fifo` is a symlink to the kuna one).
- One worktree per task (`../unlace-wt-<name>`, target `../unlace-target/<name>`), signed commits
  as cole@unwrap.rs, no `git stash`, no jj, explicit-path staging, push to `main` as a fast-forward
  with `UNLACE_PUSH_GATES=0` only when the gate above passed.
- Generated files are re-derived, never hand-merged: corpus count (`unlace-base/src/xml.rs`),
  catalog counts, `docs/options.md`, `phase_catalog.json`, `docs/baseline-stages.json`.
