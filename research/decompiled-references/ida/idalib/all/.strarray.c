// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D30
// Name:            .strarray
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D30 jmp     cs:off_2C7A680
//
// Resolved target: strarray
// Target address:  0x84E820
// GOT/IAT slot:    0x2C7A680
// Slot symbol:     off_2C7A680
// Target type:     <no type info>
// ============================================================

void .strarray(/* see target signature */)
{
    // Tail-call to strarray via GOT/IAT indirection
    return strarray(/* forwarded args */);
}

