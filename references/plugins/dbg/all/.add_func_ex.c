// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_13208
//
// Resolved target: add_func_ex
// Target address:  0x13588
// GOT/IAT slot:    0x13208
// Slot symbol:     off_13208
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

