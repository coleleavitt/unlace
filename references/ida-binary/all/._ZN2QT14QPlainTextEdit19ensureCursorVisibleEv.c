// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115270
// Name:            ._ZN2QT14QPlainTextEdit19ensureCursorVisibleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115270 jmp     cs:_ZN2QT14QPlainTextEdit19ensureCursorVisibleEv_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit19ensureCursorVisibleEv
// Target address:  0x8D5B80
// GOT/IAT slot:    0x8A15D8
// Slot symbol:     _ZN2QT14QPlainTextEdit19ensureCursorVisibleEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit19ensureCursorVisibleEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit19ensureCursorVisibleEv via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit19ensureCursorVisibleEv(/* forwarded args */);
}

