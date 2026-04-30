// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1154D0
// Name:            ._ZN2QT7QAction10setCheckedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1154D0 jmp     cs:_ZN2QT7QAction10setCheckedEb_ptr
//
// Resolved target: _ZN2QT7QAction10setCheckedEb
// Target address:  0x8D5CE0
// GOT/IAT slot:    0x8A1708
// Slot symbol:     _ZN2QT7QAction10setCheckedEb_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QAction10setCheckedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction10setCheckedEb via GOT/IAT indirection
    return _ZN2QT7QAction10setCheckedEb(/* forwarded args */);
}

