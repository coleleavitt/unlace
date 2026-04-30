// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F70
// Name:            ._ZN2QT5QFont12setPointSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F70 jmp     cs:_ZN2QT5QFont12setPointSizeEi_ptr
//
// Resolved target: _ZN2QT5QFont12setPointSizeEi
// Target address:  0x8D44C8
// GOT/IAT slot:    0x8A0458
// Slot symbol:     _ZN2QT5QFont12setPointSizeEi_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT5QFont12setPointSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont12setPointSizeEi via GOT/IAT indirection
    return _ZN2QT5QFont12setPointSizeEi(/* forwarded args */);
}

