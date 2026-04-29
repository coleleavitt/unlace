// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D460
// Name:            .get_ea_diffpos_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D460 jmp     cs:off_4E9218
//
// Resolved target: get_ea_diffpos_name
// Target address:  0x4EBC08
// GOT/IAT slot:    0x4E9218
// Slot symbol:     off_4E9218
// Target type:     <no type info>
// ============================================================

void .get_ea_diffpos_name(/* see target signature */)
{
    // Tail-call to get_ea_diffpos_name via GOT/IAT indirection
    return get_ea_diffpos_name(/* forwarded args */);
}

