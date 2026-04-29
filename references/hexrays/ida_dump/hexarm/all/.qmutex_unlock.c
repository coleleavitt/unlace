// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D790
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D790 jmp     cs:off_4E93B0
//
// Resolved target: qmutex_unlock
// Target address:  0x4EBDA0
// GOT/IAT slot:    0x4E93B0
// Slot symbol:     off_4E93B0
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

