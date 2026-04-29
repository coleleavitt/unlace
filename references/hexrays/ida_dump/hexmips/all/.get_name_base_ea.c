// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A190
// Name:            .get_name_base_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A190 jmp     cs:off_4CD0B0
//
// Resolved target: get_name_base_ea
// Target address:  0x4CFAA0
// GOT/IAT slot:    0x4CD0B0
// Slot symbol:     off_4CD0B0
// Target type:     <no type info>
// ============================================================

void .get_name_base_ea(/* see target signature */)
{
    // Tail-call to get_name_base_ea via GOT/IAT indirection
    return get_name_base_ea(/* forwarded args */);
}

