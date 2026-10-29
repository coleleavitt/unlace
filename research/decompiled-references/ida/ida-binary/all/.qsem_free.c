// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111150
// Name:            .qsem_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111150 jmp     cs:qsem_free_ptr
//
// Resolved target: qsem_free
// Target address:  0x8D3140
// GOT/IAT slot:    0x89F548
// Slot symbol:     qsem_free_ptr
// Target type:     <no type info>
// ============================================================

void .qsem_free(/* see target signature */)
{
    // Tail-call to qsem_free via GOT/IAT indirection
    return qsem_free(/* forwarded args */);
}

