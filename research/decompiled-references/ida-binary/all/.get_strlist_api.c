// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D40
// Name:            .get_strlist_api
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D40 jmp     cs:get_strlist_api_ptr
//
// Resolved target: get_strlist_api
// Target address:  0x8D5830
// GOT/IAT slot:    0x8A1340
// Slot symbol:     get_strlist_api_ptr
// Target type:     <no type info>
// ============================================================

void .get_strlist_api(/* see target signature */)
{
    // Tail-call to get_strlist_api via GOT/IAT indirection
    return get_strlist_api(/* forwarded args */);
}

