// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A940
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A940 jmp     cs:add_dref_ptr
//
// Resolved target: add_dref
// Target address:  0x8D9218
// GOT/IAT slot:    0x8A4140
// Slot symbol:     add_dref_ptr
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

