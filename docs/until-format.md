# `.until` Format Specification

(Type library — Unlace's TIL-equivalent.)

The `.until` file is unlace's portable type library format. It stores
function prototypes, struct/union/enum definitions, and platform/ABI
metadata so they can be applied to any binary.

## Status

The format and tooling are **scoped for Batch 31** in `plan.md` and not
yet implemented. This document specifies the design ahead of time so the
implementation can be a faithful materialization.

## File layout

```
offset  size   field
0       8      magic "UNTIL\0\0\0"
8       4      format_version u32 (little-endian)
12      4      platform_str_len u32
16      N      platform_str bytes (UTF-8, e.g. "linux-x86_64")
16+N    -      sections... (until EOF)
```

### Section layout

Each section follows the same self-describing format as `.unldb`:

```
4   name_len u32
N   name bytes (UTF-8)
8   payload_len u64 (compressed size)
M   zstd-compressed bincode payload
```

## Defined sections (v1)

| Section            | Contents                                |
|--------------------|------------------------------------------|
| `typedef_table`    | `BTreeMap<String, TInfo>`                |
| `struct_table`     | `BTreeMap<String, RecordLayoutFacts>`    |
| `union_table`      | Same shape as struct_table               |
| `enum_table`       | `BTreeMap<String, Vec<(String, i64)>>`   |
| `fn_prototype_table` | `BTreeMap<String, FnPrototype>`        |
| `macro_table`      | `BTreeMap<String, String>`               |

## Reserved sections (forward-compatible)

| Section            | Purpose                                    |
|--------------------|--------------------------------------------|
| `vtable_layouts`   | C++ vtable structure for runtime classes   |
| `objc_classes`     | Objective-C class metadata                 |
| `error_codes`      | Errno → string maps for libc / win32       |
| `ioctl_codes`      | IOCTL number → struct interpretation       |
| `format_strings`   | Common printf format → arg-list checker    |

## Shipped TILs

Per `plan.md` Batch 31, the initial shipped TIL set covers:

| File                                | Contents                       |
|-------------------------------------|--------------------------------|
| `til-libs/linux/libc-2.39.until`    | glibc 2.39                     |
| `til-libs/linux/posix.until`        | POSIX (unistd, pthread, etc.)  |
| `til-libs/windows/win32.until`      | windows.h + winsock2 + bcrypt  |
| `til-libs/windows/ucrt.until`       | UCRT (Win10+)                  |
| `til-libs/objc/runtime.until`       | Objective-C 2.0 runtime        |
| `til-libs/cxx/libstdcxx.until`      | libstdc++ subset               |
| `til-libs/cxx/libcxx.until`         | libc++ subset                  |
| `til-libs/sdk/openssl-3.until`      | OpenSSL 3.x                    |
| `til-libs/sdk/zlib.until`           | zlib                           |
| `til-libs/sdk/libcurl.until`        | libcurl                        |
| `til-libs/sdk/sqlite3.until`        | SQLite                         |

Total target size: ≤ 30 MB compressed.

## Building a TIL

```
unlace til build /usr/include/stdio.h -o libc.until
unlace til build --recursive /usr/include/openssl -o openssl-3.until
```

The builder uses libclang (via `unlace-passes::abi_layout`) to parse
headers and compute record layouts per target ABI.

## Auto-selection

The unlace pipeline detects:

1. **OS** — from binary format (ELF=Linux, PE=Windows, Mach-O=macOS/iOS)
2. **Compiler** — from build IDs, version info, FLIRT matches
3. **Imports** — names like `CreateFileW` → win32, `pthread_create` → POSIX

…then loads matching TILs automatically. Users can override with
`unlace decompile <bin> --til <path1.until>,<path2.until>`.

## Reference

- IDA's `.til` format isn't binary-compatible (it's proprietary), but
  the public C++ SDK header (`typeinf.hpp` in
  `research/ida-hexrays-docs/sdk/include/`) documents the underlying
  `tinfo_t` shape that `.until` mirrors.
- `references/ida/plugins/idaclang/all/` (303 decompiled functions)
  shows IDA's actual header-to-TIL pipeline using libclang.
