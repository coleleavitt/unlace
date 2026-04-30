// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130C0
// Name:            ._ZN2QT7QWidget12setFixedSizeEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130C0 jmp     cs:_ZN2QT7QWidget12setFixedSizeEii_ptr
//
// Resolved target: _ZN2QT7QWidget12setFixedSizeEii
// Target address:  0x8D45A0
// GOT/IAT slot:    0x8A0500
// Slot symbol:     _ZN2QT7QWidget12setFixedSizeEii_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget12setFixedSizeEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget12setFixedSizeEii via GOT/IAT indirection
    return _ZN2QT7QWidget12setFixedSizeEii(/* forwarded args */);
}

