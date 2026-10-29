// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CDE20
// Name:            sub_20CDE20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x20CDE20 jmp     sub_2244F90
//
// Resolved target: sub_2244F90
// Target address:  0x2244F90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_20CDE20(/* see target signature */)
{
    // Tail-call to sub_2244F90 via direct jump indirection
    return sub_2244F90(/* forwarded args */);
}

