// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B680
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B680 jmp     cs:off_4CDB28
//
// Resolved target: qrealloc
// Target address:  0x4D0550
// GOT/IAT slot:    0x4CDB28
// Slot symbol:     off_4CDB28
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

