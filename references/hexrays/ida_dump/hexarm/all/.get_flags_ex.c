// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D470
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D470 jmp     cs:off_4E9220
//
// Resolved target: get_flags_ex
// Target address:  0x4EBC10
// GOT/IAT slot:    0x4E9220
// Slot symbol:     off_4E9220
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

