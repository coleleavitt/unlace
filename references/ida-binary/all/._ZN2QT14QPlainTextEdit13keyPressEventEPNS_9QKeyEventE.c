// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119950
// Name:            ._ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119950 jmp     cs:_ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE
// Target address:  0x8D87E0
// GOT/IAT slot:    0x8A3948
// Slot symbol:     _ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, QT::QKeyEvent *)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit13keyPressEventEPNS_9QKeyEventE(/* forwarded args */);
}

