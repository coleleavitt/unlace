// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170F0
// Name:            .qsem_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170F0 jmp     cs:qsem_wait_ptr
//
// Resolved target: qsem_wait
// Target address:  0x8D6E68
// GOT/IAT slot:    0x8A2518
// Slot symbol:     qsem_wait_ptr
// Target type:     <no type info>
// ============================================================

void .qsem_wait(/* see target signature */)
{
    // Tail-call to qsem_wait via GOT/IAT indirection
    return qsem_wait(/* forwarded args */);
}

