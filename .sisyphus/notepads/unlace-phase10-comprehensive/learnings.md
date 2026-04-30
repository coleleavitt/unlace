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
