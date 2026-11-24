# ppc_spe2 fixtures

- `spe2_probe.o`: `powerpc-elf-as -mspe2` of one `.long` per probe word (three per SPE2/EFS2
  opcode-table row, operand fields random, invalid encodings dropped) in a function `probe`.
  `probe.txt` is unlace's disassembly of it; every row agrees with
  `powerpc-elf-objdump -d -M spe2 -M efs2` (binutils 2.43.1) after spacing and hex/decimal
  immediates are normalised.
- `spe2.bin`: raw image (base 0x1000) of `evlbbsplatbx r3,r3,r4; evaddd r3,r3,r5; blr`
  (`1063231e 10632c90 4e800020`).
