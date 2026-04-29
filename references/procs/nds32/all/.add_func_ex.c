// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8500
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8500 jmp     cs:off_2A268
//
// Resolved target: add_func_ex
// Target address:  0x2A7D8
// GOT/IAT slot:    0x2A268
// Slot symbol:     off_2A268
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

