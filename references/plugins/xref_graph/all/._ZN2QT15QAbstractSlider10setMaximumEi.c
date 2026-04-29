// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x169E0
// Name:            ._ZN2QT15QAbstractSlider10setMaximumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x169E0 jmp     cs:off_4F4D8
//
// Resolved target: _ZN2QT15QAbstractSlider10setMaximumEi
// Target address:  0x506B0
// GOT/IAT slot:    0x4F4D8
// Slot symbol:     off_4F4D8
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider10setMaximumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider10setMaximumEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider10setMaximumEi(/* forwarded args */);
}

