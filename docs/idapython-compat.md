# IDAPython Compatibility Matrix

`unlace-idapython` re-implements the most-used IDAPython modules on top
of unlace's domain types. This document tracks coverage.

## Status legend

- ✅ **Supported** — function exists and matches IDA semantics for the
  common case.
- 🟡 **Partial** — function exists but behavior is a stub or differs
  from IDA in edge cases (documented in the entry).
- ❌ **Unsupported** — returns `NotImplementedError` or always-empty
  result. Tracked here as a future TODO.

## Modules

### `idc` (legacy compatibility API)

| API                   | Status | Notes                       |
|-----------------------|--------|-----------------------------|
| `get_func_name`       | ✅     |                             |
| `set_name`            | ✅     |                             |
| `get_segm_name`       | ✅     |                             |
| `get_bytes`           | ✅     |                             |
| `set_cmt` / `get_cmt` | ✅     | Repeatable flag respected   |
| `SetType`             | ✅     | Stored as opaque declaration |
| `get_inf_attr`        | 🟡     | image_base / min_ea / max_ea only |
| `MakeFunction`        | ❌     | TODO                        |
| `get_func_off_str`    | ❌     | TODO                        |

### `idautils`

| API           | Status | Notes                              |
|---------------|--------|------------------------------------|
| `Functions`   | ✅     | Range filter supported             |
| `Segments`    | ✅     |                                    |
| `Heads`       | 🟡     | Yields every address in range      |
| `XrefsTo`     | 🟡     | Empty until xref tables wired      |
| `XrefsFrom`   | 🟡     | Empty until xref tables wired      |

### `idaapi`

| API                | Status | Notes                              |
|--------------------|--------|------------------------------------|
| `get_imagebase`    | ✅     |                                    |
| `get_imagename`    | ✅     |                                    |
| `next_addr`        | 🟡     | Returns ea+1; doesn't skip data    |
| `prev_addr`        | 🟡     | Returns ea-1                       |
| `decompile`        | 🟡     | Stub — full ctree in B27.6 follow-up |

### `ida_bytes`

| API                    | Status | Notes  |
|------------------------|--------|--------|
| `get_byte`             | ✅     |        |
| `get_word`             | ✅     |        |
| `get_dword`            | ✅     |        |
| `get_qword`            | ✅     |        |
| `get_bytes`            | ✅     |        |
| `get_strlit_contents`  | ✅     | UTF-8 C strings |
| `put_byte/word/dword`  | ❌     | TODO   |

### `ida_funcs`

| API              | Status |
|------------------|--------|
| `get_func_qty`   | ✅     |
| `getn_func`      | ✅     |
| `get_func`       | ✅     |
| `get_func_name`  | ✅     |
| `add_func`       | ❌     |
| `del_func`       | ❌     |

### `ida_name`

| API         | Status |
|-------------|--------|
| `get_name`  | ✅     |
| `set_name`  | ✅     |

### `ida_xref`

| API                       | Status |
|---------------------------|--------|
| `get_first_cref_to`       | ❌     |
| `get_next_cref_to`        | ❌     |
| `get_first_cref_from`     | ❌     |
| `get_first_dref_to`       | ❌     |

All stubbed until xref wiring lands.

### `ida_segment`

| API               | Status |
|-------------------|--------|
| `getseg`          | ✅     |
| `get_segm_name`   | ✅     |

### `ida_typeinf`

| API             | Status |
|-----------------|--------|
| `parse_decl`    | 🟡     | Opaque storage; full parsing in B31 |
| `apply_tinfo`   | ✅     |
| `tinfo_t.get_type_str` | ✅ |

### `ida_hexrays`

| API                       | Status |
|---------------------------|--------|
| `init_hexrays_plugin`     | ✅     |
| `decompile`               | 🟡     | Full ctree pending |
| `cfunc_t.as_text`         | ✅     |

## How to add an API

1. Pick the right module (`crates/unlace-idapython/src/<module>.rs`).
2. Add the function, calling `coverage::mark_implemented(...)` first.
3. Implement on top of `Session` (avoid direct loader access).
4. Add a unit test in the same file.
5. Update this table.

## Coverage by Igor's Tip-of-the-Week season

IDAPython API coverage roughly tracks the example scripts shipped with
the IDA SDK. Run `unlace py --check-coverage <script.py>` to see which
APIs a given script touches and whether unlace implements them.
