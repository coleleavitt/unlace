// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x28E960
// Name:            sub_28E960
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x28E960 jmp     sub_28E8C0
//
// Resolved target: sub_28E8C0
// Target address:  0x28E8C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64)
// ============================================================

/* see target sig */ sub_28E960(/* see target signature */)
{
    // Tail-call to sub_28E8C0 via direct jump indirection
    return sub_28E8C0(/* forwarded args */);
}

