// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AABE0
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AABE0 jmp     cs:off_2C7ADD8
//
// Resolved target: add_func_ex
// Target address:  0x5D5A80
// GOT/IAT slot:    0x2C7ADD8
// Slot symbol:     off_2C7ADD8
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

