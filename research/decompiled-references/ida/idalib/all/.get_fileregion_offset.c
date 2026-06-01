// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98E0
// Name:            .get_fileregion_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98E0 jmp     cs:off_2C7A458
//
// Resolved target: get_fileregion_offset
// Target address:  0x6429E0
// GOT/IAT slot:    0x2C7A458
// Slot symbol:     off_2C7A458
// Target type:     <no type info>
// ============================================================

void .get_fileregion_offset(/* see target signature */)
{
    // Tail-call to get_fileregion_offset via GOT/IAT indirection
    return get_fileregion_offset(/* forwarded args */);
}

