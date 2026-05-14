# Chapter 2: Your First Decompilation

## A Simple Example

Let's decompile a small C program. First, compile a test binary:

```bash
$ cat > hello.c << 'EOF'
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(int argc, char **argv) {
    int result = add(argc, 42);
    printf("Result: %d\n", result);
    return 0;
}
EOF
$ gcc -O2 -o hello hello.c
```

Now decompile it:

```bash
$ unlace decompile ./hello --function main
```

Expected output:

```c
int main(int argc, char **argv) {
    int v0 = add(argc, 42);
    printf("Result: %d\n", v0);
    return 0;
}
```

## Understanding What Happened

unlace performed the following steps:

1. **Load**: Parsed the ELF binary, identified sections and symbols
2. **Discover**: Found `main` in the symbol table at its address
3. **Lift**: Converted x86-64 machine code to the unlace IR (~70 opcodes)
4. **SSA**: Built Single Static Assignment form from the IR
5. **Optimize**: Ran 50+ passes (constant folding, dead code elimination, etc.)
6. **Structure**: Recovered if/else, loops, and switch from the CFG
7. **Print**: Emitted C pseudocode with recovered types and names

## Emit Formats

unlace can output in several formats:

```bash
# C pseudocode (default)
$ unlace decompile ./hello --function main --emit c

# Raw IR (for debugging)
$ unlace decompile ./hello --function main --emit ir

# DOT graph (for visualization)
$ unlace decompile ./hello --function main --emit dot
$ dot -Tpng output.dot -o cfg.png
```

## Specifying Architecture

Usually unlace auto-detects the architecture from the binary headers.
Override when needed:

```bash
$ unlace decompile ./firmware.bin --arch arm --function 0x8000
```

Supported architectures: `x86`, `x86_64`, `aarch64`, `arm`, `riscv64`,
`mips`, `mips64`, `ppc`, `ppc64`, `v850`, `arc`.

## Next Steps

→ [Chapter 3: Understanding the Output](./03-understanding-output.md)
