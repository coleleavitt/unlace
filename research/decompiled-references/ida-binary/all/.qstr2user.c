// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BF0
// Name:            .qstr2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BF0 jmp     cs:qstr2user_ptr
//
// Resolved target: qstr2user
// Target address:  0x8D7560
// GOT/IAT slot:    0x8A2A98
// Slot symbol:     qstr2user_ptr
// Target type:     <no type info>
// ============================================================

void .qstr2user(/* see target signature */)
{
    // Tail-call to qstr2user via GOT/IAT indirection
    return qstr2user(/* forwarded args */);
}

