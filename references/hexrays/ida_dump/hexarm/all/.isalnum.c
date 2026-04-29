// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E220
// Name:            .isalnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E220 jmp     cs:off_4E98F8
//
// Resolved target: isalnum
// Target address:  0x4EC318
// GOT/IAT slot:    0x4E98F8
// Slot symbol:     off_4E98F8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalnum(/* see target signature */)
{
    // Tail-call to isalnum via GOT/IAT indirection
    return isalnum(/* forwarded args */);
}

