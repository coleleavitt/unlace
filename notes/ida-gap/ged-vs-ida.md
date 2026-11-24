# Structure (GED) vs IDA 9.5 on DecBench O2-noinline (2026-11-24)

Can unlace's control-flow structure be scored against IDA's on the same functions with the
files in `~/SiteResearch/ida-pro/`? Yes, for one corpus: DecBench O2-noinline (257 binaries,
40 projects). This note records what the two SQLite files hold, how the comparison was run,
and the numbers.

## What the files are

- **`ged.sqlite`** (40 MB, one table `ged`) holds per-function DecBench GED against the
  original source. A row is `(testbed, build, name, addr, src_nodes, src_gotos, ged, how,
  gotos, nodes, causes, shape)`. `name` is `project/binary/function` and `addr` is hex.
  `how` is the GED path: `isomorphism`/`iso` (0), `vj_ged`/`vj`, or `size_lower_bound`/`lb`
  for graphs over 200 nodes.
  - Testbed `decbench-O2ni`, about 31,500 functions per build. Builds: `ida-9.2-published`
    (DecBench's published IDA output, rescored), `ida-9.5` (a local run of DecBench's raw IDA
    backend on the stripped binaries), `unlace-1.515-published`, `unlace-upstream-c84797043` and
    `unlace-stack-287b582a4`.
  - Testbeds `o2ni-cmark` and `perplexity-cmark` are a few hundred cmark functions each. Only
    `perplexity-cmark` has an IDA column.
  - How it was made: the `decompiler-structure-quality` skill, `references/hexrays-structuring.md`,
    *How it was measured*.
- **`callgraph.sqlite`** (107 MB) is IDA 9.5's own call graph: `funcs`, `calls` and `exports`
  for 45 of IDA's own modules (libida, hexx64, hexarm, the loaders; 1,024,632 edges, 990,576
  `call` and 34,056 `tail`). It has no decompiler output and nothing to score. It is the
  input to `notes/ida-limits.md`.

So the IDA side of the comparison is the stored `ida-9.5` column. Only unlace needs a fresh run.

## How it was run

Everything comes from the skill's `scripts/decbench-e2e/`, with the binaries and sources in
`~/RustProjects/forks/kuna-data/decbench-data`.

1. `kr.py strip OUT` makes DecBench-stripped copies (`binfmt.strip_copy`).
2. `unlace decompile-all <stripped> --json --max-fn-seconds 600` (`--mode auto`, as DecBench
   runs it), 4 binaries at a time, then `kr.py relabel` renames each function to its DWARF name
   by address. The build was `unlace-bin/unlace-f7e6edec8e`. Wall time was 581 s for all 257
   binaries, under machine load 35 to 50.
3. `score2.py <run>/O2-noinline out.jsonl` (`SCORE_CACHE` set) scores with DecBench's own code
   (`decbench.utils.cfg` and `GEDMetric`) from the `~/.virtualenvs/decbench` venv. The result
   was 33,395 functions scored and 1,817 without source.
4. The rows are joined to `ged.sqlite` on `(project/binary/function, addr)`.

The local evaluator reproduces the published per-function GED exactly for about 90% (IDA) and
93% (unlace) of functions (see the skill reference). Quote these numbers only against other
numbers from the same evaluator.

## Numbers

All builds on the 30,291 functions that every build scored. GED0 is the share with GED 0.
The skill's patching study treats GED <= 3 as patchable and >= 12 as failing.

| build | GED0 | mean | median | <= 3 | >= 12 | >= 20 |
|---|---:|---:|---:|---:|---:|---:|
| IDA 9.2 (published, rescored) | 36.3% | 11.81 | 5 | 44.6% | 26.8% | 14.7% |
| IDA 9.5 (local run) | 36.5% | 11.63 | 5 | 45.1% | 26.1% | 14.2% |
| unlace 1.515 (published, rescored) | 35.8% | 11.40 | 5 | 45.7% | 23.9% | 13.4% |
| unlace upstream c84797043 | 36.3% | 11.15 | 5 | 46.4% | 23.7% | 13.3% |
| unlace stack 287b582a4 | 36.7% | 11.10 | 5 | 46.6% | 23.5% | 13.3% |
| **unlace f7e6edec8e** | **39.1%** | **10.67** | **4** | **48.9%** | **23.0%** | **12.8%** |

On the larger set where only unlace and IDA 9.5 both scored (31,264 functions):

| | GED0 | mean | median | <= 3 | >= 12 |
|---|---:|---:|---:|---:|---:|
| IDA 9.5 | 36.8% | 11.89 | 5 | 45.3% | 26.2% |
| unlace f7e6edec8e | 39.2% | 10.97 | 4 | 49.0% | 23.2% |

Per function against IDA 9.5: unlace is better on 9,416, ties on 15,625, and is worse on 6,223.
IDA is better by 3 or more on 4,663 functions, a summed gap of 39,584.

Against unlace upstream c84797043 (33,385 functions): 3,108 better, 1,372 worse.

openssh-portable is 7,871 of the functions, about a quarter, across 10 binaries that share
code, and unlace leads most there (mean 8.85 vs 11.30). Without it (23,393 functions), unlace
still leads: mean 11.68 vs 12.09, GED0 42.8% vs 40.9%.

### Per project (both scored)

Projects where IDA's mean is lower: libopencm3 (6.10 vs 4.54), rsyslog (13.57 vs 10.79), zlib
(11.48 vs 10.73), betaflight (5.05 vs 4.81), u-boot (34.34 vs 34.16), libedit (8.32 vs 7.94),
dexter, minipig and x0r-usb (fewer than 60 functions each). unlace's mean is lower in every
other project. The largest leads are nuttx (16.72 vs 20.29), freertos (10.47 vs 13.20), gnutls,
iproute2, coreutils and shadow.

### Largest per-function gaps where IDA is better

| function | unlace | IDA 9.5 |
|---|---:|---:|
| zlib `libz.so.1.2` `inflateBack` | 618 | 87 |
| libedit `history_w` | 379 | 113 |
| libopencm3 `_usbd_standard_request` (usbmidi, msc, cdcacm) | 341 | 107 |
| libopencm3 `dwc_poll` (usbmidi, msc, cdcacm) | 198 | 27 |
| coreutils `cksum_pclmul` | 179 | 27 |
| cleanflight `dmaIRQHandler` (DALRCF405) | 155 | 7 |

These are the next triage cases. The two libopencm3 functions repeat across three binaries,
so each counts three times.

## Caveats

- The IDA column is the stored 9.5 run, not re-run today. Every unlace and IDA column was scored
  by the same local evaluator.
- `--mode auto` on this corpus resolves to `aggressive` below 500 KiB and `reliable` above
  (no binary reaches `fast`), the same option surface DecBench measures.
- The unlace rows are in
  `/tmp/claude-1000/-home-cole-RustProjects-forks-unlace/a5b3f137-91dd-40f2-b5d6-88568c120272/scratchpad/gedrun/unlace-f7e6.jsonl`
  (scratch, not durable). Re-running steps 2 and 3 takes about 15 minutes on this machine.
