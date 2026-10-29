// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2228430
// Name:            sub_2228430
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2228430 jmp     sub_2220490
//
// Resolved target: sub_2220490
// Target address:  0x2220490
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall()
// ============================================================

/* see target sig */ sub_2228430(/* see target signature */)
{
    // Tail-call to sub_2220490 via direct jump indirection
    return sub_2220490(/* forwarded args */);
}

