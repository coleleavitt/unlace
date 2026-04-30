// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C20
// Name:            ._ZN2QT7QWidget15setMinimumWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C20 jmp     cs:_ZN2QT7QWidget15setMinimumWidthEi_ptr
//
// Resolved target: _ZN2QT7QWidget15setMinimumWidthEi
// Target address:  0x8D6B70
// GOT/IAT slot:    0x8A22B0
// Slot symbol:     _ZN2QT7QWidget15setMinimumWidthEi_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget15setMinimumWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget15setMinimumWidthEi via GOT/IAT indirection
    return _ZN2QT7QWidget15setMinimumWidthEi(/* forwarded args */);
}

