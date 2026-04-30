// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119150
// Name:            ._ZN2QT7QAction12setCheckableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119150 jmp     cs:_ZN2QT7QAction12setCheckableEb_ptr
//
// Resolved target: _ZN2QT7QAction12setCheckableEb
// Target address:  0x8D8290
// GOT/IAT slot:    0x8A3548
// Slot symbol:     _ZN2QT7QAction12setCheckableEb_ptr
// Target type:     _QWORD(QT::QAction *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QAction12setCheckableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction12setCheckableEb via GOT/IAT indirection
    return _ZN2QT7QAction12setCheckableEb(/* forwarded args */);
}

