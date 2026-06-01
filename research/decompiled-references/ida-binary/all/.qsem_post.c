// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1127A0
// Name:            .qsem_post
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1127A0 jmp     cs:qsem_post_ptr
//
// Resolved target: qsem_post
// Target address:  0x8D3FD0
// GOT/IAT slot:    0x8A0070
// Slot symbol:     qsem_post_ptr
// Target type:     <no type info>
// ============================================================

void .qsem_post(/* see target signature */)
{
    // Tail-call to qsem_post via GOT/IAT indirection
    return qsem_post(/* forwarded args */);
}

