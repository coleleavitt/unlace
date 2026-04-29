// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5C0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5C0 jmp     cs:off_4CDAC8
//
// Resolved target: add_func_ex
// Target address:  0x4D04E8
// GOT/IAT slot:    0x4CDAC8
// Slot symbol:     off_4CDAC8
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

