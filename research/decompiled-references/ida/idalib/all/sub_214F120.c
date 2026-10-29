// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214F120
// Name:            sub_214F120
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214F120 jmp     sub_214E840
//
// Resolved target: sub_214E840
// Target address:  0x214E840
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_214F120(/* see target signature */)
{
    // Tail-call to sub_214E840 via direct jump indirection
    return sub_214E840(/* forwarded args */);
}

