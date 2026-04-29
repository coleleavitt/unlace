// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6510
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6510 jmp     cs:off_2D270
//
// Resolved target: add_func_ex
// Target address:  0x2D770
// GOT/IAT slot:    0x2D270
// Slot symbol:     off_2D270
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

