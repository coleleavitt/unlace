// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1189B0
// Name:            ._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1189B0 jmp     cs:_ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE_ptr
//
// Resolved target: _ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE
// Target address:  0x8D7DF8
// GOT/IAT slot:    0x8A3178
// Slot symbol:     _ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QFocusEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE via GOT/IAT indirection
    return _ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE(/* forwarded args */);
}

