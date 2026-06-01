// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x222E910
// Name:            sub_222E910
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x222E910 jmp     sub_2254860
//
// Resolved target: sub_2254860
// Target address:  0x2254860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_222E910(/* see target signature */)
{
    // Tail-call to sub_2254860 via direct jump indirection
    return sub_2254860(/* forwarded args */);
}

