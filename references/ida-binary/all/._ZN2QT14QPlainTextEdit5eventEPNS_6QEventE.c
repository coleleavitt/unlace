// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B900
// Name:            ._ZN2QT14QPlainTextEdit5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B900 jmp     cs:_ZN2QT14QPlainTextEdit5eventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit5eventEPNS_6QEventE
// Target address:  0x8D9BE0
// GOT/IAT slot:    0x8A4920
// Slot symbol:     _ZN2QT14QPlainTextEdit5eventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit5eventEPNS_6QEventE(/* forwarded args */);
}

