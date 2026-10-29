// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A75D0
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A75D0 jmp     cs:off_2C792D0
//
// Resolved target: isalpha
// Target address:  0x2D113E0
// GOT/IAT slot:    0x2C792D0
// Slot symbol:     off_2C792D0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

