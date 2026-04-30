// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113850
// Name:            ._ZN2QT14QPlainTextEdit25createStandardContextMenuEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113850 jmp     cs:_ZN2QT14QPlainTextEdit25createStandardContextMenuEv_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit25createStandardContextMenuEv
// Target address:  0x8D4A78
// GOT/IAT slot:    0x8A08C8
// Slot symbol:     _ZN2QT14QPlainTextEdit25createStandardContextMenuEv_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit25createStandardContextMenuEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit25createStandardContextMenuEv via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit25createStandardContextMenuEv(/* forwarded args */);
}

