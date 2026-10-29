// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9320
// Name:            .tiplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9320 jmp     cs:off_2C7A178
//
// Resolved target: tiplace_t__clone
// Target address:  0x55A530
// GOT/IAT slot:    0x2C7A178
// Slot symbol:     off_2C7A178
// Target type:     <no type info>
// ============================================================

void .tiplace_t__clone(/* see target signature */)
{
    // Tail-call to tiplace_t__clone via GOT/IAT indirection
    return tiplace_t__clone(/* forwarded args */);
}

