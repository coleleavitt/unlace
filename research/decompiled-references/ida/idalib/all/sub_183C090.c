// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x183C090
// Name:            sub_183C090
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x183C090 jmp     sub_15F1950
//
// Resolved target: sub_15F1950
// Target address:  0x15F1950
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_183C090(/* see target signature */)
{
    // Tail-call to sub_15F1950 via direct jump indirection
    return sub_15F1950(/* forwarded args */);
}

