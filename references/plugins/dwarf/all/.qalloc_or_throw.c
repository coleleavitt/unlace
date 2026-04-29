// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA060
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA060 jmp     cs:off_CA018
//
// Resolved target: qalloc_or_throw
// Target address:  0xD0938
// GOT/IAT slot:    0xCA018
// Slot symbol:     off_CA018
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

