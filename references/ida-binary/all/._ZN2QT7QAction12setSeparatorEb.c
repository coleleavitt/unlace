// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DE0
// Name:            ._ZN2QT7QAction12setSeparatorEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DE0 jmp     cs:_ZN2QT7QAction12setSeparatorEb_ptr
//
// Resolved target: _ZN2QT7QAction12setSeparatorEb
// Target address:  0x8D6260
// GOT/IAT slot:    0x8A1B90
// Slot symbol:     _ZN2QT7QAction12setSeparatorEb_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QAction12setSeparatorEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction12setSeparatorEb via GOT/IAT indirection
    return _ZN2QT7QAction12setSeparatorEb(/* forwarded args */);
}

