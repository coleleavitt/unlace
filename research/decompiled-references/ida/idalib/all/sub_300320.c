// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x300320
// Name:            sub_300320
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x300320 jmp     sub_2FDB70
//
// Resolved target: sub_2FDB70
// Target address:  0x2FDB70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_300320(/* see target signature */)
{
    // Tail-call to sub_2FDB70 via direct jump indirection
    return sub_2FDB70(/* forwarded args */);
}

