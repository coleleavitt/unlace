// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8320
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8320 jmp     cs:off_2C79978
//
// Resolved target: find_func_bounds
// Target address:  0x5C92B0
// GOT/IAT slot:    0x2C79978
// Slot symbol:     off_2C79978
// Target type:     __int64 __fastcall(int, int)
// ============================================================

/* see target sig */ .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

