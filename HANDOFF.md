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
  CodSpeed with 9 benchmarks (`decompiler/crates/unlace-bench`).
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

### Option registry (crate-split step 5)
1. Land #121, then `optreg-10` .. `optreg-14` in order (each needs the full gate; #14 needs clippy).
2. Options that set two fields together need a small value struct each: `opaquepredicate`,
   `tailcalljump`, `loweredswitch`, `narrowargs`, `returndup`, `itaniumeh`, `lanefuse`,
   `calleereginputs`, `flowmode`, `cvftrace`, `fid`, `iokitclasses`, `cfstrings`, `armframes`,
   `narrowext`. Inline parsing to move into the type: `readonlycalls`, `persistcalls`,
   `deadcascade`, `implweight`, `jumptablemax`.
3. Options read by middle-band code (types go in `kuna_coreoptions`): `stackviews`, `impliedrefs`,
   `termdup`, `namestyle`, `rettriangle`, `retsplitglobal`, `syscallregs`, `fieldtype`;
   `ctypes` and `floatglobals` need manual work (name clashes with existing fields).
4. Options with loader/environment side effects: `fpuemu`, `mzdgroup` apply, `goabi`, `sourcelang`,
   `kernelcache`, `dyldimage`, `objcsdk`, `ppcapu`, `ifuncfpret`, `macho-arm64e`, `exporttrie`,
   `debuglink`, `dwarfscopes`, `cil`, `dyldcrossrefs`, `symbolnamechars`, `typelib`,
   `ppc32picimports`, `callwide`, `armfloatargs`, `armfloatreturn`.
5. **Decision needed:** ~10 options live on the printer's own options (`print_mut().options`,
   e.g. `arraynotation`, `braceelide`, `warnstyle`). Suggested: leave them there (they are not on
   `Architecture`/`ArchContext`).

### Hooks and pass-to-pass edges
1. Land #120 and #119, then `arch/hooks-13` and `arch/p2p-5`.
2. Remaining middle -> pass call edges are tied to option/state types and fall to step 5/6:
   `architecture` -> callmechanisms / narrowext / octeoneffects / syscallregs / goreg / jumpassist /
   segmentize / prefersplit / modelrules (constructors of per-arch state stored on Architecture);
   `heritage` -> indexaliasguard; `jumptable` -> constselectjump.
3. **Decisions needed:**
   - `architecture -> universalaction`: `default_pass_hooks()` reads the driver's `PASS_HOOKS`.
     Inverting needs the driver to install the hook table (e.g. a `OnceLock`) before any
     `ArchContext` exists, including in unit tests that call `ArchContext::new` directly.
   - `kuna_assert` (middle) -> `kuna_phases`: `check_layers.py` pins `kuna_phases` to the driver
     band on purpose; it has no upward deps, so re-banding it to middle would clear the edge.
4. About 160 remaining middle edges are type references to per-function / per-arch pass state on
   `Funcdata` / `ArchContext` / `Architecture`: that is step 6.

### Later crate-split steps (not started)
- **Step 6:** move the ~100 kuna pass tables off `Funcdata` into typed per-function slots
  (each with a flag for whether it survives `clear()`).
- **Step 8:** `#[inline]` on small core accessors before they cross a crate boundary; compare
  `decompile-all` CPU time on 3 binaries, best of 3.
- **Step 9:** the physical split, one crate per PR, bottom-up via `git mv` + re-exports:
  `unlace-middle` (~105k), then lift, structure, bandb, emit; `unlace-decomp` stays the driver +
  facade. Only after steps 5, 6 and 8 (splitting earlier makes builds worse; see the plan).

### CI and tests
- 2026-11-23, after the stop: every finished Tests run on `main` since 2026-11-22 20:57 had failed
  the workspace suite (11 real failures), and queued main runs were replaced by newer pushes, so most
  landed commits had no run. Branch `ci/fast-tests` fixed the failures (a raw-image object view
  built from the file instead of the mapped bytes; five tests pinned to output that later landings
  changed on purpose), moved the suite to cargo-nextest (one archive build, three partitions,
  `decompiler/.config/nextest.toml`), gave each main commit its own concurrency group, and moved
  coverage plus the slowest tests to the scheduled `coverage.yml`.
- Known follow-ups:
  - `kuna_phases::tests::option_values_live_value_present_for_129` pins 137 options with a live
    field; the tree has 138 (spsolve added one without bumping it). Fix: pin 138.
  - XNUTABLES #13/#14 print a one-case `switch` for a GOT slot (intended by the `gottailcall`
    design, but ugly). Turning such jumps into tail calls is a `tailcalljump` design change.
  - patchelf: two `SysError` handlers are found but print as a plain `if`, not `try`
    (structuring gap).
  - `project_named_globals` failed once in CI and did not reproduce locally; watch it.
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
  `make check-spec`. No local test suites unless asked; CI runs them.
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
