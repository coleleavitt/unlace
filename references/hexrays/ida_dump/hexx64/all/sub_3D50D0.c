// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3D50D0
// Name:            sub_3D50D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3D50D0 jmp     sub_3D5020
//
// Resolved target: sub_3D5020
// Target address:  0x3D5020
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3D50D0(/* see target signature */)
{
    // Tail-call to sub_3D5020 via direct jump indirection
    return sub_3D5020(/* forwarded args */);
}

