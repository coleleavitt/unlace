// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x159CF70
// Name:            sub_159CF70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x159CF70 jmp     sub_15998D0
//
// Resolved target: sub_15998D0
// Target address:  0x15998D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned int **, __int64, unsigned __int64, int, double)
// ============================================================

/* see target sig */ sub_159CF70(/* see target signature */)
{
    // Tail-call to sub_15998D0 via direct jump indirection
    return sub_15998D0(/* forwarded args */);
}

