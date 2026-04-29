// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D270
// Name:            .qstr2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D270 jmp     cs:off_4E9120
//
// Resolved target: qstr2user
// Target address:  0x4EBB10
// GOT/IAT slot:    0x4E9120
// Slot symbol:     off_4E9120
// Target type:     <no type info>
// ============================================================

void .qstr2user(/* see target signature */)
{
    // Tail-call to qstr2user via GOT/IAT indirection
    return qstr2user(/* forwarded args */);
}

