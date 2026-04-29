// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7B0
// Name:            .qmutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7B0 jmp     cs:off_4ED3C0
//
// Resolved target: qmutex_unlock
// Target address:  0x4F16B8
// GOT/IAT slot:    0x4ED3C0
// Slot symbol:     off_4ED3C0
// Target type:     <no type info>
// ============================================================

void .qmutex_unlock(/* see target signature */)
{
    // Tail-call to qmutex_unlock via GOT/IAT indirection
    return qmutex_unlock(/* forwarded args */);
}

