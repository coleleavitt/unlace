// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7EF0
// Name:            .qsem_post
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7EF0 jmp     cs:off_2C79760
//
// Resolved target: qsem_post
// Target address:  0x842580
// GOT/IAT slot:    0x2C79760
// Slot symbol:     off_2C79760
// Target type:     <no type info>
// ============================================================

void .qsem_post(/* see target signature */)
{
    // Tail-call to qsem_post via GOT/IAT indirection
    return qsem_post(/* forwarded args */);
}

