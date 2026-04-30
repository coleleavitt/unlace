// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169E0
// Name:            .get_debug_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169E0 jmp     cs:get_debug_name_ptr
//
// Resolved target: get_debug_name
// Target address:  0x8D6A18
// GOT/IAT slot:    0x8A2190
// Slot symbol:     get_debug_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_debug_name(/* see target signature */)
{
    // Tail-call to get_debug_name via GOT/IAT indirection
    return get_debug_name(/* forwarded args */);
}

