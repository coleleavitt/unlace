// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CCF0
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CCF0 jmp     cs:off_4EDE60
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4F21A0
// GOT/IAT slot:    0x4EDE60
// Slot symbol:     off_4EDE60
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

