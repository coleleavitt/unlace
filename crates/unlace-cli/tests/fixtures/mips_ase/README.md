# mips_ase fixtures

- `mips3d_probe.o`: `mips-elf-as -EB -march=mips64r2 -mabi=32 -mfp64 -mips3d` of three `.word`s
  per MIPS-3D row of the binutils MIPS opcode table (operand fields random, a `nop` after each
  branch) in a function `probe`; `mips3d_probe.txt` is unlace's disassembly with
  `--target MIPS:BE:64:64-32addr`.
- `smartmips_probe.o`: `mips-elf-as -EB -march=mips32r2 -msmartmips`, the same for the SmartMIPS
  rows (ror/rorv excluded: MIPS32R2 rotates); `smartmips_probe.txt` uses `MIPS:BE:32:default`.
- Both listings agree with `mips-elf-objdump -d` (binutils 2.43.1) on every row after case,
  `$`, spacing and branch-target notation are normalised.
- `smartmips.bin`: raw (base 0x1000) `lwxs $2,$5($4); jr $31; nop` (`70851088 03e00008 00000000`).
- `mips3d.bin`: raw (base 0x1000) `recip2.d $f0,$f12,$f13; jr $31; nop` (`462d601c 03e00008 00000000`).
