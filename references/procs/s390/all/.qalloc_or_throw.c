// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10050
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10050 jmp     cs:off_2E010
//
// Resolved target: qalloc_or_throw
// Target address:  0x36C88
// GOT/IAT slot:    0x2E010
// Slot symbol:     off_2E010
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

