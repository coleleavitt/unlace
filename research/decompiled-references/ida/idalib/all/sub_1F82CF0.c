// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1F82CF0
// Name:            sub_1F82CF0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1F82CF0 jmp     sub_1F82A80
//
// Resolved target: sub_1F82A80
// Target address:  0x1F82A80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_1F82CF0(/* see target signature */)
{
    // Tail-call to sub_1F82A80 via direct jump indirection
    return sub_1F82A80(/* forwarded args */);
}

