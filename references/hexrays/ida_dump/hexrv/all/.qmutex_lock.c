// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3F0
// Name:            .qmutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3F0 jmp     cs:off_4BF9E0
//
// Resolved target: qmutex_lock
// Target address:  0x4C2ED8
// GOT/IAT slot:    0x4BF9E0
// Slot symbol:     off_4BF9E0
// Target type:     <no type info>
// ============================================================

void .qmutex_lock(/* see target signature */)
{
    // Tail-call to qmutex_lock via GOT/IAT indirection
    return qmutex_lock(/* forwarded args */);
}

