// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC80
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC80 jmp     cs:off_4EDE28
//
// Resolved target: isalpha
// Target address:  0x4F2168
// GOT/IAT slot:    0x4EDE28
// Slot symbol:     off_4EDE28
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

