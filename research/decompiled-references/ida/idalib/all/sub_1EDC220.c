// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EDC220
// Name:            sub_1EDC220
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EDC220 jmp     sub_1EDB980
//
// Resolved target: sub_1EDB980
// Target address:  0x1EDB980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, unsigned __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_1EDC220(/* see target signature */)
{
    // Tail-call to sub_1EDB980 via direct jump indirection
    return sub_1EDB980(/* forwarded args */);
}

