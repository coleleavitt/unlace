// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152E0
// Name:            ._ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152E0 jmp     cs:_ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE
// Target address:  0x8D5BB8
// GOT/IAT slot:    0x8A1610
// Slot symbol:     _ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTextEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QTextEdit12setPlainTextERKNS_7QStringE(/* forwarded args */);
}

