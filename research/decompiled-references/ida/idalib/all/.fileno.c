// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA590
// Name:            .fileno
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA590 jmp     cs:off_2C7AAB0
//
// Resolved target: fileno
// Target address:  0x2D11978
// GOT/IAT slot:    0x2C7AAB0
// Slot symbol:     off_2C7AAB0
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fileno(/* see target signature */)
{
    // Tail-call to fileno via GOT/IAT indirection
    return fileno(/* forwarded args */);
}

