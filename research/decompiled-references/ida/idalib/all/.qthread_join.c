// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9850
// Name:            .qthread_join
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9850 jmp     cs:off_2C7A410
//
// Resolved target: qthread_join
// Target address:  0x8423A0
// GOT/IAT slot:    0x2C7A410
// Slot symbol:     off_2C7A410
// Target type:     <no type info>
// ============================================================

void .qthread_join(/* see target signature */)
{
    // Tail-call to qthread_join via GOT/IAT indirection
    return qthread_join(/* forwarded args */);
}

