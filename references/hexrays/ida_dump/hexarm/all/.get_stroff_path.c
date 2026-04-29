// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E190
// Name:            .get_stroff_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E190 jmp     cs:off_4E98B0
//
// Resolved target: get_stroff_path
// Target address:  0x4EC2D0
// GOT/IAT slot:    0x4E98B0
// Slot symbol:     off_4E98B0
// Target type:     <no type info>
// ============================================================

void .get_stroff_path(/* see target signature */)
{
    // Tail-call to get_stroff_path via GOT/IAT indirection
    return get_stroff_path(/* forwarded args */);
}

