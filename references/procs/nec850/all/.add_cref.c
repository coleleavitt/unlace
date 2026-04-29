// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9970
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9970 jmp     cs:off_2E4A0
//
// Resolved target: add_cref
// Target address:  0x2EB28
// GOT/IAT slot:    0x2E4A0
// Slot symbol:     off_2E4A0
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

