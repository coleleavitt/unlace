// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB280
// Name:            .ZSTD_trace_compress_begin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB280 jmp     cs:off_2C7B128
//
// Resolved target: ZSTD_trace_compress_begin
// Target address:  0x2D12100
// GOT/IAT slot:    0x2C7B128
// Slot symbol:     off_2C7B128
// Target type:     <no type info>
// ============================================================

void .ZSTD_trace_compress_begin(/* see target signature */)
{
    // Tail-call to ZSTD_trace_compress_begin via GOT/IAT indirection
    return ZSTD_trace_compress_begin(/* forwarded args */);
}

