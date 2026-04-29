// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD80
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD80 jmp     cs:off_4E96A8
//
// Resolved target: get_ea_name
// Target address:  0x4EC0C0
// GOT/IAT slot:    0x4E96A8
// Slot symbol:     off_4E96A8
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

