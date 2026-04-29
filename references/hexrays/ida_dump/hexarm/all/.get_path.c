// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA20
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA20 jmp     cs:off_4E9CF8
//
// Resolved target: get_path
// Target address:  0x4EC738
// GOT/IAT slot:    0x4E9CF8
// Slot symbol:     off_4E9CF8
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

