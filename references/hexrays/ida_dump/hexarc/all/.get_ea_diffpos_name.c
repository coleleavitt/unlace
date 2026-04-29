// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29450
// Name:            .get_ea_diffpos_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29450 jmp     cs:off_4B9210
//
// Resolved target: get_ea_diffpos_name
// Target address:  0x4BBBE0
// GOT/IAT slot:    0x4B9210
// Slot symbol:     off_4B9210
// Target type:     <no type info>
// ============================================================

void .get_ea_diffpos_name(/* see target signature */)
{
    // Tail-call to get_ea_diffpos_name via GOT/IAT indirection
    return get_ea_diffpos_name(/* forwarded args */);
}

