// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5A0
// Name:            ._ZN2QT15QAbstractSlider11setPageStepEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5A0 jmp     cs:_ZN2QT15QAbstractSlider11setPageStepEi_ptr
//
// Resolved target: _ZN2QT15QAbstractSlider11setPageStepEi
// Target address:  0x8D99D0
// GOT/IAT slot:    0x8A4770
// Slot symbol:     _ZN2QT15QAbstractSlider11setPageStepEi_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider11setPageStepEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider11setPageStepEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider11setPageStepEi(/* forwarded args */);
}

