// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB50
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB50 jmp     cs:off_4B9D90
//
// Resolved target: isalpha
// Target address:  0x4BC7B0
// GOT/IAT slot:    0x4B9D90
// Slot symbol:     off_4B9D90
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

