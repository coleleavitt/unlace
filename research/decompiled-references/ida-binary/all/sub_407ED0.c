// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x407ED0
// Name:            sub_407ED0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x407ED0 jmp     sub_407CC0
//
// Resolved target: sub_407CC0
// Target address:  0x407CC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *, __int64, double)
// ============================================================

/* see target sig */ sub_407ED0(/* see target signature */)
{
    // Tail-call to sub_407CC0 via direct jump indirection
    return sub_407CC0(/* forwarded args */);
}

