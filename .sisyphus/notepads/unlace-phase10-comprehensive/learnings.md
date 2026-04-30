# Phase 10 Learnings

## P10-0: Baseline Metrics (2026-04-30)

Captured pre-Phase-10 per-fixture metrics. Aggregate parity: **52.9%** (down from 59.6% at Phase 9 end — likely due to new cpp/x87 fixtures added in Phase 8-9 that have lower parity).

Key observations:
- **medium.c** dominates complexity: gotos=30, ifs=39, vars=82
- **cpp_rtti.c** is the only C++ fixture with gotos (2) — others are goto-free
- **debug_calls.c** has high var count (48) but zero gotos/ifs — pure declaration-heavy
- All debug fixtures (calls/hello/structs) have zero gotos — good baseline
- Total gotos across all fixtures: 32 (30 from medium alone = 94%)
- Phase 10 goal: reduce medium.c gotos via structured control flow recovery

Evidence: `.sisyphus/evidence/p10-baseline-metrics.txt`

## P10-1: Synthetic PE32+ Fixture with .pdata/.xdata/.debug/load_config (2026-04-30)

Created `pe64_with_pdata_and_debug()` — 3072-byte hand-crafted PE32+ binary.

### Byte Layout
```
0x000-0x07F  DOS header (e_lfanew → 0x80)
0x080-0x083  PE signature
0x084-0x097  COFF file header (AMD64, 4 sections, opt_hdr_size=240)
0x098-0x187  Optional header PE32+ (112 base + 128 data dirs)
  Data dirs: [3]=.pdata, [6]=debug@rdata+0, [10]=load_config@rdata+0x80
0x188-0x227  4 section headers (.text/.pdata/.xdata/.rdata)
0x400-0x5FF  .text (RVA 0x1000) — single RET
0x600-0x7FF  .pdata (RVA 0x2000) — 1 RUNTIME_FUNCTION (12 bytes)
0x800-0x9FF  .xdata (RVA 0x3000) — UNWIND_INFO + 1 ALLOC_SMALL code (6 bytes)
0xA00-0xBFF  .rdata (RVA 0x4000):
  +0x00: IMAGE_DEBUG_DIRECTORY (28 bytes, type=CODEVIEW)
  +0x20: RSDS record (sig + GUID + age=1 + "test.pdb\0")
  +0x80: IMAGE_LOAD_CONFIG_DIRECTORY64 (112 bytes, security_cookie set)
```

### Key Decisions
- 4 sections keeps total under 4KB (3072 bytes)
- Debug dir + RSDS + load_config share .rdata at different offsets
- UNWIND_INFO uses ALLOC_SMALL (op=2) — simplest single unwind code
- SecurityCookie VA = ImageBase + rdata_rva + 0x100 (arbitrary valid VA)
- SizeOfHeaders = 0x400 (section table ends at 0x228, aligned to FileAlignment=0x200)

## P10-3: ARM64 ELF Fixture (2026-04-30)

Created `fixtures/arm64_features.elf` — 1856-byte hand-crafted AArch64 ELF64 binary (no cross-toolchain needed).

### Byte Layout
```
0x000-0x03F  ELF64 header (e_machine=183/EM_AARCH64, entry=0x400100)
0x040-0x077  Program header (1 PT_LOAD, R+X)
0x100-0x163  .text (100 bytes = 25 ARM64 instructions)
0x200-0x28F  .symtab (6 symbols: null, file, _start, mul_test, csel_test, bitfield_test)
0x400-0x439  .strtab
0x500-0x520  .shstrtab
0x600-0x73F  Section headers (5 sections)
```

### Functions & Instructions
- `_start` (0x400100, 24B): BL×3, MOVZ×2, SVC — entry point calling all test functions
- `mul_test` (0x400118, 16B): MUL, SDIV, MADD, RET — multiply/divide ops
- `csel_test` (0x400128, 32B): CMP, CSEL, CSINC, CSINV, CSNEG, B.EQ, ADD, RET — conditional selects
- `bitfield_test` (0x400148, 28B): STP(pre), UBFM, SBFM, EXTR, LDP(post), DMB ISH, RET — bitfield + memory pairs

### Key Decisions
- Hand-encoded all 25 instructions as raw 32-bit LE words (Python script at `/tmp/build_arm64_elf.py`)
- Assembly source documented in `fixtures/src/arm64_features.S`
- Used `object` crate-compatible ELF structure (5 sections, proper .symtab with STT_FUNC symbols)
- Added AArch64 to CLI arch gate (`main.rs` + `batch.rs`) — was previously x86-only
- Currently-lifted instructions (LDP, STP, B.cond, BL, RET, CMP, ADD) produce real IR
- Unlifted instructions (MUL, SDIV, MADD, CSEL, CSINC, CSINV, CSNEG, UBFM, SBFM, EXTR, DMB) emit `Unimplemented` — Wave 5 (P10-30..33) will add these

### Verification
- `file` → `ELF 64-bit LSB executable, ARM aarch64, version 1 (SYSV), statically linked, not stripped`
- `readelf -s` → 6 symbols with correct types and sizes
- `unlace decompile --arch aarch64 --emit ir` → exit 0, 4 functions in IR output

## P10-2: Synthetic Mach-O 64-bit Fixture with LC_DYLD_INFO + LC_DYSYMTAB (2026-04-30)

Created `macho64_with_dyld_info()` — 768-byte hand-crafted Mach-O 64-bit binary.

### Byte Layout
```
0x000  mach_header_64          (32 B, ncmds=5)
0x020  LC_SEGMENT_64 __TEXT    (152 B, 1 section: __text)
0x0B8  LC_SEGMENT_64 __DATA    (152 B, 1 section: __la_symbol_ptr)
0x150  LC_SYMTAB               (24 B, 1 nlist for "_malloc")
0x168  LC_DYSYMTAB             (80 B, 1 indirect sym entry)
0x1B8  LC_DYLD_INFO            (48 B, bind opcodes for "_printf")
--- load commands end at 0x1E8 ---
0x1F0  __text data             (1 B: 0xC3 RET)
0x200  __la_symbol_ptr data    (8 B: pointer slot)
0x210  string table            ("\0_malloc\0", 9 B)
0x220  nlist64                 (16 B)
0x230  indirect sym table      (4 B: [0])
0x238  bind opcodes            (15 B)
```

### Key Decisions
- 5 load commands: 2× LC_SEGMENT_64 + LC_SYMTAB + LC_DYSYMTAB + LC_DYLD_INFO
- sizeofcmds = 152×2 + 24 + 80 + 48 = 456 bytes, load commands end at 0x1E8
- __text data placed at 0x1F0 (AFTER load commands) — critical: with 5 load commands, the __DATA section header occupies 0x100, so placing __text data at 0x100 would corrupt the section name
- __la_symbol_ptr section uses S_LAZY_SYMBOL_POINTERS (0x7) flag, reserved1=0 for indirect table start index
- LC_DYSYMTAB: iundefsym=0, nundefsym=1, indirectsymoff=0x230, nindirectsyms=1
- LC_DYLD_INFO (0x22, not 0x80000022): bind_off=0x238, bind_size=15
- Bind opcode stream: SET_DYLIB_ORDINAL_IMM(1), SET_SYMBOL_TRAILING_FLAGS_IMM("_printf"), SET_TYPE_IMM(POINTER), SET_SEGMENT_AND_OFFSET_ULEB(1,0), DO_BIND, DONE
- nlist64: n_strx=1, n_type=N_EXT|N_UNDF=0x01, n_sect=0, n_desc=0, n_value=0

### Pitfall Found
- When fixture has many load commands (5 here), the section headers extend well past 0x100. The __DATA segment's section header starts at dseg+72 = 0xB8+0x48 = 0x100. Writing __text data at 0x100 corrupts the __la_symbol_ptr section name, causing `object` crate to report "Non UTF-8 Mach-O section name". Always place section data AFTER load commands end.

## P10-6: Idiom Recognition abs/min/max (2026-04-30)

Added 3 branchless conditional-select idiom patterns to `idiom_recognition.rs`:

### Patterns
- **abs**: `INT_SUB(INT_XOR(x, s), s)` where `s = INT_SRIGHT(x, bits-1)` → `Callother(__abs__, x)` (tag 0x322)
- **min**: `INT_ADD(b, INT_AND(d, s))` where `d = INT_SUB(a, b)`, `s = INT_SRIGHT(d, bits-1)` → `Callother(__min__, a, b)` (tag 0x323)
- **max**: `INT_SUB(a, INT_AND(d, s))` where `d = INT_SUB(a, b)`, `s = INT_SRIGHT(d, bits-1)` → `Callother(__max__, a, b)` (tag 0x324)

### Key Decisions
- Matched branchless bit-manipulation idioms (not CMOV/phi-based conditional selects) — these are the patterns compilers emit with `-O2` for `abs()`, `min()`, `max()` on signed integers
- Used `def_binary` helper to walk the def chain (3-4 levels deep for min/max)
- min pattern handles commutative ADD ordering via `try_min_idiom_ordered` called both ways
- Tags 0x322-0x324 sit after ROL/ROR (0x320-0x321) in the idiom-recognition range
- Also wired ROL/ROR/abs/min/max into C printer `callother_intrinsic_name` (0x320-0x324)

## P10-7: Unrolled memcpy/memset Idiom Recognition (2026-04-30)

Added sequence-level pattern matching to `idiom_recognition.rs` for detecting compiler-unrolled memory operations.

### Patterns
- **memcpy**: N consecutive `LOAD(ram, src+i*w)` → `STORE(ram, dst+i*w, loaded)` pairs where addresses increment by access width → `Callother(__memcpy__, dst, src, N*w)` (tag 0x325)
- **memset**: N consecutive `STORE(ram, dst+i*w, const)` with same constant value → `Callother(__memset__, dst, const, N*w)` (tag 0x326)

### Key Decisions
- Sequence detection operates at block level via `try_recognize_sequences()`, separate from per-instruction `try_recognize()`
- Called after per-instruction pass within the same fixedpoint loop iteration
- Uses `Vec::splice` to replace matched instruction ranges with single Callother
- Requires ≥2 consecutive pairs/stores to trigger (avoids false positives on single Load+Store)
- Capped at 64 operations (`MAX_UNROLLED_OPS`) to prevent pathological matching
- Only matches constant addresses (via `const_addr` helper) — won't match register-indirect patterns
- Side-effect check: breaks sequence if any intervening instruction is Call/Callind/Callother/Branchind
- Tags 0x325-0x326 continue the idiom-recognition range after abs/min/max (0x322-0x324)
- C printer maps 0x325 → `__memcpy__`, 0x326 → `__memset__`

## P10-4: node_split Heuristic Retune (2026-04-30)

Retuned `pick_split_target` to simulate candidate splits and choose only entries that shrink the largest remaining irreducible SCC overlapping the current region.

### Key Findings
- Profiling the old heuristic showed repeated medium.c splits in large SCCs (notably 21/28/49-block regions) where splitting an entry did not shrink the region and produced more goto-heavy output.
- A pure “smallest simulated SCC” scorer still over-split when the best candidate preserved the current SCC size; the important guard is to skip non-shrinking candidates entirely.
- With the shrink guard, medium.c returns to the pre-regression shape: `goto=12` (target ≤15) after `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures golden_medium`.
- Existing node_split tests still pass (3/3), and `cargo xtask lint-determinism` remains clean.

### Fixture Regression Check
- `cpp_exceptions=0`, `cpp_rtti=2`, `cpp_vtable=0`, `debug_calls=0`, `debug_hello=0`, `debug_structs=0`, `medium=12`, `x87_math=0` gotos.
- No fixture increased by more than 2 gotos versus `.sisyphus/evidence/p10-baseline-metrics.txt`.

## P10-8: Wave 1 Golden Refresh + Delta Report (2026-04-30)

Refreshed all 8 golden fixtures capturing combined effect of Wave 1 changes (P10-4 node_split retune + P10-5/6/7 idiom recognition).

### Results
- **medium.c gotos**: 30 → 12 (−60%) ✅ target ≤15 met
- **medium.c ifs**: 39 → 24 (−38%) ⚠️ below ≥35 target
  - Cause: node_split retune converted goto+if patterns into while-loops (16 while-loops in output), reducing discrete if count
  - Net quality improvement: fewer gotos + more structured loops = better readability
- **Regression check**: No fixture's goto count increased (all deltas ≤ 0)
- **Tests**: 23/23 golden_fixtures passed

### Wave 1 Summary
| Change | Impact |
|--------|--------|
| P10-4 node_split retune | gotos 30→12, ifs 39→24, +16 while-loops |
| P10-5 rotate idiom | ROL/ROR detection (no medium.c impact) |
| P10-6 abs/min/max idiom | Branchless conditional patterns |
| P10-7 memcpy/memset idiom | Unrolled memory operation detection |

Evidence: `.sisyphus/evidence/p10-8-delta.txt`

## P10-9: Struct Field Detection from base+const Load/Store (2026-04-30)

Added `StructFieldDetectPass`, a single-function SSA analysis that groups `LOAD`/`STORE` memory accesses by common SSA base varnode.

### Key Decisions
- Recognizes both direct `LOAD(ram, base)` as offset 0 and `LOAD/STORE(ram, INT_ADD(base, const), ...)` as field accesses at the constant offset.
- Uses only `BTreeMap` for deterministic grouping: `base → offset → access_size`.
- Emits `Type::Struct { name, fields: Vec<StructFieldType> }` into `SsaFunction::composite_var_types` when a base has 2–32 distinct offsets.
- Field names are intentionally mechanical (`field_<offset>`); struct names use the base varnode offset (`struct_<base_offset_hex>`).
- Access size maps to unsigned primitives, with 16-byte fields represented as `PrimitiveType::UnsignedInt(16)` so the C printer can render `_OWORD`.
- Wired before type inference and variable merging so composite types seed primitive pointer inference and survive to C output.

## P10-10: Bitfield Extraction/Insertion Idiom Recognition (2026-04-30)

Added 2 bitfield idiom patterns to `idiom_recognition.rs`:

### Patterns
- **bitfield read**: `(x >> shift) & mask` where mask is contiguous low bits → `Callother(__bitfield_get__, x, shift, width)` (tag 0x327)
- **bitfield write**: `(x & ~(mask << shift)) | ((y & mask) << shift)` → `Callother(__bitfield_set__, x, y, shift, width)` (tag 0x328)

### Key Decisions
- `is_contiguous_low_mask(val)` helper detects masks of form `(1 << width) - 1` via `count_ones()` + reconstruction check; handles `u64::MAX` (width=64) without overflow
- Bitfield read matches both `IntRight` and `IntSright` as the shift operation
- Bitfield read is checked AFTER `try_subpiece_from_and` (byte-aligned extraction takes priority) but BEFORE identity/annihilator checks
- Bitfield write matches on `IntOr` with 4-level def chain: OR(AND(x, inv_mask), LEFT(AND(y, mask), shift))
- Both patterns require shift and mask to be constants; source operand must be non-constant
- Bounds check: `shift + width ≤ bits` prevents out-of-range extractions
- Updated existing `test_idiom_subpiece_no_match_when_mask_size_mismatch` — this pattern is now correctly recognized as a bitfield read instead of being unmatched
- Tags 0x327-0x328 continue the idiom-recognition range after memcpy/memset (0x325-0x326)
- C printer maps 0x327 → `__bitfield_get__`, 0x328 → `__bitfield_set__`

## P10-11: 1-Level Pointer-Chain Type Propagation (2026-04-30)

Added pointer-chain propagation to `type_infer.rs`: when a Load's address input already has Ptr type and the output is pointer-sized (8 bytes), the output also gets Ptr type (or a refined type from struct field detection).

### Key Decisions
- Chain depth capped at 1 level via `chain_promoted: BTreeSet<SsaVarnode>` — varnodes promoted by the chain rule are tracked, and the rule won't fire if the address input was itself chain-promoted
- Struct field refinement: if the address is `INT_ADD(base, const_offset)` and `base` has a `Type::Struct` in `composite_var_types`, the field type at that offset is used instead of generic Ptr
- `force_set_type` introduced for Load/Store address inputs — these are definitively pointers and must not be demoted by lattice join with Int from arithmetic rules
- IntAdd/IntSub preserve existing Ptr on both inputs and output — prevents `Ptr.join(Int(8)) = Unknown` oscillation from pointer arithmetic patterns
- No oscillation: `force_set_type` for addresses + `preserve_ptr` guard on IntAdd converges in 2 iterations (IntAdd sets Int, Load force-sets Ptr, next iteration IntAdd skips)

### Pitfall Found
- `PrimitiveType::join(Ptr, Int(8)) = Unknown` — the lattice treats Ptr and Int as conflicting types. Without `force_set_type`, a varnode used as both IntAdd output (→ Int) and Load address (→ Ptr) oscillates between Int(8) and Unknown indefinitely. The fix: address operands use `force_set_type` which bypasses the lattice join.
