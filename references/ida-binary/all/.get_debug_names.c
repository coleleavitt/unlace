// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119480
// Name:            .get_debug_names
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119480 jmp     cs:get_debug_names_ptr
//
// Resolved target: get_debug_names
// Target address:  0x8D84B0
// GOT/IAT slot:    0x8A36E0
// Slot symbol:     get_debug_names_ptr
// Target type:     <no type info>
// ============================================================

void .get_debug_names(/* see target signature */)
{
    // Tail-call to get_debug_names via GOT/IAT indirection
    return get_debug_names(/* forwarded args */);
}

