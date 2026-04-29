// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x496D0
// Name:            sub_496D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x496D0 jmp     sub_49030
//
// Resolved target: sub_49030
// Target address:  0x49030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, unsigned __int8 *, double)
// ============================================================

/* see target sig */ sub_496D0(/* see target signature */)
{
    // Tail-call to sub_49030 via direct jump indirection
    return sub_49030(/* forwarded args */);
}

