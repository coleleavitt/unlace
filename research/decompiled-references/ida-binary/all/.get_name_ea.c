// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111EE0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111EE0 jmp     cs:get_name_ea_ptr
//
// Resolved target: get_name_ea
// Target address:  0x8D3A18
// GOT/IAT slot:    0x89FC10
// Slot symbol:     get_name_ea_ptr
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

