// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x529950
// Name:            j_._ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x529950 jmp     __ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE
//
// Resolved target: ._ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE
// Target address:  0x1161F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, QT::QFocusEvent *)
// ============================================================

/* see target sig */ j_._ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE(/* see target signature */)
{
    // Tail-call to ._ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE via direct jump indirection
    return ._ZN2QT14QPlainTextEdit12focusInEventEPNS_11QFocusEventE(/* forwarded args */);
}

