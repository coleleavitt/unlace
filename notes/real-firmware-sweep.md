# Real-firmware sweep (2026-11-24)

Five embedded and DSP families unlace supports but had not run on vendor-built code: ESP32 Xtensa,
TI C2000, AVR, PIC18 and dsPIC33. Each was decompiled with the pinned `unlace-bin/unlace-543e581001`:
- `decompile-all --json --max-fn-seconds 30`;
- for flat images, `--raw-image --target --base 0`, seeded with the reset and interrupt vectors
  and re-run with every `sub_XXXX` a run named until no new one appeared. Passing the seeds as
  `--entry` instead of `--addr` gets the same inventory in one run: `--addr` selects, `--entry`
  seeds (#875, item 2; #RAWPR adds a stderr note).

The checks were the exit code, the per-function errors, and `halt_baddata`, bad-instruction,
unimplemented and unmapped-flow markers in the C. A read of the C followed for a sample of
functions in each family.

## Inputs (all downloaded from the vendors' public repositories)

| family | firmware | source | licence |
|---|---|---|---|
| ESP32 (Xtensa LX6) | `esp32_rev300_rom.elf`, the ESP32 mask ROM with symbols | `espressif/esp-rom-elfs` release 20260528 | Apache-2.0 |
| ESP32-S3 (Xtensa LX7) | `esp32s3_rev0_rom.elf` | same | Apache-2.0 |
| TI C2000 (C28x) | `driverlib_eabi.lib` of the F28004x: 33 cl2000 EABI objects | `TexasInstruments/c2000ware-core-sdk` `driverlib/f28004x/driverlib/ccs/Release` | TI BSD (`docs/manifest.html`) |
| AVR (AVR128DB48, AVRxt) | `avr128db48-cnano-opamp-demo-fw.hex` (1 KiB) | `microchip-pic-avr-examples/avr128db48-cnano-opamp-demo-fw-studio` `Release/` | Microchip example licence |
| PIC18 (PIC18F56Q24) | `pic18f56q24-cnano-demo-fw.hex` (7 KiB of code) | `microchip-pic-avr-examples/pic18f56q24-cnano-demo-fw` | Microchip example licence |
| dsPIC33CH | `dspic33ch_totem_pole_single_phase_PFC_HV.hex` | `microchip-pic-avr-examples/dspic33ch-power-totem-pole-demonstration-application-single-phase` `pre_compiled_hex_files/` | Microchip example licence |

The Microchip licence limits use to Microchip products, so none of those images is committed.
The ESP32-S3 `__divsf3` bytes are the only firmware bytes in the tests
(`processors.toml` `xtensa_esp32s3_rom_divsf3`).

## Results

| family | language | functions | errors | bad / unimpl. | wrong C | fixed by / filed as |
|---|---|---|---|---|---|---|
| ESP32 ROM | auto (`Xtensa:LE:32:default`) | 2381 | 1 (`sub_40000400`, the vector page: a 512-byte read past the image) | 1: `tinfl_decompress` reaches 0x4005f33c, inside a `movi`; no branch or jump-table entry names that address. Not explained | `bany`/`bnone`/`ball`/`bnall` printed the target first and a trailing comma; `movi.n -1` printed `0xff` | display fixed in #876 |
| ESP32-S3 ROM | auto | 2329 | 0 | before: 1 (`__divsf3`: `div0.s` undecoded); after: 0 | the FP divide/sqrt steps (`div0.s`, `divn.s`, `maddn.s`, `nexp01.s`, `const.s`, ...) were missing | #876 |
| C2000 driverlib (F28004x) | `tms320c28:LE:32:default` (`--target`; `EM_TI_C2000` was not routed) | 673 listed, 172 real | 0 | 222 unimplemented, 4 `halt_baddata`, all in the 501 `$C$L<n>` local labels cl2000 types `STT_FUNC`; the 172 functions are clean | branches inside each function land at half their address; functions end with "fall-through reached the next function entry" | routing and the label skip in #876 (edit-only); the word-addressed ET_REL layout is #875 |
| AVR128DB48 | `avr8:LE:16:extended` | 5 (vector targets) | 0 | 0 | none. The AVR-Dx I/O map has no register names (`dat_429`, `dat_4000`) | the Intel HEX loader finds no vector entries: #875 |
| PIC18F56Q24 | `PIC-18:LE:24:PIC-18` | 43 | 0 | 0 | each `call` leaves its pushed return address as a stack-slot store (`v4 = 0xe7be;`) | not fixed: no `extrapop`/`stackshift` setting tried removed it |
| dsPIC33CH | `dsPIC33C:LE:24:default` | 44 | 0 | 1 bad-instruction warning in `sub_45c6`; the C shows no `halt_baddata` | crt0's pushes to the constant initial stack print as `dat_180e = ...` (expected for startup code) | not filed |

"functions" counts the decompiled inventory, or for flat images what the seeded crawl reached.

## Spec fixes in #876

- **Xtensa:**
  - `div0.s`, `divn.s`, `recip0.s`, `sqrt0.s`, `rsqrt0.s`, `nexp01.s`, `mksadj.s`, `mkdadj.s`, `addexp.s`,
    `addexpm.s` and `const.s` are added as named ops, with `maddn.s` as a fused multiply-add. The
    encodings come from the HiFi overlays' `xtensa-modules.c` and match their objdump.
  - `ball`/`bany`/`bnall`/`bnone` operand order and the `movi.n` sign are fixed.
  - The HiFi languages are regenerated: HiFi 3 now takes these from the base module. All HiFi
    vectors still match their objdump: 1,829, 2,298, 3,684 and 8,383.
- **Loader (edit-only, not compiled):**
  - `EM_TI_C2000` (141) routes to `tms320c28:LE:32:default`.
  - TI `$C$L<n>` local labels are no longer listed as functions.
