// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66A0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66A0 jmp     cs:off_1D338
//
// Resolved target: add_cref
// Target address:  0x1D840
// GOT/IAT slot:    0x1D338
// Slot symbol:     off_1D338
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

