// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x390610
// Name:            sub_390610
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x390610 jmp     sub_38F660
//
// Resolved target: sub_38F660
// Target address:  0x38F660
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_390610(/* see target signature */)
{
    // Tail-call to sub_38F660 via direct jump indirection
    return sub_38F660(/* forwarded args */);
}

