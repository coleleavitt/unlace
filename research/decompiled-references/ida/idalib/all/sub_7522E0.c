// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7522E0
// Name:            sub_7522E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7522E0 jmp     sub_752020
//
// Resolved target: sub_752020
// Target address:  0x752020
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_7522E0(/* see target signature */)
{
    // Tail-call to sub_752020 via direct jump indirection
    return sub_752020(/* forwarded args */);
}

