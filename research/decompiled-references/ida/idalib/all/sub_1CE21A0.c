// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1CE21A0
// Name:            sub_1CE21A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1CE21A0 jmp     sub_1CE14D0
//
// Resolved target: sub_1CE14D0
// Target address:  0x1CE14D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_1CE21A0(/* see target signature */)
{
    // Tail-call to sub_1CE14D0 via direct jump indirection
    return sub_1CE14D0(/* forwarded args */);
}

