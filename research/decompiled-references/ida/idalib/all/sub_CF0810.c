// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCF0810
// Name:            sub_CF0810
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCF0810 jmp     sub_E23260
//
// Resolved target: sub_E23260
// Target address:  0xE23260
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_CF0810(/* see target signature */)
{
    // Tail-call to sub_E23260 via direct jump indirection
    return sub_E23260(/* forwarded args */);
}

