// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C70
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C70 jmp     cs:qrealloc_ptr
//
// Resolved target: qrealloc
// Target address:  0x8D89C8
// GOT/IAT slot:    0x8A3AD8
// Slot symbol:     qrealloc_ptr
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

