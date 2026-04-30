// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190E0
// Name:            ._ZN2QT5QFontC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190E0 jmp     cs:_ZN2QT5QFontC1Ev_ptr
//
// Resolved target: _ZN2QT5QFontC1Ev
// Target address:  0x8D8250
// GOT/IAT slot:    0x8A3510
// Slot symbol:     _ZN2QT5QFontC1Ev_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QFontC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFontC1Ev via GOT/IAT indirection
    return _ZN2QT5QFontC1Ev(/* forwarded args */);
}

