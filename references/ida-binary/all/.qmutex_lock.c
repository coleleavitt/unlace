// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B7A0
// Name:            .qmutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B7A0 jmp     cs:qmutex_lock_ptr
//
// Resolved target: qmutex_lock
// Target address:  0x8D9B08
// GOT/IAT slot:    0x8A4870
// Slot symbol:     qmutex_lock_ptr
// Target type:     <no type info>
// ============================================================

void .qmutex_lock(/* see target signature */)
{
    // Tail-call to qmutex_lock via GOT/IAT indirection
    return qmutex_lock(/* forwarded args */);
}

