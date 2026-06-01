// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17559A0
// Name:            sub_17559A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x17559A0 jmp     sub_1755880
//
// Resolved target: sub_1755880
// Target address:  0x1755880
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_17559A0(/* see target signature */)
{
    // Tail-call to sub_1755880 via direct jump indirection
    return sub_1755880(/* forwarded args */);
}

