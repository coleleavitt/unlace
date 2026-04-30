// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5C0
// Name:            ._ZN2QT9QComboBox24setMinimumContentsLengthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5C0 jmp     cs:_ZN2QT9QComboBox24setMinimumContentsLengthEi_ptr
//
// Resolved target: _ZN2QT9QComboBox24setMinimumContentsLengthEi
// Target address:  0x8D99E0
// GOT/IAT slot:    0x8A4780
// Slot symbol:     _ZN2QT9QComboBox24setMinimumContentsLengthEi_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox24setMinimumContentsLengthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox24setMinimumContentsLengthEi via GOT/IAT indirection
    return _ZN2QT9QComboBox24setMinimumContentsLengthEi(/* forwarded args */);
}

