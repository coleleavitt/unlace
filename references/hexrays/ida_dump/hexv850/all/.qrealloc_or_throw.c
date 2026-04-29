// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBF0
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBF0 jmp     cs:off_4C0DE0
//
// Resolved target: qrealloc_or_throw
// Target address:  0x4C3DF8
// GOT/IAT slot:    0x4C0DE0
// Slot symbol:     off_4C0DE0
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

