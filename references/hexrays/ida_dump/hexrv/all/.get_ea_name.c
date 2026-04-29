// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD60
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD60 jmp     cs:off_4BF698
//
// Resolved target: get_ea_name
// Target address:  0x4C2B88
// GOT/IAT slot:    0x4BF698
// Slot symbol:     off_4BF698
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

