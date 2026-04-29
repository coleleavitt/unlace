// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203930
// Name:            sub_203930
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x203930 jmp     sub_203700
//
// Resolved target: sub_203700
// Target address:  0x203700
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_203930(/* see target signature */)
{
    // Tail-call to sub_203700 via direct jump indirection
    return sub_203700(/* forwarded args */);
}

