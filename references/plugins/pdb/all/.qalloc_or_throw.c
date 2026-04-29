// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D050
// Name:            .qalloc_or_throw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D050 jmp     cs:off_B3010
//
// Resolved target: qalloc_or_throw
// Target address:  0xB3780
// GOT/IAT slot:    0xB3010
// Slot symbol:     off_B3010
// Target type:     <no type info>
// ============================================================

void .qalloc_or_throw(/* see target signature */)
{
    // Tail-call to qalloc_or_throw via GOT/IAT indirection
    return qalloc_or_throw(/* forwarded args */);
}

