// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4070
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4070 jmp     cs:off_23020
//
// Resolved target: qalloc_or_throw
// Target address:  0x23440
// GOT/IAT slot:    0x23020
// Slot symbol:     off_23020
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

