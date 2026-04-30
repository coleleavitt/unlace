// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113950
// Name:            ._ZN2QT5QFont12setUnderlineEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113950 jmp     cs:_ZN2QT5QFont12setUnderlineEb_ptr
//
// Resolved target: _ZN2QT5QFont12setUnderlineEb
// Target address:  0x8D4B20
// GOT/IAT slot:    0x8A0948
// Slot symbol:     _ZN2QT5QFont12setUnderlineEb_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT5QFont12setUnderlineEb(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont12setUnderlineEb via GOT/IAT indirection
    return _ZN2QT5QFont12setUnderlineEb(/* forwarded args */);
}

