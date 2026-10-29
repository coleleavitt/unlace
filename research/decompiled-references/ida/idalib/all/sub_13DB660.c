// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x13DB660
// Name:            sub_13DB660
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x13DB660 jmp     sub_13DB5F0
//
// Resolved target: sub_13DB5F0
// Target address:  0x13DB5F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_BYTE *, __int64, __m128i, double)
// ============================================================

/* see target sig */ sub_13DB660(/* see target signature */)
{
    // Tail-call to sub_13DB5F0 via direct jump indirection
    return sub_13DB5F0(/* forwarded args */);
}

