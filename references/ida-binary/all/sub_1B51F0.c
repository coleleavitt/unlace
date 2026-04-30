// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1B51F0
// Name:            sub_1B51F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1B51F0 jmp     sub_1B5160
//
// Resolved target: sub_1B5160
// Target address:  0x1B5160
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, double)
// ============================================================

/* see target sig */ sub_1B51F0(/* see target signature */)
{
    // Tail-call to sub_1B5160 via direct jump indirection
    return sub_1B5160(/* forwarded args */);
}

