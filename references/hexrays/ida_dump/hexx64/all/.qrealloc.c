// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C740
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C740 jmp     cs:off_4EDB88
//
// Resolved target: qrealloc
// Target address:  0x4F1EB8
// GOT/IAT slot:    0x4EDB88
// Slot symbol:     off_4EDB88
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

