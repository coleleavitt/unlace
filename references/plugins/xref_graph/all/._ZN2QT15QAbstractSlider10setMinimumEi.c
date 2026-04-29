// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173B0
// Name:            ._ZN2QT15QAbstractSlider10setMinimumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173B0 jmp     cs:off_4F9C0
//
// Resolved target: _ZN2QT15QAbstractSlider10setMinimumEi
// Target address:  0x50F68
// GOT/IAT slot:    0x4F9C0
// Slot symbol:     off_4F9C0
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider10setMinimumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider10setMinimumEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider10setMinimumEi(/* forwarded args */);
}

