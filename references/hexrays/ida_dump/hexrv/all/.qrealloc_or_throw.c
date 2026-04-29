// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBE0
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBE0 jmp     cs:off_4BFDD8
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4C32F0
// GOT/IAT slot:    0x4BFDD8
// Slot symbol:     off_4BFDD8
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

