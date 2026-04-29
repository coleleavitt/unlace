// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x291B0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x291B0 jmp     cs:off_4B90C0
//
// Resolved target: qalloc_or_throw
// Target address:  0x4BBA90
// GOT/IAT slot:    0x4B90C0
// Slot symbol:     off_4B90C0
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

