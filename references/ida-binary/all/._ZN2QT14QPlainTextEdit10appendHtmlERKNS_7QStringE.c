// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115FB0
// Name:            ._ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115FB0 jmp     cs:_ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE
// Target address:  0x8D63B0
// GOT/IAT slot:    0x8A1C78
// Slot symbol:     _ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit10appendHtmlERKNS_7QStringE(/* forwarded args */);
}

