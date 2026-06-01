// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9530
// Name:            .ZSTD_trace_decompress_begin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9530 jmp     cs:off_2C7A280
//
// Resolved target: ZSTD_trace_decompress_begin
// Target address:  0x2D120E0
// GOT/IAT slot:    0x2C7A280
// Slot symbol:     off_2C7A280
// Target type:     <no type info>
// ============================================================

void .ZSTD_trace_decompress_begin(/* see target signature */)
{
    // Tail-call to ZSTD_trace_decompress_begin via GOT/IAT indirection
    return ZSTD_trace_decompress_begin(/* forwarded args */);
}

