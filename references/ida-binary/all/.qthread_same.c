// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1148D0
// Name:            .qthread_same
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1148D0 jmp     cs:qthread_same_ptr
//
// Resolved target: qthread_same
// Target address:  0x8D5538
// GOT/IAT slot:    0x8A1108
// Slot symbol:     qthread_same_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_same(/* see target signature */)
{
    // Tail-call to qthread_same via GOT/IAT indirection
    return qthread_same(/* forwarded args */);
}

