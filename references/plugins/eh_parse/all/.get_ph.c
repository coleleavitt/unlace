// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68B0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68B0 jmp     cs:off_2F440
//
// Resolved target: get_ph
// Target address:  0x2FAC8
// GOT/IAT slot:    0x2F440
// Slot symbol:     off_2F440
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

