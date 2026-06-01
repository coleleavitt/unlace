// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8350
// Name:            .qrealloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8350 jmp     cs:off_2C79990
//
// Resolved target: qrealloc_or_throw
// Target address:  0x83FDD0
// GOT/IAT slot:    0x2C79990
// Slot symbol:     off_2C79990
// Target type:     <no type info>
// ============================================================

void .qrealloc_or_throw(/* see target signature */)
{
    // Tail-call to qrealloc_or_throw via GOT/IAT indirection
    return qrealloc_or_throw(/* forwarded args */);
}

