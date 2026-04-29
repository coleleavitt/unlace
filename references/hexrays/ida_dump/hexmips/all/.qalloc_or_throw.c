// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1B0
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1B0 jmp     cs:off_4CD0C0
//
// Resolved target: qalloc_or_throw
// Target address:  0x4CFAB0
// GOT/IAT slot:    0x4CD0C0
// Slot symbol:     off_4CD0C0
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

