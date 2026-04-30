// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114160
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114160 jmp     cs:get_first_fcref_from_ptr
//
// Resolved target: get_first_fcref_from
// Target address:  0x8D5030
// GOT/IAT slot:    0x8A0D50
// Slot symbol:     get_first_fcref_from_ptr
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

