// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113000
// Name:            ._ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113000 jmp     cs:_ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE
// Target address:  0x8D4520
// GOT/IAT slot:    0x8A04A0
// Slot symbol:     _ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, const QT::QTextCursor *)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit13setTextCursorERKNS_11QTextCursorE(/* forwarded args */);
}

