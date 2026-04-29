// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D0F0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D0F0 jmp     cs:off_4EE060
//
// Resolved target: add_cref
// Target address:  0x4F23B0
// GOT/IAT slot:    0x4EE060
// Slot symbol:     off_4EE060
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

