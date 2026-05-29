# Golden-fixture triage — 2026-05-29

Per-fixture audit of the 14 failing `golden_fixtures` after the post-WIP
recovery work. Method: `scripts/classify_golden_diffs.sh` plus a directional
diff of current output vs golden (lost calling convention, garbage stack
indices, inverted conditions, size shrink). Parent (`4da39dbd6`) and last-good
WIP baseline (`7aa62dc0`) used for blame.

## Headline verdict

**None of the 14 are refresh candidates.** Every fixture's current output is
larger and worse than its golden — the goldens are valid regression gates that
expose real producer-side bugs, not stale snapshots to be rebaselined. (This
revises the earlier "mostly stale" framing: they *are* stale relative to actual
output, but stale in the direction of being *better* than current, so refresh
would lock in regressions.)

## Bugs fixed this session

- **arc_features** — ARCompact `arc_branch` truncated 24→16 bytes by an
  over-eager interior-padding early-stop (commit `65ecc42d2`); then
  mis-labelled `AArch64 AAPCS64` by the x86/ARM-centric convention scorer
  (commit `987453d91`). Both fixed; golden now passes with the correct
  `unknown` convention.
- **Cross-arch calling convention** (`987453d91`) — the System V/Microsoft x64
  register-offset scorer was ungated for non-x86/non-AArch64 arches, emitting
  bogus `__fastcall`/`__aapcs` on MIPS/RISC-V/PPC/V850/ARCompact. Now gated:
  arm64 reports AAPCS64, the RISC ISAs report `unknown` (matching goldens).

## Bounded fixes landed in the follow-up session (2026-05-29 pm)

- **Cross-arch calling convention** (`987453d91`) — gated the x86/AArch64
  register-offset scorer so MIPS/RISC-V/PPC/V850/ARCompact report `unknown`
  instead of bogus `__fastcall`/`__aapcs`.
- **Negative-displacement array subscripts** (`7ce547456`) — `try_array_subscript`
  no longer divides a negative `base - N` displacement by the stride into a
  garbage index (`v1[4611686018427384710]` → `*(_DWORD *)(v1 - 12776)`).
- **Signed-flag-compare fold** (`9ad99b0a5`) — `LOBYTE(a<b) ^ __OFSUB__(a,b)`
  → `a < b`, and `a==b || (…)` → `a <= b` (single-line form). f_rec_fib's entry
  guard now reads `if (a1 <= 1)`.

The deep follow-ups are filed as tasks t40 (structurer empty-branch polarity),
t41 (non-x86 stack-frame SP tracking), t42 (SSA-layer cross-statement
signed-flag recognizer — the dominant medium.elf driver).

## Remaining gaps (deep, producer-side — not bounded printer fixes)

1. **Stack-frame recovery on non-x86 ISAs** (mips64, riscv64, v850).
   `memory_test` shows the MIPS `r29` stack pointer decremented then used as an
   array base with a giant index (`v1[4611686018427384710]` = a negative stack
   offset reinterpreted as `u64`). Golden recovers a proper `Stack frame: 0x8`
   and elides the spill/reload. Needs arch-aware stack-pointer tracking before
   copy/constant propagation. (CLAUDE.md gap #9.)

2. **Condition polarity** (mips64/ppc64/v850 `if (!(…))` vs golden `if (…)`).
   Empty-then negated guards that should be positive. Lives in
   bool_simplify/structurer; do as a post-pass with targeted tests, not a
   structurer-core edit.

3. **Flag-condition recovery** (medium, x86). Raw `__OFSUB__`/XOR flag dataflow
   not simplified to `v <= 1`; drives `medium`'s residual line count
   (1223 vs 460). The big, multi-session item. (CLAUDE.md gap #6.)

4. **Line/size growth in debug_* and cpp_*** — current decodes more bytes /
   leaks more temps than the (older, tighter) goldens. Mostly downstream of the
   same fold/lvar gaps; tracked by the env-gated tracing in CLAUDE.md.

## How to re-run the triage

```bash
RUSTC_WRAPPER= cargo build -q -p unlace-cli
bash scripts/classify_golden_diffs.sh            # all 15
bash scripts/classify_golden_diffs.sh mips64_features   # one fixture
```

## Follow-up: full 14-fixture explore-agent investigation (2026-05-29 pm-2)

Five parallel Explore agents root-caused all 14 fixtures. Synthesis:

### Bounded fix LANDED
- **SP-as-struct** (`b780959e9`) — StructFieldDetectPass clustered stack-pointer
  accesses into fake structs (`v4->field_18446744073709551600` on arm64
  bitfield_test). Now excludes SP/FP register bases via StackSpec::is_frame_base.
  arm64 body meaningfully cleaner; +1 regression test.

### Verified NOT safely fixable to "match golden" (golden is wrong/contested)
- **_start / function tail size** (debug_hello, cpp_vtable): golden trims _start to
  0x1a (26 B) but the symbol size is 38 B and bytes 26-38 are REAL code
  (`lea; call __libc_start_main; hlt`), not padding. Current's larger size is more
  correct — the golden is truncated. Do NOT "fix" to match.
- **vtable receiver `this`** (cpp_vtable use_base): BOTH current and golden emit
  `return this->__vftable->method_0();` — the golden has the same `this` bug, so
  threading base_varnode would make current DIVERGE from the golden, not match it.
  (Also: touches structurer, against CLAUDE.md guidance.) Deferred.
- **`cN` coalesced naming** (ppc64/v850/riscv): golden uses `c0`/`c1` (coalesced
  register names) that the current var-naming/register-coalesce pipeline no longer
  produces (only `vN`/`saved_rN`). This is a naming-convention regression spanning
  var_naming + register_coalesce — multi-file, real, deferred.

### Genuine producer gaps (deferred, distinct root causes, multi-session)
- **PPC immediate-as-register** (ppc64 sub_10000120): `if (v1 != v2//rsp)` where
  golden has `if (c0 == 3LL)` — the immediate `3` was mis-lifted to a register
  read. PPC LIFTER bug.
- **arm64 CSEL→if-else + CSINV/CSNEG signed-flag predicates**: raw `__csel__`/
  `__csinv__` intrinsics not structured; signed-less XOR fold not reaching csel
  predicate operands.
- **x87 FPU** (x87_math): duplicate FLD, incomplete FCOM flag semantics — x87
  stack modeling in unlace-lift-x86/src/ops/fpu.rs.
- **string/symbol resolution** (cpp_rtti main): golden resolves `printf("%s %s\n",…)`;
  current emits raw `0x3d28LL` addresses.
- **leaked temps / function-size over-read on symbol-less CRT functions**
  (debug_*, medium, switch_table): recursive-descent over-read + residual
  cross-statement folding; medium already 2610→1134 from prior work.

### Honest verdict
The 14 remaining goldens are a MIX: some current-regressions (naming, PPC lift,
CSEL), some current-IMPROVEMENTS where the golden is stale/wrong (_start size,
vtable `this` shared bug), and several deep multi-session producer gaps (x87,
string resolution, PPC immediates). There is no safe mechanical path to 32/32;
each requires per-issue producer work with regression risk. The one cleanly-
correct bounded fix (SP-as-struct) is landed.

## Deep-task investigation outcomes (t49-t54, 2026-05-29 pm-3)

Worked all 6 deep backlog tasks. Two yielded bounded fixes; four deferred with
precise root causes (verified, not assumed).

### Bounded fixes LANDED
- **t49 PPC copy-prop** (`359f01467`): `is_x86_64_frame_register`/`_call_arg_register`
  applied x86 register *offsets* on all arches; on PPC offset 32 is r4, so
  `r4 = COPY 3` was blocked from propagating. Now arch-gated. ppc64 sub_10000120:
  `if (v1 != v2)` → `if (v1 != 3LL)`. +2 tests.
- **(prior) SP-as-struct** (`b780959e9`): arm64 garbage struct fields fixed.

### Deferred (verified root cause, not bounded / golden stale)
- **t50 cN coalesced naming**: `cN` = coalesced multi-version register (verified via
  SSA: v850 sub_10118 r10d has v0/v1/v3 merged). register_coalesce.rs:405 already
  emits cN but it's dead — variable_merge.rs assign_names names every cluster `vN`
  first. Deferred: ZERO ROI (v850/ppc64 have 13/15 total diffs incl. polarity, so
  cN flips no golden green) + regresses 549/1129 vN-asserting unit tests + the one
  passing arch golden arc_features has cN=0.
- **t51 leaked-temp folding**: medium v706/v707/v708 are single-use but SEQUENTIAL
  CALL RESULTS — inlining reorders side-effecting calls (correctness regression).
  Printer's conservative call-output policy is correct. medium/switch goldens are
  stale-WORSE than current (empty `void f_rec_fib(){}` bodies).
- **t52 arm64 CSEL**: CALLOTHER csel/csinv/csneg need a structuring pass (ternary/
  if-else) + dead-flag cleanup — a multi-file FEATURE. csel_test golden is itself
  buggy (wrong Microsoft x64 CC on ARM, double-declared cond).
- **t53 string resolution**: CLOSED — current already BETTER than golden (current
  resolves `printf("%s %s\n",…)`, golden has raw `0x3d28LL`).
- **t54 x87 FPU**: sum_squares_x87 duplicate FLD is a real x87 stack-modeling
  (TOP-tracking) lifter gap in ops/fpu.rs — multi-session, broad-risk.

### Net
golden_fixtures stays 18/32 (the 14 failures are stale-worse goldens and/or deep
producer gaps; no remaining bounded fix flips one green on its own). Two real
correctness fixes (PPC const-prop, SP-as-struct) landed with tests; all gates green.

## Multi-session producer work — executed via parallel worktree build agents (2026-05-29 pm-4)

The user directed "do all the deferred ones." Fired 5 isolated-worktree build
agents; integrated 4 wins via cherry-pick onto master + 1 follow-up DCE fix.

| Task | Commit (integrated) | Outcome |
|------|--------------------|---------|
| t41 MIPS garbage displacements | `d70ed03f1` | **Real root cause: reassoc OSCILLATION**, not lifter. idiom_recognition+algebraic_simplify re-applied `(sp-32)+disp → sp+(disp-32)` forever (base copy-aliases inner add output). Both passes now decline self-aliasing reassoc. memory_test garbage gone, stack vars recovered, pipeline converges. |
| t52 arm64 CSEL | `650066387` | CSINV/CSNEG/CSINC → ternaries (`cond?Rn:~Rm/-Rm/Rm+1`); dead csel + orphan `__unlace_int_*` DCE'd. 0 raw csel intrinsics / orphans in arm64_features. |
| t40 empty-if polarity | `c371391a1` | Final cleanup stage depolarizes genuinely-empty `if(!(X)){}` → `if(X){}`. mips64 logic_test matches golden. |
| t50 cN coalesced naming | `c0b7c3808` | variable_merge names coalesced multi-version register clusters `cN` (separate counter, consumes v-slot). v850 sub_10118 r10d→c0. |
| t54 x87 FPU | (not committed) | Agent correctly STOPPED: x87 needs static-TOP tracking, but Lifter::lift_insn has no function context — cross-arch trait change / new post-lift pass, genuinely multi-session. Honest current output preferred over masking. |
| t49 PPC const-prop | `359f01467` (prior) | (landed earlier) arch-gated x86 frame/arg copy-prop barriers. |

Follow-up DCE fix `1aeb04e0c`: t41's correct fold-decline exposed a latent DCE
gap — a dead compound assignment (`v1 += 0x7f`, result unused) that the old
over-eager reassoc had incidentally been collapsing. prune_dead_plain_assignments
now removes dead `lhs OP= rhs` to a synthetic local with no later use.
arc_features golden preserved.

### Integration verification (combined, on master)
unlace-output 560, unlace-passes 1134, unlace-struct 260, cli_smoke 29,
quality_smoke 6 — all green. clippy --workspace -D warnings clean,
lint-determinism OK, cargo fmt clean. golden_fixtures 18/32 (no net change in
count — the producer fixes substantially improve fixture BODIES toward their
goldens but each fixture still has additional residual diffs; arc_features
preserved as passing). All four producer fixes verified live in the integrated
binary. x87 (t54) remains the one honestly-deferred deep gap.
