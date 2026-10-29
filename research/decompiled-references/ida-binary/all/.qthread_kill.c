// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119BB0
// Name:            .qthread_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119BB0 jmp     cs:qthread_kill_ptr
//
// Resolved target: qthread_kill
// Target address:  0x8D8950
// GOT/IAT slot:    0x8A3A78
// Slot symbol:     qthread_kill_ptr
// Target type:     <no type info>
// ============================================================

void .qthread_kill(/* see target signature */)
{
    // Tail-call to qthread_kill via GOT/IAT indirection
    return qthread_kill(/* forwarded args */);
}

