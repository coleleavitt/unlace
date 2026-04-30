// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1183F0
// Name:            ._ZN2QT14QPlainTextEditD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1183F0 jmp     cs:_ZN2QT14QPlainTextEditD2Ev_ptr
//
// Resolved target: _ZN2QT14QPlainTextEditD2Ev
// Target address:  0x8D7A78
// GOT/IAT slot:    0x8A2E98
// Slot symbol:     _ZN2QT14QPlainTextEditD2Ev_ptr
// Target type:     void(QT::QPlainTextEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QPlainTextEditD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT14QPlainTextEditD2Ev via GOT/IAT indirection
    return _ZN2QT14QPlainTextEditD2Ev(/* forwarded args */);
}

