// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA520
// Name:            .get_search_utils
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA520 jmp     cs:off_2C7AA78
//
// Resolved target: get_search_utils
// Target address:  0x5099C0
// GOT/IAT slot:    0x2C7AA78
// Slot symbol:     off_2C7AA78
// Target type:     <no type info>
// ============================================================

void .get_search_utils(/* see target signature */)
{
    // Tail-call to get_search_utils via GOT/IAT indirection
    return get_search_utils(/* forwarded args */);
}

