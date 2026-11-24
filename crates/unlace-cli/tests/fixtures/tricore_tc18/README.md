# TriCore TC1.8 fixtures

For `tricore.tc18.sinc` (language `tricore:LE:32:tc18`). No TriCore assembler
is installed (the TASKING and HighTec toolchains are commercial), so every
word is hand-assembled from the opcode diagrams in Infineon's "TriCore TC1.8
architecture manual volume 2" V1.0.0 (2024-02-14), chapter 3, by `gen.py`
(run `python3 gen.py` here).

| File | What |
|---|---|
| `tricore_tc18.elf` | ELF32 (e_machine 44) with `probe`: every TC1.6.2/TC1.8 form the older TriCore languages do not decode, then `ret` |
| `probe.txt` | the expected `unlace disassemble ... probe` rows (manual vectors) |
| `div64.bin`, `popcnt.bin`, `shuffle.bin`, `itodf.bin`, `max_f.bin`, `lha.bin`, `crc32l.bin`, `madd_df.bin` | raw images (one instruction and `ret`) loaded at 0x1000 |
