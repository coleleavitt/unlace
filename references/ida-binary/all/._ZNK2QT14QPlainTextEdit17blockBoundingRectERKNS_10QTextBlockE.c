// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114400
// Name:            ._ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114400 jmp     cs:_ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE_ptr
//
// Resolved target: _ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE
// Target address:  0x8D51D0
// GOT/IAT slot:    0x8A0EA0
// Slot symbol:     _ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, const QT::QTextBlock *)
// ============================================================

/* see target sig */ ._ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE via GOT/IAT indirection
    return _ZNK2QT14QPlainTextEdit17blockBoundingRectERKNS_10QTextBlockE(/* forwarded args */);
}

