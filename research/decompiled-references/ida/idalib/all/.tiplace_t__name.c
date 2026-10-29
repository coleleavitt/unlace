// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A40
// Name:            .tiplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A40 jmp     cs:off_2C79508
//
// Resolved target: tiplace_t__name
// Target address:  0x55C010
// GOT/IAT slot:    0x2C79508
// Slot symbol:     off_2C79508
// Target type:     <no type info>
// ============================================================

void .tiplace_t__name(/* see target signature */)
{
    // Tail-call to tiplace_t__name via GOT/IAT indirection
    return tiplace_t__name(/* forwarded args */);
}

