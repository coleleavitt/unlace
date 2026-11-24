# Default-on flips of 2026-11-24: reproducibility audit

Pinned binary `unlace-f7e6edec8e` (at or after every flip below). Each input was run three
times with `unlace decompile-all <input> --json --max-fn-seconds 0` (serial, `--jobs 1`): twice
with the shipped defaults, and once with the input's flips switched off (`--option <flip> off`).
"Identical" compares the two default runs byte for byte. "Flip changes output" says whether
switching the flips off changed the JSON, which shows whether the input exercises them. Wall
time is the whole process (load, discovery, decompile, JSON) on this host, run through
`unlace-slot`.

Flips covered: `boolreturn`, `aeabifloat`, `armpairparam`, `evmcalls`, `wideconst`,
`mfcmsgmap`, `msvcptrentry`, `retindexuse` (default `bpf`), `satconvert` and `fpargboxed`.

## Result

Every run exited 0, and the two default runs were byte-identical for all 16 inputs.

| Flip(s) | Input | Functions | Run 1 (s) | Run 2 (s) | Flips off (s) | Identical | Flip changes output | sha256 (first 16) |
|---|---|---|---|---|---|---|---|---|
| `boolreturn` | `unlace-data/decbench-data/binaries/O2-noinline/bzip2/bzip2recover` | 38 | 0.28 | 0.28 | 0.27 | yes | no | `f5e1b153cdd93478` |
| `boolreturn` | `unlace-data/decbench-data/binaries/O2-noinline/bash/mksyntax` | 32 | 0.23 | 0.23 | 0.23 | yes | no | `f6748891a6b38010` |
| `aeabifloat`, `armpairparam` | `crates/unlace-cli/tests/fixtures/arm_aeabi/arm.o` | 18 | 0.09 | 0.08 | 0.08 | yes | yes | `d7ca028554e89194` |
| `aeabifloat`, `armpairparam` | `crates/unlace-cli/tests/fixtures/arm_aeabi/thumbv7m.o` | 18 | 0.07 | 0.08 | 0.08 | yes | yes | `0a688a7779963a3f` |
| `aeabifloat`, `armpairparam` | `crates/unlace-cli/tests/fixtures/arm_aeabi/libm-arm.o` | 2 | 0.05 | 0.06 | 0.05 | yes | yes | `fa6e5c4e06bf2cae` |
| `evmcalls`, `wideconst` | `crates/unlace-cli/tests/fixtures/evm/erc20_runtime_opt.bin` `--raw-image --target EVM:BE:32:Cancun --base 0 --addr 0x0` | 1 | 0.04 | 0.04 | 0.38 | yes | yes | `70aa3d0bf36025e4` |
| `mfcmsgmap`, `msvcptrentry` | `crates/unlace-analysis/tests/fixtures/arithhelpers_msvc_i386.exe` | 18 | 0.12 | 0.12 | 0.13 | yes | no | `8046adf63b6ab4f6` |
| `mfcmsgmap`, `msvcptrentry` | `crates/unlace-analysis/tests/fixtures/byval_pe_i386.exe` | 4 | 0.10 | 0.10 | 0.11 | yes | no | `5ab26d93cfa4a749` |
| `retindexuse` | `crates/unlace-cli/tests/fixtures/ebpf/bpf_map.o` | 1 | 0.02 | 0.02 | 0.02 | yes | no | `e7b8b198f5a89ac6` |
| `retindexuse` | `crates/unlace-cli/tests/fixtures/ebpf/bpf_subcall.o` | 2 | 0.02 | 0.02 | 0.02 | yes | no | `c5b8aaee10f0d2c5` |
| `satconvert`, `fpargboxed` | `crates/unlace-cli/tests/fixtures/riscv_zfa/zfa64.elf` | 6 | 0.10 | 0.10 | 0.10 | yes | yes | `a8e6c05c41c76536` |
| `satconvert`, `fpargboxed` | `crates/unlace-cli/tests/fixtures/riscv_zfh/zfh64.elf` | 8 | 0.12 | 0.13 | 0.12 | yes | yes | `3bb58c60df00d34c` |
| `satconvert`, `fpargboxed` | `crates/unlace-cli/tests/fixtures/riscv_zfh/zfh32.elf` | 8 | 0.10 | 0.11 | 0.11 | yes | yes | `0d5bb783d99759dc` |
| `boolreturn` | `unlace-data/decbench-data/binaries/O2-noinline/betaflight/betaflight_STM32F405.elf` `--functions isBoardAlignmentStandard` | 1 | 0.73 | 0.97 | 1.12 | yes | yes | `11b5b75d6a2ff549` |
| `retindexuse` | `bpf_strlen (processors.toml image)` `--raw-image --target eBPF:LE:64:default --base 0 --addr 0x0` | 1 | 0.03 | 0.03 | 0.03 | yes | yes | `3d4b5a77ea2cfe3d` |
| `mfcmsgmap`, `msvcptrentry` | `msvc-console-i386.exe (local research corpus, 23 KiB)` | 6 | 0.07 | 0.08 | 0.09 | yes | no | `a06cfe9fd942b491` |

## Notes

- `boolreturn` does not change the x86-64 decbench builds tried (bzip2recover, mksyntax; also
  zlib's minigzipsh and examplesh and coreutils' basename, not in the table). It does change
  betaflight's `isBoardAlignmentStandard` (the #759 nested-run case), which is the input that
  exercises it here. Its four x86-64 shapes are pinned by `tests/stages/boolreturn-default.toml`.
- `mfcmsgmap` and `msvcptrentry` change none of the MSVC inputs available (two analysis
  fixtures and a small console tool; none links MFC or stores a function pointer the way
  `msvcptrentry` reads). They run on all three, and the output stays deterministic with them on.
  An MFC input is still missing from this corpus.
- `retindexuse` (default `bpf`) does not change the clang-built `ebpf` fixtures. It does
  change `bpf_strlen` (the `ebpf_retindexuse` image in `crates/unlace-cli/tests/processors.toml`,
  run with `--raw-image --target eBPF:LE:64:default --base 0 --addr 0x0`).
- Switching `evmcalls` off makes the ERC-20 runtime about 9x slower (0.38 s against 0.04 s): with
  evmcalls off, the dispatcher goes through jump-table recovery.
- The ARM inputs (`arm_aeabi` objects, ARM and Thumb) and the RISC-V Zfa/Zfh fixtures all change
  with their flips off.

Reproduce: build the corpus list as above, then for each input run the command twice and
compare with `cmp`; `--option <flip> off` (`retindexuse off`) gives the off run.
