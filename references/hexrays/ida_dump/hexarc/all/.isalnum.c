// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1F0
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1F0 jmp     cs:off_4B98E0
//
// Resolved target: isalnum
// Target address:  0x4BC2E0
// GOT/IAT slot:    0x4B98E0
// Slot symbol:     off_4B98E0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

