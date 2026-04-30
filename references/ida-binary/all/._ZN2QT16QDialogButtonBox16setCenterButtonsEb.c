// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119040
// Name:            ._ZN2QT16QDialogButtonBox16setCenterButtonsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119040 jmp     cs:_ZN2QT16QDialogButtonBox16setCenterButtonsEb_ptr
//
// Resolved target: _ZN2QT16QDialogButtonBox16setCenterButtonsEb
// Target address:  0x8D81F0
// GOT/IAT slot:    0x8A34C0
// Slot symbol:     _ZN2QT16QDialogButtonBox16setCenterButtonsEb_ptr
// Target type:     _QWORD(QT::QDialogButtonBox *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT16QDialogButtonBox16setCenterButtonsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT16QDialogButtonBox16setCenterButtonsEb via GOT/IAT indirection
    return _ZN2QT16QDialogButtonBox16setCenterButtonsEb(/* forwarded args */);
}

