// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB030
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB030 jmp     cs:off_2C7B000
//
// Resolved target: guess_func_cc
// Target address:  0x6AFDD0
// GOT/IAT slot:    0x2C7B000
// Slot symbol:     off_2C7B000
// Target type:     __int64 __fastcall(int, int, int)
// ============================================================

/* see target sig */ .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

