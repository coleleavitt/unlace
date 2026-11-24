# unlace-decomp crate architecture: evidence and proposal

Sections 1-7 are the original research (no code changed, no builds run); section 8 records what
landed. Upstream tree: `unlace-wt-up` at `2b96e74e8`.
LSP checks ran on the main checkout (branch `all`), which has the same module layout. All unlace line numbers
below are upstream (`unlace-wt-up`) lines unless marked `[all]`.

## 1. What the cycle really is (measured)

How I measured: a module-level graph built from `crate::<module>` paths in **code lines only**. Rustdoc
intra-doc links are excluded: they made up about 12% of the edges in the raw counts (5757 vs 5088 cross-folder
references). Grouped `use crate::{a, b}` and folder-qualified `crate::p6_variables::x` paths are counted. Bare
names reached through glob imports are not counted, so the numbers are a lower bound. I confirmed sample edges with
rust-analyzer call hierarchy (quoted below).

- Size: 593 modules and 398k non-test lines, plus about 80k lines of in-tree tests. That is 6 times rustc's
  largest crate in this rustc tree. For comparison: `rustc_middle` 66k, `rustc_trait_selection` 52k,
  `rustc_hir_typeck` 50k, `rustc_mir_transform` 37k lines.
- One strongly connected component holds **446 modules and 352k lines (88%)**, spread across every folder.
- Cutting every upward edge out of `substrate/` still leaves a 300k-line SCC. So the cycle is not only "the IR
  points up". There are three hubs, plus pass-to-pass edges:
  1. **`Funcdata` is a side-table store.** `substrate/funcdata.rs:159` has **149 fields** (lsp document_symbols,
     lines 160-702). About 100 of them are `unlace_*` per-pass state whose types live in phase folders. Examples:
     `unlace_elemptr_*` (p5, 9 fields), `unlace_callee_entry_dead`/`unlace_callee_forward` (p4 `unlace_calleedeadarg`),
     `stack_records: RefCell<Vec<crate::p6_variables::unlace_stackstruct::StackRecord>>` (line 252),
     `unlace_atomic_xadds: Vec<crate::p2_lift::unlace_atomicxadd::Instruction>` (line 702).
  2. **`Architecture` and `ArchContext` store every option.** `infra/architecture.rs:240` has **385 fields**.
     `substrate/context.rs:666` (`ArchContext`, the per-function snapshot behind `ArchHandle = Rc<ArchContext>`,
     context.rs:2656) has **210 fields**. Most are option mode enums and cross-function ledgers defined in pass
     modules, e.g. `be_join: crate::unlace_bejoin::BeJoinMode` (context.rs:764) and
     `goto_reduce: crate::p8_structure::unlace_gotoreduce::GotoReduceMode` (context.rs:1255). The option dispatch
     is an `impl Architecture` block generated in p0 (`p0_knowledge/option_dispatch.rs:12-30`). It names
     every pass's option parser (e.g. `crate::p9_emit::unlace_armconstantshift::OptionArmConstShift.apply`).
     `build.rs:232` generates `OptionValues` from `phases.toml` into the same crate
     (`p0_knowledge/phases.rs:296`).
  3. **IR algorithms call unlace pass predicates directly.** Ghidra-core code in the IR calls `unlace_*` functions
     inline: 146 call sites to 115 distinct functions. lsp confirms, for example:
     - `p4_calls/exclusivecallret.rs:32 applies` <- `substrate/funcdata_varnode.rs only_op_use_walk` [all 2237, call 2263]
     - `p4_calls/spillargtrial.rs store_is_caller_save_spill` <- the same `only_op_use_walk` [all 2341]
     - `p8_structure/orchain.rs shortcircuit_shared_targets` <- `substrate/funcdata_block.rs returndup_apply` [all 3252/3307]
     - `p5_types/coreaction_infertypes.rs propagate_type_pub` <- `substrate/addtreestate.rs assign_propagated_type` [all 542/552]
     - `heritage.rs` alone calls 21 p4/p6 modules (40 sites). `merge.rs` calls 7 p6 `keeps_apart`-style vetoes.
       `jumptable.rs` calls 7.
  4. **The driver's budget clock is called from below.** `decompile_drive::{budget_probe, deadline_passed_in,
     note_budget_site}` are called from IR and pass code. Callers per lsp: `funcdata_varnode.rs` (2 sites),
     `jumptable.rs`, `heritage.rs`, `merge.rs`, `flow.rs`, `region_structurer.rs`, `printc.rs`, `infra/action.rs`
     `deadline_expired_at` [all 635/641], and 10 more.
- What `substrate` references outside itself (code only): p4 157, p5 73, p0 65, p6 57, p2 48, p9 24, p3 20,
  infra 14. Your earlier counts (substrate->p4 219 etc.) included the doc links.
- Only 10 inherent `impl` blocks on core types sit outside the IR: `impl Funcdata` in `funcdata_facing`,
  `funcdata_merge`, `funcdata_spacebase`, `funcdata_union` (p3-p6), `funcdata_resolveflow` (p2), `coreaction_casts`
  and `unlace_calltransport` (p9); `impl Datatype` in `unlace_typequal`; `impl Architecture` in
  `unlace_option_dispatch`. Rust forbids inherent impls outside the defining crate, so these are the only items that
  must change shape (into extension traits) for a split.
- `pub(crate)` items: about 1170, of which 208 are in the proposed IR crate. Those 208 become `pub`.

**Churn decides the value of any split.** Upstream non-merge commits that touched unlace-decomp since 2026-09-01:
800. Of these:
- 522 (65%) touch a file that would sit in an IR crate.
- `architecture.rs` is touched by 377 (47%), and 332 of those 377 also touch `option_dispatch.rs` or
  `phases.toml`. That is option plumbing.
- `context.rs` 219, `option_dispatch.rs` 192, `options.rs` 116, `funcdata.rs` 101, `modes.rs` 77.

So **a crate split alone would turn most edits into IR edits that rebuild everything.** The option storage and
the `Funcdata` side tables must be inverted first. If option plumbing and side-table fields no longer count, the
share of commits that touch the IR drops to 245/800 (31%). The rest: p9-only 110, driver-only 54, p4-only 47,
p3-only 26, p6-only 21, and so on.

## 2. How rustc avoids this (citations: `~/RustProjects/forks/rust/compiler`)

- **One central IR and type crate that depends on nothing above it.** `rustc_middle/Cargo.toml` depends only on
  lower crates (`rustc_abi`, `rustc_data_structures`, `rustc_index`, `rustc_session`, `rustc_span`,
  `rustc_type_ir`, ...). It has no pass crate. Pass crates (`rustc_borrowck/Cargo.toml:22`,
  `rustc_hir_typeck/Cargo.toml:22`) depend on `rustc_middle` and **not on each other**: borrowck has no
  `rustc_hir_typeck` dependency and mir_transform has neither.
- **Result types live down, logic lives up.** `TypeckResults` is defined in
  `rustc_middle/src/ty/typeck_results.rs:31`. The function that computes it is in
  `rustc_hir_typeck/src/lib.rs:728` `provide()`. Borrowck reads it through `tcx.typeck(def_id)`
  (`rustc_middle/src/query/calls.rs:56`, e.g. `rustc_borrowck/src/diagnostics/mutability_errors.rs:404`). Pass A
  never names pass B.
- **Function-pointer tables, filled by the driver.** `rustc_middle/src/util/mod.rs:4` `Providers { queries,
  extern_queries, hooks }`. The query table is generated in `rustc_middle/src/query/query_api.rs:216`, one
  `fn(TyCtxt, Key) -> Value` per query. Each pass crate exports `provide(&mut Providers)`, e.g.
  `rustc_mir_transform/src/lib.rs:216`. The driver composes them in `rustc_interface/src/passes.rs:904-939`
  (`DEFAULT_QUERY_PROVIDERS`, about 25 `<crate>::provide(providers)` calls).
- **Hooks are the cheap version, without caching.** `rustc_middle/src/hooks.rs:1-4`: "Hooks let you write `tcx`
  methods in downstream crates and call them in this crate ... just plain function pointers without any of the
  query magic". `declare_hooks!` (hooks.rs:18-57) generates an `#[inline(always)]` method on `TyCtxt` that calls
  through `self.hooks.$name`, and a default that panics (hooks.rs:136-139). Example filled from above:
  `rustc_mir_transform/src/lib.rs` `providers.hooks.find_noop_landing_pads_for_instance = ...`. **This is exactly
  unlace's case 3** (IR code that needs a unlace predicate).
- **Extension traits instead of foreign inherent impls.** `rustc_trait_selection/src/infer.rs:21`
  `#[extension(pub trait InferCtxtExt<'tcx>)]` adds methods to a `rustc_middle`/`rustc_infer` type from a
  downstream crate.
- **Pass framework.** `MirPass` (`rustc_mir_transform/src/pass_manager.rs:112`, `run_pass(&self, tcx, body:
  &mut Body)` at :124) is a trait object list, as unlace's `Action`/`Rule` already are
  (`infra/action.rs:357`, `apply(&mut self, data: &mut Funcdata, ctx)` at :369; `Rule` at :996;
  `SchedNode` at `infra/universalaction.rs:62`). Pass-private state stays local to the pass. `mir::Body`
  (`rustc_middle/src/mir/mod.rs:205`) carries IR plus a few data types defined in middle, not per-pass ledgers.
- **Options live in a crate below middle and are plain data.** `rustc_session/src/options.rs:2416` `options! {
  UnstableOptions, ... }`. All `-Z` options sit in one table, so adding one rebuilds the world. rustc accepts
  that because options change rarely. unlace adds or changes options in 24% of commits (192/800), so it cannot
  copy this part.
- **Dylib facade for parallelism.** `rustc_driver/Cargo.toml:7` `crate-type = ["dylib"]`. `rustc_driver/src/lib.rs:1-2`:
  "This crate is intentionally empty and a re-export of `rustc_driver_impl` to allow the code in
  `rustc_driver_impl` to be compiled in parallel with other crates." `src/bootstrap/src/core/builder/cargo.rs:1451-1456`
  passes `-Cprefer-dynamic` for std.
- **Codegen facts that matter for a unlace split at opt-level 1, incremental on:**
  - Within one crate, opt-level >= 1 with more than one CGU gets local ThinLTO (`rustc_session/src/session.rs:1062-1066`).
    So inlining across CGUs works today inside unlace-decomp.
  - Across crates, automatic inlining inference is **off when incremental is on**
    (`rustc_mir_transform/src/cross_crate_inline.rs:83-87`). Only `#[inline]`, generic and tiny forced items cross.
    `rustc_middle/src/mono.rs:166-175` describes the trade-off between optimization and incrementality.
  - opt-level 1 is `Balanced` (`rustc_session/src/config.rs:131-138`), so share-generics is on by default there
    (config.rs:1599-1606). The `-Zshare-generics=y` in `~/.cargo/config.toml` changes nothing at opt-level 1.

## 3. How Bevy does it (`/tmp/bevy`, 8c3f961)

- **Plugin crates over one core.** `bevy_app/src/plugin.rs:56-58`: `trait Plugin { fn build(&self, app: &mut App) }`.
  Each feature crate registers its systems and resources (`App::add_systems` app.rs:321, `insert_resource` :451,
  `init_resource` :485, `add_plugins` :642). Core types never name feature types. Feature state is stored
  type-erased in the `World`: `World::resource::<R>()` (bevy_ecs/src/world/mod.rs:2280, `get_resource` :2343). It
  is looked up through a dense `ComponentId(usize)` index (bevy_ecs/src/component/info.rs:179), not a hash of
  `TypeId` on every access. **This is the model for unlace's `Funcdata` side tables and option storage.**
- **Facade crate.** `crates/bevy_internal/src/lib.rs` re-exports every crate (`pub use bevy_ecs as ecs;` ...), and
  the top `bevy` crate is `pub use bevy_internal::*;` (src/lib.rs:52).
- **`dynamic_linking`.** Cargo.toml:288 `dynamic_linking = ["dep:bevy_dylib", "bevy_internal/dynamic_linking"]`.
  `crates/bevy_dylib/Cargo.toml` is `crate-type = ["dylib"]` and depends only on `bevy_internal`. Its `lib.rs` is a
  bare `use bevy_internal;` that forces the link. Purpose, from its doc: "Dynamic linking causes Bevy to be built and
  linked as a dynamic library. This will make incremental builds compile much faster."
  - What it buys: the **user's** binary no longer statically links the whole engine on every rebuild of the user
    crate. It does not speed up a rebuild of Bevy itself.
  - Constraints: not on wasm (`src/lib.rs:55` `cfg(not(target_family = "wasm"))`). Never for release, because
    `libstd.so` and the dylib must ship with the binary (bevy_dylib doc). Some features are compiled out under it
    (`bevy_internal/Cargo.toml:299-300`). `share-generics` must be off with it on Windows
    (`.cargo/config_fast_builds.toml:157`).
- Bevy's `config_fast_builds.toml` (mold, `-Zshare-generics`, `-Zthreads=0`, cache-proc-macros) is already what
  `~/.cargo/config.toml` uses.

## 4. Target layering for unlace

```
unlace-base, unlace-num, unlace-sleigh                      (unchanged)
└─ unlace-middle  (~105k)   IR + types + call model + symbols + session; no pass crate below it
   ├─ unlace-lift      (~30k)  P1 + P2           (flow, jump-table recovery, injection, loaders' arch binding)
   ├─ unlace-structure (~22k)  P7 + P8           (regions, blockaction, structuring)
   └─ unlace-bandb     (~170k) P3 + P4 + P5 + P6 (rules, heritage users, protos, types, variables)
      └─ unlace-emit   (~52k)  P9
unlace-decomp (driver, ~20k + facade): universal_sched, decompile_drive, option dispatch + catalog (phases.toml,
            build.rs), the providers/hooks wiring, and `pub use` of every crate (bevy_internal-style) so
            unlace-console/cli/harness/analysis/ghidra/wasm compile unchanged
unlace-decomp-dylib (optional, dev only): crate-type = ["dylib"], re-exports unlace-decomp + unlace-analysis
```

Why these bands: I tried all 5040 orders of the 7 pass groups and picked the one with the fewest upward
module-pair edges: middle < P1/P2 < P7/P8 < P4 < P5 < P3 < P6 < P9 < driver (390 upward pairs). P3-P6 import each
other in both directions; this matches the Band B mutual fixpoint (`universal_sched`'s `mainloop`). So they stay in
one crate at first. With P3-P6 merged, the order middle < lift < structure < bandb < emit < driver leaves only
these upward edges between passes:
- lift -> bandb: 16 module pairs (e.g. `flow -> unlace_calleepurge`, `funcdata_resolveflow -> unionresolve`)
- bandb -> emit: 18 (`unlace_slotptr -> printc`, `unlace_elemptr -> unlace_globalref`)
- lift/bandb/structure/emit -> driver: 29, almost all the budget clock, `unlace_sourcelang`, `idiom`, `capability`
- structure -> lift: 2; bandb -> structure: 2 (both small name predicates; move them down)

**unlace-middle contents.** `substrate/*` (varnode, op, block, funcdata*, dtype, context, transform, expression,
addtreestate, checkedarena), `typeop`, `fspec` (FuncProto/ProtoModel/ParamTrial; rustc keeps signatures and ABIs
in middle/rustc_target), `database`, `overrides`, `options`/`modes` (the generic part), `variable`, `cover`,
`varmap`, `dynamic`, `infra/action.rs` (the Action/Rule framework), `architecture.rs` (the `TyCtxt`/`Session`
analogue: `printc` alone names `Architecture` 148 times), the budget clock, and `unlace_fasthash`.

`heritage`, `merge` and `jumptable` are Ghidra DECCORE. They are stored on `Funcdata` (`heritage`, `covermerge`,
`jumpvec` fields) and carry 73 hook calls into passes. Keep them in middle at first, behind hooks. Lifting their
algorithms into bandb/lift is a later option (it would shrink middle to ~86k, but measured from the current code
`Funcdata` would then point up at them 143 times unless their state also moves to typed slots).

**Edges to invert, and how:**

| Edge (today) | Count | Inversion | Pattern |
|---|---|---|---|
| `Architecture`/`ArchContext` option fields typed by pass modules | 263 type refs to 94 modules | Typed **option registry**: `trait UnlaceOption: Any + Clone + Default { const NAME: &str; fn parse(&str) -> UnlaceResult<(Self, String)> }` in middle. Values live in a dense `OptionSet` (`Vec<Box<dyn Any>>` indexed by an `OptionId` assigned at registration). Each option type stays in its pass module; the driver registers it (one row) and owns dispatch and the generated `OptionValues`. Passes read `data.glb().opt::<BeJoinMode>()`. | Bevy resources + `ComponentId`; rustc `Providers` registration |
| `Architecture` cross-function ledgers/caches (`unlace_calleevote`, `unlace_voidret`, `unlace_elemptr` ledgers, ...) | part of the above | Same registry, second kind (`trait ArchState`) | Bevy resources |
| `Funcdata` `unlace_*` side tables | 150 type refs to 39 modules | Per-function **typed slots** (`FuncState` trait with `Default` and a `KEEP_ACROSS_CLEAR` flag, since several fields survive `clear()`), with the same dense-index storage. Ghidra-core fields (`funcp`, `heritage`, `jumpvec`, `high_bank`, `localmap`, `covermerge`) stay as fields. | Bevy components/resources; rustc stores pass results outside `Body` |
| IR algorithms -> unlace predicates (`only_op_use_walk`, `returndup_apply`, heritage, merge, jumptable, fspec) | 146 sites / 115 fns | **Hooks table** `UnlaceHooks { exclusive_call_ret_applies: fn(&Funcdata, OpId, &ParamTrial) -> bool, ... }` in middle, held in `ArchContext` like `tcx.hooks`. Each pass crate has `provide(&mut UnlaceHooks)`; the driver composes them. The default is the Ghidra behaviour (most of these are "unlace veto" predicates, so the default is "no veto"), not a panic: middle alone stays faithful to Ghidra. | `rustc_middle/src/hooks.rs` |
| Pass -> pass upward (lift->bandb 16, bandb->emit 18) | 34 pairs | Move a shared type or helper down to middle when it is data; use a hook when it is behaviour | `TypeckResults` in middle |
| Anything -> `decompile_drive` budget clock | ~25 sites | Move the thread-local deadline and `budget_*` functions into middle (`budget.rs`); the driver arms it | rustc keeps limits in `Session` |
| 10 foreign `impl Funcdata`/`impl Datatype`/`impl Architecture` blocks | 10 | Extension traits (`FuncdataMergeExt`, ...) or move them into middle | `InferCtxtExt` |
| `crate::<module>` paths across the new boundary | 7332 paths | **No edit needed.** Each new crate's root does `pub(crate) use unlace_middle::*;` (and the band below), so `crate::funcdata::Funcdata` keeps resolving. This is the trick lib.rs already uses (`pub use substrate::*;`). Only the inverted edges need source changes. | — |

## 5. Expected build effect

These are estimates. I could not build. Section 7 step 0 says how to measure them.

**Today.** Every edit recompiles the 400k-line crate incrementally. You measured about 6 s of front-end and about
15 s of codegen for the first CGU batch, 3.5 GB peak RSS, then the dependents. Incremental front-end cost has a
large part that scales with crate size (loading and saving the dep graph, re-hashing, re-checking reused query
results). Each CGU is large because 400k lines are partitioned into a bounded number of CGUs.

**After the split, per edit type:**
- **Pass-band edit** (P9 only: 14% of recent commits; P4 6%; P3 3%; driver 7%): only that crate (22-52k, or 170k
  for bandb) recompiles. Its CGUs are smaller, so fewer lines are re-codegened per touched function. Front-end
  work and peak RSS should scale down roughly with crate size: on the order of 1 GB instead of 3.5 GB for emit,
  lift or structure. With `CARGO_UNSTABLE_PUBLIC_API_HASH` (the rustc-rdr `-Zpublic-api-hash`: dependents are
  not recompiled when the public API hash is unchanged), the driver and the downstream crates are not recompiled
  when the edit is private, only relinked.
- **bandb edit:** still a 170k crate, but about 40% of today's size. The win is smaller. It grows if bandb is
  split later (P4 calls, P5 types and P3 rules communicating through hooks).
- **IR edit** (31% of commits after the inversions; **65% without them**): everything above recompiles, as
  today. Cold critical path: middle (105k) -> bandb (170k) -> emit (52k) -> driver (20k). lift and structure
  build in parallel with bandb. Total CPU is about the same as today or slightly higher (metadata decoding per
  crate). Wall time can improve on an idle machine, but not under a fleet of agents with `CARGO_BUILD_JOBS=4`
  each, where the CPU is already saturated.
- **Parallelism:** the split adds crate-level parallelism mainly on cold builds. For the many-agents case the
  benefit is **less work per edit**, not more parallel work.
- **Many concurrent worktrees:** sccache does not cache incremental compilations, and
  `isolate-workspace-units = true` keeps workspace crates per worktree. So agents will not share a built
  `unlace-middle`. A later cargo-patch could share unchanged workspace units across worktrees; with a split, that
  would let most agents skip middle and bandb entirely. Not available now.

**Dylib (Bevy-style `unlace-decomp-dylib`, a dev-only feature):**
- What it helps: relinking. Today each edit relinks every binary that statically contains unlace-decomp and
  unlace-analysis. That is 5 bins (`unlace`, `decomp_dbg`, `decomp_test_dbg`, `unlace_ghidra`, `unlace_wasm`) plus 40
  integration-test targets across unlace-cli (7), unlace-console (22), unlace-harness (5), unlace-ghidra (1) and
  unlace-decomp (4). With the dylib, each edit links the `.so` once, and the bins link against it quickly.
- It is independent of the split, so it can come first if step 0 shows that relink time matters.
- What it does not help: the compile of unlace-decomp itself. It cannot help unlace-decomp's own tests.
- Constraints:
  - unlace-analysis depends on unlace-decomp and console depends on both, so the dylib must re-export both (the
    `bevy_internal` pattern) to avoid two copies.
  - `-Cprefer-dynamic` makes the binaries need `libstd-*.so` and the dylib at run time. `cargo run`/`cargo test`
    set the library path, but `make test BINDIR=...` runs the binaries directly, so it needs an rpath or
    `LD_LIBRARY_PATH`.
  - Never in release or dist. Not for unlace-wasm.
- Runtime cost: Rust executables are already PIE, so the `.so` code is no worse. Calls cross the boundary only at
  coarse console->engine entry points (PLT), so the cost is negligible.

**Runtime risk at opt-level 1 from the split itself (the important one):**
- Today, local ThinLTO inlines small `Varnode`/`PcodeOp`/`BlockGraph`/`Funcdata` accessors across CGUs inside
  the crate.
- After the split, a pass crate can inline a middle function only if it is `#[inline]` or generic. With
  incremental on, rustc does not infer cross-crate inlinability (cross_crate_inline.rs:83-87).
- Today almost nothing is marked: `#[inline]` sits on 8/271 fns in varnode.rs, 3/185 in op.rs, 0/224 in block.rs,
  1/461 in funcdata.rs, 0/145 in funcdata_varnode.rs, 34/454 in dtype.rs.
- So the split must be preceded by adding `#[inline]` to the small hot accessors, and an A/B of `make test` wall
  time (the 675-case datatest run is the runtime benchmark) before and after each physical move.
- Hooks and typed slots are function-pointer and index lookups. Read them once per pass or walk, not per op. The
  `only_op_use_walk` hooks sit in a walk loop, so measure that one.
- Release keeps full speed with `lto = "thin"` (or `"fat"`) and `codegen-units = 1` in `[profile.release]`;
  Bevy does the equivalent for its release builds.
- `-Zshare-generics` is already on at opt-level 1, so generic instances in middle (slotmap, BTreeMap) are reused,
  not duplicated. `#[inline]` generics are still instantiated locally.

## 6. Where the split would NOT help

- IR edits: 31% of commits even after the inversions, 65% before. They rebuild everything, as today.
- A split before the option and side-table inversions would make things **worse**: most commits would touch
  `architecture.rs`/`context.rs`, now in middle, and rebuild every crate.
- bandb stays at 170k until P3-P6 are separated. A rule edit in `ruleaction_*` still compiles 170k lines.
- `make test`/`make test-stages` gate time is decompiler runtime. The split cannot speed it up and can slow it
  without the `#[inline]` work.
- Cold builds in a saturated multi-agent machine: about the same.
- Conflicts: the inversions touch the three most conflicted files (`architecture.rs`, `context.rs`,
  `option_dispatch.rs`). The payoff is that, once they land, a new option no longer touches them.

## 7. Migration plan (small, mechanical, each step mergeable and green on its own)

0. **Measure (no code).** On a quiet machine, run `cargo build --timings` and `-Zself-profile` for three edits:
   `p8_structure/blockaction.rs`, `p9_emit/printc.rs`, `substrate/funcdata.rs`. Split each time into front-end,
   codegen, the rebuild of unlace-analysis/console/cli, and per-binary link time. This decides whether the dylib
   (step 3) is worth doing and gives the baseline for every later step.
1. **Layering ratchet (~150 lines, one PR).** A `scripts/check_layers.py` in the style of
   `check_test_layout.py`, run in `make test-tools`. It computes the module graph above (code lines, docs
   excluded) and fails on any **new** upward edge into substrate/middle, with the current edges as an allowlist
   that only shrinks. This is what keeps ~60 open PRs from regrowing the cycle while the rest lands. Cheap,
   valuable now.
2. **Budget clock down (~300 lines moved, ~25 call sites).** Move the `decompile_drive` thread-local deadline and
   `budget_probe`/`budget_spent`/`deadline_passed_in`/`note_budget_site` into `substrate/budget.rs`.
   `decompile_drive` keeps `pub use`, so no caller changes. No behaviour change.
3. **Optional, independent: dev dylib (~50 lines + Makefile).** `unlace-decomp-dylib` (dylib, re-exports
   unlace-decomp + unlace-analysis), behind a `dynamic_linking` feature on console/cli/harness/ghidra, plus an rpath
   for `make test`. Only if step 0 shows relink time is significant.
4. **Extension traits (10 small PRs or one, ~10 files).** Turn the foreign inherent impls (section 1) into
   `...Ext` traits. No behaviour change.
5. **Option registry (the unlock; about 10 PRs of 300-600 diff lines each).**
   - PR 5a adds `UnlaceOption`/`OptionSet` to substrate, plus driver registration next to
     `option_dispatch.rs`. The old fields keep working.
   - PRs 5b..5k migrate options one phase at a time (P9 first: it has the most single-band commits). Each PR
     deletes the `Architecture` field, the `ArchContext` mirror and the dispatch arm for its options.
   - `unlace catalog --check` and the 675/675 parity gate prove each step changes nothing.
   - Rule for open PRs: new options after 5a use the registry. This needs a one-line note in `docs/agents.md`
     and a check in step 1's script.
6. **Funcdata typed slots (about 8 PRs, by pass family).** The same mechanism for the ~100 `unlace_*` fields.
   `clear()` resets the slots whose `KEEP_ACROSS_CLEAR` is false. Fields like `stack_store_guard_withdrawn`
   ("Survives clear()") set it to true.
7. **Hooks table (about 6 PRs, ~115 functions).**
   - `UnlaceHooks` in substrate, held by `ArchContext`. Each phase folder gets a `provide(&mut UnlaceHooks)`, and the
     driver composes them (the rustc `DEFAULT_QUERY_PROVIDERS` shape).
   - Done first: `substrate/passhooks.rs` (`UnlaceHooks`, `UnlaceHookSlots::finish`), `ArchContext::pass_hooks`,
     `Funcdata::hooks()`, composed in `universalaction::PASS_HOOKS`; the 11 IR edges into spacebase, union,
     facing, calltransport and casts go through it. A slot no `provide` fills stops the first run, naming it.
   - Batches: funcdata_varnode/funcdata_block (25 fns), heritage (21 modules), merge (7), jumptable (7),
     fspec (9), the rest.
   - Then fix the pass-to-pass upward edges: lift->bandb 16, bandb->emit 18, structure->lift 2, bandb->structure 2.
   - At this point the module graph inside the one crate is layered, and step 1's allowlist is empty for the
     target order.
8. **`#[inline]` pass + runtime A/B (1-2 PRs).** Mark the small accessors in varnode/op/block/funcdata*/dtype.
   Record `make test` wall time before and after.
9. **Physical split, one crate per PR, bottom-up.** Each PR is a `git mv` of a set of files into
   `crates/unlace-<x>/src/<same folders>`, a Cargo.toml, `pub(crate) use unlace_middle::*;` at the new crate root,
   `pub use unlace_<x>::*;` in unlace-decomp's lib.rs, and `pub(crate)` -> `pub` where needed. Open PRs that edit
   moved files usually still merge, because git's rename detection follows the move when the content barely
   changes. Order and size:
   - 9a `unlace-middle` (~105k moved, about 200 visibility edits)
   - 9b `unlace-lift` (~30k)
   - 9c `unlace-structure` (~22k)
   - 9d `unlace-bandb` (~170k)
   - 9e `unlace-emit` (~52k); unlace-decomp is left as the driver and facade.
   - Each new crate's unit tests move with it. `phases.toml` and `build.rs` stay in the driver, so
     `make check-spec`, the catalog counts and `docs/options.md` keep their paths.
   - Every PR runs the parity gate plus a runtime A/B.
10. **Later, only if measurements justify it:** split bandb into unlace-calls (P4), unlace-types (P5) and
    unlace-dataflow/vars (P3+P6) through hooks. Lift heritage/merge/jumptable algorithms out of middle.

**Cheap and valuable now:** steps 0, 1, 2, 4. Step 3 if relinks dominate. Step 5 also helps today without any
split: an option PR no longer edits the three most conflicted files.

**Later:** steps 6-9, after 5 has proven out on one phase.

**Risks:**
- Runtime regression from lost inlining. Mitigation: step 8 plus A/B per move.
- Hook defaults that silently disable a unlace behaviour if the driver forgets a `provide`. Mitigation: a test
  that every hook slot is filled in the default driver.
- Determinism: slots and registries are index-ordered, never iterated for output.
- Sustained churn on architecture.rs/context.rs while step 5 is in flight.
- Upstream's acceptance: the plan touches the maintainer's core layout, so steps 1-2 and a written proposal
  should go first, before any large move.

## 8. Outcome (2026-11-23)

Steps 0-2 and 4-10 landed on coleleavitt/unlace; the workspace now has eight decompiler crates (step 10 split
`unlace-bandb` into `unlace-bandb-base`, `unlace-bandb-core` and `unlace-bandb`). Step 3 (the dev dylib) was not
needed: the split plus thin LTO recovered the speed without it, and step 0's numbers below show the rebuild gain.
It now exists as an opt-in: `crates/unlace-decomp-dylib` (`crate-type = ["dylib"]`, re-exports `unlace-decomp`
and `unlace-analysis`, excluded from the workspace) behind a `dynamic_linking` feature on unlace-cli,
unlace-console, unlace-harness and unlace-ghidra, off by default, with an rpath from the cli, console and
harness build scripts (`docs/dev-setup.md`). Whether to turn it on for dev builds waits on a `cargo build
--timings` link-time comparison.

**Crates** (lines of `src/**/*.rs`, in-tree unit tests included, at 38ede1720c):

| crate | lines | holds |
|---|---|---|
| `unlace-middle` | 168k | IR (`substrate/`), `Architecture`/`ArchContext`, types, fspec, heritage, merge, jumptable, option registry, state slots, `UnlaceHooks` |
| `unlace-lift` | 43k | P1-P2 |
| `unlace-structure` | 29k | P7-P8 |
| `unlace-bandb` | 249k | P3-P6, one fixpoint |
| `unlace-emit` | 74k | P9 |
| `unlace-decomp` | 18k | driver: `universal_sched`, option dispatch, `PASS_HOOKS`, facade re-exports |

**What each step became:**
- Step 1, layering ratchet: `scripts/check_layers.py` + `scripts/layers-allowlist.txt` (#36). The allowlist
  reached zero entries in #164, before the physical split.
- Step 2, budget clock: `substrate/budget.rs` (#37).
- Step 4, extension traits: #38, then the pass methods on `Funcdata` (#149) and `OutLang`'s emit methods as
  `OutLangExt` (#165).
- Step 5, option registry: `UnlaceOption`/`OptionSet` in `substrate/optionset.rs` (5a, #99), then options
  moved off `Architecture`/`ArchContext` phase by phase (5b-5p: #101-#103, #107, #109, #114, #117, #121, #126,
  #133, #135, #137).
  Left as fields on purpose: `jumptablemax`, `impliedrefs` and `termdup` stay the upstream
  `max_jumptable_size` / `max_implied_ref` / `max_term_duplication` fields; `ppc32picimports` stays a field
  because its reset value depends on what the loader applied (`Mode::loaded()`), which a static `shipped()`
  cannot state; `kernelcache`, `kernelcache-boot`, `dyldimage`, `objcsdk`, `exporttrie`, `cil` and
  `dyldcrossrefs` hold no `Architecture` field (their state is the program's load options and the env
  bridge); the printer options (`arraynotation`, `braceelide`, `warnstyle`, ...) stay on the printer's own
  options. `ppcapu` and `ifuncfpret` are carried across `reset_defaults_internal`, as their fields were.
- Step 6, typed slots, as three `TypeId`-indexed tables in `unlace-middle`:
  - `FuncStates` (`substrate/funcstate.rs`): per-function side tables on `Funcdata`, created with
    `Default` on first use, dropped by `Funcdata::clear` unless `KEEP_ACROSS_CLEAR` (#132, #134, #136, #138,
    #139).
  - `ArchStates` (`substrate/archstate.rs`): per-architecture tables filled while the specs load, shared
    (`Rc`) by every `ArchContext` (#144).
  - `ArchTables`: the mutable run-wide ledgers and caches `Architecture` keeps across functions (#151, #159,
    #163).
  - Each type gets a dense index from `state_index(TypeId)` (a global map with a thread-local cache), so a pass
    crate can store a type alias or a std type it does not own, and lookups are a vector index.
- Step 7, hooks: `UnlaceHooks` (`substrate/passhooks.rs`), filled by each band's `provide` and installed by
  the driver (#100, #104-#113, #115, #118, #120, #128, #129, #153). An unfilled hook panics with its name.
  The table is found at link time: `unlace_passhooks::default_pass_hooks()` calls the `extern "Rust"` symbol
  `__unlace_default_pass_hooks`, which the driver defines `#[unsafe(no_mangle)]`, so unit tests and embedders
  need no setup call. Each band crate has `provide_all` (its own pass modules' `provide`), and its
  `#[cfg(test)]` definition of the symbol composes its own and the lower crates' `provide_all`, filling the
  rest with `UnlaceHookSlots::finish_with_stubs` (each stub panics naming its hook);
  `unlace_decomp::PASS_HOOKS` composes all of them. Unit tests that reach a hook only a higher crate provides
  live in the driver (`infra/{middle,lift,bandb}_tests/*_hooks.rs`).
- Layer checks read paths, not method calls: `scripts/check_layers.py` cannot see an inherent method a pass
  module adds to a lower type and a lower module calls. Those must move down or go through a hook, and the
  crate boundary (E0116/E0117) is the final check.
- Reclassified into the middle band instead of moved or hooked, because their own dependencies were already
  middle-only: `engine_translate`, `inject_sleigh`, `unlace_emulatefunction`, `unlace_decodekit`,
  `remote_provider`, `stringmanage` (#146); `modelrules`, `prefersplit` (#142); `unlace_phases` (#128);
  `cpool`, `capability`, `idiom`, `comment`, `rangeutil` (#112); `userop`, `pcodeinject`, `actionprof`
  (#118); shared pass helpers and pass-owned types (#116, #119, #120, #148, #155, #160).
- Step 8, `#[inline]` on the small middle accessors (#141).
- Step 9, the moves: 9a `unlace-middle` (#167), 9b `unlace-lift` (#175), 9c `unlace-structure` (#177),
  9d `unlace-bandb` (#178), 9e `unlace-emit` (#179), each after prep PRs (#145, #147, #150, #154, #156, #168-#171).

**Runtime (#183).** Against 7afdf46521, the single crate before the refactor, release `decompile-all` was 4.9%
slower after the split (grep +8.7%), with byte-identical output. About half came from the `.sla` cache (#180)
hashing every spec source on each start, and half from calls that stopped inlining across the new crate
boundaries. Fixed with a per-spec stamp file (size + mtime of each source, the key memoized per process) and
`[profile.release] lto = "thin"`: grep 4.58 s -> 4.41 s, sort 2.25 -> 2.34 s, libselinux.so.1 3.56 -> 3.53 s,
total 10.39 -> 10.28 s, output still byte-identical.

**Maturity levels (2026-11-23).** The Hex-Rays idea from the landscape doc landed as a record of the
scheduler's progress, with no behaviour change: `unlace-middle`'s `unlace_maturity` (levels raw ...
complete, facts, `is_settled`, `debug_assert_settled!`), marked on ten schedule nodes by the
driver, reset by a restart, reported by `phase status` (spec §0.10).

**C syntax tree (2026-11-23).** A ninth crate, `unlace-ctree`, holds the C syntax tree planned in
`docs/architecture/ctree.md`: the tree types, its own maturity (`CMaturity`) and the builder from the
structured block tree. It depends on `unlace-middle` only; nothing calls it yet.

**Middle layout (2026-11-23).** The modules reclassified into middle left the phase folders that
did not describe them: the IR-level `typeop`, `variable`, `cover`, `dynamic` went to `substrate/`, `stringmanage`
to `p0_knowledge/`, the SLEIGH engine seam (`engine_translate`, `unlace_decodekit`, `inject_sleigh`,
`unlace_emulatefunction`) to a new `engine/`, and the spec-declared models (`modelrules`, `unlace_aggregateabi`,
`prefersplit`, `unlace_segmentize`) to a new `spec/`. Middle's phase folders keep only the phase machinery
every band shares (`jumptable`, `heritage` and its three guard helpers, `fspec`, `merge`, `varmap`); `p5_types/`
and `p9_emit/` are gone from middle.

**Left** (as of 2026-11-23; step 0 is measured and step 10 done, both below; the hook-panicking band-crate
unit tests were fixed in #185, which installs the real pass hooks in each band crate's tests):
- Maturity follow-ups: replace ad-hoc "has phase X run" checks (heritage counters, calls-recovered,
  high-level and structured flags) with `is_settled`/the level where exactly equivalent, add
  `debug_assert_settled!` where a pass silently relies on an earlier phase, and show the level in
  `unlace decompile --trace`.
- Step 6 track: lift heritage, fspec, jumptable, merge and varmap out of `unlace-middle` into the band that
  owns them (being analysed; middle keeps only what every band needs).
- The ctree track (a C AST between structuring and emit, with its own maturity levels, per
  `docs/architecture/decompiler-ir-landscape.md`) and the perf track (runtime after the split, #183; the
  remaining cross-crate inlining) continue separately.
- Not planned: cutting `unlace-bandb-core`'s cycle (about 0.5 s per rebuild, see step 10).

### Step 0, measured after the split (2026-11-23)

Rebuild of the `unlace` binary (`cargo build -p unlace-cli`, dev profile, opt-level 1, warm target
dir, rustc-rdr-main with `CARGO_UNSTABLE_PUBLIC_API_HASH`) after a one-line private edit, best of 2,
against 7afdf46521 (the single crate before the day's refactor), on an idle 24-core machine:

| edit in | before | after | speed-up | peak RSS |
|---|---|---|---|---|
| emit (`p9_emit/printc.rs`) | 15.5 s | 7.5 s | 2.1x | 2.8 -> 0.9 GB |
| structure (`p8_structure/blockaction.rs`) | 15.6 s | 6.8 s | 2.3x | 2.8 -> 0.9 GB |
| bandb (`p5_types/coreaction_infertypes.rs`) | 15.6 s | 11.1 s | 1.4x | 2.8 -> 1.5 GB |
| middle (`substrate/funcdata.rs`) | 16.4 s | 9.3 s | 1.8x | 2.8 -> 0.9 GB |

A private edit in middle no longer rebuilds the crates above it (the public-API hash is unchanged),
which is why even middle edits got faster. bandb, at 249k lines, gains least; splitting it (step 10)
is where the remaining incremental time is. Cold dev build of `unlace-cli`: about 3 minutes either
way.


### Step 10: splitting unlace-bandb, measured (2026-11-23)

The module graph inside `unlace-bandb` (`crate::`/`super::` paths in non-test code, the same
resolution as `scripts/check_layers.py`; 308 modules, 249k lines with tests):

| from \ to (module pairs) | p3_dataflow | p4_calls | p5_types | p6_variables |
|---|---|---|---|---|
| p3_dataflow (78k) | - | 14 | 11 | 17 |
| p4_calls (84k) | 4 | - | 16 | 8 |
| p5_types (50k) | 6 | 28 | - | 10 |
| p6_variables (37k) | 12 | 4 | 15 | - |

Every folder reaches every other one. A split by phase needs at least 22 module edges inverted (best
order: calls+types+variables below dataflow, 171k / 77k), 40 for three crates, more for four. The
plan's calls / types / dataflow+variables order costs 44.

The strongly connected components say why. One component holds 81 modules and 116k lines: 31 calls,
20 types, 20 variables and 10 dataflow modules that reach each other (the P3-P6 fixpoint of
`docs/architecture/decompiler-ir-landscape.md`). Around it, every other module is acyclic:

| group | modules | lines | what it is |
|---|---|---|---|
| below the component | 49 | 30k | helpers the component reads (callee summaries, constant folds, union resolution, ...) |
| unrelated to it | 119 | 54k | passes that neither reach nor are reached by the component (they read only the row above, each other, or lower crates) |
| the component | 81 | 116k | the fixpoint core |
| above the component | 59 | 49k | passes that read the core (callee arity/preserve trials, cleanup, stack effects, ...) |

So a split along the condensation costs no inversion at all: `unlace-bandb-base` (below + unrelated,
168 modules, 84k), `unlace-bandb-core` (the component, 116k), and `unlace-bandb` (above, 49k, keeps
the name, so emit and the driver are unchanged). Every crate keeps the four phase folders it has
modules in. Cutting the component itself is the expensive part: the best cut by folder (variables
below calls+types below dataflow) is 10 edges for 17k / 74k / 25k, and module moves only bring it to
5 edges with a 88k middle.

Expected rebuild after a one-line edit, from step 0's four crates (time is close to linear in the
edited crate's size: 6.3 s + 19 ms per 1k lines fits all four within 0.2 s): base 7.9 s, core 8.5 s,
top 7.2 s, against 11.1 s for `unlace-bandb` today. Chosen: the three-crate split along the
condensation, no inversions; the component stays one crate. Measured times are recorded below once
the crates exist.

Measured (2026-11-23, same method as step 0: `cargo build -p unlace-cli`, dev profile, opt-level 1,
line-tables-only debug info, warm target dir, a one-line private item appended to the file, best of 2;
the machine was shared, load average 5-12 on 24 cores, so the baseline was re-measured alongside):

| edit in | before (one unlace-bandb, 30c7265e90) | after 10a | after 10b |
|---|---|---|---|
| base (`p4_calls/calleepurge.rs`) | 10.5 s | 7.9 s | 7.5 s |
| core (`p5_types/coreaction_infertypes.rs`) | 10.5 s | 9.5 s | 8.2 s |
| above the core (`p6_variables/coreaction_cleanup.rs`) | 10.5 s | 9.5 s | 6.8 s |

Each crate now rebuilds in 6.8-8.2 s, in line with the other band crates (structure 6.8 s, emit 7.5 s,
middle 9.3 s) and with the size model above. The core (116k lines) is the floor without cutting the
cycle; its cheapest cut by folder (10 inverted edges, largest piece 74k) would save about 0.5 s more,
which does not pay for hooks through the fixpoint.


### Step 10, second half: lifting Ghidra's heavier algorithms out of unlace-middle, measured (2026-11-23)

The module graph of `unlace-middle` (109 modules, 163k lines with tests; `crate::`/`super::` paths in
non-test code, resolved as `scripts/check_layers.py` does) has one strongly connected component. It holds
61 modules and 135k lines: `Funcdata`, `Architecture`, `ArchContext`, the type system, the pass-hook table,
and all five candidates. Every candidate reaches every other middle module, so moving one into a crate
above middle means inverting every edge into it:

| module | lines | middle modules that reference it (non-test) | what the references are |
|---|---|---|---|
| fspec | 10.7k | 17 (architecture 32 paths, context 30, dtype 23, heritage 15, remote_provider 14, passhooks 13, ...) | the prototype model is part of the IR itself: `Architecture`'s models, `ArchContext`, `Datatype` decoding, overrides |
| heritage | 8.4k | 2 (funcdata, passhooks) | `Funcdata::heritage` is a by-value field driven by ~10 `Funcdata` methods; 7 heritage types appear in hook signatures |
| jumptable | 8.5k | 7 (funcdata_block 13, funcdata 6, passhooks 4, remote_provider 3, emulatefunction, rangeutil, dtype) | `Funcdata::jumpvec`, the switch recovery in `funcdata_block`, 4 types in hook signatures, the `ATTRIB_LABEL` constant |
| merge | 3.8k | 3 (funcdata_merge 12, funcdata 2, passhooks) | `Funcdata::covermerge`, the `MergeContext` trait `Funcdata` implements and the hooks use |
| varmap | 5.6k | 3 (funcdata 4, passhooks 4, heritage) | `Funcdata::localmap` (`ScopeLocal`, the function's local scope, read all over), 4 types in hook signatures |

None of them can move without splitting it in two. The types (`Heritage`, `JumpTable`, `Merge`/`MergeContext`,
`ScopeLocal`, and the 19 types in `UnlaceHooks` signatures) are fields of `Funcdata` or parameters of the hook
table, both in middle, so they stay. Only their method bodies could move, as extension traits (an inherent impl
cannot live in another crate). The fields would become `FuncState` slots or stay typed in middle. fspec cannot
move at all: `Architecture`, `ArchContext` and `Datatype` depend on it directly.

Expected gain, from the size model above (6.3 s + 19 ms per 1k lines):

- Best case, the method bodies of heritage, jumptable, merge and varmap (about 26k lines) moved to a crate
  between middle and lift: a private edit in middle goes from 9.4 s to 8.9 s, and an edit in the moved code from
  9.4 s to about 6.8 s.
- A public change in the moved code still rebuilds every crate above middle, since all of them depend on the new
  crate. The only saving is middle's own share, about 0.5 s.
- The zero-inversion splits of middle are smaller still. The 9 modules above its component (`funcdata_merge`,
  `funcdata_op`, `funcdata_printraw`, `idiom`, ... 9k) save about 0.2 s, and the 30 below it (16k) about 0.3 s.

Cost: four inversion series through `Funcdata`'s central state (heritage and merge drive the SSA and cover
fixpoint), each splitting a type from its methods and changing every caller of the moved methods. That is 21
files above middle for heritage, 28 for jumptable, 17 for merge and 35 for varmap.

Decision: not done. The gain (0.5 s per middle edit, 2.6 s per edit inside the four algorithms, about 8% of
the last month's commits) does not pay for splitting `Funcdata`'s core types from their algorithms. Middle
already avoids most downstream rebuilds through `CARGO_UNSTABLE_PUBLIC_API_HASH`, since private edits keep
its public-API hash. If middle edits become the bottleneck, the zero-inversion split of the 30 modules below
its component is the cheap first step.
