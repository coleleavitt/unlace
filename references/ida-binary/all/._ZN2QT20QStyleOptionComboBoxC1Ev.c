// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111690
// Name:            ._ZN2QT20QStyleOptionComboBoxC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111690 jmp     cs:_ZN2QT20QStyleOptionComboBoxC1Ev_ptr
//
// Resolved target: _ZN2QT20QStyleOptionComboBoxC1Ev
// Target address:  0x8D34C0
// GOT/IAT slot:    0x89F7E8
// Slot symbol:     _ZN2QT20QStyleOptionComboBoxC1Ev_ptr
// Target type:     _QWORD(QT::QStyleOptionComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT20QStyleOptionComboBoxC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT20QStyleOptionComboBoxC1Ev via GOT/IAT indirection
    return _ZN2QT20QStyleOptionComboBoxC1Ev(/* forwarded args */);
}

