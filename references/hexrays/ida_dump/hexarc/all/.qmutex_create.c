// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x292F0
// Name:            .qmutex_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x292F0 jmp     cs:off_4B9160
//
// Resolved target: qmutex_create
// Target address:  0x4BBB30
// GOT/IAT slot:    0x4B9160
// Slot symbol:     off_4B9160
// Target type:     <no type info>
// ============================================================

void .qmutex_create(/* see target signature */)
{
    // Tail-call to qmutex_create via GOT/IAT indirection
    return qmutex_create(/* forwarded args */);
}

