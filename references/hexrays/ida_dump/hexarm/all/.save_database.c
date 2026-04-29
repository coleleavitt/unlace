// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EFC0
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EFC0 jmp     cs:off_4E9FC8
//
// Resolved target: save_database
// Target address:  0x4ECA18
// GOT/IAT slot:    0x4E9FC8
// Slot symbol:     off_4E9FC8
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

