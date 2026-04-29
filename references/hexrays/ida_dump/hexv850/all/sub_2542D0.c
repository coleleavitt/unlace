// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2542D0
// Name:            sub_2542D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2542D0 jmp     sub_254220
//
// Resolved target: sub_254220
// Target address:  0x254220
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_2542D0(/* see target signature */)
{
    // Tail-call to sub_254220 via direct jump indirection
    return sub_254220(/* forwarded args */);
}

