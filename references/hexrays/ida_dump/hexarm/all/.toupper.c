// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F070
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F070 jmp     cs:off_4EA020
//
// Resolved target: toupper
// Target address:  0x4ECA70
// GOT/IAT slot:    0x4EA020
// Slot symbol:     off_4EA020
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

