// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98D0
// Name:            .get_strlist_api
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98D0 jmp     cs:off_2C7A450
//
// Resolved target: get_strlist_api
// Target address:  0x6900A0
// GOT/IAT slot:    0x2C7A450
// Slot symbol:     off_2C7A450
// Target type:     <no type info>
// ============================================================

void .get_strlist_api(/* see target signature */)
{
    // Tail-call to get_strlist_api via GOT/IAT indirection
    return get_strlist_api(/* forwarded args */);
}

