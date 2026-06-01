// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7100
// Name:            .ftello64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7100 jmp     cs:off_2C79068
//
// Resolved target: ftello64
// Target address:  0x2D11348
// GOT/IAT slot:    0x2C79068
// Slot symbol:     off_2C79068
// Target type:     __off64_t(FILE *stream)
// ============================================================

/* see target sig */ .ftello64(/* see target signature */)
{
    // Tail-call to ftello64 via GOT/IAT indirection
    return ftello64(/* forwarded args */);
}

