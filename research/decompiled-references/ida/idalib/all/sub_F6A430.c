// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF6A430
// Name:            sub_F6A430
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF6A430 jmp     sub_F6A270
//
// Resolved target: sub_F6A270
// Target address:  0xF6A270
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_F6A430(/* see target signature */)
{
    // Tail-call to sub_F6A270 via direct jump indirection
    return sub_F6A270(/* forwarded args */);
}

