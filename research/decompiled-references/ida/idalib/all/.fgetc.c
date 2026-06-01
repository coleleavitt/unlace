// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFF0
// Name:            .fgetc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFF0 jmp     cs:off_2C7B7E0
//
// Resolved target: fgetc
// Target address:  0x2D11CF8
// GOT/IAT slot:    0x2C7B7E0
// Slot symbol:     off_2C7B7E0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fgetc(/* see target signature */)
{
    // Tail-call to fgetc via GOT/IAT indirection
    return fgetc(/* forwarded args */);
}

