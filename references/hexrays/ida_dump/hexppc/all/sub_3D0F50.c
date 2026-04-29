// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3D0F50
// Name:            sub_3D0F50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3D0F50 jmp     sub_3D0EA0
//
// Resolved target: sub_3D0EA0
// Target address:  0x3D0EA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3D0F50(/* see target signature */)
{
    // Tail-call to sub_3D0EA0 via direct jump indirection
    return sub_3D0EA0(/* forwarded args */);
}

