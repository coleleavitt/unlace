// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A310
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A310 jmp     cs:off_4C0170
//
// Resolved target: isxdigit
// Target address:  0x4C3138
// GOT/IAT slot:    0x4C0170
// Slot symbol:     off_4C0170
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

