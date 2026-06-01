// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74F0
// Name:            .ZSTD_trace_compress_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74F0 jmp     cs:off_2C79260
//
// Resolved target: ZSTD_trace_compress_end
// Target address:  0x2D120D8
// GOT/IAT slot:    0x2C79260
// Slot symbol:     off_2C79260
// Target type:     <no type info>
// ============================================================

void .ZSTD_trace_compress_end(/* see target signature */)
{
    // Tail-call to ZSTD_trace_compress_end via GOT/IAT indirection
    return ZSTD_trace_compress_end(/* forwarded args */);
}

