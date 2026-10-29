// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x407980
// Name:            sub_407980
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x407980 jmp     sub_407800
//
// Resolved target: sub_407800
// Target address:  0x407800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64)
// ============================================================

/* see target sig */ sub_407980(/* see target signature */)
{
    // Tail-call to sub_407800 via direct jump indirection
    return sub_407800(/* forwarded args */);
}

