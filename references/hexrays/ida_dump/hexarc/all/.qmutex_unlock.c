// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29780
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29780 jmp     cs:off_4B93A8
//
// Resolved target: qmutex_unlock
// Target address:  0x4BBD78
// GOT/IAT slot:    0x4B93A8
// Slot symbol:     off_4B93A8
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

