// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_1A108
//
// Resolved target: isalnum
// Target address:  0x1A3C0
// GOT/IAT slot:    0x1A108
// Slot symbol:     off_1A108
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

