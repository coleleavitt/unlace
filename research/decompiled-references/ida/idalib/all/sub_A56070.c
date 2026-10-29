// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA56070
// Name:            sub_A56070
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xA56070 jmp     sub_B72720
//
// Resolved target: sub_B72720
// Target address:  0xB72720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_A56070(/* see target signature */)
{
    // Tail-call to sub_B72720 via direct jump indirection
    return sub_B72720(/* forwarded args */);
}

