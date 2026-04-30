// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C80
// Name:            ._ZN2QT10QBoxLayout10setSpacingEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C80 jmp     cs:_ZN2QT10QBoxLayout10setSpacingEi_ptr
//
// Resolved target: _ZN2QT10QBoxLayout10setSpacingEi
// Target address:  0x8D57C8
// GOT/IAT slot:    0x8A12E0
// Slot symbol:     _ZN2QT10QBoxLayout10setSpacingEi_ptr
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout10setSpacingEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout10setSpacingEi via GOT/IAT indirection
    return _ZN2QT10QBoxLayout10setSpacingEi(/* forwarded args */);
}

