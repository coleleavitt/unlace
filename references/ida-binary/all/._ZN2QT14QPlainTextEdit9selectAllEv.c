// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A370
// Name:            ._ZN2QT14QPlainTextEdit9selectAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A370 jmp     cs:_ZN2QT14QPlainTextEdit9selectAllEv_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit9selectAllEv
// Target address:  0x8D8E18
// GOT/IAT slot:    0x8A3E58
// Slot symbol:     _ZN2QT14QPlainTextEdit9selectAllEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit9selectAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit9selectAllEv via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit9selectAllEv(/* forwarded args */);
}

