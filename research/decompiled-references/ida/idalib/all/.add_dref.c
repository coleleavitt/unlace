// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFD0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFD0 jmp     cs:off_2C7BFD0
//
// Resolved target: add_dref
// Target address:  0x411880
// GOT/IAT slot:    0x2C7BFD0
// Slot symbol:     off_2C7BFD0
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

