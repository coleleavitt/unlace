// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C100
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C100 jmp     cs:off_4C1068
//
// Resolved target: qmakepath
// Target address:  0x4C4098
// GOT/IAT slot:    0x4C1068
// Slot symbol:     off_4C1068
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

