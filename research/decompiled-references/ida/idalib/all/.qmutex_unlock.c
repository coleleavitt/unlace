// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7400
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7400 jmp     cs:off_2C791E8
//
// Resolved target: qmutex_unlock
// Target address:  0x842D30
// GOT/IAT slot:    0x2C791E8
// Slot symbol:     off_2C791E8
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

