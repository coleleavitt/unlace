// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0F0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0F0 jmp     cs:off_4DB060
//
// Resolved target: qmakepath
// Target address:  0x4DDA98
// GOT/IAT slot:    0x4DB060
// Slot symbol:     off_4DB060
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

