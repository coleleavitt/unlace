# Fuzz corpus seeds

Initial corpus for `unlace-fuzz`. Each seed is a real x86-64 ELF copied
from the project's `fixtures/` tree and exercises a different region of
the pipeline:

| seed | exercises |
|------|-----------|
| `seed_empty.elf` | loader + function discovery on a minimal executable (no user code paths) |
| `seed_hello_world.elf` | loader → lift → SSA → passes → c_printer over a single named function (`main`) |
| `seed_branches.elf` | conditional-branch lifting and CFG construction across multiple basic blocks |

A real fuzzing run (AFL / honggfuzz) should be pointed at this
directory as `-i`, with a separate `-o` for the output corpus. The
seeds are tracked in git so the harness is reproducible across hosts;
they are intentionally minimal (≈15 KB each) to keep clone size sane.
