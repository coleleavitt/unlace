# Per-function decompile cost: where the time goes (2026-11-24)

A map for future speed work. It is taken after the speed PRs #805-#807, #823/#824, #878, #919/#920.

## Method

- **Run:** `unlace-0a82c6883b` (dev profile, opt-level 1, line tables), serial
  `decompile-all /usr/lib64/libcrypto.so.3 --max-fn-seconds 0`. That is 13180 functions,
  roughly 600-700 s of CPU on this host. The function list is OpenSSL 3.5.7's.
- **Self time:** `perf record -F 499`, flat, 252K samples. This host refuses perf call graphs
  (`--call-graph` fails with error 13).
- **Inclusive time:** 1129 whole-process stacks from `eu-stack -p` at about 0.5 s intervals
  (a poor man's profiler; the scripts are `pmp.py`/`agg.py`/`who.py`, re-creatable from the
  description below).
- **Caveat on the build:** this is a dev build. Small cross-crate accessors (`Address::get_space`,
  `get_offset`, `SeqNum::get_time`, `slotmap::KeyData::as_ffi`, `OpId`/`VarnodeId::data`) are not
  inlined at opt-level 1 without LTO, so they show up as self time here. They mostly vanish in
  `--release` (thin LTO). Treat them as a dev-build artifact, not as work to remove.
- **Determinism:** time diffs are only byte-comparable with `--max-fn-seconds 0`. The default
  10 s wall-clock budget fires differently under load.
- **Hybrid CPU:** sum `cpu_core/instructions/u` and `cpu_atom/instructions/u`. Either one alone
  is misleading, and identical binaries still differ by up to ~10% between runs on a busy machine.

## Inclusive: which phases cost

| share of stacks | phase |
|---|---|
| 26% | `ActionBlockStructure` -> `run_region_structurer`, of which `UnlaceRegionIdentifier::compute` is 20% and `find_loop_headers` -> `unlace_dfs_back_edges` alone is 11% |
| 14% | `ActionPool` (the rule pools) |
| 9.5% | `ActionMergeType` -> `Merge::merge_by_datatype` -> `merge_linear` (cover intersection tests) |
| 7.4% | `ActionHeritage` (SSA: `place_multiequals` 4%, rename) |
| 5.8% | `ActionDeadCode` |
| 5.6% | `ActionInferTypes` |
| 4.9% | flow / lifting (`generate_flow`; SLEIGH `one_instruction` 4.5%) |
| 3.5% | printing (`print_c`) |

On small binaries (bash, 2077 functions) the structurer is about 11-15% and the rule pools lead.
libcrypto's large functions make the region identifier superlinear.

By symbol family, BTreeMap node searches are 43% of self time and libc (malloc/free/memmove)
is 27%.

## Top 15 self-time functions

| # | self | function | verdict |
|---|---|---|---|
| 1 | 3.1% | libc `0x1627d5` (memmove/memcpy) | mostly inherent copying. Part of it is `UnlaceRegionGraph::clone` (3.1% of stacks) and `get_sorted_succs` allocating a fresh `Vec` per call; see 3-5. |
| 2 | 2.9% | `BTreeMap<BlockId, u64>` search | in `run_region_structurer`. A per-structuring order map keyed by `BlockId`; a slot-indexed `SecondaryMap` would make it O(1). **Waste (container choice).** |
| 3 | 2.6% | `BTreeSet<UnlaceNodeKey>` insert | `find_loop_headers` builds a `UnlaceNodeSet` of headers on every call. |
| 4 | 2.3% | `BTreeMap<UnlaceNodeKey, Adjacency>` search | `UnlaceRegionGraph::get_succs` goes id -> key (`keyof` BTreeMap) -> `nodes[&key]`: two tree searches per adjacency read. **Waste**: a dense `Vec<Adjacency>` indexed by `UnlaceNodeId` (ids are pool indices) gives O(1). |
| 5 | 2.3% / 1.9% | `BTreeMap<UnlaceNodeId, (i32, i32)>`, `BTreeMap<UnlaceNodeId, UnlaceNodeKey>` | the same id-keyed lookups (`keyof`, node order). Same fix. |
| 6 | 2.5% | `Cover::find` partition point | `Merge` cover intersection (`intersect_by_block`). Inherent to Ghidra's merge; the binary search is already the cheap form. |
| 7 | 2.3% / 1.7% / 1.7% | libc malloc internals, `cfree` | allocation churn spread across the rule pools and the structurer: per-call `Vec`s in `get_sorted_succs` (`get_sorted_succs_into` with a reused buffer already exists, but `unlace_dfs_back_edges` does not use it), and `bb_ops` collecting (`Funcdata::bb_ops_iter` exists for read-only callers). **Partly waste.** |
| 8 | 1.8% | `ActionPool::apply` | the rule dispatch loop itself. Its cost is arena-slot cache misses; inherent. |
| 9 | 1.7% | `unlace_namedglobals::References::record_named` | every printed varnode of a merged global scans all instances of its `HighVariable` for the one in the data space. That is O(instances) per printed read, quadratic in printing for globals with many instances. **Waste**: cache the data-space instance per `HighVariable` for one print. |
| 10 | 1.5% | `MergeContext::vn_cover_ref` | merge cover access. Inherent. |
| 11 | 1.4% | `Address::get_space` | dev-build accessor, not inlined (see Method). |
| 12 | 1.3% | `ActionDirectWrite::apply` | a sweep over every varnode per pass. Inherent (upstream algorithm). |
| 13 | 1.2% | `BTreeMap<LocKey, VarnodeId>` insert | the varnode location tree. Inherent to the substrate design. |
| 14 | 1.2% | `deadcode_apply` | arena lookups while visiting every varnode and op. Inherent; slot-order iteration might help its cache behaviour. |
| 15 | 1.1% | `HighReadView::vn_view` | high-variable reads in merge and print. Inherent. |

## Where to go next (ranked by expected win)

1. **Region identifier (`p7_regions`), about 20-25% on large functions.**
   - `make_regions` re-runs `find_loop_headers`, a full DFS from the start node, on every pass of
     both its outer and inner loops, and clones the `UnlaceRegionGraph` (BTreeMaps) per region attempt.
   - `UnlaceRegionGraph` keys nodes through two BTreeMaps (`keyof`, `nodes`). Make it a dense
     `Vec<Option<Adjacency>>` indexed by `UnlaceNodeId`, keeping a separately sorted key list where
     iteration order matters. That removes items 2-5.
   - In `unlace_dfs_back_edges`, use `get_sorted_succs_into` with reused buffers.
   - These are container and algorithm changes; output must stay identical, since node order comes
     from `UnlaceNodeKey`.
2. **`record_named` (item 9):** quadratic in printing for heavily merged globals. A small fix.
3. **Settle bookkeeping after each function:** `unlace_voidret::due` is now incremental (#878).
   `stale_readers` still scans `changed` × readers per function, about 0.5% on libcrypto; it grows
   quadratically with function count, so watch it on 50k+ function images.
4. **Merge (`merge_by_datatype`, 9.5%)** and **heritage (7%)** are upstream Ghidra algorithms.
   Changing them needs parity proof; leave them unless a specific quadratic case shows up.
5. **SLEIGH `.sla` decode on load:** about 1 s per AArch64 load, once per process. Inherent to the
   current format; only matters for many short runs.
6. **Not worth it:** caching ELF import resolution (`perf/elfplt-memo`, not merged). 32
   resolutions per load cost under 4% of a 1.5 s libcrypto load after #919.
