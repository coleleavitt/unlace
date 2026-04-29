// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10320
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10320 jmp     cs:off_2E178
//
// Resolved target: add_cref
// Target address:  0x36E08
// GOT/IAT slot:    0x2E178
// Slot symbol:     off_2E178
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

