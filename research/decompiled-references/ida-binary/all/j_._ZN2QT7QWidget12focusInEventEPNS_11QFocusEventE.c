// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50FA30
// Name:            j_._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x50FA30 jmp     __ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE
//
// Resolved target: ._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE
// Target address:  0x1189B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QFocusEvent *)
// ============================================================

/* see target sig */ j_._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE(/* see target signature */)
{
    // Tail-call to ._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE via direct jump indirection
    return ._ZN2QT7QWidget12focusInEventEPNS_11QFocusEventE(/* forwarded args */);
}

