# Runtime library signatures (x86-64 Windows, mingw-w64)

IDASGN v10 files made with `unlace siggen` from the mingw-w64 GCC 15
toolchain (`/usr/lib/mingw64-toolchain`, `x86_64-w64-mingw32-gcc 15.2.0`).
They are compiled into `unlace` (`crates/unlace-flirt/src/bundled.rs`) and
applied to every x86-64 PE that is not MSVC-linked (no Rich header) or
.NET. A PE keeps no `.comment`; the toolchain is read from the `GCC: (GNU)
15.2.0` idents and the `Mingw-w64 runtime failure` message in `.rdata`.

| file | made from |
|---|---|
| `mingw-w64-gcc15-x86_64.sig` | mingw-w64 CRT: `libmingwex.a`, `libmingw32.a`, `libmsvcrt.a`, `libkernel32.a`, `crt2.o`, `crtbegin.o`, `crtend.o` |
| `libgcc-15-mingw-x86_64.sig` | GCC 15.2: `libgcc.a`, `libgcc_eh.a` |
| `libstdc++-15-mingw-x86_64.sig` | GCC 15.2: `libstdc++.a` |

Regenerate, for example:

```bash
L=$(dirname $(x86_64-w64-mingw32-gcc -print-file-name=libmingwex.a))
G=$(dirname $(x86_64-w64-mingw32-gcc -print-file-name=libgcc.a))
unlace siggen $L/libmingwex.a $L/libmingw32.a $L/libmsvcrt.a $L/libkernel32.a \
    $L/crt2.o $G/crtbegin.o $G/crtend.o \
    -o mingw-w64-gcc15-x86_64.sig --name 'mingw-w64 runtime (GCC 15) x86-64'
unlace siggen $G/libgcc.a $G/libgcc_eh.a \
    -o libgcc-15-mingw-x86_64.sig --name 'GCC 15 runtime (libgcc) mingw-w64 x86-64'
```

COFF symbols carry no size, so `siggen` runs each function to the next
symbol of its section (or the section end).

No MSVC CRT signature is bundled. An MSVC image's Rich header still gives
the toolset (`MSVC 19.29.30133` for VS 2019 16.11), which the selection
reports as a missing release.
