// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29190
// Name:            .get_name_base_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29190 jmp     cs:off_4B90B0
//
// Resolved target: get_name_base_ea
// Target address:  0x4BBA80
// GOT/IAT slot:    0x4B90B0
// Slot symbol:     off_4B90B0
// Target type:     <no type info>
// ============================================================

void .get_name_base_ea(/* see target signature */)
{
    // Tail-call to get_name_base_ea via GOT/IAT indirection
    return get_name_base_ea(/* forwarded args */);
}

