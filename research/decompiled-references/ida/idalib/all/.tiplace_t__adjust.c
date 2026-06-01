// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AF0
// Name:            .tiplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AF0 jmp     cs:off_2C7A560
//
// Resolved target: tiplace_t__adjust
// Target address:  0x55FC70
// GOT/IAT slot:    0x2C7A560
// Slot symbol:     off_2C7A560
// Target type:     <no type info>
// ============================================================

void .tiplace_t__adjust(/* see target signature */)
{
    // Tail-call to tiplace_t__adjust via GOT/IAT indirection
    return tiplace_t__adjust(/* forwarded args */);
}

