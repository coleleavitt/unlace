// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19910
// Name:            sub_19910
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x19910 jmp     sub_16FE0
//
// Resolved target: sub_16FE0
// Target address:  0x16FE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64, __int64, double, double)
// ============================================================

/* see target sig */ sub_19910(/* see target signature */)
{
    // Tail-call to sub_16FE0 via direct jump indirection
    return sub_16FE0(/* forwarded args */);
}

