// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8A0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8A0 jmp     cs:off_CA438
//
// Resolved target: add_func_ex
// Target address:  0xD0D70
// GOT/IAT slot:    0xCA438
// Slot symbol:     off_CA438
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

