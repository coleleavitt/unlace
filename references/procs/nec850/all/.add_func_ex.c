// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9660
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9660 jmp     cs:off_2E318
//
// Resolved target: add_func_ex
// Target address:  0x2E988
// GOT/IAT slot:    0x2E318
// Slot symbol:     off_2E318
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

