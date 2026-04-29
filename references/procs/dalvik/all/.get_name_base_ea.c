// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5050
// Name:            .get_name_base_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5050 jmp     cs:off_1A010
//
// Resolved target: get_name_base_ea
// Target address:  0x1A390
// GOT/IAT slot:    0x1A010
// Slot symbol:     off_1A010
// Target type:     <no type info>
// ============================================================

void .get_name_base_ea(/* see target signature */)
{
    // Tail-call to get_name_base_ea via GOT/IAT indirection
    return get_name_base_ea(/* forwarded args */);
}

