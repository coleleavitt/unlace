// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7450
// Name:            .get_compilers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7450 jmp     cs:off_2C79210
//
// Resolved target: get_compilers
// Target address:  0x5EE660
// GOT/IAT slot:    0x2C79210
// Slot symbol:     off_2C79210
// Target type:     __int64 __fastcall(int, int, int)
// ============================================================

/* see target sig */ .get_compilers(/* see target signature */)
{
    // Tail-call to get_compilers via GOT/IAT indirection
    return get_compilers(/* forwarded args */);
}

