# Golden triage — 2026-06-17

Per-fixture classification of the golden corpus, driven by
`scripts/classify_golden_diffs.sh` plus the authoritative harness
(`cargo test -p unlace-test-harness --test golden_fixtures`) and direct
byte-diffs. This supersedes the stale "14 failing goldens" note in the root
`CLAUDE.md`.

## Headline

The "14 failing goldens" premise is **stale** — intervening work fixed them. The
current honest state:

```
cargo test -p unlace-test-harness --test golden_fixtures
=> 31 passed; 1 failed   (only golden_debug_calls fails)
```

The classifier reports 14 fixtures as "REFRESH-SAFE" — but every one of those is
already **byte-identical** to its expected golden (`body_diffs=0`,
`prelude_diffs=0`), i.e. *already passing*. There is nothing to refresh:
`diff expected/<f>.c <(unlace decompile <f>.elf)` is empty for all of them
(verified on arc_features, switch_table, cpp_vtable, medium, …). The classifier's
"refresh-safe" simply means "no structural divergence", which here coincides with
"no divergence at all".

## The one genuine failure: `debug_calls`

`classify_golden_diffs.sh` flagged it NEEDS-REVIEW (body_diffs=25, struct=7). The
body diff is **local-variable naming / slot allocation only** — the call graph,
control flow, and values are identical:

```
expected            actual
--------            ------
int v_4;            int e;            (DWARF-named locals mapped to different slots)
__int64 b/d;        int b/c;
a = x; x = a;       v_36 = x; x = v_36;
e = LODWORD(v13);   a = LODWORD(v13);
v_16 = …            b = …
return clamp(v_4,…) return clamp(e,…)
```

Same sequence `add → sub → square → abs_val → clamp`, same constants, same
returns. The divergence is which SSA temp receives each DWARF local name
(`a`/`b`/`d`/`e`) and how anonymous temps are numbered (`v_4` vs `e`, `v_16` vs
`b`).

**Verdict: NEEDS-REVIEW → do NOT refresh.** This is not a stale golden; it
exposes a pre-existing lvar-naming/allocation quality gap. The *expected* golden
is arguably the better output (it preserves the clean DWARF names `a/b/d/e` on
the natural slots; the current output scatters them and leaks an anonymous
`v_36`). Mechanically refreshing would lock in the worse allocation and hide the
gap — exactly what the repo rules forbid. Left failing as an honest signal; the
fix is in lvar allocation / DWARF-name binding, not the golden.

## Refresh actions taken

**None.** No golden was refreshed: the 14 "refresh-safe" ones are already
passing (nothing to do), and the 1 failing one is a real quality gap that a
refresh would mask. This is the correct, evidence-backed outcome — not a blanket
`UPDATE_GOLDEN`.
