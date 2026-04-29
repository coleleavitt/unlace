// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8360
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8360 jmp     cs:off_2A198
//
// Resolved target: get_ea_name
// Target address:  0x2BBA8
// GOT/IAT slot:    0x2A198
// Slot symbol:     off_2A198
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

