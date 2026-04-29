// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2F0
// Name:            .qmutex_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2F0 jmp     cs:off_4BF160
//
// Resolved target: qmutex_create
// Target address:  0x4C2628
// GOT/IAT slot:    0x4BF160
// Slot symbol:     off_4BF160
// Target type:     <no type info>
// ============================================================

void .qmutex_create(/* see target signature */)
{
    // Tail-call to qmutex_create via GOT/IAT indirection
    return qmutex_create(/* forwarded args */);
}

