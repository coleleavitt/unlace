// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x254A90
// Name:            sub_254A90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x254A90 jmp     sub_2549E0
//
// Resolved target: sub_2549E0
// Target address:  0x2549E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_254A90(/* see target signature */)
{
    // Tail-call to sub_2549E0 via direct jump indirection
    return sub_2549E0(/* forwarded args */);
}

