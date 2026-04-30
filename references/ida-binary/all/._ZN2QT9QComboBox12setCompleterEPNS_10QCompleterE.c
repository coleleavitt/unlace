// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A10
// Name:            ._ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A10 jmp     cs:_ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE_ptr
//
// Resolved target: _ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE
// Target address:  0x8D4BA0
// GOT/IAT slot:    0x8A09A8
// Slot symbol:     _ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, QT::QCompleter *)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE via GOT/IAT indirection
    return _ZN2QT9QComboBox12setCompleterEPNS_10QCompleterE(/* forwarded args */);
}

