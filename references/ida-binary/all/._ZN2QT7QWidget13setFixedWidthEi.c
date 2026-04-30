// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1168B0
// Name:            ._ZN2QT7QWidget13setFixedWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1168B0 jmp     cs:_ZN2QT7QWidget13setFixedWidthEi_ptr
//
// Resolved target: _ZN2QT7QWidget13setFixedWidthEi
// Target address:  0x8D6960
// GOT/IAT slot:    0x8A20F8
// Slot symbol:     _ZN2QT7QWidget13setFixedWidthEi_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget13setFixedWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13setFixedWidthEi via GOT/IAT indirection
    return _ZN2QT7QWidget13setFixedWidthEi(/* forwarded args */);
}

