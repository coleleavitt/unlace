// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C100
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C100 jmp     cs:off_4CE068
//
// Resolved target: qmakepath
// Target address:  0x4D0AC0
// GOT/IAT slot:    0x4CE068
// Slot symbol:     off_4CE068
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

