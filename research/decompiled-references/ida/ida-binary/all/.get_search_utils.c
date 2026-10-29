// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116410
// Name:            .get_search_utils
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116410 jmp     cs:get_search_utils_ptr
//
// Resolved target: get_search_utils
// Target address:  0x8D6650
// GOT/IAT slot:    0x8A1EA8
// Slot symbol:     get_search_utils_ptr
// Target type:     <no type info>
// ============================================================

void .get_search_utils(/* see target signature */)
{
    // Tail-call to get_search_utils via GOT/IAT indirection
    return get_search_utils(/* forwarded args */);
}

