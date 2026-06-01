// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF21D50
// Name:            sub_F21D50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF21D50 jmp     sub_F1F2B0
//
// Resolved target: sub_F1F2B0
// Target address:  0xF1F2B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int8 **, __int64)
// ============================================================

/* see target sig */ sub_F21D50(/* see target signature */)
{
    // Tail-call to sub_F1F2B0 via direct jump indirection
    return sub_F1F2B0(/* forwarded args */);
}

