// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214F680
// Name:            sub_214F680
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214F680 jmp     sub_214F250
//
// Resolved target: sub_214F250
// Target address:  0x214F250
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_214F680(/* see target signature */)
{
    // Tail-call to sub_214F250 via direct jump indirection
    return sub_214F250(/* forwarded args */);
}

