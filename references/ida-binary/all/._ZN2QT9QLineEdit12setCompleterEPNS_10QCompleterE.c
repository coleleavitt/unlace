// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119420
// Name:            ._ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119420 jmp     cs:_ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE_ptr
//
// Resolved target: _ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE
// Target address:  0x8D8468
// GOT/IAT slot:    0x8A36B0
// Slot symbol:     _ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, QT::QCompleter *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE via GOT/IAT indirection
    return _ZN2QT9QLineEdit12setCompleterEPNS_10QCompleterE(/* forwarded args */);
}

