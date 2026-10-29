// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6D0
// Name:            .fopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6D0 jmp     cs:off_2C7AB50
//
// Resolved target: fopen
// Target address:  0x2D11988
// GOT/IAT slot:    0x2C7AB50
// Slot symbol:     off_2C7AB50
// Target type:     FILE *(const char *filename, const char *modes)
// ============================================================

/* see target sig */ .fopen(/* see target signature */)
{
    // Tail-call to fopen via GOT/IAT indirection
    return fopen(/* forwarded args */);
}

