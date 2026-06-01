// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4A0
// Name:            .fopen64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4A0 jmp     cs:off_2C7C238
//
// Resolved target: fopen64
// Target address:  0x2D11FD8
// GOT/IAT slot:    0x2C7C238
// Slot symbol:     off_2C7C238
// Target type:     FILE *(const char *filename, const char *modes)
// ============================================================

/* see target sig */ .fopen64(/* see target signature */)
{
    // Tail-call to fopen64 via GOT/IAT indirection
    return fopen64(/* forwarded args */);
}

