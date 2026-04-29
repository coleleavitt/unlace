// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5B0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5B0 jmp     cs:off_4DAAC0
//
// Resolved target: add_func_ex
// Target address:  0x4DD4C0
// GOT/IAT slot:    0x4DAAC0
// Slot symbol:     off_4DAAC0
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

