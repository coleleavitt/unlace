// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B60
// Name:            ._ZN2QT7QWidget16setMaximumHeightEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B60 jmp     cs:_ZN2QT7QWidget16setMaximumHeightEi_ptr
//
// Resolved target: _ZN2QT7QWidget16setMaximumHeightEi
// Target address:  0x8D7EF8
// GOT/IAT slot:    0x8A3250
// Slot symbol:     _ZN2QT7QWidget16setMaximumHeightEi_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget16setMaximumHeightEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget16setMaximumHeightEi via GOT/IAT indirection
    return _ZN2QT7QWidget16setMaximumHeightEi(/* forwarded args */);
}

