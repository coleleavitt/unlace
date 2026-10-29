// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C20
// Name:            .qthread_join
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C20 jmp     cs:qthread_join_ptr
//
// Resolved target: qthread_join
// Target address:  0x8D5780
// GOT/IAT slot:    0x8A12B0
// Slot symbol:     qthread_join_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_join(/* see target signature */)
{
    // Tail-call to qthread_join via GOT/IAT indirection
    return qthread_join(/* forwarded args */);
}

