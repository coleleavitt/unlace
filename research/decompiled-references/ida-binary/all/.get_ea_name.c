// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B770
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B770 jmp     cs:get_ea_name_ptr
//
// Resolved target: get_ea_name
// Target address:  0x8D9AF0
// GOT/IAT slot:    0x8A4858
// Slot symbol:     get_ea_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

