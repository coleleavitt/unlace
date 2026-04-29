// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x39350
// Name:            sub_39350
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x39350 jmp     sub_39290
//
// Resolved target: sub_39290
// Target address:  0x39290
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_39350(/* see target signature */)
{
    // Tail-call to sub_39290 via direct jump indirection
    return sub_39290(/* forwarded args */);
}

