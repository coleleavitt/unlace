// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD60
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD60 jmp     cs:off_4C0698
//
// Resolved target: get_ea_name
// Target address:  0x4C3688
// GOT/IAT slot:    0x4C0698
// Slot symbol:     off_4C0698
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

