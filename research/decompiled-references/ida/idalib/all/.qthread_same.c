// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A95E0
// Name:            .qthread_same
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A95E0 jmp     cs:off_2C7A2D8
//
// Resolved target: qthread_same
// Target address:  0x842340
// GOT/IAT slot:    0x2C7A2D8
// Slot symbol:     off_2C7A2D8
// Target type:     <no type info>
// ============================================================

void .qthread_same(/* see target signature */)
{
    // Tail-call to qthread_same via GOT/IAT indirection
    return qthread_same(/* forwarded args */);
}

