// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9760
// Name:            .add_refinfo_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9760 jmp     cs:off_2C7A398
//
// Resolved target: add_refinfo_dref
// Target address:  0x3E49C0
// GOT/IAT slot:    0x2C7A398
// Slot symbol:     off_2C7A398
// Target type:     <no type info>
// ============================================================

void .add_refinfo_dref(/* see target signature */)
{
    // Tail-call to add_refinfo_dref via GOT/IAT indirection
    return add_refinfo_dref(/* forwarded args */);
}

