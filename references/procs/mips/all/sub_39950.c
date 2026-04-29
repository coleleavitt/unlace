// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x39950
// Name:            sub_39950
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x39950 jmp     sub_39360
//
// Resolved target: sub_39360
// Target address:  0x39360
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *)
// ============================================================

/* see target sig */ sub_39950(/* see target signature */)
{
    // Tail-call to sub_39360 via direct jump indirection
    return sub_39360(/* forwarded args */);
}

