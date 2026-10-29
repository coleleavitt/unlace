// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1666E80
// Name:            sub_1666E80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1666E80 jmp     sub_1666C60
//
// Resolved target: sub_1666C60
// Target address:  0x1666C60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, int, int)
// ============================================================

/* see target sig */ sub_1666E80(/* see target signature */)
{
    // Tail-call to sub_1666C60 via direct jump indirection
    return sub_1666C60(/* forwarded args */);
}

