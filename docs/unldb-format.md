# `.unldb` Database Format Specification

The `.unldb` file is unlace's project database — it stores the user's
analysis state (renames, comments, types, bookmarks, patches) bound to a
specific input binary by SHA-256.

## File layout

```
offset  size   field
0       8      magic "UNLDB\0\0\0"
8       4      format_version u32 (little-endian)
12      4      unlace_version_len u32
16      N      unlace_version bytes (UTF-8 string, e.g. "0.1.0")
16+N    32     original_binary_sha256
48+N    -      sections... (until EOF)
```

### Section layout

Each section is self-describing:

```
4   name_len u32
N   name bytes (UTF-8)
8   payload_len u64 (compressed size)
M   zstd-compressed bincode payload (M = payload_len bytes)
```

Unknown sections are silently skipped during load — this gives forward
compatibility for newer unlace versions adding sections that older
versions ignore.

## Defined sections (v1)

| Section name   | Payload type                                  |
|----------------|-----------------------------------------------|
| `annotations`  | `unlace_session::Annotations`                 |
| `selection`    | `unlace_session::Selection`                   |

## Reserved sections (forward-compatible)

| Section name      | Purpose                                      |
|-------------------|----------------------------------------------|
| `ssa_functions`   | Per-function lazy SSA cache                  |
| `analysis_cache`  | KnownBits / MemorySSA / SCEV facts           |
| `hir_cache`       | Structured HIR output cache                  |
| `xrefs`           | Cross-reference index                        |
| `strings`         | Recovered string literals                    |
| `flirt_matches`   | FLIRT signature matches with confidence      |
| `til_imports`     | Imported type-library identifiers            |

## Migration policy

The `format_version` field uses semantic increments:

- A bump means a backward-incompatible change (struct fields renamed,
  serialization framing changed, magic redefined).
- Forward additions (new section names, new struct fields with
  `#[serde(default)]`) do NOT bump the version.
- When reading a file with `format_version > CURRENT_VERSION`, unlace
  refuses to load and prints a clear error.
- When reading a file with `format_version < CURRENT_VERSION`, unlace
  runs the registered migration chain to upgrade in memory.

## Binary SHA binding

On save, the SHA-256 of the original binary is written into the header.
On load, unlace verifies the SHA matches the currently-loaded binary
before applying any annotations. If they don't match (e.g., the user
overwrote the binary), the load is rejected with a clear error pointing
at both SHAs.

## Inspection

`unlace db inspect <path>` prints the header + section sizes + SHA
verification status. Used for support triage when a user's .unldb won't
load.

## Reference implementation

`crates/unlace-session/src/db.rs` is the authoritative implementation.
See its `parse()`, `save_to()`, `load_from()`, and `inspect()` functions.
