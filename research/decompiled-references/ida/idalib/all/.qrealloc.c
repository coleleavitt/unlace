// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC740
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC740 jmp     cs:off_2C7BB88
//
// Resolved target: qrealloc
// Target address:  0x83FCE0
// GOT/IAT slot:    0x2C7BB88
// Slot symbol:     off_2C7BB88
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

