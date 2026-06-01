// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111350
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111350 jmp     cs:qalloc_ptr
//
// Resolved target: qalloc
// Target address:  0x8D3280
// GOT/IAT slot:    0x89F648
// Slot symbol:     qalloc_ptr
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}

