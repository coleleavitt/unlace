// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A270
// Name:            .qstr2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A270 jmp     cs:off_4C0120
//
// Resolved target: qstr2user
// Target address:  0x4C30E8
// GOT/IAT slot:    0x4C0120
// Slot symbol:     off_4C0120
// Target type:     <no type info>
// ============================================================

void .qstr2user(/* see target signature */)
{
    // Tail-call to qstr2user via GOT/IAT indirection
    return qstr2user(/* forwarded args */);
}

