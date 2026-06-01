// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3F7730
// Name:            sub_3F7730
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3F7730 jmp     sub_3F7660
//
// Resolved target: sub_3F7660
// Target address:  0x3F7660
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_3F7730(/* see target signature */)
{
    // Tail-call to sub_3F7660 via direct jump indirection
    return sub_3F7660(/* forwarded args */);
}

