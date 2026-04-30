// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8D0
// Name:            ._ZNK2QT15QAbstractSlider8pageStepEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8D0 jmp     cs:_ZNK2QT15QAbstractSlider8pageStepEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractSlider8pageStepEv
// Target address:  0x8D91D0
// GOT/IAT slot:    0x8A4108
// Slot symbol:     _ZNK2QT15QAbstractSlider8pageStepEv_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractSlider8pageStepEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractSlider8pageStepEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractSlider8pageStepEv(/* forwarded args */);
}

