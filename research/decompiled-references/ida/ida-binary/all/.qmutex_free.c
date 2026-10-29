// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D60
// Name:            .qmutex_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D60 jmp     cs:qmutex_free_ptr
//
// Resolved target: qmutex_free
// Target address:  0x8D5840
// GOT/IAT slot:    0x8A1350
// Slot symbol:     qmutex_free_ptr
// Target type:     <no type info>
// ============================================================

void .qmutex_free(/* see target signature */)
{
    // Tail-call to qmutex_free via GOT/IAT indirection
    return qmutex_free(/* forwarded args */);
}

