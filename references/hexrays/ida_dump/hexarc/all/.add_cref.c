// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF80
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF80 jmp     cs:off_4B9FA8
//
// Resolved target: add_cref
// Target address:  0x4BC9D8
// GOT/IAT slot:    0x4B9FA8
// Slot symbol:     off_4B9FA8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

