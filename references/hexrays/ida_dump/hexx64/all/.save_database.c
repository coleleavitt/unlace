// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D0D0
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D0D0 jmp     cs:off_4EE050
//
// Resolved target: save_database
// Target address:  0x4F23A0
// GOT/IAT slot:    0x4EE050
// Slot symbol:     off_4EE050
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

