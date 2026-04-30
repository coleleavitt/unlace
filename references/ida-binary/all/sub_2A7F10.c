// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F10
// Name:            sub_2A7F10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2A7F10 jmp     sub_2A6E30
//
// Resolved target: sub_2A6E30
// Target address:  0x2A6E30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(QT::QWidget *this, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_2A7F10(/* see target signature */)
{
    // Tail-call to sub_2A6E30 via direct jump indirection
    return sub_2A6E30(/* forwarded args */);
}

