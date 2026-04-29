// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBB0
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBB0 jmp     cs:off_4E9DC0
//
// Resolved target: isalpha
// Target address:  0x4EC800
// GOT/IAT slot:    0x4E9DC0
// Slot symbol:     off_4E9DC0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

