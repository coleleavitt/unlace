// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1135D0
// Name:            .get_strlist_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1135D0 jmp     cs:get_strlist_options_ptr
//
// Resolved target: get_strlist_options
// Target address:  0x8D48E8
// GOT/IAT slot:    0x8A0788
// Slot symbol:     get_strlist_options_ptr
// Target type:     <no type info>
// ============================================================

void .get_strlist_options(/* see target signature */)
{
    // Tail-call to get_strlist_options via GOT/IAT indirection
    return get_strlist_options(/* forwarded args */);
}

