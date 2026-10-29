// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA4E0
// Name:            .tiplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA4E0 jmp     cs:off_2C7AA58
//
// Resolved target: tiplace_t__enter
// Target address:  0x55C050
// GOT/IAT slot:    0x2C7AA58
// Slot symbol:     off_2C7AA58
// Target type:     <no type info>
// ============================================================

void .tiplace_t__enter(/* see target signature */)
{
    // Tail-call to tiplace_t__enter via GOT/IAT indirection
    return tiplace_t__enter(/* forwarded args */);
}

