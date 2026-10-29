// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1740E90
// Name:            sub_1740E90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1740E90 jmp     sub_1740C10
//
// Resolved target: sub_1740C10
// Target address:  0x1740C10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64)
// ============================================================

/* see target sig */ sub_1740E90(/* see target signature */)
{
    // Tail-call to sub_1740C10 via direct jump indirection
    return sub_1740C10(/* forwarded args */);
}

