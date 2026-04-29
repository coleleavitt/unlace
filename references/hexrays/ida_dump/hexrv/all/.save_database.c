// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF80
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF80 jmp     cs:off_4BFFA8
//
// Resolved target: save_database
// Target address:  0x4C34D0
// GOT/IAT slot:    0x4BFFA8
// Slot symbol:     off_4BFFA8
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

