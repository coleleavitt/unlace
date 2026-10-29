// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2149670
// Name:            sub_2149670
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2149670 jmp     sub_2148F90
//
// Resolved target: sub_2148F90
// Target address:  0x2148F90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_2149670(/* see target signature */)
{
    // Tail-call to sub_2148F90 via direct jump indirection
    return sub_2148F90(/* forwarded args */);
}

