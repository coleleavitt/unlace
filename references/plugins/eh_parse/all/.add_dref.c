// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60E0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60E0 jmp     cs:off_2F058
//
// Resolved target: add_dref
// Target address:  0x2F6C8
// GOT/IAT slot:    0x2F058
// Slot symbol:     off_2F058
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

