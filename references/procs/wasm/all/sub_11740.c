// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11740
// Name:            sub_11740
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x11740 jmp     sub_11570
//
// Resolved target: sub_11570
// Target address:  0x11570
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_11740(/* see target signature */)
{
    // Tail-call to sub_11570 via direct jump indirection
    return sub_11570(/* forwarded args */);
}

