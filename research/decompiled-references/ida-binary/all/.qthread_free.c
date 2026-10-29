// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ACA0
// Name:            .qthread_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ACA0 jmp     cs:qthread_free_ptr
//
// Resolved target: qthread_free
// Target address:  0x8D9430
// GOT/IAT slot:    0x8A42F0
// Slot symbol:     qthread_free_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_free(/* see target signature */)
{
    // Tail-call to qthread_free via GOT/IAT indirection
    return qthread_free(/* forwarded args */);
}

