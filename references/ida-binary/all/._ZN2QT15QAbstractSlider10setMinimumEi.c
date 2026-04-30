// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A970
// Name:            ._ZN2QT15QAbstractSlider10setMinimumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A970 jmp     cs:_ZN2QT15QAbstractSlider10setMinimumEi_ptr
//
// Resolved target: _ZN2QT15QAbstractSlider10setMinimumEi
// Target address:  0x8D9240
// GOT/IAT slot:    0x8A4158
// Slot symbol:     _ZN2QT15QAbstractSlider10setMinimumEi_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider10setMinimumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider10setMinimumEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider10setMinimumEi(/* forwarded args */);
}

