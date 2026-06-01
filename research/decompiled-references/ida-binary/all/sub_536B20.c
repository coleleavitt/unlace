// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x536B20
// Name:            sub_536B20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x536B20 jmp     sub_5369A0
//
// Resolved target: sub_5369A0
// Target address:  0x5369A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(const char *, QT::QAction *, int, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_536B20(/* see target signature */)
{
    // Tail-call to sub_5369A0 via direct jump indirection
    return sub_5369A0(/* forwarded args */);
}

