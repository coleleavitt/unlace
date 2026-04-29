// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AA0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AA0 jmp     cs:off_89538
//
// Resolved target: qmakepath
// Target address:  0x8C868
// GOT/IAT slot:    0x89538
// Slot symbol:     off_89538
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

