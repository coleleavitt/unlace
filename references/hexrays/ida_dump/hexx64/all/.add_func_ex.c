// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C680
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C680 jmp     cs:off_4EDB28
//
// Resolved target: add_func_ex
// Target address:  0x4F1E50
// GOT/IAT slot:    0x4EDB28
// Slot symbol:     off_4EDB28
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

