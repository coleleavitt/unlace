// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3D5610
// Name:            sub_3D5610
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3D5610 jmp     sub_3D5560
//
// Resolved target: sub_3D5560
// Target address:  0x3D5560
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3D5610(/* see target signature */)
{
    // Tail-call to sub_3D5560 via direct jump indirection
    return sub_3D5560(/* forwarded args */);
}

