// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D260
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D260 jmp     cs:off_4EE118
//
// Resolved target: qmakepath
// Target address:  0x4F2470
// GOT/IAT slot:    0x4EE118
// Slot symbol:     off_4EE118
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

