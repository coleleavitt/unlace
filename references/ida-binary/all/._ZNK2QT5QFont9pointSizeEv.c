// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1138D0
// Name:            ._ZNK2QT5QFont9pointSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1138D0 jmp     cs:_ZNK2QT5QFont9pointSizeEv_ptr
//
// Resolved target: _ZNK2QT5QFont9pointSizeEv
// Target address:  0x8D4AD0
// GOT/IAT slot:    0x8A0908
// Slot symbol:     _ZNK2QT5QFont9pointSizeEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont9pointSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont9pointSizeEv via GOT/IAT indirection
    return _ZNK2QT5QFont9pointSizeEv(/* forwarded args */);
}

