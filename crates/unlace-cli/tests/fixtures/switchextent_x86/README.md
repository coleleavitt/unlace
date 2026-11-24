# Unchecked byte-selector jump tables (x86-64)

`tables.s` reproduces csplit's regcomp dispatch (`bytesel`: a byte selector with no range
check whose table is followed by the function's second table) and an OCaml exhaustive match
(`lastsel`: the function's last table, followed by `nextfn`'s). Built with binutils:

```sh
as -o tables.o tables.s
ld -e bytesel -o tables.elf tables.o
```
