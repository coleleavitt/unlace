// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x254E10
// Name:            sub_254E10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x254E10 jmp     sub_254D60
//
// Resolved target: sub_254D60
// Target address:  0x254D60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_254E10(/* see target signature */)
{
    // Tail-call to sub_254D60 via direct jump indirection
    return sub_254D60(/* forwarded args */);
}

