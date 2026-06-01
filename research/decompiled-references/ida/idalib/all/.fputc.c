// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACBC0
// Name:            .fputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACBC0 jmp     cs:off_2C7BDC8
//
// Resolved target: fputc
// Target address:  0x2D11EB0
// GOT/IAT slot:    0x2C7BDC8
// Slot symbol:     off_2C7BDC8
// Target type:     int(int c, FILE *stream)
// ============================================================

/* see target sig */ .fputc(/* see target signature */)
{
    // Tail-call to fputc via GOT/IAT indirection
    return fputc(/* forwarded args */);
}

