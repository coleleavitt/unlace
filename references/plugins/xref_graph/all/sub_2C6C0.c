// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6C0
// Name:            sub_2C6C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C6C0 jmp     sub_2E7D0
//
// Resolved target: sub_2E7D0
// Target address:  0x2E7D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(QT::QAbstractScrollArea *this)
// ============================================================

/* see target sig */ sub_2C6C0(/* see target signature */)
{
    // Tail-call to sub_2E7D0 via direct jump indirection
    return sub_2E7D0(/* forwarded args */);
}

