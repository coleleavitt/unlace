// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113860
// Name:            .qthread_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113860 jmp     cs:qthread_create_ptr
//
// Resolved target: qthread_create
// Target address:  0x8D4A88
// GOT/IAT slot:    0x8A08D0
// Slot symbol:     qthread_create_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_create(/* see target signature */)
{
    // Tail-call to qthread_create via GOT/IAT indirection
    return qthread_create(/* forwarded args */);
}

