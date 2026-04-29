// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0D0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0D0 jmp     cs:off_4BA050
//
// Resolved target: qmakepath
// Target address:  0x4BCA88
// GOT/IAT slot:    0x4BA050
// Slot symbol:     off_4BA050
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

