// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D4E0
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D4E0 jmp     cs:off_4E9258
//
// Resolved target: get_first_fcref_to
// Target address:  0x4EBC48
// GOT/IAT slot:    0x4E9258
// Slot symbol:     off_4E9258
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}

