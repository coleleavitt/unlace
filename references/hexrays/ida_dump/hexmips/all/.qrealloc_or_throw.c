// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBF0
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBF0 jmp     cs:off_4CDDE0
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4D0820
// GOT/IAT slot:    0x4CDDE0
// Slot symbol:     off_4CDDE0
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

