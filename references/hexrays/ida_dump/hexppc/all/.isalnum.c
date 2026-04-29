// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B200
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B200 jmp     cs:off_4DA8E8
//
// Resolved target: isalnum
// Target address:  0x4DD2E8
// GOT/IAT slot:    0x4DA8E8
// Slot symbol:     off_4DA8E8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

