// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x133E0
// Name:            sub_133E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x133E0 jmp     sub_11A80
//
// Resolved target: sub_11A80
// Target address:  0x11A80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int)
// ============================================================

/* see target sig */ sub_133E0(/* see target signature */)
{
    // Tail-call to sub_11A80 via direct jump indirection
    return sub_11A80(/* forwarded args */);
}

