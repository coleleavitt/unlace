// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_80E0
//
// Resolved target: qrealloc
// Target address:  0x82B8
// GOT/IAT slot:    0x80E0
// Slot symbol:     off_80E0
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

