// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC40
// Name:            ._ZN2QT6QColor8setAlphaEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC40 jmp     cs:_ZN2QT6QColor8setAlphaEi_ptr
//
// Resolved target: _ZN2QT6QColor8setAlphaEi
// Target address:  0x8D9DE0
// GOT/IAT slot:    0x8A4AC0
// Slot symbol:     _ZN2QT6QColor8setAlphaEi_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QColor8setAlphaEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor8setAlphaEi via GOT/IAT indirection
    return _ZN2QT6QColor8setAlphaEi(/* forwarded args */);
}

