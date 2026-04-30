// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F30
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F30 jmp     cs:get_first_dref_from_ptr
//
// Resolved target: get_first_dref_from
// Target address:  0x8D44A0
// GOT/IAT slot:    0x8A0438
// Slot symbol:     get_first_dref_from_ptr
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

