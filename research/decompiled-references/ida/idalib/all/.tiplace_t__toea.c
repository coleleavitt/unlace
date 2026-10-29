// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9940
// Name:            .tiplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9940 jmp     cs:off_2C7A488
//
// Resolved target: tiplace_t__toea
// Target address:  0x55C030
// GOT/IAT slot:    0x2C7A488
// Slot symbol:     off_2C7A488
// Target type:     <no type info>
// ============================================================

void .tiplace_t__toea(/* see target signature */)
{
    // Tail-call to tiplace_t__toea via GOT/IAT indirection
    return tiplace_t__toea(/* forwarded args */);
}

