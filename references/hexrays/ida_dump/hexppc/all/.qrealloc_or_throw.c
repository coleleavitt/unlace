// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBE0
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBE0 jmp     cs:off_4DADD8
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4DD7F8
// GOT/IAT slot:    0x4DADD8
// Slot symbol:     off_4DADD8
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

