// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111530
// Name:            ._ZNK2QT15QAbstractSlider14sliderPositionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111530 jmp     cs:_ZNK2QT15QAbstractSlider14sliderPositionEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractSlider14sliderPositionEv
// Target address:  0x8D33D8
// GOT/IAT slot:    0x89F738
// Slot symbol:     _ZNK2QT15QAbstractSlider14sliderPositionEv_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractSlider14sliderPositionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractSlider14sliderPositionEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractSlider14sliderPositionEv(/* forwarded args */);
}

