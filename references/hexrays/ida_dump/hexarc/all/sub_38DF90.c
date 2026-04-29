// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x38DF90
// Name:            sub_38DF90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x38DF90 jmp     sub_38CFE0
//
// Resolved target: sub_38CFE0
// Target address:  0x38CFE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_38DF90(/* see target signature */)
{
    // Tail-call to sub_38CFE0 via direct jump indirection
    return sub_38CFE0(/* forwarded args */);
}

