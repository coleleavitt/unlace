// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111EF0
// Name:            ._ZN2QT8QSpinBox8setValueEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111EF0 jmp     cs:_ZN2QT8QSpinBox8setValueEi_ptr
//
// Resolved target: _ZN2QT8QSpinBox8setValueEi
// Target address:  0x8D3A20
// GOT/IAT slot:    0x89FC18
// Slot symbol:     _ZN2QT8QSpinBox8setValueEi_ptr
// Target type:     _QWORD(QT::QSpinBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT8QSpinBox8setValueEi(/* see target signature */)
{
    // Tail-call to _ZN2QT8QSpinBox8setValueEi via GOT/IAT indirection
    return _ZN2QT8QSpinBox8setValueEi(/* forwarded args */);
}

