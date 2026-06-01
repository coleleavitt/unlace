// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AB0
// Name:            .get_nlist_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AB0 jmp     cs:get_nlist_name_ptr
//
// Resolved target: get_nlist_name
// Target address:  0x8D7E98
// GOT/IAT slot:    0x8A31F8
// Slot symbol:     get_nlist_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_nlist_name(/* see target signature */)
{
    // Tail-call to get_nlist_name via GOT/IAT indirection
    return get_nlist_name(/* forwarded args */);
}

