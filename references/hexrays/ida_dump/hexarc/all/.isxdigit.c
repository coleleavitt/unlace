// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29310
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29310 jmp     cs:off_4B9170
//
// Resolved target: isxdigit
// Target address:  0x4BBB40
// GOT/IAT slot:    0x4B9170
// Slot symbol:     off_4B9170
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

