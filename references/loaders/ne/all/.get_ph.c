// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_B1D0
//
// Resolved target: get_ph
// Target address:  0xB480
// GOT/IAT slot:    0xB1D0
// Slot symbol:     off_B1D0
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

