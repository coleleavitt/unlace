// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60D0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60D0 jmp     cs:off_2D050
//
// Resolved target: add_dref
// Target address:  0x2D550
// GOT/IAT slot:    0x2D050
// Slot symbol:     off_2D050
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

