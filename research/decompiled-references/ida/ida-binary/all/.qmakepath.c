// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114BA0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114BA0 jmp     cs:qmakepath_ptr
//
// Resolved target: qmakepath
// Target address:  0x8D5728
// GOT/IAT slot:    0x8A1270
// Slot symbol:     qmakepath_ptr
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

