// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4D0750
// Name:            sub_4D0750
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4D0750 jmp     sub_4D05A0
//
// Resolved target: sub_4D05A0
// Target address:  0x4D05A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(QT::QWidget *this, int)
// ============================================================

/* see target sig */ sub_4D0750(/* see target signature */)
{
    // Tail-call to sub_4D05A0 via direct jump indirection
    return sub_4D05A0(/* forwarded args */);
}

