// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118790
// Name:            .qthread_self
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118790 jmp     cs:qthread_self_ptr
//
// Resolved target: qthread_self
// Target address:  0x8D7CB0
// GOT/IAT slot:    0x8A3068
// Slot symbol:     qthread_self_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_self(/* see target signature */)
{
    // Tail-call to qthread_self via GOT/IAT indirection
    return qthread_self(/* forwarded args */);
}

