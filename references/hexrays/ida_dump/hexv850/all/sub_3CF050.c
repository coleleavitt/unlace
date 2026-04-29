// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3CF050
// Name:            sub_3CF050
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3CF050 jmp     sub_3CEFA0
//
// Resolved target: sub_3CEFA0
// Target address:  0x3CEFA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3CF050(/* see target signature */)
{
    // Tail-call to sub_3CEFA0 via direct jump indirection
    return sub_3CEFA0(/* forwarded args */);
}

