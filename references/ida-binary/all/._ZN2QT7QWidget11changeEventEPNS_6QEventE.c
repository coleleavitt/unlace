// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B60
// Name:            ._ZN2QT7QWidget11changeEventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B60 jmp     cs:_ZN2QT7QWidget11changeEventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT7QWidget11changeEventEPNS_6QEventE
// Target address:  0x8D7518
// GOT/IAT slot:    0x8A2A50
// Slot symbol:     _ZN2QT7QWidget11changeEventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget11changeEventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget11changeEventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT7QWidget11changeEventEPNS_6QEventE(/* forwarded args */);
}

