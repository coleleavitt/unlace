// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115AF0
// Name:            ._ZN2QT15QAbstractSlider10setMaximumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115AF0 jmp     cs:_ZN2QT15QAbstractSlider10setMaximumEi_ptr
//
// Resolved target: _ZN2QT15QAbstractSlider10setMaximumEi
// Target address:  0x8D6090
// GOT/IAT slot:    0x8A1A18
// Slot symbol:     _ZN2QT15QAbstractSlider10setMaximumEi_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider10setMaximumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider10setMaximumEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider10setMaximumEi(/* forwarded args */);
}

