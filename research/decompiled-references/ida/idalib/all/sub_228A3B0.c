// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x228A3B0
// Name:            sub_228A3B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x228A3B0 jmp     sub_2288C30
//
// Resolved target: sub_2288C30
// Target address:  0x2288C30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(_QWORD *, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_228A3B0(/* see target signature */)
{
    // Tail-call to sub_2288C30 via direct jump indirection
    return sub_2288C30(/* forwarded args */);
}

