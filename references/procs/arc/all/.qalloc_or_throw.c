// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80C0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80C0 jmp     cs:off_2A048
//
// Resolved target: qalloc_or_throw
// Target address:  0x2BA58
// GOT/IAT slot:    0x2A048
// Slot symbol:     off_2A048
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

