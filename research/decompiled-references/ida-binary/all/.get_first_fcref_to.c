// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191C0
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191C0 jmp     cs:get_first_fcref_to_ptr
//
// Resolved target: get_first_fcref_to
// Target address:  0x8D82E8
// GOT/IAT slot:    0x8A3580
// Slot symbol:     get_first_fcref_to_ptr
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}

