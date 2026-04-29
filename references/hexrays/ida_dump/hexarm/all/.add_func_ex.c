// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5F0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5F0 jmp     cs:off_4E9AE0
//
// Resolved target: add_func_ex
// Target address:  0x4EC500
// GOT/IAT slot:    0x4E9AE0
// Slot symbol:     off_4E9AE0
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

