// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F30
// Name:            ._ZN2QT14QPlainTextEdit5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F30 jmp     cs:_ZN2QT14QPlainTextEdit5clearEv_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit5clearEv
// Target address:  0x8D6348
// GOT/IAT slot:    0x8A1C38
// Slot symbol:     _ZN2QT14QPlainTextEdit5clearEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit5clearEv via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit5clearEv(/* forwarded args */);
}

