// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C60
// Name:            ._ZN2QT8QSpinBox10setMinimumEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C60 jmp     cs:_ZN2QT8QSpinBox10setMinimumEi_ptr
//
// Resolved target: _ZN2QT8QSpinBox10setMinimumEi
// Target address:  0x8D75B8
// GOT/IAT slot:    0x8A2AD0
// Slot symbol:     _ZN2QT8QSpinBox10setMinimumEi_ptr
// Target type:     _QWORD(QT::QSpinBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT8QSpinBox10setMinimumEi(/* see target signature */)
{
    // Tail-call to _ZN2QT8QSpinBox10setMinimumEi via GOT/IAT indirection
    return _ZN2QT8QSpinBox10setMinimumEi(/* forwarded args */);
}

