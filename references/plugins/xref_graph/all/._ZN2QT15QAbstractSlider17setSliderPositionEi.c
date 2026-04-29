// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17350
// Name:            ._ZN2QT15QAbstractSlider17setSliderPositionEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17350 jmp     cs:off_4F990
//
// Resolved target: _ZN2QT15QAbstractSlider17setSliderPositionEi
// Target address:  0x50EF8
// GOT/IAT slot:    0x4F990
// Slot symbol:     off_4F990
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider17setSliderPositionEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider17setSliderPositionEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider17setSliderPositionEi(/* forwarded args */);
}

