// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A610
// Name:            ._ZNK2QT21QTextDocumentFragment11toPlainTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A610 jmp     cs:_ZNK2QT21QTextDocumentFragment11toPlainTextEv_ptr
//
// Resolved target: _ZNK2QT21QTextDocumentFragment11toPlainTextEv
// Target address:  0x8D8FE0
// GOT/IAT slot:    0x8A3FA8
// Slot symbol:     _ZNK2QT21QTextDocumentFragment11toPlainTextEv_ptr
// Target type:     _QWORD(QT::QTextDocumentFragment *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT21QTextDocumentFragment11toPlainTextEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT21QTextDocumentFragment11toPlainTextEv via GOT/IAT indirection
    return _ZNK2QT21QTextDocumentFragment11toPlainTextEv(/* forwarded args */);
}

