// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_15008
//
// Resolved target: qalloc_or_throw
// Target address:  0x151F8
// GOT/IAT slot:    0x15008
// Slot symbol:     off_15008
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

