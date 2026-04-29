# Test Fixtures

ELF binaries for golden testing of the unlace decompiler pipeline.

## Fixtures

| Fixture | Description | Source | Tests |
|---|---|---|---|
| `hello_world.elf` | Minimal program calling `puts` | `src/hello_world.c` | PLT/GOT resolution, string references, libc call |
| `branches.elf` | if/else chains and switch statement | `src/branches.c` | Branch recovery, switch table reconstruction |
| `loops.elf` | for, while, and do-while loops | `src/loops.c` | Loop detection, back-edge identification |
| `calls.elf` | main calling 9 helper functions | `src/calls.c` | Call graph construction, static function recovery |
| `medium.elf` | ~50 functions (inlined at -O2) | `src/medium.c` | Inlined code recovery, complex CFG, recursion, mixed operations |
| `stripped.elf` | Same as medium, symbols removed | `src/medium.c` | Function boundary detection without symbol hints |
| `empty.elf` | `main` returning 0 | `src/empty.c` | Minimal ELF parsing, trivial function decompilation |

## Build

All fixtures compiled with:

```
gcc -O2 -o fixtures/X.elf fixtures/src/X.c
```

`stripped.elf` is a copy of `medium.elf` processed with `strip -s`.

No debug info (`-g` not used). Dynamically linked, x86-64 Linux ELF.

## Reproduction

```bash
for src in fixtures/src/*.c; do
    name=$(basename "$src" .c)
    gcc -O2 -o "fixtures/${name}.elf" "$src"
done
cp fixtures/medium.elf fixtures/stripped.elf
strip -s fixtures/stripped.elf
```
