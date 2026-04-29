// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9100
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9100 jmp     cs:off_89068
//
// Resolved target: add_dref
// Target address:  0x8C368
// GOT/IAT slot:    0x89068
// Slot symbol:     off_89068
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

