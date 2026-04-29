// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C4C0
// Name:            .qmutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C4C0 jmp     cs:off_4EDA48
//
// Resolved target: qmutex_lock
// Target address:  0x4F1D68
// GOT/IAT slot:    0x4EDA48
// Slot symbol:     off_4EDA48
// Target type:     <no type info>
// ============================================================

void .qmutex_lock(/* see target signature */)
{
    // Tail-call to qmutex_lock via GOT/IAT indirection
    return qmutex_lock(/* forwarded args */);
}

