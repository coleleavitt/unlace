// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC20
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC20 jmp     cs:off_4E9DF8
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4EC838
// GOT/IAT slot:    0x4E9DF8
// Slot symbol:     off_4E9DF8
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

