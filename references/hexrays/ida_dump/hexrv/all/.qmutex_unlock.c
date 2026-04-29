// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A780
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A780 jmp     cs:off_4BF3A8
//
// Resolved target: qmutex_unlock
// Target address:  0x4C2870
// GOT/IAT slot:    0x4BF3A8
// Slot symbol:     off_4BF3A8
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

