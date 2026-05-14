# Chapter 2: Your First Binary

## Compiling a Target

Let's start with the simplest possible program so we can focus on understanding
the decompilation pipeline rather than fighting complex code. Create a file
`hello.c` and compile it with debug info — we'll strip it later in Chapter 4 to
see how unlace handles the harder case.

```bash
$ cat > hello.c << 'EOF'
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc > 1) {
        printf("Hello, %s!\n", argv[1]);
    } else {
        puts("Hello, world!");
    }
    return 0;
}
EOF
$ gcc -O1 -g -o hello hello.c
```

The `-O1` flag gives us a realistic optimization level — enough to see register
allocation and basic block reordering, but not so aggressive that the code
becomes unrecognizable. The `-g` flag produces DWARF debug info that unlace will
use to cross-check its type recovery against ground truth.

## Running the Decompiler

Point unlace at the binary and ask it to decompile `main`:

```bash
$ unlace decompile ./hello --function main
```

You should see output like:

```c
// Function: main
// Address: 0x401136
// Source: hello.c:3 (from DWARF)
int main(int argc, char **argv) {
    if (argc > 1) {
        printf("Hello, %s!\n", *(argv + 8));
    } else {
        puts("Hello, world!");
    }
    return 0;
}
```

The output is remarkably close to the original source. Unlace recovered the
`if/else` structure from the CFG, resolved the string constants from the
`.rodata` section, and — because DWARF info is present — used the original
variable names and types. Notice `*(argv + 8)` instead of `argv[1]`; the
pointer arithmetic normalization pass converts this when confidence is high
enough, but at `-O1` the compiler's offset calculation sometimes remains as an
explicit add.

## What Happened Under the Hood

The decompilation proceeded through five major phases: **loading** (ELF
parsing, section mapping, symbol table extraction), **lifting** (x86-64
instructions → unlace IR), **optimization** (50+ passes: dead store
elimination, copy propagation, constant folding, etc.), **structuring**
(converting the CFG into structured if/else/while/for constructs), and
**emission** (printing C pseudocode with annotation comments). Each phase
logged detailed trace output that you can inspect by setting `UNLACE_LOG=debug`.

→ Next: [Understanding the Output](./03-understanding-output.md)
