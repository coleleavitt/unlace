// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EB80
// Name:            sub_1EB80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EB80 jmp     sub_1E740
//
// Resolved target: sub_1E740
// Target address:  0x1E740
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_BYTE *)
// ============================================================

/* see target sig */ sub_1EB80(/* see target signature */)
{
    // Tail-call to sub_1E740 via direct jump indirection
    return sub_1E740(/* forwarded args */);
}

