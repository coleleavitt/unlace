// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8B0
// Name:            .qmutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8B0 jmp     cs:off_2C7C440
//
// Resolved target: qmutex_lock
// Target address:  0x842CE0
// GOT/IAT slot:    0x2C7C440
// Slot symbol:     off_2C7C440
// Target type:     <no type info>
// ============================================================

void .qmutex_lock(/* see target signature */)
{
    // Tail-call to qmutex_lock via GOT/IAT indirection
    return qmutex_lock(/* forwarded args */);
}

