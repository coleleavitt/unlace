// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB2F0
// Name:            .qstr2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB2F0 jmp     cs:off_2C7B160
//
// Resolved target: qstr2user
// Target address:  0x8B6800
// GOT/IAT slot:    0x2C7B160
// Slot symbol:     off_2C7B160
// Target type:     <no type info>
// ============================================================

void .qstr2user(/* see target signature */)
{
    // Tail-call to qstr2user via GOT/IAT indirection
    return qstr2user(/* forwarded args */);
}

