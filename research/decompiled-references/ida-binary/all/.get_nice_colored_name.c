// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113BF0
// Name:            .get_nice_colored_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113BF0 jmp     cs:get_nice_colored_name_ptr
//
// Resolved target: get_nice_colored_name
// Target address:  0x8D4CD0
// GOT/IAT slot:    0x8A0A98
// Slot symbol:     get_nice_colored_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_nice_colored_name(/* see target signature */)
{
    // Tail-call to get_nice_colored_name via GOT/IAT indirection
    return get_nice_colored_name(/* forwarded args */);
}

