// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8100
// Name:            .tiplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8100 jmp     cs:off_2C79868
//
// Resolved target: tiplace_t__leave
// Target address:  0x55C090
// GOT/IAT slot:    0x2C79868
// Slot symbol:     off_2C79868
// Target type:     <no type info>
// ============================================================

void .tiplace_t__leave(/* see target signature */)
{
    // Tail-call to tiplace_t__leave via GOT/IAT indirection
    return tiplace_t__leave(/* forwarded args */);
}

