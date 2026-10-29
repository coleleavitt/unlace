// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A90
// Name:            .hexplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A90 jmp     cs:off_2C79D30
//
// Resolved target: hexplace_t__prev
// Target address:  0x425170
// GOT/IAT slot:    0x2C79D30
// Slot symbol:     off_2C79D30
// Target type:     <no type info>
// ============================================================

void .hexplace_t__prev(/* see target signature */)
{
    // Tail-call to hexplace_t__prev via GOT/IAT indirection
    return hexplace_t__prev(/* forwarded args */);
}

