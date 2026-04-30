// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113DE0
// Name:            ._ZNK2QT13QTextDocument11toPlainTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113DE0 jmp     cs:_ZNK2QT13QTextDocument11toPlainTextEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument11toPlainTextEv
// Target address:  0x8D4E18
// GOT/IAT slot:    0x8A0B90
// Slot symbol:     _ZNK2QT13QTextDocument11toPlainTextEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument11toPlainTextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument11toPlainTextEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument11toPlainTextEv(/* forwarded args */);
}

