// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE00
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE00 jmp     cs:off_4EDEE8
//
// Resolved target: get_ph
// Target address:  0x4F2238
// GOT/IAT slot:    0x4EDEE8
// Slot symbol:     off_4EDEE8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

