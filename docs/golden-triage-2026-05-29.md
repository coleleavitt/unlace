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
