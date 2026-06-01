// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8D0
// Name:            .get_debug_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8D0 jmp     cs:off_2C7AC50
//
// Resolved target: get_debug_name
// Target address:  0x4CF5E0
// GOT/IAT slot:    0x2C7AC50
// Slot symbol:     off_2C7AC50
// Target type:     <no type info>
// ============================================================

void .get_debug_name(/* see target signature */)
{
    // Tail-call to get_debug_name via GOT/IAT indirection
    return get_debug_name(/* forwarded args */);
}

