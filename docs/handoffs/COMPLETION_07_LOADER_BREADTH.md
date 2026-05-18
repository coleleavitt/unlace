# Completion §7 — Loader Breadth (Firmware + Managed-VM Formats)

Self-contained handoff. Each format gets its own sub-section with
files, types, and tests. Designed so a future session can pick up any
one slice independently.

## Scope

- §7.1 Intel HEX
- §7.2 Motorola S-record
- §7.3 ESP32 firmware image
- §7.4 STM32 vendor binary (DFU + raw bin variants)
- §7.5 UEFI module (PE32+ TE-image embedded variant)
- §7.6 iOS IMG4 ASN.1 envelope (parser exists; consumer wiring is what
  remains)
- §7.7 Android boot/vendor image
- §7.8 Android `dex`/`oat`/`art`
- §7.9 Java `.class` / `.jar`
- §7.10 .NET CIL (`.exe`/`.dll` with `IMAGE_COR20_HEADER`)
- §7.11 Python `.pyc` (marshal format)
- §7.12 Lua bytecode (`luac` output)

Each format ships:

- Parser → `LoadedX { sections, entry, symbols, ... }`.
- `BinaryImage` projection so the rest of the pipeline sees a unified
  shape.
- Round-trip test fixture committed to `tests/loaders/<format>/`.
- Public exports through `unlace-loader/src/lib.rs`.

Out of scope: lifters for managed-VM bytecode (`dex`/`oat`/CIL/`.pyc`/Lua).
The parser surfaces sections + entry, downstream lifting is a separate
multi-week project.

---

## §7.1 Intel HEX (1 day)

**Files:**
- `crates/unlace-loader/src/intel_hex.rs` (already exists; verify).
- `crates/unlace-loader/src/lib.rs` (re-export check).

**Goal:** the existing `load_intel_hex` produces an `IntelHexImage`
with sparse byte ranges. Add a converter
`pub fn intel_hex_to_binary_image(img: &IntelHexImage, arch: ArchId)
-> BinaryImage` that flattens the sparse map into one BSS-padded
`Section`.

**Tests:**
- `intel_hex_round_trips_with_known_arch` — feed an
  `:020000040000FA :100000000001020304...` stream, project to
  `BinaryImage`, assert `.text` section bytes + entry.

## §7.2 Motorola S-record (1 day)

Same pattern as §7.1. `load_s_record` exists; add
`pub fn s_record_to_binary_image(img: &SRecordImage, arch: ArchId)
-> BinaryImage`.

**Test:**
- `s_record_round_trips_S1_S2_S3_records`.

## §7.3 ESP32 firmware image (2 days)

Espressif's image format:
- 8-byte header (`magic=0xE9`, segment_count, spi_mode, spi_speed_size,
  entry_addr `u32`).
- N segments, each `(load_addr u32, length u32, data[length])`.
- Trailing checksum byte.

**File:** new `crates/unlace-loader/src/esp32.rs`.

**Types:**

```rust
pub struct Esp32Header {
    pub segment_count: u8,
    pub entry: u32,
    pub spi_mode: u8,
    pub spi_speed_size: u8,
}

pub struct Esp32Segment {
    pub load_addr: u32,
    pub data: Vec<u8>,
}

pub struct Esp32Image {
    pub header: Esp32Header,
    pub segments: Vec<Esp32Segment>,
}

pub fn parse_esp32(bytes: &[u8]) -> Option<Esp32Image>;
pub fn esp32_to_binary_image(img: &Esp32Image) -> BinaryImage;
```

**Tests:**
- `esp32_magic_recognised`.
- `esp32_segments_round_trip`.
- `esp32_to_binary_image_sets_xtensa_arch` (the ESP32 is Xtensa LX6).

## §7.4 STM32 vendor binary (1 day)

Two shapes:
- Raw .bin with implicit `0x08000000` flash base.
- DFU file: 11-byte prefix + body + 16-byte DFU suffix.

**File:** new `crates/unlace-loader/src/stm32.rs`.

```rust
pub fn parse_stm32_bin(bytes: &[u8]) -> Stm32Image;
pub fn parse_stm32_dfu(bytes: &[u8]) -> Option<Stm32Image>;
pub fn stm32_to_binary_image(img: &Stm32Image, arch: ArchId) -> BinaryImage;
```

**Tests:**
- `stm32_dfu_recognises_suffix_magic`.
- `stm32_bin_loads_at_default_flash_base`.

## §7.5 UEFI module (2 days)

UEFI .efi files are PE32+ images with `Subsystem` set to one of
`EFI_*` values. The existing `PeLoader` already accepts them; this
slice adds:

1. UEFI-subsystem detection on the parsed image
   (`BinaryImage.is_uefi: bool`).
2. TE-image (`TE\0\0` magic) loader — a stripped PE used in early-stage
   UEFI for size. The TE header is at offset 0; map to PE-equivalent
   sections.

**Files:** extend `crates/unlace-loader/src/pe.rs` + new
`crates/unlace-loader/src/uefi_te.rs`.

**Tests:**
- `pe_loader_flags_uefi_subsystem`.
- `te_image_loads_as_binary_image`.

## §7.6 iOS IMG4 ASN.1 envelope wiring (1 day)

`crates/unlace-loader/src/ios_img4.rs::parse_img4` exists. The
consumer-side wiring is what's open:

1. Wrap `parse_img4` in a `BinaryImage` projection that surfaces the
   embedded payload as a single section + records the `manifest_hash`
   on a new `BinaryImage::img4_manifest_hash` field.
2. Detect IMG4 magic in the top-level `Loader` dispatcher (currently
   only handles ELF/Mach-O/PE).

**Tests:**
- `img4_to_binary_image_exposes_payload`.
- `img4_manifest_hash_surfaces_when_present`.

## §7.7 Android boot/vendor image (2 days)

Android `boot.img` v0–v4 layout:
- Magic `"ANDROID!"` at offset 0.
- Per-version header with kernel/ramdisk/second/dtb offsets + sizes.
- Page-aligned payloads.

**File:** new `crates/unlace-loader/src/android_boot.rs`.

```rust
pub enum AndroidBootKind { V0, V1, V2, V3, V4 }

pub struct AndroidBootImage {
    pub kind: AndroidBootKind,
    pub kernel: Vec<u8>,
    pub ramdisk: Vec<u8>,
    pub second: Vec<u8>,
    pub dtb: Vec<u8>,
    pub cmdline: String,
}

pub fn parse_android_boot(bytes: &[u8]) -> Option<AndroidBootImage>;
```

**Tests:**
- `android_boot_v0_layout`.
- `android_boot_v3_layout`.

## §7.8 Android dex/oat/art (2 days; parsers exist, wire BinaryImage)

`android_oat.rs`, `android_dex.rs`, `android_vdex.rs`, `android_art.rs`
already exist as parsers. This slice wires their outputs into
`BinaryImage` shapes so downstream tools see a unified entry point:

- DEX: methods become symbols at virtual address = method offset.
- OAT: native code section + DEX bytecode appears as two sections.
- ART: pre-compiled image with class roots; surface the boot image
  table as a "globals" section.

**Tests:**
- `dex_methods_become_symbols`.
- `oat_native_section_carries_text_flag`.

## §7.9 Java `.class` / `.jar` (2 days)

`java_class.rs` parses individual `.class` files. This slice:

1. Add a `.jar` reader (ZIP-format unpack; `flate2` is already a
   workspace transitive dep).
2. Project the class file's methods → BinaryImage symbols.
3. Decode the constant-pool string entries the unlace structure layer
   needs.

**Tests:**
- `jar_reader_lists_inner_class_files`.
- `class_methods_become_symbols`.

## §7.10 .NET CIL (3–4 days)

CLR-Header detection inside a PE32+ image (`IMAGE_DIRECTORY_ENTRY_COMHEADER`):
1. Parse `IMAGE_COR20_HEADER`.
2. Walk metadata tables (`#~` stream).
3. Surface method-defs as symbols with their CIL RVA.

**File:** new `crates/unlace-loader/src/cil.rs`.

**Tests:**
- `cil_recognises_clr_header`.
- `cil_method_table_yields_symbols`.

## §7.11 Python `.pyc` (1–2 days)

`.pyc` format (CPython 3.7+):
- 4-byte magic (varies per Python version; table in `Lib/importlib/_bootstrap_external.py`).
- Bit-flag word, source size, mtime — total 16 bytes header.
- Marshalled code object.

**File:** new `crates/unlace-loader/src/pyc.rs`.

```rust
pub struct PycHeader {
    pub magic: [u8; 4],
    pub python_version: Option<(u8, u8)>,
    pub mtime: u32,
    pub source_size: u32,
}

pub fn parse_pyc(bytes: &[u8]) -> Option<PycHeader>;
```

Marshal-format decoding is left to a follow-up; this slice covers
header + version detection.

**Tests:**
- `pyc_python_3_11_magic_recognised`.
- `pyc_short_buffer_returns_none`.

## §7.12 Lua bytecode (1 day)

`luac` output:
- 4-byte magic `\x1bLua`.
- Version byte (5.1=`0x51`, 5.2=`0x52`, 5.3=`0x53`, 5.4=`0x54`).
- Endianness, sizes byte vector, integer/double sample values.
- Top-level `Proto` with nested protos.

**File:** new `crates/unlace-loader/src/lua_bytecode.rs`.

```rust
pub struct LuaBytecode {
    pub version: u8,
    pub little_endian: bool,
    pub top_proto: LuaProto,
}

pub fn parse_lua_bytecode(bytes: &[u8]) -> Option<LuaBytecode>;
```

**Tests:**
- `lua_5_3_magic_and_version_recognised`.

---

## Definition of done (per sub-section)

- Parser lives in the workspace.
- `BinaryImage` projection helper exists (where applicable).
- ≥ 2 unit tests per format.
- Public surface re-exported through `unlace-loader/src/lib.rs`.
- `docs/status.md` loader-format table row added.

## Estimated effort

- §7.1, §7.2, §7.6, §7.12: 1 day each.
- §7.3, §7.4, §7.5, §7.7, §7.8, §7.9, §7.11: 1–2 days each.
- §7.10 CIL: 3–4 days (metadata-table walker is non-trivial).

Total: 14–18 days of focused work.
