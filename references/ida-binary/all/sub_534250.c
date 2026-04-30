// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x534250
// Name:            sub_534250
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x534250 jmp     sub_533EC0
//
// Resolved target: sub_533EC0
// Target address:  0x533EC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(QT::QMenu **, QT::QAction *, char)
// ============================================================

/* see target sig */ sub_534250(/* see target signature */)
{
    // Tail-call to sub_533EC0 via direct jump indirection
    return sub_533EC0(/* forwarded args */);
}

