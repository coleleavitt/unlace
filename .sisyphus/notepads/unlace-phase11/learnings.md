# Phase 11 Learnings

## P11-1: main() Goto Profiling

### Trace Output (RUST_LOG=unlace_struct=trace)
main has 60 blocks, 1388 instructions. The structurer's `split_irreducible_entries`
found 9 SCC entry candidates but **split 0** — all were "non-shrinking":

| Entry Block | current_body | remaining_largest_body | Reason skipped |
|-------------|-------------|----------------------|----------------|
| BlockId(52) | 2 | 2 | body == remaining |
| BlockId(53) | 2 | 5 | body < remaining |
| BlockId(39) | 6 | 20 | body < remaining |
| BlockId(42) | 6 | 20 | body < remaining |
| BlockId(30) | 5 | 28 | body < remaining |
| BlockId(31) | 5 | 28 | body < remaining |
| BlockId(34) | 5 | 28 | body < remaining |
| BlockId(6)  | 3 | 3  | body == remaining |
| BlockId(7)  | 3 | 51 | body < remaining |

### Goto Targets in main (3 gotos)
- `label_5` (line 138): target of `goto label_5` at line 143. Block reached from both
  the `if (v5)` true-branch and the `if (v18)` check — classic multi-entry.
- `label_7` (line 152): target of `goto label_7` at line 165. Inside a while loop body,
  reached from both the `if (v29)` else-branch and the `if (v14)` else-else path.
- `label_8` (line 154): target of `goto label_8` at line 167. Same SCC as label_7,
  reached from the `if (v14)` else-then path.

### Key Insight
All 3 gotos in main come from multi-entry regions where the structurer couldn't split
because the SCC body was smaller than the remaining graph. The heuristic prevents
splitting when it would increase total code size.

---

## P11-2: f_rec_power.constprop.0 Goto Profiling

### Trace Output (RUST_LOG=unlace=trace)
- 17 blocks, 223 instructions
- `split_irreducible_entries done splits=0` — **NO splits at all**
- No `node_split` trace messages (unlike main which had 9)
- This means the SCC detection didn't even find candidates to evaluate

### The 7 Labels (label_0 through label_6)
All 7 labels are clustered in a deeply nested if/else chain (lines 443-496):
```
label_0 (line 443): goto from line 494 — reached from `if (v12)` else
label_1 (line 454): goto from line 490 — reached from `if (v3)` else
label_2 (line 455): goto from line 486 — reached from `if (v3)` else
label_3 (line 456): goto from line 492 — reached from `if (v3)` else
label_4 (line 457): goto from line 488 — reached from `if (v3)` else
label_5 (line 458): goto from line 484 — reached from `if (v3)` else
label_6 (line 459): goto from line 496 — reached from `if (v3)` else
```

### Why No Splits?
The function has a recursive call (`f_rec_power.constprop.0()` at line 470) and
GCC's constprop optimization creates a deeply nested decision tree. The structurer
sees these as multi-entry blocks but the SCC detection doesn't flag them as
irreducible — they're actually **reducible** control flow that the structurer
fails to structure cleanly. The gotos are emitted as a fallback when the
structurer can't find a clean nesting.

### MAX_SPLIT_ROUNDS Check
No evidence of MAX_SPLIT_ROUNDS being hit. The `split_irreducible_entries`
pass completed with `splits=0` immediately. The issue is NOT that splitting
was attempted and capped — it's that the heuristic decided not to split at all.

### Idiom Recognition Concern
The trace shows idiom_recognition running 42 iterations for this function —
that's suspiciously high and suggests the pass is thrashing without converging.
This may be a performance issue but doesn't directly cause the gotos.

---

## P11-3: IDA Comparison — Metric Gap Analysis

### Raw Comparison (medium.c)

| Metric | unlace | IDA Hex-Rays | Delta | Direction |
|--------|--------|-------------|-------|-----------|
| if     | 24     | 60          | -36   | Under     |
| for    | 0      | 5           | -5    | Under     |
| while  | 16     | 3           | +13   | Over      |
| goto   | 12     | 0           | +12   | Over      |
| return | 3      | 8           | -5    | Under     |
| var    | 84     | 30          | +54   | Over      |

### Gap 1: Missing 36 ifs (24 vs 60)

**Root cause**: Our structurer emits many `while (v16) { break; }` patterns
instead of proper if/else chains. In main(), there are 11 instances of
`while (vN) { break; }` which are really single-iteration conditionals that
IDA would emit as `if (cond) { ... }`. Additionally, many conditions that
IDA recovers as compound boolean expressions (`if (a && b)`) are split into
separate blocks by our lifter, and the short-circuit recovery pass doesn't
recombine them all. The 36 missing ifs come from:
- ~11 while-break patterns that should be ifs
- ~15 compound conditions not recovered (each `&&`/`||` adds an if in IDA)
- ~10 conditions lost in the goto fallback regions

### Gap 2: Missing 5 for-loops (0 vs 5)

**Root cause**: Our for-loop recovery pass (`for_loop` in structurer) requires
detecting an init, condition, and increment pattern. medium.elf contains
vectorized loops (SSE `_mm_add_epi32` in a loop) and counted loops that GCC
optimized into complex CFG patterns. Our structurer emits these as `while`
loops because:
1. The increment is often a pointer bump or SSE operation, not a simple `i++`
2. The init statement is separated from the loop header by multiple blocks
3. The for-loop detector requires the increment to be the last statement in
   the loop body, but our block merging doesn't always achieve this

### Gap 3: 16 whiles vs IDA's 3 (+13 over-count)

**Root cause**: We emit 16 while loops but IDA only has 3 while + 5 for = 8
total loops. Our over-count comes from:
- 11 `while (vN) { break; }` patterns that are NOT loops at all — they're
  single-pass conditionals that the structurer couldn't express as `if`
- The remaining 5 genuine while loops should be 3 while + 2 for (the 2 that
  IDA recovers as for-loops with simple increments)
- Net: we have 16 while = 11 fake + 3 real while + 2 should-be-for

### Gap 4: 12 gotos vs IDA's 0

**Root cause**: IDA's Hex-Rays uses a more sophisticated structuring algorithm
(likely based on the Cifuentes/Van Emmerik approach with aggressive node
splitting and condition-based restructuring). Our structurer:
1. Uses a conservative non-shrinking heuristic that refuses to split when
   the SCC body is smaller than the remaining graph
2. Doesn't attempt condition-based restructuring (duplicating conditions to
   eliminate multi-entry regions)
3. Falls back to goto for any block with 2+ real predecessors that isn't a
   loop header
IDA achieves 0 gotos by aggressively duplicating code and using nested
if/else to cover all paths without labels.

### Gap 5: Missing 5 returns (3 vs 8)

**Root cause**: medium.elf has 5 functions decompiled (main, _start, f_rec_fib,
f_ackermann, f_rec_power.constprop.0). IDA expects 8 returns across all
functions. Our output has:
- main: 0 returns (void, falls off end) — IDA likely has 1 (explicit return 0)
- _start: 0 returns — IDA likely has 0 (noreturn)
- f_rec_fib: 1 return — IDA likely has 2+ (one per base case)
- f_ackermann: 1 return — IDA likely has 2 (base + recursive)
- f_rec_power: 1 return — IDA likely has 2+ (base + recursive)
Missing returns come from: (a) main not returning int, (b) recursive functions
having only one return path instead of one per base case, (c) the structurer
merging return paths into a single exit.

### Gap 6: 84 vars vs IDA's 30 (+54 over-count)

**Root cause**: Our variable recovery is extremely conservative:
1. Every register gets its own variable (v1..v31 in main alone = 31 vars)
2. Temp variables for intermediate computations aren't eliminated
3. Flag registers (ZF, SF, CF) become separate `signed char` variables
4. IDA's type recovery merges registers into higher-level variables and
   eliminates temporaries through expression folding
5. Each function re-emits the full typedef preamble, inflating the count
   (though these aren't counted as vars in our metric)

### Summary of Improvement Priorities
1. **while-break → if conversion**: Eliminate 11 fake loops, gain ~11 ifs
2. **For-loop recovery**: Convert 2-5 while loops to for loops
3. **Goto elimination**: More aggressive node splitting or condition duplication
4. **Return recovery**: Detect `return 0` in main, multiple returns in recursive fns
5. **Variable coalescing**: Merge register-level vars into expression-level vars

---

## P11-9: Tail Duplication Pre-Pass

### Implementation
- New file: `crates/unlace-struct/src/tail_duplication.rs`
- `tail_duplicate_small_blocks(func: &mut Function) -> usize`
- Duplicates blocks with ≤3 instructions and ≥2 predecessors
- Each predecessor (except the first) gets its own copy of the block
- Pipeline position: after merge_linear_blocks, before split_irreducible_entries
- Single pass sufficient — duplication only creates single-predecessor copies

### Key Insight
The structurer marks blocks with 2+ real predecessors (non-loop-headers) as
`goto_targets` in `StructureCtx::new()`. For f_rec_power.constprop.0, all 7
gotos come from this heuristic on small join-point blocks in a deeply nested
if/else tree. Duplicating these tiny blocks eliminates the multi-predecessor
condition entirely, preventing goto_target marking.

### Tests
- 3 unit tests: diamond join duplication, large block rejection, entry block protection

---

## P11-10: Return Path Recovery

### Implementation
- New file: `crates/unlace-struct/src/return_merge.rs`
- `return_merge(hir: &mut HirFunction)`
- Replaces `Goto(label)` with `Return(val)` when label is immediately followed by Return
- Strips consumed Label+Return pairs when all referencing gotos are replaced
- Ensures `main` has explicit `return 0` (C99 §5.1.2.2.3)
- Pipeline position: after goto_to_break/goto_to_continue, before C printing

### Tests
- 5 unit tests: goto-to-return replacement, main return 0, non-main no implicit return,
  main already has return, partial goto replacement
