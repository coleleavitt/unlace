// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112C0
// Name:            .qthread_equal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112C0 jmp     cs:qthread_equal_ptr
//
// Resolved target: qthread_equal
// Target address:  0x8D3228
// GOT/IAT slot:    0x89F600
// Slot symbol:     qthread_equal_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_equal(/* see target signature */)
{
    // Tail-call to qthread_equal via GOT/IAT indirection
    return qthread_equal(/* forwarded args */);
}

