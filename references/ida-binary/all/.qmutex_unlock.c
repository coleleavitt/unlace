// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111660
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111660 jmp     cs:qmutex_unlock_ptr
//
// Resolved target: qmutex_unlock
// Target address:  0x8D34A8
// GOT/IAT slot:    0x89F7D0
// Slot symbol:     qmutex_unlock_ptr
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

