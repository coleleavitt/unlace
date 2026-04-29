// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7180
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7180 jmp     cs:off_260A8
//
// Resolved target: get_ea_name
// Target address:  0x26360
// GOT/IAT slot:    0x260A8
// Slot symbol:     off_260A8
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

