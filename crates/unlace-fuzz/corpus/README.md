# Fuzz corpus seeds

Initial corpus for `unlace-fuzz`. Each seed is a real x86-64 ELF and exercises
a different region of the pipeline:

| seed | exercises |
|------|-----------|
| `seed_empty.elf` | loader and function discovery on a minimal executable (no user code paths) |
| `seed_hello_world.elf` | load, then decompile of a single named function (`main`) |
| `seed_branches.elf` | conditional-branch lifting and CFG construction across several basic blocks |

`cargo test -p unlace-fuzz` runs every seed through the pipeline. A real
fuzzing run (AFL / honggfuzz) should use this directory as `-i` with a separate
`-o` for the output corpus. The seeds are tracked in git so the harness is
reproducible across hosts; they are about 15 KB each to keep clone size sane.
