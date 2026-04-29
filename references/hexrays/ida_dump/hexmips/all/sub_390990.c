// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x390990
// Name:            sub_390990
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x390990 jmp     sub_38F9E0
//
// Resolved target: sub_38F9E0
// Target address:  0x38F9E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_390990(/* see target signature */)
{
    // Tail-call to sub_38F9E0 via direct jump indirection
    return sub_38F9E0(/* forwarded args */);
}

