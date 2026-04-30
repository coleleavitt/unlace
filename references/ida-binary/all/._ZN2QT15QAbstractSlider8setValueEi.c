// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1186A0
// Name:            ._ZN2QT15QAbstractSlider8setValueEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1186A0 jmp     cs:_ZN2QT15QAbstractSlider8setValueEi_ptr
//
// Resolved target: _ZN2QT15QAbstractSlider8setValueEi
// Target address:  0x8D7C18
// GOT/IAT slot:    0x8A2FF0
// Slot symbol:     _ZN2QT15QAbstractSlider8setValueEi_ptr
// Target type:     _QWORD(QT::QAbstractSlider *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractSlider8setValueEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractSlider8setValueEi via GOT/IAT indirection
    return _ZN2QT15QAbstractSlider8setValueEi(/* forwarded args */);
}

