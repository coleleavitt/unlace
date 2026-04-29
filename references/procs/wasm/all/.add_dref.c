// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9080
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9080 jmp     cs:off_26028
//
// Resolved target: add_dref
// Target address:  0x26338
// GOT/IAT slot:    0x26028
// Slot symbol:     off_26028
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

