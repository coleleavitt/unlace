// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_80D0
//
// Resolved target: get_ea_name
// Target address:  0x8330
// GOT/IAT slot:    0x80D0
// Slot symbol:     off_80D0
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

