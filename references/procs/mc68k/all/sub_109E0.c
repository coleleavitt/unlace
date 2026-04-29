// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x109E0
// Name:            sub_109E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x109E0 jmp     sub_10910
//
// Resolved target: sub_10910
// Target address:  0x10910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_109E0(/* see target signature */)
{
    // Tail-call to sub_10910 via direct jump indirection
    return sub_10910(/* forwarded args */);
}

