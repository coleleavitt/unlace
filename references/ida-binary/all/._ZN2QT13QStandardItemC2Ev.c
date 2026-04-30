// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118600
// Name:            ._ZN2QT13QStandardItemC2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118600 jmp     cs:_ZN2QT13QStandardItemC2Ev_ptr
//
// Resolved target: _ZN2QT13QStandardItemC2Ev
// Target address:  0x8D7BC0
// GOT/IAT slot:    0x8A2FA0
// Slot symbol:     _ZN2QT13QStandardItemC2Ev_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QStandardItemC2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QStandardItemC2Ev via GOT/IAT indirection
    return _ZN2QT13QStandardItemC2Ev(/* forwarded args */);
}

