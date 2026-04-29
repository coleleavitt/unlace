// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B010
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B010 jmp     cs:off_4B9FF0
//
// Resolved target: toupper
// Target address:  0x4BCA20
// GOT/IAT slot:    0x4B9FF0
// Slot symbol:     off_4B9FF0
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

