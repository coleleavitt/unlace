// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1A0
// Name:            .fgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1A0 jmp     cs:off_2C7B8B8
//
// Resolved target: fgets
// Target address:  0x2D11D30
// GOT/IAT slot:    0x2C7B8B8
// Slot symbol:     off_2C7B8B8
// Target type:     char *(char *s, int n, FILE *stream)
// ============================================================

/* see target sig */ .fgets(/* see target signature */)
{
    // Tail-call to fgets via GOT/IAT indirection
    return fgets(/* forwarded args */);
}

