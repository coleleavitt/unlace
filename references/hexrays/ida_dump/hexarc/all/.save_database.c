// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF60
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF60 jmp     cs:off_4B9F98
//
// Resolved target: save_database
// Target address:  0x4BC9C8
// GOT/IAT slot:    0x4B9F98
// Slot symbol:     off_4B9F98
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

