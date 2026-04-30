// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1151F0
// Name:            ._ZN2QT5QFont12setPixelSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1151F0 jmp     cs:_ZN2QT5QFont12setPixelSizeEi_ptr
//
// Resolved target: _ZN2QT5QFont12setPixelSizeEi
// Target address:  0x8D5B28
// GOT/IAT slot:    0x8A1598
// Slot symbol:     _ZN2QT5QFont12setPixelSizeEi_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT5QFont12setPixelSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont12setPixelSizeEi via GOT/IAT indirection
    return _ZN2QT5QFont12setPixelSizeEi(/* forwarded args */);
}

