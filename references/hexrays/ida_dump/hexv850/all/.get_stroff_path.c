// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B170
// Name:            .get_stroff_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B170 jmp     cs:off_4C08A0
//
// Resolved target: get_stroff_path
// Target address:  0x4C3898
// GOT/IAT slot:    0x4C08A0
// Slot symbol:     off_4C08A0
// Target type:     <no type info>
// ============================================================

void .get_stroff_path(/* see target signature */)
{
    // Tail-call to get_stroff_path via GOT/IAT indirection
    return get_stroff_path(/* forwarded args */);
}

