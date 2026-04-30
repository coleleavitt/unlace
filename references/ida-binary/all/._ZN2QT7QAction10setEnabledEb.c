// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3F0
// Name:            ._ZN2QT7QAction10setEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3F0 jmp     cs:_ZN2QT7QAction10setEnabledEb_ptr
//
// Resolved target: _ZN2QT7QAction10setEnabledEb
// Target address:  0x8D98D0
// GOT/IAT slot:    0x8A4698
// Slot symbol:     _ZN2QT7QAction10setEnabledEb_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QAction10setEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction10setEnabledEb via GOT/IAT indirection
    return _ZN2QT7QAction10setEnabledEb(/* forwarded args */);
}

