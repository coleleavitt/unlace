// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x253140
// Name:            sub_253140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x253140 jmp     sub_2530C0
//
// Resolved target: sub_2530C0
// Target address:  0x2530C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_253140(/* see target signature */)
{
    // Tail-call to sub_2530C0 via direct jump indirection
    return sub_2530C0(/* forwarded args */);
}

