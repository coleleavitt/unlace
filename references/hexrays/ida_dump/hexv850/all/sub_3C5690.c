// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C5690
// Name:            sub_3C5690
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C5690 jmp     sub_3C5540
//
// Resolved target: sub_3C5540
// Target address:  0x3C5540
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3C5690(/* see target signature */)
{
    // Tail-call to sub_3C5540 via direct jump indirection
    return sub_3C5540(/* forwarded args */);
}

