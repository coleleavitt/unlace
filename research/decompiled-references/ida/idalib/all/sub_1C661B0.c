// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C661B0
// Name:            sub_1C661B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C661B0 jmp     sub_1C650B0
//
// Resolved target: sub_1C650B0
// Target address:  0x1C650B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     bool __fastcall(__int64, __int64, unsigned __int64, __int64)
// ============================================================

/* see target sig */ sub_1C661B0(/* see target signature */)
{
    // Tail-call to sub_1C650B0 via direct jump indirection
    return sub_1C650B0(/* forwarded args */);
}

