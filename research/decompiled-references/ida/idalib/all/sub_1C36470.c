// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C36470
// Name:            sub_1C36470
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C36470 jmp     sub_15F2410
//
// Resolved target: sub_15F2410
// Target address:  0x15F2410
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_1C36470(/* see target signature */)
{
    // Tail-call to sub_15F2410 via direct jump indirection
    return sub_15F2410(/* forwarded args */);
}

