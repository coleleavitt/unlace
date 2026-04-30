// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B50
// Name:            ._ZN2QT7QWidget15setMaximumWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B50 jmp     cs:_ZN2QT7QWidget15setMaximumWidthEi_ptr
//
// Resolved target: _ZN2QT7QWidget15setMaximumWidthEi
// Target address:  0x8D60D8
// GOT/IAT slot:    0x8A1A48
// Slot symbol:     _ZN2QT7QWidget15setMaximumWidthEi_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget15setMaximumWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget15setMaximumWidthEi via GOT/IAT indirection
    return _ZN2QT7QWidget15setMaximumWidthEi(/* forwarded args */);
}

