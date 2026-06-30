# Completion Plan

The four open subsystems from the previous turn's honest list. Each section is
self-contained and ordered by dependency — start with the part marked **Phase
1**, finish, then move to **Phase 2**. The plan lists exact files, function
signatures, and test names so the work is mechanical to execute.

**In scope:**

1. Full PDB type-index resolution end-to-end.
2. dyld shared-cache full image reassembly.
3. Remaining stub-tier lifter completions (~22 architectures).
4. Remaining IDA `cot_*` opcodes (42 of 69 outstanding).

**Out of scope (do not touch):**

- Frontend productization.
- Reproducible signed releases + CI signing pipeline.

---

## 1. Full PDB Type-Index Resolution End-to-End

### What exists today

- `crates/unlace-loader/src/pdb_types.rs::walk_tpi` returns
  `Vec<PdbType>` with `PdbField { name, offset, field_type: u32 }`. The
  `field_type` is the CodeView type-index (TI) but is currently dropped.
- `pdb_type_to_ir_type` lowers struct/class/union to `Type::Struct` /
  `Type::Union` with every field's type stamped as
  `Type::Primitive(PrimitiveType::Unknown)`.
- `apply_field_type_map` swaps `Unknown` fields when handed a
  `BTreeMap<(struct_name, field_name), Type>`.
- `PdbTypes::by_index` exists on the struct but is currently only
  populated by the high-level `import_pdb_types` (which uses the
  `pdb` crate). The low-level `walk_tpi` does not feed it.

### Goal

Every `Type::Struct` / `Type::Union` / `Type::Ptr` / `Type::Array` /
`Type::FuncPtr` lowered from a PDB has every member field's type
**resolved**, not `Unknown`. Recovered PDB types land in
`SsaFunction::composite_var_types` for any SSA varnode whose access
pattern matches a recovered struct.

### Phase 1 — Primitive TI table

CodeView reserves TIs `0x0000..=0x0FFF` for built-in primitives. Build a
const lookup table and expose a helper.

**File:** `crates/unlace-loader/src/pdb_types.rs`

**Add:**

```rust
/// Resolve a CodeView primitive type index (TI < 0x1000) into an
/// `unlace_ir::types::Type`. Returns `None` for non-primitive indices.
pub fn primitive_ti_to_type(ti: u32) -> Option<Type> {
    // Standard CodeView primitive map. The width fields come from
    // each TI's "size" nibble.
    Some(match ti {
        0x0000 => Type::Primitive(PrimitiveType::Unknown), // T_NOTYPE
        0x0003 => Type::Primitive(PrimitiveType::Void),
        0x0030 => Type::Primitive(PrimitiveType::Bool),
        // Signed integers
        0x0010 | 0x0068 => Type::Primitive(PrimitiveType::Int(1)),
        0x0011 | 0x0069 => Type::Primitive(PrimitiveType::Int(2)),
        0x0012 | 0x0074 => Type::Primitive(PrimitiveType::Int(4)),
        0x0013 | 0x0076 => Type::Primitive(PrimitiveType::Int(8)),
        // Unsigned integers
        0x0020 | 0x0070 => Type::Primitive(PrimitiveType::UnsignedInt(1)),
        0x0021 | 0x0071 => Type::Primitive(PrimitiveType::UnsignedInt(2)),
        0x0022 | 0x0075 => Type::Primitive(PrimitiveType::UnsignedInt(4)),
        0x0023 | 0x0077 => Type::Primitive(PrimitiveType::UnsignedInt(8)),
        // Floats
        0x0040 => Type::Primitive(PrimitiveType::Float),
        0x0041 => Type::Primitive(PrimitiveType::Double),
        // Char family
        0x0070 => Type::Primitive(PrimitiveType::Int(1)),
        // Near pointer (16-bit segment) treated as Ptr<Void>; rarely
        // seen in modern PDBs but kept here for completeness.
        0x0103 => Type::Ptr(Box::new(Type::Primitive(PrimitiveType::Void))),
        _ if (ti & 0xFF00) == 0x0400 => {
            // Pointer-to-primitive: low byte is the pointee TI.
            let pointee = ti & 0xFF;
            return primitive_ti_to_type(pointee).map(|t| Type::Ptr(Box::new(t)));
        }
        _ => return None,
    })
}
```

**Tests (add to `mod tests`):**

```rust
#[test]
fn primitive_ti_lookup_for_common_widths() {
    assert!(matches!(primitive_ti_to_type(0x0074),
        Some(Type::Primitive(PrimitiveType::Int(4)))));
    assert!(matches!(primitive_ti_to_type(0x0023),
        Some(Type::Primitive(PrimitiveType::UnsignedInt(8)))));
    assert!(matches!(primitive_ti_to_type(0x0040),
        Some(Type::Primitive(PrimitiveType::Float))));
    assert!(primitive_ti_to_type(0x1000).is_none(), "user TI returns None");
}

#[test]
fn primitive_ti_pointer_family_unwraps_pointee() {
    // 0x0474 = pointer to T_INT4
    let t = primitive_ti_to_type(0x0474).expect("ptr to int4");
    let Type::Ptr(inner) = t else { panic!("expected Ptr"); };
    assert!(matches!(*inner, Type::Primitive(PrimitiveType::Int(4))));
}
```

### Phase 2 — User TI registry in `walk_tpi`

Extend `walk_tpi` to return both the existing `Vec<PdbType>` **and** a
`BTreeMap<u32, Type>` covering every record that has a name and a
size — even forward-refs (they map to `Type::Struct { name, fields: [] }`
until resolved).

**Change signature:**

```rust
pub fn walk_tpi_with_index(stream_data: &[u8])
    -> Result<(Vec<PdbType>, BTreeMap<u32, Type>), PdbError>;

// Keep the old `walk_tpi` as a thin wrapper that drops the map for
// callers that don't need it.
```

**Implementation:**

After the existing second-pass loop that builds `out: Vec<PdbType>`, run
a third pass that:

1. For every entry in `out`, compute its TI from its position
   (`0x1000 + index_in_records`).
2. Call `pdb_type_to_ir_type(&entry)` and insert into the map.
3. Add a fixpoint: for every entry whose `Unknown` fields can be filled
   by the now-populated map (via `field_type` TI), resolve and re-insert.

**Tests:**

```rust
#[test]
fn walk_tpi_with_index_returns_named_types() {
    let stream = build_simple_struct_stream(/* sample bytes */);
    let (types, index) = walk_tpi_with_index(&stream).unwrap();
    assert_eq!(types.len(), 1);
    let ti = 0x1000;
    assert!(matches!(index.get(&ti), Some(Type::Struct { .. })));
}

#[test]
fn walk_tpi_with_index_resolves_pointer_to_primitive_field() {
    // Synthetic TPI: struct S { int *p; }
    // p's field_type points at 0x0474 (primitive: ptr-to-int4).
    let stream = build_struct_with_pointer_field();
    let (_, index) = walk_tpi_with_index(&stream).unwrap();
    let Some(Type::Struct { fields, .. }) = index.get(&0x1000) else {
        panic!("missing struct");
    };
    assert_eq!(fields.len(), 1);
    assert!(matches!(&fields[0].ty, Type::Ptr(_)));
}
```

### Phase 3 — Complex record decoders

Add decoders for the records `walk_tpi` currently skips:

- `LF_POINTER` (0x1002) → `Type::Ptr(Box::new(<pointee from TI>))`.
- `LF_ARRAY` (0x1503) → `Type::Array { element, size }`.
- `LF_PROCEDURE` (0x1008) → `Type::FuncPtr { params, return_type, variadic }`.
- `LF_ARGLIST` (0x1201) — internal list referenced by `LF_PROCEDURE`.
- `LF_BITFIELD` (0x1205) → `Type::Bitfield { underlying, offset, width }`.
- `LF_MODIFIER` (0x1001) — `const`/`volatile`/`unaligned` wrappers; pass
  through to the underlying type unchanged for now.

Each decoder follows the same shape as `decode_struct_or_class`: read a
fixed prefix, then iterate the trailing variable-length payload. Build a
table-driven test fixture using `cargo test -p unlace-loader pdb_types`.

**File:** `crates/unlace-loader/src/pdb_types.rs`

### Phase 4 — SSA wiring

Once `walk_tpi_with_index` populates `PdbTypes::by_index`, expose a
per-function pass that applies it to SSA varnodes.

**File:** `crates/unlace-cli/src/pipeline.rs`

**Add helper:**

```rust
/// Apply PDB-recovered composite types to `ssa.composite_var_types`.
/// Mirrors `apply_dwarf_to_ssa`: for each PDB local variable whose
/// frame offset is known and whose type name resolves in
/// `image.pdb_types.structs`, write the lowered `Type` onto every SSA
/// varnode that aliases that stack offset.
fn apply_pdb_types_to_ssa(ssa: &mut SsaFunction, image: &BinaryImage) {
    let Some(pdb) = image.pdb_types.as_ref() else { return };
    // Walk image.symbols for `Function` kind; for each, look up
    // matching PDB local-vars by name, and project their TIs.
    // (Full hookup deferred to the matching DWARF flow.)
}
```

**Call site:** in `decompile_function_with_symbols`, after
`apply_dwarf_to_ssa` and before the pass pipeline.

**Test (pin end-to-end):**

```rust
#[test]
fn pdb_types_land_in_composite_var_types() {
    // Build a synthetic BinaryImage with a Function symbol "foo"
    // and a PdbTypes whose by_index contains a recovered struct.
    // Call apply_pdb_types_to_ssa on a fresh SsaFunction; assert
    // composite_var_types now contains the struct type.
}
```

### Acceptance

- `walk_tpi_with_index` test suite has at least 8 green tests covering
  primitive lookup, struct fields, pointer fields, array fields, bitfield
  fields, modifier passthrough, procedure types, and forward-ref fixpoint
  convergence.
- `pdb_type_to_ir_type` no longer leaves `Unknown` field types when the
  member's `field_type` resolves through the registry.
- `apply_pdb_types_to_ssa` populates `composite_var_types` for at least
  one synthetic fixture.
- `cargo xtask lint-determinism` stays clean.

### Estimated work

5–7 days of focused effort. Phase 1 + Phase 2 land in 1 day; Phase 3 is
2–3 days (each decoder + tests); Phase 4 is 1 day plus integration testing.

---

## 2. dyld Shared-Cache Full Image Reassembly

### What exists today

- `crates/unlace-loader/src/dyld_cache.rs::DyldCache::parse` reads the
  16-byte magic, mapping table, and image list.
- `vaddr_to_file_offset` translates an image VA through the mapping
  table to the cache file offset.
- `extract_image` returns a fixed 16 MiB byte window starting at the
  translated file offset (no segment-aware reassembly).
- `parse_v3_slide_info` / `parse_v2_slide_info` / `parse_v5_slide_info`
  and `apply_*` rebase a contiguous image.
- `is_dyld_shared_cache(&[u8])` is a public detection helper.

### Goal

`extract_image_as_macho(path)` returns a *standalone* Mach-O file blob
that loads cleanly into the existing `MachoLoader`. Modern subcache
filesets and `LC_DYLD_CHAINED_FIXUPS` are handled.

### Phase 1 — Mach-O header walking inside the cache

**File:** `crates/unlace-loader/src/dyld_cache.rs`

**Add:**

```rust
/// Layout of one image extracted from the cache. Holds an ordered list
/// of (segment_name, start_offset_in_output, size_bytes) tuples plus the
/// computed output capacity. Use this to drive `assemble_image`.
#[derive(Debug, Clone)]
pub struct ImagePlan {
    pub mach_header: Vec<u8>,
    pub segments: Vec<SegmentPlan>,
    pub total_size: u64,
}

#[derive(Debug, Clone)]
pub struct SegmentPlan {
    pub name: String,
    pub vmaddr: u64,
    pub vmsize: u64,
    pub fileoff_in_cache: u64,
    pub filesize: u64,
    pub fileoff_in_output: u64,
}

impl<'a> DyldCache<'a> {
    /// Decode the Mach-O at `image_vaddr` and produce a placement plan
    /// for every `LC_SEGMENT_64` it declares. Output offsets are
    /// linearised: header at 0, then each segment in declaration order.
    pub fn plan_image(&self, image_vaddr: u64) -> Option<ImagePlan>;
}
```

**Implementation:**

1. Translate `image_vaddr` via `vaddr_to_file_offset`.
2. Read `mach_header_64` (32 bytes at offset).
3. Iterate `ncmds` load commands at offset + sizeof(header). For each
   `LC_SEGMENT_64` (cmd id 0x19), capture `segname`, `vmaddr`, `vmsize`,
   `fileoff`, `filesize`.
4. The cache stores each segment at `fileoff_in_cache = vaddr_to_file_offset(segment.vmaddr)`.
5. Lay output offsets starting at 0: header, then each segment back to
   back, page-aligned.

**Tests (synthetic cache):**

```rust
#[test]
fn plan_image_lists_segments_in_declaration_order() {
    let cache_bytes = build_minimal_cache_with_one_image();
    let cache = DyldCache::parse(&cache_bytes).unwrap();
    let plan = cache.plan_image(cache.list_images()[0].address).unwrap();
    assert!(plan.segments.iter().any(|s| s.name == "__TEXT"));
}
```

### Phase 2 — Image assembly

**Add:**

```rust
impl<'a> DyldCache<'a> {
    /// Assemble a standalone Mach-O blob from an `ImagePlan`. Copies
    /// each segment from its cache offset into the output buffer using
    /// `vaddr_to_file_offset` for the slide info-aware path; applies
    /// stored slide rebases when `self.slide_info` is configured.
    pub fn assemble_image(&self, plan: &ImagePlan) -> Vec<u8>;

    /// Convenience: plan + assemble for an image identified by path.
    pub fn extract_image_as_macho(&self, path: &str) -> Option<Vec<u8>>;
}
```

**Implementation:**

1. Allocate `plan.total_size` bytes.
2. Copy `mach_header` bytes (with each segment's `fileoff` rewritten to
   the new linearised offset).
3. For each segment, copy `filesize` bytes from
   `plan.segments[i].fileoff_in_cache` into the output.
4. If `slide_info` is configured, run `apply_v3_slide` / `apply_v2_slide`
   / `apply_v5_slide` on each segment's bytes.

**Tests:**

```rust
#[test]
fn extract_image_as_macho_round_trips_through_macho_loader() {
    let cache = make_test_cache_with_libsystem_stub();
    let blob = cache.extract_image_as_macho("/usr/lib/libSystem.B.dylib").unwrap();
    assert!(MachoLoader::can_load(&blob));
    let img = MachoLoader::load(&blob).expect("standalone image must load");
    assert_eq!(img.arch, ArchId::AArch64);
}
```

### Phase 3 — LC_DYLD_CHAINED_FIXUPS

**Add:**

```rust
/// Parse a `LC_DYLD_CHAINED_FIXUPS` load command (cmd id 0x80000034).
/// Returns the chained-import list and the rebase chain entries
/// keyed by segment index.
pub fn parse_chained_fixups(data: &[u8]) -> Option<ChainedFixups>;

#[derive(Debug, Clone)]
pub struct ChainedFixups {
    pub imports: Vec<ChainedImport>,
    pub rebases: BTreeMap<u32, Vec<RebaseEntry>>,
}
```

Walk the `dyld_chained_fixups_header` → `dyld_chained_starts_in_image`
→ per-segment `dyld_chained_starts_in_segment` chain. Resolve each
chain entry as either a 64-bit rebase (high-bit clear) or an import
binding (high-bit set + ordinal index).

**Test:**

```rust
#[test]
fn chained_fixups_rebases_a_segment() {
    let fixups = build_synthetic_fixups_stream(/* ... */);
    let parsed = parse_chained_fixups(&fixups).unwrap();
    assert_eq!(parsed.rebases.len(), 1);
}
```

### Phase 4 — Modern subcache filesets

After macOS 12, dyld split the cache into a primary + N
`<name>.<idx>` subcache files. The primary header at offset 0x1c8
stores `subCacheArrayOffset` and `subCacheArrayCount`.

**Add:**

```rust
#[derive(Debug, Clone)]
pub struct SubCacheEntry {
    pub uuid: [u8; 16],
    pub cache_vm_offset: u64,
    pub file_suffix: String,
}

impl<'a> DyldCache<'a> {
    /// Returns the subcache array from the primary header. Empty for
    /// pre-macOS 12 single-file caches.
    pub fn subcaches(&self) -> Vec<SubCacheEntry>;
}
```

Subcache file content lives in *separate* files on disk; the loader
needs to be passed a `BTreeMap<String, &[u8]>` of suffix → bytes for
the address-to-segment translation to span subcaches.

**Test:**

```rust
#[test]
fn subcaches_decodes_modern_layout() {
    let cache = build_synthetic_macos_12_cache();
    let subs = cache.subcaches();
    assert_eq!(subs.len(), 3);
    assert_eq!(subs[0].file_suffix, ".1");
}
```

### Acceptance

- `plan_image` + `assemble_image` reproduce a Mach-O blob that
  `MachoLoader::can_load` recognises for at least one fixture.
- `parse_chained_fixups` returns a non-empty rebase list for a
  synthetic chained-fixups stream.
- `subcaches()` returns 1+ entries for a macOS 12+ synthetic header.
- All tests pass under `cargo test -p unlace-loader dyld_cache`.

### Estimated work

7–10 days. Phase 1 + 2 land in 3–4 days; chained fixups are 2–3 days;
subcaches are 1–2 days. A real-world end-to-end test against an actual
dyld cache adds an additional 1–2 days.

---

## 3. Remaining Stub-Tier Lifter Completions

### What exists today

`crates/unlace-ir/src/arch_support.rs` classifies these architectures
as `Stub`:

```
6502, 8051, AmdGpu, AppleAgx, Arc, Agx, NvidiaSass, Mos6502, M6502,
Hexagon, Pic16, RxRenesas, Sharc, SharcBlackfin, TiC6x, TiC28x, Evm,
NvSass, SpirV, Stm8, TriCore, V850, Z80
```

23 entries (slight duplication: `Mos6502` and `M6502` both exist, as do
`Agx` and `AppleAgx`). Each crate has a decoder skeleton plus a handful
of opcodes; the rest fall through to `IrOp::Unimplemented`.

This turn's AVR work demonstrates the template: 10 new opcodes + 9
tests per architecture.

### Goal

Bring each stub-tier arch to **30 supported opcodes minimum**, covering
the canonical "RE will encounter these in the first hour of any binary"
set per ISA. Move each to `Beta` tier in `arch_support.rs` once that
threshold is met.

### Per-architecture target opcode lists

Each list below is the minimum batch. Numbers are based on the ISA's
top-N most frequent ops in well-known instruction-frequency studies.

#### Z80 (priority 1)

`LD r,r`, `LD r,n`, `LD r,(HL)`, `LD (HL),r`, `LD A,(nn)`, `LD (nn),A`,
`ADD A,r`, `ADD A,n`, `SUB r`, `SBC A,r`, `AND r`, `OR r`, `XOR r`,
`CP r`, `INC r`, `DEC r`, `JP nn`, `JP cc,nn`, `JR e`, `JR cc,e`,
`CALL nn`, `CALL cc,nn`, `RET`, `RET cc`, `PUSH rp`, `POP rp`,
`EX DE,HL`, `LDIR`, `EI`, `DI`, `HALT`.

**File:** `crates/unlace-lift-z80/src/lib.rs`

#### 6502 / MOS 6502 (priority 1)

`LDA imm/zp/abs`, `STA zp/abs/zpx`, `LDX/STX`, `LDY/STY`, `TAX`, `TXA`,
`TAY`, `TYA`, `TSX`, `TXS`, `INX`, `INY`, `DEX`, `DEY`, `INC`, `DEC`,
`ADC`, `SBC`, `AND imm/zp/abs`, `ORA`, `EOR`, `BIT`, `CMP`, `CPX`,
`CPY`, `JMP abs`, `JSR abs`, `RTS`, `RTI`, `BCC`, `BCS`, `BEQ`, `BNE`,
`BMI`, `BPL`, `BVC`, `BVS`, `BRK`, `NOP`, `PHA`, `PLA`, `PHP`, `PLP`,
`CLC`, `SEC`.

**File:** `crates/unlace-lift-6502/src/lib.rs`

#### MSP430 (priority 1)

`MOV`, `ADD`, `ADDC`, `SUB`, `SUBC`, `CMP`, `DADD`, `BIT`, `BIC`,
`BIS`, `XOR`, `AND`, `RRA`, `RRC`, `PUSH`, `SWPB`, `SXT`, `CALL`,
`RETI`, `JMP`, `JEQ`, `JNE`, `JC`, `JNC`, `JN`, `JGE`, `JL`,
`emulated NOP/RET/CLR/TST/INC/DEC/BR`.

**File:** `crates/unlace-lift-msp430/src/lib.rs`

#### V850 (priority 1)

`MOV reg,reg`, `MOV imm,reg`, `MOVEA imm16,reg,reg`, `LD.B/H/W disp,reg`,
`ST.B/H/W reg,disp`, `ADD`, `SUB`, `AND`, `OR`, `XOR`, `CMP`, `MUL`,
`SHL`, `SHR`, `SAR`, `JMP reg`, `JR disp22`, `JARL disp22,reg`,
`BR cc disp9`, `RET`, `EI`, `DI`, `LDSR`, `STSR`, `CALLT`, `CTRET`,
`HALT`, `NOP`.

**File:** `crates/unlace-lift-v850/src/lib.rs`

#### ARC (priority 2)

`mov`, `ld`, `st`, `add`, `sub`, `and`, `or`, `xor`, `cmp`, `lsl`,
`lsr`, `asr`, `j`, `jl`, `b cc`, `bl`, `mul`, `mulh`, `flag`, `nop`,
`brk`.

**File:** `crates/unlace-lift-arc/src/lib.rs`

#### STM8 (priority 2)

`LD`, `LDW`, `MOV`, `ADD`, `ADC`, `SUB`, `SBC`, `CP`, `AND`, `OR`,
`XOR`, `INC`, `DEC`, `SLL`, `SRL`, `SRA`, `JP`, `JRA`, `JREQ`, `JRNE`,
`JRC`, `JRNC`, `CALL`, `RET`, `RETF`, `RIM`, `SIM`, `HALT`, `WFI`, `NOP`.

**File:** `crates/unlace-lift-stm8/src/lib.rs`

#### RX (priority 2)

`MOV`, `MOVU`, `ADD`, `SUB`, `CMP`, `MUL`, `DIV`, `AND`, `OR`, `XOR`,
`NOT`, `SHLR`, `SHAR`, `SHLL`, `BSET`, `BCLR`, `BTST`, `JMP`, `JSR`,
`RTS`, `RTE`, `BRA disp`, `BEQ`, `BNE`, `BC`, `BNC`, `BPZ`, `BN`,
`NOP`, `WAIT`.

**File:** `crates/unlace-lift-rx/src/lift.rs`

#### TriCore (priority 2)

`MOV`, `LD.B/H/W`, `ST.B/H/W`, `ADD`, `SUB`, `MUL`, `AND`, `OR`, `XOR`,
`SH`, `SHA`, `J`, `JEQ`, `JNE`, `JLT`, `JGE`, `CALL`, `RET`, `RFE`,
`NOP`, `DSYNC`, `ENABLE`, `DISABLE`.

**File:** `crates/unlace-lift-tricore/src/lib.rs`

#### Hexagon (priority 3)

Each packet decodes 1–4 sub-insns. Cover the
single-instruction-per-packet shapes first: `A2_add`, `A2_sub`,
`A2_and`, `A2_or`, `A2_xor`, `A2_addi`, `S2_lsr_r_r`, `S2_asl_r_r`,
`L2_loadw_io`, `S2_storew_io`, `J2_jump`, `J2_jumpr`, `J2_call`,
`J2_callr`, `J2_endloop0`, `C2_cmpeq`, `C2_cmpgt`.

**File:** `crates/unlace-lift-hexagon/src/lib.rs`

#### TI C6x (priority 3)

`MV`, `ADD`, `SUB`, `MPY`, `AND`, `OR`, `XOR`, `SHL`, `SHR`, `LDW`,
`STW`, `LDB`, `STB`, `B reg`, `B label`, `BNOP`, `CALLP`, `NOP`,
predicate suffixes `[cond]`.

**File:** `crates/unlace-lift-tic6x/src/lib.rs`

#### TI C28x (priority 3)

`MOV`, `MOVL`, `ADD`, `SUB`, `MPY`, `AND`, `OR`, `XOR`, `SBF` (short
branch fast), `B`, `BF`, `LB`, `LC`, `LCR`, `LRET`, `RET`, `RETE`,
`PUSH`, `POP`, `NOP`, `IDLE`.

**File:** `crates/unlace-lift-ti/src/lib.rs`

#### 8051 (priority 3)

`MOV`, `MOVX`, `MOVC`, `ADD`, `ADDC`, `SUBB`, `INC`, `DEC`, `MUL AB`,
`DIV AB`, `ANL`, `ORL`, `XRL`, `CLR A`, `CPL A`, `RL/RLC/RR/RRC`,
`JMP @A+DPTR`, `LJMP`, `AJMP`, `SJMP`, `JZ`, `JNZ`, `JC`, `JNC`,
`CJNE`, `DJNZ`, `LCALL`, `ACALL`, `RET`, `RETI`, `NOP`.

**File:** `crates/unlace-lift-8051/src/lib.rs`

#### PIC16 (priority 3)

`MOVLW`, `MOVWF`, `MOVF`, `ADDLW`, `ADDWF`, `SUBLW`, `SUBWF`, `ANDLW`,
`ANDWF`, `IORLW`, `IORWF`, `XORLW`, `XORWF`, `CLRF`, `CLRW`, `INCF`,
`DECF`, `RLF`, `RRF`, `BCF`, `BSF`, `BTFSC`, `BTFSS`, `GOTO`, `CALL`,
`RETURN`, `RETLW`, `RETFIE`, `NOP`, `SLEEP`, `CLRWDT`.

**File:** `crates/unlace-lift-pic/src/lib.rs`

#### Remaining (priority 4: GPUs, EVM, SHARC, AMDGPU, NvSass, AppleAgx, SpirV)

Each of these is a much larger ISA than the embedded set above and the
RE community uses them rarely enough that we cover them last. Same
template: 30 opcodes + 30 tests + Beta-tier promotion.

### Template (use for every architecture)

**Per-arch checklist:**

1. Open the canonical ISA reference manual; list the 30 most common opcodes.
2. Encode each as a `if word & MASK == VALUE` decode line.
3. Lift to the simplest `IrOp` that captures the semantics:
   - Arithmetic → `IntAdd`/`IntSub`/`IntMult`/`IntDiv`.
   - Logical → `IntAnd`/`IntOr`/`IntXor`.
   - Shifts → `IntLeft`/`IntRight`/`IntSright`.
   - Memory → `Load`/`Store`.
   - Branches → `Branch`/`Cbranch`/`Call`/`Return`.
   - Side effects without an IR mapping (peripheral I/O, special
     registers) → `Callother` with operands carrying the port/spec.
4. Add a unit test per opcode in `mod tests` using the
   `lift_insn(&bytes, addr)` pattern.
5. Update `arch_support.rs::support_tier` to return `Beta` for the
   arch once 30 opcodes are covered.
6. Regenerate the matrix in `docs/status.md`.

### Acceptance

- Each priority-1 arch (Z80, 6502/MOS, MSP430, V850) has ≥30 opcodes lifted with tests.
- Each priority-2 arch (ARC, STM8, RX, TriCore) has ≥30 opcodes lifted.
- Each priority-3 arch (Hexagon, TI C6x, TI C28x, 8051, PIC16) has ≥20 opcodes.
- Priority-4 (GPU/VM) archs land minimum 15 opcodes.
- `arch_support.rs` matrix updated; `docs/status.md` regenerated.

### Estimated work

Each priority-1 arch: 2 days. Priority-2: 1.5 days each. Priority-3:
1 day each. Priority-4: 1 day each (less mature targets, more research
per opcode). Total: 4 × 2 + 4 × 1.5 + 5 × 1 + 7 × 1 = 26 days.

---

## 4. Remaining IDA `cot_*` Opcodes

### What exists today

`crates/unlace-output/src/expr_ast.rs::CExpr` has 27 variants covering
the structural set IDA uses. The IDA `cot_*` enum has 69 entries
(0..=68). Many remaining entries are *not* missing — they map cleanly
to existing variants:

- `cot_lor` / `cot_land` → `Binary { op: "||" / "&&" }`.
- `cot_bor` / `cot_xor` / `cot_band` → `Binary { op: "|" / "^" / "&" }`.
- `cot_eq` / `cot_ne` / comparisons → `Binary { op: "==" / "!=" / ... }`.
- `cot_shl` / `cot_sshr` / `cot_ushr` → `Binary { op: "<<" / ">>" }`.
- `cot_add` / `cot_sub` / `cot_mul` → `Binary { op: "+" / "-" / "*" }`.
- `cot_sdiv` / `cot_udiv` / `cot_smod` / `cot_umod` → `Binary { op: "/" / "%" }`.

### Goal

Add explicit `CExpr` variants for the remaining nodes that *don't*
collapse into `Binary { op }`. After this batch, every IDA `cot_*` that
producers actually emit has a corresponding `CExpr` constructor.

### Variants to add

#### Phase 1 — Atomic / leaf nodes (5 variants)

| IDA name | New `CExpr` variant | Render |
|----------|---------------------|--------|
| `cot_empty` (0) | `CExpr::Empty` | empty string |
| `cot_label` (4) | `CExpr::Label(u32)` | `LABEL_n` |
| `cot_var` (8) | `CExpr::Var { name, idx }` | `name` |
| `cot_num` (9) | `CExpr::Num { value, signed, width }` | typed integer literal |
| `cot_fnum` (10) | `CExpr::Fnum { value, width }` | `1.5f` / `1.5` |

#### Phase 2 — Type expression (1 variant)

| IDA name | New `CExpr` variant | Render |
|----------|---------------------|--------|
| `cot_type` (3) | `CExpr::TypeRef(String)` | type name (e.g. `int *`) |

`cot_alignof` (5) is rendered as `Macro { name: "alignof", args }` so
no new variant is needed.

#### Phase 3 — Address/reference arithmetic (3 variants)

| IDA name | New `CExpr` variant | Render |
|----------|---------------------|--------|
| `cot_ref` (37) (already covered by `AddrOf`) | n/a | already covered |
| `cot_psub` (43) | `CExpr::PtrDiff { lhs, rhs }` | `lhs - rhs` (pointer subtraction) |
| `cot_ptr_arith` (synthetic) | `CExpr::PtrOffset { base, offset, scale }` | `base + offset * sizeof(elem)` |

Only `PtrDiff` is strictly new; `PtrOffset` is bonus and lets the
printer surface array-element arithmetic distinctly from raw `Binary`.

#### Phase 4 — Float arithmetic explicit (4 variants)

C-level float arithmetic emits the same `+ - * /` tokens as integer
arithmetic, but the *semantics* differ (NaN, infinities). IDA encodes
this distinction with `cot_fadd` / `cot_fsub` / `cot_fmul` / `cot_fdiv`.
We don't currently expose float distinctions; add:

| IDA name | New `CExpr` variant | Render |
|----------|---------------------|--------|
| `cot_fadd` (40) | `CExpr::FloatBinary { op: "+", lhs, rhs }` | `lhs + rhs` |
| `cot_fsub` (41) | (same with `op: "-"`) | `lhs - rhs` |
| `cot_fmul` (42) | (same with `op: "*"`) | `lhs * rhs` |
| `cot_fdiv` (44) | (same with `op: "/"`) | `lhs / rhs` |

Alternative: roll into a single `FloatBinary { op, lhs, rhs }`. That
keeps the variant count low.

#### Phase 5 — Float unary (1 variant)

| IDA name | New `CExpr` variant | Render |
|----------|---------------------|--------|
| `cot_fneg` (38) | `CExpr::FloatNeg(Box<CExpr>)` | `-x` (typed float) |

### Implementation steps (per variant)

For each new variant:

1. Add to the `enum CExpr` definition.
2. Add a row to `cexpr_coverage_rows()`.
3. Add a precedence entry in `precedence(e: &CExpr)`.
4. Add a render arm in `impl fmt::Display for CExpr`.
5. Add a substitution arm in `substitute_lit_inner`.
6. Add at least one render test + one precedence test.
7. Update the variant-pinning test
   `cexpr_coverage_lists_every_variant`.

### Coverage table reconciliation

After this batch, the IDA opcode → CExpr table:

| IDA cot_* range | Coverage |
|-----------------|----------|
| 0–16 (statements/asg) | Covered: Empty, Comma, Assign, CompoundAssign, Ternary, Type, Label, Alignof macro |
| 17–31 (binary ops) | Covered: Binary (token-based) |
| 32–36 (unary ops) | Covered: Neg, LogicalNot, BitwiseNot, PreInc, PreDec, PostInc, PostDec |
| 37–44 (ptr/float arith) | Covered: AddrOf, PtrDiff, FloatBinary, FloatNeg |
| 45–58 (postfix) | Covered: Call, Member, Index, Sizeof, Cast, Coerce |
| 59–62 (specials) | Covered: Helper, StmtExpr, Macro |
| 63–68 (leaves) | Covered: Num, Fnum, Str, Obj, FuncId, Lit, Var |

That puts us at ~50 of 69 `cot_*` slots with explicit CExpr variants.
The remaining ~19 are either statement-level (handled by HIR, not
CExpr) or are duplicates / synthetic forms IDA uses internally but
producers never emit.

### Acceptance

- `cexpr_coverage_lists_every_variant` passes for the new variant list.
- Each new variant has at least one render test that pins its C output.
- `cargo test -p unlace-output --lib expr_ast::tests` reports all green.
- `crates/unlace-output/src/COVERAGE.md` regenerated.

### Estimated work

3–4 days. Each variant is 30 minutes of mechanical work (add + tests).
14 new variants × 30 min = 7 hours of typing, plus integration cleanup.

---

## Execution Order

If picking up this plan in a new session:

1. **Day 1–4:** Start with the cot_* expansion (Phase 4 above) — pure
   source-tree work, no external evidence required, fastest payoff.
2. **Day 5–11:** PDB type-index resolution (Phase 1 above) — the most
   user-visible quality improvement for Windows debug binaries.
3. **Day 12–20:** dyld shared cache reassembly (Phase 2 above) — the
   most user-visible improvement for macOS binaries.
4. **Day 21–47:** Stub-tier lifter completions (Phase 3 above) — by far
   the largest single chunk, parallelisable across architectures.

Total budget: ~47 days of focused work. The order is chosen so each
phase is independently mergeable and the user sees output improvements
before the lifter sweep begins.

## Definition of Done

A phase is complete when:

- All listed code/data lives in the workspace.
- Every listed test passes under `cargo test --workspace --lib`.
- `cargo xtask lint-determinism` stays clean.
- `docs/status.md` is updated to reflect the new state.
- `plan.md` has a per-line update for each acceptance bullet.

## Invocation

To start executing this plan, point the next session at this file:

> Read `docs/handoffs/COMPLETION_PLAN.md` and execute Phase 1 of
> section 4 (cot_* opcodes) first, then section 1 (PDB resolution),
> then section 2 (dyld), then section 3 (lifter sweep).

Each section is self-contained; the agent can stop after any phase and
leave the workspace in a clean, tested state.
