// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B320
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B320 jmp     cs:off_4ED178
//
// Resolved target: isxdigit
// Target address:  0x4F1470
// GOT/IAT slot:    0x4ED178
// Slot symbol:     off_4ED178
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

