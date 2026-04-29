// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B300
// Name:            .qmutex_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B300 jmp     cs:off_4ED168
//
// Resolved target: qmutex_create
// Target address:  0x4F1460
// GOT/IAT slot:    0x4ED168
// Slot symbol:     off_4ED168
// Target type:     <no type info>
// ============================================================

void .qmutex_create(/* see target signature */)
{
    // Tail-call to qmutex_create via GOT/IAT indirection
    return qmutex_create(/* forwarded args */);
}

