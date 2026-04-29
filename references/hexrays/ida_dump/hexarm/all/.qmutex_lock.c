// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E430
// Name:            .qmutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E430 jmp     cs:off_4E9A00
//
// Resolved target: qmutex_lock
// Target address:  0x4EC420
// GOT/IAT slot:    0x4E9A00
// Slot symbol:     off_4E9A00
// Target type:     <no type info>
// ============================================================

void .qmutex_lock(/* see target signature */)
{
    // Tail-call to qmutex_lock via GOT/IAT indirection
    return qmutex_lock(/* forwarded args */);
}

