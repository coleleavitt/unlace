// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3CBC60
// Name:            sub_3CBC60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3CBC60 jmp     sub_3CBB00
//
// Resolved target: sub_3CBB00
// Target address:  0x3CBB00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3CBC60(/* see target signature */)
{
    // Tail-call to sub_3CBB00 via direct jump indirection
    return sub_3CBB00(/* forwarded args */);
}

