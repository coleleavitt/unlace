// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BE0
// Name:            .qsem_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BE0 jmp     cs:qsem_create_ptr
//
// Resolved target: qsem_create
// Target address:  0x8D3830
// GOT/IAT slot:    0x89FA90
// Slot symbol:     qsem_create_ptr
// Target type:     <no type info>
// ============================================================

void .qsem_create(/* see target signature */)
{
    // Tail-call to qsem_create via GOT/IAT indirection
    return qsem_create(/* forwarded args */);
}

