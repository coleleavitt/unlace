// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112A0
// Name:            .get_next_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112A0 jmp     cs:get_next_fcref_to_ptr
//
// Resolved target: get_next_fcref_to
// Target address:  0x8D3218
// GOT/IAT slot:    0x89F5F0
// Slot symbol:     get_next_fcref_to_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_fcref_to(/* see target signature */)
{
    // Tail-call to get_next_fcref_to via GOT/IAT indirection
    return get_next_fcref_to(/* forwarded args */);
}

