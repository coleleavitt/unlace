// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xB94CC0
// Name:            sub_B94CC0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xB94CC0 jmp     sub_B709C0
//
// Resolved target: sub_B709C0
// Target address:  0xB709C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_B94CC0(/* see target signature */)
{
    // Tail-call to sub_B709C0 via direct jump indirection
    return sub_B709C0(/* forwarded args */);
}

