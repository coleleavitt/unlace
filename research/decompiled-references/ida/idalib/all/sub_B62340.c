// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xB62340
// Name:            sub_B62340
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xB62340 jmp     sub_B61960
//
// Resolved target: sub_B61960
// Target address:  0xB61960
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_B62340(/* see target signature */)
{
    // Tail-call to sub_B61960 via direct jump indirection
    return sub_B61960(/* forwarded args */);
}

