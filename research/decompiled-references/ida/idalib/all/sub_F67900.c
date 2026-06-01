// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF67900
// Name:            sub_F67900
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF67900 jmp     sub_F67800
//
// Resolved target: sub_F67800
// Target address:  0xF67800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_F67900(/* see target signature */)
{
    // Tail-call to sub_F67800 via direct jump indirection
    return sub_F67800(/* forwarded args */);
}

