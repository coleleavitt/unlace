// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1174C0
// Name:            ._ZN2QT7QAction10setVisibleEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1174C0 jmp     cs:_ZN2QT7QAction10setVisibleEb_ptr
//
// Resolved target: _ZN2QT7QAction10setVisibleEb
// Target address:  0x8D70F8
// GOT/IAT slot:    0x8A2700
// Slot symbol:     _ZN2QT7QAction10setVisibleEb_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QAction10setVisibleEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction10setVisibleEb via GOT/IAT indirection
    return _ZN2QT7QAction10setVisibleEb(/* forwarded args */);
}

