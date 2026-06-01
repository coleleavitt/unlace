// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54A1A0
// Name:            j_._ZN2QT7QWidget11changeEventEPNS_6QEventE
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x54A1A0 jmp     __ZN2QT7QWidget11changeEventEPNS_6QEventE
//
// Resolved target: ._ZN2QT7QWidget11changeEventEPNS_6QEventE
// Target address:  0x117B60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ j_._ZN2QT7QWidget11changeEventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to ._ZN2QT7QWidget11changeEventEPNS_6QEventE via direct jump indirection
    return ._ZN2QT7QWidget11changeEventEPNS_6QEventE(/* forwarded args */);
}

