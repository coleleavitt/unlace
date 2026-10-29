// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xE23400
// Name:            sub_E23400
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xE23400 jmp     sub_E23300
//
// Resolved target: sub_E23300
// Target address:  0xE23300
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, const __m128i *)
// ============================================================

/* see target sig */ sub_E23400(/* see target signature */)
{
    // Tail-call to sub_E23300 via direct jump indirection
    return sub_E23300(/* forwarded args */);
}

