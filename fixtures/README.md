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
| `debug_calls.elf` | `calls.c` compiled with `-g -O0` | `src/calls.c` | DWARF debug info import, function/param/type extraction |
| `debug_structs.elf` | Nested structs with `-g -O1` | `src/debug_structs.c` | DWARF struct/member recovery, nested type parsing |
| `debug_hello.elf` | `hello_world.c` with `-g -O1` | `src/hello_world.c` | DWARF basic type/function info on minimal binary |
| `debug_branches.elf` | `branches.c` with `-g -O0` | `src/branches.c` | DWARF param/local recovery oracle for the branches gap fixture |
| `debug_loops.elf` | `loops.c` with `-g -O0` | `src/loops.c` | DWARF param/local recovery oracle for the loops gap fixture |
| `debug_medium.elf` | `medium.c` with `-g -O0` | `src/medium.c` | DWARF param/local recovery oracle for the medium gap fixture |
| `debug_switch_table.elf` | `switch_table.c` with `-g -O0` | `src/switch_table.c` | DWARF param/local recovery oracle for the switch gap fixture |
| `debug_x87_math.elf` | `x87_math.c` with `-g -O0` | `src/x87_math.c` | DWARF param/local recovery oracle for the x87 gap fixture |
| `debug_cpp_exceptions.elf` | `cpp_exceptions.cpp` with `-g -O0` | `src/cpp_exceptions.cpp` | DWARF type/field recovery oracle for the C++ exceptions gap fixture |
| `debug_cpp_rtti.elf` | `cpp_rtti.cpp` with `-g -O0` | `src/cpp_rtti.cpp` | DWARF type/field recovery oracle for the C++ RTTI gap fixture |
| `debug_cpp_vtable.elf` | `cpp_vtable.cpp` with `-g -O0` | `src/cpp_vtable.cpp` | DWARF type/field recovery oracle for the C++ vtable gap fixture |

## Build

All fixtures compiled with:

```
gcc -O2 -o fixtures/X.elf fixtures/src/X.c
```

`stripped.elf` is a copy of `medium.elf` processed with `strip -s`.

No debug info (`-g` not used). Dynamically linked, x86-64 Linux ELF.

Exception: `debug_calls.elf` is compiled with `gcc -g -O0` for DWARF testing.
`debug_structs.elf` and `debug_hello.elf` are compiled with `gcc -g -O1` for DWARF struct/type testing.

The `debug_<name>.elf` companions for the gap fixtures (branches, loops, medium,
switch_table, x87_math, cpp_exceptions, cpp_rtti, cpp_vtable) are compiled with
`-g -O0` from the same sources as their stripped `-O2` counterparts. They carry
real DWARF so `xtask type-recovery-report` can verify param/local/type-name
recovery from a debug oracle instead of guessing from source. Reproduce with:

```bash
for name in branches loops medium switch_table x87_math; do
    gcc -g -O0 -o "fixtures/debug_${name}.elf" "fixtures/src/${name}.c"
done
for name in cpp_exceptions cpp_rtti cpp_vtable; do
    g++ -g -O0 -o "fixtures/debug_${name}.elf" "fixtures/src/${name}.cpp"
done
```

## Reproduction

```bash
for src in fixtures/src/*.c; do
    name=$(basename "$src" .c)
    gcc -O2 -o "fixtures/${name}.elf" "$src"
done
cp fixtures/medium.elf fixtures/stripped.elf
strip -s fixtures/stripped.elf
```
