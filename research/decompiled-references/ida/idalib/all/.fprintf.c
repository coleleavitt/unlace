// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE10
// Name:            .fprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE10 jmp     cs:off_2C7AEF0
//
// Resolved target: fprintf
// Target address:  0x2D11A68
// GOT/IAT slot:    0x2C7AEF0
// Slot symbol:     off_2C7AEF0
// Target type:     int(FILE *stream, const char *format, ...)
// ============================================================

/* see target sig */ .fprintf(/* see target signature */)
{
    // Tail-call to fprintf via GOT/IAT indirection
    return fprintf(/* forwarded args */);
}

