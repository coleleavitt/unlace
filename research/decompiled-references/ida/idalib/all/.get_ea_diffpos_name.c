// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7A0
// Name:            .get_ea_diffpos_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7A0 jmp     cs:off_2C7ABB8
//
// Resolved target: get_ea_diffpos_name
// Target address:  0x46F510
// GOT/IAT slot:    0x2C7ABB8
// Slot symbol:     off_2C7ABB8
// Target type:     <no type info>
// ============================================================

void .get_ea_diffpos_name(/* see target signature */)
{
    // Tail-call to get_ea_diffpos_name via GOT/IAT indirection
    return get_ea_diffpos_name(/* forwarded args */);
}

