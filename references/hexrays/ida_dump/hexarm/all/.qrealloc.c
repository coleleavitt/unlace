// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E6B0
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E6B0 jmp     cs:off_4E9B40
//
// Resolved target: qrealloc
// Target address:  0x4EC568
// GOT/IAT slot:    0x4E9B40
// Slot symbol:     off_4E9B40
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

