// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7C0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7C0 jmp     cs:off_B33C8
//
// Resolved target: add_func_ex
// Target address:  0xB3B68
// GOT/IAT slot:    0xB33C8
// Slot symbol:     off_B33C8
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

