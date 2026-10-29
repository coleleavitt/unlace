// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC10
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC10 jmp     cs:off_2C7BDF0
//
// Resolved target: isxdigit
// Target address:  0x2D11EB8
// GOT/IAT slot:    0x2C7BDF0
// Slot symbol:     off_2C7BDF0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

