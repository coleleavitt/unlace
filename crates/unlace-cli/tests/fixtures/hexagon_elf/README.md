# Hexagon ELF fixture

`funcs.o` is `funcs.c` built with zig 0.15.2: `zig cc -target hexagon-freestanding -O2 -c funcs.c -o funcs.o`. Every function's packets lift through SLEIGH `crossbuild` (#679), and the ELF machine (`EM_HEXAGON`) selects `Hexagon:LE:32:default` with no `--target`.
