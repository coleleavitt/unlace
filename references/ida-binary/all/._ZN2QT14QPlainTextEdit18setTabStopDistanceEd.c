// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120E0
// Name:            ._ZN2QT14QPlainTextEdit18setTabStopDistanceEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120E0 jmp     cs:_ZN2QT14QPlainTextEdit18setTabStopDistanceEd_ptr
//
// Resolved target: _ZN2QT14QPlainTextEdit18setTabStopDistanceEd
// Target address:  0x8D3B58
// GOT/IAT slot:    0x89FD10
// Slot symbol:     _ZN2QT14QPlainTextEdit18setTabStopDistanceEd_ptr
// Target type:     _QWORD(QT::QPlainTextEdit *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEdit18setTabStopDistanceEd(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEdit18setTabStopDistanceEd via GOT/IAT indirection
    return _ZN2QT14QPlainTextEdit18setTabStopDistanceEd(/* forwarded args */);
}

