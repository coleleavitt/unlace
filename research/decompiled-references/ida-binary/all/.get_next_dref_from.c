// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111550
// Name:            .get_next_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111550 jmp     cs:get_next_dref_from_ptr
//
// Resolved target: get_next_dref_from
// Target address:  0x8D33E8
// GOT/IAT slot:    0x89F748
// Slot symbol:     get_next_dref_from_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_dref_from(/* see target signature */)
{
    // Tail-call to get_next_dref_from via GOT/IAT indirection
    return get_next_dref_from(/* forwarded args */);
}

