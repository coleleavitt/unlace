// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D180
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D180 jmp     cs:off_4EE0A8
//
// Resolved target: toupper
// Target address:  0x4F23F8
// GOT/IAT slot:    0x4EE0A8
// Slot symbol:     off_4EE0A8
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

