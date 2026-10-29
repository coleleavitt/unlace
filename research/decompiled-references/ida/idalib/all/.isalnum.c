// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A83E0
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A83E0 jmp     cs:off_2C799D8
//
// Resolved target: isalnum
// Target address:  0x2D11580
// GOT/IAT slot:    0x2C799D8
// Slot symbol:     off_2C799D8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

