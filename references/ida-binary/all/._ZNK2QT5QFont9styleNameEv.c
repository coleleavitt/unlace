// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1163B0
// Name:            ._ZNK2QT5QFont9styleNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1163B0 jmp     cs:_ZNK2QT5QFont9styleNameEv_ptr
//
// Resolved target: _ZNK2QT5QFont9styleNameEv
// Target address:  0x8D6620
// GOT/IAT slot:    0x8A1E78
// Slot symbol:     _ZNK2QT5QFont9styleNameEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont9styleNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont9styleNameEv via GOT/IAT indirection
    return _ZNK2QT5QFont9styleNameEv(/* forwarded args */);
}

