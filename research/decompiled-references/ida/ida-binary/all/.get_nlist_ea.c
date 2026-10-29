// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1148B0
// Name:            .get_nlist_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1148B0 jmp     cs:get_nlist_ea_ptr
//
// Resolved target: get_nlist_ea
// Target address:  0x8D5520
// GOT/IAT slot:    0x8A10F8
// Slot symbol:     get_nlist_ea_ptr
// Target type:     <no type info>
// ============================================================

void .get_nlist_ea(/* see target signature */)
{
    // Tail-call to get_nlist_ea via GOT/IAT indirection
    return get_nlist_ea(/* forwarded args */);
}

