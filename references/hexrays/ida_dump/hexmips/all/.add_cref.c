// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFB0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFB0 jmp     cs:off_4CDFC0
//
// Resolved target: add_cref
// Target address:  0x4D0A10
// GOT/IAT slot:    0x4CDFC0
// Slot symbol:     off_4CDFC0
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

