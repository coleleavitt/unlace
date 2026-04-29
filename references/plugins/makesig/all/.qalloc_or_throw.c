// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3060
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3060 jmp     cs:off_20018
//
// Resolved target: qalloc_or_throw
// Target address:  0x21928
// GOT/IAT slot:    0x20018
// Slot symbol:     off_20018
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

