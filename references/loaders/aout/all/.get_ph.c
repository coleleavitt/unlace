// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_6108
//
// Resolved target: get_ph
// Target address:  0x62A0
// GOT/IAT slot:    0x6108
// Slot symbol:     off_6108
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

