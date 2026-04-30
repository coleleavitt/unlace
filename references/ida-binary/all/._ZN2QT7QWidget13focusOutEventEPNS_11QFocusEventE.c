// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3E0
// Name:            ._ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3E0 jmp     cs:_ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE_ptr
//
// Resolved target: _ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE
// Target address:  0x8D98C8
// GOT/IAT slot:    0x8A4690
// Slot symbol:     _ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QFocusEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE via GOT/IAT indirection
    return _ZN2QT7QWidget13focusOutEventEPNS_11QFocusEventE(/* forwarded args */);
}

