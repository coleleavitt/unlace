// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9570
// Name:            .hexplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9570 jmp     cs:off_2C7A2A0
//
// Resolved target: hexplace_t__toea
// Target address:  0x425440
// GOT/IAT slot:    0x2C7A2A0
// Slot symbol:     off_2C7A2A0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__toea(/* see target signature */)
{
    // Tail-call to hexplace_t__toea via GOT/IAT indirection
    return hexplace_t__toea(/* forwarded args */);
}

