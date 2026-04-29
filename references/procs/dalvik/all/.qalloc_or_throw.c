// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5060
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5060 jmp     cs:off_1A018
//
// Resolved target: qalloc_or_throw
// Target address:  0x1A398
// GOT/IAT slot:    0x1A018
// Slot symbol:     off_1A018
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

