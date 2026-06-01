// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9630
// Name:            .ZSTD_trace_decompress_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9630 jmp     cs:off_2C7A300
//
// Resolved target: ZSTD_trace_decompress_end
// Target address:  0x2D120E8
// GOT/IAT slot:    0x2C7A300
// Slot symbol:     off_2C7A300
// Target type:     <no type info>
// ============================================================

void .ZSTD_trace_decompress_end(/* see target signature */)
{
    // Tail-call to ZSTD_trace_decompress_end via GOT/IAT indirection
    return ZSTD_trace_decompress_end(/* forwarded args */);
}

