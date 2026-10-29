// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD5E0
// Name:            .vcred_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD5E0 jmp     cs:off_2C7C2D8
//
// Resolved target: vcred_init
// Target address:  0x7CA2F0
// GOT/IAT slot:    0x2C7C2D8
// Slot symbol:     off_2C7C2D8
// Target type:     __int64 __fastcall(int, int, int, int, int, int, __int64, __int64, __int64, __int64, __int64, int, int, int, int, void *ptr, __int64, int, int, __int64, __int64, __int64, int, __int64, __int64, __int64, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .vcred_init(/* see target signature */)
{
    // Tail-call to vcred_init via GOT/IAT indirection
    return vcred_init(/* forwarded args */);
}

