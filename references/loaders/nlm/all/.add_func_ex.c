// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_80E8
//
// Resolved target: add_func_ex
// Target address:  0x87C8
// GOT/IAT slot:    0x80E8
// Slot symbol:     off_80E8
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

