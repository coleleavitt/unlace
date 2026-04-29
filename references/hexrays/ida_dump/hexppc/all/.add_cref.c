// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFA0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFA0 jmp     cs:off_4DAFB8
//
// Resolved target: add_cref
// Target address:  0x4DD9E8
// GOT/IAT slot:    0x4DAFB8
// Slot symbol:     off_4DAFB8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

