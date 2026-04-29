// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_5030
//
// Resolved target: isxdigit
// Target address:  0x5200
// GOT/IAT slot:    0x5030
// Slot symbol:     off_5030
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

