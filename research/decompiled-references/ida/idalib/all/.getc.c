// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB5F0
// Name:            .getc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB5F0 jmp     cs:off_2C7B2E0
//
// Resolved target: getc
// Target address:  0x2D11BA0
// GOT/IAT slot:    0x2C7B2E0
// Slot symbol:     off_2C7B2E0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .getc(/* see target signature */)
{
    // Tail-call to getc via GOT/IAT indirection
    return getc(/* forwarded args */);
}

