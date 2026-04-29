// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C2B0
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C2B0 jmp     cs:off_4ED940
//
// Resolved target: isalnum
// Target address:  0x4F1C60
// GOT/IAT slot:    0x4ED940
// Slot symbol:     off_4ED940
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

