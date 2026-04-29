// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x395890
// Name:            sub_395890
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x395890 jmp     sub_3948E0
//
// Resolved target: sub_3948E0
// Target address:  0x3948E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_395890(/* see target signature */)
{
    // Tail-call to sub_3948E0 via direct jump indirection
    return sub_3948E0(/* forwarded args */);
}

