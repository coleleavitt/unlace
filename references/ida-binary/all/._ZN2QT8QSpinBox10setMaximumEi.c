// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B790
// Name:            ._ZN2QT8QSpinBox10setMaximumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B790 jmp     cs:_ZN2QT8QSpinBox10setMaximumEi_ptr
//
// Resolved target: _ZN2QT8QSpinBox10setMaximumEi
// Target address:  0x8D9B00
// GOT/IAT slot:    0x8A4868
// Slot symbol:     _ZN2QT8QSpinBox10setMaximumEi_ptr
// Target type:     _QWORD(QT::QSpinBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT8QSpinBox10setMaximumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT8QSpinBox10setMaximumEi via GOT/IAT indirection
    return _ZN2QT8QSpinBox10setMaximumEi(/* forwarded args */);
}

