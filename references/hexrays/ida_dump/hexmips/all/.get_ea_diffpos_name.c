// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A450
// Name:            .get_ea_diffpos_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A450 jmp     cs:off_4CD210
//
// Resolved target: get_ea_diffpos_name
// Target address:  0x4CFC00
// GOT/IAT slot:    0x4CD210
// Slot symbol:     off_4CD210
// Target type:     <no type info>
// ============================================================

void .get_ea_diffpos_name(/* see target signature */)
{
    // Tail-call to get_ea_diffpos_name via GOT/IAT indirection
    return get_ea_diffpos_name(/* forwarded args */);
}

