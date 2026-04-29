// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC50
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC50 jmp     cs:off_4E9610
//
// Resolved target: get_first_fcref_from
// Target address:  0x4EC028
// GOT/IAT slot:    0x4E9610
// Slot symbol:     off_4E9610
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

