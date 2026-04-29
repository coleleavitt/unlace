// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F130
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F130 jmp     cs:off_4EA080
//
// Resolved target: qmakepath
// Target address:  0x4ECAD8
// GOT/IAT slot:    0x4EA080
// Slot symbol:     off_4EA080
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

