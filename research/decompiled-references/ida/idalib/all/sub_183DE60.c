// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x183DE60
// Name:            sub_183DE60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x183DE60 jmp     sub_183C990
//
// Resolved target: sub_183C990
// Target address:  0x183C990
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_183DE60(/* see target signature */)
{
    // Tail-call to sub_183C990 via direct jump indirection
    return sub_183C990(/* forwarded args */);
}

