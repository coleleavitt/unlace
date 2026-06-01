// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116980
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116980 jmp     cs:save_database_ptr
//
// Resolved target: save_database
// Target address:  0x8D69E8
// GOT/IAT slot:    0x8A2160
// Slot symbol:     save_database_ptr
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

