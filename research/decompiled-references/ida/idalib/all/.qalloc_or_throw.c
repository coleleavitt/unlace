// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCB0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCB0 jmp     cs:off_2C7B640
//
// Resolved target: qalloc_or_throw
// Target address:  0x83FDB0
// GOT/IAT slot:    0x2C7B640
// Slot symbol:     off_2C7B640
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

