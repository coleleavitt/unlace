// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A930
// Name:            .qmutex_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A930 jmp     cs:qmutex_create_ptr
//
// Resolved target: qmutex_create
// Target address:  0x8D9210
// GOT/IAT slot:    0x8A4138
// Slot symbol:     qmutex_create_ptr
// Target type:     <no type info>
// ============================================================

void .qmutex_create(/* see target signature */)
{
    // Tail-call to qmutex_create via GOT/IAT indirection
    return qmutex_create(/* forwarded args */);
}

