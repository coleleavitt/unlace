// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x821ED0
// Name:            sub_821ED0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x821ED0 jmp     sub_821880
//
// Resolved target: sub_821880
// Target address:  0x821880
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__m128i *)
// ============================================================

/* see target sig */ sub_821ED0(/* see target signature */)
{
    // Tail-call to sub_821880 via direct jump indirection
    return sub_821880(/* forwarded args */);
}

