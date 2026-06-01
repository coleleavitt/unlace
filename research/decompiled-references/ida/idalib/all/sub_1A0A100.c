// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A0A100
// Name:            sub_1A0A100
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1A0A100 jmp     sub_1A09D80
//
// Resolved target: sub_1A09D80
// Target address:  0x1A09D80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, unsigned int, __int64, double)
// ============================================================

/* see target sig */ sub_1A0A100(/* see target signature */)
{
    // Tail-call to sub_1A09D80 via direct jump indirection
    return sub_1A09D80(/* forwarded args */);
}

