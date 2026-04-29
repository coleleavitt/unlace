// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B670
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B670 jmp     cs:off_4BFB20
//
// Resolved target: qrealloc
// Target address:  0x4C3020
// GOT/IAT slot:    0x4BFB20
// Slot symbol:     off_4BFB20
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

