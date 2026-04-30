// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1121A0
// Name:            ._ZN2QT7QWidget10setVisibleEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1121A0 jmp     cs:_ZN2QT7QWidget10setVisibleEb_ptr
//
// Resolved target: _ZN2QT7QWidget10setVisibleEb
// Target address:  0x8D3BC8
// GOT/IAT slot:    0x89FD70
// Slot symbol:     _ZN2QT7QWidget10setVisibleEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget10setVisibleEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10setVisibleEb via GOT/IAT indirection
    return _ZN2QT7QWidget10setVisibleEb(/* forwarded args */);
}

