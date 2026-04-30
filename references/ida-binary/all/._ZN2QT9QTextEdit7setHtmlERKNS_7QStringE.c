// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116180
// Name:            ._ZN2QT9QTextEdit7setHtmlERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116180 jmp     cs:_ZN2QT9QTextEdit7setHtmlERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QTextEdit7setHtmlERKNS_7QStringE
// Target address:  0x8D64C8
// GOT/IAT slot:    0x8A1D60
// Slot symbol:     _ZN2QT9QTextEdit7setHtmlERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTextEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QTextEdit7setHtmlERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextEdit7setHtmlERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QTextEdit7setHtmlERKNS_7QStringE(/* forwarded args */);
}

