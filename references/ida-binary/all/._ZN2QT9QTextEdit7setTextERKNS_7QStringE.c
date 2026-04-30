// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E00
// Name:            ._ZN2QT9QTextEdit7setTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E00 jmp     cs:_ZN2QT9QTextEdit7setTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QTextEdit7setTextERKNS_7QStringE
// Target address:  0x8D4E38
// GOT/IAT slot:    0x8A0BA0
// Slot symbol:     _ZN2QT9QTextEdit7setTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTextEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QTextEdit7setTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextEdit7setTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QTextEdit7setTextERKNS_7QStringE(/* forwarded args */);
}

