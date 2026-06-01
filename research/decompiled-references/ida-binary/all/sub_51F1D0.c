// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51F1D0
// Name:            sub_51F1D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x51F1D0 jmp     sub_4962F0
//
// Resolved target: sub_4962F0
// Target address:  0x4962F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(QT::QAbstractItemView *this, __int64, int)
// ============================================================

/* see target sig */ sub_51F1D0(/* see target signature */)
{
    // Tail-call to sub_4962F0 via direct jump indirection
    return sub_4962F0(/* forwarded args */);
}

