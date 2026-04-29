// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2048B0
// Name:            sub_2048B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2048B0 jmp     sub_204680
//
// Resolved target: sub_204680
// Target address:  0x204680
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_2048B0(/* see target signature */)
{
    // Tail-call to sub_204680 via direct jump indirection
    return sub_204680(/* forwarded args */);
}

